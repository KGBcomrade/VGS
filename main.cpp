#include "Engine/Engine.h"
#include "Engine/ContentManager.h"

int main() {
    contentManagerLoadTexture("player", "bob.png");
    contentManagerLoadTexture("background", "nobob.png");
    contentManagerLoadTexture("prep", "prep.png");

    Engine engine;
	engine.start();
	return 0;
}