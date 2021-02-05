#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll len(ll num)
{
    if(num<=1)return num;
    return len(num/2)*2+1;
}

ll get(ll num,ll L,ll R,ll l,ll r)
{
  if(num==0 or R<l or L>r)return 0;
  if(num==1)return 1;
    ll mid=l+len(num/2);
    return get(num/2,L,R,l,mid-1)+get(num%2,L,R,mid,mid)+get(num/2,L,R,mid+1,r);
}
int main()
{
    ll n,l,r;
    cin>>n>>l>>r;
    cout<<get(n,l,r,1,len(n));
}