#include <string>
#include<unordered_set>
#include <stdio.h>

using namespace std;

class Solution {
public:
	int GetCurrentSize(string s)
	{
		unordered_set<int> Dict;
		int count = 0;

		for (size_t i = 0; i < s.length(); ++i)
		{
			if (Dict.find(static_cast<int>(s[i])) == Dict.end())
			{
				Dict.emplace(static_cast<int>(s[i]));
				++count;
			}
			else
			{
				return -1;
			}
		}
		return count;
	}

	int lengthOfLongestSubstring(string s) 
	{
		int answer = 0;

		for (size_t i = 0; i < s.length(); ++i)
		{
			for (size_t j = 1; j <= s.length(); ++j)
			{
				int currentsize = GetCurrentSize( s.substr(i, j));
				if(currentsize == -1)
				{
					break;
				}
				answer = currentsize > answer ? currentsize : answer;
			}
		}

		return answer;

	}
};

int main()
{
	Solution s;
	s.lengthOfLongestSubstring(" ");
}