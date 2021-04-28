#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    long count = 0, temp = 0;
    getline(cin, str);


    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'k') {
            count++;
            if (count >= temp) {
                temp = count;
            }
        } else count = 0;
    }


    cout << temp;
}