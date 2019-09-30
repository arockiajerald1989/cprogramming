#include<stdio.h>
void main()
{
  int i=0;
  char a[100];
  scanf("%c", &a[i]);
  while(a[i]!='$')
  {
    i++;
    scanf("%c", &a[i]);
  }
  a[i]='\0';
  printf("%s", a);
  getchar();
  getchar();
}
