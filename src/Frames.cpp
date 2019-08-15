#include <iostream>
#include "src/Frames.h"
using namespace std; 
void Window::Set_Init_Window()
{
    int i,j;
    for (int i=0;i<25;i++)
    {
        for(int j=0;j<50;j++)
        {
            if(i==0||i==24)
            {
                Window_pixel[i][j]='-';
            }
            else
            {
                if(j==0|j==49)
                  Window_pixel[i][j]='|';  
                  else
                      Window_pixel[i][j]=' ';
            }
        }
    }
}
void Window::Print_Window(void)
{
    int i,j;
    for (int i=0;i<25;i++)
    {
        for(int j=0;j<50;j++)
        {
            cout<<Window_pixel[i][j];
        }
        cout<<'\n';
    }
}
void Window::Set_element(int x,int y,char c)
{
    Window_pixel[x][y]=c;
}
void Window::Set_Tilte(char* c)
{
    int i=2;
   
    while (*c!='\0')
    {
       Window_pixel[1][i]=*c;
i++;
c++; 
    }
}
void Window::Set_Line(int x,int y,const char*c)
{
    int i=x,j=y;
    while(*c!='\0')
    {
        if(i>24)
            break;
            else
            {
              if(j>49)
              {
                j=0;
                i++;
              }
        }
        Window_pixel[i][j]=*c;
        j++;
        c++;
    }
}
void Window::Flush(void)
{
   int i,j;
    for (int i=1;i<24;i++)
    {
        for(int j=1;j<49;j++)
        {
            Window_pixel[i][j]=' ';
        }
    } 
}
void Draw_HangMan(Window* frame,int Step)
{
    int i=4,j=4;
  switch(Step)
  {
      case 0:
      for(int i=4;i<10;i++)
      {
          for(int j=4;j<10;j++)
          {
              frame->Set_element(i,j,' ');
          }
      }
      break;
      case 1:
      for(int i=4;i<10;i++)
      {
          for(int j=4;j<10;j++)
          {
              if(j==4)
              {
               frame->Set_element(i,j,'|');
              }
              if(i==9)
                frame->Set_element(i,j,'-');  
              
          }
      }
      //frame->Set_element(8,5,'\\');
      break;
      case 2:
      for(int i=4;i<10;i++)
      {
          for(int j=4;j<10;j++)
          {
              if(j==4)
              {
               frame->Set_element(i,j,'|');
              }
              if(i==9)
                frame->Set_element(i,j,'-');
if ((i==4)&&(j<8))
 frame->Set_element(i,j,'_');
              
          }
      }
      //frame->Set_element(8,5,'\\');
      break;
   case 3:
Draw_HangMan(frame,2);  
frame->Set_element(5,7,'|');
break;
case 4:
Draw_HangMan(frame,3); 
frame->Set_element(6,7,'O');
 break;
 case 5:
Draw_HangMan(frame,4); 
frame->Set_element(7,7,'|');
 break;
 case 6:
Draw_HangMan(frame,5);
frame->Set_element(7,6,'\/');
break;
case 7:
Draw_HangMan(frame,6);
frame->Set_element(7,8,'\\');
break;
case 8:
Draw_HangMan(frame,7);
frame->Set_element(8,6,'\/');
break;
case 9:
Draw_HangMan(frame,8);
frame->Set_element(8,8,'\\');
  }  
}