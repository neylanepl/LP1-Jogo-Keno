#include "../include/funcoes.h"
#include "../include/classeKenoBet.h"
#include "../include/tabela.h"

int main(int argc, char *argv[])
{ 
  if(argc == 1){
    std::cout << "ERRO: O nome do arquivo de apostas não foi fornecido como argumento!" << "\n";
    exit (EXIT_FAILURE);
  }

  map_type tabela;    
  CriarTabela(tabela);

  text_type arquivo_apostas(argv[argc-1]);
  
  if(arquivo_apostas == "../data/ConjuntoTestes.dat"){ 
    text_type nome_arquivo;
    std::ifstream conjunto_testes;
    conjunto_testes.open(argv[argc-1]);
    while(!conjunto_testes.eof()){
      std::cout << "\n";
      std::cout << "\n";
      std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ NOVO TESTE @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" <<"\n";
      std::cout << "\n";
      std::cout << "\n";
      std::getline(conjunto_testes, nome_arquivo);
      Jogar(nome_arquivo, tabela);
      
    }
    conjunto_testes.close();
  }
  else{
    Jogar(arquivo_apostas, tabela);
  }

  return 0;
}