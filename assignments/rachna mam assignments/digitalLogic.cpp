// togel binary 
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int temp =1;
    while (temp<=n)
    {
        n = n ^ temp;
        temp <<= 1;
    }

    cout<<n<<endl;
    return 0;
}
