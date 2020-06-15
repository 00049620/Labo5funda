#include "iostream"
using namespace std;

bool es_bisiesto(anio){
    return ((anio % 4) == 0 &&  (anio % 100) ! =0) || ((anio % 400)==0);
}

int main(){
    int dia, mes, anio;
    char barra;
    cin>> dia >> barra >> mes >> barra >> anio;
    dia++;
    if (dia > dias_mes(mes, anio)){
        dia=1;
        mes ++;
        if(mes > 12){
            mes = 1;
            anio++;
        }
    }
 cout << dia << '/' << mes << '/' <<anio <<endl;
}
int dias_mes(int mes){
    int dias =31;
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11 ){
        dias =30;
    }else if (mes == 2){
        if(es_bisiesto(anio)){
            dias = 29;
        }else{
             dias = 28;
        }
    }
    return dias;
}

