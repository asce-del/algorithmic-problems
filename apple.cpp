#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    unsigned long long sum = 4;
    unsigned long long temp = 6;

    for (int i = 0; i < n - 1 ; i++) {
        sum = sum + temp;
        temp *= 2;
    }

    cout << sum;
}