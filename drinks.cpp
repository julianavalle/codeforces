#include <bits/stdc++.h>

using namespace std;

int main() {
  double n, drink, p = 0, r = 0;

  cin >> n;

  for (int i = 0; i < n; i++) { 
    cin >> drink;

    p = drink/100 + p;

  }

  r = p/n * 100;

  cout << fixed << setprecision(12);

  cout << r << endl;

  return 0;
}
