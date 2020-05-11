#include<iostream>
#include<string>
using namespace std;

int main()
{
	int k;
	string num;
	cin>>num>>k;
	for(int i=0; i<num.length(); i++)
	{
		if(k<1)
			break;
		if(num[i]=='9')
		{

		}
		else
		{
			num[i]='9';
			k--;
		}
	}
	cout<<num<<endl; 
	return 0;	
}
