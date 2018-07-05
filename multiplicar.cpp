#include <iostream>

using std::cout;
using std::endl;

int multiplicacion(int mula, int mulb);

int cuadrado(int cuada);

int main(){

  int a = 17;

  int b = 31;

  int multiplicacionVar = multiplicacion(a, b); 

  int cuadradoVar = cuadrado(a);

  cout<< "La multiplicacion entre " << a << " y " << b << " es " << multiplicacionVar << endl; 

  cout<< "" <<endl;

  cout<< "El cuadrado de " << a << " es " << cuadradoVar << endl; 



  return 0;

}


int multiplicacion(int mula, int mulb){

  int mulc = mula * mulb;
  
  return mulc;

}

int cuadrado(int cuada){

  int cuadc = cuada * cuada;
  
  return cuadc;

}