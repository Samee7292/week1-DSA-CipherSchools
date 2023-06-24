#include <bits/stdc++.h>
using namespace std;
vector<string> dialpad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generateParenthesis (string &input, string &strSoFar, vector<string> &result, int start, int end)
{
// Base
if (start > end)
{
result.push_back(strSoFar);
return;
}
else
{

char digitPressed input[start];      // input = 2983, start = 0,  digit = '2' -> 66
string possibleMoves = dialpad[digitPressed - '0']; // "abi:"

for (int i = 0; i < possibleMoves.size(); i++)
{
// Next Recursion
strSoFar.push_back(possibleMoves[i]);  //->strSoFar ="b"
generateParenthesis (input, strSoFar, result, start + 1, end);
// backtracking
strSofar.pop_bat
}
}
}
vector<string> generateParenthesis (const int n)
vector<string> result;
int open = n, close = n;
string strSofar = "";
generateParenthesis (strSoFar, result, open, close);
return result;
}
int main(){
}
