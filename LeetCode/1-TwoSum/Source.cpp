#include <vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int,int> available;

		for ( unsigned int i = 0; i < nums.size();i++)
		{
			int req = target - nums[i];
			auto  got = available.find(req);

			if (got != available.end())
			{
				return vector<int>{ available[req],i };
			}
			else
	
			{
				available.emplace(nums[i], i);
			}
		}
		return vector<int>();
	}
};

int main()
{
	vector<int> input;
	input.push_back(2);
	input.push_back(7);
	input.push_back(11);
	input.push_back(15);

	Solution *s = new Solution();

	s->twoSum(input, 9);
}