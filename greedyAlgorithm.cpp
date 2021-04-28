#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
4
6 9
1 12
4 6
20 80

3
5 9
1 4
12 30

7
1 2
2 3
3 4
4 5
5 6
6 7
7 8


10
1 2
2 3
3 4
5 6
7 8
1 8
7 9
9 10
2 12
2 76
 */

bool comp(vector<int>& a,vector<int>& b) {
    if (a[0] != b[0]) {
        return  a[0] < b[0];
    } else return a[1] < b[1];
}

int main()
{
    int n ,i, result = 0;

    cin >> n;
    vector<vector<int> > arr1(n, vector<int> (2));

    for (i = 0; i < n; i++) {
        cin >> arr1[i][0] >> arr1[i][1];
    }

    sort(arr1.begin(), arr1.end(), comp);

    for (i = 0; i < arr1.size(); i++) {
        cout << "{" << arr1[i][0] << "}" << "{" << arr1[i][1] << "}" << " ";
    }

    cout << "\n";


    for (i = 0; i < arr1.size() - 1; i++)
    {
        if (arr1[i][1] >= arr1[i+1][0]) {
            arr1[i+1][0] = arr1[i][0];
            if (arr1[i+1][1] < arr1[i][1]) {
                arr1[i+1][1] = arr1[i][1];
            }
            arr1[i][0] = 0;
            arr1[i][1] = 0;
        }
    }


    for (i = 0; i < arr1.size(); i++) {
        cout << "{" << arr1[i][0] << "}" << "{" << arr1[i][1] << "}" << " ";
    }

    cout << "\n";

    for (i = 0; i < arr1.size(); i++) {
        result += arr1[i][1] - arr1[i][0];
    }

    cout << "\n";
    cout << "Result:" << result;

    return 0;
}