#include "CLine.h"
#include "iostream.h"

	// ������״������/����
void CLine::set()
{
	cin >> x1 >> y1 >> x2 >> y2;
}

	// ���Ƽ�����״
void CLine::draw()
{
	cout << "��һ��ֱ��" ;
}

	// �ı伸����״
void CLine::scale( float s )
{
	float x3, y3;
	x3 = x1  + (x2 - x1)  * s;
	y3 = y1  + (y2 - y1)  * s;

	x2 = x3;
	y2 = y3;
}