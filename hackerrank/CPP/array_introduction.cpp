#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,temp;
    cin>>n;
    //cout<<"\n";
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i] ;
    for(i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
    /*
    for(i=0; i<n; --n,i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
        cout<<arr[n-1]<<" ";
    }
    */
    return 0;
}
