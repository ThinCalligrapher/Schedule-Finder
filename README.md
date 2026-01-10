What this program does: Takes in schedules of users, then compares them to find matches and represents them graphically

How it’s structured: Users are stored as class objects in vector. Schedule stored as integer, bitwise comparison to match schedules for all and map comparison to build graphical representation. Not great as to build the map it takes O(time_slots*users) but I think that might actually be the best?

Main execution flow: I need to fix this, make persistent memory. Supposed to be a persistent program, can come back to it and check schedules, access specific users, and add/delete. Sort of like a main menu and start screen on first use

Key data structures: unordered map to store matches. integer representation for indivdual schedules. Soon to be json representation or text file with custom formatting?

What’s incomplete / broken: presistent memory with external file, all matches works but not nice, 4,3,2 matches not even started. Maybe use the ands to create a vector or integers and find the indexes of 1st, 2nd and so on to find best matches

Next thing to work on: creating persistent memory, checking if users already exist, menu with options for which direction to take, ascii art
