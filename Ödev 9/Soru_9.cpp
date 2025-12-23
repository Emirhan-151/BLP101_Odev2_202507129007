#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    char islem;
    cout <<"1.sayiyi giriniz "<<endl<<"Sayi = ";
    cin >> a;
    cout <<"Yapmak istediginiz islemin sembolunu giriniz."<<endl<<"( + , - , / , * ) "<<endl<<"işlem sembolu = ";
    cin >> islem;
    cout <<"2.sayiyi giriniz "<<"Sayı = ";
    cin >> b;
    

    switch (islem)
    {
    case '+' :
        cout <<"Sonuc = "<< a+b << endl;
        break;
    case '-' :
        cout <<"Sonuc = "<< a-b << endl;
        break;
    case '/' :
        if(b==0){
            cout<<"hata: Sifira bolunemez" ;
        }
        else {
        cout <<"Sonuc = "<< a/b << endl;
        }
        break;
    case '*' :
        cout <<"Sonuc = "<< a*b << endl;
        break;
    
    
    }


return(0);

}