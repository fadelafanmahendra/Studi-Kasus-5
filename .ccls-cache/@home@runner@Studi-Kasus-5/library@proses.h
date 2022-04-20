#include <iostream>

using namespace std;

class proses {
  private:
    int sks, biaya, diskon, total;
    int hrgsks = 125000;
  public:
    void Total();
};

void proses::Total() {
  biaya = sks * hrgsks;
  diskon = biaya * 0.2;
  total = biaya - diskon;
}
