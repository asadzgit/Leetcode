//********************************************Question Description**************************************************************
//Problem link: https://leetcode.com/problems/search-insert-position/
//Given a sorted arrayand a target value, return the index if the target is found.If not, return the index where it would be if it were inserted in order.
//
//You may assume no duplicates in the array.
//
//Example 1 :
//
//    Input : [1, 3, 5, 6] , 5
//    Output : 2
//    Example 2 :
//
//    Input : [1, 3, 5, 6] , 2
//    Output : 1
//    Example 3 :
//
//    Input : [1, 3, 5, 6] , 7
//    Output : 4
//    Example 4 :
//
//    Input : [1, 3, 5, 6] , 0
//    Output : 0
//**************************************************************************************************************
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        if (target < nums[0])
            return 0;
        for (; i < nums.size(); i++) {
            if (target == nums[i] || target < nums[i]) {
                return i;
            }
        }
        return i;
    }
};
