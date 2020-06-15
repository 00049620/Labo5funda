#include "iostream"
using namespace std;

int main(){
    int h, m, s;
    char p;
    cout<<"Reloj digital , Muestra la hora que digite mas un segundo.!" <<endl;
    cout<<"De favor ingrese la hora en formato 00:00:00" <<endl;
    cin>> h >> p >> m >>  p >> s;
    s = s +1;
    if (s>=60){
        s = 0;
        m =+1;
        if( m >= 60){
            m = 0;
            h = h+1;
            if(h >=24){
                h = 0;
            }
        }
    }
    cout <<"La hora seria:" <<endl;
    if (h<10){
        cout << "0" << h;
    }
    else{
        cout<<h;
    }
    cout<<":";
    if (m<10){
        cout<< "0" <<m;
    }else{
        cout <<m;
    }
    cout << ":";

    if(s<10){
        cout << "0" <<s;
    }else{
        cout <<s;
    }
    return 0;
}