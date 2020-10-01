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
      string s,t;
      std::cin >> s>>t;
      ll n1=s.length(),n2=t.length();
      ll dp[n1+1][n2+1];
      fr(i,0,n1+1){
        fr(j,0,n2+1){
          if(i==0||j==0) dp[i][j]=0;
          else{
            if(s[i-1]==t[j-1]){
              dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
          }
        }
      }
    //  std::cout << dp[n1][n2] << '\n';
      ll i=n1,j=n2;
      string ans;
      while(i>0&&j>0){
        if(s[i-1]==t[j-1]){
          ans.push_back(s[i-1]);
          i--;
          j--;
        }
        else{
          if(dp[i-1][j]>dp[i][j-1]) i--;
          else j--;
        }
        //std::cout << i<<"------------ "<<j<<"------"<<ans << '\n';
      }
      reverse(all(ans));
      std::cout << ans << '\n';

	return 0;
}
