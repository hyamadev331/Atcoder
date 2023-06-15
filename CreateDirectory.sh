mkdir -p ABC$1
for var in A B C
do
    cp template.cpp ./ABC$1/$var.cpp
done
