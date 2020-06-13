#include <GL/glut.h>
#include <Math.h>
#define PI 3.14159265f

GLfloat ballRadius = 0.02f;
int triangles = 100;
GLfloat angle;

void init()
{
    glClearColor(0.23, 0.37, 0.80, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(350, 100);
    glutCreateWindow("TTS_GRAFKOM_H_672018072");
    init();
    glutMainLoop();
}