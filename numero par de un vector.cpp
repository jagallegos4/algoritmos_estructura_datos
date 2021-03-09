#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[10];
	int *dirNum;
	dirNum=numeros;
	
	for(int i=0;i<10;i++){
		cout<<"Digite un numero " <<i+1<<": ";
		cin>>numeros[i];
	}
	
	dirNum=numeros;	
	
	for(int i=0;i<10;i++){
		if(*dirNum%2==0){
			cout<<"el numero "<<*dirNum<<" es par"<<endl;
			cout<<"posicion "<<dirNum<<endl;
		}
		dirNum++;
	}
	getch();
	return 0;
}
