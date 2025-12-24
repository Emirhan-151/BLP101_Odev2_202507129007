#include <iostream>
using namespace std;

int main(){
    int urun;
    int indirim;
    cout <<"Urun fiyatini giriniz = "; //consol'a "Ürün fiyatını giriniz " yazdırır.
    cin >> urun ; //kullanıcıdan bir fiyat alır.

    if (urun>=100 && urun<200) //girilen fiyat 100 tl ile 200 tl arasında ise 
    {
        indirim=(urun*10)/100;   //girilen fiyata %10 indirim uygulanır.
        cout<<"Odenecek turar : "<< urun-indirim <<" TL"<<endl;  //ödenecek tutar ekrana yazdırılır.
    }
    else if (urun >= 200) //girilen fiyat 200 tl üzerinde ise 
    {
        indirim=(urun*20)/100; //girilen fiyata %20 indirim uygulanır.
        cout<<"Odenecek turar : "<< urun-indirim <<" TL"<<endl; //ödenecek tutar ekrana yazdırılır.
    }
    else //şartlar sağlanmıyo ise 
    {
        cout<<"Odenecek turar : "<< urun <<" TL"<<endl; // ödenecek tutar ekrana yazdırılır.
    }
    
    return(0);
}