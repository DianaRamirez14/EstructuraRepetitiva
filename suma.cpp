	// Elaborar un algoritmo que encuentre la suma de los primeros N términos de la sucesión de FIBONACCI. Ésta se genera empezando por los números 0 y 1 y calculando cada nuevo miembro como la suma de los dos miembros precedentes de la sucesión, así: 0 1 1 2 3 5 8 13


#include <iostream>
using namespace std;

int main() {
  int N, suma, an, sig,  i;
sig = 1 ;
an = 0;

cout << "¿Cuantos numero desea sumar?" << endl; 
cin >> N ;

if (N == 0) {
cout << "El resultado es: " << an << endl;  
    return 0; 
} 
  
if (N == 1) {
cout << "El resultado es: " << an << endl;  
    return 0; 
}

if (N == 2) {
cout << "El resultado es: " << sig << endl;  
    return 0; 
  }
  
if (N >= 3){

 

  
   for (  i = 3;  i <=N; i++ )
    {
      suma = (an+sig)  ;   
      an = sig;
      sig = suma; 

 }
}
  cout << "El resultado es: " << suma << endl;
  return 0; 
}