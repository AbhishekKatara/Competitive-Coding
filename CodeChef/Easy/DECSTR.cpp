#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while(t--){
  int n;
  s(n);
  int a[n+n/25+1];
  for(int i=0;i<n + (n-1)/25 +1;i++){
  	a[i]=i%26;
  }
  for(int i=n+(n-1)/25;i>=0;i--){
  	printf("%c",97+a[i]);
  }
  printf("\n");
  }
	
	return 0;
}
	