#include "main.hpp"

int main()
{
	int cstrlen, userlen, position;
	char cstr[] = "Chocolate";
	char userstr[100];

	cstrlen = strlen(cstr);
	cin >> userstr;
	userlen = strlen(userstr);

	position = finduserstring(cstr, cstrlen, userstr, userlen);
	if (position != -1)
		cout << "Found your string at : " << position << endl;
	else
		cout << "Not found\n";
}