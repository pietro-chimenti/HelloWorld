#!/bin/bash

echo "Running tests ..."

echo "Running Test 1"
../HelloWorld_gcc/HelloWorld > Log.Test1.out.txt
if [ -z `diff Test1.out.txt Log.Test1.out.txt`  ]
then
echo "Test 1: ok  "
rm Log.Test1.out.txt
else
echo "Test 1: ERROR "
exit
fi

echo "Running Test 2"
../HelloWorld_root/HelloRootWorld > Log.Test2.out.txt
./Test2.script.py > Log.Test2.script.txt
if [ -z `diff Test2.script.txt  Log.Test2.script.txt` ]
then
echo "Test 2: ok  "
rm Log.Test2.out.txt
rm Log.Test2.script.txt
else
echo "Test 2: ERROR "
exit
fi

echo "Running Test 3"
../OOProgramming/Ch02/chapter.2.2 > Log.Test3.out.txt
if [ -z `diff Test3.out.txt Log.Test3.out.txt`  ]
then
echo "Test 3: ok  "
rm Log.Test3.out.txt
else
echo "Test 3: ERROR "
exit
fi

echo "Running Test 4"
../OOProgramming/Ch02/chapter.2.2-minimal > Log.Test4.out.txt
if [ -z `diff Test4.out.txt Log.Test4.out.txt`  ]
then
echo "Test 4: ok  "
rm Log.Test4.out.txt
else
echo "Test 4: ERROR "
exit
fi

echo "Running Test 5"
../OOProgramming/Ch02/chapter.2.3 > Log.Test5.out.txt
if [ -z `diff Test5.out.txt Log.Test5.out.txt`  ]
then
echo "Test 5: ok  "
rm Log.Test5.out.txt
else
echo "Test 5: ERROR "
exit
fi

echo "Running Test 6 "
echo -e "\n" | ./../OOProgramming/Ch02/chapter.2.6 > Log.Test6.out.txt
if [ -z `diff Test6.out.txt Log.Test6.out.txt`  ]
then
echo "Test 6: ok  "
rm Log.Test6.out.txt
else
echo "Test 6: ERROR "
exit
fi

echo " done testing "

