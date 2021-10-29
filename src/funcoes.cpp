#include "../include/funcoes.h"
#include "../include/classeKenoBet.h"

/*!
 * Realiza a chamada de outras funções que executam cada passo do jogo.
 * @param arquivo_apostas Nome do arquivo de apostas passado como entrada.
 * @param tabela Stream da tabela de retorno.
 */
void Jogar(text_type &arquivo_apostas, map_type &tabela){
    KenoBet keno;
    position_type NR;
    LerEValidarArquivo(keno, NR, arquivo_apostas);
    ImprimirInforIniciais(keno, NR, tabela, arquivo_apostas);
    ImprimirInforRodadas(keno, NR, tabela);
    ImprimirInforFinais(keno, NR);
}

/*!
 * Verifica se o arquivo de entrada não tem 3 linhas.
 * @param arquivo Stream do arquivo de apostas.
 */
void VerificarFormatacaoArquivo(std::ifstream &arquivo)
{   
    position_type contador = 1;
    symbol_type caracter;

    while(arquivo.get(caracter)){
        if(caracter == '\n'){
            contador++;
        }
    }

    if(contador < 3){
        std::cout << "ERRO: Formatação diferente daquela proposta para o arquivo de apostas." << "\n";
        std::cout << "         O arquivo deve ter 3 linhas preenchida, mas possui apenas " << contador << " linhas!" << "\n";
        exit (EXIT_FAILURE);
    }
    else if(contador > 3){
        std::cout << "ERRO: Formatação diferente daquela proposta para o arquivo de apostas." << "\n";
        std::cout << "          O arquivo deve ter 3 linhas preenchida, mas possui " << contador << " linhas!" << "\n";
        exit (EXIT_FAILURE);
    }
    
}

/*!
 * Verifica se o arquivo de apostas possui alguma linha sem entrada.
 * @param tamanho Comprimento da string, em termos de bytes, que está em uma linha do arquivo de entrada.
 */
void VerificarLinhaVazia(position_type tamanho){
    if(tamanho == 0){
        std::cout << "ERRO: Formatação diferente daquela proposta para o arquivo de apostas." << "\n";
        std::cout << "          O aquivo possui linha vazia!" << "\n";
        exit (EXIT_FAILURE);
    }
}

/*!
 * Verifica se em alguma linha do arquivo de apostas tem carteres que não sejam ".0123456789".
 * @param linha String que está em uma linha do arquivo de entrada.
 */
void VerficarCaracterInvalido(const text_type &linha){
    std::size_t indice = linha.find_first_not_of(".0123456789\n");
    if (indice != text_type::npos){
        std::cout << "ERRO: Presença de caracteres estranhos." << "\n";
        std::cout << "          O caracter '" << linha[indice] << "' não é um número!" << "\n";
        exit (EXIT_FAILURE);
    }
}

/*!
 * Ler e validá o arquivo de apostas.
 * @param keno Um objeto da classe KenoBet.
 * @param NR Quantidade de rodadas que serão executadas. 
 * @param nome_arquivo Nome do arquivo de entrada.
 */
void LerEValidarArquivo(KenoBet &keno, position_type &NR, text_type nome_arquivo)
{
    text_type linha;
    position_type contador=0, numero;
    cash_type credito_inicial;
    std::ifstream arquivo_auxiliar;
 	arquivo_auxiliar.open(nome_arquivo);

    if(!arquivo_auxiliar){
        std::cout << "ERRO: Arquivo inexistente!" << "\n";
        exit (EXIT_FAILURE);
    }
    VerificarFormatacaoArquivo(arquivo_auxiliar);

    std::ifstream arquivo;
 	arquivo.open(nome_arquivo);
    while(!arquivo.eof()){
        contador++;
        if(contador == 1){
            std::getline (arquivo, linha);
            VerificarLinhaVazia(linha.size());
            VerficarCaracterInvalido(linha);

            credito_inicial = std::stof(linha);
            if (!keno.set_wage(credito_inicial)){
                std::cout << "ERRO: Quantidade de crédito inicial inválido!" << "\n";
                exit (EXIT_FAILURE);
            }
        }
        else if(contador == 2){
            std::getline (arquivo, linha);
            VerificarLinhaVazia(linha.size());
            VerficarCaracterInvalido(linha);

            NR = std::stoi(linha);
            if(NR <= 0){
                std::cout << "ERRO: Quantidade de rodadas inválida!" << "\n";
                exit (EXIT_FAILURE);
            }
        }
        else{
            std::getline (arquivo, linha, ' ');
            VerificarLinhaVazia(linha.size());
            VerficarCaracterInvalido(linha);

            numero = std::stoi(linha);
            if((numero <= 0) || (numero >= 81)){
                std::cout << "ERRO: Número escolhido inválido." << "\n";
                std::cout << "          Os números devem estar no intervalo de 1 a 80!" << "\n";
                exit (EXIT_FAILURE);
            }
            if(!keno.add_number(numero)){   
                std::cout << "ERRO: Números repetidos são inválidos!" << "\n";
                exit (EXIT_FAILURE);
            }
        }

        if((contador+1) >= 18){
            std::cout << "ERRO: Quantidade de números apostados é superior a 15 números!" << "\n";
            exit (EXIT_FAILURE);
        }
    }
    arquivo.close();
}

