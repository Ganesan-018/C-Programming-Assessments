#include <stdio.h>
int main() {
    char board[8][8] = {'.'};  
    int row = 0, col = 0;
    int i, safe;
    while (row < 8) 
    {
        while (col < 8) 
        {
            safe = 1;
            for (i = 0; i < row; i++) 
            {
                if (board[i][col] == 'Q')
                    safe = 0;
                if (col - (row - i) >= 0 && board[i][col - (row - i)] == 'Q')
                    safe = 0;
                if (col + (row - i) < 8 && board[i][col + (row - i)] == 'Q')
                    safe = 0;
            }
            if (safe) 
            {
                board[row][col] = 'Q';
                break;
            }
            col++;
        }
        if (col == 8) 
        {
            row--;
            for (i = 0; i < 8; i++)
                if (board[row][i] == 'Q') 
                { 
                    board[row][i] = 0;
                    col = i + 1;
                    break;
                }
        } 
        else 
        {
            row++;
            col = 0;
        }
    }
    for (row = 0; row < 8; row++) 
    {
        for (col = 0; col < 8; col++)
            printf("%c ", board[row][col]);
        printf("\n");
    }
}
