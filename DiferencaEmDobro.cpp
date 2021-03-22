#include <iostream>
using namespace std;
 
int n;
 
int v1[1000000];
int v2[1000000];
 
/*int dif(int a, int b) {
  if(b<=a) return (a-b)*2;
  else return 0;
}*/
 
int main() {
  cin >> n;
  
  for(int i=0; i<n; i++) {
    cin >> v1[i];
  }
 
  for(int i=0; i < n; i++) {
    cin >> v2[i];
  }
 
  long long soma = 0;
 
  for(int i=0; i<n; i++) {
    if(v2[i] < v1[i]) soma += (v1[i] - v2[i])*2;
    else continue;
  }
 
  cout << soma;
  
 
  return 0;
}