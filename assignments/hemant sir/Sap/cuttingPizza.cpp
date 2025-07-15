#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int angles[360];
        for(int i = 0; i < n; i++) {
            cin >> angles[i];
        }
        
        // Calculate differences between consecutive angles
        int diffs[360];
        for(int i = 0; i < n; i++) {
            int diff;
            if(i == n-1) {
                // Last angle to first angle (wrapping around)
                diff = 360 - angles[i] + angles[0];
            } else {
                diff = angles[i+1] - angles[i];
            }
            diffs[i] = diff;
        }
        
        // Find GCD of all differences
        int result_gcd = diffs[0];
        for(int i = 1; i < n; i++) {
            result_gcd = gcd(result_gcd, diffs[i]);
        }
        
        // Total cuts needed = 360 / gcd
        int total_cuts = 360 / result_gcd;
        
        // Additional cuts needed = total_cuts - existing_cuts
        int additional_cuts = total_cuts - n;
        
        cout << additional_cuts << endl;
    }
    
    return 0;
}
