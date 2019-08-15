#ifndef _FRAMES_H_
#define _FRAMES_H_
class Window
{
private:
    char Window_pixel[25][50];
public:
char Title[50];

void Set_Init_Window(void);
void Print_Window(void);
void Set_element(int x,int y,char c);
void Set_Tilte(char* c);
void Set_Line(int x,int y,const char*c);
void Flush(void);
    
};
void Draw_HangMan(Window* frame,int Step);
#endif