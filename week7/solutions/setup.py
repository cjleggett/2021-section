from cs50 import SQL
import os
import csv

# Delete and recreate the database to reset
os.remove("harvard.db")
open("harvard.db", "a").close()

db = SQL("sqlite:///harvard.db")

def main():
    setup_tables()
    load_people()
    load_courses()
    load_students()
    load_instructors()

# Create tables for people, courses, students, and instructors
def setup_tables():
    # Create people table:
    db.execute(
    """
    CREATE TABLE people (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        first TEXT NOT NULL,
        last TEXT NOT NULL
    )
    """)

    # Create courses table:
    db.execute(
    """
    CREATE TABLE courses (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        code TEXT NOT NULL,
        title TEXT NOT NULL
    )
    """)

    # Create students table:
    db.execute(
    """
    CREATE TABLE students (
        person_id INTEGER NOT NULL,
        course_id INTEGER NOT NULL
    )
    """)

    # Create instructors table:
    db.execute(
    """
    CREATE TABLE instructors (
        person_id INTEGER NOT NULL,
        course_id INTEGER NOT NULL
    );
    """)

# Load people from people.csv:
def load_people():
    with open("people.csv") as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            db.execute(
                """
                INSERT INTO people (first, last)
                VALUES (?, ?)
                """,
                row["first"],
                row["last"]
            )

# Load people from people.csv:
def load_courses():
    with open("courses.csv") as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            db.execute(
                """
                INSERT INTO courses (code, title)
                VALUES (?, ?)
                """,
                row["code"],
                row["title"]
            )

# takes in first and last name and gets id
def id_by_name(first, last):
    student_ids = db.execute(
        """
        SELECT id
        FROM people
        WHERE first = ? AND 
                last = ?
        """,
        first,
        last
    )
    return student_ids[0]["id"]

# takes in first and last name and gets id
def id_by_code(code):
    course_ids = db.execute(
        """
        SELECT id
        FROM courses
        WHERE code = ?
        """,
        code
    )
    return course_ids[0]["id"]

# Loads in student-course relationships
def load_students():
    with open("students.csv") as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            student_id = id_by_name(row["first"], row["last"])
            course_id = id_by_code(row["code"])
            db.execute(
                """
                INSERT INTO students (person_id, course_id)
                VALUES (?, ?)
                """,
                student_id,
                course_id
            )

# Load in instructor-course relationships
def load_instructors():
    with open("instructors.csv") as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            teacher_id = id_by_name(row["first"], row["last"])
            course_id = id_by_code(row["code"])
            db.execute(
                """
                INSERT INTO instructors (person_id, course_id)
                VALUES (?, ?)
                """,
                teacher_id,
                course_id
            )
main()