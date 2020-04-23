//
// Created by kgbcomrade on 4/23/20.
//

#include "ContentManager.h"

map<char *, sf::Texture*> textureMap;
bool contentManagerLoadTexture(char *key, char *path) {
    auto tex = new sf::Texture;
    bool res = tex->loadFromFile(path);
    textureMap[key] = tex;
    return res;
}

sf::Texture *contentManagerGetTexture(char *key) {
    return textureMap[key];
}
