/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 4 Fecha: 24/enero Materia: 2018
*/

#include <iostream>

using namespace std;

bool primos(int x){
  int divisor = 2, cociente;
  if(x != 2){
    do{
      cociente = x / divisor;
      if(x % divisor == 0){ //no es primo
        return false;
      }
      divisor++;
    }while(cociente >= divisor);
  }
  return true;
}

void RangoPrimos(int x){
  int ZeroN, ZeroP, UnoN, UnoP;
  if(primos(x))//el numero insertado ya es primo
    cout << x << " " << x << endl;
  else{// el numero insertado no es primo
    if(x == 4)
      cout << 3 <<" "<<5<< endl;
    else{
      if(x%6 == 0)
          cout << (x/6)*6-1 << " "<<(x/6)*6+1 << endl;
      else if(x%6 != 0){
        ZeroN = ((x/6))*6-1;//Izquierda
        ZeroP = ((x/6))*6+1;//Izquierda
        UnoN = ((x/6)+1)*6-1;//Derecha
        UnoP = ((x/6)+1)*6+1;//Derecha

        //para saber el limite del lado izquierdo
        if(x - ZeroN < x - ZeroP)
          cout << ZeroN<<" " ;
        else if(x - ZeroN > x - ZeroP)
          cout << ZeroP <<" ";

        //limite de lado derecho
        if(UnoN - x < UnoP - x)
          cout << UnoN <<endl ;
        else if(UnoN - x > UnoP - x )
          cout << UnoP <<endl;
        }
      }
    }
  }

int main(){
  int veces = 0, numero[100];
  cin >> veces;
  for(int i = 0; i < veces; i++){
      cin >> numero[i];
  }
  for(int i = 0; i < veces; i++){
      RangoPrimos(numero[i]);
  }
  return 0;
}
