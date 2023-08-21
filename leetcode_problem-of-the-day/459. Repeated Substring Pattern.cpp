class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        const int n = s.size();
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				string pat;
				for (int j = 0; j < n / i; j++)
					pat += s.substr(0, i);
				if (s == pat) return true;
			}
		}
		return false;
    }
};
