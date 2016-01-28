#include <cstdio>

int arr[10], odd, even;//odd가 홀수, even이 짝수

void input();
void solve();
int check(int a);

int main()
{
	input();
	solve();
	printf("%d\n", odd+even);
}

void input()
{
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void solve()
{
	for(int i=0; i < 7; i++)
	{
		if(check(arr[i]) == 1 && arr[i] > odd)//홀수라면?
		{
			odd = arr[i];
		}
		else if(check(arr[i]) == 2 && arr[i] > even)//짝수라면
		{
			even = arr[i];
		}
	}
}

int check(int a)
{
	if (a%2 == 0)
	{
		return 2; //짝수일 때
	}
	else
		return 1; //홀수일 때
}