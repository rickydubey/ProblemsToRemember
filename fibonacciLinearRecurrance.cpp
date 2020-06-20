#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<vector<ll>> matrix;

matrix mul(matrix A, matrix B);
matrix pow(matrix A, ll p)
{
	if(p == 1)
		return A;
	matrix temp;
	if(p%2 == 0)
	{
		temp = pow(A, p/2);
		temp = mul(temp, temp);
	}
	else
	{
		temp = pow(A, (p-1)/2);
		temp = mul(temp, temp);
		temp = mul(temp, A);
	}
	return temp;
}

matrix mul(matrix A, matrix B)
{
	matrix C(2, vector<ll>(2));
	for(int i = 0; i<2; i++)
		for(int j = 0; j < 2; j++)
			for(int k = 0; k < 2; k++)
				C[i][j] += A[i][k]*B[k][j];

	return C;
}

ll fib(ll n)
{
	if(n == 0 || n == 1)
		return 1;

	matrix T(2, vector<ll>(2));
	T[0][0] = 0, T[0][1] = 1;
	T[1][0] = 1, T[1][1] = 1;

	T = pow(T, n-1);
	ll f1 = 1, f2 = 1;
	return (f1*T[1][0]+f2*T[1][1]);
}

void call();
int main()
{
	call();
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cin.ignore();
		cout << "Answer : " << fib(n-1) << endl;
	}
	return 0;
}

void call()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}
