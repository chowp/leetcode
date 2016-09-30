#include <iostream>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
       	int sum_s = 0 ; 
	int sum_t = 0 ;
	int i = 0;
	for(i = 0 ; i < s.length(); i ++)
		sum_s += int(s[i]);
       for(i = 0 ; i < t.length(); i ++)
		sum_t += int(t[i]);
	return char(sum_t-sum_s);
 
    }
};


int main()
{
	string s;
	string t;
	cin >> s;
	cin >> t;
	Solution sol;
	cout << sol.findTheDifference(s,t) << endl;
}
