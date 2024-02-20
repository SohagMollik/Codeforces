#include<bits/stdc++.h>
using namespace std;

int solve(int n, int a[])
{
	if (n < 10)
		return (n * (n + 1) / 2);

	int d = (int)(log10(n));
	int p = (int)(ceil(pow(10, d)));
	int msd = n / p;

	return (msd * a[d] + (msd * (msd - 1) / 2) * p +
			msd * (1 + n % p) +
			solve(n % p, a));
}

int solution(int n)
{
	int d = (int)(log10(n));
	int a[d + 1];
	a[0] = 0; a[1] = 45;

	for(int i = 2; i <= d; i++)
		a[i] = a[i - 1] * 10 + 45 *
			(int)(ceil(pow(10, i - 1)));

	return solve(n, a);
}


int main()
{

ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
	cout<<solution(n)<<"\n";
}

return 0;
}

