#ifndef FUNCOES
#define FUNCOES

#include "classeKenoBet.h"
#include "tabela.h"

//! Realiza a chamada de outras funções que executam cada passo do jogo.
void Jogar(text_type &arquivo_apostas, map_type &tabela);

//! Verifica se o arquivo de entrada não tem 3 linhas.
void VerificarFormatacaoArquivo(std::ifstream &arquivo);

//! Verifica se o arquivo de apostas possui alguma linha sem entrada.
void VerificarLinhaVazia(position_type tamanho);

//! Verifica se em alguma linha do arquivo de apostas tem carteres que não sejam ".0123456789".
void VerficarCaracterInvalido(const text_type &linha);

//! Ler e validá o arquivo de apostas.
void LerEValidarArquivo(KenoBet &keno, position_type &NR, text_type nome_arquivo);

//! Gera vinte números aleatórios entre 1 e 80.
void SortearNumeros(set_of_numbers_type &numeros_sorteados);

//! Compara se um numero é menor que outro.
bool Comparar(number_type numero1, number_type numero2);

//! Ordena um vetor em ordem crescente.
void Ordenar(set_of_numbers_type &vetor);

//! Determina o fator, da tabela de retorno, que vai ser multiplicado pelo valor apostado naquele turno.
factor_type ObterFatorDeRetorno(position_type spots, position_type hits, map_type &tabela);

//! Imprimi as informações iniciais da partida.
void ImprimirInforIniciais(KenoBet &keno, position_type &NR, map_type &tabela, text_type nome_arquivo);

//! Imprimi as informações de cada rodada.
void ImprimirInforRodadas(KenoBet &keno, const position_type &NR, map_type &tabela);

//! Imprimi as últimas informações da partina, que é o sumário do jogo.
void ImprimirInforFinais(KenoBet &keno, const position_type &NR);

#endif