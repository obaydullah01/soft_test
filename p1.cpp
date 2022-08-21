#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
        double a,b;
        double result;
        char ch, ch2;

        cin>>a;
        cin>>ch;
        cin>>b;
        cin>>ch2;
        if(b==0 && ch=='/'){
            cout<<"MATH ERROR.";
            continue;
        }
        if(ch=='/') result =a/b;
        else if((ch=='*') || (ch=='X')) result = a*b;
        else if(ch=='+') result = a+b;
        else if(ch == '%') result = (int)a% (int)b;
        else result = a-b;

        cout<<a<<" "<<ch<<" "<<b<<" = "<<result;
        cout<<endl;
    }
    return 0;
}
