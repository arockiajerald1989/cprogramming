#include<stdio.h>
void main()
{
  int i=0, w=0, l=0, c=0;
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
    if ((a[i]!=' ' && a[i+1]==' ') ||
        (a[i]!='\n' && a[i+1]=='\n')||
        (a[i]!='\t' && a[i+1]=='\t'))
        w++;
    else if (a[i]=='\n')
      l++;
    else
      c++;
    i++;
  }
  printf("w = %d, l = %d, c = %d", w, l, c);
  getchar();
  getchar();
}
