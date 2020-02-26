#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
int erase(int p){
    vector<int> vec;
    vec.erase(vec.begin()+p);
    return p;
}
int erase(int u, int w){
    vector<int> v;
    v.erase(v.begin()+u, v.begin()+w);
    return u,w;
}
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, temp;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }
    cin >> temp;    
    if( temp < v.size() )
        v.erase(v.begin() + temp - 1); 
    int a, b;
    cin >> a >> b;    
    if( a < b   &&    b < v.size() )
        v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for(auto _v : v)
        cout << _v << " ";
    cout << endl;

    return 0;
}
