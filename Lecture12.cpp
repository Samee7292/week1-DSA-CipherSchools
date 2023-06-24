#include <bits/stdc++.h>
using namespace std;
// LinkedList
// 1. CRUD (Create, Read, Update, Delete) Singly LL, Doubly LL, Circular LL
// Create, Insert (Beg, End, Pos X), Delete (beg, end, index, element), Print or Traversal
// 2. Understand time complexity of these function
// 3. STL Implementation <forward_list> <list>
// 4 (*) Generics in C++
// 1. Merge two sorted LL
// 2. Reverse Linked List
// 3. Intersection of two LL
// 4.Find and remove loop from LL
// 5.REmove nth element from end

class ListNode
{
public:
int val;
ListNode *next;
ListNode(): val(e), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode "next): val(x), next(next) {}
};
ListNode merge TwoLists(ListNode *a, ListNode* b) {
if (a == NULL) {
return b;
} else if (b== NULL),
return a;
} else use { t
ListNode result = NULL;
// Both of them are not-null
if (a->val <- b->val) {
result = a;
result->next = mergeTwoLists (a->next, b);
} else {
result = b;
result->next=mergeTwoLists(a,b->next);
}
return reuslt;
}
}


ListNode "mergekSorted LL (vector<ListNode*> lists) {
if (lists.size() == 0) {
return NULL;
} else if (lists.size() == 1) {
return lists[0];
} else {
// more than one LL present
int last lists.size() 1;
while (last > 0)
int i = 0, j - last;
while (i <j)
lists[i] = merge TwoLists (lists[i], lists[j]);
i++; j--;
if (i >= j) |{
last=j;
}
}
}
return lists[0];

}
}
ListNode reverseLLIngroup(ListNode *  head, head, int k) {
if (head = NULL || head->next == NULL) {
return head;
}
ListNode prev= NULL, *curr= head, *next = NULL;
int k=0;
while (curr != NULL) {
next curr->next;
curr->next prev;
prev= curr;
curr = next;
}
head->next = reverseLLIgroup(next,k)
}

int main()
{
}