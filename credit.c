#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card_number = get_long("Enter credit card number: ");
    int last_number = card_number % 10;
    int second_to_last_number =  (card_number / 10) % 10;
    int third_to_last_number = (card_number / 10) % 10;
    printf("Your credit card number is: %li, the last number is %i, the second to last number is %i, the third to last number is %i\n", card_number, last_number, second_to_last_number, third_to_last_number);
}