What this program does: Takes in schedules of users, then compares them to find matches and represents them graphically

How it’s structured: Users are stored as class objects in vector. Schedule stored as integer, bitwise comparison to match schedules for all and map comparison to build graphical representation. Not great as to build the map it takes O(time_slots*users) but I think that might actually be the best?

Main execution flow: I need to fix this, make persistent memory. Supposed to be a persistent program, can come back to it and check schedules, access specific users, and add/delete. Sort of like a main menu and start screen on first use

Key data structures: unordered map to store matches. integer representation for indivdual schedules. Going with text file custom formatting. This will give me the basics of working with files and reading information.

What’s incomplete / broken: presistent memory with external file, all matches works but not nice, 4,3,2 matches not even started. Maybe use the ands to create a vector or integers and find the indexes of 1st, 2nd and so on to find best matches

Next thing to work on: creating persistent memory, checking if users already exist, menu with options for which direction to take, ascii art. Right now, I need to integrate the file reader. First start with reading from a text file, and populating some class instances



adding this for now as I don't want to redo all of this. but I need to make it where it does not break when I put in the wrong values. but write, read, and delete all work right now. next is to fix that, then make sure I remember my file formatting as it was super useful, and then make it look nice and add 2nd 3rd most matches. and ability to pull up one users specific schedule and all users that are open at a specific time. keep time and space complexity in mind. I removed the map, but I might re add that as it was what I was going to use to find matches, and what users are at those times.
