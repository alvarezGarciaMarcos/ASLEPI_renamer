# What is this thing?

This little thing is a simple program that allows you to change the name of the file to match the naming conventions imposed by the teachers of ASLEPI in the university of Oviedo.

--------------------------

# How to compile it
To compile this program, I've provided a make file, so the only two lines that you have to write are (one at a time):

```bash
make
make clean
```
---------------------------

# How to use it
The usage of this program is very easy:
- Have this program in the folder where your file to be renamed is in
- Execute the program indicating the name of the file whose name you want to change, alongside the practical class that you are in

This is an example of the usage:

``` bash
./rename -f exercise1.pdf -p E2.1
```

This simple line will rename the "exercise1.pdf" to the base name you configurated and will add the practical class to it.

---------------------------

# How to change the base name
The base name in this program is the name of the file that does not change at any time. I'm going to show you how you can change the base name so it matches yours.

First thing to do is to open the "rename.c" file in any text editor.

Locate this line:
```c
char *base_name = "<Your base name>"
```
You have to write your base name there, **in between the quotes**. The only thing left is to compile the program again, how? It is explained in the [compile](#how-to-compile-it) section.

Now you're all set and done! The program will now work with your base name and will rename every file.
Congratulations!