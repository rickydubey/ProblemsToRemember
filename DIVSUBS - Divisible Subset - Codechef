#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n; i++)
		cin >> a[i];
	//input done

	for(int i = 0; i<n; i++)
	{
        if(a[i]%n == 0)
        {
            cout<<"1\n"<<i+1<<"\n";
            return;
		}
    }


	vector<ll> csum(n+1);
	ll s = 0;
	for(int i=1; i<=n; i++)
	{
		s += a[i-1];
		csum[i] = s%n;
	}
	vector<int> freq(n);
	for(int i=0; i<=n; i++)
		freq[csum[i]]++;
	
	int m[n];
    for(int i=0;i<n;i++)
        m[i]=-1;
    m[0]=0;
    int o=0, p=0;
    for(int i=1; i<=n; i++)
    {
        int l=csum[i];
        if(m[l]==-1)
            m[l]=i;
        else
        {
	        o=i;
	        p=m[l];
	        break;
        }

    }
    int len = o-p;
    cout << len << endl;
    for(int i=p+1;i<=o;i++)
    {	
    	cout << i;
        if(i!=o)
            cout << " ";
    }
    cout << endl;

}

//void call();
int main()
{
	//call();
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
