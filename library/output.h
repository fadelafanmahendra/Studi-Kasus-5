#include <iostream>

using namespace std;
class output {
  private:
    int sks, n, total;
    string MatKul;
    string nama;
    int nim;
  public:
  void cetak();
int cetakMatkul(int i, int n);
  
};

void output::cetak(){
    cout << "NIM : " << nim << endl;
    cout << "Nama Mahasiswa : " << nama << endl;
    //cetakMatkul(1, n);
    cout << "Jumlah SKS : " << sks << endl;
    cout << "Total Pembayaran : " << total << endl;
  }

int output::cetakMatkul(int i, int n){
    
    if(n < 1)
      {
        return 0;
      }
      else
      {
        cout << "Mata kuliah ke-" << i <<  " : " << MatKul;
      }
      return (cetakMatkul(i, n - 1));
      i = i + 1;
  }