  #include "iostream"
  using namespace std;

  int main(){
      int Num1, Num2, Mcd, residuo;
      cout<< "Calcularemos el maximo comun divisor de dos numeros." <<endl;
      cout<< "Ingresemos el primer numero: ";
      cin >> Num1;   
        cout<< "Ingresemos el segundo numero: ";
      cin >> Num2;   


      do{
          residuo = Num1 % Num2;
          if(residuo !=0)
          {
              Num1 = Num2;
              Num2 = residuo;
          }else{
              Mcd = Num2;
          }
      }while (residuo !=0);
      cout <<Mcd;

      return 0;
    
     }