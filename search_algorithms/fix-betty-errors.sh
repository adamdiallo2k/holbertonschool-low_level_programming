#!/bin/bash

# Check style
echo "Checking style..."
betty-style *.c

# Check documentation
echo "Checking documentation..."
betty-doc *.c

# Correct style errors
echo "Correcting style errors..."
for file in *.c; do
  betty-style "$file" --fix
done

# Correct documentation errors
echo "Correcting documentation errors..."
for file in *.c; do
  betty-doc "$file" --fix
done

