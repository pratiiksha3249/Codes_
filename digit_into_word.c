#include <stdio.h>
#include<conio.h>
int main (){
int n,r=0,d;
printf ("enter a number");
scanf ("%d",&n);
while(n>0){

    d=n%10;
    n=n/10;
    r=(r*10)+d;
}
while(r>0){
d=r%10;
r=r/10;

switch(d)
{
case 0 : printf ("zero\t");
break;
case 1 : printf ("one\t");
break;
case 2 : printf ("two\t");
break;
case 3 : printf ("three\t");
break;
case 4 : printf ("four\t");
break;
case 5 : printf ("five\t");
break;
case 6 : printf ("six\t");
break;
case 7 : printf ("seven\t");
break;
case 8 : printf ("eight\t");
break;
case 9 : printf ("nine\t");
break;

}

}
   return 0;
}