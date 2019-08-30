#include<iostream>
using namespace std;
int arreglo[]={1,2,3,5};
int *p;
int main (int ,char**argv){
	p=&arreglo[3];
	cout<<"arreglo direct"<<p<<endl;
	cout<<"arreglo valor"<<*p<<endl;
	return 0;
	
}
