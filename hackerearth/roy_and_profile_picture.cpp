#include<iostream>
using namespace std;

int main()
{
	int l, n;
	cin>>l;
	cin>>n;
	int w[n], h[n];
	for(int i=0; i<n; i++)
	{
		cin>>w[i]>>h[i];
		cout<<endl;
	}
	for(int i=0; i<n; i++)
	{
		if(w[i]<l || h[i]<l)
		{
			cout<<"UPLOAD ANOTHER"<<endl;
		}
		else if(w[i]>=l && h[i]>=l && w[i]==h[i])
		{
			cout<<"ACCEPTED"<<endl;
		}
		else
		{
			cout<<"CROP IT"<<endl;
		}
	}
	return 0;
}
