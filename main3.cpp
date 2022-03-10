#include<iostream>
#include<SDL2/SDL.h>
#undef main;
int main(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0)
    {
        std::cout<<"unable to initialize SDL "<<SDL_GetError();
        return -1;
    }
    SDL_Window* window=NULL;
    window=SDL_CreateWindow("Stdio.vn - SDL",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1200,500,SDL_WINDOW_SHOWN);
    if(window==NULL)
    {
        std::cout<<"Could not Create Window "<<SDL_GetError();
        return -1;
    }
    SDL_Delay(5000);
    SDL_DestroyWindow(window);
    SDL_Quit;
    return 0;
}