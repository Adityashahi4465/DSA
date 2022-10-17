
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<char>> &board, int row, int col, char c)
{
    for (int i = 0; i < 9; i++)
    {
        // cheaking for Rows
        if (board[row][i] == c)
            return false;
        // cheaking for columns
        if (board[i][col] == c)
            return false;
        // cheaking for 3x3 sub Metrix
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
            return false;
    }

    return true;
}

bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isPossible(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board) == true)
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = '.';
                        }
                    }
                }
                // we have tried till 9 in the present cell, but not get correct sol, Backtrac here
                return false;
            }
        }
    }
    // board completely triversed means all cells are filled, i.e. solution reached
    return true;
}

vector<vector<char>> solveSudoku(vector<vector<char>> &board)
{
    if (solve(board))
    {
        return board;
    }
    return {{}};
}

int32_t main()
{

    vector<vector<char>> board{
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    solveSudoku(board);
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            cout << "|" << board[i][j] << "____";
        }
        cout << "|" << endl;
    }

    return 0;
}