#pragma once
#include "Recta.h"
#include "Curva.h"



class Pista
{
	//Atributos
	Recta recta1,recta2,recta3,recta4,recta5,recta6;
	Curva curva1,curva2,curva3,curva4,curva5,curva6,curva7,
		curva8,curva9,curva10,curva11,curva12,curva13;
public:
	Pista(void);
	~Pista(void);

	//Metodos
	void Inicializa();
	void Dibuja();
};

