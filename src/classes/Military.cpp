/**
 * "Military" class
 */

#include "Military.h"
#include <iostream>

unsigned int Military::get_fortification()
{
    return m_fortification;
}

void Military::set_fortification(unsigned int new_fort)
{
    m_fortification = new_fort;
}

unsigned int Military::get_strike_tech()
{
    return m_strike_tech;
}

void Military::set_strike_tech(unsigned int new_strike_tech)
{
    m_strike_tech = new_strike_tech;
}

double Military::get_funds()
{
    return m_funds;
}

void Military::set_funds(double new_funds)
{
    m_funds = new_funds;
}

double Military::get_income()
{
    return m_income;
}

void Military::set_income(double new_income)
{
    m_income = new_income;
}

unsigned int Military::get_covert_level()
{
    return m_covert_level;
}

void Military::set_covert_level(unsigned int new_covert_level)
{
    m_covert_level = new_covert_level;
}











