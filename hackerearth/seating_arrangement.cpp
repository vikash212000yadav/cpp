#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b[n];
	int s;
	char c;
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
	}
	for(int i=0; i<n; i++)
	{
		if(b[i]%12==1 || b[i]%12==0 || b[i]%12==6 || b[i]%12==7)
		{
			if(b[i]%12==1)
			{
				s=b[i]+11;
				cout<<s<<" WS"<<endl;
			}
			if(b[i]%12==0)
			{
				s=b[i]-11;
				cout<<s<<" WS"<<endl;
			}
			if(b[i]%12==6)
			{
				s=b[i]+1;
				cout<<s<<" WS"<<endl;
			}
			if(b[i]%12==7)
			{
				s=b[i]-1;
				cout<<s<<" WS"<<endl;
			}
		}
		else if(b[i]%12==2 || b[i]%12==11 || b[i]%12==5 || b[i]%12==8)
		{
			if(b[i]%12==2)
			{
				s=b[i]+9;
				cout<<s<<" MS"<<endl;
			}
			if(b[i]%12==11)
			{
				s=b[i]-9;
				cout<<s<<" MS"<<endl;
			}
			if(b[i]%12==5)
			{
				s=b[i]+3;
				cout<<s<<" MS"<<endl;
			}
			if(b[i]%12==8)
			{
				s=b[i]-3;
				cout<<s<<" MS"<<endl;
			}
		}
		else
		{
			if(b[i]%12==3)
			{
				s=b[i]+7;
				cout<<s<<" AS"<<endl;
			}
			if(b[i]%12==10)
			{
				s=b[i]-7;
				cout<<s<<" AS"<<endl;
			}
			if(b[i]%12==4)
			{
				s=b[i]+5;
				cout<<s<<" AS"<<endl;
			}
			if(b[i]%12==9)
			{
				s=b[i]-5;
				cout<<s<<" AS"<<endl;
			}
		}
	}
	return 0;
}
