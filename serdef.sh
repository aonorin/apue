if [ $# -ne 1 ];then
    echo "Usage $0 function_name"
    exit -1
fi
grep "$1" * -rn|grep "\.c"|grep -v "\.mk" |grep -v "\<if\>"|grep -v ";"
