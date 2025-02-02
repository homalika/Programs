#include<stdio.h>
char board[3][3];
void print_board()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c", board[i][j]); 
            if(j < 2)
            {
                printf(" | "); 
            }
        }
        printf("\n");
        if(i < 2)
        {
            printf("----------\n");
        }
    }
}
void get_markers(char *m1, char *m2) // use pointers to access char datatype
{
    char marker1;
    printf("Player 1 choice (X or O): ");
    scanf("%c", &marker1);
    if(marker1 == 'X' || marker1 == 'x')
    {
        *m1 = 'X';
        *m2 = 'O';
    }
    else if(marker1 == 'O' || marker1 == 'o')
    {
        *m1 = 'O';
        *m2 = 'X';
    }
    else
    {
        printf("Invalid input\n"); // we call this get_markers in it as we can't exit a function till we get proper input
        // called till valid input given
        get_markers(m1, m2);
    }
}
int get_coordinates(int *x, int *y)
{
    printf("Enter the coordinates (row and column):");
    scanf("%d %d", x, y); // range must be from 0 to 2
    if(*x >= 0 && *x < 3 && *y >= 0 && *y < 3)
    {
        return 1;
    }
    else
    {
        printf("Invalid input\n");
        return 0;
    }
}
int check_for_win()
{
    for(int i = 0; i < 3; i++) // any rows are all equal or not
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') // to tag adjacent grid
        {
            return 1;
        }
    }
    for(int i = 0; i < 3; i++) // any columns are all equal or not
    {
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ' )
        {
            return 1;
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ') // diagonal elements condition
    {
        return 1;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ') // anti-diagonal ondition
    {
        return 1;
    }
    return 0;
}
int update_board(int chance, char marker, int x, int y)
{
    if(board[x][y] == ' ')
    {
        board[x][y] = marker;
        if(check_for_win())
        {
            if(chance)
            {
                printf("Player 1 wins.\n");
            }
            else
            {
                printf("Player 2 wins.\n");
            }
            return 0;
        }
        return 1;
    }
    else
    {
        printf("Invalid move, try again.\n");
        return 1;
    }
}
void play_game()
{
    int player1 = 0;
    int player2 = 0;
    char m1, m2;
    get_markers(&m1, &m2);
    printf("Player 1 : %c, Player 2 : %c\n", m1, m2);
    int chance = 1; // to allow player 2 to enter choice -- for turn over chance = 1 taken
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++) //initial wining chance comes in 5 steps, final steps are 9
        {
            board[i][j] = ' ';
        }
    }
    while(1) // to print board after every move by both players
    {
        print_board();
        int x, y;
        int valid = 0;
        while(!valid)
        {
            valid = get_coordinates(&x, &y);
        }
    if(chance)
    {
        if(!update_board(chance, m1, x, y))
        {
            break;
        }
    }
       else
        {
            if(!update_board(chance, m2, x, y))
            {
                break;
            }
        }
        chance = !chance;
    }
}
int main()
{
    play_game();
    return 0;
}
