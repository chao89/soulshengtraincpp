
//#include <iostream>					//  Tip 2����������cout��C++��׼����������������ͬC���Ե�printf
//using namespace	std;				//	Tip 3��C++��׼��ĺ�������������std �����ֿռ䣬

#include <stdio.h>					

#include "UserFunctions.h"

void read(int *nVariableReference) 
{ 
	write(nVariableReference, "Before input: nVariable = ");
	//cin >> nVariableReference;		
	scanf("%d", nVariableReference);
	write(nVariableReference, "After input: nVariable = ");
}									


void cook(int *nVariableReference)							
{ 									
	write(nVariableReference, "Before cook: nVariable = ");
	*nVariableReference = *nVariableReference << 10;				
	write(nVariableReference, "After cook: nVariable = ");
} 									

void write(int *nValue, char* messagePrompt) 						
{			
	//cout << messagePrompt ;
	//cout << nValue << endl;
	printf("%s", messagePrompt);
	printf("%d\n", *nValue);
}		
