// FunSqrt.cpp : �������̨Ӧ�ó������ڵ㣬�����Զ��忪������mySqrt
//
 
#include "stdafx.h"
#include "FunMySqrt.h"							// difference 1�������ù��ܣ��Զ��壩�����������ڵ�ͷ�ļ�

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;

	printf("Project FunSqrt: print q to quit!\n");

	do 
	{
		scanf("%lf", &dValue);

		printf("mySqrt(%g) = %g\n", dValue, mySqrt(dValue) );// difference 2��ͨ�����Զ��壩�����������ÿ�������

	} while ( 'q' != _getch() );

	return 0;
}

