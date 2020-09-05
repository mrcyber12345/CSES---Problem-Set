#include <stdio.h>
int main()
{
  long long n , Rsum  = 0 ,  items ;
  scanf("%lld",&n);
  Rsum  = (n * (n + 1)) >> 1;
  for(long long i = 0 ; i < n-1;i++){
     scanf("%lld",&items);
     Rsum -= items ;
   }
  printf ("%lld",Rsum);
  return 0;
}


 
 
 