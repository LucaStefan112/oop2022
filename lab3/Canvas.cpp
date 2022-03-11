#include "Canvas.h"
#include <math.h>
#include <iostream>

float distanceBetween(float x1, float y1, float x2, float y2) {
	float distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	return distance;
}

bool isPointOnLine(float x, float y, float a1, float b1, float a2, float b2) {
	float slope = (b2 - b1) / (a2 - a1);

	return (a1 - x) / (b1 - y) == slope;
}

Canvas::Canvas(int width, int height) {
	this->height = height;
	this->width = width;

	this->canvas = new char*[height];

	for (int i = 0; i < width; i++)
		this->canvas[i] = new char[width];

	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			this->canvas[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			if ((int)distanceBetween(i, j, x, y) == ray)
				this->canvas[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			if ((int)distanceBetween(i, j, x, y) <= ray)
				this->canvas[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	for (int i = top; i <= bottom; i++)
		this->canvas[i][left] = this->canvas[i][right] = ch;
	for(int j = left; j <= right; j++)
		this->canvas[top][j] = this->canvas[bottom][j] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	for (int i = top; i <= bottom; i++)
		for (int j = left; j <= right; j++)
			this->canvas[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch) {
	this->canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			if (isPointOnLine(i, j, x1, y1, x2, y2))
				this->canvas[i][j] = ch;
}

void Canvas::Print() {
	for (int i = 0; i < this->height; i++) {
		for (int j = 0; j < this->width; j++)
			std::cout << this->canvas[i][j];

		std::cout << '\n';
	}
}

void Canvas::Clear() {
	for (int i = 0; i < this->height; i++)
		for (int j = 0; j < this->width; j++)
			this->canvas[i][j]; ' ';
}