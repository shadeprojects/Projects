#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 0;
    long card_number = get_long("Enter credit card number: ");
    long card_counter = card_number;
    while(card_counter > 0)
    {
        card_counter = card_counter / 10;
        count = count + 1;
    }
    if (count == 16)
    {
        int last_number = card_number % 10;
        int second_to_last_number =  ((card_number / 10) % 10);
        int third_to_last_number = ((card_number / 10)/ 10) % 10;
        int fourth_to_last_number = ((((card_number / 10)/ 10)/ 10) % 10);
        int fifth_to_last_number = ((((card_number / 10)/ 10)/ 10)/ 10) % 10;
        int sixth_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int seventh_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int eighth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int ninth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int tenth_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int eleventh_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int twelfth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int thirteenth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int fourteenth_to_last_number = ((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int fifteenth_to_last_number = ((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int sixteenth_to_last_number = ((((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        if ((fifteenth_to_last_number == 1 || fifteenth_to_last_number == 2 || fifteenth_to_last_number == 3 || fifteenth_to_last_number == 4 || fifteenth_to_last_number == 5) && sixteenth_to_last_number == 5)
        {
            printf("Your card is a Mastercard number. The last number is %i. The second to last number is %i. Fourth to last is %i. Sixth to last is %i. Eighth to last is %i. Tenth to last is %i. Twelfth to last is %i. Fourteenth to last is %i. Sixteenth to last is %i.\n", last_number, second_to_last_number, fourth_to_last_number, sixth_to_last_number, eighth_to_last_number, tenth_to_last_number, twelfth_to_last_number, fourteenth_to_last_number, sixteenth_to_last_number);
        }
        if (sixteenth_to_last_number == 4)
        {
            printf("Your card is a Visa card.\n");
        }
    }
    if (count == 15)
    {
        int last_number = card_number % 10;
        int second_to_last_number =  ((card_number / 10) % 10);
        int third_to_last_number = ((card_number / 10)/ 10) % 10;
        int fourth_to_last_number = ((((card_number / 10)/ 10)/ 10) % 10);
        int fifth_to_last_number = ((((card_number / 10)/ 10)/ 10)/ 10) % 10;
        int sixth_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int seventh_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int eighth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int ninth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int tenth_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int eleventh_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int twelfth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int thirteenth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int fourteenth_to_last_number = ((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int fifteenth_to_last_number = ((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        if ((fourteenth_to_last_number == 4 || fourteenth_to_last_number == 7) && fifteenth_to_last_number == 3)
        {
            printf("Your card is an American Express card.\n");
        }

    }
    if (count == 13)
    {
        int last_number = card_number % 10;
        int second_to_last_number =  ((card_number / 10) % 10);
        int third_to_last_number = ((card_number / 10)/ 10) % 10;
        int fourth_to_last_number = ((((card_number / 10)/ 10)/ 10) % 10);
        int fifth_to_last_number = ((((card_number / 10)/ 10)/ 10)/ 10) % 10;
        int sixth_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int seventh_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int eighth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int ninth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int tenth_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int eleventh_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        int twelfth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10);
        int thirteenth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        if (thirteenth_to_last_number == 4)
        {
            printf("Your card is a Visa card.\n");
        }
    }
    else
    {
        printf("Invalid card number.\n");
    }



        //int last_number = card_number % 10;
        //int second_to_last_number =  (card_number / 10) % 10;
        //int third_to_last_number = ((card_number / 10)/ 10) % 10;
        //int fourth_to_last_number = (((card_number / 10)/ 10)/ 10) % 10;
        //int fifth_to_last_number = ((((card_number / 10)/ 10)/ 10)/ 10) % 10;
        //int sixth_to_last_number = (((((card_number / 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int seventh_to_last_number = ((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int eighth_to_last_number = (((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int ninth_to_last_number = ((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int tenth_to_last_number = (((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int eleventh_to_last_number = ((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int twelfth_to_last_number = (((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int thirteenth_to_last_number = ((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int fourteenth_to_last_number = (((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int fifteenth_to_last_number = ((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int sixteenth_to_last_number = (((((((((((((((card_number / 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10)/ 10) % 10;
        //int checksum_multiplication =










    //printf("Your credit card number is: %li, the last number is %i, the second to last number is %i, the third to last number is %i\n", card_number, last_number, second_to_last_number, third_to_last_number);
}
