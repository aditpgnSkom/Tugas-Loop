#include <iostream>
using namespace std;

int main() {
  long hasil;
  long uang = 1000000;
  double bunga = 0.02;
  int bulan;

  cout << "Tabungan Awal Anda Adalah Rp.1.000.000\n";
  cout << "Masukkan Lama Menabung (bulan) : "; cin >> bulan;

  for(int i = 1; i <= bulan; i++){
    hasil = uang * bunga;
    uang += hasil;
  }

  cout << "Uang Anda Setelah " << bulan << " Bulan Adalah " << uang;

  return 0;
}