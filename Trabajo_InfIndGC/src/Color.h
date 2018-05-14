#pragma once
#include "glut.h"

typedef unsigned char Byte;
class Color
{
public:
	//Atributos
	Byte red, green, blue;

	//Constructor
	Color(Byte r=255, Byte g=255,Byte b=255);
	
	~Color(void);

	//Metodos
	void DefineColor(Byte _r=255, Byte _v=255, Byte _a=255)
	{
		red=_r;green=_v;blue=_a;
	}
	void SetColor();
};

