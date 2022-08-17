// Saves names and numbers to a CSV file

// #include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    char number[100];
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    // Get name and number
    // string name = get_string("Name: ");
    // string number = get_string("Number: ");

    printf("Name: ");
    scanf("%s", name);

    printf("Name: ");
    scanf("%s", number);

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);
}
