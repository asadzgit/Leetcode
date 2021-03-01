/*
********************Problem Description***********************
*Distribute Candies
*Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started *to gain weight, so she visited a doctor.
*The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes *her candies very much, and she wants to eat the maximum number of different types of *candies while still following the doctor's advice.

*Given the integer array candyType of length n, return the maximum number of different types of *candies she can eat if she only eats n / 2 of them.
*Example 1:

*Input: candyType = [1,1,2,2,3,3]
*Output: 3
*Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one *of each type.
*/
public class Solution {
    public int DistributeCandies(int[] candyType) {
        int size=candyType.Length;
        int types=Types(candyType,size);
        int rec=size/2;
        if(types>rec)
            return rec;
        else
            return types;
        
    }
    public int Types(int[] arr,int n) {
        int types=n;
        Array.Sort(arr);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1])
                types--;
        }
        return types;
        
    }
}