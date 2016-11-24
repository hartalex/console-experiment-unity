#include <terrainobject.h>
#ifndef GRAVESTONE_H
#define GRAVESTONE_H

const char CHAR_GRAVESTONE = '#'; //"\u03A9\x00";//35;
const int TERRAIN_GRAVESTONE = 2;

class Gravestone : public TerrainObject {
    static char const * names[];
    static char const * conversations[];
  public:
    Gravestone(unsigned int initialPosX, unsigned int initialPosY);
    virtual ~Gravestone();
    virtual char const * getName();
    virtual char const * getConversation();
};

#endif
