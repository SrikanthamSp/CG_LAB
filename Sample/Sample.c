#include<GL/glut.h>
void init(void)
{
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,150.0);
}

void lineSegment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	/*glBegin(GL_LINES);
		glVertex2i(180,15);
		glVertex2i(10,145);
	glEnd();*/
	glBegin(GL_POINTS);
	glVertex2i(5,10);
	glVertex2i(7.5,15);
	glVertex2i(10,20);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("My Program");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();
	//return 0;
}