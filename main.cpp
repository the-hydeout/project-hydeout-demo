#include <iostream>

#include <raylib.h>

const int screenWidth = 1920;
const int screenHeight = 1080;

int player_size = 50;

Vector2 player_position = {
    static_cast<float>((screenWidth / 2) - (player_size / 2)), // x
    static_cast<float>((screenHeight / 2) - (player_size / 2)) // y
};


// Function Prototypes
void draw_player();
void player_input();

int main () {


    // init app

    InitWindow(screenWidth, screenHeight, "Project Hydeout (Tech Demo)");

    SetTargetFPS(144);

    // run app
    while (!WindowShouldClose()) {
        BeginDrawing();

        // all drawing happens
        ClearBackground(BLACK);

        draw_player();
        player_input();


        


        EndDrawing();
    }
    // close app;

    CloseWindow();

    return 0;

};

void draw_player() {
    DrawRectangle(player_position.x, player_position.y, player_size, player_size, RED);
}

void player_input() {
    if(IsKeyDown(KEY_W)) {
        player_position.y -= GetFrameTime() * 500.0f;
    }

    if(IsKeyDown(KEY_S)) {
        player_position.y += GetFrameTime() * 500.0f;
    }

    if(IsKeyDown(KEY_A)) {
        player_position.x -= GetFrameTime() * 500.0f;
    }

    if(IsKeyDown(KEY_D)) {
        player_position.x += GetFrameTime() * 500.0f;
    }
}