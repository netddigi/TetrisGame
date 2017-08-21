#pragma once
#include "CBlock.h"

class CBlockL : CBlock
{
public:
	CBlockL();
	void ChangeDirection() override;
	void ChangePosition() override;

public:
private:
	int32_t m_nShape;		// 0 : left shape 1: right shape
};