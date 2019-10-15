#include<stdio.h>
int main()
{
  char a[100],b[100],c[100];
  int i,j,k,cnt=0,l=0;
  for(i=0; (a[i]=getchar())!='$'; i++);
  a[i]='\0';
  for(i=0; (b[i]=getchar())!='$'; i++);
  b[i]='\0';
  for(i=0; a[i];)
  {
    for(k=i,j=0; a[k]==b[j]&&b[j];j++,k++);
    if(b[j]=='\0')
      i = k;
    else
      c[l++] = a[i++];
  }
  c[l]='\0';
  printf("%s\n", c);
  getchar();
  getchar();
}
