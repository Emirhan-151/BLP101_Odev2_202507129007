#include <iostream>
using namespace std;

int main() {
    int baslangıc;
    int bitis; 
    int sayi;
    cout<<"Baslangic degerini giriniz"<<endl<<"= "; //ekrana yazı yazdırır.
    cin >> baslangıc;                                       //kullanıcıdan 1 sayı alır.
<<<<<<< HEAD
    cout<<"Bitis degerini giriniz"<<endl<<"= "; //ekrana yazı yazdırır.
=======
    cout<<"Baslangic degerini giriniz"<<endl<<"= "; //ekrana yazı yazdırır.
>>>>>>> 9e89468 (Düzenleme yapildi)
    cin >> bitis;                                       //kullanıcıdan 1 sayı alır.
    for(baslangıc; baslangıc<bitis; baslangıc++){        //verilen başlangıç ve bitiş verilerine göre döngü oluşturur.
        if(baslangıc%5 == 0){        //sayı 5 e kalansız bölünüyor ise...
            cout<< baslangıc << " "; //ekrana kalansız bölünen sayıyı yazdırır.
        }


    }
return(0);

}