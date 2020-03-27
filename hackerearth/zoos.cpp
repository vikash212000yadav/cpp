#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ch[20];
	cin.get(ch,20);
	int x=0, y=0;
	for(int i=0; i<=20; i++)
	{
		if(ch[i]=='z')
		{
			x+=1;
		}
		else if(ch[i]=='o')
		//else
		{
			y+=1;
		}
		else
		{
			break;
		}
		
	}
	if(y==2*x)
	{
		cout<<"Yes";
	}
	else{
		cout<<"No";
 
	}
	return 0;
}
