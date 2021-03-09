#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
	Nodo *pila=NULL;
	
	int dato;
	cout<<"digite un numero: ";
	cin>>dato;
	
	agregarPila(pila,dato);
	
	cout<<"digite un numero: ";
	cin>>dato;
	
	agregarPila(pila,dato);
	
	cout<<"\nSacando los elemento de la pila: ";
	while(pila?=){
		
	}
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = pila;
	pila = nuevoNodo;
	
	cout<<"elemento "<<n<<" agregado a la pila"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	pila=aux->dato;
	pila = aux->siguiente;
	delet aux;
}
