#include <iostream>
using namespace std;

int main(){
    int girdi;
    cout <<"toplamlarini istediginiz sayi = ";
    cin >> girdi;
    int toplam=0;

    for(int i=0; i<=girdi; i++ ){   //kullanıcının girdiği değere gelene kadar i değerini 1 arttıran döngü.
    
        toplam=toplam+i;
        
    }
    cout << "Toplam = " << toplam <<endl;
    return(0);

}