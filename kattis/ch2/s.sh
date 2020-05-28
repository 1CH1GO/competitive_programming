for((i = 1; ; ++i)); do
    echo $i
    ./gen > int
    # ./a < int > out1
    # ./brute < int > out2
    # diff -w out1 out2 || break
    diff -w <(./baloni < int) <(./brute < int) || break
done