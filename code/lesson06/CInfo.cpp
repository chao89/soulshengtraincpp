#include "CInfo.h"

#include "stdio.h"
#include "iostream.h"
#include "string.h"

	void Info::input()
	{
		cout << "������������Ϣ" ;
		cin >> name >> id >> height ;	
	}

	void Info::input(char str[])
	{
		cout << "ֻҪ������ѧ�š������Ϣ" ;
		strcpy(name, str);
		cin >> id >> height ;	
	}

	void Info::input(int i)
	{
		cout << "ֻҪ�����������������Ϣ" ;
		id = i;
		cin >> name >> height ;	
	}

	void Info::output()
	{
		cout << name << endl 
		<< id  << endl 
		<< height << endl;
	}