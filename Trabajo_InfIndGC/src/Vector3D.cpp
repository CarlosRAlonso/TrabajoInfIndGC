#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D(float xv,float yv, float zv)
{
	x=xv;
	y=yv;
	z=zv;
}


Vector3D::~Vector3D(void)
{
}

float Vector3D::modulo()
{
	return (float)sqrt(x*x+y*y+z*z);
}

float Vector3D::argumentox()
{
	return (float)atan2(y,x);
}

float Vector3D::argumentoz()
{
	return (float)atan2(y,z);
}

Vector3D Vector3D::Unitario()
{
	Vector3D retorno(x,y,z);			//Copia el vector original
	float mod=modulo();				//Devuelve el modulo del vector original	
	if(mod>0.00001)
	{
		retorno.x/=mod;
		retorno.y/=mod;
		retorno.z/=mod;
	}
	return retorno;
}

Vector3D Vector3D::operator - (Vector3D &v)
{
	Vector3D res;
	res.x=x-v.x;
	res.y=y-v.y;
	res.z=z-v.z;
	return res;
}

Vector3D Vector3D::operator + (Vector3D &v)
{
	Vector3D res;
	res.x=x+v.x;
	res.y=y+v.y;
	res.z=z+v.z;
	return res;
}

float Vector3D::operator * (Vector3D &v){
	float res;
	res=x*v.x+y*v.y+z*v.z;
	return res;
}

Vector3D Vector3D::operator * (float factor){
	Vector3D res;
	res.x=x*factor;
	res.y=y*factor;
	res.z=z*factor;
	return res;
}
Vector3D *Vector3D::SetCoordenadas(float x_c,float y_c, float z_c)
{
		x=x_c;
		y=y_c;
		z=z_c;
		return this;
}