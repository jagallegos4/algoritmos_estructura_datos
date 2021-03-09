#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void intercambio(float *, float *);

int main(){
	
	float num1 = 20.8, num2= 6.54;
	
	cout<<"primer numero: "<<num1<<endl;
	cout<<"segundo numero: "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"\n\nDespues: \n\n";
	
	cout<<"nuevo N1: "<<num1<<endl;
	cout<<"nuevo n2: "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambio(float *dirN1, float *dirN2){
	float aux;
	
	aux=*dirN1;
	*dirN1=*dirN2;
	*dirN2=aux;
}
