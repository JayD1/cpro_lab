#include<stdio.h>
int main()
{
	int a[100],first=0,last,size,i;
	scanf("%d",&size);
	last = size-1;
	printf("Enter the numbers \n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	int elm,mid,loc;
	printf("Enter search element\n");
	scanf("%d",&elm);
	while(first<=last)
	{
		mid=(first+last)/2;
	if(a[mid]==elm)
	{
		loc=mid+1;
		break;
	}
	else if(a[mid]>elm)
		last = mid-1;
	else
		first=mid+1;
	}
	printf("%d\n",loc);
} 
