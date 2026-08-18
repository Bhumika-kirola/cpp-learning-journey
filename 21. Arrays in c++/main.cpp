/*----------------------------------THEORY---------------------------------------------
Array: collection of elements of the same data type.
indexing: in array indexing from 0 to (size - 1)
In the arrays loops usuage is common (to avoid code duplication) in defing the array.
MEMORY ACCESS VIOLATION:
 this means assigining the value which isnt yours. Eg: example[6] = 2; this will assign a value to some memory address which isnt belonging to array and is belonging to something else. Eg: another variable etc.
 In running mode this may not cause error but in the debudding mode this shows ton of errors
*/

#include <iostream>

using namespace std;


int main()
{
	int example[5]; // declaring a array: data_type name [size of array]; 

	int* ex = example;

	for (int i = 0; i < 5; i++)
		example[i] = 2;
	
	*(int*)(char*)(ex + 4) = 6;

	for (int i = 0; i < 5; i++)
		cout << example[i] << endl;

	int* another = new int[5];

	for (int i = 0; i < 5; i++)
		another[i] = 6;
	
	for (int i = 0; i < 5; i++)
		cout << another[i]<< endl;


	cout << example; // example is a pointer and will print the memory address instead

}