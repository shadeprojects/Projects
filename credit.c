#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 0;
    long card_number = get_long("Enter credit card number: ");
    long card_counter = card_number;
    while (card_counter > 0)
    {
        card_counter /= 10;
        count++;
    }
    int last_number = card_number % 10;
    int second_to_last_number = (card_number / 10) % 10;
    int third_to_last_number = ((card_number / 10) / 10) % 10;
    int fourth_to_last_number = (((card_number / 10) / 10) / 10) % 10;
    int fifth_to_last_number = ((((card_number / 10) / 10) / 10) / 10) % 10;
    int sixth_to_last_number = (((((card_number / 10) / 10) / 10) / 10) / 10) % 10;
    int seventh_to_last_number = ((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int eighth_to_last_number = (((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int ninth_to_last_number = ((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int tenth_to_last_number = (((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int eleventh_to_last_number = ((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int twelfth_to_last_number = (((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int thirteenth_to_last_number = ((((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int fourteenth_to_last_number = (((((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int fifteenth_to_last_number = ((((((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int sixteenth_to_last_number = (((((((((((((((card_number / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    if (count == 16)
    {
        int first_number = sixteenth_to_last_number;
        int second_to_last_multiplication = second_to_last_number * 2;
        int fourth_to_last_multiplication = fourth_to_last_number * 2;
        int sixth_to_last_multiplication = sixth_to_last_number * 2;
        int eighth_to_last_multiplication = eighth_to_last_number * 2;
        int tenth_to_last_multiplication = tenth_to_last_number * 2;
        int twelfth_to_last_multiplication = twelfth_to_last_number * 2;
        int fourteenth_to_last_multiplication = fourteenth_to_last_number * 2;
        int first_number_multiplication = first_number * 2;
        if (second_to_last_multiplication >= 10)
        {
            second_to_last_multiplication = (second_to_last_multiplication - 10) + 1;
        }
        if (fourth_to_last_multiplication >= 10)
        {
            fourth_to_last_multiplication = (fourth_to_last_multiplication - 10) + 1;
        }
        if (sixth_to_last_multiplication >= 10)
        {
            sixth_to_last_multiplication = (sixth_to_last_multiplication - 10) + 1;
        }
        if (eighth_to_last_multiplication >= 10)
        {
            eighth_to_last_multiplication = (eighth_to_last_multiplication - 10) + 1;
        }
        if (tenth_to_last_multiplication >= 10)
        {
            tenth_to_last_multiplication = (tenth_to_last_multiplication - 10) + 1;
        }
        if (twelfth_to_last_multiplication >= 10)
        {
            twelfth_to_last_multiplication = (twelfth_to_last_multiplication - 10) + 1;
        }
        if (fourteenth_to_last_multiplication >= 10)
        {
            fourteenth_to_last_multiplication = (fourteenth_to_last_multiplication - 10) + 1;
        }
        if (first_number_multiplication >= 10)
        {
            first_number_multiplication = (first_number_multiplication - 10) + 1;
        }
        int checksum_addition = last_number + second_to_last_multiplication + third_to_last_number + fourth_to_last_multiplication +
                                fifth_to_last_number + sixth_to_last_multiplication + seventh_to_last_number + eighth_to_last_multiplication + ninth_to_last_number
                                + tenth_to_last_multiplication + eleventh_to_last_number + twelfth_to_last_multiplication + thirteenth_to_last_number +
                                fourteenth_to_last_multiplication + fifteenth_to_last_number + first_number_multiplication;
        if ((fifteenth_to_last_number == 1 || fifteenth_to_last_number == 2 || fifteenth_to_last_number == 3
             || fifteenth_to_last_number == 4 || fifteenth_to_last_number == 5) && first_number == 5)
        {
            if (checksum_addition % 10 == 0)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (first_number == 4)
        {
            if (checksum_addition % 10 == 0)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (count == 15)
    {
        int first_number = fifteenth_to_last_number;
        int second_to_last_multiplication = second_to_last_number * 2;
        int fourth_to_last_multiplication = fourth_to_last_number * 2;
        int sixth_to_last_multiplication = sixth_to_last_number * 2;
        int eighth_to_last_multiplication = eighth_to_last_number * 2;
        int tenth_to_last_multiplication = tenth_to_last_number * 2;
        int twelfth_to_last_multiplication = twelfth_to_last_number * 2;
        int fourteenth_to_last_multiplication = fourteenth_to_last_number * 2;
        if (second_to_last_multiplication >= 10)
        {
            second_to_last_multiplication = (second_to_last_multiplication - 10) + 1;
        }
        if (fourth_to_last_multiplication >= 10)
        {
            fourth_to_last_multiplication = (fourth_to_last_multiplication - 10) + 1;
        }
        if (sixth_to_last_multiplication >= 10)
        {
            sixth_to_last_multiplication = (sixth_to_last_multiplication - 10) + 1;
        }
        if (eighth_to_last_multiplication >= 10)
        {
            eighth_to_last_multiplication = (eighth_to_last_multiplication - 10) + 1;
        }
        if (tenth_to_last_multiplication >= 10)
        {
            tenth_to_last_multiplication = (tenth_to_last_multiplication - 10) + 1;
        }
        if (twelfth_to_last_multiplication >= 10)
        {
            twelfth_to_last_multiplication = (twelfth_to_last_multiplication - 10) + 1;
        }
        if (fourteenth_to_last_multiplication >= 10)
        {
            fourteenth_to_last_multiplication = (fourteenth_to_last_multiplication - 10) + 1;
        }
        int checksum_addition = last_number + second_to_last_multiplication + third_to_last_number + fourth_to_last_multiplication +
                                fifth_to_last_number + sixth_to_last_multiplication + seventh_to_last_number + eighth_to_last_multiplication + ninth_to_last_number
                                + tenth_to_last_multiplication + eleventh_to_last_number + twelfth_to_last_multiplication + thirteenth_to_last_number +
                                fourteenth_to_last_multiplication + first_number;
        if ((fourteenth_to_last_number == 4 || fourteenth_to_last_number == 7) && first_number == 3)
        {
            if (checksum_addition % 10 == 0)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (count == 13)
    {
        int first_number = thirteenth_to_last_number;
        int second_to_last_multiplication = second_to_last_number * 2;
        int fourth_to_last_multiplication = fourth_to_last_number * 2;
        int sixth_to_last_multiplication = sixth_to_last_number * 2;
        int eighth_to_last_multiplication = eighth_to_last_number * 2;
        int tenth_to_last_multiplication = tenth_to_last_number * 2;
        int twelfth_to_last_multiplication = twelfth_to_last_number * 2;
        if (second_to_last_multiplication >= 10)
        {
            second_to_last_multiplication = (second_to_last_multiplication - 10) + 1;
        }
        if (fourth_to_last_multiplication >= 10)
        {
            fourth_to_last_multiplication = (fourth_to_last_multiplication - 10) + 1;
        }
        if (sixth_to_last_multiplication >= 10)
        {
            sixth_to_last_multiplication = (sixth_to_last_multiplication - 10) + 1;
        }
        if (eighth_to_last_multiplication >= 10)
        {
            eighth_to_last_multiplication = (eighth_to_last_multiplication - 10) + 1;
        }
        if (tenth_to_last_multiplication >= 10)
        {
            tenth_to_last_multiplication = (tenth_to_last_multiplication - 10) + 1;
        }
        if (twelfth_to_last_multiplication >= 10)
        {
            twelfth_to_last_multiplication = (twelfth_to_last_multiplication - 10) + 1;
        }
        int checksum_addition = last_number + second_to_last_multiplication + third_to_last_number + fourth_to_last_multiplication +
                                fifth_to_last_number + sixth_to_last_multiplication + seventh_to_last_number + eighth_to_last_multiplication + ninth_to_last_number
                                + tenth_to_last_multiplication + eleventh_to_last_number + twelfth_to_last_multiplication + first_number;
        if (first_number == 4)
        {
            if (checksum_addition % 10 == 0)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
