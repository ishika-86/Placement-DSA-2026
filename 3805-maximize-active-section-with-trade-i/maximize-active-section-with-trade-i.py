class Solution:
    def maxActiveSectionsAfterTrade(self, s: str) -> int:
        return s.count('1')+max(map(sum,pairwise(
            sum(1 for _ in g) for c,g in groupby(s) if c=='0')),default=0)