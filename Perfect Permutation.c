#include<stdio.h>

int main()

{
     int i,n;
     scanf("%d",&n);

     if(n%2==0)
     {

     for(i=n;i>0;i--)
     {

         printf("%d ",i);
     }


     }
     else


     {


         printf("-1");
     }

     return 0;



}


