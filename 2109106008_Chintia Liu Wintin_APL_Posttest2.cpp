//Standard Library C++
#include <iostream>
#include <iomanip>

//Standard Library C++
using namespace std;

//Prosedur atau Fungsi untuk menampilkan tampilan awal program
void tampilan_awal()
{
    cout<<"========================================================="<<endl;
	cout<<"       Program Array 2 Dimensi dengan panjang 5x5        "<<endl;
    cout<<"========================================================="<<endl;
}

//Prosedur atau Fungsi untuk menampilkan susunan program array dan pointer
void program_array_pointer()
{
    //Deklarasi Array 2 Dimensi
    //x = indeks dimensi 1, y = indeks dimensi 2
    int x, y, fungsi;
    int Liu_08[5][5] = {};

    //Deklarasi Pointer
    //* = sebagai penanda bahwa p adalah pointer, i = untuk menuliskan indeks dari dalam array ke pointer
    //& = sebagai penunjuk letak alamat
    int *p, i;
    p = &Liu_08[0][0];

    //Perulangan untuk mengeluarkan array
    for (x = 0; x < 5; x++)
    {
        for(y = 0; y < 5; y++)
        {
            fungsi = ((8 * x) - (2 * y)) / 2;

            //setw = fungsi di dalam iomanip untuk mengatur lebar variabel agar terlihat lebih rapi
            cout<<setw(10)<<fungsi;
            Liu_08[x][y] = fungsi;
        }
        cout<<endl;
    }

    cout<<"========================================================="<<endl;
    cout<<"Tampilan Nilai dan Alamat dari Setiap Elemen Array"<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    //Perulangan untuk menuliskan nilai dan alamat dari array menggunakan pointer
    for (i = 0 ; i < 25 ; i++)
    {
        cout << "Nilai ke [" << i << "]    : memiliki nilai " << *p << " dengan alamat " << p << endl;
        p++;
    }
}

int main()
{
    //Pemanggilan Fungsi atau Prosedur void tampilan_awal
    tampilan_awal();
    cout<<"Bentuk Array yang didapat sebagai berikut"<<endl;
    cout<<"---------------------------------------------------------"<<endl;

    //Pemanggilan Fungsi atau Prosedur void program_array_pointer
    program_array_pointer();
}