#include<bits/stdc++.h>
using namespace std;


// Word Search
// Power (X, n)
// Power Set
// Sudoku
// Unique Path 2/3
// Knight Tour
// Generate All Binaries


#define Size 9
bool isEmpty(vector<vector<int>> &sudoku, int &row, int &col) {
for (row = 0; row < Size; row++) {
for (col = 0; col < Size; col++) {
if (sudoku[row][col] == 0) {
return true;
}
}
return false;
}

bool usedInRow(vector<vecto &sudoku, const int row, const in cot fi) {
! for (int j = 0; j < N;
if (sudoku[row][])
}
}
bool isSafe(vector<vector<int>> &sudoku, const int row, const int col, int fill) {
// UsedInRow
// UsedInCol
// UsedInBox
return (!usedInRow(sudoku, row, col, fill) && !usedInCol (sudoku, row, col, fill) && !used InBox (sudoku,
}
bool solveSudoku(vector<vector<int>> &sudoku) {
int row, col; // location of empty cell
// bool found false;
11 for (now : Dow Size: Dous