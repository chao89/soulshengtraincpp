#include "CCircle.h"

#include "iostream.h"
#define PI	3.14

void CCircle::length()
{
	//cout << "Բ �ܳ�" << endl;
	l = 2 * PI * r;
}

void CCircle::square()
{
	//cout << "Բ ���" << endl;
	s = PI *  r * r;
}

void CCircle::volume()
{
	//cout << "Բ ���" << endl;
}

void CCircle::output()
{
	cout << "Բ ������" << endl;
	cout << "�ܳ���" << l << endl;
	cout << "�����" << s << endl;
}

CCircle::CCircle(float r)
{
	this->r = r;
}