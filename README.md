Hi everyone, because being the big idiot I am- ACCIDENTALLY forgot to subscribe to RUSH00, I decided to try and help from the sidelines by sharing my resources and knowledge on IMO the core aspects of the code especially for those unsure how to approach the project, and would gladly welcome anyone else to add to this channel or improve my understanding!

So first off, you would likely have already read the pdf and determined your rush project number. You can see that you are essentially generating a pattern as an output made out of various characters. 

Outline of key aspects: 

From here, the 1st key hint is that if one notices is that the each character within the pattern is written in the form of two integers, x and y which determine the horizontal and vertical position of the characters in your code! (think of its as x and y coordinates)

e.g. for rush (5,3) there are 5 horizontal and 3 vertical characters.

The 2nd key hint is that if you notice the patterns for every project, you will see that each always follows one general pattern, where there is essentially a top row, a mid row, and a bottom row, where the top or bottom row will have characters that are either the same at each end of the pattern or different ones. The middle row will always have the same characters but will be printed between the coordinates of the top and bottom/leftmost or rightmost character. 


The 3rd key hint is that if you remember ASCII, you would know that the characters can basically be read by the PC (written in single quotes ''). From here, with reference to the first key, is that one can be able to hard-code specific characters within a fixed coordinate position relative to another! (easier said than done ofc)
