#include<cstdio>
#include<cstdlib>
#include<ctime>

int main()
{
	int a[5];//a 5�� ����
	int i;//i�� �ۿ��� �����ؾ� for�� �� ���� ���밡��
	
	for (i = 0; i < 5; i++)
	{
		srand(time(NULL) * i);//������ ��Ģ ���ֱ�
		srand(time(NULL) + rand() * i);//���ึ�� �ٸ� ����
		a[i] = rand()%100;
	}

	for (i = 1; i < 5; i++)//�迭 �Լ�
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