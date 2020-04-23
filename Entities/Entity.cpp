//
// Created by kgbcomrade on 4/23/20.
//

#include "Entity.h"

Entity::Entity(Vector2f position, Texture *texture) {
    this->position = position;
    this->sprite = new Sprite(*texture);
    this->sprite->setPosition(position);
}

Sprite Entity::getSprite() {
    return *sprite;
}

void Entity::update(float dt) {
    sprite->setPosition(position);
}
