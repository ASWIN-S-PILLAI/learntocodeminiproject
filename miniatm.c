



//MINI ATM




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{float x,y; char a[1000]; int b,n;
 printf("Enter name ");
 gets(a);
 
 printf("Enter Acc No ");
 scanf("%d",&b);
 
 printf("Enter Initial Ammount ");
 scanf("%f",&x);
 
 
 th:
 
 printf("Select transaction \n");
 printf("1.DEPOSIT\n2.WITHDRAWAL\n");
 scanf("%d",&n);
 
 switch(n)
{case 1:{ printf("Enter Ammount\n");
scanf("%f",&y);
x=x+y;
printf("Balance=%0.2f",x);
break;}

case 2: {  printf("Enter Ammount\n");
scanf("%f",&y);

if(y>x)
printf("Insufficient Acc Balance");

else
{x=x-y;
printf("Balance=%0.2f",x);

}
	break;
}

default: { printf("choose correct option");
goto th;
	break;
}

}
 }
