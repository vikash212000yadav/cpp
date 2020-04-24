#include<iostream>
using namespace std;

int main()
{
	char s[100];
	string str;
	getline(cin, str);
	string::iterator it;
	for(it=str.begin(); it!=str.end(); it++)
	{
		if(*it>='a' && *it<='z')
		{
			*it = *it-32;
		}
		else
		{
			*it = *it +32;
		}
	}
	for(it=str.begin(); it!=str.end(); it++)
	{
		cout<<*it;
	}
	return 0;
}
