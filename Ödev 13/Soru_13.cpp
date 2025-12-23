#include <iostream>
using namespace std;

int main(){
    int n;
    int fakt=1;
    
    do {
        cout <<"Faktoriyel'ini istediginiz sayi = ";
        cin >> n;
        if (n<0){
            cout<<"Negatif sayi girilemez!"<<endl;
        }      
    }
     while (n < 0);
        for (int i = 1; i <= n; i++) {
        fakt = fakt * i;
    }
    cout << "Faktoriyel = " << fakt <<endl;
    return(0);
}