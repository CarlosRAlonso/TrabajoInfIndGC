#pragma once
#include "Pista.h"
#include "glut.h"
#include "Background.h"

class Circuito
{
	//atributos
	Pista track;
	Background fondo;
	//constructor
public:
	Circuito(void);
	~Circuito(void);

	//metodos
	void Inicializa();
	void Dibuja();
};

