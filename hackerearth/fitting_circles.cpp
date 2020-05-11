#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a, b;
	for(int i=0; i<t; i++)
	{
		int c=0;
		cin>>a>>b;
		if(a==b && a>0)
			cout<<1<<endl;
		else if(a==0 && b==0)
			cout<<0<<endl;
		else if(a<b)
		{
			c=b/a;
			cout<<c<<endl;
		}
		else
		{
			c=a/b;
			cout<<c<<endl;
		}
	}

	return 0;
}
