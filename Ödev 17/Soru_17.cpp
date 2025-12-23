#include <iostream>
using namespace std;

int main() {
    int sayi;
    int rakam;
    int toplam = 0; 

    cout << "Pozitif bir tam sayi giriniz: "; //ekrana yazı yazdırır.
    cin >> sayi;    //kullanıcıdan 1 sayı alır.

    
    while (sayi > 0) {      //sayı sıfırdan küçük olana kadar çalışır.
        rakam = sayi % 10;  //sayıyı 10 a bölerek son rakamını alır son rakamı 10 a bölümünden kalan sayıdır.
        toplam += rakam;    //kalan sayıyı hafızaya ekler.
        sayi = sayi / 10;   //sayıyı 10 a bölerek virgül ekler ve bu sayede işlemlerş bir sonraki rakama geçirir.
    }

    cout << "Rakamlarin toplami = " << toplam << endl; //rakamların toplamını ekrana yazdırır.

    return 0;
}