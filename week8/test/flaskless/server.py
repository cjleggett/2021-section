# Implements a web server

import os

from http.server import BaseHTTPRequestHandler, HTTPServer

class HTTPServer_RequestHandler(BaseHTTPRequestHandler):

    def do_GET(self):

        # Parse request
        route, args = parse(self.path)

        # Render template
        if route == "/":
            status = 200
            html = render_template("templates/index.html", args)
        elif route == "/greet":
            status = 200
            html = render_template("templates/greet.html", args)
        else:
            status = 404
            html = render_template("templates/404.html", args)

        # Respond with status code
        self.send_response(status)

        # Respond with headers
        self.send_header("Content-type", "text/html")
        self.end_headers()

        # Respond with body
        self.wfile.write(html.encode())


def main():
    port = 8080
    httpd = HTTPServer(("0.0.0.0", port), HTTPServer_RequestHandler)
    print(f"Running on https://{os.environ.get('C9_HOSTNAME')}:{port}")
    print("Press CTRL+C to quit")
    httpd.serve_forever()


def parse(path):
    """
    Parses a request's path and returns a list of [route, args],
    where route is a string and args is a dictionary
    mapping a request's parameters to their values.
    """

    # TODO


def render_template(template, args):
    """
    Reads template into memory, replacing any placeholders
    therein with the values from args, thereafter returning
    the resulting string.
    """

    # TODO


if __name__ == "__main__":
    main()
