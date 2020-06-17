#include <iostream>
#include <GL/freeglut.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_TRIANGLES); // 1
	glVertex2f(40, -50);
	glVertex2f(40, 50);
	glVertex2f(-50, 50);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_TRIANGLES);
	glVertex2f(30, -40);
	glVertex2f(30, 40);
	glVertex2f(-50, 40);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(20, -30);
	glVertex2f(20, 30);
	glVertex2f(-50, 30);
	glEnd();

	glColor3f(0.0, 0.0, 0.0); // 2
	glBegin(GL_POLYGON);
	glVertex2f(0, 60);
	glVertex2f(0, 130);
	glVertex2f(120, 130);
	glVertex2f(120, 60);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(0, 70);
	glVertex2f(0, 120);
	glVertex2f(110, 120);
	glVertex2f(110, 70);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(0, 80);
	glVertex2f(0, 110);
	glVertex2f(100, 110);
	glVertex2f(100, 80);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);// 3
	glBegin(GL_POLYGON); 
	glVertex2f(50, 60);
	glVertex2f(120, 60);
	glVertex2f(120, 0);
	glVertex2f(50, 0);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(60, 70);
	glVertex2f(110, 70);
	glVertex2f(110, 0);
	glVertex2f(60, 0);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(70, 80);
	glVertex2f(100, 80);
	glVertex2f(100, 0);
	glVertex2f(70, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON); //4
	glVertex2f(130, 0);
	glVertex2f(280, 0);
	glVertex2f(280, 130);
	glVertex2f(130, 130);
	glEnd();

	glColor3ub(238, 1, 3); // 4merah
	glBegin(GL_QUADS);
	glVertex2f(140, 0);
	glVertex2f(190, 0);
	glVertex2f(190, 120);
	glVertex2f(140, 120);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(190, 120);
	glVertex2f(270, 120);
	glVertex2f(270, 70);
	glVertex2f(190, 70);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(220, 70);
	glVertex2f(270, 70);
	glVertex2f(270, 0);
	glVertex2f(220, 0);
	glEnd();

	glColor3ub(255, 185, 1);// 4kuning
	glBegin(GL_QUADS);
	glVertex2f(150, 0);
	glVertex2f(180, 0);
	glVertex2f(180, 110);
	glVertex2f(150, 110);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(180, 110);
	glVertex2f(260, 110);
	glVertex2f(260, 80);
	glVertex2f(180, 80);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(230, 80);
	glVertex2f(260, 80);
	glVertex2f(260, 0);
	glVertex2f(230, 0);
	glEnd();

	glColor3f(1, 1, 1); // 4putih
	glBegin(GL_QUADS);
	glVertex2f(200, 0);
	glVertex2f(210, 0);
	glVertex2f(210, 60);
	glVertex2f(200, 60);
	glEnd();

	glColor3f(0, 0, 0);// 5
	glBegin(GL_POLYGON);
	glVertex2f(290, 0);
	glVertex2f(360, 0);
	glVertex2f(360, 370);
	glVertex2f(290, 370);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(300, 0);
	glVertex2f(350, 0);
	glVertex2f(350, 360);
	glVertex2f(300, 360);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(310, 0);
	glVertex2f(340, 0);
	glVertex2f(340, 350);
	glVertex2f(310, 350);
	glEnd();

	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON); // 6
	glVertex2f(290, 300);
	glVertex2f(290, 370);
	glVertex2f(130, 370);
	glVertex2f(130, 300);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(300, 310);
	glVertex2f(300, 360);
	glVertex2f(140, 360);
	glVertex2f(140, 310);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(310, 320);
	glVertex2f(310, 350);
	glVertex2f(150, 350);
	glVertex2f(150, 320);
	glEnd();

	glColor3f(0, 0, 0); // 7
	glBegin(GL_POLYGON);
	glVertex2f(130, 300);
	glVertex2f(200, 300);
	glVertex2f(200, 220);
	glVertex2f(130, 220);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(140, 310);
	glVertex2f(190, 310);
	glVertex2f(190, 230);
	glVertex2f(140, 230);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(150, 320);
	glVertex2f(180, 320);
	glVertex2f(180, 240);
	glVertex2f(150, 240);
	glEnd();

	glColor3f(0, 0, 0); //8
	glBegin(GL_POLYGON);
	glVertex2f(200, 290);
	glVertex2f(200, 220);
	glVertex2f(280, 220);
	glVertex2f(280, 290);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(190, 280);
	glVertex2f(190, 230);
	glVertex2f(270, 230);
	glVertex2f(270, 280);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(180, 270);
	glVertex2f(180, 240);
	glVertex2f(260, 240);
	glVertex2f(260, 270);
	glEnd();

	glColor3f(0, 0, 0); //9
	glBegin(GL_POLYGON);
	glVertex2f(290, 140);
	glVertex2f(290, 210);
	glVertex2f(0, 210);
	glVertex2f(0, 140);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(310, 150);
	glVertex2f(310, 200);
	glVertex2f(0, 200);
	glVertex2f(0, 150);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(310, 160);
	glVertex2f(310, 190);
	glVertex2f(0, 190);
	glVertex2f(0, 160);
	glEnd();

	glColor3f(0, 0, 0); //10
	glBegin(GL_POLYGON);
	glVertex2f(50, 210);
	glVertex2f(120, 210);
	glVertex2f(120, 500);
	glVertex2f(50, 500);
	glEnd();
	
	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(60, 200);
	glVertex2f(110, 200);
	glVertex2f(110, 500);
	glVertex2f(60, 500);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(70, 190);
	glVertex2f(100, 190);
	glVertex2f(100, 500);
	glVertex2f(70, 500);
	glEnd();

	glColor3f(0, 0, 0); //11
	glBegin(GL_POLYGON);
	glVertex2f(50, 390);
	glVertex2f(50, 460);
	glVertex2f(0, 460);
	glVertex2f(0, 390);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(60, 400);
	glVertex2f(60, 450);
	glVertex2f(0, 450);
	glVertex2f(0, 400);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(70, 410);
	glVertex2f(70, 440);
	glVertex2f(0, 440);
	glVertex2f(0, 410);
	glEnd();

	glColor3f(0, 0, 0); //12
	glBegin(GL_TRIANGLES);
	glVertex2f(40, 470);
	glVertex2f(40, 550);
	glVertex2f(-40, 470);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_TRIANGLES);
	glVertex2f(30, 480);
	glVertex2f(30, 550);
	glVertex2f(-30, 480);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_TRIANGLES);
	glVertex2f(20, 490);
	glVertex2f(20, 550);
	glVertex2f(-20, 490);
	glEnd();

	glColor3f(0, 0, 0); //13
	glBegin(GL_POLYGON);
	glVertex2f(40, 220);
	glVertex2f(40, 380);
	glVertex2f(0, 380);
	glVertex2f(0, 220);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(30, 230);
	glVertex2f(30, 370);
	glVertex2f(0, 370);
	glVertex2f(0, 230);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(20, 240);
	glVertex2f(20, 360);
	glVertex2f(0, 360);
	glVertex2f(0, 240);
	glEnd();

	glColor3f(0, 0, 0); //14
	glBegin(GL_POLYGON);
	glVertex2f(130, 500);
	glVertex2f(200, 500);
	glVertex2f(200, 380);
	glVertex2f(130, 380);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(140, 500);
	glVertex2f(190, 500);
	glVertex2f(190, 390);
	glVertex2f(140, 390);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(150, 500);
	glVertex2f(180, 500);
	glVertex2f(180, 400);
	glVertex2f(150, 400);
	glEnd();

	glColor3f(0, 0, 0); //15
	glBegin(GL_POLYGON);
	glVertex2f(200, 380);
	glVertex2f(200, 450);
	glVertex2f(500, 450);
	glVertex2f(500, 380);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(190, 390);
	glVertex2f(190, 440);
	glVertex2f(500, 440);
	glVertex2f(500, 390);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(180, 400);
	glVertex2f(180, 430);
	glVertex2f(500, 430);
	glVertex2f(500, 400);
	glEnd();

	glColor3f(0, 0, 0); //16
	glBegin(GL_POLYGON);
	glVertex2f(290, 500);
	glVertex2f(360, 500);
	glVertex2f(360, 450);
	glVertex2f(290, 450);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(300, 500);
	glVertex2f(350, 500);
	glVertex2f(350, 440);
	glVertex2f(300, 440);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(310, 500);
	glVertex2f(340, 500);
	glVertex2f(340, 430);
	glVertex2f(310, 430);
	glEnd();

	glColor3f(0, 0, 0); //17
	glBegin(GL_QUADS);
	glVertex2f(210, 500);
	glVertex2f(280, 500);
	glVertex2f(280, 460);
	glVertex2f(210, 460);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(220, 500);
	glVertex2f(270, 500);
	glVertex2f(270, 470);
	glVertex2f(220, 470);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(230, 500);
	glVertex2f(260, 500);
	glVertex2f(260, 480);
	glVertex2f(230, 480);
	glEnd();

	glColor3f(0, 0, 0); //18
	glBegin(GL_QUADS);
	glVertex2f(370, 500);
	glVertex2f(500, 500);
	glVertex2f(500, 460);
	glVertex2f(370, 460);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(380, 500);
	glVertex2f(500, 500);
	glVertex2f(500, 470);
	glVertex2f(380, 470);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(390, 500);
	glVertex2f(500, 500);
	glVertex2f(500, 480);
	glVertex2f(390, 480);
	glEnd();

	glColor3f(0, 0, 0); //19
	glBegin(GL_QUADS);
	glVertex2f(370, 140);
	glVertex2f(370, 370);
	glVertex2f(440, 370);
	glVertex2f(440, 140);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(380, 150);
	glVertex2f(380, 360);
	glVertex2f(430, 360);
	glVertex2f(430, 150);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(390, 160);
	glVertex2f(390, 350);
	glVertex2f(420, 350);
	glVertex2f(420, 160);
	glEnd();

	glColor3f(0, 0, 0); //20
	glBegin(GL_QUADS);
	glVertex2f(440, 370);
	glVertex2f(440, 300);
	glVertex2f(500, 300);
	glVertex2f(500, 370);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(430, 360);
	glVertex2f(430, 310);
	glVertex2f(500, 310);
	glVertex2f(500, 360);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(420, 350);
	glVertex2f(420, 320);
	glVertex2f(500, 320);
	glVertex2f(500, 350);
	glEnd();

	glColor3f(0, 0, 0); //21
	glBegin(GL_QUADS);
	glVertex2f(450, 300);
	glVertex2f(520, 300);
	glVertex2f(520, 220);
	glVertex2f(450, 220);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(460, 310);
	glVertex2f(510, 310);
	glVertex2f(510, 230);
	glVertex2f(460, 230);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(470, 320);
	glVertex2f(500, 320);
	glVertex2f(500, 240);
	glVertex2f(470, 240);
	glEnd();

	glColor3f(0, 0, 0); //22
	glBegin(GL_QUADS);
	glVertex2f(440, 210);
	glVertex2f(500, 210);
	glVertex2f(500, 140);
	glVertex2f(440, 140);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(430, 200);
	glVertex2f(500, 200);
	glVertex2f(500, 150);
	glVertex2f(430, 150);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(420, 190);
	glVertex2f(500, 190);
	glVertex2f(500, 160);
	glVertex2f(420, 160);
	glEnd();

	glColor3f(0, 0, 0); //23
	glBegin(GL_QUADS);
	glVertex2f(370, 0);
	glVertex2f(440, 0);
	glVertex2f(440, 130);
	glVertex2f(370, 130);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(380, 0);
	glVertex2f(430, 0);
	glVertex2f(430, 120);
	glVertex2f(380, 120);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(390, 0);
	glVertex2f(420, 0);
	glVertex2f(420, 110);
	glVertex2f(390, 110);
	glEnd();

	glColor3f(0, 0, 0); //24
	glBegin(GL_QUADS);
	glVertex2f(440, 130);
	glVertex2f(440, 60);
	glVertex2f(500, 60);
	glVertex2f(500, 130);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(430, 120);
	glVertex2f(430, 70);
	glVertex2f(500, 70);
	glVertex2f(500, 120);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(420, 110);
	glVertex2f(420, 80);
	glVertex2f(500, 80);
	glVertex2f(500, 110);
	glEnd();

	glColor3f(0, 0, 0); //25
	glBegin(GL_QUADS);
	glVertex2f(440, 50);
	glVertex2f(500, 50);
	glVertex2f(500, -20);
	glVertex2f(440, -20);
	glEnd();

	glColor3ub(238, 1, 3);
	glBegin(GL_QUADS);
	glVertex2f(430, 40);
	glVertex2f(500, 40);
	glVertex2f(500, -10);
	glVertex2f(430, -10);
	glEnd();

	glColor3ub(255, 185, 1);
	glBegin(GL_QUADS);
	glVertex2f(420, 30);
	glVertex2f(500, 30);
	glVertex2f(500, 0);
	glVertex2f(420, 0);
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
	glutCreateWindow("Batik Toraja - 672018274");
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}