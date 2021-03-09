#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	delete[] calif; //libera espacio utilizado anteriormente
	
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"digite el numero de calificacions: ";
	cin>>numCalif;
	
	calif=new int[numCalif];//reserva memoria para el numero de calificaciones ingresadas por el usuario
	
	for(int i=0;i<numCalif;i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\n\nNotas del usuario: \n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
