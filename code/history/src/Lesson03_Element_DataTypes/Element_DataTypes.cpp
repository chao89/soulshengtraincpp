// Element_DataTypes.cpp : �������̨Ӧ�ó������ڵ㣬ѧϰC++����������DataTypes
//
 
#include "stdafx.h"

#include "StructEquationSolution.h"


int	main()
{
	// double
	double partReal	=	3.1415926f;
	cout << "\t partReal = " << partReal << endl;		// ������ʧ��

	// bool
	bool	bValid;
	bValid = true;
	cout << "\t bValid = " << bValid << endl;

	// struct
	StructEquationSolution	resultOut;

	resultOut.x1 = 0.707f;
	resultOut.x2 = -0.707f;

	cin >> resultOut.x1 >> resultOut.x2 ;

	cout << "\t resultOut.x1 = " << resultOut.x1 
		 << "\t resultOut.x2 = " << resultOut.x2 
		 << endl;

	return 0;
}

