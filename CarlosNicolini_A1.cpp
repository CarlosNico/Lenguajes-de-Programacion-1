#include <iostream>

 int main(){
  
int edad;
  
std::cout << "Digita tu edad:";
std::cin >> edad;
  
 
     if (edad >=18 && edad <=65){
         std::cout << "Eres mayor de edad y te estas tardando en trabajar." << std::endl;
     } 
     else if
             (edad >65){
         std::cout << "Eres muy mayor, debes estar jubilado." << std::endl;
     }
     else {
             std::cout << "Eres menor de edad, mejor termina tus estudios." << std::endl;
     }
     return 0;
}
