#include<iomanip>
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(char ch : s){
        int temp = ch-'a';
        if(temp <26 && temp >=0){
            cout<<ch<<": "<<(int)ch<<endl;
        }
    }
}