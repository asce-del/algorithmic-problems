#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, k;
    cin >> n;
    cin >> k;
    long sum = 1;

    for (long i = 0; i < n; i++) {
        if (sum > k) {
            sum -= k;
        }
        sum *= 2;
    }

    cout << sum;
}