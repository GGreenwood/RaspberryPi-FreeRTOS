#ifndef _VIDEO_H_
#define _VIDEO_H_

void initFB();
void drawChar(unsigned char c, int x, int y, int color);
void drawString(const char* str, int x, int y, int color);
void drawPixel(unsigned int x, unsigned int y, int color);
void drawRect(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2, int color);
void videotest();

#endif
