#include <iostream>


using namespace std;

int main() {

int valor = 3.125;
int hora =40;
float total;
int  trabajo;

cout<<"bienvenido a la empresa en finanzas"<<endl;  
 cout<<"ingrese el numero de horas trabajadas"<<endl;
 cin>>trabajo; 
 
 if (trabajo<= hora){
 	total = trabajo * valor;
 cout<<"su valor a pagar por pasante es de $:"<<" "<<total<<endl;
 
} else{
cout<<"Usted no es pasante"<<endl;
 
}
  
  return 0;
}
