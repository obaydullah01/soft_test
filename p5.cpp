#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
        int n;
        cin>>n;
        long long int factorial = 1;
        if(n == 0){
            cout<<"0 ! = "<<1<<endl;
            continue;
        }
        for(int i =1; i<=n ; i++){
            factorial = factorial * i;
        }

        cout<<n<<" ! = "<<factorial<<endl;
    }

    return 0;
}
