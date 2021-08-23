/*Perintah Perulangan*/
#include <iostream>

using namespace std;

int main ()
{
    constexpr int nilai[]{ 65, 88, 54, 73, 83 };
    constexpr int jml_mhs{ sizeof(nilai)/sizeof(nilai[0]) };
 
    int maxNilai{ 0 }; 
    for (int mhs{ 0 }; mhs < jml_mhs; ++mhs)
    {
        if (nilai[mhs] > maxNilai)
        {
            maxNilai = nilai[mhs];
        }
    }
 
    cout << "Nilai tertinggi yang diperoleh mahasiswa adalah " << maxNilai << '\n';
  
  return 0;
}
