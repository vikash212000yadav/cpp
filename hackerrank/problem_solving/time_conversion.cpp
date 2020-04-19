#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string str=s;
    str.pop_back();
    /*
    if(size_t found =str.find_first_of("M"))
    {
        while(found!=string::npos)
        {
            str[found]=' ';
            found=str.find_first_of("M", found+1);
        }
        //cout<<str<<endl;
    */
        if(str.back()=='A')
        {    
            size_t found2 =str.find_first_of("A");
            string str1=str.substr(0,2);
            //cout<<str2<<endl;
            string::size_type sz;
            int hour=stoi(str1,&sz);
            if(hour==12)
            {
                //hour=0;
                str1="00";
            }

            //cout<<str2<<endl;
            str.replace(0,2,str1,0,2);
            while(found2!=string::npos)
            {
                str[found2]=' ';
                found2=str.find_first_of("A", found2+1);
            }
        //cout<<str<<endl;
        }
                
        else
        {
            size_t found1=str.find_first_of("P");
            string str2=str.substr(0,2);
            //cout<<str2<<endl;
            string::size_type sz;
            int hour=stoi(str2,&sz);
            if(hour==12)
            {
                str2="12";
            }
            else
            {
                hour=hour+12;
                str2=to_string(hour);
            }

            //cout<<str2<<endl;
            str.replace(0,2,str2,0,2);
            while(found1!=string::npos)
            {

                str[found1]=' ';
                found1=str.find_first_of("P", found1+1);
            }
            //cout<<str<<endl;
        }
    
    return str;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

