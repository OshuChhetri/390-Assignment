
#include <stdio.h>


	class myData0{
	    short int height;
	    long int hairCount;
	    long int numFreckles;
	    short int weight;
	};
	class myData1 {
	    short int height;
	    short int weight;
	    long int hairCount;
	    long int numFreckles;
	};
int main(void) {
    printf("Size of myData0 in bytes = %d \n", sizeof(myData0));
    printf("Size of myData1 in bytes = %d \n", sizeof(myData1));
}
