#########################################################################
# File Name: mul_if.sh
# Author: liujin
# mail: 1375264441@qq.com
# Created Time: Sun Nov  8 21:52:37 2020
#########################################################################
#!/bin/bash

start=1
end=10
sum=0
while [ $start -le $end ]
do
    sum=$(($start+$sum))
    start=$(($start+1))
done

echo $sum