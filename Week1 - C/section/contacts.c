#include <cs50.h>
#include <stdio.h>

void get_info(void);
void print_info(string name, int age, string phone_no, string location);

int main(void) {
    get_info();
}

void get_info(void) {
    string name = get_string("Name: ");
    int age = get_int("Age: ");
    string phone_no = get_string("Phone number: ");
    string location = get_string("Location: ");

    print_info(name, age, phone_no, location);
}

void print_info(string name, int age, string phone_no, string location) {
    printf("New Contact: %s, %i, lives in %s and can be reached at %s.\n", name, age, location, phone_no);
}
