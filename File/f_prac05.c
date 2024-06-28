#include<stdio.h>
#define MapNum 3 //マップの数
#define W 10 //yoko(10)
#define H 5 //tate(5)
typedef struct
{
	int m_map[H][W];
}Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map MapData;
	int select;
	char* MapFileName[MapNum] = { "Map0.txt","Map1.txt","Map2.txt" };
	printf("マップ?(0,1,2);");
	scanf("%d", &select);
	if (select >= 0 && select <= 2)
	{
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
	else
	{
		printf("Error\n");
	}
}

void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++);
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m)
{
	int i, j;
	for (i = 0; i < H; i++)
	{
		for (j = 0; j < W; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("O");
			}
			else
			{
				printf(" ");
			}
			printf("\n");
		}
	}
}