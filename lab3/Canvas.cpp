#include "Canvas.hpp"
#include <math.h>
#include <iostream>

int distanceBetween(int x1, int y1, int x2, int y2){
    return int(sqrt(
        (x1 - x2) * (x1 - x2) +
        (y1 - y2) * (y1 - y2)
    ));
}

bool isPointOnLine(int a, int b, int x1, int y1, int x2, int y2){
    
    return (y1 - b == int(float(y1 - y2) / float(x1 - x2)) * (x1 - a));
}

Canvas::Canvas(int thisWidth, int thisHeight){
    
    width = thisWidth; height = thisHeight;
    
    canvas = new char*[height + 2];
    
    for(int i = 0; i <= height + 1; i++){
        canvas[i] = new char[width + 2];
        
        for(int j = 0; j <= width + 1; j++)
            
            if(i == 0 || i == height + 1)
                canvas[i][j] = '-';
            else if(j == 0 || j == width + 1)
                canvas[i][j] = '|';
            else
                canvas[i][j] = ' ';
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch){
    
    for(int i = 1; i <= height; i++)
        for(int j = 1; j <= width; j++)
            if(distanceBetween(x, y, i, j) == ray)
                canvas[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch){
    
    for(int i = 1; i <= height; i++)
        for(int j = 1; j <= width; j++)
            if(distanceBetween(x, y, i, j) <= ray)
                canvas[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch){
    
    for(int i = left; i <= right; i++)
        canvas[top][i] = canvas[bottom][i] = ch;
    
    for(int i = top; i <= bottom; i++)
        canvas[i][left] = canvas[i][right] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch){
    
    for(int i = top; i <= bottom; i++)
        for(int j = left; j <= right; j++)
            canvas[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch){
    canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch){
    for(int i = 1; i <= height; i++)
        for(int j = 1; j <= width; j++)
            if(isPointOnLine(i, j, x1, y1, x2, y2))
                canvas[i][j] = ch;
}

void Canvas::Print(){
    for(int i = 0; i <= height + 1; i++){
        for(int j = 0; j <= width + 1; j++)
            if(i == 0 || i == height + 1)
                std::cout << '-';
            else if(j == 0 || j == width + 1)
                std::cout << '|';
            else
                std::cout << canvas[i][j];
        
        std::cout << '\n';
    }
}

void Canvas::Clear(){
    for(int i = 0; i <= height + 1; i++){
        canvas[i] = new char[width + 2];
        
        for(int j = 0; j <= width + 1; j++)
            
            if(i == 0 || i == height + 1)
                canvas[i][j] = '-';
            else if(j == 0 || j == width + 1)
                canvas[i][j] = '|';
            else
                canvas[i][j] = ' ';
    }
}
