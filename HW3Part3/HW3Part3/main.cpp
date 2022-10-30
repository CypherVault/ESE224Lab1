
#include <iostream>
#include <stdlib.h>
using namespace std;
int choice;
int r, c;
char tictac[3][3] = { {'!','@','#'},{'$','%','^'},{'&','*','+'} };
char turn = 'x';
bool draw = false;

bool finish() {
  //normal left right
    for (int i = 0; i < 3; i++)
        if (tictac[0][i] == tictac[1][i] && tictac[0][i] == tictac[2][i] ||tictac[i][0] == tictac[i][1] && tictac[i][0] == tictac[i][2] )
            return false;

   //diag
    if ( tictac[0][2] == tictac[1][1] && tictac[0][2] == tictac[2][0]|| tictac[0][0] == tictac[1][1] && tictac[0][0] == tictac[2][2])
        return false;
    //draw?
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tictac[i][j] != 'x' && tictac[i][j] != 'o')
                return true;

    draw = true;
    return false;
}

void player_turn() {
    if (turn == 'x') {
        cout << "[X] turn : ";
    }
    else if (turn == 'o') {
        cout << "[O] turn : ";
    }
    

    cin >> choice;

    switch (choice) {
    case 1: 
        r = 0;
        
        c = 0; 
        break;
    case 2: 
        r = 0; 
        c = 1; 
        break;
    case 3:
        r = 0; 
        c = 2; 
        break;
    case 4: 
        r = 1; 
        c = 0; 
        break;
    case 5: 
        r = 1; 
        c = 1; 
        break;
    case 6: 
        r = 1; 
        c = 2; break;
    case 7: 
        r = 2; 
        c = 0; break;
    case 8: 
        r = 2; 
        c = 1; 
        break;
    case 9: 
        r = 2; 
        c = 2; 
        break;
    default:
        cout << "Invalid, you must go from 1-9 with an input";
    }

    if (turn == 'x' && tictac[r][c] != 'x' && tictac[r][c] != 'o') {
        
        tictac[r][c] = 'x';
        turn = 'o';
    }
    else if (turn == 'o' && tictac[r][c] != 'x' && tictac[r][c] != 'o') {
      
        tictac[r][c] = 'o';
        turn = 'x';
    }
    else {
       
        cout << "space taken";
        player_turn();
    }
   
  
}


void display_tictac() {

    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t  " << tictac[0][0] << "  | " << tictac[0][1] << "   |  " << tictac[0][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
  
    cout << "\t\t  " << tictac[1][0] << "  | " << tictac[1][1] << "   |  " << tictac[1][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
 
    cout << "\t\t  " << tictac[2][0] << "  | " << tictac[2][1] << "   |  " << tictac[2][2] << " \n";
    cout << "\t\t     |     |     \n";
}

//Program Main Method
void game() {
    while (finish()) {
        display_tictac();
        player_turn();
        finish();
    }
}

int main()
{
    cout << "tictactoe\n";
   
    game();

    if (turn == 'x' && draw == false) {
        cout << "Player [o] won" ;
    }
    else if (turn == 'o' && draw == false) {
        cout << "Player [x] won.";
    }
    else
        cout << "draw";
}