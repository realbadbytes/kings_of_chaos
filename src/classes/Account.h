#include "Military.h"
#include <string>

using std::string;

class Account
{
    public:

        Account();

        const string get_name();

        unsigned const int get_race();

        unsigned int get_rank();
        void set_rank(unsigned int new_rank);

        unsigned int get_personnel();
        void set_personnel(unsigned int new_personnel);

    private:

        const string m_name;
        const unsigned int m_race;
        unsigned int m_rank;
        unsigned int m_personnel;
        Military m_mil;
};
