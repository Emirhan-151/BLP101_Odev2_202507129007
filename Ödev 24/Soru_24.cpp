#include <iostream>
using namespace std;

int main() {
    int sayi1;
    int sayi2;
    int ebob=1;

    cout <<"Birinci sayiyi giriniz : "; //ekrana metin yazdirir.
    cin  >>sayi1;              //kullanicidan 1.sayıyı alir.
    cout <<"Ikinci sayiyi giriniz : "; //ekrana metin yazdirir.
    cin  >>sayi2;              //kullanicidan 2.sayıyı alir.
    int kucuksayi;          
    
    if (sayi1<sayi2){           //sayı 1 sayı 2 den küçükse...
    kucuksayi=sayi1;          //küçük sayıya sayı 1'i ata.
    }
    
    else{                     //değilse...
    kucuksayi=sayi2;         //küçük sayıya sayı 2'yi ata.
    }
    

    for (int i=1; i<=kucuksayi; i++){     //1'den küçük sayıya kadar döngü oluşturur.
        
        if (sayi1%i == 0 && sayi2%i == 0){     //eğer sayı 1 ve sayı 2'nin i'ye bölümünden kalan 0 ise...
            ebob = i;                //ebob'a i'yi ata.
        }
    }

    cout <<"EBOB"<<" : "<< ebob <<endl; //ekrana metin yazdirir.

    return 0;
}