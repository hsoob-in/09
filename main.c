#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
  
  int i, average;
  int grade[SIZE];
  int sum=0;
  
  printf("5���� ������ �Է��ϼ���: \n");
  
  for(i=0; i<SIZE; i++)
  { 
    scanf("%d", &grade[i]);
    sum += grade[i];
  }

  //for(i=0; i<SIZE; i++)
  //printf("grade[%d]=%d\n", i, grade[i]);
  
  average = sum/SIZE;
  printf("���� ���: %d\n", average);
  
  system("PAUSE");	
  return 0;
}
