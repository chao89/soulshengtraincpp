

#include <iostream>					//  Tip 1����������cout��C++��׼����������������ͬC���Ե�printf
using namespace	std;				//	Tip 2��C++��׼��ĺ�������������std �����ֿռ䣬

#include "UserFunctions.h"

void read(int &nVariableReference) 
{ 
	write(nVariableReference, "Before input: nVariable = ");
	cin >> nVariableReference;		
	write(nVariableReference, "After input: nVariable = ");
}									


void cook(int &nVariableReference)							
{ 									
	write(nVariableReference, "Before cook: nVariable = ");
	nVariableReference = nVariableReference << 10;				
	write(nVariableReference, "After cook: nVariable = ");
} 									

void write(int nValue, char* messagePrompt) 						
{			
	cout << messagePrompt ;
	cout << nValue << endl;
}		
