
#include "Background.h"


Background::Background()
{
	suelo.DefineColor(150,255,150);
	cielo.DefineColor(150,150,255);
}


Background::~Background(void)
{
}

void Background::Dibuja(){
	//suelo
	suelo.SetColor();		//glColor3ub(red, green, blue);
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
		glVertex3f(-650.0f,-0.1f,-650.0f);
		glVertex3f(650.0f,-0.1f,-650.0f);
		glVertex3f(650.0f,-0.1f,650.0f);
		glVertex3f(-650.0f,-0.1f,650.0f);
	glEnd();
		//cielo
	cielo.SetColor();		//glColor3ub(red, green, blue);
	glBegin(GL_POLYGON);
		glVertex3f(-650.0f,650.0f,-650.0f);
		glVertex3f(650.0f,650.0f,-650.0f);
		glVertex3f(650.0f,650.0f,650.0f);
		glVertex3f(-650.0f,650.0f,650.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(-650.0f,-0.1f,650.0f);
		glVertex3f(-650.0f,650.0f,650.0f);
		glVertex3f(650.0f,650.0f,650.0f);
		glVertex3f(650.0f,-0.1f,650.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(-650.0f,-0.1f,650.0f);
		glVertex3f(-650.0f,650.0f,650.0f);
		glVertex3f(-650.0f,650.0f,-650.0f);
		glVertex3f(-650.0f,-0.1f,-650.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(-650.0f,-0.1f,-650.0f);
		glVertex3f(-650.0f,650.0f,-650.0f);
		glVertex3f(650.0f,650.0f,-650.0f);
		glVertex3f(650.0f,-0.1f,-650.0f);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex3f(650.0f,-0.1f,-650.0f);
		glVertex3f(650.0f,650.0f,-650.0f);
		glVertex3f(650.0f,650.0f,650.0f);
		glVertex3f(650.0f,-0.1f,650.0f);
	glEnd();
	glEnable(GL_LIGHTING);
}