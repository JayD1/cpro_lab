#include<stdio.h>

int a3[100];

void merge(int a1[100], int sz1, int a2[100], int sz2)
{
	int i=0,j=0,k=0;
	while((i<sz1)||(j<sz2))
	{
		if(a1[i]<=a2[j])
			a3[k++]=a1[i++];
		else
			a3[k++]=a2[j++];
	}
	for(i=0;i<k;i++)
		printf("%d ",a3[i]);
	printf("\n");
}

int main()
{
	int i,sz1,sz2;
	scanf("%d %d",&sz1,&sz2);
	int a1[sz1],a2[sz2];
	for(i=0;i<sz1;i++)
		scanf("%d",&a1[i]);
	for(i=0;i<sz2;i++)
		scanf("%d",&a2[i]);
	merge(a1, sz1, a2, sz2);
	return 0;
}
