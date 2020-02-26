#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int a, b;
   cin >> a;
   vector<int> v;
   for (int i=0; i<a; i++){
       cin >> b;
       v.push_back(b);
   }
   int n, val;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
       if(v[low-v.begin()]==val)
        cout<<"Yes "<<(low-v.begin()+1)<<endl;
        else
        cout<<"No "<<(low-v.begin()+1)<<endl;
   }
   return 0;
}
