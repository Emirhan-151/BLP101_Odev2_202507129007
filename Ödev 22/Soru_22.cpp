#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Yazdirmak istediginiz sayiyi giriniz : "; //Ekrana metin yazdırır.
    cin >> sayi;                     //Kullanıcıdan sayı alır.

    int sayilar[sayi]={};   //sayılar dizisini tanımlar.
    int kareler[sayi]={};   //kareler dizisini tanımlar.
    int kupler[sayi]={};    //kupler dizisini tanımlar.

    for (int i=0; i<sayi; i++){ //girilen sayıya kadar döngü başlatır.
        int sayi2=0;
        sayi2 = i + 1;  //sayi2 değişkenine i+1 değerini atar.      
        sayilar[i]= sayi2;  //sayilar dizisine sayi2 değerini atar.
        kareler[i]= sayi2*sayi2; //kareler dizisine sayi2'nin karesini atar.
        kupler[i]= sayi2*sayi2*sayi2;  //kupler dizisine sayi2'nin küpünü atar.
    }

    cout << "Sayi   Kare   Kup" << endl; //ekrana metin yazdırır.
    cout << "-----  -----  ---" << endl; //ekrana metin yazdırır.   

    for (int i=0; i<sayi; i++) { //girilen sayıya kadar döngü başlatır.
        cout <<"  "<< sayilar[i] << "      " << kareler[i] << "     " << kupler[i] << endl;  //ekrana metin yazdırır.
    }

    return 0;
}