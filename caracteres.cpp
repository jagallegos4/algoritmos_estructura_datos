#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <string>

using namespace std;

struct Nodo{
	string dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, string);
void mostrarLista(Nodo *);
void menu();
Nodo *lista=NULL;

int main(){

	menu();
	getch();
	return 0;
}

void insertarLista(Nodo *&lista, string dat){

	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->string = dat;

	Nodo *aux1 = lista;
	Nodo *aux2;

	while((aux1 != NULL)&&(aux1->dato[50]<dat)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
		lista=nuevoNodo;
	}
	else{
		aux2->siguiente=nuevoNodo;
	}
	nuevoNodo->siguiente=aux1;

	cout<<"Elemento ingresado correctamente."<<endl;
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual=lista;

	while(actual!=NULL){
		cout<<actual->dato<<" ";
		actual=actual->siguiente;
	}
}

void menu(){

	int opt;
	char datos[50];

	 do{
	 	cout<<"\n****MENU****"<<endl;
	 	cout<<"1. Insertar dato a la lista"<<endl;
	 	cout<<"2. Mostrar lista"<<endl;
	 	cout<<"3. Salir"<<endl;
	 	cout<<"Ingrese una opcion: ";
		cin>>opt;

		switch(opt){
		case 1:
			fflush(stdin);
			cout<<"Ingrese un dato: ";
			cin.getline(datos,50,'\n');
			//cin>>datos;
			insertarLista(lista,datos[50]);
			break;
		case 2:
			system("cls");
			cout<<"La lista es: "<<endl;
			mostrarLista(lista);
			cout<<"\n";
		}
	 }while(opt!=3);
}
