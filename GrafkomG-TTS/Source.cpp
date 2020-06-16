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

	glBegin(GL_POLYGON);
	glVertex2f(50, 210);
	glVertex2f(120, 210);
	glVertex2f(120, 500);
	glVertex2f(50, 500);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(50, 390);
	glVertex2f(50, 460);
	glVertex2f(0, 460);
	glVertex2f(0, 390);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(40, 470);
	glVertex2f(40, 550);
	glVertex2f(-40, 470);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(40, 220);
	glVertex2f(40, 380);
	glVertex2f(0, 380);
	glVertex2f(0, 220);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(130, 500);
	glVertex2f(200, 500);
	glVertex2f(200, 380);
	glVertex2f(130, 380);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(200, 380);
	glVertex2f(200, 450);
	glVertex2f(500, 450);
	glVertex2f(500, 380);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(290, 500);
	glVertex2f(360, 500);
	glVertex2f(360, 450);
	glVertex2f(290, 450);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(210, 500);
	glVertex2f(280, 500);
	glVertex2f(280, 460);
	glVertex2f(210, 460);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(370, 500);
	glVertex2f(500, 500);
	glVertex2f(500, 460);
	glVertex2f(370, 460);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(370, 140);
	glVertex2f(370, 370);
	glVertex2f(440, 370);
	glVertex2f(440, 140);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(440, 370);
	glVertex2f(440, 300);
	glVertex2f(500, 300);
	glVertex2f(500, 370);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(450, 300);
	glVertex2f(520, 300);
	glVertex2f(520, 220);
	glVertex2f(450, 220);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(440, 210);
	glVertex2f(500, 210);
	glVertex2f(500, 140);
	glVertex2f(440, 140);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(370, 0);
	glVertex2f(440, 0);
	glVertex2f(440, 130);
	glVertex2f(370, 130);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(440, 130);
	glVertex2f(440, 60);
	glVertex2f(500, 60);
	glVertex2f(500, 130);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2f(450, 50);
	glVertex2f(500, 50);
	glVertex2f(500, -20);
	glVertex2f(450, -20);
	glEnd();

	glFlush();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 500, 0);
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