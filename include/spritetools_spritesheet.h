/*
* Author: BtheDestroyer
* SpriteTools is an open source 3DS Homebrew Library which can be found here:
* https://github.com/BtheDestroyer/SpriteTools
*/

#ifndef __spritetools_spritesheet_h

#define __spritetools_spritesheet_h

/* For now, this depends on sf2d. */
/* In the future, it will be rewritten to be fully independant */
/* This means that you can technically use sf2d stuff and it'll work, but */
/* only using spritetools functions and types means you will be able to */
/* more easily and safely update */
#define st_spritesheet sf2d_texture

/********************************\
|*     Spritesheet Typedefs     *|
\********************************/
/* image structure */
typedef struct {
  unsigned int width;
  unsigned int height;
  unsigned int bytes_per_pixel;
  unsigned char pixel_data[];
} st_image;

/*********************************\
|*     Spritesheet Functions     *|
\*********************************/
/* Inits spritesheets */
/* Returns 1 on success and 0 on failure */
int ST_SpritesheetInit(void);

/* Load spritesheet from image */
/* Takes image */
/* Returns pointer to st_spritesheet */
st_spritesheet *ST_SpritesheetCreateSpritesheet(st_image image);

/* Free spritesheet */
/* Takes st_spritesheet */
void ST_SpritesheetFreeSpritesheet(st_spritesheet *spritesheet);

#endif