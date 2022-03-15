#define MAX_LINHAS 100
#define MAX_COLUNAS 100

void soma(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao soma da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j ++) {
                resp[i][j] = a[i][j] + b[i][j];
        }
    }
}

void transposta(int m[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para a matrizes "a".
    //   "n_linhas" - quantidade de colunas a ambas matrizes "a".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de matriz transposta de "a" e atribuir a matriz "resp".
    //
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j ++) {
                resp[j][i] = m[i][j];
        }
    }
}

void concatena_horizontal(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de concatenacao horizontal da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //

    int i_linha = 0;
    int i_coluna = 0;

    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            resp[i_linha][i_coluna] = a[i][j];
            i_coluna++;
        }
        i_linha++;
        i_coluna = 0;
    }

    i_linha = 0;
    i_coluna = n_colunas;
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            resp[i_linha][i_coluna++] = b[i][j];
        }
        i_linha++;
        i_coluna = n_colunas;
    }
}

void concatena_vertical(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de concatenacao vertical da matriz "a" com a matriz "b" e atribuir a matriz "resp".
    //

    int i_linha = 0;
    int i_coluna = 0;

    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            resp[i_linha][i_coluna] = a[i][j];
            i_coluna++;
        }
        i_linha++;
        i_coluna = 0;
    }

    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            resp[i_linha][i_coluna] = b[i][j];
            i_coluna++;
        }
        i_linha++;
        i_coluna = 0;
    }

}

void multiplicacao(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    // Escreva aqui o seu codigo !
    // Parametros de entrada:
    //   Matriz "a" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   Matriz "b" com dimensao maxima de MAX_LINHAS por MAX_COLUNAS.
    //   "n_linhas" - quantidade de linhas para ambas matrizes "a" e "b".
    //   "n_linhas" - quantidade de colunas para ambas matrizes "a" e "b".
    // Parametros de saida:
    //   Matriz "resp", ja declarado e alocado.
    // A funcao nao tem retorno.
    // Descricao:
    //   Implementar a operacao de multiplicacao das matrizes "a" * "b" e atribuir a matriz "resp".
    //

    // Condicao de existencia satisfeita no escopo da funcao ->  numColunas a = numLinhas de b
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j ++) {
            for (int k = 0; k < n_colunas; k++) {
                resp[i][j] = resp[i][j] + a[i][k] * b[k][j];
            }
        }
    }

}

void main() {
    // call functions >.<
}
