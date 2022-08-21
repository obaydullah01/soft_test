#include<bits/stdc++.h>

using namespace std;

void Get_avg(double sum, double n)
{
    cout<<"Average = "<<(sum/n)<<endl;
}

void Get_sum(int arr[], int n)
{
    int sum = 0;
    for(int i =0; i<n; i++)
        sum +=arr[i];
    cout<<"Sum = "<<sum<<endl;
    Get_avg(sum,n);
}

int main()
{
    int n;
    cout<<"array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    int i =0;
    do{
        cin>>arr[i];
        i++;

    }while(i< n);

    Get_sum(arr,n);
    return 0;
}

