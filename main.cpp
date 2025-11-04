#include <iostream>

#include <raylib.h>

int main () {


    // init app

    InitWindow(1920, 1080, "Project Hydeout (Tech Demo)");

    // run app
    while (!WindowShouldClose()) {
        BeginDrawing();

        // all drawing happens
        ClearBackground(SKYBLUE);
        

        EndDrawing();
    }
    // close app;

    CloseWindow();

    return 0;

}