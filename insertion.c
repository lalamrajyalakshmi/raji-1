#include<stdio.h>
#include</home/bossmool/sort.h>
void insertion()
{

printf("enter number of elements\n");
scanf("%d",&n);
printf("enetr %d integer \n",n);
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
for(c=1;c<=n-1;c++)
{
d=c;
while(d>0&&array[d]<array[d-1])
{
t=array[d];
array[d]=array[d-1];
array[d-1]=t;
d--;
}
}
printf("sorted list");
for(c=0;c<=n;c++)
{
printf(" %d ",array[c]);
}
}

