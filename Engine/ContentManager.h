//
// Created by kgbcomrade on 4/23/20.
//

#ifndef VGS_CONTENTMANAGER_H
#define VGS_CONTENTMANAGER_H

#include <map>
#include <SFML/Graphics.hpp>

using namespace std;


bool contentManagerLoadTexture(char *key, char *path);
sf::Texture * contentManagerGetTexture(char *key);



#endif //VGS_CONTENTMANAGER_H
