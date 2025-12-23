#include <iostream>
using namespace std;

int main() {
    int a;
    int sayac1 = 0; 

    cout << "Bir sayi giriniz : "; //ekrana metin yazdırır.
    cin >> a;                      //kullanıcıdan 1 sayı alır.

    for(int i = 2; i < a; i++) {   // 2 den başlayarak girilen sayıya kadar döngü oluşturur.
        if (a % i == 0) {          // girilen sayı 2 den kendisine kadar olan sayılara bölünür kalan 0 ise...
            sayac1++;              // sayaç 1 arttırılır.
        }
    }

  
    if (sayac1 == 0) {                         //sayaç 0 ise..
        cout << "Sayi Asal sayidir." << endl;  //ekrana sayı asal sayıdır yazdırılır.
    } 
    else {                                     //şart sağlanmazsa...
        cout << "Sayi asal degildir."<< endl;  //ekrana sayı asal değildir yazdırılır.
    }

    return 0;
}