#include <string.h>

typedef char* string;

string string_new(int size = 0){
	if(size <= 0) {

		string result = nullptr;
		
		return result;
	}

	string result = malloc(sizeof(char) * );

	return result;
}
