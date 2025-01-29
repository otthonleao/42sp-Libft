# libft-42SP

O libft é um projeto essencial da 42 que desafia os alunos a reimplementarem um conjunto de funções da biblioteca padrão C (libc), garantindo que se comportem exatamente como as originais. Além disso, o projeto inclui a criação de funções adicionais (non-standard) e manipulação de listas, proporcionando uma base sólida para o desenvolvimento em C.

Este projeto é um dos primeiros desafios na 42, pois a escola frequentemente impõe restrições ao uso de bibliotecas externas, incentivando os alunos a construírem suas próprias soluções.

Ao recriar essas funções, aprofundamos nosso entendimento sobre ponteiros, alocação de memória e operações com estruturas de dados, adquirindo um conhecimento fundamental para projetos mais avançados.

## Funções

### Parte 1 - Funções da libc
Reescreve um conjunto de funções da libc, conforme definido em suas respectivas páginas de manual (man). As funções devem manter o mesmo protótipo e comportamento das originais.

- `ft_isalpha` - verifica se um caractere é alfabético
- `ft_isdigit` - verifica se um caractere é um dígito (0 a 9)
- `ft_isalnum` - verifica se um caractere é alfanumérico
- `ft_isascii` - verifica se o caractere pertence ao conjunto ASCII
- `ft_isprint` - verifica se um caractere é imprimível
- `ft_toupper` - converte um caractere para maiúscula
- `ft_tolower` - converte um caractere para minúscula
- `ft_atoi` - converte uma string para um número inteiro
- `ft_itoa` - converte um número em uma string
- `ft_bzero` - zera uma string de bytes
- `ft_calloc` - aloca memória e inicializa seus bytes com 0
- `ft_memchr` - busca um caractere na memória
- `ft_strlen` - calcula o tamanho de uma string
- `ft_memcmp` - compara áreas de memória
- `ft_memcpy` - copia uma área de memória
- `ft_memmove` - copia uma área de memória de forma segura
- `ft_memset` - preenche um bloco de memória com um byte constante
- `ft_split` - divide uma string usando um caractere como delimitador
- `ft_strchr` - localiza um caractere em uma string
- `ft_strdup` - cria uma duplicata da string passada como parâmetro
- `ft_striteri` - aplica uma função a cada caractere de uma string
- `ft_strjoin` - concatena duas strings
- `ft_strlcat` - concatena uma string com um tamanho específico
- `ft_strlcpy` - copia uma string com um tamanho específico
- `ft_strmapi` - aplica uma função a cada caractere de uma string e gera uma nova string
- `ft_strncmp` - compara duas strings
- `ft_strnstr` - localiza uma substring dentro de uma string
- `ft_strrchr` - localiza a última ocorrência de um caractere em uma string
- `ft_strtrim` - remove caracteres específicos do início e do fim de uma string

### Parte 2 - Funções adicionais
Esta seção contém um conjunto de funções que não estão incluídas na libc ou que existem em uma forma diferente.
- `ft_substr` - retorna uma substring de uma string
- `ft_putchar_fd` - escreve um caractere em um descritor de arquivo
- `ft_putendl_fd` - escreve uma string em um descritor de arquivo, seguida de uma nova linha
- `ft_putnbr_fd` - escreve um número em um descritor de arquivo
- `ft_putstr_fd` - escreve uma string em um descritor de arquivo
- `ft_lstadd_back` - adiciona um elemento ao final de uma lista
- `ft_lstadd_front` - adiciona um elemento ao início de uma lista
- `ft_lstclear` - deleta e libera a memória de uma lista
- `ft_lstdelone` - recebe um elemento como parâmetro e libera sua memória
- `ft_lstiter` - aplica uma função a cada elemento de uma lista
- `ft_lstlast` - retorna o último elemento de uma lista
- `ft_lstmap` - aplica uma função a cada elemento de uma lista e retorna uma nova lista
- `ft_lstnew` - cria um novo elemento de lista
- `ft_lstsize` - conta o número de elementos em uma lista
- `get_next_line` - lê uma linha de um descritor de arquivo
- `ft_printf` - imprime uma saída formatada na tela ou em um arquivo

## Requisitos

A libft requer um compilador **gcc** e algumas bibliotecas padrão.

## Instruções

Clone este repositório no seu computador local:

## Instructions

Clone this repository in your local computer:
```
$> git clone https://github.com/otthonleao/42sp-Libft
```
In your local repository, run make
```
$> make 
```
