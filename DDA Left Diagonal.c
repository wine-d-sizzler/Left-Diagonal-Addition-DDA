#include <stdio.h>
void main()
   {
     int i,j,arr[3][3],sum=0,m=0;
	 printf("Input elements in the matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("Element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("%d ",arr[i][j]);
	    printf("\n");
	 }
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3;j++)
            {
              if(j==i) 
                {
                  sum= sum+arr[i][j];
                }
            }
	}
    printf("Addition of the  left Diagonal elements is :%d\n",sum);
}
