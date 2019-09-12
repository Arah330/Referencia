#include <iostream>
#include <conio.h>

using namespace std;

 
struct revista{
	char titulo[20];
	int edicion;
	char autor[20];
	float fecha;
	
};
struct persona{
    char nombre[20];
    char apellido[15];
    int   edad;
    struct revista sub;
};
 
int main(int argc,char** argv){
	
	struct persona p1[10];
	struct persona*apuntador;
	
	apuntador=&p1[0];
    for (int i=0; i<10; i++){
    	
        cout <<"Dime el nombre de la persona ";
		cin.getline(p1[i].nombre,20);
	
	}

    cout<<endl<<"nombre guardado: "<<apuntador->nombre;
    
	
	getch();
	return 0;
}
    
 
    

