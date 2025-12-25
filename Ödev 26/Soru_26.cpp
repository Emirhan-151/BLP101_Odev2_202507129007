#include <iostream>
using namespace std;

int main(){
    int sayi1;
    cout <<"Pozitif bir tam sayi giriniz: "; //ekrana metin yazdirir.
    cin  >>sayi1;             //kullanicidan sayi alir.

    if (sayi1<= 0) { //girilen sayi pozitif degilse...
        cout <<"Lutfen pozitif bir sayi giriniz!"<< endl; //ekrana metin yazdirir.
        return 0;
    }

    cout <<sayi1; //ekrana sayıyı yazdirir.


    while (sayi1!= 1){          //sayi1 1'e esit degilse...
        if (sayi1%2 == 0){      //sayi1 çiftse...
            sayi1 = sayi1/2;    //sayi1'i 2'ye böler.
        
        }
        else{ //sayi1 tekse...
            
            sayi1=(sayi1*3) + 1; //sayi1'i 3 ile çarpar ve 1 ekler.
        }


        cout <<" -> "<<sayi1; //ekrana sayiyi yazdirir.
    }

    return (0);
}