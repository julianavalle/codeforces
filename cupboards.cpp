#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, auxLZero = 0, auxRZero = 0, auxLOne = 0, auxROne = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int l, r; 
    cin >> l >> r;

    if (l == 0) {
      auxLZero++;
    } else {
      auxLOne++;
    }

    if (r == 0) {
      auxRZero++;
    } else {
      auxROne++;
    }
  }

  int timeR, timeL;

  if (auxLZero > auxLOne) {
    timeL = auxLOne;
  } else {
    timeL = auxLZero;
  }

  if (auxRZero >  auxROne) {
    timeR = auxROne;
  } else {
    timeR = auxRZero;
  }

  int time = timeL + timeR;

  cout << time << endl;

  return 0;
}
