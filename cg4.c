#include <GL/glut.h>
#include <math.h>
GLfloat vertices[] = {
-0.5f, -0.5f,
0.5f, -0.5f,
0.5f, 0.5f,
-0.5f, 0.5f
};
GLfloat tx = 0.0f; // Translation in x
GLfloat ty = 0.0f; // Translation in y
GLfloat angle = 0.0f; // Rotation angle
GLfloat sx = 1.0f; // Scaling in x
GLfloat sy = 1.0f; // Scaling in y
void display() {
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
// Apply transformations
glTranslatef(tx, ty, 0.0f);
glRotatef(angle, 0.0f, 0.0f, 1.0f);
glScalef(sx, sy, 1.0f);
// Draw the rectangle
glBegin(GL_POLYGON);
for (int i = 0; i < 4; ++i) {
glVertex2f(vertices[i*2], vertices[i*2+1]);
}
glEnd();
glPopMatrix();
glutSwapBuffers();
}
void keyboard(unsigned char key, int x, int y) {
switch (key) {
case 'w':
ty += 0.1f; // Move up
break;
case 's':
ty -= 0.1f; // Move down
break;
case 'a':
tx -= 0.1f; // Move left
break;
case 'd':
tx += 0.1f; // Move right
break;
case 'q':
angle += 5.0f; // Rotate counter-clockwise
break;
case 'e':
angle -= 5.0f; // Rotate clockwise
break;
case 'z':
sx += 0.1f; // Scale up in x
break;
case 'x':
sx -= 0.1f; // Scale down in x
break;
case 'c':
sy += 0.1f; // Scale up in y
break;
case 'v':
sy -= 0.1f; // Scale down in y
break;
case 27: // Escape key
exit(0);
break;
}
glutPostRedisplay();
}
void init() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE |
GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(100, 100);
glutCreateWindow("4MT21CS146");
init();
glutDisplayFunc(display);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}
