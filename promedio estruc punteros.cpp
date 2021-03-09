#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Alumno{
	char nombre[50];
	int edad;
	float promedio;
}alumno[3], *punteroAlumno = alumno;

void pedirDatos();
void mejorPromedio(Alumno *);
void mostrarDatos(Alumno *);

int main(){
	pedirDatos();
	mejorPromedio(punteroAlumno);
//	mostrarDatos(punteroAlumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite el nombre: ";
		cin.getline((punteroAlumno+i)->nombre,50,'\n');
		cout<<"ingrese la edad: ";
		cin>>(punteroAlumno+i)->edad;
		cout<<"ingrese el promedio: ";
		cin>>(punteroAlumno+i)->promedio;
		cout<<"\n";
	}
}

void mejorPromedio(Alumno *punteroAlumno){
	float mayor=0.0;
	int pos=0;
	for(int i=0;i<3;i++){
		if((punteroAlumno+i)->promedio > mayor){
			mayor = (punteroAlumno+i)->promedio;
			pos=i;
		}
	}
	cout<<"\nEl mejor promedio es: \n";
	cout<<"nombre: "<<(punteroAlumno+pos)->nombre<<endl;
	cout<<"edad: "<<(punteroAlumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(punteroAlumno+pos)->promedio<<endl;
}
