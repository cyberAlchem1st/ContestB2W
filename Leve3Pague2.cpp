#include <iostream>
#include <algorithm>
 
using namespace std;
 
int jogos[1000009];
int n;
long long ans = 0;
 
bool compare(int a, int b) {
  return a>b;
}
 
int main() {
  cin >> n;
 
  for(int i=0; i<n; i++) {
    cin >> jogos[i];
  }
 
  sort(jogos, jogos+n, compare);
 
  
  for(int i=0; i<n; i+=3) {
    ans += jogos[i] + jogos[i+1];
  }
 
  cout << ans;
 
  return 0;
}