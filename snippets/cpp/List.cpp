#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c = 0, d = 0, e;
    cin >> t;
    
    vector<int> arr1, arr2;

    while (t--) {
        cin >> a >> b;
        c += a;
        d += b;

        if (c > d) {
            e = 1;
        } else {
            e = 2;
        }

        arr1.push_back(e);
        arr2.push_back(abs(c - d));
    }

    // Find the maximum value in arr2
    auto max_it = max_element(arr2.begin(), arr2.end());
    int max_value = *max_it;

    // Find the index of the maximum value
    int index = distance(arr2.begin(), max_it);
    cout<<arr1[index]<<" " << max_value << endl;

    return 0;
}
