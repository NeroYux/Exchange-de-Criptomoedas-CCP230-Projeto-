
#include <stdio.h>
#include <string.h>

// Funcoes do sistema
void consultarSaldo(void);
void consultarExtrato(void);
void depositar(void);
void sacar(void);
void comprarCriptomoedas(void);
void venderCriptomoedas(void);
void atualizarCotacoes(void);

int main() {

    char cpf[12];
    char senha[7];

    char cpfCorreto[] = "12345678900";
    char senhaCorreta[] = "123456";

    int opcao;

    // TELA DE LOGIN

    printf("\n================================");
    printf("\n       EXCHANGE DE CRIPTOMOEDAS");
    printf("\n================================");

    printf("\n\nDigite seu CPF: ");
    scanf("%11s", cpf);

    printf("Digite sua senha: ");
    scanf("%6s", senha);

    if (strcmp(cpf, cpfCorreto) == 0 &&
        strcmp(senha, senhaCorreta) == 0) {

        printf("\nLogin realizado com sucesso!\n");

    } else {

        printf("\nCPF ou senha incorretos!\n");
        return 0;

    }

    // MENU PRINCIPAL

    do {

        printf("\n================================");
        printf("\n          MENU PRINCIPAL");
        printf("\n================================");

        printf("\n1 - Consultar saldo");
        printf("\n2 - Consultar extrato");
        printf("\n3 - Depositar reais");
        printf("\n4 - Sacar reais");
        printf("\n5 - Comprar criptomoedas");
        printf("\n6 - Vender criptomoedas");
        printf("\n7 - Atualizar cotacoes");
        printf("\n8 - Sair");

        printf("\n\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                consultarSaldo();
                break;

            case 2:
                consultarExtrato();
                break;

            case 3:
                depositar();
                break;

            case 4:
                sacar();
                break;

            case 5:
                comprarCriptomoedas();
                break;

            case 6:
                venderCriptomoedas();
                break;

            case 7:
                atualizarCotacoes();
                break;

            case 8:
                printf("\nSaindo da Exchange...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 8);

    printf("\nPressione ENTER para fechar...");
    getchar();
    getchar();

    return 0;
}

// FUNCOES TEMPORARIAS

void consultarSaldo(void) {
    printf("\nConsulta de saldo em desenvolvimento.\n");
}

void consultarExtrato(void) {
    printf("\nConsulta de extrato em desenvolvimento.\n");
}

void depositar(void) {
    printf("\nDeposito em desenvolvimento.\n");
}

void sacar(void) {
    printf("\nSaque em desenvolvimento.\n");
}

void comprarCriptomoedas(void) {
    printf("\nCompra em desenvolvimento.\n");
}

void venderCriptomoedas(void) {
    printf("\nVenda em desenvolvimento.\n");
}

void atualizarCotacoes(void) {
    printf("\nAtualizacao de cotacoes em desenvolvimento.\n");
}
