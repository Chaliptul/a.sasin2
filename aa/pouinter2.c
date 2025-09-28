#include <stdio.h>
void main() {
	int array[3][3][3],sum=0;
	int i,j,k,a,b,c;


	printf("array [3][3][3]\n");
	printf("array1[x] = ");
	scanf("%d",a);

	printf("array2[x] = ");
	scanf("%d",b);

	printf("array3[x] = ");
	scanf("%d",c);

	printf("array [x][x][x] = [%d][%d][%d]",a,b,c);

	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			for(k=0;k<c;k++){
				printf("array [%d][%d][%d] = ",i,j,k);
				scanf("%d",&array[i][j][k]);
				sum=sum+array[i][j][k];

				}
			}
		}
		printf("summation of this 3D array = %d",sum);
}
