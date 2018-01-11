class Military
{
    public:
        Military();
        unsigned int get_fortification();
        void set_fortification(unsigned int new_fort);
        unsigned int get_strike_tech();
        void set_strike_tech(unsigned int new_strike_tech);
        double get_funds();
        void set_funds(double new_funds);
        double get_income();
        void set_income(double new_income);
        unsigned int get_covert_level();
        void set_covert_level(unsigned int new_covert_level);

    private:

        unsigned int m_fortification;
        unsigned int m_strike_tech;
        double m_funds;
        double m_income;
        unsigned int m_covert_level;
        //Effectiveness effectiveness;
};
