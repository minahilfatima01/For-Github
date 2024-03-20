#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

const int SIZE = 3;

// Function to initialize the puzzle with numbers
void initializePuzzle(vector<vector<int>>& puzzle) {
    vector<int> numbers;
    for (int i = 1; i <= SIZE * SIZE - 1; ++i) {
        numbers.push_back(i);
    }
    srand(time(NULL));
    random_shuffle(numbers.begin(), numbers.end());

    int k = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (i != SIZE - 1 || j != SIZE - 1) {
                puzzle[i][j] = numbers[k++];
            } else {
                puzzle[i][j] = 0; // Empty cell
            }
        }
    }
}

// Function to display the puzzle
void displayPuzzle(vector<vector<int>>& puzzle) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (puzzle[i][j] == 0) {
                cout << "  "; // Empty cell
            } else {
                cout << puzzle[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// Function to check if the puzzle is solved
bool isSolved(vector<vector<int>>& puzzle) {
    int k = 1;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (puzzle[i][j] != k && (i != SIZE - 1 || j != SIZE - 1)) {
                return false;
            }
            ++k;
        }
    }
    return true;
}

// Function to move the empty cell
void moveEmptyCell(vector<vector<int>>& puzzle, int direction) {
    int row, col;
    // Find the empty cell
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (puzzle[i][j] == 0) {
                row = i;
                col = j;
                break;
            }
        }
    }

    // Perform the move
    switch (direction) {
        case 1: // Up
            if (row > 0) {
                swap(puzzle[row][col], puzzle[row - 1][col]);
            }
            break;
        case 2: // Down
            if (row < SIZE - 1) {
                swap(puzzle[row][col], puzzle[row + 1][col]);
            }
            break;
        case 3: // Left
            if (col > 0) {
                swap(puzzle[row][col], puzzle[row][col - 1]);
            }
            break;
        case 4: // Right
            if (col < SIZE - 1) {
                swap(puzzle[row][col], puzzle[row][col + 1]);
            }
            break;
    }
}

int main() {
    vector<vector<int>> puzzle(SIZE, vector<int>(SIZE));

    initializePuzzle(puzzle);

    // Game loop
    while (true) {
        system("cls");
        cout << "Use arrow keys to move the empty cell." << endl;
        cout << "Press ESC to exit." << endl << endl;

        displayPuzzle(puzzle);

        if (isSolved(puzzle)) {
            cout << "Congratulations! You solved the puzzle." << endl;
            break;
        }

        char move = getch();

        switch (move) {
            case 72: // Up arrow
                moveEmptyCell(puzzle, 1);
                break;
            case 80: // Down arrow
                moveEmptyCell(puzzle, 2);
                break;
            case 75: // Left arrow
                moveEmptyCell(puzzle, 3);
                break;
            case 77: // Right arrow
                moveEmptyCell(puzzle, 4);
                break;
            case 27: // ESC key
                return 0;
            default:
                break;
        }
    }

    return 0;
}
