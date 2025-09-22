# 🎮 Jogo da forca em C

## Descrição
Este projeto implementa o clássico **Jogo da Forca** utilizando a linguagem **C**.  
O jogo permite que **dois jogadores** interajam: o primeiro define a palavra secreta e o segundo tenta adivinhar letra por letra.  

O jogador que tenta adivinhar terá **até 6 chances** antes de perder, com cada erro adicionando uma parte do corpo na forca.  

O jogo exibe:
- A forca e o estado atual do boneco;
- A palavra secreta representada por `_` para letras não descobertas;
- Mensagens de vitória ou derrota.

---

## Funcionalidades

- Entrada de palavra secreta pelo **Jogador 1**;
- Ocultação da palavra secreta durante a digitação;
- Entrada de letras pelo **Jogador 2**;
- Atualização da palavra na tela conforme letras corretas;
- Controle de **erros** (até 6);
- Desenho da forca atualizado dinamicamente conforme os erros;
- Mensagens de **vitória** ou **derrota**.

---

## Estrutura do Código

```text
forca(int estado)      -> Desenha a forca de acordo com o número de erros
main()                 -> Lógica principal do jogo, entrada de dados e loop de jogabilidade
````

---

## Requisitos

* Compilador de C (GCC, Clang ou similar)
* Terminal ou console para execução

---

## Compilação e Execução

### Linux / MacOS

```bash
gcc forca.c -o forca
./forca
```

### Windows (CMD / PowerShell)

```bash
gcc forca.c -o forca.exe
forca.exe
```

---

## Como Jogar

1. **Jogador 1**: Insira a palavra secreta (máx. 100 caracteres);
2. **Jogador 2**: Tente adivinhar a palavra letra por letra;
3. Para cada letra incorreta, uma parte do boneco será desenhada na forca;
4. O jogo termina quando:

   * Todas as letras forem adivinhadas (**vitória**);
   * O boneco estiver completo com 6 erros (**derrota**).

---

## Exemplo de Jogo

```text
A palavra secreta tem 5 caracteres
Adivinhe: _ _ _ _ _ 
Letra: a
Adivinhe: a _ _ _ _ 
Letra: e
Adivinhe: a _ _ _ _ 
...
VENCEU! PARABÉNS!!
YOU WIN!
```

```text
Erros = 6
-------------- 
|            |
|            0
|           -|- 
|           / \ 
|  PERDEU O GAME, TENTE NOVAMENTE!!
|
-
```

---

## Contribuição

Este projeto é acadêmico e pode ser expandido com melhorias, como:

* Palavras escolhidas aleatoriamente;
* Controle de pontuação;
* Interface gráfica em C (SDL, ncurses);
* Suporte a acentuação e letras maiúsculas/minúsculas.

---

## Licença

Uso acadêmico.
