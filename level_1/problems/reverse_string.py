from typing import List


class Solution:
    def reverseString(self, s: List[str]) -> None:
        stack = []

        for n in s:
            stack.append(n)

        for i in range(len(s)):
            s[i] = stack.pop()

        print(f"stack values: {stack}")
        print(f"vector values: {s}")


s = ["h", "e", "l", "l", "o"]
sol = Solution()
print(sol.reverseString(s))
