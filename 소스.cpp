#include<cstdio>
#include<cstdlib>
#include<ctime>

int main()
{
	int a[5];//a 5개 선언
	int i;//i를 밖에서 선언해야 for문 두 개에 적용가능
	
	for (i = 0; i < 5; i++)
	{
		srand(time(NULL) * i);//난수의 규칙 없애기
		srand(time(NULL) + rand() * i);//시행마다 다른 난수
		a[i] = rand()%100;
	}

	for (i = 1; i < 5; i++)//배열 함수
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] < a[j])
			{
				int b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}

	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	return 0;
}