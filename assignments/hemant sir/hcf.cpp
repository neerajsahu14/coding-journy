#include<iostream>

using namespace std;

int hcf(int a, int b){
    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a>>b;
    cout<<hcf(a,b)<<endl;
    return 0;
}
