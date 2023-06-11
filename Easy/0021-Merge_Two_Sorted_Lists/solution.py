# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
    """
    :type list1: Optional[ListNode]
    :type list2: Optional[ListNode]
    :rtype: Optional[ListNode]
    """
    merged_node = ListNode()
    curr = merged_node

    # Iterate over both lists and compare them append the smaller value to merged list first
    while list1 and list2:
        if list1.val <= list2.val:
            curr.next = list1
            list1 = list1.next
        else:
            curr.next = list2
            list2 = list2.next
            curr = curr.next

    # Append the remaining nodes from non-empty list
    if list1:
        curr.next = list1
    else:
        curr.next = list2

        merged_node = merged_node.next

    # Return the head of the merged list
    return merged_node
