#include "stdio.h"
#include <stdlib.h>
#include "time.h"

int main()
{
	char c1,c2;

	/* P, Y, O
	P > Y
	P < O
	Y > O
	*/
	printf("�ҳ�:");
	scanf("%c", &c1);

	srand( time(NULL) );
	int n = rand() % 3;
	if( n == 0 )
		c2 = 'P';
	else if( n == 1 )
		c2 = 'Y';
	else
		c2 = 'O';

	if( c1=='P' )
	{
		if( c2=='P' )
			printf("ƽ��");
		else if( c2=='Y')
			printf("1Ӯ��");
		else
			printf("2Ӯ��");
	}
	else if( c1=='Y' )
	{
		if( c2=='P' )
			printf("2Ӯ��");
		else if( c2=='Y')
			printf("ƽ��");
		else
			printf("1Ӯ��");
	}
	else
	{
		if( c2=='P' )
			printf("1Ӯ��");
		else if( c2=='Y')
			printf("2Ӯ��");
		else
			printf("ƽ��");
	}



	return 0;
}