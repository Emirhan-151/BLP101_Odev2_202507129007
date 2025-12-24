#include <iostream>
using namespace std;

int main() {
    
    int taban;
    int us;
    int cevap=1;
    cout << "Taban sayisini giriniz : "<<endl<<"Sayi = ";
    cin >>taban;
    cout << "Us sayisini giriniz : "<<endl<<"Sayi = ";
    cin >>us;
    for(int i=1; i<=us; i++){
        cevap=cevap * taban;
    }

    cout <<"...................."<<endl<<"Cevap : " << cevap ;
    return 0;
}                           