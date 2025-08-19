#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxElem = numeric_limits<int>::min();
    int minElem = numeric_limits<int>::max();

    for(int i = 0; i < n; ++i) {
        if(arr[i] > maxElem) maxElem = arr[i];
        if(arr[i] < minElem) minElem = arr[i];
    }

    int diff = maxElem - minElem;
    cout << diff << endl;

    return 0;
}