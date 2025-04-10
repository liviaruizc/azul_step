# Azul

This repository provides a template C++ application for building Azul exercises.
# Azul Step Program

## Overview
This program controls an instance of Azul to make it climb a step, move a graduation cap to the far right, and drop it. The program leverages the `fgcu::Azul` class to perform these actions in a simulated environment.

## Features
- Azul moves forward to climb a step.
- Turns and climbs the step.
- Moves to the right and looks for a graduation cap.
- Picks up the cap and moves it to the far right.
- Drops the cap at the right-most position.

## Code Explanation
- **Main Function**: 
  - Creates an instance of `fgcu::Azul` named `azul` with specific starting coordinates.
  - Moves `azul` to the step by checking if it can move forward.
  - Calls `climbStep()` to make `azul` climb the step.
  - Moves `azul` to the far right to find the graduation cap and pick it up.
  - After picking up the cap, it moves further until it can no longer move forward, then places the cap down.

- **Helper Functions**:
  - `turnRight()`: Makes `azul` turn right by performing three left turns.
  - `climbStep()`: Makes `azul` climb a step by turning left, moving forward, turning right, and moving forward again.

## Installation
To compile and run the code, you need:
- An appropriate environment that includes the `fgcu::Azul` class (likely part of a specific library or simulator).
- A C++ compiler (e.g., g++ or clang++).
- An IDE or text editor to write and modify the code (e.g., Visual Studio Code, Xcode, or any text editor of your choice).

### Compilation
1. Save the code in a file (e.g., `azul_step.cpp`).
2. Open a terminal and navigate to the directory where the file is located.
3. Run the following command to compile the code:
   ```bash
   g++ -o azul_step azul_step.cpp

## Run the compiled program:

./azul_step

## Usage
Once the program is compiled, Azul will move forward to climb a step, pick up a cap, and move it to the far right. The program will then stop, keeping the window open for you to observe the result.

## Sample Output:
The output is a simulation of the robot's movement, so no direct textual output will be printed. Instead, you will observe the robot:

Moving to the step.

Climbing the step.

Moving towards the right wall and picking up the cap.

Dropping the cap at the far-right position.

## Dependencies
This program relies on the fgcu::Azul class, which is part of a specific simulator or library. Ensure you have access to the required environment for running this program.

## License

The source code is dual licensed under Public Domain and MIT -- choose whichever you prefer.
