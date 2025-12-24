
#include <iostream>
using namespace std;

int main() {
    int sayi;
    int sayi2;
    int ters = 0;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    sayi2 = sayi;
    int gecici = sayi;
    
    while (gecici > 0) {
        int sonBasamak = gecici % 10;
        ters = (ters * 10) + sonBasamak;
        gecici = gecici / 10;
    }

    
    if (ters == sayi2) {
        cout << sayi2 << " bir Palindrom sayidir.";
    } else {
        cout << sayi2 << " bir Palindrom sayi degildir.";
    }

    return 0;
}