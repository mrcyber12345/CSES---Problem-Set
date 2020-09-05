#include <bits/stdc++.h>
using namespace std;
typedef long long big;
typedef long l;
inline big POW(big n , big by)
{
  big result=1,i; 
  for(i=1;i<=n;i++) result = result * 2 % by; 
  return result%by;
}
int main()
{
  long n;
  long long result;
  cin>>n;
  result = POW(n,1000000007);
  cout<<result ;
}