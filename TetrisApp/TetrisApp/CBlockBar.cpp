#include "CBlockBar.h"
#include "stdafx.h"

CBlockBar::CBlockBar()
{
	
}

void CBlockBar::ChangeDirection()
{
	int32_t nChangeVariable = 0;
	nChangeVariable = m_nWidth;
	m_nWidth = m_nHeight;
	m_nHeight = nChangeVariable;
}

void CBlockBar::ChangePosition()
{

}