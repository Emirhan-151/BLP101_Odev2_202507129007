#include <iostream>
using namespace std;

int main() {
    int sayi;
    int yedek;
    int ters=0; 
    cout << "Bir sayi giriniz : ";
    cin >> sayi;
    yedek = sayi; 

   
    while (sayi != 0) {
        int sonBasamak = sayi % 10;          
        ters = (ters * 10) + sonBasamak;     
        sayi = sayi / 10;                    
    }

    cout << "Girdiginiz sayi: " << yedek << endl;
    cout << "Sayinin tersi : " << ters << endl;

    return 0;
}