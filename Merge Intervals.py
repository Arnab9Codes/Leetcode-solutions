# https://leetcode.com/problems/merge-intervals/

# Complexity: O(NlogN)+O(N)*O(1)

class Solutions:
    def Merge_intervals(self,l):
        if not l:
            return l
        #sorting according to lowest starting values
        l=sorted(l, key=lambda x:x[0])
        temp=l[0]
        ll=[]
        for i in range(1,len(l),1):
            #checking non overlapping at first
            if((temp[0]<l[i][0] and temp[1]<l[i][0]) or(temp[0]>l[i][1] and temp[1]>l[i][1]) ):

                if(temp[0]<l[i][0] and temp[1]<l[i][0]):
                    ll.append(temp)
                    temp=l[i]
                else:
                    ll.append(l[i])

            #if two lists are overlapping find the lowest and highest
            else:
                slice=sorted([temp[0],temp[1],l[i][0],l[i][1]])
                temp=[slice[0],slice[3]]

        ll.append(temp)

        return ll

def main():
    l=[[1,3],[2,6],[8,10],[15,18]]
    s=Solutions()
    m=s.Merge_intervals(l)
    print(m)
    print(s.Merge_intervals([[1,4],[4,5]]))
    print(s.Merge_intervals([[1,4],[0,4]]))
    print(s.Merge_intervals([[1,4],[0,2]]))
    print(s.Merge_intervals([[2,3],[4,5],[6,7],[8,9],[1,10]]))

if __name__=="__main__":
    main()

