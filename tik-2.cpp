#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

char game_board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char player = 'X';
void draw_board()
{
    system("cls"); // clears whats on the screen or the terminal

    cout << "Welcome to tic-tac-tok" << endl;

    cout << "     |     |     \n";
    cout << "  " << game_board[0][0] << "  |  " << game_board[0][1] << "  |  " << game_board[0][2] << endl;
    cout << "-----|-----|-----\n     |     |     \n";
    cout << "  " << game_board[1][0] << "  |  " << game_board[1][1] << "  |  " << game_board[1][2] << endl;
    cout << "-----|-----|-----\n     |     |     \n";
    cout << "  " << game_board[2][0] << "  |  " << game_board[2][1] << "  |  " << game_board[2][2] << endl;
    cout << "     |     |     \n";
}
void user_input(string name1, string name2)
{
    int in;
// the input used for input validation
// input is a lable used for goto function
input:
    if (player == 'X')
    {
        cout << "It\'s " << name1 << "\'s turn" << endl;
    }
    if (player == 'O')
    {
        cout << "It\'s " << name2 << "\'s turn" << endl;
    }

    cout << "Enter a number,where you want to plant your input";
    cin >> in;
    switch (in)
    {
    case 1:
        if (game_board[0][0] != 'X' && game_board[0][0] != 'O')
            game_board[0][0] = player;
        else
            goto input;

        break;
    case 2:
        if (game_board[0][1] != 'X' && game_board[0][1] != 'O')
            game_board[0][1] = player;
        else
            goto input;

        break;
    case 3:
        if (game_board[0][2] != 'X' && game_board[0][2] != 'O')
            game_board[0][2] = player;
        else
            goto input;

        break;
    case 4:
        if (game_board[1][0] != 'X' && game_board[1][0] != 'O')
            game_board[1][0] = player;
        else
            goto input;

        break;
    case 5:
        if (game_board[1][1] != 'X' && game_board[1][1] != 'O')
            game_board[1][1] = player;
        else
            goto input;

        break;
    case 6:
        if (game_board[1][2] != 'X' && game_board[1][2] != 'O')
            game_board[1][2] = player;
        else
            goto input;

        break;
    case 7:
        if (game_board[2][0] != 'X' && game_board[2][0] != 'O')
            game_board[2][0] = player;
        else
            goto input;

        break;
    case 8:
        if (game_board[2][1] != 'X' && game_board[2][1] != 'O')
            game_board[2][2] = player;
        else
            goto input;

        break;
    case 9:
        if (game_board[2][2] != 'X' && game_board[2][2] != 'O')
            game_board[2][2] = player;
        else
            goto input;

        break;
    default:
        cout << "Enter valid number" << endl;
        goto input;
        break;
    }
    // winning checker
}
char win()
{
    // rows
    if (game_board[0][0] == player && game_board[0][1] == player && game_board[0][2] == player)
    {
        return player;
    }
    if (game_board[1][0] == player && game_board[1][1] == player && game_board[1][2] == player)
    {
        return player;
    }
    if (game_board[2][0] == player && game_board[2][1] == player && game_board[2][2] == player)
    {
        return player;
    }

    // checking the columns
    if (game_board[0][0] == player && game_board[1][0] == player && game_board[2][0] == player)
    {
        return player;
    }
    if (game_board[0][1] == player && game_board[1][1] == player && game_board[2][1] == player)
    {
        return player;
    }
    if (game_board[0][1] == player && game_board[1][2] == player && game_board[2][2] == player)
    {
        return player;
    }
    // checking diagnols
    if (game_board[0][0] == player && game_board[1][1] == player && game_board[2][2] == player)
    {
        return player;
    }

    if (game_board[0][2] == player && game_board[1][1] == player && game_board[2][0] == player)
    {
        return player;
    }

    // none of the above work
    return 'N';
}

int main()
{
    system("cls");

    cout << "Welcome to Tic-Tac-Toe" << endl;
    cout << "Enter player 1:";
    string name1, name2;
    getline(cin, name1);
    cout << "Enter player 2:";
    getline(cin, name2);
    draw_board();

    while (true)
    {
        user_input(name1, name2);
        draw_board();

        if (win() == 'X')
        {
            cout << name1 << " Wins\n";
            break;
        }
        else if (win() == '0')
        {
            cout << name2 << " Wins\n";
            break;
        }

        else if (win() == 'N' && game_board[0][0] != '1' && game_board[0][1] != '2' && game_board[0][2] != '3' && game_board[1][0] != '4' && game_board[1][1] != '5' && game_board[1][2] != '6' && game_board[2][0] != '7' && game_board[2][1] != '8' && game_board[2][2] != '9')
        {
            cout << "Match Draw bye \n";
            break;
        }
        if (player == 'X')
            player = 'O';
        else if (player == 'O')
            player = 'X';
    }
    system("pause");
    return 0;
}
