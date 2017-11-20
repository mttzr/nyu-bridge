#!/bin/bash
for i in ./*.cpp
do
   g++ -Wno-deprecated $i -o `basename $i .cpp`".a"
done

for i in ./*q1.a
do
  ./$i < tests/q1_1.txt
  echo
  ./$i < tests/q1_2.txt
  echo
  ./$i < tests/q1_3.txt
  echo
  ./$i < tests/q1_4.txt
  echo
done

for i in ./*q2.a
do
  ./$i < tests/q2_1.txt
  echo
  ./$i < tests/q2_2.txt
  echo
  ./$i < tests/q2_3.txt
  echo
  ./$i < tests/q2_4.txt
  echo
done

for i in ./*q3.a
do
  ./$i < tests/q3_1.txt
  echo
  ./$i < tests/q3_2.txt
  echo
  ./$i < tests/q3_3.txt
  echo
  ./$i < tests/q3_4.txt
  echo
done

for i in ./*q4.a
do
  ./$i < tests/q4_1.txt
  echo
  ./$i < tests/q4_2.txt
  echo
  ./$i < tests/q4_3.txt
  echo
  ./$i < tests/q4_4.txt
  echo
done

for i in ./*q5.a
do
  ./$i < tests/q5_1.txt
  echo
  ./$i < tests/q5_2.txt
  echo
  ./$i < tests/q5_3.txt
  echo
  ./$i < tests/q5_4.txt
  echo
done

for i in ./*q6.a
do
  ./$i < tests/q6_1.txt
  echo
  ./$i < tests/q6_2.txt
  echo
  ./$i < tests/q6_3.txt
  echo
  ./$i < tests/q6_4.txt
  echo
done

for i in ./*q7.a
do
  ./$i < tests/q7_1.txt
  echo
  ./$i < tests/q7_2.txt
  echo
  ./$i < tests/q7_3.txt
  echo
  ./$i < tests/q7_4.txt
  echo
done
