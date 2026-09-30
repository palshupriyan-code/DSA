class Solution(object):
    def groupAnagrams(self, strs):
        seed={}
        for num in strs:
            key=tuple(sorted(num))
            if key not in seed:
                seed[key]=[]
            seed[key].append(num)
        return (list(seed.values()))