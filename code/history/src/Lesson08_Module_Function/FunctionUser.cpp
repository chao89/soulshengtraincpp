// FunctionUser.cpp : �������̨Ӧ�ó������ڵ㣬���ö��η�����⺯��solveEquation
//
 
#include "stdafx.h"
//#include "FunctionEquationSolve.h"	
#include "SuperStruct.h"

int	main()
{
	StructEquationSolve equationSolver;

	StructEquationSolve* pSolver;
	pSolver = &equationSolver;

	//equationSolver.solveEquation();
	//pSolver->solveEquation();
	StructEquationSolve&	citeSolver	= equationSolver; 

	citeSolver.solveEquation();


	StructEquationParameter	equationParamIn;
	StructEquationSolution	equationSolutionOut;
    
	string message = "Project Lesson08_Module_Function: print q to quit!";
	showPromptMessage( message );

	solveEquation(equationParamIn, equationSolutionOut);

/*
	inputParameter(equationParamIn);

	bool bValid = validateParameter(equationParamIn);

	if (bValid)
	{
		solveEquation(equationParamIn, equationSolutionOut);

		outputResult(equationSolutionOut);
	} 
	else
	{
		showPromptMessage("No Solutions!");
	}
*/

	return 0;
}

