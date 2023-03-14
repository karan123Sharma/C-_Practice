#!/bin/bash

echo "Enter Two Numbers"
read num1 num2

echo "Addition"
result=$(expr $num1 + $num2)
echo $result

echo "Subtraction"
result=$(expr $num1 - $num2)
echo $result

echo "Divison"
result=$(expr $num1 / $num2)
echo $result