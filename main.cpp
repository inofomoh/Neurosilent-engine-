#include <iostream>
#include "Engine/GameEngine.h"
#include "Game/NeuroSilentGame.h"

int main() {
    GameEngine engine;
    engine.Init("NeuroSilent: Nightmare Road");

    NeuroSilentGame game(&engine);
    game.Run();

    engine.Shutdown();
    return 0;
}