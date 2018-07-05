#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;



int main(){
  int i, numeroal;
  int contador = 0;
  for(i=0;i<1000;i++){
    numeroal = rand() % 100 + 1;
    if(numeroal%2 == 0 && numeroal < 89 &&contador < 25)
    {
      cout << i << " " << numeroal << endl; 
      contador ++; 
    }	 	 
  }	

  return 0;
}



