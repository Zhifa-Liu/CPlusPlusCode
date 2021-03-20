#include <iostream>
#include <string>
#include <stack>
#include <windows.h> //windows����Ҫ�޸�Ϊwindow.h
#include "step.h"
using namespace std;

void solution(int** matrix, int width, int height, int x, int y);   //�ṩ�Թ��������㣬�����������Ͷ�����ʾ
void outputPath(stack<step> &path);     //����ջ��ʾ��·����ԭ���ַ������
bool hasNext(const step &s);            //�жϵ�ǰ���Ƿ�����һ�������
coordinate next(step &s);               //�õ���ǰ������һ����������
bool available(int **matrix,const bool *visited, int width, int high, const coordinate &c);    //��һ�������Ƿ�Ϸ�
step goTo(const step& now, const coordinate &next);     //�ߵ���һ�����꣬�����µĲ���

inline bool success(int, int, int, int, int, int);      //�ж��Ƿ�ﵽ�յ�

void show(int **matrix, int width, int height, const coordinate &c);    //����ͼ�λ�չʾ�Թ�

int main() {
	system("cls");    //windows����Ҫ�޸�Ϊcls

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
 * �Թ�����������
 *
 * @param matrix �Թ�
 * @param width �Թ����
 * @param height �Թ��߶�
 * @param x ��������
 * @param y ���������
 */
void solution(int **matrix, int width, int height, int x, int y) {
	bool *visited = new bool[width * height];   //�����Թ��е�λ�ķ������
	for (int i = 0; i < width * height; i++) visited[i] = false;
	visited[x * width + y] = true;              //�������
	stack<step> path;                           //�����߳��Թ������в���
	coordinate sc(x, y);
	step start{ 0, sc };
	path.push(start);                           //�����ջ
	show(matrix, width, height, sc);
	while (true) {
		step &sr = path.top();                  //���²���
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
 * �����յ�·��ջת��Ϊ�ַ�����ʾ
 *
 * @param path ·��ջ
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
	case 0:     //��
		c = coordinate(s.c.x - 1, s.c.y);
		break;
	case 1:     //����
		c = coordinate(s.c.x - 1, s.c.y + 1);
		break;
	case 2:     //��
		c = coordinate(s.c.x, s.c.y + 1);
		break;
	case 3:     //����
		c = coordinate(s.c.x + 1, s.c.y + 1);
		break;
	case 4:     //��
		c = coordinate(s.c.x + 1, s.c.y);
		break;
	case 5:     //����
		c = coordinate(s.c.x + 1, s.c.y - 1);
		break;
	case 6:     //��
		c = coordinate(s.c.x, s.c.y - 1);
		break;
	default:    //����
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
	Sleep(500);           //windows����Ҫ�޸�
	system("cls");    //windows����Ҫ�޸�Ϊcls
	for (int i = 0; i < width; ++i) {
		for (int j = 0; j < height; ++j) {
			if (matrix[i][j] == 1) cout << '#';
			else if (c.x == i && c.y == j) cout << '*';
			else cout << ' ';
		}
		cout << endl;
	}
}