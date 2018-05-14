#include "Pista.h"


Pista::Pista(void)
{
}


Pista::~Pista(void)
{
}

void Pista::Inicializa(){

//RECTAS
	//Recta1
	//Track													//Pared exterior											//Pared interior
	Vector3D *pi1t=new Vector3D(-134.5f,0.001f,52.0f);		Vector3D *pi1e=new Vector3D(-131.5f,0.0005f,51.45f);		Vector3D *pi1i=new Vector3D(-143.0f,0.0005f,37.0f);
	Vector3D *pi2t=new Vector3D(-134.5f,0.001f,37.0f);		Vector3D *pi2e=new Vector3D(-131.5f,2.0f,51.45f);			Vector3D *pi2i=new Vector3D(-143.0f,2.0f,37.0f);
	Vector3D *pf1t=new Vector3D(-48.6f,0.001f,52.0f);		Vector3D *pf1e=new Vector3D(-47.55f,0.0005f,51.95f);		Vector3D *pf1i=new Vector3D(-48.0f,0.0005f,37.0f);
	Vector3D *pf2t=new Vector3D(-48.0f,0.001f,37.0f);		Vector3D *pf2e=new Vector3D(-47.55f,2.0f,51.95f);			Vector3D *pf2i=new Vector3D(-48.0f,2.0f,37.0f);
	
	recta1.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta1.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta1.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Recta2
	//Track												//Pared exterior									//Pared interior
	pi1t->SetCoordenadas(-226.71f,0.001f,19.5f);		*pi1e->SetCoordenadas(-178.0f,0.001f,-47.5f);		*pi1i->SetCoordenadas(-167.7f,0.001f,-36.8f);
	pi2t->SetCoordenadas(-236.84f,0.001f,9.0f);			*pi2e->SetCoordenadas(-178.0f,2.0f,-47.5f);			*pi2i->SetCoordenadas(-167.7f,2.0f,-36.8f);
	pf1t->SetCoordenadas(-167.26f,0.001f,-37.12f);		*pf1e->SetCoordenadas(-237.2f,0.001f,9.4f);			*pf1i->SetCoordenadas(-224.95f,0.001f,17.8f);
	pf2t->SetCoordenadas(-177.58f,0.001f,-47.96f);		*pf2e->SetCoordenadas(-237.2f,2.0f,9.4f);			*pf2i->SetCoordenadas(-224.95f,2.0f,17.8f);
	
	recta2.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta2.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta2.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Recta3
	//Track													//Pared exterior									//Pared interior
	*pi1t->SetCoordenadas(-140.64f,0.001f,-36.35f);		*pi1e->SetCoordenadas(-148.28f,0.001f,-49.1f);		*pi1i->SetCoordenadas(-141.7f,0.001f,-36.0f);
	*pi2t->SetCoordenadas(-148.16f,0.001f,-49.33f);		*pi2e->SetCoordenadas(-148.28f,2.0f,-49.1f);		*pi2i->SetCoordenadas(-141.7f,2.0f,-36.0f);
	*pf1t->SetCoordenadas(-119.58f,0.001f,-49.08f);		*pf1e->SetCoordenadas(-130.1f,0.001f,-59.9f);		*pf1i->SetCoordenadas(-119.4f,0.001f,-49.4f);
	*pf2t->SetCoordenadas(-127.06f,0.001f,-61.99f);		*pf2e->SetCoordenadas(-130.1f,2.0f,-59.9f);			*pf2i->SetCoordenadas(-119.4f,2.0f,-49.4f);
	
	recta3.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta3.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta3.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Recta4
	//Track												//Pared exterior									//Pared interior
	*pi1t->SetCoordenadas(3.86f,0.001f,-86.51f);		*pi1e->SetCoordenadas(6.85f,0.001f,-101.2f);		*pi1i->SetCoordenadas(3.92f,0.001f,-86.52f);
	*pi2t->SetCoordenadas(6.94f,0.001f,-101.19f);		*pi2e->SetCoordenadas(6.85f,2.0f,-101.2f);			*pi2i->SetCoordenadas(3.92f,2.0f,-86.52f);
	*pf1t->SetCoordenadas(132.42f,0.001f,-51.07f);		*pf1e->SetCoordenadas(135.8f,0.001f,-65.54f);		*pf1i->SetCoordenadas(132.42f,0.001f,-51.07f);
	*pf2t->SetCoordenadas(135.5f,0.001f,-65.75f);		*pf2e->SetCoordenadas(135.8f,2.0f,-65.54f);			*pf2i->SetCoordenadas(132.42f,2.0f,-51.07f);
	
	recta4.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta4.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta4.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Recta5
	//Track												//Pared exterior								//Pared interior
	*pi1t->SetCoordenadas(166.96f,0.001f,68.67f);		*pi1e->SetCoordenadas(166.7f,0.001f,68.7f);		*pi1i->SetCoordenadas(164.84f,0.001f,53.84f);
	*pi2t->SetCoordenadas(164.83f,0.001f,53.82f);		*pi2e->SetCoordenadas(166.7f,2.0f,68.7f);		*pi2i->SetCoordenadas(164.84f,2.0f,53.84f);
	*pf1t->SetCoordenadas(269.06f,0.001f,55.62f);		*pf1e->SetCoordenadas(269.1f,0.001f,55.6f);		*pf1i->SetCoordenadas(264.84f,0.001f,41.24f);
	*pf2t->SetCoordenadas(264.83f,0.001f,41.23f);		*pf2e->SetCoordenadas(269.1f,2.0f,55.6f);		*pf2i->SetCoordenadas(264.84f,2.0f,41.24f);
	
	recta5.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta5.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta5.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Recta6
	//Track								//Pared exterior					//Pared interior
	*pi1t->SetCoordenadas(-1.82f,0.001f,68.98f);		*pi1e->SetCoordenadas(-3.55f,0.001f,68.98f);		*pi1i->SetCoordenadas(-3.55f,0.001f,54.08f);
	*pi2t->SetCoordenadas(-3.55f,0.001f,54.08f);		*pi2e->SetCoordenadas(-3.55f,2.0f,68.98f);			*pi2i->SetCoordenadas(-3.55f,2.0f,54.08f);
	*pf1t->SetCoordenadas(166.96f,0.001f,68.67f);		*pf1e->SetCoordenadas(166.96f,0.001f,68.67f);		*pf1i->SetCoordenadas(164.93f,0.001f,53.82f);
	*pf2t->SetCoordenadas(164.83f,0.001f,53.82f);		*pf2e->SetCoordenadas(166.96f,2.0f,68.67f);			*pf2i->SetCoordenadas(164.93f,2.0f,53.82f);
	
	recta6.SetTrackData(pi1t,pi2t,pf1t,pf2t);
	recta6.SetParedExtData(pi1e,pi2e,pf1e,pf2e);
	recta6.SetParedIntData(pi1i,pi2i,pf1i,pf2i); 

	//Delete
	//Track				//Pared exterior	//Pared interior
	delete pi1t;		delete pi1e;		delete pi1i;
	delete pi2t;		delete pi2e;		delete pi2i;
	delete pf1t;		delete pf1e;		delete pf1i;
	delete pf2t;		delete pf2e;		delete pf2i;
				
//CURVAS
	//Curva 1
	Vector3D *centro=new Vector3D(-144.16f,0.001f,-99.0f);	int *angtrackint=new int(85);
	float *radio1t=new float(136.0f);						int *angtrackext=new int(108);
	float *radio2t=new float(151.0f);						int *angpint_e=new int(85);
	float *rparedext=new float(151.0f);						int *angpint_o=new int(108);
	float *rparedint=new float(136.0f);						int *angpext_e=new int(85);
															int *angpext_o=new int(108);

	curva1.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva1.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva1.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 2
	*centro->SetCoordenadas(-193.0f, 0.001f, 50.0f);	*angtrackint=(225);
	*radio1t=(5.81f);								*angtrackext=(315);
	*radio2t=(20.81f);								*angpint_e=(222);
	*rparedext=(20.81f);							*angpint_o=(320);
	*rparedint=(6.4f);								*angpext_e=(225);
													*angpext_o=(290);

	curva2.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva2.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva2.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 3
	*centro->SetCoordenadas(-215.0f,0.001f,25.0f);	*angtrackint=(45);
	*radio1t=(12.0f);								*angtrackext=(217);
	*radio2t=(27.0f);								*angpint_e=(45);
	*rparedext=(27.0f);								*angpint_o=(217);
	*rparedint=(12.25f);							*angpext_e=(50);
													*angpext_o=(217);

	curva3.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva3.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva3.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 4
	*centro->SetCoordenadas(-162.0f,0.001f,-27.0f);	*angtrackint=(230);
	*radio1t=(11.34f);								*angtrackext=(300);
	*radio2t=(26.34f);								*angpint_e=(239);
	*rparedext=(26.0f);								*angpint_o=(292);
	*rparedint=(11.34f);							*angpext_e=(231);
													*angpext_o=(302);

	curva4.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva4.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva4.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 5
	*centro->SetCoordenadas(-148.5f,0.001f,-50.5f);	*angtrackint=(28);
	*radio1t=(0.001f);								*angtrackext=(127);
	*radio2t=(16.0f);								*angpint_e=(28);
	*rparedext=(16.0f);								*angpint_o=(127);
	*rparedint=(0.0001f);							*angpext_e=(60);
													*angpext_o=(126);

	curva5.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva5.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva5.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 6
	*centro->SetCoordenadas(-82.7f,0.001f,-18.79f);	*angtrackint=(219);
	*radio1t=(47.75f);								*angtrackext=(282);
	*radio2t=(62.75f);								*angpint_e=(219);
	*rparedext=(62.75f);							*angpint_o=(282);
	*rparedint=(47.80f);							*angpext_e=(221);
													*angpext_o=(284);

	curva6.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva6.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva6.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 7
	*centro->SetCoordenadas(-58.63f,0.001f,-113.24f);	*angtrackint=(54);
	*radio1t=(34.77f);									*angtrackext=(110);
	*radio2t=(49.77f);									*angpint_e=(60);
	*rparedext=(49.77f);								*angpint_o=(107);
	*rparedint=(34.81f);								*angpext_e=(55);
														*angpext_o=(107);

	curva7.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva7.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva7.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 8
	*centro->SetCoordenadas(-2.9f,0.001f,-54.26f);	*angtrackint=(215);
	*radio1t=(32.95f);								*angtrackext=(293);
	*radio2t=(47.95f);								*angpint_e=(213);
	*rparedext=(47.95f);							*angpint_o=(283);
	*rparedint=(32.95f);							*angpext_e=(217);
													*angpext_o=(282);

	curva8.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva8.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva8.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 9
	*centro->SetCoordenadas(128.5f,0.001f,-30.0f);	*angtrackint=(-81);
	*radio1t=(21.28f);								*angtrackext=(-13);
	*radio2t=(36.35f);								*angpint_e=(-81);
	*rparedext=(36.28f);							*angpint_o=(-11);
	*rparedint=(21.48f);							*angpext_e=(-79);
													*angpext_o=(-21);

	curva9.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva9.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva9.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 10
	*centro->SetCoordenadas(267.0f,0.001f,-160.5f);	*angtrackint=(89);
	*radio1t=(157.34f);								*angtrackext=(134);
	*radio2t=(172.34f);								*angpint_e=(89);
	*rparedext=(172.34f);							*angpint_o=(132);
	*rparedint=(157.34);							*angpext_e=(90);
													*angpext_o=(134);

	curva10.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva10.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva10.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 11
	*centro->SetCoordenadas(260.46f,0.001f,26.4f);	*angtrackint=(286);
	*radio1t=(15.46f);								*angtrackext=(453);
	*radio2t=(30.46f);								*angpint_e=(289);
	*rparedext=(30.46f);							*angpint_o=(434);
	*rparedint=(15.46f);							*angpext_e=(284);
													*angpext_o=(434);

	curva11.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva11.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva11.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 12
	*centro->SetCoordenadas(-6.15f,0.001f,31.79f);		*angtrackint=(82);
	*radio1t=(22.44f);									*angtrackext=(140);
	*radio2t=(37.44f);									*angpint_e=(82);
	*rparedext=(37.29f);								*angpint_o=(143);
	*rparedint=(22.44f);								*angpext_e=(86);
														*angpext_o=(137);

	curva12.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva12.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva12.SetParedIntData(rparedint,angpint_e,angpint_o); 

	//Curva 13
	*centro->SetCoordenadas(-47.91f,0.001f,74.87f);	*angtrackint=(-95);
	*radio1t=(22.85f);								*angtrackext=(-45);
	*radio2t=(37.85f);								*angpint_e=(-95);
	*rparedext=(37.85f);							*angpint_o=(-49);
	*rparedint=(22.95f);							*angpext_e=(-91);
													*angpext_o=(-45);

	curva13.SetTrackData(radio1t,radio2t,centro,angtrackint,angtrackext);
	curva13.SetParedExtData(rparedext,angpext_e,angpext_o);
	curva13.SetParedIntData(rparedint,angpint_e,angpint_o); 
	
	//Delete
	delete centro;			delete angtrackint;
	delete radio1t;			delete angtrackext;
	delete radio2t;			delete angpint_e;
	delete rparedext;		delete angpint_o;
	delete rparedint;		delete angpext_e;
							delete angpext_o;
}
	
