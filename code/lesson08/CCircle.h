#include "CShape.h"

class CCircle : public CShape
{
private:
	float x;
	float y;
	float r;

public:
	// ������״������/����
	void set();

	// ���Ƽ�����״
	void draw();

	// �ı伸����״
	void scale( float s );

};