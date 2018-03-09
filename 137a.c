def anagrams(self, strp):
        ret=set()
        for i in range(0,len(strp)):
            for j in range(i+1,len(strp)):
                if i in ret and j in ret:
                    continue
                if Solution.isanagram(strs[i],strp[j]):
                    ret.add(i)
                    ret.add(j)
        return [strp[i] for i in list(ret)]
    def isanagram(s, t):
        if len(s)!=len(t):
            return False
        chars={}
        for i in s:
            if i in chars:
                chars[i]+=1
            else:
                chars[i]=1
        for i in t:
            if i not in chars:
                return False
            else:
                chars[i]-=1
                if chars[i]<0:
                    return False
        for i in chars:
            if chars[i]!=0:
                return False
        return True
