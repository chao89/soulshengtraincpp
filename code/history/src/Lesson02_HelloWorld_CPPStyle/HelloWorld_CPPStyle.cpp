// HelloWorld_CPPStyle.cpp : �������̨Ӧ�ó������ڵ㣬C++ģʽ��HelloWorld����
//
 
#include "stdafx.h"

int	main()
{
	int nValue = 100;
	cout << "Hello World!" << '\n' << nValue;

	struct  Vector3
	{
		float a,b,c;
	} ;

	struct  Vector3 pnt3D;
	pnt3D.a = 100;

	return 0;
}


//	Tip 3��cout������豸��һ�������Ļ����������ֱ���������ͬprintf��
//	���������ϲ��Ǻ���������ϵͳ�����һ��ȫ�ֱ�����
//  ������������ڽṹ��struct�������ṹ�����֧�������'.'��
//  ��cout֧�������'<<'��

//  "cin >> "�����ӱ�׼�������һ��ֵ����C���Ե�scanf��Ӧ���÷����£�
//  int nInput; cin >> nInput ;