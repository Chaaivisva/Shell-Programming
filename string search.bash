STR='Linux is an operating system' 

SUB='Linux' 

if [[ "$STR" == *"$SUB"* ]]; then 

  echo "Match is found." 

else  

  echo "Match not found." 

fi 
