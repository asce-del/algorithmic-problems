#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vect(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }

    sort(vect.begin(), vect.end(), greater<int>());

    int i = 1;
    do {
        if (vect[i] < vect[i-1]) {
            cout << vect[i];
            return 0;
        }
        i++;
    } while (i < n);

    return 0;
}