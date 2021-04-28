#include <bits/stdc++.h>

using namespace std;

int main() {
   long long n,t, temp, count=0;
   cin >> n >> t;

   for (int i = 0; i < n; i++) {
       cin >> temp;
       if (t < temp) {
           cout << count;
           return 0;
       }
       t-= temp;
       count++;
   }

   cout << count;
}




