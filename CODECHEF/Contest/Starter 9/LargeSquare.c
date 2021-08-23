#include <stdio.h>
#include <math.h>

int main ()
{
  int T;
  scanf("%d",&T);

  while(T--)
  {
      int N,A;
      scanf("%d %d",&N,&A);
      int s=sqrt(N);
      printf("%d\n",s*A);

  }


  return 0;
}
