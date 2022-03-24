#include <stdio.h>

/*
Esta função deve preenher a matriz m_saida com todos os elementos de m_entrada, mas removendo a primeira linha e a coluna c:
A matriz m_entrada não deve ser alterada; Apenas a matriz m_saida é preenchida.
Não é preciso alocar nenhuma matriz nesta função, as matrizes m_entrada e m_saida devem ser pré-alocadas por quem chamar esta função.
A ordem da matriz de entrada é representada pelo parâmetro n da função.
É desnecessário retornar a ordem da matriz de retorno, pois sempre será n-1.
*/
void remove_primeira_linha_e_coluna_c (int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
    int i = 0, j = 0, p = 0;

    // Para cada elemento da matriz
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            //  Copia para a matriz temporaria apenas os elementos
            // que nao estao nas linha e couna atuais (da iteracao)
            if (row != p && col != c)
            {
                m_saida[i][j++] = m_entrada[row][col];

                // A linha esta preenchida, logo incrementa seu indice e
                // reseta o indice da coluna
                if (j == (n - 1))
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

/*
Retorna o valor do determinante da matriz m_entrada com ordem n.
Essa função deve ser recursiva:
Se a ordem for igual a um, o retorno será o único elemento da matriz (m_entrada[0][0]).
Se a ordem for maior que um, utilize o cálculo apresentado na fórmula do enunciado; Utilize a função remove_primeira_linha_e_coluna_c para gerar as sub-matrizes.
*/
float calcula_determinante (int n, float m_entrada[n][n]) {
    // Implementar (esta funcao deve ser recursiva)
    int det = 0;

    if (n == 1) return m_entrada[0][0];

    float m_saida[n][n];
    int sinal = 1;

    for (int elemento_primeira_linha = 0; elemento_primeira_linha < n; elemento_primeira_linha++) {

        remove_primeira_linha_e_coluna_c (n, m_entrada, m_saida, elemento_primeira_linha);

        det += sinal * m_entrada[0][elemento_primeira_linha]
             * calcula_determinante((n-1), m_saida);

        sinal = -sinal;
    }

    return det;
}

/*
Função principal que lê a ordem (n) da matriz, os elementos (linha à linha)
e imprime o resultado do determinante da matriz lida com duas casas decimais (inclua uma quebra de linha após a impressão do resultado).
*/
int main() {

    int n;
    float det;
    scanf("%d ", &n);

    float m_entrada[n][n];

    for (int linha = 0; linha < n; linha ++) {
        for (int coluna = 0; coluna < n; coluna++) {
            scanf("%f", &m_entrada[linha][coluna]);
            //printf("%f", m_entrada[linha][coluna]);
        }
        //printf("\n");
    }

    det = calcula_determinante(n, m_entrada);
    printf("%.2f\n", det);

    return 0;
}
