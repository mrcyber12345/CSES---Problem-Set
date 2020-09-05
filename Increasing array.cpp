#include <bits/stdc++.h>
#define LOOP(i,n) for( i = 0;i < n-1 ; i++)
using namespace std;
typedef long long ll;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n , next, count = 0 , prev , i;
  cin>>n>>prev;
  LOOP(i,n){
    cin>>next;
      if(prev>next) count += prev-next;
      else prev = next;
  }
  cout<<count;
}