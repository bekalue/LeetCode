"""A module containing the solution.
"""

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype bool
        """
        tags = []
        opening_tags = ['{', '[', '(']
        closing_tags = ['}', ']', ')']

        for char in s:
            if char in opening_tags:
                tags.append(char)
            if char in closing_tags:
                if not tags:
                    return False
                if opening_tags.index(tags.pop()) != closing_tags.index(char):
                    return False
        return not tags
