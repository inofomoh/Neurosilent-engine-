#pragma once
#include "../Engine/GameEngine.h"
#include <iostream>

class NeuroSilentGame {
    GameEngine* engine;
    int health = 100;
    int sanity = 100;

public:
    NeuroSilentGame(GameEngine* eng) : engine(eng) {}

    void Run() {
        std::cout << "\n🌫️ Welcome to Lagos (Scene 1)\n";
        std::cout << "🔥 The city burns behind you...\n";
        std::cout << "👣 You step into the fog.\n";

        NextScene();
    }

    void NextScene() {
        std::cout << "\n➡️ Transitioning to Highway...\n";
        std::cout << "🚗 You're driving... The fog grows stronger.\n";
        sanity -= 30;
        ShowStatus();

        std::cout << "\n🕯️ Entering Ibadan – the Nightmare Zone.\n";
        health -= 20;
        sanity -= 40;
        ShowStatus();

        if (health <= 0 || sanity <= 0) {
            std::cout << "\n💀 You collapsed in the fog. GAME OVER.\n";
        } else {
            std::cout << "\n🏆 You reached the final billboard: “FORGIVE YOURSELF.”\n";
            std::cout << "🎬 ENDING UNLOCKED.\n";
        }
    }

    void ShowStatus() {
        std::cout << "\n❤️ Health: " << health << "   🧠 Sanity: " << sanity << "\n";
    }
};