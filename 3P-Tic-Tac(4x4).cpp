#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

char game_board[4][4] = {{'1', '2', '3', '4'}, {'5', '6', '7', '8'}, {'9', 'A', 'B', 'C'}, {'D', 'E', 'F', 'G'}};

char player = 'X';
void draw_board()
{
    system("cls"); // clears whats on the screen or the terminal
    cout << "Welcome to tic-tac-tok" << endl;

    cout << "     |     |     |     \n";
    cout << "  " << game_board[0][0] << "  |  " << game_board[0][1] << "  |  " << game_board[0][2] <<"  |  " << game_board[0][3] << endl;
    cout << "-----|-----|-----|-----\n     |     |     |     \n";
    cout << "  " << game_board[1][0] << "  |  " << game_board[1][1] << "  |  " << game_board[1][2] << "  |  " << game_board[1][3] <<endl;
    cout << "-----|-----|-----|-----\n     |     |     |     \n";
    cout << "  " << game_board[2][0] << "  |  " << game_board[2][1] << "  |  " << game_board[2][2]<< "  |  " << game_board[2][3] << endl;
    cout << "-----|-----|-----|-----\n     |     |     |     \n";
    cout << "  " << game_board[3][0] << "  |  " << game_board[3][1] << "  |  " << game_board[3][2] << "  |  " << game_board[3][3] << endl;
    cout << "     |     |     |     \n";
}
void user_input(string name1, string name2,string name3)
{
    char in;
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
    if (player == 'W'){
        cout << "It\'s " << name3 << "\'s turn" << endl;
    }

    cout << "Enter position number or Alphabet";
    cin >> in;
    switch (in)
    {
    case '1':
    if (game_board[0][0] != 'X' && game_board[0][0] != 'O' && game_board[0][0] != 'W')
        game_board[0][0] = player;
    else
        goto input;

    break;
    case '2':
        if (game_board[0][1] != 'X' && game_board[0][1] != 'O' && game_board[0][1] != 'W')
            game_board[0][1] = player;
        else
            goto input;

        break;
    case '3':
        if (game_board[0][2] != 'X' && game_board[0][2] != 'O' && game_board[0][2] != 'W')
            game_board[0][2] = player;
        else
            goto input;

        break;
    case '4':
        if (game_board[0][3] != 'X' && game_board[0][3] != 'O' && game_board[0][3]!='W')
            game_board[0][3] = player;
        else
            goto input;

        break;
    //row 2 starts
    case '5':
        if (game_board[1][0] != 'X'  && game_board[1][0] != 'O' && game_board[1][0] != 'W')
            game_board[1][0] = player;
        else
            goto input;

        break;
    case '6':
        if (game_board[1][1] != 'X' && game_board[1][1] != 'O' && game_board[1][1] != 'W')
            game_board[1][1] = player;
        else
            goto input;

        break;
    case '7':
        if (game_board[1][2] != 'X' && game_board[1][2] != 'O' && game_board[1][2] != 'W')
            game_board[1][2] = player;
        else
            goto input;

        break;
    case '8':
        if (game_board[1][3] != 'X' && game_board[1][3] != 'O' && game_board[1][3] != 'W')
            game_board[1][3] = player;
        else
            goto input;

        break;
    
    //row3 starts
    case '9':
        if (game_board[2][0] != 'X' && game_board[2][0] != 'O' && game_board[2][0] != 'W')
            game_board[2][0] = player;
        else
            goto input;

        break;
    case 'A' :
        if (game_board[2][1] != 'X' && game_board[2][1] != 'O' && game_board[2][1] != 'W')
            game_board[2][1] = player;
        else
            goto input;

        break;
    case 'B':
        if (game_board[2][2] != 'X' && game_board[2][2] != 'O' && game_board[2][1] != 'W')
            game_board[2][2] = player;
        else
            goto input;

        break;
    case 'C':
        if (game_board[2][3] != 'X' && game_board[2][3] != 'O' && game_board[2][3] != 'W')
            game_board[2][3] = player;
        else
            goto input;

        break;
    //row 4
    case 'D':
        if (game_board[3][0] != 'X' && game_board[3][0] != 'O' && game_board[3][0] != 'W')
            game_board[3][0] = player;
        else
            goto input;

        break;
    case 'E':
        if (game_board[3][1] != 'X' && game_board[3][1] != 'O' && game_board[3][1] != 'W')
            game_board[3][1] = player;
        else
            goto input;

        break;
    case 'F':
        if (game_board[3][2] != 'X' && game_board[3][2] != 'O' && game_board[3][2] != 'W')
            game_board[3][2] = player;
        else
            goto input;

        break;
    case 'G':
        if (game_board[3][2] != 'X' && game_board[3][2] != 'O' && game_board[3][2] != 'W')
            game_board[3][2] = player;
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
    if (game_board[0][0] == player && game_board[0][1] == player && game_board[0][2] == player && game_board[0][3] == player)
    {
        return player;
    }
    if (game_board[1][0] == player && game_board[1][1] == player && game_board[1][2] == player && game_board[1][3] == player)
    {
        return player;
    }
    if (game_board[2][0] == player && game_board[2][1] == player && game_board[2][2] == player && game_board[2][3] == player)
    {
        return player;
    }
    if (game_board[3][0] == player && game_board[3][1] == player && game_board[3][2] == player && game_board[3][3] == player)
    {
        return player;
    }

    // checking the columns
    if (game_board[0][0] == player && game_board[1][0] == player && game_board[2][0] == player && game_board[3][0] == player)
    {
        return player;
    }
    if (game_board[0][1] == player && game_board[1][1] == player && game_board[2][1] == player && game_board[3][1] == player)
    {
        return player;
    }
    if (game_board[0][2] == player && game_board[1][2] == player && game_board[2][2] == player && game_board[3][2] == player)
    {
        return player;
    }
    if (game_board[0][3] == player && game_board[1][3] == player && game_board[2][3] == player && game_board[3][3] == player)
    {
        return player;
    }

    // checking diagnols
    //right diagnols
    if (game_board[0][0] == player && game_board[1][1] == player && game_board[2][2] == player)
    {
        return player;
    }

    if (game_board[1][1] == player && game_board[2][2] == player && game_board[3][3] == player )
    {
        return player;
    }
    if (game_board[1][1] == player && game_board[1][2] == player && game_board[2][3] == player)
    {
        return player;
    }
    if (game_board[1][0] == player && game_board[2][1] == player && game_board[3][2] == player)
    {
        return player;
    }

    //left diagnols
    if (game_board[0][3] == player && game_board[1][2] == player && game_board[2][1] == player)
    {
        return player;
    }
    if (game_board[1][2] == player && game_board[2][1] == player && game_board[3][0] == player)
    {
        return player;
    }

    if (game_board[0][2] == player && game_board[1][1] == player && game_board[2][0] == player)
    {
        return player;
    }
    if (game_board[1][3] == player && game_board[2][2] == player && game_board[3][1] == player)
    {
        return player;
    }

    // none of the above work
    return 'N';
}

int main()
{
    

    cout << "Welcome to Tic-Tac-Toe" << endl;
    cout << "Enter player 1:";
    string name1, name2,name3;
    getline(cin, name1);
    cout << "Enter player 2:";
    getline(cin, name2);
    cout << "Enter player 3:";
    getline(cin, name3);
    draw_board();

    while (true)
    {
        user_input(name1, name2,name3);
        draw_board();

        if (win() == 'X')
        {
            cout << name1 << " Wins\n";
            break;
        }
        else if (win() == 'O')
        {
            cout << name2 << " Wins\n";
            break;
        }
        else if (win()== 'W'){
            cout<< name3 << " Wins\n";
        }

        else if (win() == 'N' && game_board[0][0] != '1' && game_board[0][1] != '2' && game_board[0][2] != '3' && game_board[0][3] != '4' &&
                 game_board[1][0] != '5' && game_board[1][1] != '6' && game_board[1][2] != '7' && game_board[1][3] != '8' &&
                 game_board[2][0] != '9' && game_board[2][1] != 'A' && game_board[2][2] != 'B' && game_board[2][3] != 'C' &&
                 game_board[3][0] != 'D' && game_board[3][1] != 'E' && game_board[3][2] != 'F' && game_board[3][3] != 'G' )
        {
            cout << "Match Draw bye \n";
            break;
        }
        if (player == 'X')
            player = 'O';
        else if (player == 'O')
            player = 'W';
        else if (player == 'W')
            player= 'X';
    }
    
    return 0;
}
