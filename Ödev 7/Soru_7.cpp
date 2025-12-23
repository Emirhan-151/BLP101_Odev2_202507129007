#include <iostream>
using namespace std;

int main(){
    int yil; 
    cout<<"Ogrenmek istediginiz yili giriniz."<<endl<<"yil : "; // ekrana metin yazdırır.
    cin >>yil;  // kullanıcıdan öğrenmek istediği yılı ister.

    if((yil % 4 == 0) && (yil % 100 != 0 || yil % 400 == 0)) //artık yıl olup olmadığını hesaplar
    {
        cout<< yil <<" Artik yildir."; // girilen yıl artık yıl ise ekrana artık yıl yazdırlır.
    }
    else {
        cout << yil <<" Artik yil degildir."; //girilen sayı artık değil ise ekrana artık değil yazdırılır.
    }
    return(0);
}
