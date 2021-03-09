#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int hallarMax(int *, int);

int main(){
	const int n=5;
	
	int numero[n]={3,6,1,10,2};
	
	cout<<"numero mayor: "<<hallarMax(numero,n)<<endl;
	
	
	getch();
	return 0;
}

int hallarMax(int *dirVec, int n){
	
	int max=0;
	
	for(int i=0;i<n;i++){
		if(*(dirVec+i)>max){
			max=*(dirVec+i);
		}
		
	}
	return max;
}
