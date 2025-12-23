<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int sayılar[3] = {}; //3 elemanlı sayılar kümesi oluşturur.
    for(int i=0; i<3; i++){ //belirlediğimiz sayı kadar tekrar edicek bir döngü oluşturur.
        cout <<"................."<< endl <<"Bir sayı giriniz"<< endl <<"Sayı = ";  //consola yazı yazdırır.
        cin >> sayılar[i]; //sayılar kümesine eklemek için sayı ister
    }
    if(sayılar[0]>sayılar[1] && sayılar[0]>sayılar[2]) //sayılar kümesinin 1. elemanını 2. ve 3. elemanlarıyla karşılaştırır. 
    {   
        cout <<"En büyük sayı : "<<sayılar[0]<< endl; // 1. eleman en büyük ise consola en büyük olarak yazdırır.
    }
    else if(sayılar[1]>sayılar[0] && sayılar[1]>sayılar[2]) //sayılar kümesinin 2. elemanını 1. ve 3. elemanlarıyla karşılaştırır. 
    {   
        cout <<"En büyük sayı : "<<sayılar[1]<< endl; // 2. eleman en büyük ise consola en büyük olarak yazdırır.
    }
    else
    {
        cout <<"En büyük sayı : "<<sayılar[2]<< endl; // 3. eleman en büyük ise consola en büyük olarak yazdırır.
    }
        
            
    return(0);
=======
#include <iostream>
using namespace std;

int main(){
    int sayılar[3] = {}; //3 elemanlı sayılar kümesi oluşturur.
    for(int i=0; i<3; i++){ //belirlediğimiz sayı kadar tekrar edicek bir döngü oluşturur.
        cout <<"................."<< endl <<"Bir sayı giriniz"<< endl <<"Sayı = ";  //consola yazı yazdırır.
        cin >> sayılar[i]; //sayılar kümesine eklemek için sayı ister
    }
    if(sayılar[0]>sayılar[1] && sayılar[0]>sayılar[2]) //sayılar kümesinin 1. elemanını 2. ve 3. elemanlarıyla karşılaştırır. 
    {   
        cout <<"En büyük sayı : "<<sayılar[0]<< endl; // 1. eleman en büyük ise consola en büyük olarak yazdırır.
    }
    else if(sayılar[1]>sayılar[0] && sayılar[1]>sayılar[2]) //sayılar kümesinin 2. elemanını 1. ve 3. elemanlarıyla karşılaştırır. 
    {   
        cout <<"En büyük sayı : "<<sayılar[1]<< endl; // 2. eleman en büyük ise consola en büyük olarak yazdırır.
    }
    else
    {
        cout <<"En büyük sayı : "<<sayılar[2]<< endl; // 3. eleman en büyük ise consola en büyük olarak yazdırır.
    }
        
            
    return(0);
>>>>>>> 44c79c3 (Düzeltmeler)
}