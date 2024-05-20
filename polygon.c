#include<GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);
    glLineWidth(2.5f);
    glBegin(GL_TRIANGLES);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(0.2,0.2);
	//glVertex2f(-0.5,0.5);

	glColor3f(1.0,0.0,1.0);
	glVertex2f(-0.2,0.2);
	//glVertex2f(-0.5,-0.5);

	glColor3f(1.0,1.0,0.0);
	glVertex2f(-0.2,-0.2);
	//glVertex2f(0.5,-0.5);


	glColor3f(0.0,1.0,0.0);
	glVertex2f(0.2,-0.2);
	//glVertex2f(0.5,0.5);

    glEnd();

    /*glBegin(GL_POLYGON);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(0.5,0.5);
	//glVertex2f(-0.5,0.5);

	glColor3f(1.0,5.0,1.0);
	glVertex2f(-0.5,0.5);
	//glVertex2f(-0.5,-0.5);

	glColor3f(1.0,1.0,0.0);
	glVertex2f(-0.5,-0.5);
	//glVertex2f(0.5,-0.5);


	glColor3f(0.0,1.0,0.0);
	glVertex2f(0.5,-0.5);
	//glVertex2f(0.5,0.5);*/

    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(0.5,0.5);
	//glVertex2f(-0.5,0.5);

	glColor3f(1.0,5.0,1.0);
	glVertex2f(-0.5,0.5);
	//glVertex2f(-0.5,-0.5);

	glColor3f(1.0,1.0,0.0);
	glVertex2f(-0.5,-0.5);
	//glVertex2f(0.5,-0.5);


	glColor3f(0.0,1.0,0.0);
	glVertex2f(0.5,-0.5);
	//glVertex2f(0.5,0.5);

    glEnd();
    glFlush();
}



int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutCreateWindow("simple openGL program");
	glClearColor(1.0,1.0,0.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
