#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int binary[32];
    int i=0; 
    while(n>0) 
    {
        binary[i]=n%2; 
        n=n/2; 
        i++; 
    }
    int count=0, max1=0;
    for(int j=i-1; j>=0; j--)
    {
        if(binary[j]==1)
            count++;
        
        if(max1<count)
        {
            max1=count;
        }
        if(binary[j]==0)
            count=0;
    }
    cout<<max1<<endl;
    return 0;
}
