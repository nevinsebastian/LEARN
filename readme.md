# C Programming: Learning Path

Welcome to the **C Programming** repository! This repository is designed for beginners who are learning C programming. The current focus of the repository is to provide well-structured code examples and explanations for topics up to **data types**.

## Repository Structure
The repository is organized by topic, with each topic having its corresponding `.c` file containing relevant code examples. Below is the current file structure:

```
c-brocode/
├── datatype.c          # Demonstrates various data types in C
├── variables.c         # Demonstrates variable declaration and initialization in C
```

## Topics Covered
### 1. Hello, Variables!
File: `variables.c`

Learn how to declare, initialize, and use variables in C. This includes:

- Declaring variables (`int`, `float`, `char`, etc.)
- Initializing variables
- Printing values using `printf()` with format specifiers

#### Example Code
```c
#include <stdio.h>
int main(){
  int x; // Declaration
  x = 5; // Initialization

  int y = 10; // Declaration + Initialization

  int age = 22;
  float temperature = 32.5; // Floating point number
  char name[] = "Nevin"; // Array of characters

  printf("Hello %s\n", name); // Printing characters
  printf("You are %d years old\n", age); // Printing integers
  printf("Current temperature is %f\n", temperature); // Printing floats
  return 0;
}
```

### 2. Exploring Data Types
File: `datatype.c`

Dive into C's various data types and their usage, including:

- `char` for characters and strings
- `float` and `double` for floating-point numbers
- `bool` for boolean values
- `short`, `int`, `unsigned int` for integers

#### Example Code
```c
#include <stdio.h>
#include <stdbool.h>

int main(){
  char a = 'c';         // Single character
  char b[] = "Bro";     // String (array of characters)

  float c = 33.333333;  // 4 bytes, 6-7 digits precision
  double d = 33.33333333333333; // 8 bytes, 15-16 digits precision

  bool e = true;        // Boolean (true/false)

  char f = 100;         // 1 byte, -128 to 127
  unsigned char g = 225; // 1 byte, 0 to 255

  short int h = 32134;  // 2 bytes, -32,768 to 32,767
  unsigned short int i = 65535; // 2 bytes, 0 to 65,535

  int j = 1234567890;   // 4 bytes, -2^31 to 2^31-1
}
```

## Features
- **Beginner-Friendly Examples**: Simple, clear, and concise code examples to help you understand the concepts.
- **Code Comments**: All examples are thoroughly commented for better understanding.
- **Progressive Learning**: Code examples are structured to follow a natural progression for learners.

## How to Use
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/c-brocode.git
   ```
2. Navigate to the directory:
   ```bash
   cd c-brocode
   ```
3. Compile and run any file using GCC:
   ```bash
   gcc -o output filename.c
   ./output
   ```

## Next Steps
This repository will continue to expand as we cover more topics in C programming, including:
- Control statements
- Loops
- Functions
- Arrays

Stay tuned and happy coding! 🎉

## Contributing
If you spot any issues or have suggestions for improvement, feel free to open an issue or submit a pull request.

## License
This project is open-source and available under the MIT License.

---
### Connect
For more learning resources and updates, subscribe to the [Bro Code YouTube Channel](https://www.youtube.com/channel/UC4SVo0Ue36XCfOyb5Lh1viQ)!

