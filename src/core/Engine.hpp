#ifndef ENGINE_ENGINE_HPP
#define ENGINE_ENGINE_HPP

#include <SDL.h>
#include "Object_2d.hpp"
#include "RigidBody.hpp"
#include <string>
#include <vector>
#include "ScreenText.hpp"
#include "ScreenMenu.hpp"

namespace my_engine{
    class Engine{
        friend class RigidBody;
    public:
        Engine();

        explicit Engine(std::string md);
        ~Engine();
        void init();
        void set_window_options(int x_pos, int y_pos, int width, int height, const char title[100], Uint32 flags);
        void set_renderer_options(Uint32 flags);
        void clear_renderer();
        void draw_2d_object(Object_2d object2d, float scale);
        void draw_2d_object(RigidBody rb, float scale);
        void draw_objects(std::vector<RigidBody *> &objects);
        void render_frame();
        void render_text(Text text, vector2i pos);

        void draw_widget(ScreenWidget widget);

        void draw_widget(Button button);

    private:
        SDL_Renderer *renderer;
        SDL_Window *window;
        bool MODE;
    };
}
#endif //ENGINE_ENGINE_HPP
