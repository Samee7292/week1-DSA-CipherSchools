#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
int val;
ListNode *next;
ListNode(): val(e), next(nullptr) {}
ListNode(int x): val(x), next(nullptr) {}
ListNode(int x, ListNode *next): val(x), next(next) {}
};
ListNode addTwoNumbers (ListNode* a, ListNode * b) {
if (a == NULL) {
return b;
} else if (b== NULL),
return a;
} else use 1 {
// both a and b are not NULL;
"
ListNode dummy (0);
ListNode p = a, *q = b, c = &dummy;
int sum 9, carry = 0;
while (p = NULL ||q != NULL) {
sum = (p == NULL? : p->val) + q == NULL? 8: q->val)] + carry;
carry = sum/10;
sum=sum%10;
r=r->next;
if(carry >0){
r->n = new ListNode(carry);
}
}

return dummy.next;
}
int main()
{
}