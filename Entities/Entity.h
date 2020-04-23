//
// Created by kgbcomrade on 4/23/20.
//

#ifndef VGS_ENTITY_H
#define VGS_ENTITY_H

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

class Entity {
protected:
    Vector2f position;
    Sprite *sprite;
public:
    Entity(Vector2f position, Texture *texture);
    ~Entity() = default;
    Sprite getSprite();

    virtual void update(float dt) = 0;

};


#endif //VGS_ENTITY_H
