#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarLista(Nodo *&,int &);
void menu();
Nodo *lista=NULL;
int main(){
	
	menu(); 
	getch();
	return 0;
}

void insertarLista(Nodo *&lista, int n){
	
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL)&&(aux1->dato<n)){
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
	
	int dato, opt;
	 
	 do{
	 	cout<<"\n****MENU****"<<endl;
	 	cout<<"1. Insertar dato a la lista"<<endl;
	 	cout<<"2. Mostrar lista"<<endl;
	 	cout<<"3. Eliminar Lista"<<endl;
	 	cout<<"4. Salir"<<endl;
	 	cout<<"Ingrese una opcion: ";
		cin>>opt;
		
		switch(opt){
		case 1:
			cout<<"Ingrese un dato: ";
			cin>>dato;
			insertarLista(lista,dato);
			break;
		case 2:
			system("cls");
			cout<<"La lista es: "<<endl;
			mostrarLista(lista);
			cout<<"\n";
		case 3:
			while(lista != NULL){
				eliminarLista(lista,dato);
				cout<<dato<<"-> ";
			}
			cout<<"\n";
			//system(pause);
			break;			
		}
	 }while(opt!=4);
}

void eliminarLista(Nodo *&lista ,int &n){
	Nodo *aux = lista;
	n=aux->dato;
	lista = aux->siguiente;
	delete aux;
}
