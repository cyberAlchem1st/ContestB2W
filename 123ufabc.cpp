#include <iostream>
using namespace std;
 
long long n;
string x = "123UFABC";
 
int main() {
  cin >> n;
  long long aux;
 
  if(n<=8) {
    cout << x[n-1];
  }
  
  else {
    aux = n%8;
    if(aux == 0) cout << x[7];
    else cout << x[aux-1];
  }
 
  return 0;
}