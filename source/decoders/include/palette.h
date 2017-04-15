//
// Created by Lectem on 06/11/2016.
//

#pragma once

#include <cstdint>
#include <vector>
namespace WorldStone
{
/**
 * @brief Helper to load a Diablo 2 palette (.pal format)
 */
struct Palette
{
    struct Color
    {
        uint8_t r, g, b;
    };

    static const int colorCount = 256;

    void Decode(const char* filename);
    std::vector<Color> colors;
    bool               isValid() const { return _isValid; }

private:
    bool _isValid = false;
};
} // namespace WorldStone