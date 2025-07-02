#include<iomanip>
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    map<string,int> studentRecorders;
    for(int i=0; i<n; i++){
        int marks;
        string name;
        cin>> name>> marks;
        studentRecorders[name]= marks;
    }
    string findByname;
    cin>>findByname;
    if(studentRecorders.find(findByname) != studentRecorders.end()){
        cout<<true<<endl;
        cout<<studentRecorders[findByname];
    }
    return 0;
}
