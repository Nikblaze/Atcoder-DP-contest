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
	cin.tie(NULL);
    ll n,w;
    std::cin >> n>>w;
    ll wt[n],val[n];
    fr(i,0,n){
      std::cin >> wt[i]>>val[i];
    }
    ll t[n+1][w+1];
    fr(i,0,n+1){
      fr(j,0,w+1){
        if(i==0||j==0) t[i][j]=0;
        else{
          if(wt[i-1]<=j){
            t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
          }
          else{
            t[i][j]=t[i-1][j];
          }
        }
      }
    }
    std::cout << t[n][w] << '\n';
	return 0;
}
