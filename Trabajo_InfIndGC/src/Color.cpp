#include "Color.h"
#include "glut.h"


Color::Color(Byte r, Byte g,Byte b)
{
	red=r;
	green=g;
	blue=b;
}


Color::~Color(void)
{
}

void Color::SetColor()
{
	glColor3ub(red, green, blue);
}
