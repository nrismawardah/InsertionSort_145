#include <iostream>
using namespace std;

int arr[20];        // Membuat array dengan panjang data 20
int n;              // Membuat variable inputan n

void input()
{                   // Procedure input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : ";   // Membuat inputan jumlah element Array
        cin >> n;                                       // Memanggil variabel inputan n

        if (n <= 20)
        {               // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";        // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                       // Membuat jarak per baris program
    cout << "======================" << endl;           // Membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    for (int i = 0; 1 < n; i++)                         // Membuat perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": ";          // Memasukkan  atau menginputkan nilai data n
        cin >> arr[i];                                  // Memasukkan nilai data n ke dalam Array arr

    }
};
//Procedure Insertionsort
void insertionsort()
{

    int temp;       // Membuat variabel data temporer atau penyimpanan sementara
    int j;          // Membuat variabel j sebagai penanda

    for (int i = 1; i < n; i++)             // 1. Looping dengan i dimulai dari 1 hingga n-1
    {

        temp = arr[1];                      // 2. Simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                          // 3. Setting nilai j sama dengan i-1;


        while (j >= 0 && arr[j] > temp)     // 4. Looping while dimana nilai j lebih besar
        {                                   // arr[j] lebih besar daripada temp
            arr[j + 1] = arr[j];            // a. simpan arr[j] ke dalam variabel arr[j + 1]
            j--;                            // b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;                  // 5. Simpan nilai temp ke dalam arr[j + 1]


        cout << endl;
        cout << "\nPass " << i << ": ";     // Output ke layar
        for (int k = 0; k < n; k++)
        {                                   // Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";          // Output ke layar
        }
    }
};

void display()
{
    cout << endl;                                               // Output baris kosong
    cout << "Total Element Movement= " << n - 1 << endl;        // cout movement element
    cout << "\==========================" << endl;              // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;        // Output ke layar
    cout << "===========================" << endl;              // Output ke layar

    for (int j = 0; j < n; j++)
    {                                       // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;             // Output ke layar

    }
    cout << endl;                           // Output baris kosong
}


int main()
{
    input();            // Memanggil input
    
}