//
// Created by kgbcomrade on 4/23/20.
//

#include "Entity.h"

Entity::Entity(Vector2f position, Texture *texture) {
    this->position = position;
    this->sprite = new Sprite(*texture);

}

Sprite Entity::getSprite() {
    return Sprite();
}

void Entity::update(float dt) {
    sprite->setPosition(position);
}
