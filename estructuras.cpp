#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    struct datosPersona
    {
        string nombre;
        char  apellido;
        int   edad;
       
    };
 
    datosPersona *persona = new datosPersona[10];
 
    for (int i=1; i<6;i++)
    {
        cout << "Dime el nombre de la persona " << i << endl;
		cin >> persona[i].nombre;
      //  cout << "Dime el apellido de la persona " << i << endl;
       // cin >> persona[i].apellido;
       // cout << "Dime su edad " << i << endl;
        //cin >> persona[i].edad;
        
 
    }
 
    
 
    return 0;
}
