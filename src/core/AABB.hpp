#ifndef ENGINE_AABB_HPP
#define ENGINE_AABB_HPP

#include "RigidBody.hpp"
#include "Player.hpp"
#include "vector.hpp"

using namespace my_engine;
class AABB {
private:
    vector2i min;
    vector2i max;
public:
    AABB();
    bool AABBvsAABB(AABB object, int xvelocity, int yvelocity);
    AABB& operator = (RigidBody rigidBody);
    AABB& operator = (Player player);
};


#endif //ENGINE_AABB_HPP