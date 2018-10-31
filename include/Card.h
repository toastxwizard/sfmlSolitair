#ifndef CARD_H
#define CARD_H

class Card
{
    public:
        enum Suit{
            HEARTHS,
            DIAMODS,
            SPADES,
            CLOVERS
        };

        enum Number{
            ONE,
            TWO,
            THREE,
            FOUR,
            FIVE,
            SIX,
            SEVEN,
            EIGHT,
            NINE,
            TEN,
            JACK,
            QUEEN,
            KING
        };

        Card();
        virtual ~Card();

    private:
        Suit suit;
        Number number;

        Number getNumber();
        Suit getSuit();
        void setNumber(Number);
        void setSuit(Suit);

        void operator= (Suit);
        void operator= (Number);
};

#endif // CARD_H
