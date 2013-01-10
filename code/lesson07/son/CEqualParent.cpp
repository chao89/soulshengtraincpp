
#include "CEqualParent.h"
#include "iostream.h"
#include "math.h"

	void CEqualParent::input()
	{
		cout << "���뷽��ϵ��:" << endl;
		cin >> a >> b >> c;
	}
	void CEqualParent::calculate()
	{
		cout << "�ⷽ��:" << endl;
		
	float d = deta();
	if( d>=0 )
	{
		x1 = (-b + sqrt( d ) )/(2*a);
		x2 = (-b - sqrt( d ) )/(2*a);
	}
	

	}
	void CEqualParent::output()
	{
		cout << "������̽�:" << endl;
		if( deta() >= 0 )
		{
			cout << x1 << endl;
			cout << x2 << endl;
		}
		else
		{
			cout << "�޽�" << endl;
		}
	}


	float CEqualParent::deta()
	{
		float d = b*b - 4*a*c;
		return d;
	}

	CEqualParent::CEqualParent(float a1, float b1, float c1)
	{
		a = a1;
		b = b1;
		c = c1;
	}

	CEqualParent::CEqualParent(float a1)
	{
		a = a1;
		cin >> b >> c;
	}

	CEqualParent::CEqualParent()
	{
		input();
	}