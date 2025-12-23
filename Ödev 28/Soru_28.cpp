#include <iostream>
using namespace std;

int main() {
    int sayi;
    int yedek;
    int ters = 0;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    yedek = sayi;
    int gecici = sayi;
    
    while (gecici > 0) {
        int sonBasamak = gecici % 10;
        ters = (ters * 10) + sonBasamak;
        gecici = gecici / 10;
    }

    
    if (ters == yedek) {
        cout << yedek << " bir Palindrom sayidir.";
    } else {
        cout << yedek << " bir Palindrom sayi degildir.";
    }

    return 0;
}