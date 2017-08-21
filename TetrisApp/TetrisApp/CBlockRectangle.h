#pragma once
#include "CBlock.h"

class CBlockRectangle : CBlock
{
public:
	CBlockRectangle();
	void ChangeDirection() override;
	void ChangePosition() override;

public:
private:
};