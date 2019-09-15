#include <stdio.h>
#include <stdlib.h>

int fact( int );
void print_row( int,int);

int main()
{
  int i,t,n=0,f;
  f=90;
  printf("enter the no of rows\n");
  scanf("%d",&n);
  printf("\n");
  t=0;
  while(t < n)
  {
   for(i=0; i<f ;i++)
   {
    printf(" ");

   }
   print_row(t,0);
   //printf("hello\n");
   f--;
   t++;
  }
return 0;
}

int fact(int n)
{
 if(n==1 || n==0)
  return 1;
  else
 return n*fact(n-1);
}


void print_row(int n,int r)
{
 if(r>n)
 {
  printf("\n");
  return;
 }
printf("%d ",(fact(n))/(fact(n-r)*fact(r)));

 print_row( n , r+1);


return;

}

