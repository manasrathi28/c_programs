// if a particular structure is reqd as a part of other structures, then it is possible to
// nest it. This common structure can be made a part of a header file & include it in reqd
// C program
struct adr
{
	char adr[50];
	int pin;
	char mobile_no[11];  // int can accomodate 10 digit no max is 4294967296 (2^32)
						// however our mobile nos are a bit larger than this no
};
// save as "address.h"
