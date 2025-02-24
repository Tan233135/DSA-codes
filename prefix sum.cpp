#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    vector<long long>p(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        p[i]=p[i-1]+v[i-1];
    }
    long long l,r;
    cin>>l>>r;
    cout<<p[r]-p[l-1]<<endl;
    return 0;
}
