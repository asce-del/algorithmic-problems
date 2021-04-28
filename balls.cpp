#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(9, 0);
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vec[temp-1]++;
    }
    sort(vec.begin(), vec.end());
    cout << n - vec[8];
    return 0;
}