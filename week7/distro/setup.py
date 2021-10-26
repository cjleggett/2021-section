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
    # Create courses table:
    # Create students table:
    # Create instructors table:

# Load people from people.csv:
def load_people():
    return

# Load people from people.csv:
def load_courses():
    return

# Loads in student-course relationships
def load_students():
    return

# Load in instructor-course relationships
def load_instructors():
    return
main()