#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
#define ll unsigned long long
bool prime[MAX+1];
void sieve(ll n)
{
	memset(prime, true, sizeof(prime));

	for (int p=2; p*p<=n; p++)
	{
		if (prime[p])
		{
			for (int i=p*p; i<=n; i+= p)
				prime[i] = false;
		}
	}
}
bool isprime(ll x){
 if(x<2) return false;
 else if(x==2) return true;
 else if(x%2==0) return false;
 else if(prime[x]==true) true;
 else return false;
}

int main()
{
	sieve(MAX);
	int num;
	cin>>num;
   for(int i=2;i<=num;i++){
	if(isprime(num))
        cout<<"YES"<<endl;
	}

	return 0;
}

