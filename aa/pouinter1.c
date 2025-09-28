#include <stdio.h>

void main(){
	int arr[20];
	int sum=0,avr;
	int *p,i;
	p=&arr[0];
	for( i=0; i<20;i++)
	{
		printf(" array[%d]=",i);
		scanf("%d",&arr[i]);

		sum=sum+arr[i];
		if(i == 19){
			avr=sum/20;
			printf(" Average of this array is %d \n : ",avr);


			}
		}
	}