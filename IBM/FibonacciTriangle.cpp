#include<bits/stdc++.h>
using namespace std;
// Function to generate Fibonacci triangle



int main(){
    int n; cin>>n;
    int fibonacci[n+1];
    fibonacci[0]=0;
    fibonacci[1]=1;
    fibonacci[2]=1;

    for(int i=0;i<n;i++){
        if(i>1){
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
        for(int j=0;j<=i;j++){
            cout<<fibonacci[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

// learn ipc index mutual exclusion semaphore critical section problem H.W.