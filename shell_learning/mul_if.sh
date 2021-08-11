#########################################################################
# File Name: mul_if.sh
# Author: liujin
# mail: 1375264441@qq.com
# Created Time: Sun Nov  8 21:52:37 2020
#########################################################################
#!/bin/bash

score=$1

if [ $score -ge 90 ]; then
    echo "優秀"
elif [ $score -ge 70 ]; then
    echo "還行"
elif [ $score -ge 60 ]; then
    echo "及格"
else
    echo "回家種地"
fi