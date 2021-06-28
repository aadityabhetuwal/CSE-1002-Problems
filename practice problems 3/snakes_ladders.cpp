#include<iostream>

using namespace std;

typedef struct
{
	//elements to indicate the number of rows and columns
	int row,col;
}board;

//A struct to define a position in the board
typedef struct
{
	int row;
	int col;
}position;

//Struct to represent the details of snake positions

typedef struct 
{
	int num;
	int st_Grid[10];
	int end_Grid[10];
}snakes;

//Struct to represent the details of ladder positions
typedef struct 
{
	int num;
	int st_Grid[10];
	int end_Grid[10];
}ladders;

//Struct to represent the details of rolls in the play
typedef struct 
{
	int num;
	int roll[10];
}rolls;

// Function to read input from user board, snake and ladder details
// then current position and details of rolls
// Parameters are passed by reference
void read_Values(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos,rolls &r);

//Function to compute new position of coin
int find_New_Pos(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos, rolls &r);

void read_Values(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos,rolls &r){

    cin >> b.row >> b.col;
    cin >> snake_Det.num;

    for(int i = 0; i < snake_Det.num; i++){
        cin >> snake_Det.st_Grid[i] >> snake_Det.end_Grid[i];
    }

    cin >> ladder_Det.num;

    for(int i = 0; i < ladder_Det.num; i++){
        cin >> ladder_Det.st_Grid[i] >> ladder_Det.end_Grid[i];
    }

    cin >> cur_Pos.row >> cur_Pos.col;

    cin >> r.num;

    for(int i = 0; i < r.num; i++){
        cin >> r.roll[i];
    }
	return;
}


int find_New_Pos(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos, rolls &r){

	int ini_grid = (cur_Pos.row - 1) * b.col + cur_Pos.col;

	for(int i = 0; i < r.num; i++){
		ini_grid += r.roll[i];

		for(int j = 0; j < snake_Det.num; j++){
			if(snake_Det.st_Grid[i] == ini_grid){
				ini_grid = snake_Det.end_Grid[i];
			}
		}

		for(int j = 0; j < ladder_Det.num; j++){
			if(ladder_Det.st_Grid[i] == ini_grid){
				ini_grid = ladder_Det.end_Grid[i];
			}
		}
	}

	return ini_grid;
};

int main()
{
	board b;
	position cur_Pos;
	int final_Grid;
	rolls r;
	snakes snake_Det;
	ladders ladder_Det;	
	read_Values(b,snake_Det,ladder_Det,cur_Pos,r);
	final_Grid = find_New_Pos(b, snake_Det, ladder_Det, cur_Pos, r);
	cout << final_Grid;
}