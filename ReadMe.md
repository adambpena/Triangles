# Triangles 
 
### Problem Description: 
A triangle is a geometric shape built from three line segments which form the sides of triangle. Not all lengths can be combined to form a triangle. For example, while we can build a triangle with lengths 3, 4 and 5, we cannot build a triangle with lengths 1, 3 and 5 (Why not?).

Your program is to get the name of a file from the command line. Open this file and read each line. Each line will contain three integers, separated by spaces.   

You are to print each legal triangle and skip the illegal ones. Let’s agree that a triangle with 0 area is still a legal triangle. 

### Notes: 
-	Document your code well, including a header.
-	You must pick up the filename from the command line. Do not ask the user for it! 
-	A sample triangle data file can be found on replit in triangle1.txt 
-	If your program is invoked with no filename, or without a valid filename (e.g. it won’t open), print an error and exit. See the example output below. 
-	If your program is invoked with multiple items on the command line, just assume the first is the filename and ignore the rest. 
- I've setup the run command to compile and execute triangles with triangle1.txt included in the command line.  When you submit your code, I will test it with another set of data, however.
- Be sure to test your code by running the program from the command line as shown below.  Not just by the run command.  
### Required Input: 
-	A file name on the command line 
-	That text file will contain lines, each with three integers. 
### Required Output: 
Your output should print each legal triangle. It should look something like the following three example runs.    
> ./triangles  
Usage: triangles filename  
> ./triangles nofile.txt  
File nofile.txt cannot be opened.  
> ./triangles triangle1.txt  
2405, 1581, 871  
350, 353, 334  
390, 404, 753  
723, 1167, 1360  
710, 419, 897  
286, 322, 176  
1510, 831, 1270 
174, 192, 219  
931, 1135, 1236  
456, 277, 320  


### Rubric

** See Canvas for specifics on the Rubric**

| Criteria |	Pts |
|----------| --- |
|  No filename given | 5 pts | 
| Bad filename given | 5 pts |
| Read file from the command line for data | 10 pts|
| Produced the correct triplets | 15 pts |
| Well Documented | 5 pts |
| | |
| Total | 40 pts |
