//Questions 1-3 are not in this file. See readme.txt

//Question 3 part 2. 
//Set 'globalInt' to be equal to 37
#include <stdlib.h>
#include "dependencies.h"

globalInt = 37;
int charToInt(char input){
	int output = intToChar(input);
	return output-5;
}

//Question 4
//define the 'intToChar' function. This function should add 5 to the int given, cast it to a char, and then return this char.
int intToChar(int input) {
	return input + 5;
}

//Question 5 is not in this file. See readme.txt

//DO NOT ALTER, THIS IS FOR THE AUTOGRADER
int main(int argc, char * argv[]){
	int flag = atoi(argv[1]);
	struct dog gladstone = {3,"gladstone"};
	char myChar = intToChar(45);
	switch (flag) {
	case 1:
		printf("%i %s\n",gladstone.age, gladstone.name);
		return 0;
	case 2:
		printf("%c\n",myChar);
		return 0;
	case 3:
		printf("%i\n",globalInt);
		return 0;
	case 4:
		printf("%i\n",charToInt(50));
		return 0;
	case 5:
		printf("success\n");
		return 0;
	}
	return 1;
}
