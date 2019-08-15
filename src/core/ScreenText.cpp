#include "ScreenText.hpp"

Text::Text() {
    name = "";
    size = 0;
    color = {255, 255, 255};
    surface = nullptr;
}

Text::Text(const char *name_of_font, int s, SDL_Color c, const char *text) {
    name = name_of_font;
    size = s;
    color = c;
    FONT = TTF_OpenFont(name.c_str(), size);
    surface = TTF_RenderText_Solid(FONT, text, color);
    TTF_CloseFont(FONT);
}

Text::~Text() = default;

SDL_Surface *Text::GetSurface() {
    return surface;
}

SDL_Texture *Text::GetTexture(SDL_Renderer *ren) {
    return SDL_CreateTextureFromSurface(ren, surface);
}

void Text::EditText(const char *text) {
    FONT = TTF_OpenFont(name.c_str(), size);
    surface = TTF_RenderText_Solid(FONT, text, color);
    TTF_CloseFont(FONT);
}