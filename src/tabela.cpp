#include "../include/tabela.h"

/*!
 * Insere os fatores de retorno na tabela de retorno que é um contêiner map.
 * @param tabela Stream da tabela de retorno.
 */
void CriarTabela(map_type &tabela)
{
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(1,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(1,1), 3));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(2,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(2,1), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(2,2), 9));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(3,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(3,1), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(3,2), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(3,3), 16));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(4,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(4,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(4,2), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(4,3), 6));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(4,4), 12));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,2), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,3), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,4), 15));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(5,5), 50));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,2), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,3), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,4), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,5), 30));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(6,6), 75));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,2), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,3), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,4), 6));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,5), 12));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,6), 36));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(7,7), 100));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,2), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,3), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,4), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,5), 6));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,6), 19));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,7), 90));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(8,8), 720));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,1), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,2), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,3), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,4), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,5), 4));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,6), 8));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,7), 20));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,8), 80));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(9,9), 1200));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,1), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,2), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,3), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,4), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,5), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,6), 5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,7), 10));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,8), 30));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,9), 600));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(10,10), 1800));
    
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,1), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,2), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,3), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,4), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,5), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,6), 6));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,7), 15));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,8), 25));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,9), 180));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,10), 1000));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(11,11), 3000));

    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,1), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,2), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,3), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,4), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,5), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,6), 4));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,7), 24));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,8), 72));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,9), 250));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,10), 500));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,11), 2000));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(12,12), 4000));

    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,1), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,2), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,3), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,4), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,5), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,6), 4));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,7), 5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,8), 20));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,9), 80));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,10), 240));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,11), 500));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,12), 3000));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(13,13), 6000));

    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,0), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,1), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,2), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,3), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,4), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,5), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,6), 3));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,7), 5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,8), 12));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,9), 50));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,10), 150));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,11), 500));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,12), 1000));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,13), 2000));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(14,14), 7500));

    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,0 ), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,1 ), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,2 ), 0));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,3 ), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,4 ), 0.5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,5 ), 1));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,6 ), 2));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,7 ), 5));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,8 ), 15));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,9 ), 50));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,10), 150));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,11), 300));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,12), 600));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,13), 1200));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,14), 2500));
    tabela.insert(std::pair<std::pair<position_type, position_type>, factor_type>(std::pair<position_type, position_type>(15,15), 10000));
}
