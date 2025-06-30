class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pref = strs[0]
        pref_len = len(pref)
        for a in strs[1:]:
            while pref != a[0:pref_len]:
                pref_len -=1
                if pref_len == 0:
                    pref = ""

                pref = pref[0:pref_len]

        return pref
        