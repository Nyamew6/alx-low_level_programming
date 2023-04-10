#!/bin/bash

# Compile all .c files in current directory into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o

# Print success message
echo "Static library liball.a has been created successfully."
