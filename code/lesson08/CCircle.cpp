#include "CCircle.h"
#include "iostream.h"

	// ������״������/����
void CCircle::set()
{
	cin >> x >> y >> r;
}

	// ���Ƽ�����״
void CCircle::draw()
{
	cout << "��һ��Բ" ;
}

	// �ı伸����״
void CCircle::scale( float s )
{
	r = r * s;
}