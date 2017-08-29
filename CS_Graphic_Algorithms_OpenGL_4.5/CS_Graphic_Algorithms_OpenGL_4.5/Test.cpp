
#include <windows.h>
#include <freeglut.h>

void display() {

	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(5);
	glColor3b(123, 131, 112);
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.0);
	glVertex2f(-0.9, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.9, 0.0);
	glVertex2f(-0.9, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.9, 0.4);
	glVertex2f(-0.5, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.5, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.5, 0.4);
	glVertex2f(-0.7, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.7, 0.8);
	glVertex2f(-0.9, 0.4);
	glBegin(GL_LINES);    // Roof //
	glVertex2f(-0.7, 0.8);
	glVertex2f(-0.2, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.2, 0.8);
	glVertex2f(0.0, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.4);
	glVertex2f(-0.5, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.4);
	glVertex2f(0.0, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.4);
	glVertex2f(0.0, 0.0);
	glEnd();
	glBegin(GL_LINES); // Door 1 //
	glVertex2f(-0.75, 0.0);
	glVertex2f(-0.75, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.75, 0.3);
	glVertex2f(-0.65, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.65, 0.3);
	glVertex2f(-0.65, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.75, 0.3);
	glVertex2f(-0.65, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.75, 0.3);
	glVertex2f(-0.65, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.65, 0.3);
	glVertex2f(-0.75, 0.0);
	glEnd();
	glBegin(GL_LINES); // Door 2 //
	glVertex2f(-0.3, 0.0);
	glVertex2f(-0.3, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.3, 0.3);
	glVertex2f(-0.2, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.2, 0.3);
	glVertex2f(-0.2, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.3, 0.3);
	glVertex2f(-0.2, 0.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.2, 0.3);
	glVertex2f(-0.3, 0.0);
	glEnd();
	glBegin(GL_LINES); // Chimney //
	glVertex2f(-0.4, 0.8);
	glVertex2f(-0.4, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.4, 0.9);
	glVertex2f(-0.3, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.3, 0.9);
	glVertex2f(-0.3, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.4, 0.8);
	glVertex2f(-0.2, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(-0.3, 0.8);
	glVertex2f(-0.1, 0.4);
	glEnd();
	

	glFlush();

}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Hut");
	glutInitWindowSize(800, 1080);
	glutInitWindowPosition(100, 100);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
