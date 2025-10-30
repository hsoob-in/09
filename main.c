#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
  
  int i;
  int a[SIZE]={1, 2, 3, 4, 5};
  int b[SIZE]={1, 2, 3, 4, 5};
  int flag_same = 1;
  
  
  for(i=0; i<SIZE; i++)
  { 
    if (a[i]!=b[i])
    { printf("%i번째 요소는 다름\n", i);
      flag_same = 0;
    }
    else 
    flag_same = 1;
    
  }
  
  printf("Are a and b is same? ,%d\n", flag_same);
  
  system("PAUSE");	
  return 0;
}
