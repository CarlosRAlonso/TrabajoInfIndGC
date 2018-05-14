#pragma once
#include "Circuito.h"
#include "glut.h"

class Mundo
{
	//atributos
	Circuito circuitoCanada;

public:
	Mundo(void);
	~Mundo(void);

	//Metodos
	void Inicializa();
	void Dibuja();
};