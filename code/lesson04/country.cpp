#include <stdio.h>
#include <string.h>

#define N 10

void swap(char n1[], char n2[], int count)
{
	char temp[30];
	strcpy(temp, n1);
	strcpy(n1, n2);
	strcpy(n2, temp);
}

void sortCountry( char n[][30] , int count )
{
	// �����㷨��	name[0][0]  .... name[0][1]
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if( n[i][0]	> n[j][0] )
			{
				swap( n[i], n[j] , 30);
			} 
		}
	}
}


int main()
{
	/*
	����Ӣ����������
	���룺���ҵ�Ӣ�����֣����
	��������ҵ�Ӣ�����֣�������ĸ˳��
	���ʣ�		char name[30];
	������ʣ�  char names[10][30];
	��������	name[0][30]  ....  name[9][30]
	�����㷨��	name[0][0]  .... name[0][1]
	*/
	char names[N][30];

	for(int i= 0; i< N; i++)
	{
		for(int j= 0;j<30;j++)
		{
			names[i][j] = '\0';
		}
	}

	for(i= 0; i< N; i++)
	{
		gets(names[i]);
	}

	// ����
	sortCountry( names , N);

	printf("�����\n");
	for(i= 0; i< N; i++)
	{
		printf("%s\n", names[i]);
	}

	return 0;
}