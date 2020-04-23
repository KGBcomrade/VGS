#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_student->update(dtAsSeconds);
    for(int i = 0; i < entities.size(); i++) {
        entities[i]->update(dtAsSeconds);
    }
}