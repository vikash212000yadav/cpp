#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++) 
        {
            if (j % 2 == 0)
            {
                cout << str[j];
            }
        }

        cout << " ";

        for (int j = 0; j < str.length(); j++) 
        {
            if (j % 2 != 0)
            {
                cout << str[j];
            }
        }

        cout << endl;
    }

    return 0;
}

