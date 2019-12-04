#include <stdio.h>
#include <stdlib.h>

enum MESES {janeiro=1, fevereiro=2, marco=3, abril=4,
            maio=5, junho=6, julho=7, agosto=8, setembro=9,
            outubro=10, novembro=11, dezembro=12
           };
struct FUNCIONARIOS
{

};
struct FICHA_DE_CADASTRO
{
    int ID, ANO;
    char NOME[50], CARGO[50];
    float VALOR_HORA;

}FUNCIONARIOS[50];

void CADASTRARFUNCIONARIO()
{
    struct FICHA_DE_CADASTRO fichaCadastro;
    printf("Digite o nome do funcionario: ");
    gets(FUNCIONARIOS[ID].NOME);
}

void EDITARFUNCIONARIO()
{
}

void EXIBIRFUNCIONARIOS()
{
 for(int i=0;i>50;i++){
     printf("Funcionario: %s\n",FUNCIONARIOS.NOME);
 }
}

int main()
{
    int OPCAO;
     int mes = janeiro;
    printf("\n %d\n",mes);

    printf("Cadastro de Funcionarios\n");
    printf("Digite uma opcao:\n");
    printf("1 - Cadastrar Novo Funcionario\n2 - Editar Funcionario\n3 - Exibir Funcionarios\n4 - Sair\n");
    scanf("%d",&OPCAO);


    do{
        switch(OPCAO)
        {
        case 1:
            CADASTRARFUNCIONARIO();
            printf("Parabens");
            break;
        case 2:
            EDITARFUNCIONARIOS();
            break;
        case 3:
            EXIBIRFUNCIONARIO();
            break;
        case 4:
            printf("Encerra programa");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
    while(OPCAO==4);

    system("pause");
    return 0;
}
