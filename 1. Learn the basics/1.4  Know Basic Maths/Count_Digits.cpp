/* 


Given a number N. Count the number of digits in N which evenly divides N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly
Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly

Your Task:
You don't need to read input or print anything. Your task is to complete the function evenlyDivides() which takes an integer N as input parameters and returns an integer, total number factor of digits N which divides N evenly.


Expected Time Complexity: O(log N)
Expected Space Complexity: O(1)
 

Constraints:
1<=N<=10^5


*/

/* #################################### CODE ######################################### */


class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int num = N;
        int count = 0;
        while(N!=0){
            int rem = N%10;
            if(rem !=0 && num%rem == 0){
                count++;
            }
            N /= 10;
        }
        return count;
    }
};