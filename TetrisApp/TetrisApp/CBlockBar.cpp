#include "CBlockBar.h"
#include "stdafx.h"

CBlockBar::CBlockBar()
{
	memset(m_arnShape, 0, sizeof(m_arnShape));
	m_arnShape[0][3] = 1;
	m_arnShape[1][3] = 1;
	m_arnShape[2][3] = 1;
	m_arnShape[3][3] = 1;
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