class Solution(object):
    def topKFrequent(self, nums, k):
                counts = collections.Counter(nums)
                seen={}
                l=[]
                for i, freq in counts.items():
                    if freq not in seen:
                        seen[freq]=[]
                    seen[freq].append(i)
                while len(l)<k:
                    maxS=max(seen.keys())
                    l.extend(seen[maxS])
                    seen.pop(maxS)
                return(l)