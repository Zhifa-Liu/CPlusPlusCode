#pragma once

#include "coordinate.h"

	/**
	 * 步骤类，表示迷宫路线中的每一步
	 */
	class step {
	public:
		int to; //下一步的方向，0-7表示从北开始顺时针的八个方向
		coordinate c;
	public:
		step(int to, const coordinate& c);
	};


