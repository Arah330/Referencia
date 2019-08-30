#include<iostream>
#include<conio.h>
using namespace std;

int main (int ,char**argv){
	int numeros[10], *p;
	int mayor=0;
	
	cout << "Introduzca 10 enteros... " << endl;
	
		for (int i=0; i<10; i++) {
		cout <<"Introduzca el numero  ["<<i<<"]:";
		cin >> numeros[i];
		}
		
		for(int j=0;j<10;j++){
		p=&numeros[j];
		}
		
		cout<<"Direccion de mayor arreglo "<<p<<endl;
		cout<<"El numero mayor de la lista es : "<<*p<<endl;
		
		
					
		
		return 0;
}
