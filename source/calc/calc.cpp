#define DLLDIR_EX
#include <calc/calc.h>

calc::calc( int initial )
:  m_current(initial)
{
}

void calc::add( int value )
{
	m_current=+value;
}

int calc::get() const
{
    return m_current;
}

calc::~calc()
{
}


