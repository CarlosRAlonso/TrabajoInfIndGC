#include "Curva.h"


Curva::Curva(void)
{
}


Curva::~Curva(void)
{
}

void Curva::SetTrackData(float *radioint,float *radioext, Vector3D *centro,
		int *angentrada, int *angsalida)
{
	track.DefineColor(80,80,80);
	radiot1=*radioint;
	radiot2=*radioext;
	centroarco=*centro;
	angtrackint=*angentrada;
	angtrackext=*angsalida;
}
void Curva::SetParedIntData(float *radioparedint,int *angentrada,int *angsalida)
{
	pared.DefineColor(255,255,255);
	radiopint=*radioparedint;
	angpint_e=*angentrada;
	angpint_o=*angsalida;
}

void Curva::SetParedExtData(float *radioparedext,int *angentrada,int *angsalida)
{
	pared.DefineColor(255,255,255);
	radiopext=*radioparedext;
	angpext_e=*angentrada;
	angpext_o=*angsalida;
}

void Curva::DibujaPista()
{
	float x,z;
	float y=0.001f; //la altura del suelo es constante
	track.SetColor();
	glTranslatef(centroarco.x,centroarco.y,centroarco.z);
	glDisable(GL_LIGHTING);
	glBegin(GL_QUAD_STRIP);
	for(int i=angtrackint;i<=angtrackext;i++){
		//Radio interior
		x=radiot1*cos(i*3.14/180);
		z=radiot1*sin(i*3.14/180);
		glVertex3f(x,y,z);

		//Radio exterior
		x=radiot2*cos(i*3.14/180);
		z=radiot2*sin(i*3.14/180);
		glVertex3f(x,y,z);
	}
	//vuelta a cero
	glEnd();
	glEnable(GL_LIGHTING);
	glTranslatef(-centroarco.x,-centroarco.y,-centroarco.z);
}

void Curva::DibujaPared()
{
	float x,z;
	float y=0.001f; //la altura del suelo es constante
	pared.SetColor();
	glTranslatef(centroarco.x,centroarco.y,centroarco.z);
	glDisable(GL_LIGHTING);
	//Pared interior
	glBegin(GL_QUAD_STRIP);
	for(int i=angpint_e;i<=angpint_o;i++){
		//Mismo radio distinta altura
		x=radiopint*cos(i*3.14/180);
		z=radiopint*sin(i*3.14/180);
		glVertex3f(x,y,z);				//vertice a la altura del suelo
		glVertex3f(x,ALTURA_PARED,z);	//vertice a la altura de la pared
	}
	glEnd();

	//Pared exterior
	glBegin(GL_QUAD_STRIP);
	for(int i=angpext_e;i<=angpext_o;i++){
		//Mismo radio distinta altura
		x=radiopext*cos(i*3.14/180);
		z=radiopext*sin(i*3.14/180);
		glVertex3f(x,y,z);				//vertice a la altura del suelo
		glVertex3f(x,ALTURA_PARED,z);	//vertice a la altura de la pared
	}
	glEnd();

	glEnable(GL_LIGHTING);
	//vuelta a cero
	glTranslatef(-centroarco.x,-centroarco.y,-centroarco.z);
}