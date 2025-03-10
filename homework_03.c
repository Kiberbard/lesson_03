#include "4.h"


int main(){
	//1 задание
	printf("\nзадание 1:\n");
	// 0 + 4 - 1 = 3
	float x1 = 2 % 2 +2 * 2 - 2 / 2;
	printf("x1 = %f\n", x1);
	// 27 * (3 + 9) = 270 + 54 = 324
	float x2 = (3 * 9 * (3 + (9 * 3 / 3)));
	printf("x2 = %f\n", x2);
	printf("\nзадание 2:\n");
	
	//float res = a / ((b * c) / ((d * e) / (f * h)))
	printf("res = a / ((b * c) / ((d * e) / (f * h)))");
	
	printf("\nзадание 3:\n");
	printf("натуральные числа n = 120 и m = 9\n");
	float divide = 120.f/9.f;
	printf("n divide m = %f\n", divide);
	int result = (int)divide % 10;
	printf("Младшая цифра целой части частного равна %d", result);
	
	printf("\nзадание 4:\n");
	//5 часовв 20 мин
	int seconds = 19200;
	int minutes;
	int hours;
	SecToHoursMin(seconds, &minutes, &hours);
	printf("time for %d sec is:= (%d : %d)\n", seconds, hours, minutes);
	
	printf("\nзадание 5:\n");
	int var1 = 1;
	int var2 = 5;
	printf("var1 %d and var2 %d before\n", var1, var2);
	var1 = var1 + var2; //6
	var2 = var1 - var2; //6-5 = 1
	var1 = var1 - var2;//6-1 = 5
	printf("var1 %d and var2 %d after\n", var1, var2);
	
	printf("\nзадание 6:\n");
	int seconds_in = 19240;
	int seconds2;
	int minutes2;
	int hours2;
	SecToHoursMinSec(seconds_in, &seconds2, &minutes2, &hours2);
	printf("time for %d sec is:= (%d : %d : %d)\n", seconds_in, hours2, minutes2, seconds2);
	
	
	printf("\nзадание 7:\n");
	char *binary = "1010";
	int binary_size = strlen(binary);
	int decimal = BinaryToDecimal(binary, binary_size);
	printf("decimal for binary %s  is:= %d)\n", binary, decimal);
	
	printf("\nзадание 8:\n");
	int number = 666; //1010011010
	int number10_right = number >> 10;
	printf("10-ый сдвиг вправо для числа 666 (1010011010)  is:= %d)\n Получили 0, т.к. все биты были потеряны (ушли вправо)\n", number10_right);
	
	printf("\nзадание 9:\n");
	int number2 = 98; //1100010
	int number10_left2 = number2 << 2;
	printf("10-ый сдвиг влево для числа 98 (1100010)  is:= %d)\n число стало больше, т.к. биты сместились влево (степень двойки выше)\n", number10_left2);
	int number10_right2 = number2 >> 2;
	printf("10-ый сдвиг вправо для числа 98 (1100010)  is:= %d)\n число стало меньше, т.к. биты сместились вправо (степень двойки ниже)\n", number10_right2);
	int number10_left_right = number2 << 2;
	number10_left_right = number10_left_right >> 2;
	printf("10-ый сдвиг влево и вправо для числа 98 (1100010)  is:= %d)\n т.к. по итогу биты не изменили своё положение, получили то же число\n", number10_left_right);
	return 0;
}
