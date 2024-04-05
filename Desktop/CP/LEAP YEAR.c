#include <stdio.h>
int main() {
	int ref_year=1900, total_days, diff, present_year, leap_year, remaining_year, days, day, leap;
	
	printf("Enter year between 1900 and 2024: ");
	scanf("%d",&present_year);
	
	diff=present_year-ref_year;
	
	leap_year=present_year/4;
	
	remaining_year=diff-leap_year;
	
	total_days=(remaining_year*365)+(leap_year*366)+1;
	
	days=total_days%7;
	
	if(days==1){
		printf("Monday");
    }
    else if(days==2){
    	printf("Tuesday");
	}
	else if(days==3){
		printf("Wednesday");
	}
	else if(days==4){
		printf("Thursday");
	}
	else if(days=5){
		printf("Friday");
	}
	else if(days==6){
		printf("Saturday");
	}
	else if(days==7){
		printf("sunday");
	}
}
