/*Leetcode #125
Valid Palindrome
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.*/

class Solution {
public:
    bool isPalindrome(string s) {
         if ( s.empty() )
         	return true;
         int i = 0, j = s.size()-1;
         while(i < j){
         	while (!isalpha(s[i]) && !isdigit(s[i]) )
         		i++;
         	while (!isalpha(s[j]) && !isdigit(s[j]))
         		j--;
         	if (i > j)
         		continue;
         	if ( !isdigit(s[i]) && !isdigit(s[j])){
         		if ( tolower(s[i]) != tolower(s[j]) )
         			return false;
         	}
         	else{
         		if (s[i] != s[j])
         			return false;
         	}
         	i++;
         	j--;
         }
         return true;
    }
};