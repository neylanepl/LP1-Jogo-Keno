[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://classroom.github.com/online_ide?assignment_repo_id=4929510&assignment_repo_type=AssignmentRepo)
# Projeto 1 - Implementação do Jogo Keno com interface textual
Keno é um jogo de apostas, em que os jogadores apostam
escolhendo entre 1 e 20 números únicos no intervalo entre 1 e 80, inclusive. Quando os jogadores
escolhem seus números, o jogo gera vinte números aleatórios entre 1 e 80. Baseado na quantidade
de números que o jogador acertou, e no valor que ele apostou, ele recebe um valor de volta.

## Categorias do Projeto
O projeto está organizado da seguinte forma:
```
trabalho-01-neylanepl        ---> Nome da pasta do projeto.
    ├── build                ---> Pasta onde os executáveis serão gerados. [será criada]
    ├── data                 ---> Pasta que contém os arquivos de entrada do programa para os testes.
    ├── include              ---> Pasta que contém os arquivos ".h".
    ├── src                  ---> Pasta que que contém os arquivos ".cpp".
    ├── CMakeLists.txt       ---> Script de configuração do cmake.
    ├── INSTRUCTIONS-lp1.md  ---> Instruções para a implementação deste trabalho.
    ├── README.md            ---> Instruções para compilar e executar o programa.
```

# Compilando e Executando
A compilação e execução do projeto pode ser feita usando *cmake* ou utizando *g++* para compilar manualmente. 

## Como compilar o projeto
### Usando cmake

1. Entre na pasta do projeto, no caso `trabalho-01-neylanepl`.
```
cd trabalho-01-neylanepl
```

2. Entre na pasta `build`.
```
cd build
```

3. Execute o comando do *cmake* para gerar os arquivos intermediários.
```
cmake ..
```
   **Possivél saída:**
   
```
            -- The CXX compiler identification is GNU 7.5.0
            -- Detecting CXX compiler ABI info
            -- Detecting CXX compiler ABI info - done
            -- Check for working CXX compiler: /usr/bin/c++ - skipped
            -- Detecting CXX compile features
            -- Detecting CXX compile features - done
            -- Configuring done
            -- Generating done
            -- Build files have been written to: /home/neylane/trabalho-01-neylanepl/build

```
4. Execute o comando do *cmake* para compilar o projeto. Assim, a pasta build conterá os arquivos *Makefile* e o executável *JogoKeno*.
```
cmake --build .
```
   **Possivél saída:**

```
            [ 20%] Building CXX object CMakeFiles/JogoKeno.dir/src/funcoes.cpp.o
            [ 40%] Building CXX object CMakeFiles/JogoKeno.dir/src/tabela.cpp.o
            [ 60%] Building CXX object CMakeFiles/JogoKeno.dir/src/classeKenoBet.cpp.o
            [ 80%] Building CXX object CMakeFiles/JogoKeno.dir/src/main.cpp.o
            [100%] Linking CXX executable JogoKeno
            [100%] Built target JogoKeno
```

### Usando compilação manual com g++

1. Entre na pasta do projeto, no caso `trabalho-01-neylanepl`.
```
cd trabalho-01-neylanepl
```

2. Entre na pasta `build`.
```
cd build
```

3. Execute o comando *g++* para compilar o programa.
```
g++ -Wall -pedantic -std=c++11 -fsanitize=address -o JogoKeno ../src/main.cpp ../src/classeKenoBet.cpp ../src/funcoes.cpp ../src/tabela.cpp

```

## Como executar o projeto

1. Execute o executável *JogoKeno* e forneça como argumento o arquivo de apostas. Dessa forma, é necessário informar o endereço do arquivo de apostas a partir da pasta que ele se encontra. Neste caso, os arquivos se encontram na pasta `data`. Assim, execute o seguinte comando:
```
./JogoKeno ../data/nome_do_arquivo_de_apostas
```
Como exemplo, foi feito a execução de um dos arquivos de apostas, nomeado *aposta_7spots.dat*. O comando ficou do seguinte modo:
```
./JogoKeno ../data/aposta_7spots.dat
```
   
   **Possivél saída:**


```
            >>> Lendo arquivo de apostas [../data/aposta_7spots.dat], por favor aguarde..
            --------------------------------------------------------------------
            >>> Aposta lida com sucesso!
                  Você apostará um total de $1500 créditos.
                  Jogará um total de 3 rodadas, apostando $500 créditos por rodada

                  Sua aposta tem 7 números, eles são: [ 9 12 21 24 37 52 80 ]
                      ----------+-----------
                      Hits      | Retorno
                      0         | 0
                      1         | 0.5
                      2         | 0.5
                      3         | 1
                      4         | 6
                      5         | 12
                      6         | 36
                      7         | 100
                      ------------------------------------------------------------
                      Esta é a rodada #1 de 3, sua aposta é $500. Boa sorte!
                      Os números sorteados são: [ 1 10 24 29 32 37 43 45 47 50 54 56 57 58 59 60 65 66 74 79 ]

                      Você acertou os números [ 24 37 ], um total de 2 hits de 7
                      Sua taxa de retorno é 0.5, assim você sai com: $250
                      Você possui um total de: $1250 créditos.
                      ------------------------------------------------------------
                      Esta é a rodada #2 de 3, sua aposta é $500. Boa sorte!
                      Os números sorteados são: [ 1 6 10 12 15 18 20 21 24 26 30 33 34 46 58 60 62 70 72 80 ]

                      Você acertou os números [ 12 21 24 80 ], um total de 4 hits de 7
                      Sua taxa de retorno é 6, assim você sai com: $3000
                      Você possui um total de: $3750 créditos.
                      ------------------------------------------------------------
                      Esta é a rodada #3 de 3, sua aposta é $500. Boa sorte!
                      Os números sorteados são: [ 7 13 14 16 17 27 32 34 36 39 42 44 55 60 62 69 71 73 74 79 ]

                      Você acertou os números [ ], um total de 0 hits de 7
                      Sua taxa de retorno é 0, assim você sai com: $0
                      Você possui um total de: $3250 créditos.
            >>> Fim das rodadas!
            --------------------------------------------------------------------

            ======= Sumário =======
            >>> Você gastou um total de $1500 créditos
            >>> Hooray! você ganhou $1750 créditos!
            >>> Você está saindo do jogo com um total de $3250 créditos.
```


## Como executar o conjunto dos testes planejados

1. Utilize o comando abaixo para executar um conjunto de testes. Neste caso, serão executados alguns arquivos de teste que se encontram na pasta `data`. 

```
./JogoKeno ../data/ConjuntoTestes.dat
```

# Limitações ou funcionalidades não implementadas no programa

Analisando as implementações realizadas, acredita-se que todas as funcionalidades esperadas foram desenvolvidas. Além disso, não foi encontrada nehuma limitação no programa.
