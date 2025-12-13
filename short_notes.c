// Phases of C program
//
// 1. Edit (program created on editor and stored on disk --> .c file)
// 2. Preprocess (preprocessor program processes the code, converts .c --> .i file)
// 3. Compile (converts preprocessed C code to assembly language, converts .i --> .s file)
// 4. Assemble (converts assembly code to machine code, converts .s --> .o/.obj file)
// 5. Linking (combining object files, links libraries, converts .obj --> .exe/.out file)
// 6. Loading (loader puts the program in main memory)
// 7. Execution (CPU takes each instruction and executes it)
//
//
// ---> Tokens: Keywords, Identifiers, Data Types
//
// ---> There is no such thing as unsigned float, unsigned double, unsigned long double in C.
//
// ---> Shortcircuiting happens in logical operators.
//
// ---> Switch-case: case must have a constant values and it's data type should match the switch statement variable.
//                   permissible data-types: int, char, short, long, enum
//
//
// ---> Conditional Statements: (if, else if, else), switch-case, ternary operator
//
// ---> Loops: for, while, do-while
//
// ---> Important for loop point, syntax: for(initialization, condition, increment/decrement) {}
//                                        1. initialization is done at the beginning of the for loop
//                                        2. then the condition is checked, if true, flow goes inside the body of for loop
//                                        3. after the execution of body, then increment/decrement statement is executed
//                                        4. again condition is checked, back to step 2 else out of the loop
