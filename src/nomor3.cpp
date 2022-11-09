#include <iostream>
using namespace std;

int main() {
  double data, jumlahData, total, rata, max, min;

  cout << "Masukkan Jumlah Data Yang Ingin Dimasukkan : "; cin >> jumlahData;

  for(int i = 1; i <= jumlahData; i++) {
    cout << "Masukkan Data Ke - " << i << " : "; cin >> data;

    total += data;

    if(i == 1) {
      min = data;
      max = data;
    }else if(min > data)
      min = data;
    else if(max < data)
      max = data;
  }

  rata = total/jumlahData;
  cout << "Nilai Minimal  : " << min;
  cout << "\nNilai Maksimal : " << max;
  cout << "\nRata - rata    : " << rata;

  return 0;
}