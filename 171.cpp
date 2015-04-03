/*
Excel Sheet Column Number
Leetcode #171

Given a column title as appear in an Excel sheet, return its corresponding column number.
*/

class Solution {
public:
    int titleToNumber(string s) {
        int result = 0,i;
        for (i = 0;i<s.size();i++){
        	result = result*26+(s.at(i)-'A'+1);
        }
        return result;
    }
};