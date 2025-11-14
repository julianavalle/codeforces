#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n, first, min, max, amazing = 0;
  
  cin >> n;
  
  cin >> first;
  
  min = first;
  max = first;
  
  for (int i = 0; i < n-1; i++) {
    int p;
    cin >> p; 
    if (p > max) {
      amazing++;
      max = p;
    }
    
    if (p < min) {
      amazing++;
      min = p;
    }
  }
  
  cout << amazing;
  return 0;
}