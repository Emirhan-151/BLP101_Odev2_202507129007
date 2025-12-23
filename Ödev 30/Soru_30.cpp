#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Asal carpanlarina ayrilacak sayiyi giriniz: ";
    cin >> n;
    int bolen = 2; 
        
    while (n > 1) {
            
        if (n % bolen == 0) {
            cout << bolen << " "; 
            n = n / bolen;        
               
        } else {
                bolen++; 
        }
    }
     return 0;     
}

  
