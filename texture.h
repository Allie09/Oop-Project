// Visit http://lazyfoo.net/tutorials/SDL/index.php
#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL.h>
#include <string>

// Forward declarations
class Font;

//Texture wrapper class
class Texture {
public:
    Texture();
    ~Texture();
    bool loadFromFile( const std::string& path );
    bool loadFromRenderedText(const std::string& textureText, Font& f, SDL_Color textColor );
    void free();
    void render( int x, int y, SDL_Rect* clip = nullptr, double angle = 0.0, SDL_Point* center = nullptr, SDL_RendererFlip flip = SDL_FLIP_NONE );
    double  getWidth() const {return mWidth; }
    double getHeight() const {return mHeight;}

private:
    SDL_Texture* mTexture;
    double mWidth = 0;
    double mHeight = 0;
};

#endif // TEXTURE_H
