#include "CShape.h"

class CLine : public CShape
{
private:
	float x1;
	float y1;
	float x2;
	float y2;

public:
	// ������״������/����
	void set();

	// ���Ƽ�����״
	void draw();

	// �ı伸����״
	void scale( float s );

};