// sqrt_my.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "stdafx.h"
#include <cmath>								// difference 1�������ù��ܣ�ϵͳ�������������ڵ�ͷ�ļ�

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;

	printf("Project sqrtl: print q to quit!\n");

	do 
	{
		scanf("%lf", &dValue);

		printf("sqrtl(%g) = %g\n", dValue, sqrtl(dValue) );// difference 2��ͨ����ϵͳ�������������ÿ�������

	} while ( 'q' != _getch() );

	return 0;
}

