 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
 //declare variables
 int height;
 int space;
 int rows;
 int column;
 //Ask input from the user/the input has to be from 1 to 8
 do
 {
     height = get_int("Height: ");
 }
 while (1 > height || height > 8);
 printf("Stored: %i\n", height);

 //print out the "#"
 for (rows = 0; rows < height ; rows++)
 {
     for (space = 0; space < height - rows - 1; space++)
     {
            printf(" ");
     }
     for (column = 0; column <= rows; column++)
     {
             printf("#");
     }
    printf("\n");
 }

 }

