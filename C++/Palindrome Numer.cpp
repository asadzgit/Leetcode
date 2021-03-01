/**
**************Problem Description*********************************
* https://leetcode.com/problems/palindrome-number/
* Given an integer x, return true if x is palindrome integer.
*
*An integer is a palindrome when it reads the same backward as forward. For example, 121 is *palindrome while 123 is not.
*Example 1:
*
*Input: x = 121
*Output: true
*Example 2:
*
*Input: x = -121
*Output: false
*Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is *not a palindrome.
*/

public class Solution {
    public bool IsPalindrome(int x) {
        if(x<int.MinValue || x>(Math.Pow(2,31)-1) )
            return false;
        if(x<0)
            return false;
        int reverse=Reverse(x);
        if(x==reverse)
            return true;
        return false;
    }
    public int Reverse(int x) 
    {
        List<int> temp = new List<int>();
        int reverse=0;
        while(x/10!=0)
        {
            
            temp.Add(x%10);
            x=x/10;
        }
        temp.Add(x%10);
        int b=0;
        for(int k=0;k<temp.Count;k++)
        {
            b=System.Convert.ToInt32(Math.Pow(10,temp.Count-(k+1) ) );
            reverse+=temp[k]*b;
        }

        return reverse;
    }
}