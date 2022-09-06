#include <stdio.h>
#include <windows.h>
int main ()
{
	int mtr_no, acc_no;
	float consumption,VAT,bill,no_of_units,rates_per_unit=10.2,previous_reading,current_reading, standing_charge=6.8, vat_value=0.16;
	do {
		
		system("cls");
	printf("******************* KENTON WATER AND SUPPLY *************************\n");
	
	printf("******************* WATER BILL APPLICATION **************************\n");
	printf("\n");
		printf("Enter meter Number     : ");
		scanf("%d", & mtr_no);
		printf("Enter Account Number   : ");
		scanf("%d", & acc_no);
		printf("Enter Previous reading : ");
		scanf("%f", & previous_reading);
	    printf("Enter Current reading  : ");
		scanf("%f", & current_reading);
		printf("\n");
	}
	while(current_reading<previous_reading); 
 {
 	no_of_units=current_reading-previous_reading;
 	printf("Number of Units = %.2f\n", no_of_units);
}
    consumption=rates_per_unit*no_of_units;
 	printf("Your Consumption is = %.2f\n", consumption);
 	
 	standing_charge=6.8;
 	printf("The Standing Charge is = %.2f\n", standing_charge);
 		
 	VAT=vat_value*(standing_charge+consumption);
 	printf("Value added tax = %.2f\n", VAT);
 	
 	bill=standing_charge+consumption+VAT;
 	printf("The total bill is = %.2f\n", bill);
 	
	return 0;	
	
}
