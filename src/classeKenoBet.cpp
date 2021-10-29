#include "../include/classeKenoBet.h"
#include "../include/funcoes.h"

//! Creates an empty Keno bet.
KenoBet::KenoBet() : m_wage(0.0)
{}


/*! Adds a number to the spots only if the number is not already there.
    @param spot_ The number we wish to include in the bet.
    @return T if number chosen is successfully inserted; F otherwise. */
bool KenoBet::add_number( number_type spot_ )
{
    std::vector <number_type>::iterator i;
    position_type contador=0;

    for (i = m_spots.begin(); i < m_spots.end(); ++i){   
        if (spot_ == m_spots.at(contador)){
            return false;
        }
        contador++;
    }
    m_spots.push_back(spot_);
    return true;
}


/*! Sets the amount of money the player is betting.
    @param wage_ The wage.
    @return True if we have a wage above zero; false otherwise. */
bool KenoBet::set_wage( cash_type wage_ )
{   
    m_wage = wage_;
    if (wage_ > 0){
        return true;
    }
    return false;
}


//! Resets a bet to an empty state.
void KenoBet::reset( void )
{
    m_spots.clear();
    m_wage = 0;
    bet_round = 0;
}


/*! Retrieves the player's wage on this bet.
    @return The wage value. */
cash_type KenoBet::get_wage( void ) const
{
    return m_wage;
}


/*! Returns to the current number of spots in the player's bet.
    @return Number of spots present in the bet. */
size_t KenoBet::size( void ) const
{
    return m_spots.size();
}


/*! Determine how many spots match the hits passed as argument.
    @param hits_ List of hits randomly chosen by the computer.
    @return An vector with the list of hits. */
set_of_numbers_type
KenoBet::get_hits( const set_of_numbers_type & sorteados ) const
{   
    set_of_numbers_type hits;

    for(position_type i=0 ; i<20 ; ++i){
        for(position_type j=0 ; j < static_cast<position_type>(size()); ++j){  
            if(m_spots.at(j) == sorteados.at(i)){   
                hits.push_back(m_spots.at(j));
            }
        }
    }
    return hits;
}


/*! Return a vector< spot_type > with the spots the player has picked so far.
    @return The vector< spot_type > with the player's spots picked so far. */
set_of_numbers_type KenoBet::get_spots( void ) const
{
    return m_spots;
}


//! Define a quantidade de dinheiro que o jogador vai apostar em cada rodada
void KenoBet::set_bet_round( position_type &NR )
{
    bet_round = (m_wage / NR);
}


/*! Devolve o valor apostado pelo jogador em cada rodada.
            @return Valor apostado em cada rodada. */
cash_type KenoBet::get_bet_round( void ) const
{
    return bet_round;
}
