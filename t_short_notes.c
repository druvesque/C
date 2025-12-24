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
//
//
// ---> Storage Classes: Auto, Extern, Register, Static (attributes: keyword, default storage value, storage in memory, life-time, scope)
//      1. Auto: keyword -> auto, storage -> memory (stack), default value -> garbage, scope -> local, life-time -> within block 
//      2. Register: keyword -> register, storage -> CPU register, default value -> garbage, scope -> local, life-time -> within the block
//      3. Static: keyword -> static, storage -> DOUBT, default value -> 0, scope -> local, life-time -> within the block
//      4. Extern: keyword -> extern, storage -> DOUBT, default value -> 0, scope -> global, life-time -> throughout the program 
//
// ---> Functions: Return type (can have only 1 return type), function name, arguments
//                 Steps in a function: 
//                     1. Declaration
//                     2. Definition
//                     3. Calling
//
// ---> Array initializations: 1. int arr[5];                           ---> default values in an array are garbage values
//                             2. int arr[5] = {1, 2, 3, 4, 5, 6};      ---> indexing starts from 0, 5 is the size of the array, here
//                             3. int arr[] = {2, 4, 5, 3, 4, 5, 6};
//
// ---> 2D Array Initialization: 1. int arr[4][5];                      ---> it is mandatory to mention number of columns, rows is optional
//                               2. int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
//                               3. int arr[][2] = {12, 45, 13, 16, 18, 29, 38, 76};
//      *** 2D arrays are stored in contiguous fashion the memory, it may be row by row or column by column.
//
// ---> Strings: no need of '&' when we scanf a string, also you can't have ' ' (blank space), when you scanf a string. 
//               Functions: strlen(s1), strcpy(destination, source), strcat(s1, s2) {joins s2 at the end of s1}, strcmp(s1, s2)
//
// *** ALWAYS REVISE POINTERS ***
//
// ---> Pointers: unsigned integers that store address to some other variable. Size: 8 bytes for all types of pointers
//                Types: float, int, char types of pointers
//                
// ---> Command Line Arguments: argc -> number of arguments, argv[] -> pointer array which points to each argument list passed to the progarm
//                                                           argv[0] -> holds the name of the program itself
//                                                           arguments are used after doing gcc, when we run the program using .exe file
//
// ---> Miscellaneous Concepts: Variable Length Argument, Token-pasting, Stringizing Operator
//
// ---> Structure: the elements of the structure are always stored in the contiguous memory location, irrespective of the data type.
//                 Revise how a struct is stored in the memory, sizeof(struct) & padding during struct storage
//
// ---> Union: special data type, only one of the attributes is stored so memory location can be shared among multiple attributes
//
// ---> Bit Fields: When you try to go beyond bit limit, it returns only the least significant legal bits. 
//
// ---> Memory Allocation
//      1. Static: memory is allocated during compilation time itself, this memory cannot be expanded to accomodate more or less data.
//      2. Dynamic: memory is allocated during run-time itself, it allows varialbe length data types and structures whenever required
//                  done using malloc, calloc & realloc, deallocated using free
//
//                  a) Malloc: (cast_type *)malloc(sizeof(data_type));
//                             returns a pointer to the allocated space of type void / specified (above in the syntax), if it fails then NULL
//                             default value is garbage
//
//                  b) Calloc: (cast_type *)calloc(number_of_elements, sizeof 1 element);
//                             returns a pointer of the cast_type and if it fails, returns NULL
//
//                  c) Realloc: (cast_type *)realloc(ptr_name, new_size); new_size: n*sizeof(int)
//                              returns a pointer of the cast_type and if it fails, returns NULL                  
//
// ---> File I/O: Methods - fprintf(), fscanf(), fread(), fwrite(), fopen(), fclose() ...
//                Types: Text & Binary
//                Operations: Creating, Opening, Closing, Reading from and Writing to a File
//                Modes: r, rb, w, wb, a, ab, r+, rb+ (b -> binary mode), (w, a overwrites if file exists otherwise create)
//                                                    (a -> append to the end of the file), (r+/rb+ -> both reading and writing)
//
// ---> TRICKY POINTS
//      1. When we pass an array to the function, the function essentially receives the pointer to the first element of the array. 
//         Size must be passed explicitly to the function as a separate argument.
//      2. *** malloc() function implicitly types cast the pointer to the type that is required.
