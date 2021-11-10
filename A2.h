#include <iostream>

using namespace std;

class Robot {
public:

	void set() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				map[i][j] = blank;
			}
		}
		map[x][y] = '*';		// starting point
	}
	void drawMap() {			// Drawing of the map
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}
	}

	
	void checkMove() {
		for (int i = 0; i < input.length() - 1; i++) {
			if (input[i] == '2') {
				down();
			}
			else if (input[i] == '4') {
				left();
			}
			else if (input[i] == '6') {
				right();
			}
			else if (input[i] == '8') {
				up();
			}
			else {
				cout << "Error in move " << i + 1 << endl;
				break;
				
			}
		}
	}
	void lastMove() {
	//	for (int i = 1; i < input.length() + 1; i++) {			// This will allow to find the ending of the previous move if the last input
			if (input[input.length() - 1] == '2') {				// is on the X or the input is incorrect (not 2,4,6,8)
				down();											// just need to change the -1 to -i

				if (map[x][y] != 'X') {				// Will not show R at the end if there is already an X
					map[x][y] = 'R';				// Will replace starting point *
					//break;
				}
			}
			else if (input[input.length() - 1] == '4') {
				left();
				if (map[x][y] != 'X') {
					map[x][y] = 'R';
					//break;
				}
			}
			else if (input[input.length() - 1] == '6') {
				right();
				if (map[x][y] != 'X') {
					map[x][y] = 'R';
					//break;
				}
			}
			else if (input[input.length() - 1] == '8') {
				up();
				if (map[x][y] != 'X') {
					map[x][y] = 'R';
					//break;
				}
			}
			else {
				cout << "Error on last input" << endl;

			}
		}
	//}
	bool checkWall() {
		if (x < 0) {
			x++;
			wallCount++;
			return true;
		}
		if (x > 9) {
			x--;
			wallCount++;
			return true;
		}
		if (y < 0) {
			y++;
			wallCount++;
			return true;
		}
		if (y > 9) {
			y--;
			wallCount++;
			return true;
		}
		return false;
	}

	void up() {
		x--;
		if (checkWall()) {
			return;
		}
		if (map[x][y] == '*') {
			return;
		}
		if (map[x][y] == '9') {
			map[x][y] = 'X';
			return;
		}
		if (map[x][y] == 'X') {
			return;
		}
		if (map[x][y] == '.') {
			map[x][y] = '0';
		} 
		map[x][y]++;
	}
	void down() {
		x++;
		if (checkWall()) {
			return;
		}
		if (map[x][y] == '*') {
			return;
		}
		if (map[x][y] == '9') {
			map[x][y] = 'X';
			return;
		}
		if (map[x][y] == 'X') {
			return;
		}
		if (map[x][y] == '.') {
			map[x][y] = '0';
		}
		map[x][y]++;
	}
	void right() {
		y++;
		if (checkWall()) {
			return;
		}
		if (map[x][y] == '*') {
			return;
		}
		if (map[x][y] == '9') {
			map[x][y] = 'X';
			return;
		}
		if (map[x][y] == 'X') {
			return;
		}
		if (map[x][y] == '.') {
			map[x][y] = '0';
		}
		map[x][y]++;
	}
	void left() {
		y--;
		if (checkWall()) {
			return;
		}
		if (map[x][y] == '*') {
			return;
		}
		if (map[x][y] == '9') {
			map[x][y] = 'X';
			return;
		}
		if (map[x][y] == 'X') {
			return;
		}
		if (map[x][y] == '.') {
			map[x][y] = '0';
		}
		map[x][y]++;
	}

	void play() {
		set();
		drawMap();			//Starting map
		cout << "Starting map" << endl << "Enter movements here: ";
		cin >> input;
		cout << endl;
		checkMove();
		lastMove();
		drawMap();			//Ending map
		cout << endl << "We ran into the edge " << wallCount << " times." << endl;
	}

private:
	static const int rows = 10;
	static const int cols = 10;
	int x = 6;					// x = 0 is top right and not bottom right
	int y = 2;					// y = 0 is top right
	int wallCount = 0;
	string input;
	char map[rows][cols];

	char blank = '.';

};	