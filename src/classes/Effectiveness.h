class Effectiveness
{
    public:

        Effectiveness();

        /* STRIKE */
        unsigned int get_strike_rating();
        void set_strike_rating(unsigned int new_strike_rating);

        /* DEFENSIVE */
        unsigned int get_def_rating();
        void set_def_rating(unsigned int new_def_rating);

        /* SPY */
        unsigned int get_spy_rating();
        void set_spy_rating(unsigned int new_spy_rating);

        /* SENTRY */
        unsigned int get_sentry_rating();
        void set_sentry_rating(unsigned int new_sentry_rating);

    private:

        unsigned int m_strike_rating;
        unsigned int m_def_rating;
        unsigned int m_spy_rating;
        unsigned int m_sentry_rating;
};
