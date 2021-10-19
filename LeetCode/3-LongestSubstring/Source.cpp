#include <string>
#include<unordered_set>
#include <stdio.h>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
		if (s.size() == 0)
			return 0;

		int front = 0, trailing = 0, max = 0;
		unordered_set<char> *dict = new unordered_set<char>();


		while(front < s.length())
		{
			if (dict->find(s[front]) == dict->end()) // check if value is in the dictonary
			{
				dict->emplace(s[front]); // insert in dictonary
				max = dict->size() > max ? static_cast<int>(dict->size()) : max; //assign the highest

			}
			else
			{
				//value is present in the dictonary remove till trailing is == front
				while (s[trailing] != s[front])
				{
					dict->erase(s[trailing]);
					++trailing;
				}
				++trailing;
			}
			++front; // increase front
		}
		return max;
	}
};

int main()
{
	Solution s;
	s.lengthOfLongestSubstring(" ");
}