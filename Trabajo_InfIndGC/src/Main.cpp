#include "glut.h"
#include "math.h"
#include "Mundo.h"

#define PI 3.141592
//los callback, funciones que seran llamadas automaticamente por la glut
//cuando sucedan eventos
//NO HACE FALTA LLAMARLAS EXPLICITAMENTE
void OnDraw(void); //esta funcion sera llamada para dibujar
void OnTimer(int value); //esta funcion sera llamada cuando transcurra una temporizacion
void OnKeyboardDown(unsigned char key, int x, int y); //cuando se pulse una tecla	
void processSpecialKeys(int key, int xx, int yy);

float camara_x_ojo=0.0F;
float camara_y_ojo=650.0F;
float camara_z_ojo=0.00000001F;
float posicion_y_x_ojo=0.0F;
float posicion_y_y_ojo=0.0F;
float posicion_y_z_ojo=0.0F;
Mundo mundo;

// angle of rotation for the camera direction
float angle=0.0;
// actual vector representing the camera's direction
float lx=0.0f,lz=-1.0f;
// XZ position of the camera
float x=-175.0f,y=1.0f, z=42.12f;


int main(int argc,char* argv[])
{

	//Inicializar el gestor de ventanas GLUT
	//y crear la ventana
	glutInit(&argc, argv);
	glutInitWindowSize(2048,1024);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Circuito");

	//habilitar luces y definir perspectiva
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);	
	glMatrixMode(GL_PROJECTION);
	gluPerspective( 40.0, 800/600.0f, 0.1, 1500);

	//Registrar los callbacks
	glutDisplayFunc(OnDraw);
	glutTimerFunc(25,OnTimer,0);//le decimos que dentro de 25ms llame 1 vez a la funcion OnTimer()
	glutKeyboardFunc(OnKeyboardDown);
	glutSpecialFunc(processSpecialKeys);
	mundo.Inicializa();

	// OpenGL init
	glEnable(GL_DEPTH_TEST);
	
	//pasarle el control a GLUT,que llamara a los callbacks
	glutMainLoop();	

	return 0;   
}
void OnDraw(void)
{
	//Borrado de la pantalla	
   	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Para definir el punto de vista
	glMatrixMode(GL_MODELVIEW);	
	glLoadIdentity();


	//cámaras
	/*gluLookAt(camara_x_ojo,camara_y_ojo, camara_z_ojo,  // posicion del ojo
		posicion_y_x_ojo , posicion_y_x_ojo, posicion_y_x_ojo,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)   
	*/

	gluLookAt(	x, y, z,
			x+lx, y,  z+lz,
			0.0f, 1.0f,  0.0f);
			

	//aqui es donde hay que poner el código de dibujo
	mundo.Dibuja();
	

	//no borrar esta linea ni poner nada despues
	glutSwapBuffers();
}
void OnKeyboardDown(unsigned char key, int x_t, int y_t)
{
	switch (key){
	case 'w':
		y+=0.1;
		break;
	case 's':
		y-=0.1;
		break;
	}
	
	// Ultima línea SIEMPRE!!!
	glutPostRedisplay();
}
void processSpecialKeys(int key, int xx, int yy) {

	float fraction = 2.0f;

	switch (key) {
		case GLUT_KEY_LEFT :
			angle -= 0.1f;
			lx = sin(angle);
			lz = -cos(angle);
			break;
		case GLUT_KEY_RIGHT :
			angle += 0.1f;
			lx = sin(angle);
			lz = -cos(angle);
			break;
		case GLUT_KEY_UP :
			x += lx * fraction;
			z += lz * fraction;
			break;
		case GLUT_KEY_DOWN :
			x -= lx * fraction;
			z -= lz * fraction;
			break;
	}
}

void OnTimer(int value)
{
		
	//DOS ULTIMAS LINEAS OBLIGATORIAS
	glutTimerFunc(25,OnTimer,0);
	glutPostRedisplay();
}