#include <stdio.h>

int main (void)
{
  int n1,n2,n3;
  int plus;
  puts("三つの整数を入力してください。");
  printf("整数1 :");  scanf("%d",&n1);
  printf("整数2 :");  scanf("%d",&n2);
  printf("整数3 :");  scanf("%d",&n3);

  plus = n1+n2+n3;
  printf("それらの和は%dです。\n",plus);
  return 0;
}