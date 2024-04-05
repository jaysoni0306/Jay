#include <stdio.h>
void showbits (int n)
{
  int i, k, andmask;
 
  for (i = 15; i >= 0;i--)
  {
    andmask = 1 << i;
    k = n & andmask;
    k == 0 ? printf ("0") : printf ("1");
  }
} 
 
// Driver code
int main() 
{
	int a= 2;
  showbits(a);
  printf("\n");
 showbits(~a);
  return 0;
}

