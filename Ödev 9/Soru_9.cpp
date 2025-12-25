#include <iostream>
using namespace std;

int main(){
    int sayi1;
    int sayi2;
    char islem;
    cout <<"1.sayiyi giriniz "<<endl<<"Sayi = ";
    cin >> sayi1;
    cout <<"Yapmak istediginiz islemin sembolunu giriniz."<<endl<<"( + , - , / , * ) "<<endl<<"işlem sembolu = ";
    cin >> islem;
    cout <<"2.sayiyi giriniz "<<"Sayı = ";
    cin >> sayi2;
    

    switch (islem)
    {
    case '+' :
        cout <<"Sonuc = "<< sayi1+sayi2 << endl;
        break;
    case '-' :
        cout <<"Sonuc = "<< sayi1-sayi2 << endl;
        break;
    case '/' :
        if(sayi2==0){
            cout<<"hata: Sifira bolunemez" ;
        }
        else {
        cout <<"Sonuc = "<< sayi1/sayi2 << endl;
        }
        break;
    case '*' :
        cout <<"Sonuc = "<< sayi1*sayi2 << endl;
        break;
    
    
    }
return(0);
}