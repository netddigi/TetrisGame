#pragma once
#include "TypeDefines.hpp"

class CBlock
{
public:
	virtual void ChangeDirection() = 0;
	virtual void ChangePosition() = 0;

	int32_t m_nDirection;	// 0(Left), 1(Up), 2(Right), 3(Down)
	int32_t m_nWidth;
	int32_t m_nHeight;
};