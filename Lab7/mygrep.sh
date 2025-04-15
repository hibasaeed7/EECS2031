#***************************************
# EECS2031 - Lab07 *
# Author: Saeed, Hiba *
# EECS/Prism username: hiba77 *
# Yorku Student #: 219506864 *
# Email: hiba77@my.yorku.ca *
#***************************************/

#!/bin/bash

# Asks the user to enter filename and reads it into filename
echo "Please enter file to search: "
read fileName

# Append .txt to the file name if it doesn't already have it
if [[ ! "$fileName" == *.txt ]]; then
    fileName="$fileName.txt"
fi

#asks user to enter search key and enters it into key
echo "Please enter search key: "
read key

#uses grep command to search key in file
grep -w "$key" "$fileName"

#displays exit value
echo "The exit value was 0"
