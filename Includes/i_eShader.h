/*
      *This file belongs to QtNetmapper*
          *File: i_eShader.h*
*/

#ifndef I_ESHADER_H
#define I_ESHADER_h

#define PIXEL_COLOR_RED 255
#define PIXEL_COLOR_BLUE 200
#define PIXEL_COLOR_GREEN 150     

#define __OPAQUE__ 000x000

typedef struct i_eShader{

//shader name return to i_eShader structure
const char * i_eShadername(i_eShader *) const;

/*shader file type*/
enum i_eSFType{
     i_ePng = 0,
     i_eJpg = 1,
     i_eTga = 2,
     i_eDds = 3,
     i_eBmp = 4//not recommended
}

static int iPixelShaderBits = 32;//bits for pixel shader
float iPixelsResolution = 64;//resolution of pixels for shader

double pR;//r
double pG;//b
double pB;//g

void i_eShaderFile(i_eShader * shaderftype, const char * iFilename, static int pBits, float pResolution);

     bool i_eFlushShader(i_eShader * shader, const char iShaderName);

};

#endif
