#include <iostream>
using namespace std;

int main() {
    int a;
    int toplam=0; 

    cout << "Bir sayi giriniz: "; //ekrana metin yazdırılır.
    cin >> a;   //kullanıcıdan bir sayı alır.

   
    for (int i = 1; i<a; i++){     //kullaıcıdan alınan sayıya kadar bir döngü oluşturur.
        if (a % i == 0) {          //Sayı kalansız bölünüyor ise...
            
            toplam =toplam+i;      //toplam'a sayıların kalansız bölenleri eklenir.
        }
    }

   
    if (toplam == a){          //sayı'nın kalansız bölenlerinin toplamı sayıya eşit ise ... 
        cout << "Mukemmel Sayi"<< endl; //ekrana yazı yazdırır
    } else {
        cout << "Mukemmel Sayi degildir"<< endl; //ekrana yazı yazdırır.
    }

    return (0);

}