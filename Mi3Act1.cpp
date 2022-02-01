#include <GL/glut.h>

void display();
void reshape(int,int);
void timer(int);

float angle = 0;
int state = 1;

void init()
{
	glClearColor(0.0,0.0,0.0,2.0);
}

int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(200,100);
	glutInitWindowSize(500,500);

	glutCreateWindow ("Basic Animation");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(0,timer,0); 
	init();

	glutMainLoop();

}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	//triangle 1
	glBegin(GL_TRIANGLES);

	glVertex2f(0,8);
	glVertex2f(-3,5);
	glVertex2f(3,5);
	glEnd();

	//triangle 2
	glBegin(GL_TRIANGLES);

	glVertex2f(-3,5);
	glVertex2f(-6,2);
	glVertex2f(0,2);
	glEnd();

	//triangle 3
	glBegin(GL_TRIANGLES);

	glVertex2f(3,5);
	glVertex2f(0,2);
	glVertex2f(6,2);
	glEnd();

	//triangle 4
	glBegin(GL_TRIANGLES);

	glVertex2f(-6,2);
	glVertex2f(-9,-1);
	glVertex2f(-3,-1);

	//triangle 5
	glEnd();glBegin(GL_TRIANGLES);
	glVertex2f(0,2);
	glVertex2f(-3,-1);
	glVertex2f(3,-1);
	glEnd();

	//triangle 6
	glBegin(GL_TRIANGLES);

	glVertex2f(6,2);
	glVertex2f(3,-1);
	glVertex2f(9,-1);
	glEnd();

	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10,10,-10,10);
	glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
	glutPostRedisplay();
	glutTimerFunc(1000/60,timer,0);

	angle+=0.8;
	if(angle>360.0f)
		angle=angle-360.0f;
}