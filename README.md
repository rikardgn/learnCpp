Free C++ course outline
=======================


Hello world
----------
- helloWorld.cpp
- Introduction on how to write a simple program that outputs the string “hello
world” to the screen.

Graphics
--------
-More examples will be added in the future

File i/O
----------
- randCopyMp3New.S, randCopyMp3DebugLatest.cpp
- Shows how to create a program that takes a selection of mp3 files thats located in one directory and creates a random smaller collection from that library in  another directory. This build is a debug build thats has seen alot revisions since the first debug build, randCopyMp3DebugLatest.cpp is the lastest debug build,
  randCopyMp3NewS.cpp was the starting point for the debug builds.
- outpRandomNameListFinal.cpp
- Program that outputs a random list of names to a textfile.
- exInputFileCinGetline.cpp
- Program that shows how to use the extraction operator ">>" and getLine to read the contents of a text file
- exOffSetBinFile.cpp
- Demonstrates how to use offset to change get position in binary file
  reads 4 characters at a few specified intervals specified using offset
- exBinFileSeqReadWrite.cpp
- Demonstrates how write and read data to a binary file in sequence
  either one value at a time or entire array at once.

Loops
-----
- forExample.cpp 
- Shows to print five lines of “Hello World” using a for loop
- whileEx.cpp
- Shows how to use a while loop to wait for a user to enter a certain character.
- doWhileEx.cpp
- Shows how to use a do while loop to generate two random numbers in a vector.

Mathematics and caluclations
----------------------------
- normalDistRandomEx.cpp
- Shows how to use random number generator fromnm newer c++ standard to generate normal distributions. The program lets you chose what seed to use to see what effect it has on the randomness of the numbers
- exProbabilityRandDist.cpp
- Shows how to use random number generator from newer c++ standard to gnerer probability based numbers using a bernoulli distribution. The program lets you choose what seed to use to see what effect it has on
- the randomness of numbers.
- calcCircle.cpp
- A program that takes values of radius from a file, prints the area, diametre and circumference to the screen. 
Finally the program writes the the results of the calculations to another file.  This program uses sequential file i/o.

Pointers
-------
- intPtr.cpp
- Program that shows how to use pointers with regards to integers.
- floatPtrFunc.cpp
- Show to use a float pointer and function to calcuate the area of circle
- charPtrEx.cpp
- Show how to use a char pointer and a function to change a character from lower to upperCase
- ptrToCharVector.cpp
- Shows to use a function and a char pointer to convert the letters stored in char array from lowerCase to upperCase

Parameter passing
-----------------
There are three ways of parameter passing in C++ passing by value, passing by reference and passing by pointer.
- passByVal.cpp
- An example that demonstrates how to use pass by value.
- passByPointer.cpp
- An example that demonstrates how to use passing by pointer

Selection
---------
 - ifAndElseWCin.cpp
 - Shows how to use if and else clauses in cpp. The input by the user is obtained using the cin method.
 - ifAndElseWStringStream.cpp
 - Shows how to use if and else clauses in cpp. The input by the user is obtained using the cin method. Stringstream is used to separate data and user input.

Simple objects
--------------
- circle.cpp
- A program that represent a circle. Methods to make simple calculations upon a circle.
- square.cpp
- A program that represents a square. Methods to make simple calculations upon a square.

Simple multiple inheritance
-----------------------------------------
- bikeClassesMultipInherit.cpp
- A program that shows to accomplish simple multiple inheritance.
	 The inheritance structure is as follows:
	 a sub class of bike such as racing bike inherits the main classes bike and storeItem.
	 The main class bike represent the basic properties of a bike. The subclass racing bikes
	 adds properties that may be important to represent a racing bike such as top speed. 
	The class storeItem represent an item sold in this example in a sporting goods store such with properties such as article number, shelf placement and so on.
	
Sorting
-----------------------------------------
- bubble sort
- will be added soon
- insetionSortExGitHub.cpp
- Example of insertion sort algorithm, sorting alogrithm taken from another github repo, added some code of my own.
-  quick sort
- will be added soon

Typecasting and type conversion
--------------------------------
- simpTypeConv.cpp
- A simple c++ program that showt how to do implict type conversion
  It also demonstrates what happens if you try to fit a large number into a smaller type
  with implict type conversion.

Variable Types
-------------
- intEx.cpp
- Shows how to use int variables in a program that makes simple calculations
- floatEx.cpp
- Shows how to use float variables in a program that makes simple calculations.
- arrEx.cpp
- Show to declare simple arrays in C++. The program also shows to make simple
  calculations using arrays.
- vectorEx.cpp
- Shows how to declare simple vectors in C++. It also shows how to use simple 
  vectors to make calucations.
- simpleStructEx.cpp
- Example that shows to declare simple structs in C++.
- structArrEx.cpp
- Example that shows how to declare arrays of simple structs in c++.
- simplStringEx.cpp
- Simple example of how to use and declare strings in C++

Examples of C++ 20 standard
---------------------------
- desInit20Ex.cpp
- Example of how to use designated initalizers in c++ 20.
