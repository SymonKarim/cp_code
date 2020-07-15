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
	if(num<100000000){
       	if(isprime(num)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	}
	else{
        for(int i=2;i<=num/2;i++){
          if(isprime(i) && (num%i==0)){
            //if(num%i==0){
                cout<<"NO"<<endl;
                return 0;
            }//}

        }
        cout<<"YES"<<endl;
	}

	return 0;
}

