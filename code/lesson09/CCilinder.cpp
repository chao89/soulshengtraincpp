#include "CCilinder.h"

#include "iostream.h"
#define PI	3.14

void CCilinder::length()
{
	//cout << "Բ���ܳ�" << endl;
}

void CCilinder::square()
{
	//cout << "Բ�����" << endl;
	s = 2 * PI * r * r + 2 * PI * r * h;
}

void CCilinder::volume()
{
	//cout << "Բ�����" << endl;
	v = PI * r * r * h;
}


void CCilinder::output()
{
	cout << "Բ��������" << endl;
	cout << "�����" << v << endl;
	cout << "�����" << s << endl;
}

CCilinder::CCilinder(float r, float h)
{
	this->r = r;
	this->h = h;
}