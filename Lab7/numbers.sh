#***************************************
# EECS2031 - Lab07 *
# Author: Saeed, Hiba *
# EECS/Prism username: hiba77 *
# Yorku Student #: 219506864 *
# Email: hiba77@my.yorku.ca *
#***************************************/

#!/bin/bash

echo "Enter a number or 'quit':"
read number

#while quit is not enetered keep iterating through loop
while [ "$number" != "quit" ]
  do
    #if number is greater than 0 then displays its positive
    if [ $number -gt 0 ]; then
      echo "$number is a positive number."
    #if number is less than 0 then displays negative
    elif [ $number -lt 0 ]; then
      echo "$number is a negative number."
    #displays the number is 0
    else
      echo "$number is zero."
    fi

    #prompt user for next input
    echo "Enter a number or 'quit':"
    read number
done

echo "Bye bye"
