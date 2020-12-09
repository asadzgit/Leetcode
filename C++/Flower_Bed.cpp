//********************************************Question Description**************************************************************
//Problem link: https://leetcode.com/explore/challenge/card/december-leetcoding-challenge/569/week-1-december-1st-december-7th/3555/
//Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n,
//return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.
//Example 1:
//
//Input: flowerbed = [1, 0, 0, 0, 1], n = 1
//Output : true
//Example 2 :
//
//    Input : flowerbed = [1, 0, 0, 0, 1], n = 2
//    Output : false
//**************************************************************************************************************
class Solution {
public:
    static bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i, previous=0,next=0;
        for (i = 0; i < flowerbed.size(); i++) {
            if (i > 0)
                previous = flowerbed[i - 1];
            if (i < flowerbed.size() - 1)
                next = flowerbed[i + 1];
            if (previous == 0 && next == 0 && flowerbed[i] == 0) {
                n--;        //1 flower can be planted. Now we are left with (n-1) new flowers
                i++;
            }
        }
        if (n <= 0)    //if there are no new flowers left i.e all of them can be planted,then return true
            return true;
        return false;
    }
};