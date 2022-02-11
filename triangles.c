// Program: Triangles 
// Description: Reads lines of numbers from another file and determines if they are valid triangles. 
//              Prints the trios if they are valid. Handles incorrect files passed thrugh to command line.
// Name: Adam Pena
// Date: 9/27/2021

#include <stdio.h>

// Note:  You will need to modify main to accept command line arguments.

int bufSize = 1024;  // int to define size of string that reads from file
int side1;           // int to read one "side" from a potential triangle
int side2;           // int to read another "side" from a potential triangle
int side3;           // int to read last "side" from a potential triangle

int main(int argc, char *argv[]) {           // Main method defined to accept command line args
  FILE *triangleFile = fopen(argv[1], "r");  // Creating File pointer called triangle pointer. fopen invoked with read mode on first command line arg (besides exe file: triangles)

  if(argv[1] == NULL){   // If arv[1] has been passed nothing, inform the user and end the program
    printf("No file passed into command line for traingle.c to read.\n");
    return 0;
  }

  if(!triangleFile){     // If argv[1] was passed a file that doesnt exist, inform the user and end the program
    printf("No file by that name was found.\n");
    return 0;
  }

  char buffer[bufSize];        // Creates a string called buffer to read data from trianglefile into

  do{                          // A loop that reads sequential lines of the triangle file
    if(feof(triangleFile)){    // If the end of the file has been reached, break the loop
      break;
    }
    
    fscanf(triangleFile, "%d,%d,%d", &side1, &side2, &side3);  // Scan the three ints in a line of the file into the side variables
    
    // Check if valid triangle by comparing sum of two side lengths w/ another side length
    // If sum of two sides is greater than remaining side length, it is a valid triangle and is returned
    if((side1 + side2) > side3 && (side1 + side3 ) >side2 && (side2 + side3) > side1){
      printf("%d, %d, %d\n", side1, side2, side3);
    }
  }while(fgets(buffer, bufSize, triangleFile)); // Continue while there are lines to scan

  return 0; // End program
}