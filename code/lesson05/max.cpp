#include "stdio.h"

int main()
{
	// ��дһ����������a��b��c����ֵ������������ֵ��
	// һ�����飬�ֱ�Ϊa b c
	// a b c����������
	int a,b,c;
	int m;
	scanf("%d%d%d",&a,&b,&c);

	m = a;
	if( m<b )
		m = b;
	if( m<c )
		m = c;

	printf("%d",m);

	return 0;
}