#include <iostream>
using namespace std; 

int main(){
    int a;
    cout <<"Bir sayı giriniz = "; //consol'a "Bir sayı giriniz = " yazdırır.
    cin >> a ; //kullanıcıdan bir sayı alır.
    if (a%3 == 0 && a%7 == 0) //sayı 3'e ve 7'ye tam bölünüyor ise bu şart kullanlılır.
    {
        cout<<"-----------------"<<endl<<"Mukemmel Kat"; //şart sağlanıyor ise consola "mukemmel kat" yazdırır.
    }
    else if (a%3 == 0 || a%7 == 0) //sayı 3'e veya 7'ye tam bölünüyor ise bu şart kullanılır.
    {
        cout<<"-----------------"<<endl<<"Kismi Kat"; //şart sağlanıyor ise consola "kismi kat" yazdırır.
    }
    else //şartlar sağlanmıyor ise bu kod çalışır.
    {
        cout<<"-----------------"<<endl<<"Bolunemez"; //şartlar sağlanmıyor ise consola "bolunemez" yazdırır.
    }
     
 return(0);
}