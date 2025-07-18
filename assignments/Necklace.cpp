#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> necklace(n);
        for (int i = 0; i < n; i++){
            cin >> necklace[i];
        }
        k %= n;
        for (int i = 0; i < n; i++){
            cout << necklace[(i + k) % n] << " ";
        }
        cout << "\n";
    }
    return 0;
}