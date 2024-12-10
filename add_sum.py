from typing import Optional, List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        print(l1, l2)
        node = ListNode()
        current = dummy
        carry = 0


solution = Solution()
l1 = [2,4,3]
l2 = [5,6,4]

solution.addTwoNumbers(l1, l2)
