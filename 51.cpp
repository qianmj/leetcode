/*Leetcode #51
N-Queens 
The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.



Given an integer n, return all distinct solutions to the n-queens puzzle.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively.

For example,
There exist two distinct solutions to the 4-queens puzzle:

[
 [".Q..",  // Solution 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // Solution 2
  "Q...",
  "...Q",
  ".Q.."]
]*/


//Solve with backtracking algorithm

class Solution {
public:
    vector<vector<string> > solveNQueens(int n) {
    	vector<vector<string> > result;
    	vector<string> board(n, string(n, '.'));
    	int row = 0, col = 0;
    	for (row = 0; row < n; row++){

    	}
    	return result;
        
    }

    bool isConflict(vector<string> &sol, int row, int col){
    	bool confilct;
    	int check;

    }
};