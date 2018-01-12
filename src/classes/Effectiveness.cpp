/** 
 * "Effectiveness" class
 */

#include "Effectiveness.h"
#include <iostream>

/* STRIKE */
unsigned int Effectiveness::get_strike_rating()
{
    return m_strike_rating;
}

void Effectiveness::set_strike_rating(unsigned int new_strike_rating)
{
    m_strike_rating = new_strike_rating;
}

/* DEFENSIVE */
unsigned int Effectiveness::get_def_rating()
{
    return m_def_rating;
}

void Effectiveness::set_def_rating(unsigned int new_def_rating)
{
    m_def_rating = new_def_rating;
}

/* SPY */
unsigned int Effectiveness::get_spy_rating()
{
    return m_spy_rating;
}

void Effectiveness::set_spy_rating(unsigned int new_spy_rating)
{
    m_spy_rating = new_spy_rating;
}

/* SENTRY */
unsigned int Effectiveness::get_sentry_rating()
{
    return m_sentry_rating;
}

void Effectiveness::set_sentry_rating(unsigned int new_sentry_rating)
{
    m_sentry_rating = new_sentry_rating;
}


