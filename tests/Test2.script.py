#!/usr/bin/python

print "running Test 2 script"
file1 = open("Test2.out.txt", "r")
file2 = open("Log.Test2.out.txt", "r")

list1 = file1.readlines()
list2 = file2.readlines()

lenList1 = len(list1)
lenList2 = len(list2)

if(lenList1 != lenList2):
    print "Test 2 ERROR"
else:
    for i in range(0, lenList1 ):
        if(list1[i]!=list2[i]):
            if(i==1):
                words1 = list2[i].split()
                words2 = list1[i].split()
                lenWords1 = len(words1)
                lenWords2 = len(words2)
                if(lenWords1 != lenWords2):
                    print "Test 2 ERROR"
                else: 
                    for j in range(0, lenWords2):
                        if(words1[j]!=words2[j]):
                            if(j!=5):
                                print "Test 2 ERROR"
            else:
                print "Test 2 ERROR"
                               




file1.close()
file2.close()
