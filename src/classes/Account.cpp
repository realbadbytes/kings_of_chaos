
/**
 * "Account" class
 */

#include "Account.h"
//#include "Military.h"
//#include <string>
#include <iostream>

using namespace std;

const string Account::get_name()
{
    return m_name;
}

const unsigned int Account::get_race()
{
    return m_race;
}

unsigned int Account::get_rank()
{
    return m_rank;
}

void Account::set_rank(unsigned int new_rank)
{
    m_rank = new_rank;
}

unsigned int Account::get_personnel()
{
    return m_personnel;
}

void Account::set_personnel(unsigned int new_personnel)
{
    m_personnel = new_personnel;
}
