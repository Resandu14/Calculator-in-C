# Simple C Calculator

A simple command-line calculator written in **C** as one of my first programming projects while learning through **Harvard's CS50x**.

## About

This program asks the user for:

1. A first number
2. An operation
3. A second number

It then performs the selected calculation and displays the result.

The calculator also validates the operation entered by the user and allows decimal numbers.

## Features

The calculator currently supports:

* Addition `+`
* Subtraction `-`
* Multiplication `*`
* Division `/`
* Decimal number support
* Operation input validation
* Clean result formatting
* Floating-point calculations

## Example

```text
First No: 10
Operation: *
Last No: 5

Answer is 50
```

Another example with decimals:

```text
First No: 5.12
Operation: +
Last No: 5.12

Answer is 10.24
```

Invalid operations are also handled:

```text
First No: 10
Operation: %
Invalid operation. Try again.

Operation: +
Last No: 5

Answer is 15
```

## Built With

* **C**
* **CS50 Library**

## What I Learned

This project helped me practice:

* Variables
* `float` and `char` data types
* Getting user input with `get_float()` and `get_char()`
* `if` statements
* `while` loops
* `continue` and `break`
* Logical operators such as `&&`
* Arithmetic operators
* Floating-point numbers
* `printf()` formatting
* Input validation
* Basic program structure in C

## Future Improvements

As I learn more C, I plan to improve this project with:

* Division-by-zero handling
* Multiple calculations in one session
* More mathematical operations
* Better error handling
* Improved input validation
* A more advanced command-line interface

## Learning

This project was created while learning **CS50x**, Harvard University's introduction to computer science.

This is a beginner project and is part of my journey toward learning computer science, programming, and eventually AI/ML.
