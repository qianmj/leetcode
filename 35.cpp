/*Leetcode #35
Search Insert Position
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0*/


//O(n) solution, trivial
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
    	int i;
    	for (i = 0; i < n; ++i)
    	{
    		if (A[i] >= target){
    			return i;
    		}
    	}
    	return i;
        
    }
};

//O(logN) solution, use binary search
class Solution {
public:
    int searchInsert(int A[], int n, int target) {
    	int left = 0, right = n-1;
    	int mid;
    	while(left <= right){
    		if (A[left] >= target){
    			return left;
    		}
    		if (target > A[right]){
    			return right + 1;
	    	}
	    	mid = (left+right)/2;
	    	if (target == A[mid]){
	    		return mid;
	    	}
	    	if (target > A[mid]){
	    		left = mid+1;
	    	}
	    	else{
	    		right = mid -1;
	    	}
    	}
        
    }
};