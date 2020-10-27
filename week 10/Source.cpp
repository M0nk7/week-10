#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	char arr[10000];
	int i = 0;
	char max = 0;
	scanf("%[^\n]", &arr);

	while (arr[i] != '\0') {
		
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		else {
			printf("error");
			return 0;
		}
		i++;
	}
	printf("%c", max);
	return 0;
}