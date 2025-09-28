#include <stdio.h>
int main (){
	int days = 7; // 1 สัปดาห์
	float a =  2.63; //วันคู่เดินหน้า 2.63
	float b = -0.28; //วันคี่ถอยหลัง 0.28
	float sum = 0;
	int i;
	float position;
	float n;
        printf("Enter the depth : ");
        scanf ("%f", &position);
	printf("Day 1 : %02f \n",a);
	sum = a+b;
	printf("Day 2 : %f \n",sum);
 	sum = sum+a;
	printf("Day 3 : %f \n",sum);
	sum = sum+b;
	printf("Day 4 : %f \n",sum);
	sum = sum+a;
	printf("Day 5 : %f \n",sum);
	sum = sum+b;
	printf("Day 6 : %f \n",sum);
	sum = sum+a;
	printf("Day 7 : %f \n",sum);
	sum = sum+b;
  	printf(" In the 7 days of week  go forward in odd days : %f \n",a*4);
	printf(" In the 7 days of week  getback in even day : %f \n",-(b*3));
	printf(" Total distance : %f \n",(a*4)+(b*3));
	if ( position < 9.680)
        printf(" the snail can escape \n");
    else
        printf("the snail can not escape \n");

        return 0;




	}

