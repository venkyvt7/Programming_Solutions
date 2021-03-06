/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:
Input: 121
Output: true

Example 2:
Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Follow up:
Could you solve it without converting the integer to a string?
*/
class Solution {
public:
    bool isPalindrome(int y) {
        bool sign=false;
        int x=y;
        if(x<0){sign=true;return 0;}
        long long int ans=0;
        while(x!=0){
            int rem=x%10;
            x=x/10;
            ans=ans*10+rem;
            if(ans>INT_MAX)return 0;
            
        }
        return (ans==y);
        
    }
};