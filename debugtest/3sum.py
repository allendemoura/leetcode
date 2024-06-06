def minWindow(s: str, t: str) -> str:

    if not all([x in s for x in t]): return ""
    if len(s) < len(t): return ""

    minSub = s

    target = t

    l = 0
    r = 0



    while l < len(s) and r < len(s):

        while r < len(s) and s[r] not in target:
            r += 1
        if r < len(s):
            target = target.replace(s[r], "", 1)
        if target == "":
            if r - l < len(minSub):
                minSub = s[l:r + 1]
            target = t
            l += 1
            while l < len(s) and s[l] not in target:
                l += 1
            r = l
        r += 1
    return minSub

print(minWindow("ab", "a"))