#include "Recta.h"

Recta::Recta(void)
{
}

Recta::~Recta(void)
{
}
void Recta::SetTrackData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
		Vector3D *puntofinal1,Vector3D *puntofinal2)
{
	limite1inicio=*puntoinicio1; limite2inicio=*puntoinicio2;
	limite1final=*puntofinal1; limite2final=*puntofinal2;
	track.DefineColor(80,80,80);
}

void Recta::SetParedIntData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
	Vector3D *puntofinal1,Vector3D *puntofinal2)
{
	limparedintinicio1=*puntoinicio1; limparedintinicio2=*puntoinicio2;
	limparedintfinal1=*puntofinal1; limparedintfinal2=*puntofinal2;
	pared.DefineColor(255,255,255);
}

void Recta::SetParedExtData(Vector3D *puntoinicio1,Vector3D *puntoinicio2,
	Vector3D *puntofinal1,Vector3D *puntofinal2)
{
	limparedextinicio1=*puntoinicio1; limparedextinicio2=*puntoinicio2;
	limparedextfinal1=*puntofinal1; limparedextfinal2=*puntofinal2;
	pared.DefineColor(255,255,255);
}

void Recta::DibujaPista()
{
	track.SetColor();
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
		glVertex3f(limite1inicio.x,limite1inicio.y,limite1inicio.z);
		glVertex3f(limite2inicio.x,limite2inicio.y,limite2inicio.z);
		glVertex3f(limite2final.x,limite2final.y,limite2final.z);
		glVertex3f(limite1final.x,limite1final.y,limite1final.z);
	glEnd();
	glEnable(GL_LIGHTING);
}


void Recta::DibujaPared()
{
	pared.SetColor();
	glDisable(GL_LIGHTING);
	//Pared interior
	glBegin(GL_POLYGON);
		glVertex3f(limparedintinicio1.x,limparedintinicio1.y,limparedintinicio1.z);
		glVertex3f(limparedintinicio2.x,ALTURA_PARED,limparedintinicio2.z);
		glVertex3f(limparedintfinal2.x,ALTURA_PARED,limparedintfinal2.z);
		glVertex3f(limparedintfinal1.x,limparedintfinal1.y,limparedintfinal1.z);
	glEnd();
	//Pared exterior
	glBegin(GL_POLYGON);
		glVertex3f(limparedextinicio1.x,limparedextinicio1.y,limparedextinicio1.z);
		glVertex3f(limparedextinicio2.x,ALTURA_PARED,limparedextinicio2.z);
		glVertex3f(limparedextfinal2.x,ALTURA_PARED,limparedextfinal2.z);
		glVertex3f(limparedextfinal1.x,limparedextfinal1.y,limparedextfinal1.z);
	glEnd();
	glEnable(GL_LIGHTING);
}

