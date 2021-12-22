#include <vector>

using namespace std;

class Solution {
public:
	vector<int> getConcatenation(vector<int>& nums) {
		
		int size = nums.size();
		vector<int> answer(size*2,0);
		answer.reserve(size * 2);

		for (int i = 0; i < size; i++)
		{
			answer[i] = nums[i];
			answer[i + size] = nums[i];
		}

		return answer;
	}
};

int main()
{
	Solution *s = new Solution();
	vector<int> v { 1, 2, 1 };
	s->getConcatenation( v);
}