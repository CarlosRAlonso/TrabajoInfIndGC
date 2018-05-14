#pragma once
#define ALTURA_PARED 1.0													//angpint_e	-> angulo de entrada de la pared interior 	
#include "math.h"															//angpint_o	-> angulo de salida de la pared interior 
#include "Vector3D.h"														//angpext_e	-> angulo de entrada de la pared exterior	
#include "Color.h"															//angpext_o	-> angulo de salida de la pared exterior 
class Curva
{	
	//atributos
	Vector3D centroarco;
	float radiot1,radiot2,radiopext,radiopint;
	int angtrackint,angtrackext,angpint_e,angpint_o, angpext_e,angpext_o;
	Color pared,track;
public:
	Curva(void);
	~Curva(void);
public:
	//metodos
	void SetTrackData(float *radioint,float *radioext, Vector3D *centro,
		int *angentrada, int *angsalida);
	void SetParedIntData(float *radioparedint,int *angentrada,int *angsalida);
	void SetParedExtData(float *radioparedext,int *angentrada,int *angsalida);
	void DibujaPista();
	void DibujaPared();
};

