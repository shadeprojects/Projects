#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //Get height input from user
        n = get_int("Pick a number 1-8: ");
    }
    //Check if height is within range
    while (n > 8 || n < 1);


    //For each column
    for (int i = 1; i <= n; i++)
    {
        //For each space
        for (int k = n; k > i; k--)
        {
            // Print spaces
            printf(" ");
        }
        //For each row
        for (int j = 1; j <= i; j++)
        {
            //Print hashes
            printf("#");
        }
        //Move to next line
        printf("\n");
    }

}

//Get height input from user
//Check if height is within range
//Calculate amount of hashes and spaces
//print height as right-aligned hashes
