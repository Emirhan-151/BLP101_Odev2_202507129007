<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int girdi;
    int fakt=1;
    
    do {
        cout <<"Faktoriyel'ini istediginiz sayi = ";
        cin >> girdi;
        if (girdi<0){
            cout<<"Negatif sayi girilemez!"<<endl;
        }      
    }
     while (girdi < 0);
        for (int i = 1; i <= girdi; i++) {
        fakt = fakt * i;
    }
    cout << "Faktoriyel = " << fakt <<endl;
    return(0);
=======
#include <iostream>
using namespace std;

int main(){
    int girdi;
    int fakt=1;
    
    do {
        cout <<"Faktoriyel'ini istediginiz sayi = ";
        cin >> girdi;
        if (girdi<0){
            cout<<"Negatif sayi girilemez!"<<endl;
        }      
    }
     while (girdi < 0);
        for (int i = 1; i <= girdi; i++) {
        fakt = fakt * i;
    }
    cout << "Faktoriyel = " << fakt <<endl;
    return(0);
>>>>>>> 44c79c3 (Düzeltmeler)
}