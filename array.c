#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];
     for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }  
  printf("The matrix is: ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("%d ",*(*(a+i)+j));
    }
  }
  
  
  for(i=0;i<3;i++)
  {
    sum=sum+a[i][i];
  }
  printf("\n sum of the digonal elements is: %d ", sum);

}


