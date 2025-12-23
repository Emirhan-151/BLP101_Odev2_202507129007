#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi giriniz :  "; //ekrana metin yazdırır.
    cin >> sayi;                    //kullanıcıdan bir sayı alınır.
  
    for (int i = 1; i<= sayi; i++){ //girilen sayıya kadar bir döngü başlatır.
        if (sayi % i == 0) {        //sayı tam bölünüyorsa...
            cout << i << " ";       //bölünen sayı ekrana yazdırılır.
        }
    }

    return 0;
}