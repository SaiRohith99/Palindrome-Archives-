Palindromic divisors of a number


/*
Given a number N. The task is to find all the palindromic divisors of N.


Find all the divisors of N using approach discussed in this article.
For each divisors D, check whether D is palindromic or not.
Repeat the above step for all the divisors.

*/



#include "bits/stdc++.h" 
using namespace std; 

bool isPalindrome(int n) 
{ 
    // Convert n to string str 
    string str = to_string(n); 
 
    int s = 0, e = str.length() - 1; 
    while (s < e) {
        if (str[s] != str[e]) { 
            return false; 
        } 
        s++; 
        e--; 
    } 
    return true; 
} 
  

void palindromicDivisors(int n) 
{ 
    vector<int> PalindromDivisors; 
  
    for (int i = 1; i <= sqrt(n); i++) { 

        if (n % i == 0) { 
              if (n / i == i) { 

                if (isPalindrome(i)) { 
                    PalindromDivisors.push_back(i); 
                } 
            } 
            else {   
               if (isPalindrome(i)) { 
                    PalindromDivisors.push_back(i); 
                }
                if (isPalindrome(n / i)) { 
                    PalindromDivisors.push_back(n / i); 
                } 
            } 
        } 
    }
    sort(PalindromDivisors.begin(), 
         PalindromDivisors.end()); 
  
    for (int i = 0; i < PalindromDivisors.size(); 
         i++) { 
        cout << PalindromDivisors[i] << " "; 
    } 
} 
  
// Driver code 
int main() 
{ 
    int n = 66; 
     palindromicDivisors(n); 
} 
