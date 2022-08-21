#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
        string str;
        getline(cin,str);
        string s = str;
        reverse(str.begin(), str.end());
        if(s == str) cout<<"Palindrome"<<endl;
        else cout<<"Not Palindrome"<<endl;

    }

    return 0;
}
