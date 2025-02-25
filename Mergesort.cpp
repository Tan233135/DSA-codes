//merge sort
#include<bits/stdc++.h>
using namespace std;
void merging(vector<int>& arr, int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    vector<int> larr(n1), rarr(n2);
    for(int i=0;i<n1;i++)
        larr[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        rarr[i]=arr[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(larr[i]<=rarr[j])
        {
            arr[k]=larr[i];
            i++;
        }
        else{
            arr[k]=rarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=larr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=rarr[j];
        j++;
        k++;
    }
}
void mergesort(vector<int>& arr,int l,int r)
{
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merging(arr,l,m,r);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}