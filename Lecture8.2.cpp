//NQueen
#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<bool>> &Chess, int x, int y, const int &N){
//horozontally backing
for(int i=x;i>=0;i--){
if(Chess[i][y]){
return false;
}
}

//diagonally UP
for(int i=x,j=y; i>=0 && j>=0; i--,j--){
if(Chess[i][y]){
return false;}
}
return true;
}
}
for(int i=x,j=y; i<N  && j>=0; i++,j--){
if(Chess[i][y]){
return false;}
}
}
return true;
}
bool NQueen (vector<vector<bool>> &Chess, int y, const int &N) {
// base condition
if (y==N) {
return true;
}

// recursion
for (int x = 0; x < N; x++) {
if (isSafe (Chess, x, y, N)) {
Chess [x][y] = true;
if (NQueen (Chess 1, N)) {
return true;
}
// backtracking
Chess [x][y] = false;
}
}
return false;
}
vector<vector<bool>> NQueen(int N) {
vector<vector<boot> Chess (N, vector<bool>(N, false));
NQueen (Chess, 0, N);
return Chess;
int main(){
}