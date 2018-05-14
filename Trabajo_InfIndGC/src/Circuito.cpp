#include "Circuito.h"


Circuito::Circuito(void)
{
}


Circuito::~Circuito(void)
{
}

void Circuito::Inicializa()
{
	track.Inicializa();
}

void Circuito::Dibuja()
{
	//Background
	fondo.Dibuja();
	track.Dibuja();
	
}