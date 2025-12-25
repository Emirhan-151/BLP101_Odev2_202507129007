#include <iostream>
using namespace std;

int main(){
    int ort;
    int sayi;
    cout<< "Kac adet sayi gireceksiniz ?" <<endl<<" = ";
    cin >> sayi;
    int sayilar[sayi]={};
    for (int i=0; i<sayi; i++){
        cout<< "Sayiyi giriniz : ";
        cin >> sayilar[i];
        ort=(ort+sayilar[i]);
        
    }
    ort=ort/sayi;
    cout <<"...................."<<endl<< "Ortalama : "<< ort <<endl;
return(0);
}