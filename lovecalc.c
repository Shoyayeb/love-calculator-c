#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
    char yourName[50], lovedPersonName[50];
    int lovecalc;
    printf("**********************************************\n");
    printf("****** Welcome to the Love Calculator! ******\n");
    printf("**********************************************\n\n");

    // Input the names
    printf("Enter your name: ");
    scanf("%s", yourName);
    printf("Enter his/her name: ");
    scanf("%s", lovedPersonName);

    // Validate names
    if (strlen(yourName) <= 2 || strlen(lovedPersonName) <= 2) {
        printf("Enter a valid name\n");
        return;
    }

    // Generate random love percentage
    srand(time(0)); // Seed for randomness
    lovecalc = (rand() % 100) + 1; // Random number between 1 and 100

    // Output based on love percentage
    if (lovecalc <= 10) {
        printf("You two are like oil and water because it's only %d%%.\n", lovecalc);
        printf("Dr. Love thinks a relationship might work out between %s and %s, "
               "but the chance is very small. A successful relationship is possible, "
               "but you both have to work on it. Do not sit back and think that it will all "
               "work out fine, because it might not be working out the way you wanted it to. "
               "Spend as much time with each other as possible.\n", yourName, lovedPersonName);
    } else if (lovecalc <= 30) {
        printf("Too hard because it's only %d%%.\n", lovecalc);
        printf("The chance of a relationship working out between %s and %s is not very big, "
               "but a relationship is possible if the two of you really want it to, and are "
               "prepared to make some sacrifices for it. You'll have to spend a lot of quality time together.\n",
               yourName, lovedPersonName);
    } else if (lovecalc <= 60) {
        printf("You have to confess your love to him/her. Maybe he/she loves you too, but you don't actually know 😊\n");
        printf("Because it's only %d%%.\n", lovecalc);
    } else if (lovecalc <= 80) {
        printf("There is some possibility, but not sure. Work hard because it's %d%%.\n", lovecalc);
    } else if (lovecalc > 80) {
        printf("I'm totally sure that if you two try a little bit, it will be like cherry blossom 👩‍❤️‍💋‍👩.\n");
        printf("Because your love possibility is %d%%.\n", lovecalc);
        printf("Dr. Love thinks that a relationship between %s and %s has a very good chance of being successful, "
               "but this doesn't mean that you don't have to work on the relationship. Remember that every relationship "
               "needs spending time together, talking with each other, etc.\n", yourName, lovedPersonName);
    }
}
