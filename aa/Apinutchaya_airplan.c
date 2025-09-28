#include<stdio.h>
int main()
{
	double A,B,C,X;
	double result;
	double sum;

	printf("จำนวนล้อ: ");
	scanf("%lf",&A);

	printf("พื้นที่ที่ล้อสัมผัสพื้น: ");
	scanf("%lf",&B);

	printf("น้ำหนักเครื่องบิน: ");
	scanf("%lf",&C);

	printf("ความดันล้อ: ");
	scanf("%lf",&X);

	if  (X == 0) {
		result = A * B;
		X = C / result;

	printf("ความดันล้อ = %lf\n" ,X);

	}else if (A == 0) {
		result = C / X;
		A = result / B;

	printf("จำนวนล้อ = %lf\n" ,A);

	}else if (B == 0) {
			result = C / X;
			B = result / A;

		printf("พื้นที่ที่ล้อสัมผัส = %lf\n" ,B);

	}else if (C == 0) {
				result = A * B;
				C = X * result;

			printf("พื้นที่ที่ล้อสัมผัส = %lf\n" ,C);

	 }

return 0;
}
