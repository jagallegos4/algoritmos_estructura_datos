#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
};

void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void mostrarArbol(Nodo *,int);
void mostrarNivel(Nodo *,int);
int altura(Nodo *);
Nodo *arbol = NULL;


int main (){
	
	menu();
	
	getch();
	return 0;
}

Nodo *crearNodo(int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;	
	nuevoNodo->izq = NULL;
	
	return nuevoNodo;
}

void insertarNodo(Nodo *&arbol,int n){
	if(arbol==NULL){
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	}
	else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n);
		}
		else{
			insertarNodo(arbol->der,n);
		}
	}
}

void menu(){
	int dato, opt,contador=0,nivel;
	do{
		cout<<"\n---Menu---"<<endl;
		cout<<"1. Insertar un nodo en el arbol"<<endl;
		cout<<"2. Mostrar arbol completo"<<endl;
		cout<<"3. Mostrar arbol por nivel"<<endl;
		cout<<"4. Mostrar la altura del arbol"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Digite una opcion: ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol, dato);
				cout<<"\n";
				
			break;
			case 2:
				system("cls");
				cout<<"\nArbol por niveles:\n\n";
				mostrarArbol(arbol, contador);
				cout<<"\n";
			break;
			case 3:
				system("cls");
				cout<<"Ingrese el nivel a mostrar: ";
				cin>>nivel;
				cout<<"Nivel: "<<nivel<<endl;
				cout<<"Nodos del nivel "<<nivel<<": ";
				mostrarNivel(arbol,nivel);
				cout<<"\n";
			break;
			case 4:
				cout<<"La altura del arbol es: "<<altura(arbol)<<endl;
			break;
		}
	}while(opt!=5);
}

void mostrarArbol(Nodo *arbol,int cont){
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);	
		}
}

void mostrarNivel(Nodo *arbol,int n){
	if(arbol!=NULL){
		if(n==0){
			cout<<arbol->dato<<" ";
			}
			else{
				mostrarNivel(arbol->izq,n-1);
				mostrarNivel(arbol->der,n-1);			
			}
	}
	else{
		return;
	}
}

int altura(Nodo *arbol){
	if(arbol!=NULL){
		int izq = altura(arbol->izq) + 1;
		int der = altura(arbol->der) + 1;
		if(izq > der)
			return izq;
		return der;
	}
	return -1;
}
