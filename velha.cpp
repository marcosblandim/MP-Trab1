/**
 * \file  velha.cpp
 */


#include "velha.hpp"


/**
 * @brief verifica situacao do jogo da velha  
 * @author Marcos
 * @param  velha matriz guardando o estado do tabuleiro
 * 
 *  Retorna:
 *  - 1 se o vencedor foi o X
 *  - 2 se o vencedor foi o O
 *  - 0 se o jogo está empatado
 *  - -1 se o jogo está indefinido
 *  - -2 se o jogo é com certeza impossível pelas regras
 */
int VerificaVelha( int velha[3][3] )
{
    int vencedor = ChecaVitoria(velha);
	return vencedor;
}

/**
 * @brief retorna o vencedor, ou 0 caso ele não exista
 * @author Marcos
 * @param  velha matriz guardando o estado do tabuleiro
 *
 *  Retorna:
 *  - 0 caso não seja possível determinar o vencedor
 *  - 1 caso o vencedor seja o X
 *  - 2 caso o vencedor seja o O
 */
int ChecaVitoria(int velha[3][3])
{
    // verifica linhas que passam no centro
    int centro = velha[1][1];
    if (centro != 0)
    {
        if (
            // horizontal central
            (velha[1][0] == centro && velha[1][2] == centro) ||
            // vertical central
            (velha[0][1] == centro && velha[2][1] == centro) ||
            // diagonal decrescente
            (velha[0][0] == centro && velha[2][2] == centro) ||
            // diagonal crescente
            (velha[2][0] == centro && velha[0][2] == centro)
            )
        {
            return centro;
        }
    }

    // verifica linhas que passam pela posição superior esquerda
    int superiorEsquerda = velha[0][0];
    if (superiorEsquerda != 0)
    {
        if (
            // horizontal superior
            (velha[0][1] == superiorEsquerda && velha[0][2] == superiorEsquerda) ||
            // vertical esquerda
            (velha[1][0] == superiorEsquerda && velha[2][0] == superiorEsquerda)
            )
        {
            return superiorEsquerda;
        }
    }

    // verifica linhas que passam pela posição inferior direita
    int inferiorDireita = velha[2][2];
    if (inferiorDireita != 0)
    {
        if (
            // horizontal inferior
            (velha[2][0] == inferiorDireita && velha[2][1] == inferiorDireita) ||
            // vertical direita
            (velha[0][2] == inferiorDireita && velha[1][2] == inferiorDireita)
            )
        {
            return inferiorDireita;
        }
    }

    return 0;
}


