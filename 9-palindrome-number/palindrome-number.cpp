class Solution {
public:
    //test
    bool isPalindrome(int x) {
      if (x < 0)
       return false ;
      long int rev = 0;
      int n = x;
      while (n > 0) 
      {
        rev = rev * 10 ;
        rev = (n % 10) + rev ;
        n = n / 10 ;
      }
      if (rev == x) 
       return true ;
      else
       return false ;
    }
};
