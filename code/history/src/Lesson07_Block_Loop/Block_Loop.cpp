// Block_Loop.cpp : �������̨Ӧ�ó������ڵ㣬ѧϰѭ�����
//
 
#include "stdafx.h"
						

int	main()
{
	float	nParameterInput = 0;

	cout << "Project Lesson07_Block_Loop: print q to quit!";

	int arrayInt[5];
	
	for (int i=0; i< 5; i++)
	{
		cin >> arrayInt[i];
	}

	int avarage = 0;
	...

	for (int i=0; i< 5; i++)
	{
		cout << arrayInt[i];
	}

	cout << avarage;
	return 0;
}

