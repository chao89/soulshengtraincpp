/*
��Բ�뾶r��Բ����h ��Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� 
��scanf�������ݣ���������������ʱҪ������˵����ȡС�������λ���֡�
������ PI��3.14
*/

//���룺������������r��h

//�����Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� ������λС����ÿ���������

#include "stdio.h"
#define PI 3.14

int main()
{
	double r,h;
	double C1, Sa, Sb, Va, Vb;

	scanf("%lf%lf",&r,&h);

	// ����
	C1 = 2 * PI * r;
	Sa = r * r * PI;

	/*
��������ʽ: V��=4/3 �� r^3 
��������ʽ: S��=4�� r^2 
  */
	Sb = 4 * PI * r * r;
	Va = 4 * PI * r * r * r/3;
	Vb = h * r * r * PI;


	printf("C1=%.2lf\n", C1);
	printf("Sa=%.2lf\n", Sa);
	printf("Sb=%.2lf\n", Sb);
	printf("Va=%.2lf\n", Va);
	printf("Vb=%.2lf\n", Vb);

	return 0;
}

