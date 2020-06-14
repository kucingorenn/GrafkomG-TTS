#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_TRIANGLES);
	glVertex2f(40, -50);
	glVertex2f(40, 50);
	glVertex2f(-50, 50);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0, 60);
	glVertex2f(0, 130);
	glVertex2f(120, 130);
	glVertex2f(120, 60);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(50, 60);
	glVertex2f(120, 60);
	glVertex2f(120, 0);
	glVertex2f(50, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(130, 0);
	glVertex2f(280, 0);
	glVertex2f(280, 130);
	glVertex2f(130, 130);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	glVertex2f(200, 0);
	glVertex2f(210, 0);
	glVertex2f(210, 60);
	glVertex2f(200, 60);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(290, 0);
	glVertex2f(360, 0);
	glVertex2f(360, 370);
	glVertex2f(290, 370);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(290, 300);
	glVertex2f(290, 370);
	glVertex2f(130, 370);
	glVertex2f(130, 300);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(130, 300);
	glVertex2f(200, 300);
	glVertex2f(200, 220);
	glVertex2f(130, 220);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(200, 290);
	glVertex2f(200, 220);
	glVertex2f(280, 220);
	glVertex2f(280, 290);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(290, 140);
	glVertex2f(290, 210);
	glVertex2f(0, 210);
	glVertex2f(0, 140);
	glEnd();



	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1000, 1000, 0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Points");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}