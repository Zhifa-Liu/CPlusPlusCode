#pragma once

#include "coordinate.h"

	/**
	 * �����࣬��ʾ�Թ�·���е�ÿһ��
	 */
	class step {
	public:
		int to; //��һ���ķ���0-7��ʾ�ӱ���ʼ˳ʱ��İ˸�����
		coordinate c;
	public:
		step(int to, const coordinate& c);
	};


