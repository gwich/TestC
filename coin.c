#include <stdio.h>

int 
main(void){
	// test from git hub
	char i1, i2, i3;
	int dollars, quarters, dimes, nickels, pennies;

	int total_dollars, total_cents, change;

	printf("Enter your 3 initials > ");
	scanf("%c%c%c", &i1, &i2, &i3);
	printf("Greetings %c. %c. %c.! \nNo. of dollars >\t", i1, i2, i3);/* ; */

	scanf("%d", &dollars);

	printf("No. of quarters >\t");
	scanf("%d", &quarters);

	printf("No. of dimes >\t\t");
	scanf("%d", &dimes);

	printf("No. of nickels >\t");
	scanf("%d", &nickels);

	printf("No. of pennies >\t");
	scanf("%d", &pennies);

	total_cents = dollars * 100 + quarters * 25 +
			dimes * 10 + nickels * 5 + pennies;


	// printf("Total cents: %d", total_cents);


	total_dollars = total_cents / 100;
	change = total_cents % 100;


	printf("\n\n%c%c%c Coin credit \nDollars: $%.d  \nChange: %d cents. \nOr $%d.%d\n\n", i1, i2, i3, total_dollars, change, total_dollars, change);

	// added a comment from the local machine




}
