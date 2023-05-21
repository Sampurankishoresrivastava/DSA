class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length();
    string palindrome = s;

    // Check if the string is already a palindrome
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        return palindrome;  // No operations needed
    }

    // Find the lexicographically smallest palindrome
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            char smallerChar = min(s[i], s[n - i - 1]);
            palindrome[i] = smallerChar;
            palindrome[n - i - 1] = smallerChar;
        }
    }

    return palindrome;
    }
};
