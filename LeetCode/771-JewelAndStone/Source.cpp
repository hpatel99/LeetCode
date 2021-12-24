#include<string>
#include<unordered_set>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string jewels, string stones) {

		unordered_set<char> JewelSet;
		int answer = 0;

		for (int i = 0; i < jewels.size(); i++)
		{
			JewelSet.emplace(jewels[i]);
		}

		for (int i = 0; i < stones.size(); i++)
		{
			if (JewelSet.find(stones[i]) != JewelSet.end())
			{
				++answer;
			}

		}

		return answer;
	}
};

int main()
{
	Solution *s = new Solution();
	s->numJewelsInStones("aA", "aAAbBB");

}