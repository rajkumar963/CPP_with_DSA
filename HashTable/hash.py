# class Entry:
#     def __init__(self, key, value):
#         self.key = key
#         self.value = value
#         self.hash=hash(key)

#     def __str__(self):
#         return str(self.key)

# class HT:
#     def __init__(self):
#         self.size = 0
#         self.capacity = 10
#         self.data=[ [] for i in range(self.capacity)]

#     def getsize(self):
#         return self.size

#     def insert(self,key, value):
#         entry=Entry(key, value)
#         index=entry.hash%self.capacity
        
#         isUpdated=False
#         for i in range(len(self.data[index])):
#             if self.data[index][i].key==key:
#                 self.data[index][i]=entry
#                 isUpdated=True
#                 break
#         if isUpdated==False:
#             self.data[index].append(entry)
#             self.size+=1

#     def search(key):
#         pass

#     def remove(self,key):
#         for i in range(len(self.data)):
#             for e in self.data[i]:
#                 if e.key==key:
#                     self.data[i].remove(e)
#                     self.size-=1
#                     break

#     def get(self,key):
#         index = hash(key) % self.capacity
    
#         for i in range(len(self.data[index])):
#             if self.data[index][i].key==key:
#                 return self.data[index][i].value    

#     def print(self):
#         for i in range(len(self.data)):
#             print("Bucket:"+ str(i)+":")
#             for e in self.data[i]:
#                 print(self.data[i])
#             print(sep='=>')
# ##########################################

# HashTable=HT()

# HashTable.insert("apple:2",102)
# HashTable.print()
