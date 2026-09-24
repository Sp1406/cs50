#include <stdio.h>
#include <stdbool.h>

bool check_card_validity(long card_number);
int card_number_length(long card_number);

int main(void)
{
    check_card_validity(4003600000000014);
    
    return 0;
}

bool check_card_validity(long card_number)
{
    bool flag = false;
    int length = card_number_length(card_number);

    int sum_of_digits_being_doubled = 0;

    for(int i = length; i > 0; i = i - 2)
    {
        int digit = (card_number % 100);
        
        while(digit > 0)
        {
            sum_of_digits_being_doubled = sum_of_digits_being_doubled + ((digit % 10) * 2);
            digit /= 10;
        }
        card_number /= 100;
    }

    printf("Sum of digits being doubled: %d\n", sum_of_digits_being_doubled);

    return flag;
}

int card_number_length(long card_number)
{
    int length = 0;

    while(card_number > 0)
    {
        card_number /= 10;
        length++;
    }
    return length;
}
