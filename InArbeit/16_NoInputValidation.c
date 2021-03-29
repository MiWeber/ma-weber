#include <stdio.h>
 #include <stdlib.h>


#define MAX_DIM 100
/* board dimensions */

void main()//InitializeBoard()
{
    int m,n, error;
    long int *board;//board_square_t *board;
    printf("Please specify the board height: \n");
    error = scanf("%d", &m);
    if(EOF == error)
    {
        printf("You need to pass an Integer!\n");
        return;
    }
    printf("Please specify the board width: \n");
    error = scanf("%d", &n);
    if(EOF == error)
    {
        printf("You need to pass an Integer!\n");
        return;
    }
    if(m > MAX_DIM || n > MAX_DIM)
    {
        printf("Value(s) too large: Values will be adaptet to a max of 100!\n");
        if(m > MAX_DIM)
            m = MAX_DIM;
        if(n > MAX_DIM)
            n = MAX_DIM;
    }
    board = (long int*)malloc(m*n*sizeof(long int)); //(board_square_t*) malloc( m * n * sizeof(board_square_t));
}
