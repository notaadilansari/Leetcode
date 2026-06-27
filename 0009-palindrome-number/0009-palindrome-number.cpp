class Solution {
public:
    bool isPalindrome(int x) {
    int temp=x;
    long long palindrome=0;
    if (temp<0)
    {
        return false;
    }
    else{
        while (temp>0)
        {
            int m=temp%10;
            palindrome=palindrome*10+m;
            temp=temp/10;
        }
        if (palindrome==x)
        {
            return true;    
        }
        else{
            return false;
        }
    } 
    }
};