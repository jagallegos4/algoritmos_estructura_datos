#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirElementos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *,int);
int nElementos, *elemento;

int main(){
	
	pedirElementos();
	ordenarArreglo(elemento, nElementos);
	mostrarArreglo(elemento, nElementos);
	delete[] elemento;
	getch();
	return 0;
}

void pedirElemento(){
	cout<<"ingrese el numero de elementos: ";
	cin>>nElementos;
	
	elemento = new int[nElementos];
	for(int i=0;i<nElementos;i++){
		cout<<"ingrese el elemento "<<i+1<< ": ";
		cin>> *(elemento+i);
	}
}

void ordenarArreglo(int *elemento, int nElementos){
	int aux;
	for(int i;i<nElementos;i++){
		for(int j=0;j<nElementos;j++){
			if(*(elemento+j)>*(elemento+j+1)){
				aux=*(elemento+j);
				*(elemento+j)=*(elemento+j+1);
				*(elemento+j+1)=aux;
			}
		}
	}
}

void mostrarArreglo(int *elemento, int nElementos){
	cout<<"el arreglo ordenado es: "<<endl;
	for(int i;i<nElementos;i++){
		cout<<*(elemento+i)<<" ";
	}
}
