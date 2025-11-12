#include <bits/stdc++.h>

using namespace std;

int main() {

  long long int k, l, m, n, d, cont = 0;

  cin >> k >> l >> m >> n >> d;

  if (k == 1 || l == 1 || m == 1 || n == 1) {
    cout << d << endl;
    return 0;
  }

  if (k > d && l > d && m > d && n > d) {
    cout << "0" << endl;
    return 0;
  }
  
  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      cont++; 
    } 
  }

  cout << cont << endl;

  return 0;
}
