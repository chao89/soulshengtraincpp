// CMySqrt.cpp : �������̨Ӧ�ó������ڵ㡣
//
 
#include "stdafx.h"
#include "CSqrt.h"								// difference 1�������ù��ܣ��ࣩ���ڵ�ͷ�ļ�

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double	dValue = 0.0f;
	
	cout << "Project CSqrt: print q to quit!\n" ;

	do 
	{
		cin >> dValue;

		cout << "CSqrt(" 
			<< dValue << ")= " 
			<< CSqrt::sqrt(dValue) 
			<<endl;
		//printf("CSqrt(%g) = %g\n", dValue, CSqrt::sqrt(dValue) );// difference 2��ͨ�����ࣩ���ÿ�������

	} while ( 'q' != _getch() );

	return 0;
}

