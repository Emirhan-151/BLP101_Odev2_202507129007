#include <iostream>
using namespace std;

int main(){

    int sayi1;
    cout<<"Bir sayı giriniz = "; //Consola metin yazdırır.
    cin >> sayi1; //kullanıcıdan bir sayı girmesini ister.
    
    if(sayi1==0){      //sayının 0'a eşitliğini kontrol eder.
        cout <<"Nötr"<<endl; //sayı 0'a eşit ise consola "Nötr" yazdırır.

        
    }
    else if (sayi1>0) //sayının 0'dan büyük olup olmadığını kontrol eder.
    {
       cout <<"Pozitif"<<endl; //sayı 0'dan büyük ise consola "Pozitif" yazdırır.
    }
    else 
    {
        cout<<"Negatif"<<endl; // sayı 0'a eşit değilse 0'dan büyük de değilse consola Negatif yazdırır.
    }
}