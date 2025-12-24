#include <iostream>
using namespace std;

int main(){
    int vize;  
    int final;
    int ortalama;

    cout <<"Vize notunu giriniz : "; //ekrana "Vize notunu giriniz : " yazdırır.
    cin >> vize; //kullanıcıdan girdi alır.    
    cout <<"Final notunu giriniz : "; //ekrana "Final notunu giriniz : " yazdırır.    
    cin >> final; //kullanıcıdan girdi alır.
    
    ortalama = ((vize*40)/100)+((final*60)/100); //not ortalamasını hesaplar.

    cout <<"Harf Notu : ";  //ekrana metin yazdırır.

    if (ortalama>=90)   //ortalama 90 ve üzeri ise...
    {
        cout <<"AA"<< endl; //ekrana "AA" yazdırır.
    } 
    else if (ortalama>=85 && ortalama<=89)  //ortalama 85 ile 89 arasında ise...
    {
        cout <<"BA"<< endl; //ekrana "BA" yazdırır.
    } 
    else if (ortalama>=80 && ortalama<=84) //ortalama 80 ile 84 arasında ise...
    {
        cout <<"BB"<< endl; //ekrana "BB" yazdırır.
    } 
    else if (ortalama>=50 && ortalama<=79) //ortalama 50 ile 79 arasında ise...
    {
        cout <<"Gecer"<< endl; //ekrana "Gecer" yazdırır.
    } 
    else //şart sağlanmıyor ise...
    {
        cout <<"Kaldi"<< endl; //ekrana "Kaldi" yazdırır.
    }

return 0; 
}