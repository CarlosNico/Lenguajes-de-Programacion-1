#include<iostream>

using namespace std;

int main(){

   float num1,num2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
  
   cout<<"Ingresar el primer numero:";
   cin>>num1;
   
   cout<<"Ingresar el segundo numero:";
   cin>>num2;

   if (num1 >=31 && num2 <=30){
   
     suma = num1 + num2;
     resta = num1 - num2;
     multiplicacion = num1 * num2;
     division = num1 / num2;
     
    cout<<"\nLos numeros ingresados cumplen con los requisitos." <<endl;
    cout<<"La resultado de la suma es:" << suma <<endl;
    cout<<"La resultado de la resta es:" << resta <<endl;
    cout<<"La resultado de la multiplicacion es:" << multiplicacion <<endl;
    cout<<"La resultado de la division es:" << division <<endl;
    }
    else if (num1 <=31){
      cout<<"\nEl primer numero ingresado no cumple con los requisitos" <<endl; 
      cout<<"El primer numero debe ser igual o mayor de 31" <<endl; 
    }
    else if (num2 >=30){
       cout<<"\nEl segundo numero ingresado no cumple con los requisitos" <<endl;
       cout<<"El segundo numero debe ser igual o menor de 30" <<endl; 
    }

   return 0;
}