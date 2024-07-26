#include <GL/glut.h>
#include <stdio.h>
int x0 =80, y0 = 70, x1 = 150, y1 = 180;
void setPixel(int x,int y){
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
glFlush();
}
void breshamline(int x0,int y0,int x1,int y1)
{
int dx= x1-x0;
int dy = y1-y0;
int d=2*dy-dx;
int y=y0;
for(int x=x0;x<=x1;x++)
{
setPixel(x,y);
if(d>0)
{
y++;
d=d+(2*(dy-dx));
}else{
d=d+2*-dy;
}
}
}
void display(){
glClear(GL_COLOR_BUFFER_BIT);
breshamline(x0,y0,x1,y1);
glFlush();
}
void init(){
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,0.0);
gluOrtho2D(0.5,200.0,0.0,200.0);
}
int main(int argc,char**argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(400,400);
glutInitWindowPosition(100,100);
glutCreateWindow("4MT21CS146");
init();
glutDisplayFunc(display);
glutMainLoop();
return(0);
}
