#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name;
    cin>>n;
    map<string, int> m;
    for(int i=0; i<n; i++) 
    {
        cin>>name;
        if(!m[name]) 
            cin>>m[name];
    }
    while(cin>>name) 
    {
        if(m[name])
            cout<<name<<"="<<m[name]<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}

