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
    ~Entity();
    Sprite getSprite();

    virtual void update(float dt);

};


#endif //VGS_ENTITY_H
