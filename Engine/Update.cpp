#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_student->update(dtAsSeconds);
    for(auto & entity : entities) {
        entity->update(dtAsSeconds);
    }
}


