#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j=0;
    double e =0.0;
    string str;

    string sr;

    getline(cin,sr);
    j=stoi(sr);
    getline(cin,sr);
    e=stod(sr);

    getline(cin,str);

    cout<<i+j<<endl;
    cout<<fixed<<setprecision(1)<<d+e<<endl;
    cout<<s<<str<<endl;
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}
