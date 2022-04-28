# https://leetcode.com/problems/design-hashmap/

class MyHashMap:
    def __init__(self, bucketSize=1):
        self.bucketSize=bucketSize
        self.buckets=[[] for i in range(self.bucketSize)]

    def getHash(self, key):
        return key%self.bucketSize

    def put(self, key,value):
        index=self.getHash(key)
        # searching the key in specific bucket
        key_available=False
        # searching through the chain for the key
        #print("inside put function", len(self.buckets[index]))
        for i in range(0,len(self.buckets[index]),1):
            #print(self.buckets[index][i][0])
            if key==self.buckets[index][i][0]:
                self.buckets[index][i][1]=value
                key_available=True
                break
        # if key not found in the chain, then add the (key,value) in chain
        if key_available==False:
            self.buckets[index].append([key,value])
     
    def get(self, key):
        index=self.getHash(key)
        # searching through the chain for the key
        for i in range(0, len(self.buckets[index]), 1):
            if key == self.buckets[index][i][0]:
                # returning the value
                return self.buckets[index][i][1]

        # returning -1 if nothing is found
        return -1

    def remove(self, key):
        # assumption is that key must be in the hashmap
        index = self.getHash(key)
        # searching through the chain for the key
        key_avalilable=self.get(key)
        if key_avalilable!=-1:
            for i in range(0, len(self.buckets[index]), 1):
                if key == self.buckets[index][i][0]:
                    # remove that (key,value)
         
                    assert self.buckets[index].pop(i)
                    break
        else:
            None
            
    # just printing to check
    def printHashMap(self):
        print(self.buckets)

def main():
    myHashMap=MyHashMap()

    calls=["remove","put","remove","remove","get","remove","put","get","remove","put","put","put","put","put","put","put","put","put","put","put","remove","put","put","get","put","get","put","put","get","put","remove","remove","put","put","get","remove","put","put","put","get","put","put","remove","put","remove","remove","remove","put","remove","get","put","put","put","put","remove","put","get","put","put","get","put","remove","get","get","remove","put","put","put","put","put","put","get","get","remove","put","put","put","put","get","remove","put","put","put","put","put","put","put","put","put","put","remove","remove","get","remove","put","put","remove","get","put","put"]
    parameters=[[27],[65,65],[19],[0],[18],[3],[42,0],[19],[42],[17,90],[31,76],[48,71],[5,50],[7,68],[73,74],[85,18],[74,95],[84,82],[59,29],[71,71],[42],[51,40],[33,76],[17],[89,95],[95],[30,31],[37,99],[51],[95,35],[65],[81],[61,46],[50,33],[59],[5],[75,89],[80,17],[35,94],[80],[19,68],[13,17],[70],[28,35],[99],[37],[13],[90,83],[41],[50],[29,98],[54,72],[6,8],[51,88],[13],[8,22],[85],[31,22],[60,9],[96],[6,35],[54],[15],[28],[51],[80,69],[58,92],[13,12],[91,56],[83,52],[8,48],[62],[54],[25],[36,4],[67,68],[83,36],[47,58],[82],[36],[30,85],[33,87],[42,18],[68,83],[50,53],[32,78],[48,90],[97,95],[13,8],[15,7],[5],[42],[20],[65],[57,9],[2,41],[6],[33],[16,44],[95,30]]
    
    #print(len(calls), len(parameters))
    #print(calls[30], parameters[30][0])
    for i in range(0,len(calls),1):
        if calls[i]=="put":
            getattr(myHashMap,calls[i])(parameters[i][0], parameters[i][1])
            #print(i," ")
            myHashMap.printHashMap()
        else:
            #print(i)
            getattr(myHashMap, calls[i])(parameters[i][0])

    '''myHashMap.remove(2)
    myHashMap.printHashMap()
    myHashMap.put(65, 65)
    myHashMap.printHashMap()
    myHashMap.remove(19)
    myHashMap.printHashMap()
    myHashMap.put(2, 2)
    myHashMap.printHashMap()
    print(myHashMap.get(1))
    myHashMap.printHashMap()
    print(myHashMap.get(3))
    myHashMap.printHashMap()
    myHashMap.put(2, 1)
    myHashMap.printHashMap()
    print(myHashMap.get(2))
    myHashMap.printHashMap()
    myHashMap.remove(2)
    myHashMap.printHashMap()
    print(myHashMap.get(2))
    myHashMap.printHashMap()
    myHashMap.remove(65)
    myHashMap.printHashMap()
    myHashMap.remove(65)
    myHashMap.printHashMap()'''

if __name__=="__main__":
    main()
