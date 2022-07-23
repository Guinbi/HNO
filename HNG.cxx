#include <iostream>
#include <conio.h>

using namespace std;

#define KEY_UP 119
#define KEY_DOWN 115
#define KEY_LEFT 97
#define KEY_RIGHT 100
#define KEY_X 120

int player_pos_x = 0;
int player_pos_y = 0;

int map_x[] = {};
int map_y[] = {};

void input_key(){ //Movimentação do player
    
    char key = getch();
    int value = key;
    
    while(value != KEY_X){
        
        switch(getch()){
            
            case KEY_UP:
                player_pos_y += 1;
                cout << "norte - "     << "(" << player_pos_x << "," << player_pos_y << ")" << "\n";
                break;
                
            case KEY_DOWN:
                player_pos_y -= 1;
                cout << "sul - " << "(" << player_pos_x << "," << player_pos_y << ")" << "\n";
                break;
                
            case KEY_LEFT:
                player_pos_x -= 1;
                cout << "oeste - " << "(" << player_pos_x << "," << player_pos_y << ")" << "\n";
                break;
                
            case KEY_RIGHT:
                player_pos_x += 1;
                cout << "leste - " << "(" << player_pos_x << "," << player_pos_y << ")" << "\n";
                break;
        }
    }
}

int map(int s){ //Cria o mapa do jogo
    int i;
    for(i = 0;i < s;i++){
        map_x[i] = i;
        map_y[i] = i;
    }
    return 0;
}

int main(){
    map(50);
    
    input_key();
    system("pause");
    return 0;
}
