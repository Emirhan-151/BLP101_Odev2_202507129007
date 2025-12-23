#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int sayi;
    cout<<"Baslangic degerini giriniz"<<endl<<"= "; //ekrana yazı yazdırır.
    cin >> a;                                       //kullanıcıdan 1 sayı alır.
    cout<<"Baslangic degerini giriniz"<<endl<<"= "; //ekrana yazı yazdırır.
    cin >> b;                                       //kullanıcıdan 1 sayı alır.
    for(a; a<b; a++){        //verilen başlangıç ve bitiş verilerine göre döngü oluşturur.
        if(a%5 == 0){        //sayı 5 e kalansız bölünüyor ise...
            cout<< a << " "; //ekrana kalansız bölünen sayıyı yazdırır.
        }


    }
return(0);
}