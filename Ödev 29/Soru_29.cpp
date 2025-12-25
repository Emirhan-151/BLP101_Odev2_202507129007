#include <iostream>
using namespace std;

int main() {
    int sayi;
    long long binarySayi = 0;  //long long girmemizin nedeni büyük sayılar için yeterli yer açması.
    long long basamak = 1;     
    cout <<"Pozitif bir sayi giriniz : "; //Ekrana metin yazdırır.
    cin >>sayi;                       //Kullanıcıdan bir sayı alır.

    if(sayi == 0){                   //eğer sayı 0 ise...
        cout <<"Binary karsiligi: 0"<<endl;  //ekrana metin yazdirir.
        return 0;     //programı sonlandırır.
    }

    int orijinalSayi = sayi; //girilen sayıyı orijinalSayi'ye atar.

    while(sayi > 0){            //sayi 0'dan büyük olduğu sürece...
        int kalan = sayi%2;     //sayının 2'ye bölümünden kalanı alır.
        
        
        binarySayi = binarySayi+(kalan*basamak);  //binarySayi'ye kalan*basamak ekler.
        
        basamak = basamak*10;  //basamağı 10 ile çarpar.
        sayi = sayi/2;      //sayiyi 2'ye böler.
    }

    cout <<" = "<< binarySayi <<endl; //ekrana binary sayiyi yazdirir.

    return (0);
}