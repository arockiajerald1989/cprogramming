#include<stdio.h>
void main()
{
  int i=0, u, l, s, d;
  u=l=d=s=0;
  char a[100];
  scanf("%c", &a[i]);
  while(a[i]!='$')
  {
    i++;
    scanf("%c", &a[i]);
  }
  a[i]='\0';
  i=0;
  while(a[i]!='\0')
  {
    if (a[i] >= 65 && a[i] <= 90)
      u++;
    else if (a[i] >=97 && a[i] <=122)
      l++;
    else if (a[i] >=48 && a[i] <=57)
      d++;
    else
      s++;
    i++;
  }
  printf("u = %d, l = %d, d = %d, s = %d", u, l, d, s);
  getchar();
  getchar();
}
