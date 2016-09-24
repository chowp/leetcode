#include <iostream>
using namespace std;
class Solution {
public:
    	void swap_element(char * a, char * b)
    	{
        	char t = *a;
       	 	*a=*b;
        	*b=t;
    	}
    
    	int partition(char a[] , int p, int r)
	{
		char privot = a[r];
		int i = p-1;
		for (int j=p; j <=r-1; j++)
		{
			if(int(a[j])<int(privot))
			{
				i ++;
				swap_element(&a[i],&a[j]);
			}
		}
		swap_element(&a[i+1],&a[r]);
		return i+1;
	}
	void quick_sort(char a[], int low, int high)
	{
		if (low < high)
		{
			int p = partition(a,low,high);
			quick_sort(a,p+1,high);
			quick_sort(a,low,p-1);
		}
	}
    	bool isAnagram(string s, string t) {
        	int ss = s.length();
		int tt = t.length();
		if ( ss != tt ){
			return false;
		}
		quick_sort( &s[0], 0, ss-1);
		quick_sort( &t[0], 0, tt-1);
		
		cout << s << endl;
		cout << t << endl;
		
		for (int i = 0 ; i < ss; i++)
			if(s[i] != t[i])
				return false;
		return true;
		
    	}
};

int main()
{
	Solution sol;
	string s ;
	string t ;
	getline(cin,s);
	getline(cin,t);
	bool ret = sol.isAnagram(s,t);	
	std::cout << ret << std::endl;
}
