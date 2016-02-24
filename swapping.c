#include<stdio.h>
#include</home/bossmool/sort.h>
extern insertion();
int main()
{

printf("enter the values of x and y\n");
scanf("%d%d",&x,&y);
printf("before swapping\nx=%d\ny=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping \nx=%d\ny=%d\n",x,y);
insertion();
}


