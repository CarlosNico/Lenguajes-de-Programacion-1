#include<iostream>
#include <string.h>

using namespace std;

int main() {
    string apellidoP;
    string apellidoM;
    string nombre;
    string anN;
    string mes;
    string dia;
    
    cout <<"Ingrese su Nombre: "; 
    getline(cin>>ws, nombre);
    
    cout <<"Ingrese su apellido Paterno: "; 
    getline(cin>>ws, apellidoP);

    cout <<"Ingrese su apellido Materno, de no tener poner X: "; 
    getline(cin>>ws, apellidoM);
    
    cout <<"Ingrese su dia de nacimiento: "; 
    getline(cin>>ws, dia);
    
    cout <<"Ingrese su mes de nacimiento: "; 
    getline(cin>>ws, mes);
    
    cout <<"Ingrese su Año de nacimiento: "; 
    getline(cin>>ws, anN);
    
    
    string apellido2(apellidoP,0,2);
    
    string apellidoM2(apellidoM,0,1);
    
    string nombre2(nombre,0,1);
    
    string anN2(anN,2,2);


    string RFC = apellido2 + apellidoM2 + nombre2 + anN2 + mes + dia;
    
 for (int i = 0; i < RFC.length(); i++) {

    RFC[i] = toupper(RFC[i]);
  }
    cout <<"RFC: " << RFC << endl;

    
    return 0;
}