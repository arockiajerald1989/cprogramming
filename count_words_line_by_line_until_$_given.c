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
  i=0;
  while(a[i]!='\0')
  {
    if ((a[i]!=' ' && a[i+1]==' ') ||
        (a[i]!='\n' && a[i+1]=='\n')||
        (a[i]!='\t' && a[i+1]=='\t'))
        {
          printf("%c", a[i]);
          printf("\n");
          i++;
        }
    else
      printf("%c", a[i]);
    i++;
  }
  getchar();
  getchar();
}
