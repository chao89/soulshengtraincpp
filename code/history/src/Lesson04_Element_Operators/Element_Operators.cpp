// Element_Operators.cpp : �������̨Ӧ�ó������ڵ㣬ѧϰC++�������Operators
//
 
#include "stdafx.h"

#include "StructEquationParameter.h"
#include "StructEquationSolution.h"

#include <cmath>


int	main()
{
	StructEquationParameter	paramIn;
	StructEquationSolution	resultOut;

	paramIn.a = 1.0f;
	paramIn.b = 2.0f;
	paramIn.c = 1.0f;

	float disc = paramIn.b * paramIn.b - 4 * paramIn.a * paramIn.c;

	float partReal	=	- paramIn.b/(2*paramIn.a);
	float partImage	=	sqrt(disc)/(2*paramIn.a);

	resultOut.x1 = partReal + partImage;
	resultOut.x2 = partReal - partImage;

	cout << "\t resultOut.x1 = " << resultOut.x1 
		 << "\t resultOut.x2 = " << resultOut.x2 ;

	return 0;
}

