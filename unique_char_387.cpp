#include <iostream>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};
	for(int i = 0; i < s.length(); i++)
	{
		if (s[i]-'a' < 0 || s[i]-'a' > 25)
			return -1;
		count[s[i]-'a'] ++;
	}
	for(int i = 0; i < s.length(); i++)
		if (count[s[i]-'a'] == 1 )
			return i;
	return -1;
    }
};


int main()
{
	string s;
	cin >> s;
	Solution sol;
	cout << sol.firstUniqChar(s) << endl;
}
