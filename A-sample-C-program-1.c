#include <stdio.h>
#include <String.h>

int main() 
	char str[100];
	int i, len;

	print f("Enter a string: ");
	gets(str);
	
	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i]  'a' && str[i] <= 'z') {
			str[i] = str[i] - 'a' + 'A';
		}
	}

	printf("The capitalized string is: %s]n", str);

	// Reverse the string.
	for (i = 0, len = strlen(str); i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	printf("The reverse string is: %s\n", str);
	
	return 0;
}