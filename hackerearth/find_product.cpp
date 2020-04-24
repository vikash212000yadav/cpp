#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	long int product=1;
	long int m=0, p=0;
	for(int i=0; i<n; i++)
	{	
		m=product*a[i];
		p=pow(10,9) + 7;
		product = m%p;
	}
	cout<<product<<endl;
	return 0;
}
