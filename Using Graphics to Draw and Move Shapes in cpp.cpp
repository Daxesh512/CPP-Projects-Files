#include <SDL2/SDL.h>

int main(int argc, char* args[]) {
    SDL_Init(SDL_INIT_VIDEO);

    // Create a window
    SDL_Window* window = SDL_CreateWindow("Shape Moving Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);

    // Create a renderer for drawing
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_Rect rectangle = { 50, 50, 100, 100 };
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Red color

    bool quit = false;
    SDL_Event event;

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
            else if (event.type == SDL_KEYDOWN) {
                // Move the rectangle based on arrow key input
                switch (event.key.keysym.sym) {
                    case SDLK_UP:
                        rectangle.y -= 10;
                        break;
                    case SDLK_DOWN:
                        rectangle.y += 10;
                        break;
                    case SDLK_LEFT:
                        rectangle.x -= 10;
                        break;
                    case SDLK_RIGHT:
                        rectangle.x += 10;
                        break;
                }
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Clear the screen (black color)
        SDL_RenderClear(renderer);

        // Draw the rectangle
        SDL_RenderFillRect(renderer, &rectangle);

        // Update the window
        SDL_RenderPresent(renderer);
    }

    // Clean up and exit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
