#include <iostream>
using namespace std;
int Tell(long long a,long long b){
  if(a==0&&b==0){ cout<<"YES\n"; return 0;}
  else if(a==0||b==0){ cout<<"NO\n"; return 1;}
  if(a>=b) Tell(a-2,b-1);
  else if(a<b) Tell(a-1,b-2);
}
int main()
{
    register long t;
    long long a,b;
    cin>>t;
    while(t--){
      cin>>a>>b;
      if(a==2*b||b==2*a) cout<<"YES\n";
      else if(a==0) cout<<"NO\n";
      else if(b==0) cout<<"NO\n";
      else if(a%3==0&&b%3==0) cout<<"YES\n";
      else if((a-b)%2==0 || (b-a)%2==0)cout<<"YES\n";
      else Tell(a,b);
    }
}