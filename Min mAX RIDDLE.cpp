#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n];
     int i,j,k,w;
    for(i=0;i<n;i++)
    cin>>arr[i];
    vector<int>l(n,-1),r(n,n);
    stack<int>s1;
    for(i=0;i<n;i++)
    {
        while(!s1.empty() and arr[i]<arr[s1.top()]){
            r[s1.top()]=i;
            s1.pop();
        }
        s1.push(i);
    }
    while(!s1.empty())s1.pop();
    for(i=n-1;i>=0;i--)
    {
        while(!s1.empty() and arr[i]<arr[s1.top()]){
            l[s1.top()]=i;
            s1.pop();
        }
        s1.push(i);
    }
    vector<int>res(n+1,0);
    for(i=0;i<n;i++)
    {
        res[r[i]-l[i]-1]=max(res[r[i]-l[i]-1],arr[i]);
    }
    for(i=n-1;i>=1;i--)
    res[i]=max(res[i],res[i+1]);
    
    for(i=1;i<=n;i++)
    cout<<res[i]<<" ";
}
