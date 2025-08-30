#include <stdio.h>

  void DecToOct(int a)
  {
    int arr[100];
    int i=0;
    while(a>0)
    {
      int rem=a%8;
      arr[i]=rem;
      a/=8;
      i++;
      
    }
    for(int j=i-1;j>=0;j--)
    {
    printf("%d",arr[j]);
  }
  
}
void DecToHex(int a)
{
  char hex[100];
  int i=0;
  while(a>0)
  {
    int rem=a%16;
    if(rem<10)
    {
    hex[i]=rem+48;
  }
  else 
  {
    hex[i]=rem+55;
  }
  a/=16;
  i++;
}

for(int j=i-1;j>=0;j--)
{
  printf("%c",hex[j]);
}
printf("\n");
}
void main()
{
  int n;
  scanf("%d",&n);
  DecToHex(n);
  DecToOct(n);
}
  
