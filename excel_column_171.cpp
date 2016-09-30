#include <iostream>
using namespace std;


class Solution {
public:
    int titleToNumber(string s) {
	int ret = 0;
        for (int i = 0; i < s.length(); i++){
		ret *= 26;
		ret += int(s[i]-'A') + 1;
	}
	return ret;
    }
};


int main()
{
	string s;
	Solution sol;
	cin >> s;
	cout << sol.titleToNumber(s) << endl;
}
