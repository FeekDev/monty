# Monty Interpreter

Monty scripting language interpreter.

## Table of Contents

+ [Repo Content](#Repo-Content)
+ [Usage](#Usage)
+ [Opcodes](#Opcodes)
+ [Authors](#Authors)

## Repo Content

* monty.c - Entry into program.
* monty.h - Header file that holds all the structures and prototypes of the functions that the program will use.
* Other .c files - Hold the functions that will be used by the program.
* Bytecode folder - Holds Monty ByteCode files.

## Usage

* Code will be compiled this way
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
```
* Run the program
```bash
$ ./monty bytecodes/bytecode_file.m
```

## Opcodes

In this interpreter you can use the following opcodes:

* **push:** pushes an element to the stack.
* **pall:** prints all the values on the stack, starting from the top of the stack.
* **pint:** prints the value at the top of the stack.
* **pop:** removes the top element of the stack.
* **swap:** swaps the top two elements of the stack.
* **add:** adds the top two elements of the stack.
* **nop:** doesn’t do anything.

## Authors

+ Mateo Villada Higuita
+ Felipe Rios
