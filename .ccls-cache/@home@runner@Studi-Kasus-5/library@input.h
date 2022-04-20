#include <iostream>

using namespace std;

class input
{
  private:
    int sks, n, total;
    string MatKul;
    string nama;
    int nim;
  public:
    void dataDiri();
    int matKul(int i, int n);
    void jmlSks();
};

void input::dataDiri()
{
      cout << "Masukkan NIM : "; cin >> nim;
      cout << "Masukkan Nama : "; cin >> nama;
}

void input::jmlSks()
{
  cout << "Masukkan jumlah SKS : "; cin >> sks;
}

int input::matKul(int i, int n)
{
  if(n < 1)
  {
    return 0;
  }
  else
  {
    cout << "Masukkan mata kuliah : "; cin >> MatKul;
  }
  return (matKul(i, n - 1));
}