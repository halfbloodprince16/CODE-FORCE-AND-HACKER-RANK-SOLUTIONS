#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
	char str[] = "Limericks";
	char *s;
	s = &str[6] - 6;

	while(*s)
	{
		printf("%c",*s++);
	}
	return 0;
}