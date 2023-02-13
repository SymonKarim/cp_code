#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sumof5(int x)
{
    int ans=0;
    while(x)
    {
        ans+=x/5;
        x/=5;
    }
    return ans;
}
int sumof2(int x)
{
    int ans=0;
    while(x)//Find the number of five in a number
    {
        ans+=x/2;
        x/=2;
    }
    return ans;
}
int prime_factorize(int n,int n1)
{
    int no=0;
    while( n>0 && !(n%n1) )
    {
            n=n/n1;
            ++no;
    }
    return no;
}
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        ll n,r,p,q,sum5=0,sum2=0;
        cin>>n>>r>>p>>q;


        sum5+=sumof5(n);
        sum5-=sumof5(n-r);
        sum5-=sumof5(r);


        sum2+=sumof2(n);
        sum2-=sumof2(n-r);
        sum2-=sumof2(r);


        sum5 += prime_factorize(p,5)*q;
        sum2 += prime_factorize(p,2)*q;
        cout<<"Case "<<c<<": "<<min(sum2,sum5)<<endl;
        c++;
    }
    return 0;
}
