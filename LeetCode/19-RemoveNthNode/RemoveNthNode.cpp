#include<stdio.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		if (head->next == nullptr)
			return nullptr;
		ListNode *Trailing = nullptr,*Conductor = head;
		int i = 1;

		while (i < n)
		{
			Trailing = Conductor;
			Conductor = Conductor->next;
			i++;
		}
		while (Conductor->next != nullptr)
		{
			Trailing = Trailing->next;
			Conductor = Conductor->next;
		}

		if (Trailing != nullptr)
		{
			Trailing->next = Conductor->next;
		}
		else
		{
			head = Conductor->next;
		}

		return head;
	}
};

int main()
{
	Solution *s = new Solution();
	ListNode *n1 = new ListNode(5, nullptr);
	ListNode *n2 = new ListNode(4, n1);
	ListNode *n3 = new ListNode(3, n2);
	ListNode *n4 = new ListNode(2, n3);
	ListNode *n5 = new ListNode(1,n4);
	s->removeNthFromEnd(n5, 2);
}