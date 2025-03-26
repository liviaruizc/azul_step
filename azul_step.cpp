// azul_step.cpp
// COP 2006, Summer 2024
// Livia Correia
// Program to make azul climb a step and move a graduation cap to the far right.
//----------------------------------------------------------------------------------


#include <Azul.h>

// function declarations (proto-types)
//------------------------------------------------------------------
void turnRight (fgcu::Azul & azul);
void climbStep (fgcu::Azul & azul);

// function definitions
//------------------------------------------------------------------

int main()
{
    // Azul instance variable "azul"
    fgcu::Azul azul{fgcu::Azul::AzulExercise::Step, 6,11};

    // move to the step
    do {
        azul.moveForward();
    } while (azul.canMoveForward());

    // climb the step
    climbStep(azul);

    //move to right wall

    // look for grad cap
    while (azul.canMoveForward()) {
        if (azul.canPickupCap()) { // checking if there is a cap on that space
            azul.pickUpCap();
        }
        azul.moveForward();
    }

    //drop the cap
    azul.putDownCap();

    azul.stop(); // have azul stop here to keep the window open
    return 0;
} // end main

/**
 * Execute a turn to the right from whatever direction Azul is currently facing.
 * @param azul - Azul class instance
*/
void turnRight (fgcu::Azul & azul) {
    for(int i=0; i < 3; ++i)
        azul.turnLeft();
} // end turnRight

/**
 * Climb up a step when encounter a physical wall
 * @param azul - Azul class instance
*/
void climbStep (fgcu::Azul & azul) {
    azul.turnLeft();
    azul.moveForward();
    turnRight(azul);
    azul.moveForward();
}