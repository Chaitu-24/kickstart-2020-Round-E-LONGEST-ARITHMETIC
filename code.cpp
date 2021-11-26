#include<iostream>
using namespace std;
int func(int arr[],int n)
{
    int max=0,p=0;
    int brr[n-1];
    for(int j=0;j<n-1;j++)
    brr[j]=arr[j+1]-arr[j];
    int d=brr[0];
    for(int i=0;i<n-1;i++)
    {
        if(d==brr[i])
        p++;
        else
        {
            if(p>max)
            max=p;
            d=brr[i];
            p=1;
        }
    }
    if(max<p)
    max=p;
    return (max+1);
}
int main()
{   int t;
    cin>>t;
    for(int j=0;j<t;j++)
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Case #"<<j+1<<": "<<func(arr,n)<<endl;
 }
 return 0;
}
