#include"DocGia.h"

char* ToLower(char s[50])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 65 && s[i] <= 97)
		{
			s[i] += 32;
		}
	}
	return s;
}

bool Contain(char origin[], char keyword[])
{
	char* pch = strstr(origin, keyword);
	if (pch)
	{
		return true;
	}
	return false;
}

char *ChiTietDocGiaTheoMa(char dsDocGia[][9][50], int n, char ma[50])
{
	for (int i = 0; i < n; i++)
	{
		char* origin = ToLower(dsDocGia[i][0]);
		char* keyword = ToLower(ma);
		if (Contain(dsDocGia[i][0], ma))
		{
			return dsDocGia[i][0];
		}
	}
	return NULL;
}

int ChiTietDocGia(char docGia[9][50])
{
	printf("Ma: ");
	printf("%s", docGia[0]);
	printf("Ten: ");
	printf("%s", docGia[1]);
	printf("CMND: ");
	printf("%s", docGia[2]);
	printf("Ngay sinh: ");
	printf("%s", docGia[3]);
	printf("Gioi tinh: ");
	printf("%s", docGia[4]);
	printf("Email: ");
	printf("%s", docGia[5]);
	printf("Dia chi: ");
	printf("%s", docGia[6]);
	printf("Ngay lap the: ");
	printf("%s", docGia[7]);
	printf("Ngay het han the: ");
	printf("%s", docGia[8]);

	return 0;
}

int DanhSachDocGia(char dsDocGia[][9][50], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Doc gia thu %d: \n", i + 1);
		ChiTietDocGia(dsDocGia[i]);
		printf("\n");
	}
	return 0;
}

int ThemDocGia(char dsDocGia[][9][50], int &n) {
	getchar();
	printf("Nhap ma doc gia: ");
	fgets(dsDocGia[n][0], sizeof dsDocGia[n][0], stdin);
	printf("Nhap ten doc gia: ");
	fgets(dsDocGia[n][1], sizeof dsDocGia[n][1], stdin);
	printf("Nhap CMND doc gia: ");
	fgets(dsDocGia[n][2], sizeof dsDocGia[n][2], stdin);
	printf("Nhap ngay sinh doc gia: ");
	fgets(dsDocGia[n][3], sizeof dsDocGia[n][3], stdin);
	printf("Nhap gioi tinh doc gia: ");
	fgets(dsDocGia[n][4], sizeof dsDocGia[n][4], stdin);
	printf("Nhap email doc gia: ");
	fgets(dsDocGia[n][5], sizeof dsDocGia[n][5], stdin);
	printf("Nhap dia chi doc gia: ");
	fgets(dsDocGia[n][6], sizeof dsDocGia[n][6], stdin);
	printf("Nhap ngay lap the doc gia: ");
	fgets(dsDocGia[n][7], sizeof dsDocGia[n][7], stdin);
	printf("Nhap ngay het han the doc gia: ");
	fgets(dsDocGia[n][8], sizeof dsDocGia[n][8], stdin);

	n++;

	return 0;
}

int ChinhSuaDocGia(char dsDocGia[][9][50], int viTri)
{
	printf("Nhap ma doc gia: ");
	fgets(dsDocGia[viTri][0], sizeof dsDocGia[viTri][0], stdin);
	printf("Nhap ten doc gia: ");
	fgets(dsDocGia[viTri][1], sizeof dsDocGia[viTri][1], stdin);
	printf("Nhap CMND doc gia: ");
	fgets(dsDocGia[viTri][2], sizeof dsDocGia[viTri][2], stdin);
	printf("Nhap ngay sinh doc gia: ");
	fgets(dsDocGia[viTri][3], sizeof dsDocGia[viTri][3], stdin);
	printf("Nhap gioi tinh doc gia: ");
	fgets(dsDocGia[viTri][4], sizeof dsDocGia[viTri][4], stdin);
	printf("Nhap email doc gia: ");
	fgets(dsDocGia[viTri][5], sizeof dsDocGia[viTri][5], stdin);
	printf("Nhap dia chi doc gia: ");
	fgets(dsDocGia[viTri][6], sizeof dsDocGia[viTri][6], stdin);
	printf("Nhap ngay lap the doc gia: ");
	fgets(dsDocGia[viTri][7], sizeof dsDocGia[viTri][7], stdin);
	printf("Nhap ngay het han the doc gia: ");
	fgets(dsDocGia[viTri][8], sizeof dsDocGia[viTri][8], stdin);

	return 0;
}