#include<stdio.h>
int main()
{ int a,b;
  scanf("%d%d",&a,&b);
  int i;
  int j;
  int cnt=0;
  int sum=0;
  if(a==1)
  a=2;
for(i=a;i<=b;i++)
   {int isprime=1;
   for(j=2;j<i;j++)
   {if(i%j==0)
     {
	isprime=0;
    break;
     }
   }
 if(isprime)
   {cnt++;
    sum+=i; 
    printf("%d\n",i); 
	   }	
   	
   	
   }
	printf("%d %d",cnt,sum);
	
	
 } 
