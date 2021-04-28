#include "bits/stdc++.h"
using namespace std;

vector<int> vect(1001, 0);

int main() {
    int n, temp, temp1, m = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp >> temp1;
        for (int j = temp; j <= temp1; j++) {
            vect[j]++;
        }
        m = max(m,temp1);
    }

    sort(vect.begin(), vect.end());

    cout << vect[1000];

    return 0;
}