#pragma once
#include <string>

class GameEngine {
public:
    void Init(const std::string& title) {
        std::cout << "🚨 Loading " << title << "...
";
    }

    void Shutdown() {
        std::cout << "\n🔚 Shutting down Neuroforge Engine.\n";
    }
};