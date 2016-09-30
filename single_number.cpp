#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
	int all = 0;
	for (vector<int>::iterator it = nums.begin(); it != nums.end(); it ++)
	{
		all = all ^ (*it);
	}	
	return all; 
    }
};

int main()
{
	static const int arr[] = {1,1,2,2,3};
	vector<int> a(arr,arr+sizeof(arr)/sizeof(arr[0]));
	Solution sol;
	cout << sol.singleNumber(a) << endl;		
}
