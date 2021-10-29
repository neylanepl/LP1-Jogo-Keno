#ifndef CLASSE_KENO_BET
#define CLASSE_KENO_BET

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <random>

using number_type = unsigned short int; //<! data type for a keno hit.
using cash_type = float; //<! Defines the wage type in this application.
using set_of_numbers_type = std::vector< number_type >;
using position_type = int; //<! Tipo de dado para as posicões do fator na tabela e para os demais índices.
using factor_type = float; //<! Tipo de dado para os fatores da tabela.
using symbol_type = char; //<! Tipo de dado para caracteres do arquivo.
using text_type = std::string; //<! Tipo de dado para as linhas do arquivo.
using map_type = std::map<std::pair<position_type, position_type>, factor_type>; //<! Tipo de dado para a tabela de retorno

class KenoBet{
    private:
        set_of_numbers_type m_spots;  //<! The player's bet.
        cash_type m_wage;             //<! The player's wage
        cash_type bet_round;          //<! O valor apostado em cada rodada
    
    public:
        //! Creates an empty Keno bet.
        KenoBet();
        
        /*! Adds a number to the spots only if the number is not already there.
            @param spot_ The number we wish to include in the bet.
            @return T if number chosen is successfully inserted; F otherwise. */
        bool add_number( number_type spot_ );

        /*! Sets the amount of money the player is betting.
            @param wage_ The wage.
            @return True if we have a wage above zero; false otherwise. */
        bool set_wage( cash_type wage_ );

        //! Resets a bet to an empty state.
        void reset( void );

        /*! Retrieves the player's wage on this bet.
            @return The wage value. */
        cash_type get_wage( void ) const;

        /*! Returns to the current number of spots in the player's bet.
            @return Number of spots present in the bet. */
        size_t size( void ) const;

        /*! Determine how many spots match the hits passed as argument.
            @param hits_ List of hits randomly chosen by the computer.
            @return An vector with the list of hits. */
        set_of_numbers_type
        get_hits( const set_of_numbers_type & hits_ ) const;

        /*! Return a vector< spot_type > with the spots the player has picked so far.
            @return The vector< spot_type > with the player's spots picked so far. */
        set_of_numbers_type get_spots( void ) const;

        //! Define a quantidade de dinheiro que o jogador vai apostar em cada rodada
        void set_bet_round( position_type &rounds );

        /*! Devolve o valor apostado pelo jogador em cada rodada.
            @return Valor apostado em cada rodada. */
        cash_type get_bet_round( void ) const;

};

#endif