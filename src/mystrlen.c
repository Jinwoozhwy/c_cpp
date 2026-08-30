#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char * str);

int main(int argc, const char *argv[])
{
	char s[] = "hello";
	size_t ret = my_strlen(s);
	printf("%zd \n", ret);
	return 0;

}


size_t my_strlen(const char * str) {
	size_t count = 0;
	assert (str != NULL);
	//char *start = str;
	while(*str != '\0') {
		count++;
		str++;
	}
	//return str - start;//指针-指针
	return count;
}
