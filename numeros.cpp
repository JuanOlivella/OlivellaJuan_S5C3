#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;



int main(){
  int i, numeroal;
  int contador = 0;
  int lista[1000];

  cout << "La lista de numeros que cumplen la condicion es: " << endl;

  for(i=0;i<1000;i++){
    numeroal = rand() % 100 + 1;
    lista[i]=numeroal; 
    
    if(numeroal%2 == 0 && numeroal < 89 &&contador < 25)
    {
      contador ++;
      cout << contador << ". " << numeroal << endl; 
       
    }	 	 
  }
  
  cout<< "" <<endl;

  cout << "La lista de numeros completos es: " << endl;
  
  for(i=0;i<1000;i++){
    cout << i << ". " << lista[i] << endl;
  }	

  return 0;
}



