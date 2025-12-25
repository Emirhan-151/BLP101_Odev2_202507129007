#include <iostream>
using namespace std;

int main() {
    int sayi1;
    cout << "Fibonacci serisinde kac sayi olsun? :  "; //Ekrana metin yazdırır.
    cin >> sayi1;                    //Kullanıcıdan sayı alır.

    int silk = 0;  //ilk sayı
    int sson = 1;  //son sayı
    int toplam;  

    cout << ": "; //Ekrana metin yazdırır.

    for (int i = 0; i < sayi1; i++) { //girilen sayıya kadar döngü başlatır.
        cout << silk << " ";        //ekrana metin yazdırır.

        
        toplam = silk + sson;  //ilk ve son sayıyı toplar.
        silk = sson;           //ilk sayıya son sayıyı atar.
        sson = toplam;         //son sayıya toplamı atar.
    }

    return 0;
}