#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int count = 0;
		int ret = 0;
		for(int i = 0 ; i < nums.size(); i ++)
		{
			if (count == 0)
			{
				ret = nums[i];
				count ++;
			}
			else{
				if(ret == nums[i])	
					count ++;
				else
				{
					count --;
				}
			}
		}
		/*count = 0;
		for(int i = 0 ; i < nums.size(); i ++)
		{
			if(nums[i] == ret)
				count ++;
		}
		if (count > nums.size()/2)
			return ret;
		*/
		return ret;
	}
};


int main()
{
	vector<int> nums;
	int nn;
	cin >> nn;
	for (int i = 0 ;i < nn; i ++)
	{
		int tmp;
		cin >> 	tmp;
		nums.push_back(tmp);
	}

	Solution sol;
	cout << sol.majorityElement(nums) << endl;
	
	return 0;		
}
