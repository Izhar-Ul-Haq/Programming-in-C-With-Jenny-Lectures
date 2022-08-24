#include <stdio.h>
int main()
{
  int arr[5] = {0, -1, 3, 5, 2};
  int arr_1[] = {1,2,3,4,5,6,7,8,9};
  int arr_2[5] = {1,6,7};
  printf("\n");
  for(int i = 0;i<5;i++)
  {
    printf("%d\n", arr[i]);
  }
  printf("\n");
  for(int i = 0;i<10;i++)
  {
    printf("%d\n", arr_1[i]);
  }
  printf("\n");
  for(int i = 0;i<5;i++)
  {
    printf("%d\n", arr_2[i]);
  }
  return 0;
}