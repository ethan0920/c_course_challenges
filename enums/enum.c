/**
This challenge is intended to refresh me on enums.
*/

#include <stdio.h>


int main()
{

	enum companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
	enum companies xerox = XEROX;
	enum companies google = GOOGLE;
	enum companies ebay = EBAY;
	_Bool isXerox = (2 == xerox);

	printf("Boolean value: %i\n", isXerox);

	printf("Company Google is: %i\n", google);
	printf("Company Xerox is: %i\n", xerox);
	printf("Company Ebay is: %i\n", ebay);

	return 0;
}
