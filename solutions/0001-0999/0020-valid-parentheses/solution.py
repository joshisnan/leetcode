"""
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
"""

class Solution:
    def isValid(self, s: str) -> bool:

        if len(s) % 2 != 0:
            return False

        left_chars = {"[": "]", "(": ")", "{": "}"}
        right_chars = {v: k for k, v in left_chars.items()}

        stack = []

        for char in s:
            if char in left_chars.keys():
                stack.append(char)
            if char in right_chars.keys():
                if len(stack) == 0:
                    return False
                if stack[-1] == right_chars[char]:
                    del stack[-1]
                else:
                    return False
        if len(stack) != 0:
            return False
        else:
            return True

s1 = "()" # true
s2 = "()[]{}" # true
s3 = "(]" # false
s4 = "([])" # true
s5 = "([)]" # false
s6 = "{{" # false
s7 = "){" # false

for item in [s1, s2, s3, s4, s5, s6, s7]:
    result = Solution().isValid(item)
    print(result)
