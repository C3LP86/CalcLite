#!/bin/bash

# Extract the base name of the file (without extension)
fileName="${1%%.*}"

# Correct the echo statement to use the variable properly
echo "Start of compilation of the ${fileName}.c file: "

# Compile the .c file
gcc "${fileName}.c" -o "$fileName"

echo ""

# Inform about the end of the compilation
echo "End of compilation!"