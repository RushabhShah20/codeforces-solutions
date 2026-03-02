// Problem: Tic-tac-toe
// Link to the problem: https://codeforces.com/contest/3/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int countWins(const vector<string> &board, const char c)
{
    int ans = 0;
    if (board[0][0] == c && board[0][1] == c && board[0][2] == c)
    {
        ans++;
    }
    if (board[1][0] == c && board[1][1] == c && board[1][2] == c)
    {
        ans++;
    }
    if (board[2][0] == c && board[2][1] == c && board[2][2] == c)
    {
        ans++;
    }
    if (board[0][0] == c && board[1][0] == c && board[2][0] == c)
    {
        ans++;
    }
    if (board[0][1] == c && board[1][1] == c && board[2][1] == c)
    {
        ans++;
    }
    if (board[0][2] == c && board[1][2] == c && board[2][2] == c)
    {
        ans++;
    }
    if (board[0][0] == c && board[1][1] == c && board[2][2] == c)
    {
        ans++;
    }
    if (board[0][2] == c && board[1][1] == c && board[2][0] == c)
    {
        ans++;
    }
    return ans;
}

bool validTicTacToe(const vector<string> &board)
{
    int countX = 0, countO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'X')
            {
                countX++;
            }
            else if (board[i][j] == '0')
            {
                countO++;
            }
        }
    }
    const int winO = countWins(board, '0'), winX = countWins(board, 'X');
    if (countO > countX)
    {
        return false;
    }
    if (countX - countO > 1)
    {
        return false;
    }
    if (winO > 2 || winX > 2)
    {
        return false;
    }
    if (winO >= 1 && winX >= 1)
    {
        return false;
    }
    if (winO == 0 && winX >= 1 && countX == countO)
    {
        return false;
    }
    if (winX == 0 && winO >= 1 && countO < countX)
    {
        return false;
    }
    return true;
}

int winner(const vector<string> &board)
{
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        int numX = 0, numO = 0;
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'X')
            {
                numX++;
            }
            if (board[i][j] == '0')
            {
                numO++;
            }
        }
        if (numX == 3)
        {
            return 1;
        }
        if (numO == 3)
        {
            return 2;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        int numX = 0, numO = 0;
        for (int i = 0; i < 3; i++)
        {
            if (board[i][j] == 'X')
            {
                numX++;
            }
            if (board[i][j] == '0')
            {
                numO++;
            }
        }
        if (numX == 3)
        {
            return 1;
        }
        if (numO == 3)
        {
            return 2;
        }
    }
    int numX = 0, numO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (board[i][j] == 'X')
                {
                    numX++;
                }
                if (board[i][j] == '0')
                {
                    numO++;
                }
            }
        }
    }
    if (numX == 3)
    {
        return 1;
    }
    if (numO == 3)
    {
        return 2;
    }
    numX = 0, numO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                if (board[i][j] == 'X')
                {
                    numX++;
                }
                if (board[i][j] == '0')
                {
                    numO++;
                }
            }
        }
    }
    if (numX == 3)
    {
        return 1;
    }
    if (numO == 3)
    {
        return 2;
    }
    numX = 0, numO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'X')
            {
                numX++;
            }
            if (board[i][j] == '0')
            {
                numO++;
            }
        }
    }
    if (numX + numO == 9)
    {
        ans = 3;
    }
    return ans;
}

string tictactoe(const vector<string> &board)
{
    int moves = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '0' || board[i][j] == 'X')
            {
                moves++;
            }
        }
    }
    if (moves == 0)
    {
        return "first";
    }
    if (moves == 1)
    {
        return "second";
    }
    if (moves == 2)
    {
        return "first";
    }
    if (moves == 3)
    {
        return "second";
    }
    if (moves <= 4)
    {
        return "first";
    }
    if (moves == 5)
    {
        const int x = winner(board);
        if (x == 0)
        {
            return "second";
        }
        if (x == 1)
        {
            return "the first player won";
        }
        if (x == 2)
        {
            return "the second player won";
        }
        return "draw";
    }
    if (moves == 6)
    {
        const int x = winner(board);
        if (x == 0)
        {
            return "first";
        }
        if (x == 1)
        {
            return "the first player won";
        }
        if (x == 2)
        {
            return "the second player won";
        }
        return "draw";
    }
    if (moves == 7)
    {
        const int x = winner(board);
        if (x == 0)
        {
            return "second";
        }
        if (x == 1)
        {
            return "the first player won";
        }
        if (x == 2)
        {
            return "the second player won";
        }
        return "draw";
    }
    if (moves == 8)
    {
        const int x = winner(board);
        if (x == 0)
        {
            return "first";
        }
        if (x == 1)
        {
            return "the first player won";
        }
        if (x == 2)
        {
            return "the second player won";
        }
        return "draw";
    }
    const int x = winner(board);
    if (x == 1)
    {
        return "the first player won";
    }
    if (x == 2)
    {
        return "the second player won";
    }
    return "draw";
}

void solve()
{
    vector<string> board(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> board[i];
    }
    if (!validTicTacToe(board))
    {
        cout << "illegal" << endl;
    }
    else
    {
        const string ans = tictactoe(board);
        cout << ans << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}