#include "CBall.h"

#include "iostream.h"
#define PI	3.14

void CBall::length()
{
	//cout << "�����ܳ�" << endl;
}

void CBall::square()
{
	//cout << "�������" << endl;
	s = 4 * PI * r * r;
}

void CBall::volume()
{
	//cout << "�������" << endl;
	v = PI * r * r * r * 4/3;
}

void CBall::output()
{
	cout << "����������" << endl;
	cout << "�����" << v << endl;
	cout << "�����" << s << endl;
}

CBall::CBall(float r)
{
	this->r = r;
}