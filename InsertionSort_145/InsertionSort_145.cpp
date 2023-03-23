#include <iostream>
using namespace std;

int arr[20];        // Membuat array dengan panjang data 20
int n;              // Membuat variable inputan n

void input()
{                   // Procedure input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";   // Membuat inputan jumlah element Array
        cin >> n;       // Memanggil variabel inputan n

        if (n <= 20)
        {               // Membuat kondisi n tidak lebih dari 20
            break;
        }
    }
    
}
int main()
{
    std::cout << "Hello World!\n";
}