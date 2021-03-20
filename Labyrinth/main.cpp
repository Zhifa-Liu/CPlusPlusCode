#include <iostream>
#include <string>
#include <stack>
#include <windows.h> //windows下需要修改为window.h
#include "step.h"
using namespace std;

void solution(int** matrix, int width, int height, int x, int y);   //提供迷宫矩阵和起点，输出解决方案和动画演示
void outputPath(stack<step> &path);     //将用栈表示的路径还原成字符串输出
bool hasNext(const step &s);            //判断当前步是否还有下一坐标可走
coordinate next(step &s);               //得到当前步的下一个可走坐标
bool available(int **matrix,const bool *visited, int width, int high, const coordinate &c);    //下一个坐标是否合法
step goTo(const step& now, const coordinate &next);     //走到下一个坐标，返回新的步骤

inline bool success(int, int, int, int, int, int);      //判断是否达到终点

void show(int **matrix, int width, int height, const coordinate &c);    //用于图形化展示迷宫

int main() {
	system("cls");    //windows下需要修改为cls

	int width, height;
	cout << "width> ";
	cin >> width;
	cout << "height> ";
	cin >> height;
	int** matrix = new int*[height];
	for (int i = 0; i < height; ++i) matrix[i] = new int[width];
	for (int i = 0; i < height; ++i) {
		cout << "line " << i << ": ";
		for (int j = 0; j < width; ++j) cin >> matrix[i][j];
	}

	int x, y;
	cout << "source x: ";
	cin >> x;
	cout << "source y: ";
	cin >> y;

	solution(matrix, width, height, x, y);
	
	for (int i = 0; i < height; ++i) delete[] matrix[i];
	delete[] matrix;

	system("pause");
	return 0;
}

/**
 * 迷宫问题解决方案
 *
 * @param matrix 迷宫
 * @param width 迷宫宽度
 * @param height 迷宫高度
 * @param x 起点横坐标
 * @param y 起点纵坐标
 */
void solution(int **matrix, int width, int height, int x, int y) {
	bool *visited = new bool[width * height];   //保存迷宫中点位的访问情况
	for (int i = 0; i < width * height; i++) visited[i] = false;
	visited[x * width + y] = true;              //访问起点
	stack<step> path;                           //保存走出迷宫的所有步骤
	coordinate sc(x, y);
	step start{ 0, sc };
	path.push(start);                           //起点入栈
	show(matrix, width, height, sc);
	while (true) {
		step &sr = path.top();                  //最新步骤
		if (success(sr.c.x, sr.c.y, width, height, x, y)) break;
		if (hasNext(sr)) {
			coordinate c = next(sr);
			if (available(matrix, visited, width, height, c)) {
				visited[c.x * width + c.y] = true;
				path.push(goTo(sr, c));
				show(matrix, width, height, c);
			}
		}
		else {
			path.pop();
			show(matrix, width, height, path.top().c);
		}
		if (path.empty()) {
			cout << "can't find correct path";
			return;
		}
	}
	delete[] visited;
	outputPath(path);
}

/**
 * 将最终的路径栈转换为字符串表示
 *
 * @param path 路径栈
 */
void outputPath(stack<step> &path) {
	stack<step> recover;
	while (!path.empty()) {
		recover.push(path.top());
		path.pop();
	}
	while (!recover.empty()) {
		step s = recover.top();
		recover.pop();
		cout << " to <" << s.c.x << ", " << s.c.y << ">";
	}
}

bool hasNext(const step &s) {
	return s.to < 8;
}

coordinate next(step &s) {
	coordinate c;
	switch (s.to) {
	case 0:     //北
		c = coordinate(s.c.x - 1, s.c.y);
		break;
	case 1:     //东北
		c = coordinate(s.c.x - 1, s.c.y + 1);
		break;
	case 2:     //东
		c = coordinate(s.c.x, s.c.y + 1);
		break;
	case 3:     //东南
		c = coordinate(s.c.x + 1, s.c.y + 1);
		break;
	case 4:     //南
		c = coordinate(s.c.x + 1, s.c.y);
		break;
	case 5:     //西南
		c = coordinate(s.c.x + 1, s.c.y - 1);
		break;
	case 6:     //西
		c = coordinate(s.c.x, s.c.y - 1);
		break;
	default:    //西北
		c = coordinate(s.c.x - 1, s.c.y - 1);
	}
	s.to++;
	return c;
}

bool available(int **matrix, const bool *visited, int width, int high, const coordinate &c) {
	if (c.x < 0 || c.y < 0 || c.x > width - 1 || c.y > high - 1) return false;
	return !visited[c.x * width + c.y] && matrix[c.x][c.y] == 0;
}

step goTo(const step &now, const coordinate &next) {
	step s(0, next);
	return s;
}

bool success(int x, int y, int width, int high, int startX, int startY) {
	if (x == startX && y == startY) return false;
	return x == 0 || x == width - 1 || y == 0 || y == high - 1;
}

void show(int **matrix, int width, int height, const coordinate &c) {
	Sleep(500);           //windows下需要修改
	system("cls");    //windows下需要修改为cls
	for (int i = 0; i < width; ++i) {
		for (int j = 0; j < height; ++j) {
			if (matrix[i][j] == 1) cout << '#';
			else if (c.x == i && c.y == j) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}
}