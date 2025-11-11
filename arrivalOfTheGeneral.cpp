#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    
    cin >> n;

    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) { 
        cin >> v[i];
    }

    auto iMax = max_element(v.begin(), v.end());

    int posMax = iMax - v.begin();

    int maxValue = *iMax;

    int cont = 0;

    while (posMax > 0) {
        swap(v[posMax], v[posMax - 1]);
        posMax--;
        cont++;
    }

    int minValue = maxValue;
    int posMin = 0;

    for (int i = n - 1; i >= 0; --i) {
        if (v[i] < minValue) {
            minValue = v[i];
            posMin = i;
        }
    }

    if (minValue == maxValue) {
        cout << "0" << endl;
        return 0;
    }

    while (posMin < n - 1) {
        swap(v[posMin], v[posMin + 1]);
        posMin++;
        cont++;
    }

    cout << cont << endl;

    return 0;
}
