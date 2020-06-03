#include <regex>
#include<iostream>
#include<list>
using namespace std;


int main(){
    int n;
    cin >> n;
    list<string> l;
    for(int i = 0; i < n; i++){
        string name;
        string email;
        cin >> name >> email;
        if (regex_match (email, regex(".+@gmail.com") )){
            l.push_back(name);
        }
    }
    l.sort();
    while (!l.empty())
    {
        cout << l.front()<<endl;
        l.pop_front();
    }

    return 0;
}
