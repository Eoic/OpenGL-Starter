// https://www.youtube.com/watch?v=EBHmMmiVtCk&list=PLvv0ScY6vfd-p1gSnbQhY7vMe2rng0IL0&index=11

#include <iostream>
#include <SDL2/SDL.h>

constexpr int WIDTH = 640;
constexpr int HEIGHT = 480;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not be initialized: " << SDL_GetError() << std::endl;
        return -1;
    }

    const auto window = SDL_CreateWindow(
        "SDL2",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WIDTH,
        HEIGHT,
        SDL_WINDOW_SHOWN
    );

    bool isRunning = true;

    while (isRunning) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                isRunning = false;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