/*!
 * Gera vinte números aleatórios entre 1 e 80.
 * @param numeros_sorteados Vetor com os números sorteados.
 */
void SortearNumeros(set_of_numbers_type &numeros_sorteados)
{
    position_type novo_numero;
    bool repetido;

    for(position_type i=0 ; i<20; ++i){
        std::random_device random;
        std::default_random_engine gerador(random());
        std::uniform_int_distribution<position_type> distribuicao(1, 80);
        novo_numero = distribuicao(gerador);
        repetido = false;

        if(i > 0){
            for(position_type j=0; j<i; ++j){
                if(novo_numero == numeros_sorteados.at(j)){
                    repetido = true;
                    break;
                }
            }
            if(!repetido){
                numeros_sorteados.push_back(novo_numero);
            }
            else{
                i--;
            }    
        }
        else{
            numeros_sorteados.push_back(novo_numero);
        }   
    }
}

/**
 * Compara se um numero é menor que outro.
 * @param numero1 O número que vai ser comparado com numero2, para verificar se ele é o menor.
 * @param numero2 O número que vai ser comparado com numero1.
 * @return true se o primeiro elemento é menor do que o segundo, ou false caso contrário.
 */
bool Comparar(number_type numero1, number_type numero2)
{
    if(numero1 < numero2){
        return true;
    }
    return false;
}

/**
 * Ordena um vetor em ordem crescente.
 * @param vetor O array que será ordenado.
 */
void Ordenar(set_of_numbers_type &vetor)
{   
    set_of_numbers_type::iterator first = vetor.begin(), last = vetor.end(), i, j;
    number_type contador;

    for (i = first+1; i < last; ++i){ 
        contador = 0;
        for (j = i-1; j >= first; --j){ 
            if (Comparar(*(i-contador), *j)){ 
                std::swap(*j, *(i-contador)); 
            }
            contador+=1; 
        }       
    }
}

/*!
 * Determina o fator, da tabela de retorno, que vai ser multiplicado pelo valor apostado naquele turno.
 * @param quantidade_spots Número de spots da aposta, ou seja, índice para acesar um linha da tabela.
 * @param quantidade_hits Quantidade de hits de uma rodada, ou seja, índice para acesar a coluna da tabela.
 * @param tabela Stream da tabela de retorno.
 * @return Fator de retorno.
 */
factor_type ObterFatorDeRetorno(position_type quantidade_spots, position_type quantidade_hits, map_type &tabela)
{
    map_type::iterator fator;
    fator = tabela.find(std::make_pair(quantidade_spots, quantidade_hits));
    
    return fator -> second;
}

/*!
 * Imprimi as informações iniciais da partida.
 * @param keno Um objeto da classe KenoBet.
 * @param NR Quantidade de rodadas que serão executadas. 
 * @param tabela Stream da tabela de retorno. 
 * @param nome_arquivo Nome do arquivo de entrada.
 */
