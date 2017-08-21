#pragma once
#include "CBlock.h"

class CBlockT : CBlock
{
public:
	CBlockT();
	void ChangeDirection() override;

public:
private:
};