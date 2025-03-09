#include "4.h"

void SecToHoursMin(const int seconds, int *minutes, int *hours){
	int minutes_temp;
	int hours_temp;
	hours_temp = seconds / 3600;
	//minutes_temp = seconds - hours_temp * 3600;
	minutes_temp = (seconds % 3600) / 60;
	//printf("hours_temp = %d\n", hours_temp);
	//printf("minutes_temp = %d\n", minutes_temp);
	*minutes = minutes_temp;
	*hours = hours_temp;
	
};

void SecToHoursMinSec(const int input_sec, int *seconds, int *minutes, int *hours){
	int minutes_temp;
	int hours_temp;
	int seconds_temp;
	hours_temp = input_sec / 3600;
	//minutes_temp = seconds - hours_temp * 3600;
	minutes_temp = (input_sec % 3600) / 60;
	//printf("hours_temp = %d\n", hours_temp);
	//printf("minutes_temp = %d\n", minutes_temp);
	seconds_temp = (input_sec % 3600) % 60;
	*minutes = minutes_temp;
	*hours = hours_temp;
	*seconds = seconds_temp;
	
};


int BinaryToDecimal(char *binary, int binary_size){
	if(binary == NULL){
		return -1;
	}
	int decimal = 0;
	int temp = 0;
	binary_size = binary_size - 1;
	int k = 0;
	for(int i = binary_size; i >= 0; i--){
		if(binary[k] == '1'){
			temp = pow(2, i);
			//printf("temp = %d\n", temp);
			//printf("i = %d\n", i);
			decimal += temp;
		}
		k++;
	}
	return decimal;
	
}; 
