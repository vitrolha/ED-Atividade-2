#include <stdlib.h>
#include <stdio.h>

int i,k;

typedef struct
{
    char sabor[20];
    char tamanho[3];
    int quantidade;
}Itens[10];

typedef struct
{
    char fdepagamento[20];
    float valor_peidido;
}Pagamento;

typedef struct
{
    char logradouro[50];
    int numero;
    char bairro[50];
    char complemento[50];
}Endereco;

struct Pedido
{
    int numero_do_pedido;
    char nome_cliente[50];
    int telefone;
    Endereco endereco;
    Itens item;
    Pagamento pagamento;
};





int main(){


    char resp[5];

    struct Pedido pedido;

    printf("Numero do pedido: ");
    scanf("%i",&pedido.numero_do_pedido);
    fflush(stdin);

    printf("\nNome do Cliente: ");
    gets(pedido.nome_cliente);


    printf("\nTelefone: ");
    scanf("%i",&pedido.telefone);
    fflush(stdin);

    printf("\nEndereco - Logradouro: ");
    gets(pedido.endereco.logradouro);
    fflush(stdin);

    printf("\nEndereco - Numero: ");
    scanf("%i",&pedido.endereco.numero);
    fflush(stdin);

    printf("\nEndereco - Bairro: ");
    gets(pedido.endereco.bairro);
    fflush(stdin);

    printf("\nEndereco - Complemento (Caso nao tenha digite [nao]): ");
    gets(pedido.endereco.complemento);
    fflush(stdin);

    printf("\nQuantidade de itens: ");
    scanf("%i",&k);
    fflush(stdin);

    //para pegar todos os itens
    for(i=0;i<k;i++){
        printf("\nSabor do item %i: ",i+1);
        gets(pedido.item[i].sabor);
        fflush(stdin);

        printf("\nTamanho do item %1: ",i+1);
        gets(pedido.item[i].tamanho);
        fflush(stdin);

        printf("\nQuantidade do item %i: ",i+1);
        scanf("%i",&pedido.item[i].quantidade);
        fflush(stdin);

        printf("\n");
    }


    printf("\nForma de Pagamento: ");
    gets(pedido.pagamento.fdepagamento);
    fflush(stdin);

    int item_quantidade;
    float Calculo;
    float preco = 10.00;

    for(i=0;i<k;i++){
        if(pedido.item[i].quantidade!=1){
            item_quantidade = pedido.item[i].quantidade;
            Calculo = (k+item_quantidade)*preco;
        }
        else{
            Calculo = k*preco;
        }
    }



    printf("\nValor do pedido %.2f: ",Calculo);
    printf("\n");
    printf("\n");

    printf("\nNumero do pedido: %i | Nome do Cliente: %s | Telefone: %i | Logradouro: %s | Numero: %i | Bairro: %s ",pedido.numero_do_pedido,pedido.nome_cliente,pedido.telefone,pedido.endereco.logradouro,pedido.endereco.numero,pedido.endereco.bairro);
    printf("\n");
    printf("\n");

    //para exibir todos os itens
    for(i=0;i<k;i++){
        printf("\nSabor do item %i: %s",i+1,pedido.item[i].sabor);
        printf("\nTamanho do item %i: %s",i+1,pedido.item[i].tamanho);
        printf("\nQuantidade do item %i: %i",i+1,pedido.item[i].quantidade);
        printf("\n");
    }

    printf("\nComplemento: %s \nForma de Pagamento %s ",pedido.endereco.complemento,pedido.pagamento.fdepagamento);
    printf("\n");
    printf("\n");

}
