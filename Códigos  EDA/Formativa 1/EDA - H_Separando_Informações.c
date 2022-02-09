# include <stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa{
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa retorno;
    int i = 0;

    for(i = 0; nome[i] != '\0'; i++)
        retorno.nome[i] = nome[i];

    retorno.nome[i] = '\0';

    retorno.dtNascimento.dia = dt_nascimento % 100;
        dt_nascimento /= 100;
    retorno.dtNascimento.mes = dt_nascimento % 100;
        dt_nascimento /= 100;
    retorno.dtNascimento.ano = dt_nascimento;
        dt_nascimento = dt_nascimento;

    return retorno;
};
