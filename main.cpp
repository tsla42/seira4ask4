#include <iostream>
using namespace std;
#include <cmath>

int main() {
  int tetr[10];
  int N,a,b,c,d;

  for (int i=0; i<10; i++) {
    tetr[i]=pow(i,4); 
  }
  for (N=1000; N<10000; N++) {
    d=N%10;
    c=(N/10)%10;
    b=(N/100)%10;
    a=(N/1000)%10;
    if (N==(tetr[a]+tetr[b]+tetr[c]+tetr[d])) cout << N << endl;
  }
}