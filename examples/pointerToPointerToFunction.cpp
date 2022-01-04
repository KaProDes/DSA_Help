
// How to pass a pointer to a pointer to a  function...

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  void addAtEnd(ListNode **head, ListNode **tail, int data) {
    ListNode *temp = new ListNode(data);
    if (*head == nullptr) {
      *head = temp;
      *tail = temp;
    } else {
      (*tail)->next = temp;
      (*tail) = temp;
    }
  }

  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *l1 = list1;
    ListNode *l2 = list2;
    ListNode *Head = nullptr;
    ListNode *Tail = nullptr;
    while (l1 != nullptr && l2 != nullptr) {
      if (l1->val < l2->val) {
        addAtEnd(&Head, &Tail, l1->val);
        l1 = l1->next;
      } else {
        addAtEnd(&Head, &Tail, l2->val);
        l2 = l2->next;
      }
    }
    while (l1 != nullptr) {
      addAtEnd(&Head, &Tail, l1->val);
      l1 = l1->next;
    }
    while (l2 != nullptr) {
      addAtEnd(&Head, &Tail, l2->val);
      l2 = l2->next;
    }
    return Head;
  }
};