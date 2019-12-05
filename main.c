#include <stdio.h>
#include <stdlib.h>

int id=0;
struct FICHA_DE_CADASTRO
{
    int NUMERO, ANO;
    char NOME[50], CARGO[50];
    float VALOR_HORA;

}FUNCIONARIOS[50];

<<<<<<< Updated upstream
void CADASTRARFUNCIONARIO()
{
    struct FICHA_DE_CADASTRO fichaCadastro;
    printf("Digite o nome do funcionario: ");
    gets(FUNCIONARIOS[ID].NOME);
}
=======
struct FICHA_DE_CADASTRO FUNCIONARIOS[50];
>>>>>>> Stashed changes

void CADASTRARFUNCIONARIO();

<<<<<<< Updated upstream
void EXIBIRFUNCIONARIOS()
{
 for(int i=0;i>50;i++){
     printf("Funcionario: %s\n",FUNCIONARIOS.NOME);
 }
=======
void EDITARFUNCIONARIO();

void EXIBIRFUNCIONARIO();

void PESQUISARFUNCIONARIO();

void MENU();

int main()
{
    MENU();
    return 0;
>>>>>>> Stashed changes
}

void MENU()
{
    int OPCAO;
    printf("Cadastro de Funcionarios\n");
    printf("Digite uma opcao:\n");
<<<<<<< Updated upstream
    printf("1 - Cadastrar Novo Funcionario\n2 - Editar Funcionario\n3 - Exibir Funcionarios\n4 - Sair\n");
=======
    printf("1 - Cadastrar Novo Funcionario\n2 - Editar Funcionario\n3 - Exibir Funcionarios\n4 - Procurar funcionario\n4 - Sair\n");
>>>>>>> Stashed changes
    scanf("%d",&OPCAO);
    do
    {
        switch(OPCAO)
        {
        case 1:
            CADASTRARFUNCIONARIO();
            break;
        case 2:
<<<<<<< Updated upstream
            EDITARFUNCIONARIOS();
=======
            //   EDITARFUNCIONARIO();
>>>>>>> Stashed changes
            break;
        case 3:
            EXIBIRFUNCIONARIO();
            break;
        case 4:
            PESQUISARFUNCIONARIO();
            break;
        case 5:
            printf("Encerra programa\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    }
    while(OPCAO!=4);

    system("pause");
}
<<<<<<< Updated upstream
=======

void CADASTRARFUNCIONARIO()
{
    printf("Digite o nome do Funcionario: \n");
    scanf("%s%*c", &FUNCIONARIOS[id].NOME);
    printf("Digite o cargo do funcionario: \n");
    scanf("%s", &FUNCIONARIOS[id].CARGO);
    printf("Digite o ano\n");
    scanf("%d", &FUNCIONARIOS[id].ANO);
    id++;
    system("cls");
    MENU();
}

void EXIBIRFUNCIONARIO()
{
    for(int i=0; i<50; i++)
    {
        printf("Nome do funcionario: %s\n", FUNCIONARIOS[i].NOME);
        printf("Cargo do funcionario: %s\n", FUNCIONARIOS[i].CARGO);
        printf("Ano do funcionario: %d\n", FUNCIONARIOS[i].ANO);
    }
    system("pause");
    MENU();
}

void PESQUISARFUNCIONARIO()
{
    int j,aux;
    char PESQUISA[50];
    printf("Digite o nome do funcionario que deseja:\n");
    scanf("%s", &PESQUISA);
    for(j=0;j<50;j++){
        if(strcmp(PESQUISA,FUNCIONARIOS[j].NOME)==0){
            printf("Funcionario encontrado");
            aux=j;
        }else{
        aux=-1;
        }
    }
    if(aux=-1){
        printf(" \n Registro não encontrado! ");
    }else {
    printf(" \n Registro Encontrado: ");
    printf(" \n O nome do funcionário é: %s ", FUNCIONARIO[aux].NOME);
    printf(" \n A idade do funcionário é: %d ", FUNCIONARIO[posicao].idade);
    printf(" \n O salário do funcionário é: %.2f ", FUNCIONARIO[posicao].salario);
}
}
>>>>>>> Stashed changes
