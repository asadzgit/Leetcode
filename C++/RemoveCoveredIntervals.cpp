//*************************************************Problem Description**********************************************
//https://leetcode.com/explore/challenge/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3483/
//Given a list of intervals, remove all intervals that are covered by another interval in the list.
//
//Interval[a, b) is covered by interval[c, d) ifand only if c <= a and b <= d.
//
//After doing so, return the number of remaining intervals.
//
//
//
//Example 1:
//
//Input: intervals = [[1, 4], [3, 6], [2, 8]]
//Output : 2
//Explanation : Interval[3, 6] is covered by[2, 8], therefore it is removed.
//******************************************************************************************************************
class Solution {
public:

    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int i = 0, j, count = 0;
        bool match;
        for (; i < intervals.size(); i++)
        {
            match = false;
            j = i + 1;
            for (; j < intervals.size(); j++)
                if (intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1]) {
                    count++;
                    match = true;
                    break;
                }
            if (match == false)
            {
                j = i - 1;
                for (; j >= 0; j--)
                    if (intervals[i][0] >= intervals[j][0] && intervals[i][1] <= intervals[j][1]) {
                        count++;
                        break;
                    }

            }

        }
        return intervals.size() - count;
    }
};