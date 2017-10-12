#include<stdio.h>

void matrix_multiply(int m1[4][4], int m2[4][4])
{
	int result[4][4];
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			result[i][j]=0;
			for(k=0;k<4;k++)
				result[i][k]+=m1[i][j]*m2[j][k];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",result[i][j]);
		printf("\n");
	}
}

int main()
{
	int m1[4][4],m2[4][4],i,j;
	for(i=0;i<4;i++)
        {       
                for(j=0;j<4;j++)
			m1[i][j]=i+j;
	}
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
			m2[i][j]=i+j;
	}
	for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                        printf("%d ",m1[i][j]);
		printf("\t");
		for(j=0;j<4;j++)
			printf("%d ",m2[i][j]);
                printf("\n");
        }
	matrix_multiply(m1, m2);
	return 0;
}
