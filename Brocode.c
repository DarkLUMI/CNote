#include <stdio.h>

int main(){

	//int y = 321;		//declaration + intialization
	
	int age = 21;			//integer(only whole number) (-2,147,483,648 to +2,147,483,647) 用%d
	float gpa = 2.059999;	//floting point number store6-7digit 用%f
		// %.1f = shows 1 decimal precision exp1.9, so %.2f shows 2 exp1.99
		// %1 = minimum field width eg%1.7f 空1顯示7 digit
		// %- = left align eg%-8.2f 空8顯示2digit但有-所以空8在left
	double d = 3.1234567891011123; //similar with float but stores 15-16 digits, double比較准少用float 用%lf
	char grade = 'C';		//single character 用%c
	char name[] = "Bro";	//array of charterS 用%s
	const 過後放比如 float/int/double 就是那個之後不能更變
	bool sunny = true //這個func可以set某個變數是true or false
	scanf("%d或%f或%lf或%c或%s看你用什麽function", &funtion的名字例如int是age就放age之類); //get input from user
	fgets(funtion的名字例如char是name就放name之類, 25<限制用多少bytes,這個限制25>, stdin); //get input from user including spaces, but when print will appear new line
	name[strlen(name)-1] = '\0'; //get rid of new line when print, refer above line BUT NEED INCLUDE #include <string.h>
	#include <math.h> can access to sqrt, pow, round, ceil, floor, fabs, log, sin, cos, tan
	
	
	//printf("Hello %s\n", name);
	//printf("I am %d years old\n", age);
	//printf("My average grade is %c\n", grade);
	//printf("My gpa is %f\n", gpa);
	
	float item1 = 69.99;
	float item2 = 87.99;
	float item3 = 67.99;
	
	//printf("item1 is $%6.2f\n", item1);
	//printf("item2 is $%-4.2f\n", item2);
	//printf("item3 is $%-8.2f", item3);
	
	//-----------------------------------------------------
	
	int x = 5;
	int y = 2;
	
	float z = x / (float) y;
	
	printf("%f",z);
	
	return 0;


}

	unit=toupper(unit); //toupper input小字母大字母都可以
	//AND operator && 用法如下, 兩個condition符合就執行
	/*
	float temp = 25;
	bool sunny=true;
	
	if(temp>=0 && temp<=30 && sunny){
		printf("\nThe weather is good!");
	}
	else{
		printf("\nThe weather is bad!");
	} */
	
	//OR operator || 一個condition符合就執行
	//NOT operator ！ if（！sunny）{}
	
/* -funtion
	void birthday()
	{
		printf("\nHappy birthday to you!");
		printf("\nHappy birthday to you!");
		printf("\nHappy birthday dear... you!");
		printf("\nHappy birthday to you!\n");
	}

	int main()
	{
		birthday();
		birthday();
		birthday();
		
		return 0;
	}
*/

/* -arguments

	void birthday(char name[], int age)
	{
		printf("\nHappy birthday dear %s!", name);
		printf("\nYou are %d years old!", age);
	}
	
	int main()
	{
		char name[] = "Bro";
		int age = 21;
		
		birthday(name, age);
		
		return 0;
	}
*/

	// ternary operator = shortcut to if/else
	// 用法 return (condition) ? value if true : value if false
