#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find minimum number of blows to smash all bricks
int minBlows(const vector<int>& bricks) {
    int blows = 0;
    for (int b : bricks) {
        if (b > 0) blows++;
    }
    return blows;
}

// Function to find the first brick to smash to sort in ascending order
int firstToSmashAscending(const vector<int>& bricks) {
    vector<int> sorted = bricks;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < bricks.size(); ++i) {
        if (bricks[i] != sorted[i]) return i + 1; // 1-based index
    }
    return -1; // Already sorted
}

// Function to find the first brick to smash to sort in descending order
int firstToSmashDescending(const vector<int>& bricks) {
    vector<int> sorted = bricks;
    sort(sorted.rbegin(), sorted.rend());
    for (int i = 0; i < bricks.size(); ++i) {
        if (bricks[i] != sorted[i]) return i + 1; // 1-based index
    }
    return -1; // Already sorted
}

int main() {
    int n;
    cin >> n;
    vector<int> bricks(n);
    for (int i = 0; i < n; i++) {
        cin >> bricks[i];
    }
    vector<int> newton(n,0);

    cout << "Minimum number of blows to smash all bricks: " << minBlows(bricks) << endl;
    int asc = firstToSmashAscending(bricks);
    if (asc == -1)
        cout << "Bricks are already in ascending order." << endl;
    else
        cout << "First brick to smash for ascending order: " << asc << endl;

    int desc = firstToSmashDescending(bricks);
    if (desc == -1)
        cout << "Bricks are already in descending order." << endl;
    else
        cout << "First brick to smash for descending order: " << desc << endl;

    return 0;
}
