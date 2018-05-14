#pragma once

#define ALTURA_PARED 1.0

#include "Vector3D.h"
#include "Color.h"


class Recta
{
	//atributos heredados
	
	
	Vector3D limite1inicio,limite1final,limite2inicio,limite2final;
	Vector3D limparedintinicio1,limparedintinicio2,limparedintfinal1,limparedintfinal2;
	Vector3D limparedextinicio1,limparedextinicio2,limparedextfinal1,limparedextfinal2;
	Color pared, track;
public:
	Recta();
	~Recta(void);

	//metodos
	void SetTrackData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
		Vector3D *puntofinal1,Vector3D *puntofinal2);
	void SetParedIntData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
		Vector3D *puntofinal1,Vector3D *puntofinal2);
	void SetParedExtData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
		Vector3D *puntofinal1,Vector3D *puntofinal2);
	void DibujaPista();
	void DibujaPared();
};

