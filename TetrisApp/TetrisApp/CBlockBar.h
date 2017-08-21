#pragma once
#include "CBlock.h"

class CBlockBar : public CBlock
{
public:
	CBlockBar();
	void ChangeDirection() override;

public:
private:
};
