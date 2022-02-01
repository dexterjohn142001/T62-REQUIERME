#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	bool color_change=false;
	for(int x=0;x<=4;x+=1) {

	for(int y=0;y<=4;y+=1) {
		if(color_change) {
		glColor3f(1.0,1.0,1.0);
		color_change=!color_change;
		}
		else{

		glColor3f(0.0,0.0,0.0);
		color_change=!color_change;
		}

	glBegin(GL_QUADS);
	glVertex2i(x,y);
	glVertex2i(x,y+1);
	glVertex2i(x+1,y+1);
	glVertex2i(x+1,y);

	glEnd();
	glFlush();

	}
	}
}

void init (void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 4.0, 0.0,4.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600,600);
glutInitWindowPosition (200,200);
glutCreateWindow ("Checkers Board");
init ();
glutDisplayFunc(display);
glutMainloop ();
return 0;
}
