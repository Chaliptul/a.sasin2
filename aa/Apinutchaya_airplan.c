#include<stdio.h>
int main()
{
	double A,B,C,X;
	double result;
	double sum;

	printf("�ӹǹ���: ");
	scanf("%lf",&A);

	printf("��鹷������������ʾ��: ");
	scanf("%lf",&B);

	printf("���˹ѡ����ͧ�Թ: ");
	scanf("%lf",&C);

	printf("�����ѹ���: ");
	scanf("%lf",&X);

	if  (X == 0) {
		result = A * B;
		X = C / result;

	printf("�����ѹ��� = %lf\n" ,X);

	}else if (A == 0) {
		result = C / X;
		A = result / B;

	printf("�ӹǹ��� = %lf\n" ,A);

	}else if (B == 0) {
			result = C / X;
			B = result / A;

		printf("��鹷������������� = %lf\n" ,B);

	}else if (C == 0) {
				result = A * B;
				C = X * result;

			printf("��鹷������������� = %lf\n" ,C);

	 }

return 0;
}
