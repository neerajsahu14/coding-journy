#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void printSpiral(vector<vector<int>> &arr) {
    int n = arr.size();
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; ++i)
           if(arr[top][i]%3==0)
            cout << arr[top][i] << " ";
        top++;

        // Print right column
        for (int i = top; i <= bottom; ++i)
            if(arr[i][right]%3==0) 
                cout << arr[i][right] << " ";
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
              if(arr[bottom][i]%3==0)  
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Print left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                if(arr[i][left]%3==0)
                    cout << arr[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    return 0;
}

