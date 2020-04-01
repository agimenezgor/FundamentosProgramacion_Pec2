#include <stdio.h>
int main(int argc, char **argv)
{
	typedef enum {COMMERCIAL, PRIVATE, GOVERNAMENTAL, MILITAR, EXPERIMENTAL, OTHERS} tUtility;
	typedef enum {FALSE, TRUE} tActive;
	
	
	const WEIGHT_EMPTY=41415.0;
	const MAX_WEIGHT_WITHOUT_GAS1=61689.0;
	const PASSENGERS_ATTENDANT_PER_FLIGHT=50;
	const AVERAGE_WEIGHT=95.0;
	const PILOT_AND_COPILOT1=2;
	
	tUtility utility1, utility2, utility3;
	tActive isActive1, isActive2, isActive3;
	
	int year1, year2, year3;
	int seats1, seats2, seats3;
	
	float maximumLoad1;
	int passengersAmount;
	float passengersAmountAvailable;
	int cabinePersonal1;
	float maximumLoadAvailable;
	utility1=COMMERCIAL;
	seats1=200;
	
	
	printf("Enter the year of production of the first plane: \n");
	scanf("%d", &year1);
	printf("Enter the year of production of the second plane: \n");
	scanf("%d", &year2);
	printf("Enter the year of production of the third plane: \n");
	scanf("%d", &year3);
	
	printf("Enter the type of utility of the second plane (Enter an integer(commercial=0, private=1, governamental=2, militar=3, experimental=4, others=5)): \n");
	scanf("%u", &utility2);
	printf("Enter the type of utility of the third plane: (Enter an integer(commercial=0, private=1, governamental=2, militar=3, experimental=4, others=5)): \n");
	scanf("%u", &utility3);
	
	printf("Enter the number of seats are in the second plane: \n");
	scanf("%d", &seats2);
	printf("Enter the number of seats are in the third plane: \n");
	scanf("%d", &seats3);
	
	printf("Is active the first plane? (Enter 1 if it is active and 0 if it is not active): \n");
	scanf("%d", &isActive1);
	printf("Is active the second plane? (Enter 1 if it is active and 0 if it is not active): \n");
	scanf("%d", &isActive2);
	printf("Is active de third plane? (Enter 1 if it is active and 0 if it is not active): \n");
	scanf("%d", &isActive3);
	
	/*Expression 1*/
	
	maximumLoad1=(MAX_WEIGHT_WITHOUT_GAS1-WEIGHT_EMPTY);
	
	printf("Enter the number of passengers are on the first plane : \n");
	scanf("%d", &passengersAmount);
	
	cabinePersonal1=(passengersAmount / PASSENGERS_ATTENDANT_PER_FLIGHT) +1;
	maximumLoadAvailable=maximumLoad1-(AVERAGE_WEIGHT*((float)PILOT_AND_COPILOT1 + (float) cabinePersonal1 + (float) passengersAmount));
	printf("The maximum load available in the first plane is: %.2f \n", maximumLoadAvailable);
	
	/*Expression 2*/
	
	if ((utility2 == 1) || (utility3 ==1)) 
	{
		if ((seats2 >= 15) || (seats3 >= 15))
			printf("There are at least one private plane with 15 or more of seats of capacity. \n");
	}else
	{
		printf("There are any private plane with 15 or more of seats of capacity. \n");
	}
	
	/*Expression 3*/
	
	if ((year1==year2) && (year2==year3))
	{
		printf("Three planes are from the same year. Exactly are from the year %d. \n", year1);
	}else
	{
		printf("Three planes are not from the same year. \n");
	}
	
	/*Expression 4*/
	
	if ((isActive1==isActive2) && (isActive2==isActive3))
	{
		printf("Three planes are in the same state. \n");
		if(isActive1==1)
		{
			printf("Three planes are active. \n");
		}else
		{
			printf("Three planes are not active. \n");
		}
	}else 
	{
		printf("Three planes are not in the same state. \n");
	}
	
	return 0;
}
