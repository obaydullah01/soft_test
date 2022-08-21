#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("./input.txt","r",stdin);
    freopen("./output.txt","w+",stdout);
    int a,b;
    int i = 1;
    while(1){
        cin >> a >> b;
        if(i != 3){
            cout <<" Case-"<<i<<": "<< a+b <<" "<< a-b <<" "<< a*b <<" "<< a/b <<endl;
            i += 1;
        }

    }

    return 0;
}