void ImprimirInforIniciais(KenoBet &keno, position_type &NR, map_type &tabela, text_type nome_arquivo)
{   
    keno.set_bet_round(NR);
    position_type quantidade_spots = keno.size();
    set_of_numbers_type spots_ordenado = keno.get_spots();
    Ordenar(spots_ordenado);

    std::cout << ">>> Lendo arquivo de apostas [" << nome_arquivo <<"], por favor aguarde.." << "\n";
    std::cout << "--------------------------------------------------------------------" << "\n";
    std::cout << ">>> Aposta lida com sucesso!" << "\n";
    std::cout << "      Você apostará um total de $" << keno.get_wage() << " créditos." << "\n";
    std::cout << "      Jogará um total de "<< NR << " rodadas, apostando $" << keno.get_bet_round()<< " créditos por rodada" << "\n";
    std::cout << "\n";
    std::cout << "      Sua aposta tem " << quantidade_spots << " números, eles são: [ ";
    for(position_type i=0; i<quantidade_spots; ++i){
        std::cout << spots_ordenado.at(i) << " ";
    }
    std::cout << "]" << "\n";
    std::cout << "          ----------+-----------" << "\n";
    std::cout << "          Hits      | Retorno" << "\n";
    for (position_type j=0; j<=quantidade_spots; ++j){
        std::cout << "          " << j << "         | " << ObterFatorDeRetorno(quantidade_spots, j, tabela) << "\n";
    }
    
}

/*!
 * Imprimi as informações de cada rodada.
 * @param keno Um objeto da classe KenoBet.
 * @param NR Quantidade de rodadas que serão executadas. 
 * @param tabela Stream da tabela de retorno. 
 */
void ImprimirInforRodadas(KenoBet &keno, const position_type &NR, map_type &tabela)
{       
    set_of_numbers_type numeros_sorteados, hits;
    factor_type fator;
    cash_type valor_apostado = keno.get_bet_round();

    for (position_type i=1; i<=NR; ++i){
        SortearNumeros(numeros_sorteados);
        Ordenar(numeros_sorteados);
        hits = keno.get_hits(numeros_sorteados);
        fator = ObterFatorDeRetorno(keno.size(), hits.size(), tabela);
        keno.set_wage((keno.get_wage() - valor_apostado) + (valor_apostado * fator));

        std::cout << "          ------------------------------------------------------------" << "\n";
        std::cout << "          Esta é a rodada #"<< i << " de "<< NR << ", sua aposta é $" << valor_apostado <<". Boa sorte!" << "\n";
        std::cout << "          Os números sorteados são: [ ";
        for(position_type j=0; j<20; ++j){
            std::cout << numeros_sorteados.at(j) << " ";
        }
        std::cout << "]" << "\n";
        std::cout << "\n";
        std::cout << "          Você acertou os números [ ";
        for(position_type k=0; k<static_cast<position_type>(hits.size()); ++k){
            std::cout << hits.at(k) << " ";
        }
        std::cout << "], um total de " << hits.size() << " hits de "<< keno.size() << "\n";
        std::cout << "          Sua taxa de retorno é " << fator << ", assim você sai com: $" << fator * keno.get_bet_round() << "\n";
        std::cout << "          Você possui um total de: $" << keno.get_wage() << " créditos." << "\n";
        
        numeros_sorteados.clear();
    }
}

/*! 
 * Imprimi as últimas informações da partina, que é o sumário do jogo.
 * @param keno Um objeto da classe KenoBet.
 * @param NR Quantidade de rodadas que serão executadas. 
 */
void ImprimirInforFinais(KenoBet &keno, const position_type &NR)
{
    std::cout << ">>> Fim das rodadas!" << "\n";
    std::cout << "--------------------------------------------------------------------" << "\n";
    std::cout << "\n";
    std::cout << "======= Sumário =======" << "\n";
    std::cout << ">>> Você gastou um total de $"<< (NR * keno.get_bet_round()) <<" créditos" << "\n";
    if(keno.get_wage() - (NR * keno.get_bet_round()) < 0){
        std::cout << ">>> Hooray! você ganhou $0 créditos!" << "\n";
    }
    else{
        std::cout << ">>> Hooray! você ganhou $"<< keno.get_wage() - (NR * keno.get_bet_round()) <<" créditos!" << "\n";
    }
    std::cout << ">>> Você está saindo do jogo com um total de $" << keno.get_wage() << " créditos." << "\n";

}

