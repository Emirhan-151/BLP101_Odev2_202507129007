<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int a;
    int sayi;
    int sayac=1;
    cout <<"Bir sayi giriniz : ";
    cin >> sayi;

    do {
         sayi=sayi/10;
         sayac=sayac+1;
    }
     while (sayi>10);
     
        cout << "Basamak sayisi = "<< sayac <<endl;
    
    
    return(0);
=======
#include <iostream>
using namespace std;

int main(){
    int a;
    int sayi;
    int sayac=1;
    cout <<"Bir sayi giriniz : ";
    cin >> sayi;

    do {
         sayi=sayi/10;
         sayac=sayac+1;
    }
     while (sayi>10);
     
        cout << "Basamak sayisi = "<< sayac <<endl;
    
    
    return(0);
>>>>>>> 44c79c3 (Düzeltmeler)
}