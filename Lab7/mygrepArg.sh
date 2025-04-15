#***************************************
# EECS2031 - Lab07 *
# Author: Saeed, Hiba *
# EECS/Prism username: hiba77 *
# Yorku Student #: 219506864 *
# Email: hiba77@my.yorku.ca *
#***************************************/

#!/bin/bash

# will check if the number of arguments are less than 2, if they are will display error message
if [[ $# -lt 2 ]]; then
    echo "Error! Usage: ./mygrepArg.sh filename pattern"
else
  # Check if the first argument is a valid file, and if it doesn't end with .txt, append it
    if [[ ! "$1" == *.txt ]]; then
        # If the first argument doesn't end with .txt, append it
        fileName="$1.txt"
    else
        fileName="$1"
    fi

    if [[ -f "$fileName" ]]; then
        # If the file exists, display the number of arguments and the arguments themselves
        echo "There are $# command line arguments: $*"
        # Now perform the grep search for the pattern ($2) in the file ($fileName)
        grep "$2" "$fileName"
    else
        # If the file doesn't exist, show an error message
        echo "Error! \"$1\" is not an existing file in the current directory"
    fi
fi
