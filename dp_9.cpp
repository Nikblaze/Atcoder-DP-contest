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
    ll m,n;
    std::cin >> m>>n;
    vector<string> v;
    char c;
    string a;
    fr(i,0,m){
      fr(j,0,n){
      std::cin >> c;
      a+=c;
    }
    //std::cout << a<<"----------------" << '\n';
    v.push_back(a);
    a.clear();
    }

    ll t[m][n];
    ll f=0;
    fr(i,0,m){
    if(v[i][0]=='#') f=1;
    if(f) t[i][0]=0;
    else t[i][0]=1;
    }
    f=0;
    fr(i,0,n){
    if(v[0][i]=='#') f=1;
    if(f) t[0][i]=0;
    else t[0][i]=1;
    }
    fr(i,1,m){
      fr(j,1,n){
        if(v[i][j]=='#') t[i][j]=0;
        else{
            t[i][j]=(t[i-1][j]+t[i][j-1])%mod;
          }
      //  std::cout << t[i][j]<<" ";
      }
    //  std::cout << '\n';
    }
    std::cout << t[m-1][n-1]%mod << '\n';

	return 0;
}
