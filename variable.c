// Variables are containers for storing data values, like numbers and characters.
#include <stdio.h> 

int main() {

  char myName[] = "Maker Shihab";
  printf("My Name is: %s", myName);

  // Int
  int age = 14;
  age = 16;
  printf("%d", age);

  // float 
  float height = 4.5;
  printf("%f", height);

  return 0;
}

// Output is 'Maker Shihab'

// In the C programming language, there are several types of variables that can be used to store different kinds of data. Here are some of the commonly used variable types in C:

//1. Integers: Used to store whole numbers (positive or negative) without any decimal points. The size of an integer variable can vary depending on the system, but it is typically 2 or 4 bytes. Example: int x = 10;

//2. Characters: Used to store individual characters. It can hold any character from the ASCII character set. Character variables are typically 1 byte in size. Example: char c = 'A';

//3. Floating-point numbers: Used to store numbers with decimal points. There are two types of floating-point variables in C: float and double. Float variables typically occupy 4 bytes and provide around 6 decimal digits of precision, while double variables usually occupy 8 bytes and offer greater precision with around 15 decimal digits. Example: float f = 3.14;

//4. Arrays: Used to store a collection of similar data items. Arrays can hold multiple values of the same type, and the size of an array is determined at the time of declaration. Example: int numbers[5] = {1, 2, 3, 4, 5};

//5. Pointers: Used to store memory addresses of other variables. Pointers allow you to indirectly access and manipulate variables in memory. Example: int* ptr;

//6. Structures: Used to group related data items together. Structures allow you to create custom data types that can contain multiple variables of different types. Example: