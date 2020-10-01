#include <bits/stdc++.h>
#include <cstring>
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back()
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define fi first
#define se second
  #define fr(i,a,n) for(long long int i=a;i<n;i++)

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	
    ll n;
    std::cin >> n;
    ll a[n];
    fr(i,0,n) std::cin >> a[i];
    ll jump[n];
    jump[0]=0;
    jump[1]=abs(a[0]-a[1]);
    fr(i,2,n){
      jump[i]=min(jump[i-1]+abs(a[i]-a[i-1]),jump[i-2]+abs(a[i]-a[i-2]));
    }
  //  fr(i,0,n) std::cout <<jump[i]<< '\n';
    std::cout << jump[n-1] << '\n';

	return 0;
}