void Pista::Dibuja(){
//RECTAS
	//Pista							//Pared
	recta1.DibujaPista();			recta1.DibujaPared();
	recta2.DibujaPista();			recta2.DibujaPared();
	recta3.DibujaPista();			recta3.DibujaPared();
	recta4.DibujaPista();			recta4.DibujaPared();
	recta5.DibujaPista();			recta5.DibujaPared();
	recta6.DibujaPista();			recta6.DibujaPared();

//CURVAS
	//Pista							//Pista
	curva1.DibujaPista();			curva1.DibujaPared();
	curva2.DibujaPista();			curva2.DibujaPared();
	curva3.DibujaPista();			curva3.DibujaPared();
	curva4.DibujaPista();			curva4.DibujaPared();
	curva5.DibujaPista();			curva5.DibujaPared();
	curva6.DibujaPista();			curva6.DibujaPared();
	curva7.DibujaPista();			curva7.DibujaPared();
	curva8.DibujaPista();			curva8.DibujaPared();
	curva9.DibujaPista();			curva9.DibujaPared();
	curva10.DibujaPista();			curva10.DibujaPared();
	curva11.DibujaPista();			curva11.DibujaPared();
	curva12.DibujaPista();			curva12.DibujaPared();
	curva13.DibujaPista();			curva13.DibujaPared();
}	
	