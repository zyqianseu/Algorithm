#include<iostream> //包含输入输出头文件
#include<cmath>
using namespace std; //指定名字空间
int main()
{
	double a[100][100]; //定义二维数组，大小100*100
	int M; // 行数
	cin >> M;
	int b[100];
	int i, j, k;
	for (k = 0; k < M; k++)
	{
		cin >> b[k];//第一行的元素数
		int i = 0, j = 0; //循环变量，并进行初始化
		for (i = 0; i < b[k]; i++) //输入N个元素
			cin >> a[k][i];
			for (j = 0; j < b[k] - 1; j++)
			{
				if (a[k][j] > a[k][j + 1]) { //比较相邻的两个元素
					int tmp; //临时变量
					tmp = a[k][j]; //交换
					a[k][j] = a[k][j + 1];
					a[k][j + 1] = tmp;
				}
			}
	}
	for (k = 0; k < M; k++)
	{
		for (i = 0; i < b[k]; i++)
		{ //使用循环，输出N个元素
			cout << a[k][i] << " "; //输出a[i], 后加空格，不换行
		}
		cout << endl; //所有元素输出完之后才换行
	}
	return 0; //函数返回
}