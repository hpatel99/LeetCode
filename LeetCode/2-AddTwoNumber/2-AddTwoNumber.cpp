#include <stdio.h>

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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int remainder = 0;
		ListNode* head = nullptr, *conductor= nullptr;

		while(l1!= nullptr || l2 != nullptr)
		{
			int v1 = 0, v2 = 0, answer;
			v1 = l1 != nullptr ? l1->val : v1;
			v2 = l2 != nullptr ? l2->val : v2;
			answer = v1 + v2 + remainder;
			remainder = answer / 10;
			answer = answer % 10;

			ListNode* newnode = new ListNode(answer , nullptr);
			if (head == nullptr)
			{
				head = newnode;
				conductor = head;
			}
			else
			{
				conductor->next = newnode;
				conductor = conductor->next;
			}
			l1 = l1 != nullptr? l1->next:l1;
			l2 = l2 != nullptr? l2->next: l2;
		}
		if (remainder != 0)
		{
			conductor->next = new ListNode(remainder, nullptr);
		}
		return head;
	}
};

int main()
{
	Solution *s = new Solution();

	ListNode *l11 = new ListNode(9, nullptr);
	ListNode *l12 = new ListNode(9, l11);
	ListNode *l13 = new ListNode(9, l12);
	ListNode *l14 = new ListNode(9, l13);
	ListNode *l15 = new ListNode(9, l14);
	ListNode *l16 = new ListNode(9, l15);
	ListNode *l17 = new ListNode(9, l16);

	ListNode *l21 = new ListNode(9, nullptr);
	ListNode *l22 = new ListNode(9, l21);
	ListNode *l23 = new ListNode(9, l22);
	ListNode *l24 = new ListNode(9, l23);
	s->addTwoNumbers(l17, l24);

}
