#include<bits/stdc++.h>
using namespace std;




// Word Search
// Power (X, n)
// Power Set
// Sudoku
// Unique Path 2/3
// Knight Tour
// Generate All Binaries

bool isSafe(vector<vector<char>> &board, vector<vector<bool>> &visited, string &word,
int index, int x, int y, const int &R, const int &C) {
// x, y, within the grid
// not visited
// char word[index]
return x >= 0 && x < R && y >= 0 && y < C && !visited[x][y] &&oard [x][y] word[index]);
}
int xMoves[]={0,0,1,-1};
int yMoves[]={1,-1,0,0};
bool exist(vector<vector<c board, vector<vector<bool>> &visit & rd,
int index, int x, int y, const int &R, const int &C)
{
if (index >= word.size()) {
return true;
} else {
visited[x][y] = true;
for (int i = 0; i < 4; i++) {
int nextX = x+ xMoves[i];
int nextY= y + yMoves[i]; 
if (isSafe(board,visited,word,index , nextX,nextY, R, C)) {
if (exist(board, visited, word, index + 1, nextX,nextY, R, C)) {
return true;
}
}
}
visited[x][y]=false;
return false;
}
}
bool exit(vector<vetor<char>> &board, string word)
{
if(word = = " ")
{
return true;
}
int R = board.size();
if (R = = 0)
{
return false;
}
int C= board[0].size();
vector<vector<bool>> visited(R, vector<bool>(C, false));
for(int i=0;i<R;i++)
{
for(int j=0;j<c;j++)
{
if(board[i][j] = = word[0] && exist(board,visited, word, 1,i,j,R,C))
{
return true;
}
}
}
return false;
}
int main(){
}
 
