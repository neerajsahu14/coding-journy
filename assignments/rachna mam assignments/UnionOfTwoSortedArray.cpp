#include<bits/stdc++.h>

using namespace std;

vector<int>ans;

void marge(vector<int> &arr1,vector<int> &arr2, int n, int m){
    int l =0,r=0;
    if(arr1[0]<=arr2[0]){
        ans.push_back(arr1[0]);
        l++;
    }else{
        ans.push_back(arr2[0]);
        r++;
    }
    while(l<n && r<m ){
        if(arr1[l]==arr2[r] && ans.back()==arr2[r]){
            r++;
            l++;
        }
        else if(arr1[l]==arr2[r] && ans.back()!=arr2[r]){
            ans.push_back(arr2[r]);
            l++; r++;
        }else if(arr1[l]<arr2[r]){
            if(ans.back()!=arr1[l]){
                ans.push_back(arr1[l]);
            }
            l++;
        }else if(arr1[l]>arr2[r]){
            if(ans.back()!=arr2[r]){
                ans.push_back(arr2[r]);
            }
            r++;
        }
    }
    while (l<n)
    {
        if(ans.back()!= arr1[l]) ans.push_back(arr1[l]);
        l++;
    }
    while (r<m)
    {
        if(ans.back()!= arr2[r]) ans.push_back(arr2[r]);
        r++;
    }
    
}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    vector<int> arr1,arr2;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }
    marge(arr1,arr2,n,m);
    for(auto i:ans){
        cout<<i<<" ";
    }


    return 0;
}

