<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int ort;
    int a;
    cout<< "Kac adet sayi gireceksiniz ?" <<endl<<" = ";
    cin >> a;
    int sayi[a]={};
    for (int i=0; i<a; i++){
        cout<< "Sayiyi giriniz : ";
        cin >> sayi[i];
        ort=(ort+sayi[i]);
        
    }
    ort=ort/a;
    cout <<"...................."<<endl<< "Ortalama : "<< ort <<endl;
return(0);
=======
#include <iostream>
using namespace std;

int main(){
    int ort;
    int a;
    cout<< "Kac adet sayi gireceksiniz ?" <<endl<<" = ";
    cin >> a;
    int sayi[a]={};
    for (int i=0; i<a; i++){
        cout<< "Sayiyi giriniz : ";
        cin >> sayi[i];
        ort=(ort+sayi[i]);
        
    }
    ort=ort/a;
    cout <<"...................."<<endl<< "Ortalama : "<< ort <<endl;
return(0);
>>>>>>> 44c79c3 (Düzeltmeler)
}