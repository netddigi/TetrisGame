#pragma once
#include "CBlock.h"

class CBlockBar : public CBlock
{
public:
	CBlockBar();
	void ChangeDirection() override;
	void ChangePosition() override;

public:
private:
};
