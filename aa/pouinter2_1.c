#include <stdio.h>
void main() {
    int array[3][3][3]= {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };
    int sum = 0,avr;
    int count = 0;
    int *p,i,j,k;
    p=&array[0][0][0];

	   for (i=0;i<3;i++);{
		    for (j=0;j<3;j++); {
		               for (k = 0; k < 3; k++); {
		                   sum = +array[i][j][k];
		                   printf("n (%d)(%d)(%d)=",i,j,k);
		                   scanf("%d",&array[i][j][k]);
		                   count++;
		         }
        	}
	    }

			avr=sum/count;
			printf("summation of this array 3 d : %d\n", sum);
		    printf("Member of this array: %d\n", count);
		    printf("Average of this array 3 d: %.2f\n", avr);
		    return 0;

}
