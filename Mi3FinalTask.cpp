#include <GL\glut.h>

void display();
void reshape(int,int);
void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
}
int main(int argc,char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(200,100);
	glutInitWindowSize(400,400);
	glutCreateWindow("WINDOWS");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();

	glutMainLoop();

}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();



	//draw
	glBegin(GL_QUADS );

	glColor3f(1.0f,1.0f,1.0f);
	glVertex2f(-7.0,3.0);
	glVertex2f(0.-7,0.-3);
	glVertex2f(-3.0,0.0);
	glVertex2f(0.0,0.0);

	glColor3f(0.0f,0.0f,1.0f);
	glVertex2f(-7.0,3.0);
	glVertex2f(-3.0,0.0);
	glVertex2f(7.0,0.0);
	glVertex2f(7.0,3.0);

	glColor3f(1.0f,0.0f,0.0f);
	glVertex2f(-3.0,0.0);
	glVertex2f(-7.0,-3.0);
	glVertex2f(7.0,-3.0);
	glVertex2f(7.0,0.0);
	glEnd();

	glPointSize(10);
	glBegin(GL_POINTS);

	
	glColor3f(1.0f,1.0f,0.0f);
	glVertex2f(-6.54,2.02);
	glVertex2f(-6,0);
	glVertex2f(-6.54,-2.02);
	glVertex2f(-4,0);
	glEnd();



	glFlush();


}
void reshape(int w,int h)
{
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-9,9,-9,9);
	glMatrixMode(GL_MODELVIEW);
}
