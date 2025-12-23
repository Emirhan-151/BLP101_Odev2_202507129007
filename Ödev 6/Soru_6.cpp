#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout <<"Urun fiyatini giriniz = "; //consol'a "Ürün fiyatını giriniz " yazdırır.
    cin >> a ; //kullanıcıdan bir fiyat alır.
    
    if (a>=100 || 200<a) //girilen fiyat 100 tl ile 200 tl arasında ise 
    {
        b=(a*10)/100;   //girilen fiyata %10 indirim uygulanır.
        cout<<"Odenecek turar : "<< a-b <<" TL"<<endl;  //ödenecek tutar ekrana yazdırılır.
    }
    else if (a >= 200) //girilen fiyat 200 tl üzerinde ise 
    {
        b=(a*20)/100; //girilen fiyata %20 indirim uygulanır.
        cout<<"Odenecek turar : "<< a-b <<" TL"<<endl; //ödenecek tutar ekrana yazdırılır.
    }
    else //şartlar sağlanmıyo ise 
    {
        cout<<"Odenecek turar : "<< a <<" TL"<<endl; // ödenecek tutar ekrana yazdırılır.
    }
    
    return(0);
}