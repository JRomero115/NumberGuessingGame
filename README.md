*   **Name  :** Janine Romero

# Read Me
## Description of the program: *Number Guessing Game*
For the Number Guessing Game, create a game that will randomly generate a number for a user to guess. 
Tell the user if the user's guess if it is too low or too high.

## Source files
- ***main.cpp***
Main program. This test driver program calls sub-functions from other files to display the results in the console.

##  Circumstances of Programs

The program runs successfully. The program was developed and tested on gnu g++ 4.4.2. It was compiled, run, and tested on gcc ouray.cudenver.edu.

##  How to build and run the program
1. Begin by changing the directory and listing the files

        $ cd RomeroJanine_HW2
        $ ls

1.  Uncompress the homework.  The homework file is compressed. To uncompress it use the following commands:

        $ unzip RomeroJanine_HW2.zip 
        $ ls

2.  Build the program. Change to the directory that contains the file by:

        $ cd HW2
        $ ls

Now you should see a directory named homework with the files:

    main.cpp

    makefile

    README.txt

3. Compile the program by:

        $ ls
        $ g++ -o phaseI main.cpp ActorActress.cpp Database.cpp Pictures.cpp

4.  Run the program by:

        $ ./HW2

5.  Delete the obj files, executables, and core dump by:

        $ ./make clean
