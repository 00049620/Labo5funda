#include "iostream"
#include "math.h"
#include "conio.h"
using namespace std;

bool bsiesto(int an){
    if(an % 400 == 0){
        return true;
    }
    if(an % 4 == 0 || an % 100 == 1){
        return true;
    }else{
        return false;
    }else{
        return false;
    }
}
int main(){
    int vis = 0;
    printf("Ingrese el a%co que necesita saber si es o no bisiesto:", -92);
    cin>>vis;
    printf("El a%co es ", -92);

    if(bisiesto(vis)){
        cout<<"es bisiesto.";
    }else{
        cout<<"no es bisiesto.";
    }
    return 0;
}