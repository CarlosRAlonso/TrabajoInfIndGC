#pragma once
class Vector3D
{
public:
	//atributos
	float x,y,z;
public:
	//Metodos
	Vector3D(float xv=0.0f,float yv=0.0f,float zv=0.0f);
	~Vector3D(void);
	float modulo();					// (2) modulo del vector
	float argumentox();				// (3a) argumento del vector x-y
	float argumentoz();				// (3b) argumento del vector z-y
	Vector3D Unitario();			// (4) devuelve un vector unitario
	Vector3D operator - (Vector3D &); // (5) resta de vectores
	Vector3D operator + (Vector3D &); // (6) suma de vectores
	float operator *(Vector3D &); // (7) producto escalar
	Vector3D operator *(float); // (8) producto por un escalar
	Vector3D *SetCoordenadas(float x_c,float y_c, float z_c);
};

