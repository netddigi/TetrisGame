#pragma once
#include "CBlock.h"

class CBlockLadder : CBlock
{
public:
	CBlockLadder();
	void ChangeDirection() override;

public:
private:
	int32_t m_nShape;		// 0 : left shape 1 : right shape
};