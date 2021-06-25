#pragma once
/*----------library Default---------------*/
#include <Windows.h>
#include<string.h>
#include<ctype.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <vector>
using namespace std;
/*----------library User Define---------------*/
/*----------Funtion Console---------------*/
void Menu_batPhim(int Toado);
void HidePointer();
void ShowPointer();
void textcolor(int x);
void gotoxy(int x, int y);
void pain();
void FrameGioiThieu();
void GioiThieu();
void clrscr();
void Save();
void Khung_seach();
void END();
/*------------------*/
#pragma once
struct HoSo{
	char MaLop[25];
	char MaSV[25];
	char Hoten[50];
	char NgaySinh[25];
	float DiemTB;
};

struct HoTen
{
	char Ten[10],FullName[50];
};

struct Date
{
	char day[2], month[2], year[4];
};

struct TK_Class{
	int soluong = 1;
	char *MaLop;
};
struct TK_Point{
	int soluong = 1;
	float Point;
};


void Menu_ThemHS();
void  ThemMoi_Hs(char *FileName);
void Ghifile(char *FileName, vector<HoSo> HS);

/*----------Frames---------------*/
void KhungExit();
void checkExit(int *Err1, char *look);
void XoaCheckExit();
/*----------Enter---------------*/
void EnterChuoi(char *xau, int i, int ox, int oy, int *Err);

void EnterMaLop(char *xau, int i, int ox, int oy, int *Err);
void EnterMaSV(char *xau, int i, int ox, int oy, int *Err);
void EnterHoTen(char *xau, int i, int ox, int oy, int *Err);
void EnterNgaySinh(char *xau, int i, int ox, int oy, int *Err);
void EnterDiem(char *xau, int i, int ox, int oy, int *Err);
void EnterNameFile(char *xau, int i, int ox, int oy, int *Err);
/*----------Function Support---------------*/
void TachNgay(char *xau, int *day, int *mount, int *year);
int KT_Date(int &day, int &month, int &year);
void ChangePSeach(float x, char A[]);

/*------------------*/
void ChuyenControUpDown(int *ToaDo, int Trang, int trangcuoi, int *Oy);
void ChuyenControLeftRight(int *ToaDoOx, int *Ox, int Oy);
void themhs();
void ChayChu(char *xau);
void Khung_checkFile(char *Xau);
void SettingDefaulNameFile(char *NameFile);
void Help();
int checkFile(char *Filename);
void GetNameDefault(char *NameFile);
void setting(char *NameFile);
void Menu();
void Menu_ThemHS();
void Menu_sx_DoiMau1(int ToaDo);
void Menu_sx_DoiMau2(char *s, int ToaDo);
void menu1();
void Menu_Search_DoiMau2(char *s, int ToaDo);
void Menu_Search_DoiMau1(int ToaDo);
/*----------main Th?ng Kê--------------*/
void menu1z();
void Menu_ThongKe_DoiMau2(int Toado);
/*------------------*/


/*----------Frames---------------*/
void Khung_PrintfTK(char *s);
void Ong_NganCach(int OY);
void Ong_DaiDuoi(int ChieuDai_duoi_min);
void Ong_ChieuRong(int Ong_RongMin);
void Khung_IN();
void ChuyenMau(int x);
void Menu_In_Down();
void dialogNull();
/*----------File---------------*/
void InFile(vector <HoSo> HS, char *Filename);
void DeleteSV(vector <HoSo> &HS, int ToaDo);
vector<HoSo>  input(char *FileName);
void UpdateFile(char *FileName, vector <HoSo > HS);
/*------------------------*/

void OutPut(vector <HoSo> HS, char *FileName, int n);
/*----------Tim Kiem---------------*/


/*----------Function Support---------------*/
void SaveFileSearch(vector <HoSo> HSTK, int z, char *FileTxt, char *FileWb);
int compare_Search(char *xau, char *look);
/*----------Search binary---------------*/
void NhiPhan_Malop(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void NhiPhan_MaSV(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void NhiPhan_HoTen(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void NhiPhan_NgaySinh(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void NhiPhan_DTB(vector <HoSo> HS, vector <HoSo> &HSTK, float look);

/*----------Search Tu?n T?---------------*/
void TuanTu_Malop(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void TuanTu_MaSV(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void TuanTu_HoTen(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void TuanTu_NgaySinh(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
void TuanTu_DTB(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);

/*----------Main Search---------------*/
void MainSearch(vector<HoSo> HS, char *FileName ,int n);
void TuanTu_MaSV(vector <HoSo> HS, vector <HoSo> &HSTK, char look[]);
/*----------sap xep---------------*/
/*----------Function Support---------------*/
void DaoChuoi(char s[], char temp[]);
void swapDate(vector <HoSo> &HS);
void swapDate2(vector <HoSo> &HS);
void ChangePoint(float x, char A[]);
int SoSanhChuoi(char *s1, char *s2);

/*----------Number Class---------------*/
void SX_Chon_MaLop(vector <HoSo>&HS, int n);
void SX_Chen_MaLop(vector <HoSo>&HS, int n);
void SX_NoiBot_MaLop(vector <HoSo>&HS, int n);
void SX_QuickSort_MaLop(vector <HoSo>&HS, int left, int right);
/*----------NumberID---------------*/
void SX_Chon_MaSV(vector <HoSo>&HS, int n);
void SX_Chen_MaSV(vector <HoSo>&HS, int n);
void SX_NoiBot_MaSV(vector <HoSo>&HS, int n);
void SX_QuickSort_MaSV(vector <HoSo>&HS, int left, int right);

/*----------Name---------------*/
void SX_Chon_HoTen(vector <HoSo>&HS, int n);
void SX_Chen_HoTen(vector <HoSo>&HS, int n);
void SX_NoiBot_HoTen(vector <HoSo>&HS, int n);
void SX_QuickSort_HoTen(vector <HoSo>&HS, int left, int right);
/*----------Birth Day---------------*/
void SX_Chon_NgaySinh(vector <HoSo>&HS, int n);
void SX_Chen_NgaySinh(vector <HoSo>&HS, int n);
void SX_NoiBot_NgaySinh(vector <HoSo>&HS, int n);
void SX_QuickSort_NgaySinh(vector <HoSo>&HS, int left, int right);
/*----------DTB---------------*/
void SX_Chon_DiemTB(vector <HoSo>&HS, int n);
void SX_Chen_DiemTB(vector <HoSo>&HS, int n);
void SX_NoiBot_DiemTB(vector <HoSo>&HS, int n);
void SX_QuickSort_DiemTB(vector <HoSo>&HS, int left, int right);
/*----------main Sort---------------*/
void MainSapxep(vector <HoSo> &HS, char *FileName);

/*---------thong ke---------------*/

/*----------Main Th?ng kê---------------*/
void Main_ThongKe(vector <HoSo> HS, char* FileName, int n);
/*----------S? Lu?ng SV theo Ði?m---------------*/
int SoSVGioi(vector <HoSo>HS, int n);
int SoSVKha(vector <HoSo>HS, int n);
int SoSVTB(vector <HoSo>HS, int n);
int SoSVYeu(vector <HoSo>HS, int n);
/*----------Bi?u d?---------------*/
void xuly_BieuDo(vector <HoSo>HS, int n);
void Khung_BieuDo(vector <HoSo>HS, int n);

///////////////////////////////////
long size = sizeof(HoSo);
void Menu_ThemHS()
{
	int a = 50;
	/***************************************/
	/*Nh?p Mã  L?p*/
	textcolor(192);
	gotoxy(a, 5);
	ChayChu("    Ma Lop:     ");

	gotoxy(a + 17, 5);
	textcolor(255);
	printf("                       ");

	/*Nh?p Mã  SV*/
	gotoxy(a, 7);
	textcolor(192);
	ChayChu("     MaSV:      ");

	gotoxy(a + 17, 7);
	textcolor(255);
	printf("                       ");

	/*Nh?p H?  Tên*/
	gotoxy(a, 9);
	textcolor(192);
	ChayChu("  Ho va Ten:    ");
	gotoxy(a + 17, 9);
	textcolor(255);
	printf("                       ");
	/*Nh?p Ngày Sinh*/
	gotoxy(a, 11);
	textcolor(192);
	ChayChu("   Ngay Sinh:   ");
	gotoxy(a + 17, 11);
	textcolor(255);
	printf("                       ");
	/*Nh?p Ði?m TB*/
	gotoxy(a, 13);
	textcolor(192);
	ChayChu("Diem Trung Binh:");
	gotoxy(a + 17, 13);
	textcolor(255);
	printf("                       ");
	textcolor(7);
}
void Ghifile(char *FileName, vector<HoSo> HS)
{
	HoSo SV;
	FILE *fp;
	fp = fopen(FileName, "a+b");
	for (int unsigned i = 0; i < HS.size(); i++)
	{
		fwrite(&HS[i], sizeof(SV), 1, fp);
	}
	fclose(fp);
}

void EnterNumberClass()
{

}
void  ThemMoi_Hs(char *FileName)
{
	vector<HoSo> HS;
	HoSo SV;
	int Dem = 1;
	int Err, c, a = 50;;
	do{
		gotoxy(a + 30, 3);
		printf("(Ban Dang Nhap Thong Tin HoSo: %d)", Dem);
		Menu_ThemHS();
		gotoxy(a, 5);
		fflush(stdin);

		/*Nh?p Mã  L?p*/
		textcolor(192);
		printf("    Ma Lop:     ");
		do{
			textcolor(249);
			EnterMaLop(SV.MaLop, 0, a + 18, 5, &Err);
			if (Err == -1){return;}
			if ((strlen(SV.MaLop) <= 0) || (strlen(SV.MaLop) > 15))
			{
				textcolor(14);
				gotoxy(a + 43, 5);
				if (strlen(SV.MaLop) <= 0) printf("ERRO ! Empty ");
				if (strlen(SV.MaLop) >= 15)printf("ERRO ! Full ");
				gotoxy(a + 17, 5);
				textcolor(255);
				printf("                       ");
			}
		} while ((strlen(SV.MaLop) <= 0) || (strlen(SV.MaLop) > 15));

		textcolor(7);
		gotoxy(90, 5);
		printf("                             ");

		fflush(stdin);
		/*Nh?p Mã  SV*/
		gotoxy(a, 7);
		textcolor(192);
		printf("     MaSV:     ");

		vector <HoSo> HSTK;
		vector<HoSo> HStemp;
		HStemp = input("DSSV.kBz");
		do
		{
			textcolor(249);
			EnterMaSV(SV.MaSV, 0,a + 18, 7, &Err);
			if (Err == -1){ return; }
			// X? lý Trùng
			HSTK.clear();
			TuanTu_MaSV(HStemp, HSTK, SV.MaSV);
			if (HSTK.size() >= 1){
				gotoxy(93, 7);
				textcolor(14);
				printf("ERRO ! Have exist ");
				gotoxy(a + 17, 7);
				textcolor(255);
				printf("                       ");
			}
			if (strlen(SV.MaSV) != 8)
			{
				gotoxy(93, 7);
				textcolor(14);
				printf("ERRO ! Enter 8 number ");
				gotoxy(a + 17, 7);
				textcolor(255);
				printf("                       ");
			}
		} while ((strlen(SV.MaSV) != 8) || HSTK.size() >= 1);
		HStemp.~vector();
		textcolor(7);
		gotoxy(90, 7);
		printf("                             ");

		/*Nh?p H? Và Tên*/
		gotoxy(a, 9);
		textcolor(192);
		printf("  Ho va Ten:    ");
		do
		{
			textcolor(249);
			EnterHoTen(SV.Hoten, 0, a + 18, 9, &Err);
			if (Err == -1){ return; }
			if (strlen(SV.Hoten) <= 0|| strlen(SV.Hoten) >= 30)
			{
				gotoxy(93, 9);
				textcolor(14);
				if (strlen(SV.Hoten) <= 0)printf("ERRO ! Empty ");
				if (strlen(SV.Hoten) >= 30)printf("ERRO ! Full ");
				gotoxy(a + 17, 9);
				textcolor(255);
				printf("                       ");
			}
		} while (strlen(SV.Hoten) <= 0 || strlen(SV.Hoten) >= 30);
		textcolor(7);
		gotoxy(90, 9);
		printf("                             ");
		textcolor(249);
		fflush(stdin);

		/*Nh?p Ngày Sinh*/
		gotoxy(a, 11);
		textcolor(192);
		printf("   Ngay Sinh:   ");
		int day = 0, month = 0, year = 0;
		Date Nhap;
		do{
			textcolor(249);
			gotoxy(a + 18, 11);
			EnterNgaySinh(SV.NgaySinh, 0, a + 18, 11, &Err);
			if (Err == -1){ return; }
			TachNgay(SV.NgaySinh, &day, &month, &year);
			if (KT_Date(day, month, year) == 0 || (strlen(SV.NgaySinh) != 10))
			{
				textcolor(14);
				gotoxy(a + 45, 11);
				printf("ERRO !");
				gotoxy(a + 17, 11);
				textcolor(255);
				printf("                       ");
			}
		} while ((KT_Date(day, month, year) == 0) || (strlen(SV.NgaySinh) != 10));
		textcolor(7);
		gotoxy(90, 11);
		printf("                             ");
		/*Nh?p Ði?m  TB*/
		gotoxy(a, 13);
		textcolor(192);
		printf("Diem Trung Binh:");
		char DTB[10];
		do
		{
			textcolor(249);
			EnterDiem(DTB, 0, a + 18, 13, &Err);
			if (Err == -1){ return; }
			SV.DiemTB = (float)atof(DTB);
			if (SV.DiemTB > 10.0 || SV.DiemTB <0.0)
			{
				textcolor(14);
				gotoxy(a + 45, 13);
				printf("ERRO !");
				gotoxy(a + 17, 13);
				textcolor(255);
				printf("                       ");
			}
			//DTB[5] = NULL;
		} while (SV.DiemTB >10.0 || SV.DiemTB < 0.0);
		HidePointer();
		textcolor(7);
		gotoxy(a + 45, 13);
		printf("                  ");
		////////////////////////////////////////////////////////////////////
		HS.push_back(SV);
		Ghifile(FileName, HS);
		HS.clear();
		///////////////////////////////////////////////////////////////////
		gotoxy(a, 15);
		HidePointer();
		printf("1.Nhap Tiep (Enter)\t2.Cancel(ESC)");
		c = getch();
		clrscr();
		ShowPointer();
		textcolor(7);
		Dem++;
	} while (c == 13);
	HidePointer();
}
#define Console_Dai 120
#define Console_Rong 28
void GetNameDefault(char *NameFile)
{
	FILE *f;
	f = fopen("keyFile.key", "r");
	if (f == NULL||feof(f))
	{
		strcpy(NameFile, "DSSV.kBz");
	}
	else
	{
		fgets(NameFile,100, f);	fclose(f);
	}
}
void SettingDefaulNameFile(char *NameFile)
{
	FrameGioiThieu();
	gotoxy(35, 1); textcolor(9); ChayChu("---------------------------------------------------");
	gotoxy(46, 5); textcolor(14); ChayChu("CHUONG TRINH QUAN LY HOC VIEN");
	gotoxy(50, 14); textcolor(12); ChayChu("Setting default File Name");
	FILE *f;
	checkFile(NameFile);
	f = fopen("keyFile.key", "w");
	fprintf(f, "%s", NameFile);
	fclose(f);
}

void SetRunKey()
{
	ShowPointer();
	int n, err;
	char Run[10];
	gotoxy(68, 11);
	printf("Enter value: ");
	EnterDiem(Run, 0, 85, 11, &err);
	if (err == -1)return;
	FILE *f;
	f = fopen("keyRun.key", "w");
	n = atoi(Run);
	fprintf(f, "%d",n);
	fclose(f);
	HidePointer();
}
void ChayChu(char *xau)
{
	int n;
	FILE *f;
	f = fopen("keyRun.key", "r");
	if (f == NULL){	n = 30;}
	else
	{
		char c = fgetc(f);
		if (feof(f))n = 30;
		else
		{
			rewind(f);
			fscanf(f, "%d", &n);
		}
		fclose(f);
	}
	for (int i = 0; i < strlen(xau); i++)
	{
		printf("%c", xau[i]);
		Sleep(n);
		if (_kbhit()) n = 0;
	}
	
}


void colorSetting(int toado)
{
	switch (toado)
	{
	case 11:
		gotoxy(48, 11); textcolor(14); printf("1. Set Run text");
		gotoxy(48, 13); textcolor(7); printf("2. set Name File Default");
		gotoxy(55, 15); textcolor(7); printf("Exit ");
		break;
	case 13:
		gotoxy(48, 11); textcolor(7); printf("1. Set Run text");
		gotoxy(48, 13); textcolor(14); printf("2. set Name File Default");
		gotoxy(55, 15); textcolor(7); printf("Exit ");
		break;
	case 15:
		gotoxy(48, 11); textcolor(7); printf("1. Set Run text");
		gotoxy(48, 13); textcolor(7); printf("2. set Name File Default");
		gotoxy(55, 15); textcolor(12); printf("Exit "); textcolor(7);
		break;
	}
}

void MenuSetting()
{
	gotoxy(55, 5); textcolor(14); ChayChu("Setting");
	gotoxy(52, 9); textcolor(12); ChayChu("Select Setting");
	gotoxy(48, 11); textcolor(14); ChayChu("1. Set Run text");
	gotoxy(48, 13); textcolor(7); ChayChu("2. set Name File Default");
	gotoxy(55, 15); textcolor(7); ChayChu("Exit ");
}
void setting(char *NameFile)
{
	HidePointer();textcolor(7);MenuSetting();
	int x = 0, y = 0, c;
	y = 11;
	while (1)
	{
		fflush(stdin);
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;
			break;
		case 72:
			y -= 2;
			break;
		case 27:
			return;
		}
		if (c == 13)
		{
			switch (y)
			{
			case 11:
				SetRunKey();
				clrscr();
				return;
			case 13:
				system("cls");
				FrameGioiThieu();
				SettingDefaulNameFile(NameFile);
				system("cls");
				return;
			case 15:
				return;
			}
		}
		if (y > 15)	y = 11;
		if (y < 11) y = 15;
		colorSetting(y);
	}
	textcolor(7);
	ShowPointer();
}

// ?n  con tr?
void HidePointer()
{
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
}
// Hi?n Con Tr?
void ShowPointer()
{
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = TRUE;
	SetConsoleCursorInfo(hOut, &ConCurInf);
}
// Hàm thay d?i kích c? c?a khung cmd.
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
// Hàm tô màu.
void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}
void textbackground(WORD color) // màu n?n
{

	HANDLE hconsolerOutput;
	hconsolerOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hconsolerOutput, &screen_buffer_info);
	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;
	SetConsoleTextAttribute(hconsolerOutput, wAttributes);

}
// Hàm d?ch chuy?n con tr? d?n t?a d? x, y.
void gotoxy(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x - 1, y - 1 };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

// Hàm xóa màn hình.
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
void pain()  // t?o khung chuong trình
{
	textcolor(7);
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng
	char unsigned c7 = 206; // ?ng D?u c?ng
	gotoxy(0, 0);
	int i;
	//?ng Bên Chi?u Dài Trên 
	for (i = 2; i < Console_Dai; i++)
	{
		gotoxy(i, 2);
		printf("%c", c);
	}
	gotoxy(1, 2); printf("%c", c1);
	gotoxy(120, 2); printf("%c", c3);
	gotoxy(35, 2); printf("%c", c6);
	textcolor(14);
	gotoxy(50, 1);printf("CHUONG TRINH QUAN LY HOC VIEN");
	textcolor(7);
	//?ng bên Chi?u dài du?i
	for (i = 2; i <= Console_Dai; i++)
	{
		gotoxy(i, 30);
		printf("%c", c);
		if (i == 35)
		{
			gotoxy(i, 30);printf("%c", c5);
		}
		else if (i == 120)
		{
			gotoxy(1, 30);
			printf("%c", c2);
			//break;
		}
		if (i == 120)
		{
			gotoxy(i, 30);
			printf("%c", c4);
			break;
		}
	}
	// ?ng Bên Chi?u r?ng
	for (i = 3; i < Console_Rong + 2; i++)
	{
		gotoxy(1, i);printf("%c", 178);
	}
	for (i = 3; i < Console_Rong + 2; i++)
	{
		gotoxy(120, i);printf("%c", 178);
	}
	// ?ng Gi?a
	for (i = 3; i < Console_Rong + 2; i++)
	{
		gotoxy(35, i);printf("%c", d);
	}
	gotoxy(1, 1);
}
void FrameGioiThieu()
{
	// Ve Khung Gioi Thieu
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng
	char unsigned c7 = 206; // ?ng D?u c?ng
	gotoxy(0, 0);
	int i;
	int slep = 20;
	textbackground(0);
	//dài trên
	for (i = 0; i < Console_Dai - 2; i++)
	{
		if (i == 0)
		{
			gotoxy(i, 0);printf("%c", c1);
		}
		gotoxy(i, 0);printf("%c", c);
		if (i == 117)
		{
			gotoxy(i, 0);printf("%c", c3);break;
		}
	}
	// dài du?i
	for (i = 0; i <= Console_Dai; i++)
	{
		gotoxy(i, 30);
		printf("%c", c);
		if (i == 120)
		{
			gotoxy(1, 30);printf("%c", c2);
			//break;
		}
		if (i == 120)
		{
			gotoxy(i, 30);printf("%c", c4);
			break;
		}
	}
	// RONG
	for (i = 2; i < Console_Rong + 2; i++)
	{
		gotoxy(1, i);printf("%c", d);
	}

	for (i = 2; i < Console_Rong + 2; i++)
	{
		gotoxy(120, i);printf("%c", d);
	}
	gotoxy(0, 0);
}
void GioiThieu()
{
	int i;
	int slep = 20;
	FrameGioiThieu();
	gotoxy(1, 1);
	char s1[] = "THUC TAP KI THUAT LAP TRINH";
	int a = (Console_Dai - 2 - strlen(s1)) / 2;
	textcolor(14);
	gotoxy(a, 4);
	for (int unsigned i = 0; i < strlen(s1); i++)
	{
		printf("%c", s1[i]);
		Sleep(slep);
	}
	textcolor(7);
	gotoxy(a - 10, 6);
	printf("**************************************************");
	char s2[] = "Full Name :	  NGO DINH PHUC";
	char s3[] = "Class:	  KTPM-K14";
	char s4[] = "Student code:  15150178";
	textcolor(7);

	for (i = 39; i < 80; i++)
	{
		gotoxy(i, 12);
		printf("%c", 178);
		Sleep(slep);

	}
	for (i = 13; i < 21; i++)
	{
		gotoxy(39, i);printf("%c", 178);
		gotoxy(40, i);printf("%c", 178);
		Sleep(slep);

	}

	// dài du?i
	for (i = 39; i < 80; i++)
	{
		gotoxy(i, 20);printf("%c", 178);
		Sleep(slep);
	}
	// //RONG
	for (i = 12; i < 21; i++)
	{
		gotoxy(79, i);printf("%c", 178);
		gotoxy(80, i);printf("%c", 178);
		Sleep(slep);
	}

	textcolor(12);
	gotoxy(44, 15);
	for (int unsigned i = 0; i < strlen(s2); i++)
	{
		printf("%c", s2[i]);
		Sleep(100);
	}
	gotoxy(44, 16);
	for (int unsigned i = 0; (i < strlen(s3)); i++)
	{
	printf("%c", s3[i]);
		Sleep(slep);
	}
	gotoxy(44, 17);
	for (int unsigned i = 0; i < strlen(s4); i++)
	{
		printf("%c", s4[i]);
		Sleep(slep);
	}
	textcolor(7);
	gotoxy(43, 25);
	printf(">> Press any key to continue ........ >>");
	gotoxy(80, 25);
	textcolor(7);
}
void clrscr()
{
	for (int i = 3; i < 30; i++)
	{
		gotoxy(36, i);
		textcolor(256);
		printf("                                                                                    ");
		textcolor(7);
	}

}
void Save()
{
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng
	char unsigned c7 = 206; // ?ng D?u c?ng

	gotoxy(0, 0);
	int i;
	textcolor(244);
	//?ng Bên Chi?u Dài Trên t
	for (i = 50; i < 100; i++)
	{
		gotoxy(i, 9);printf("%c", c);

	}
	gotoxy(1, 2); printf("%c", c1);
	gotoxy(120, 2); printf("%c", c3);
	//?ng Bên Chi?u Dài Du?i 
	for (i = 51; i < 100; i++)
	{
		gotoxy(i, 15);printf("%c", c);

	}
	gotoxy(50, 9); printf("%c", c1);
	gotoxy(100, 9); printf("%c", c3);
	/// ?ng Bên Chi?u r?ng
	for (i = 10; i < 15; i++)
	{
		gotoxy(50, i);printf("%c", d);
	}
	for (i = 10; i < 15; i++)
	{
		gotoxy(100, i);printf("%c", d);
	}
	gotoxy(50, 15); printf("%c", c2);
	gotoxy(100, 15); printf("%c", c4);

	/*********** Bên Trong*************/

	gotoxy(66, 10); printf("Them Vao Danh Sach");
	/********YES*******/
	for (i = 54; i < 62; i++)
	{
		gotoxy(i, 12);printf("%c", c);
	}
	gotoxy(54, 12); printf("%c", c1);
	gotoxy(62, 12); printf("%c", c3);

	gotoxy(54, 13);
	printf("%c  YES  %c", d, d);

	for (i = 54; i < 62; i++)
	{
		gotoxy(i, 14);
		printf("%c", c);
	}
	gotoxy(54, 14); printf("%c", c2);
	gotoxy(62, 14); printf("%c", c4);


	/********NO*******/
	gotoxy(88, 12);
	for (i = 88; i < 96; i++)
	{
		gotoxy(i, 12);
		printf("%c", c);
	}
	gotoxy(88, 12); printf("%c", c1);
	gotoxy(96, 12); printf("%c", c3);

	gotoxy(88, 13); printf("%c  NO   %c", d, d);

	for (i = 88; i < 96; i++)
	{
		gotoxy(i, 14);
		printf("%c", c);
	}
	gotoxy(88, 14); printf("%c", c2);
	gotoxy(96, 14); printf("%c", c4);
	/*       màu n?n   */
	gotoxy(51, 10); printf("               "); gotoxy(84, 10); printf("                ");
	gotoxy(51, 11); printf("                                                 ");
	gotoxy(51, 12); printf("   ");	gotoxy(63, 12); printf("                         ");	gotoxy(97, 12); printf("   ");
	gotoxy(51, 13); printf("   ");  gotoxy(63, 13); printf("                         ");	gotoxy(97, 13); printf("   ");
	gotoxy(51, 14); printf("   "); gotoxy(63, 14); printf("                         "); gotoxy(97, 14); printf("   ");



	textcolor(7);

}
void END()
{
	system("cls");
	gotoxy(60, 13);
	char s1[] = "END";
	for (int i = 0; i < 3; i++)
	{
		Sleep(200);
		printf("%c", s1[i]);
	}

}
void Khung_seach()
{
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng
	gotoxy(0, 0);
	int i;
	gotoxy(60, 7); printf("Nhap Vao Tu Khoa Tim Kiem");
	//?ng Bên Chi?u Dài Trên t
	for (i = 55; i < 90; i++)
	{
		gotoxy(i, 8);printf("%c", c);

	}
	gotoxy(55, 8); printf("%c", c1);
	gotoxy(90, 8); printf("%c", c3);
	//?ng Bên Chi?u Dài Du?i 
	for (i = 55; i < 90; i++)
	{
		gotoxy(i, 10);printf("%c", c);
	}
	gotoxy(55, 8); printf("%c", c1);
	gotoxy(90, 8); printf("%c", c3);
	/// ?ng Bên Chi?u r?ng
	for (i = 9; i < 10; i++)
	{
		gotoxy(55, i);printf("%c", d);

	}
	for (i = 9; i < 10; i++)
	{
		gotoxy(90, i);printf("%c", d);
	}
	gotoxy(55, 10); printf("%c", c2);
	gotoxy(90, 10); printf("%c", c4);

}
void HelpKey()
{
	int a = 55;
	gotoxy(a, 8); textcolor(7); ChayChu("Use key"); textcolor(12); printf(" [ UP    ] "); textcolor(14); ChayChu("to move up on");
	gotoxy(a, 10); textcolor(7); ChayChu("Use key"); textcolor(12); printf(" [ Down  ] "); textcolor(14); ChayChu("to Move Down");
	gotoxy(a, 12); textcolor(7); ChayChu("Use key"); textcolor(12); printf(" [ Left  ] "); textcolor(14); ChayChu("to Move Left");
	gotoxy(a, 14); textcolor(7); ChayChu("Use key"); textcolor(12); printf(" [ Right ] "); textcolor(14); ChayChu("to Move Right");
	gotoxy(a, 16); textcolor(7); ChayChu("Use key"); textcolor(12); printf(" [ Enter ] "); textcolor(14); ChayChu("to Select");
	getch();
	clrscr();
}
void Help()
{
	vector <HoSo> demo;
	HidePointer();
	Menu();
	HelpKey();
	// B?t Phím
	{
		int x = 0, y = 0, c;
		x = 5, y = 5;
		Menu_batPhim(5);
		while (1)
		{
			fflush(stdin);
			c = getch();
			switch (c)
			{
			case 80:
				y++;
				break;
			case 72:
				y--;
				break;
			}
			if (c == 13)
			{
				switch (y)
				{
				case 5:
					//themhs();
					Menu_ThemHS();
					getch();
					clrscr();
					Menu();
					break;
				case 6:
					clrscr();
					Khung_IN();
					Ong_ChieuRong(1);
					Ong_DaiDuoi(8);
					Menu_In_Down();
					getch();
					clrscr();
					break;
				case 7:
					Menu_sx_DoiMau1(7);
					getch();
					Menu_sx_DoiMau2("Chon", 7);
					getch();
					clrscr();
					break;
				case 8:
					menu1();
					Menu_Search_DoiMau1(8);
					Menu_Search_DoiMau2("Tuan Tu", 8);
					getch();
					pain();
					clrscr();
					break;
				case 9:
					menu1z();
					getch();
					Menu_ThongKe_DoiMau2(9);
					getch();
					pain();
					clrscr();
					Khung_BieuDo(demo, demo.size());
					getch();
					clrscr();
					break;
				case 10:
					int Err;
					checkExit(&Err, "Exit");
					if (Err == -1)
					{
						END();
						getch();
						return;
					}
					else
					{
						XoaCheckExit();
						HidePointer();
						break;
					}
				}
			}
			if (y > 10)	y = 5;
			if (y < 5) y = 10;
			Menu_batPhim(y);
			gotoxy(x, y);
		}
	}
}
/*----------Dialog---------------*/
void KhungExit()
{
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng

	gotoxy(0, 0);
	int i;
	textcolor(240);
	//?ng Bên Chi?u Dài Trên t
	for (i = 55; i < 90; i++)
	{
		gotoxy(i, 15);
		printf("%c", c);

	}
	gotoxy(55, 15); printf("%c", c1);
	gotoxy(90, 15); printf("%c", c3);
	//?ng Bên Chi?u Dài Du?i 
	for (i = 55; i < 90; i++)
	{
		gotoxy(i, 21);
		printf("%c", c);

	}
	gotoxy(55, 15); printf("%c", c1);
	gotoxy(90, 15); printf("%c", c3);
	/// ?ng Bên Chi?u r?ng
	for (i = 16; i < 21; i++)
	{
		gotoxy(55, i);
		printf("%c", d);

	}
	for (i = 16; i < 21; i++)
	{
		gotoxy(90, i);
		printf("%c", d);
	}
	gotoxy(55, 21); printf("%c", c2);
	gotoxy(90, 21); printf("%c", c4);

	for (int i = 56; i < 90; i++)
	{
		textcolor(255);
		gotoxy(i, 16);
		printf(" ");
		gotoxy(i, 18);
		printf(" ");
		gotoxy(i, 20);
		printf(" ");
	}
	gotoxy(56, 17); printf("        ");
	gotoxy(85, 17); printf("     ");
	gotoxy(56, 19); printf("             ");
	gotoxy(75, 19); printf("               ");
	gotoxy(74, 19); printf(" ");
	gotoxy(72, 19); printf(" ");
}
void ChangeColor(int x)
{
	switch (x)
	{
	case 69:
		textcolor(286);
		gotoxy(69, 19);
		printf("yes");
		textcolor(244);
		gotoxy(75, 19);
		printf("No");
		break;
	case 75:
		textcolor(286);
		gotoxy(75, 19);
		printf("No");
		textcolor(244);
		gotoxy(69, 19);
		printf("yes");
		break;
	}
}
void checkExit(int *Err1, char *look)
{
	KhungExit();
	textcolor(244);
	HidePointer();
	gotoxy(64, 17);
	printf("Do You Want To %s ?", look);
	gotoxy(69, 19);
	printf("yes");
	gotoxy(73, 19); printf("|");
	textcolor(286);
	gotoxy(75, 19);
	printf("No");


	int x = 75;
	int Nhap = 0;

	while (1)
	{
		fflush(stdin);
		Nhap = getch();
		switch (Nhap)
		{
		case 77:
			x -= 6;
			break;
		case 75:
			x += 6;
			break;
		}
		if (Nhap == 13)
		{
			switch (x)
			{
			case 75:
				*Err1 = 1;
				break;
			case 69:
				*Err1 = -1;
				break;
			}
		}
		if ((x > 75)) x = 69;
		if ((x < 69)) x = 75;
		// Chuy?n màu
		ChangeColor(x);
		if (Nhap == 13) break;
	}
	textcolor(15);
}
void XoaCheckExit()
{

	HidePointer();
	for (int i = 15; i < 23; i++)
	{
		gotoxy(40, i);
		textcolor(256);
		printf("                                                     ");
		textcolor(7);
	}
	ShowPointer();

}
/*----------Nh?p---------------*/
void ScanfChuoi(char *xau, int i, int ox, int oy, int *Err)
{
	int temp = 0;
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1;
	do
	{
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;

		if (i > 0 && c == 8)
		{
			printf("\b \b");
			i--;
			continue;
		}
		if (c < 0 || i < 0)continue;
		if (i >= 0 && c != 27 && c != 8)
		{
			c = toupper(c);
			xau[i++] = c;
			printf("%c", c);
		}
	} while (c != 13);
	if (xau[i - 1] == ' ' || c == 13)
		i--;
	xau[i] = NULL;
	HidePointer();

}
void EnterMaLop(char *xau, int i, int ox, int oy, int *Err)
{
	int temp = 0;
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1;
	do
	{
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;

		if (i > 0 && c == 8)
		{
			printf("\b \b");
			i--;
			continue;
		}
		if (c < 0 || i < 0)continue;
		if (i >= 0 && c != 27 && c != 8)
		{	
			c = toupper(c);
			xau[i++] = c;
			printf("%c", c);
		}
	} while (c != 13);
	if (xau[i - 1] == ' ' || c == 13)
		i--;
	xau[i++] = '\0';
	xau[i] = NULL;
	HidePointer();

}
void EnterMaSV(char *xau, int i, int ox, int oy, int *Err)
{
	int temp = 0;
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1;
	do
	{
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;

		if (i > 0 && c == 8)
		{
			printf("\b \b");
			i--;
			continue;
		}
		if (c < 0 || i < 0)continue;
		if (i >= 0 && c != 27 && c != 8 && i<8)
		{
			if (c >= '0'&&c <= '9')
			{
				xau[i++] = c;
				printf("%c", c);
			}		
		}
	} while (c != 13);
	if (xau[i - 1] == ' ')
		i--;
	xau[i++] = '\0';
	xau[i] = NULL;
	HidePointer();

}
void EnterHoTen(char *xau, int i, int ox, int oy, int *Err)
{
	int temp = 0;
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1;
	do
	{
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;
		if (c == 8 && i > 0)
		{
			printf("\b \b");
			//if (i>1)
			i--;
			continue;
		}
		if (c <= 0 || i<0)
			continue;
		if (i > 0 && c == 32 && xau[i - 1] != ' ' && i != 0)
		{
			printf(" ");
			xau[i++] = c;
		}
		if (!isalpha(c))
			continue;
		if (i == 0 || xau[i - 1] == ' ')
			c = toupper(c);
		if (i != 0 && xau[i - 1] != ' ')
			c = tolower(c);
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);

	if (xau[i - 1] == ' ')
		i--;
	xau[i] = NULL;
	HidePointer();
}
void EnterNgaySinh(char *xau, int i, int ox, int oy, int *Err)
{
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1, temp = 0;
	do
	{
		fflush(stdin);
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;
		if (c < 0 || i<0)continue;
		if (c == 8 && i > 0)
		{

			printf("\b \b");
			i--;
			continue;
		}
		if (i >= 0 && c >= '0'&&c <= '9')
		{
			/* Chu?n Hóa Ngày */
			if (i == 0)
			{
				if (c >= '0'&&c <= '3')
				{
					xau[i++] = c;
					printf("%c", c);
					continue;
				}
				// Ngày 4-9 cho thêm s? 0 phía tru?c
				if (c >= '4'&&c <= '9')
				{
					char a = '0';
					xau[i++] = a;
					printf("0");
					xau[i++] = c;
					printf("%c", c);
				}
			}
			if (i == 1)
			{
				//N?u là ngày 3 thì cho nh?p 0 và 1 ;
				if (xau[i - 1] == '3' && c >= '0'&&c <= '1')
				{
					xau[i++] = c;
					printf("%c", c);
					continue;
				}
				//N?u là ngày 1 ho?c 2 thì cho nh?p 0 - 9 ;
				if (((xau[i - 1] == '1') || (xau[i - 1] == '2')) && (c >= '0') && (c <= '9'))
				{
					xau[i++] = c;
					printf("%c", c);
				}
				//N?u là ngày = 0  thì ch? cho nh?p 1 - 9 ;
				if ((xau[i - 1] == '0') && (c > '0') && (c <= '9'))
				{
					xau[i++] = c;
					printf("%c", c);
				}
			}

			// cho nh?p nam
			if (i != 4 && i != 3 && i != 2 && i != 1)
			{
				if (i >= 0 && i < 10)
				{
					xau[i++] = c;
					printf("%c", c);
				}
				continue;
			}
			/* Chu?n Hóa Tháng */
			if (i == 3)
			{
				if (c >= '0'&&c <= '1')
				{
					xau[i++] = c;
					printf("%c", c);
					continue;
				}
				//Thêm s? 0 vào tháng 2-9
				if (c >= '2'&&c <= '9')
				{
					char a = '0';
					xau[i++] = a;
					printf("0");
					xau[i++] = c;
					printf("%c", c);
				}
			}
			if (i == 4)
			{
				// N?u tháng 1 ho?c nh?p 0 thì cho nh?p 0 và 2
				if (xau[i - 1] == '1' && c >= '0'&&c <= '2')
				{
					xau[i++] = c;
					printf("%c", c);
				}
				// N?u c 0 thì cho nh?p 1 - 9
				if (xau[i - 1] == '0' && c > '0'&&c <= '9')
				{
					xau[i++] = c;
					printf("%c", c);
				}
			}
			// In ra d?u "/"
			if (i == 2 || i == 5)
			{
				char a = '/';
				xau[i++] = a;
				printf("/");
			}
		}
	} while (c != 13);
	if (xau[i - 1] == ' ')
		i--;
	xau[i++] = '\0';
	xau[i] = NULL;
}
void EnterDiem(char *xau, int i, int ox, int oy, int *Err)
{

	ShowPointer();
	gotoxy(ox, oy);
	char c; int temp = 0, Err1;
	do
	{
		fflush(stdin);
		c = getch();
		if (c == 27)
		{
			checkExit(&Err1, "Exit");
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				XoaCheckExit();
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;
		if (c == 8 && i > 0)
		{
			printf("\b \b");
			i--;
			continue;
		}
		if (c < 0 || i < 0)continue;
		if (c != 13 && i >= 0 && i <= 4 && c != 8)
		{
			xau[i++] = c;
			printf("%c", c);
		}
	} while (c != 13);
	if (xau[i - 1] == ' ')
		i--;
	xau[i++] = '\0';
	xau[i] = NULL;
}

void EnterNameFile(char *xau, int i, int ox, int oy, int *Err)
{
	int temp = 0;
	ShowPointer();
	gotoxy(ox, oy);
	char c; int Err1=0;
	do
	{
		c = getch();
		if (c == 27)
		{		
			{
				HidePointer();
				textcolor(12);
				gotoxy(ox, oy + 2);
				ChayChu("Press [Enter] to accept Exit");
				textcolor(14);
				gotoxy(ox+5, oy + 3);
				ChayChu("OR [ESC] to Cancel");
				c = getch();
				if (c == 13)Err1 = -1;
				textcolor(7);
				ShowPointer();
			}
			if (Err1 == -1)
			{
				*Err = -1;
				return;
			}
			else
			{
				gotoxy(ox, oy + 2);
				ChayChu("                            ");
				textcolor(14);
				gotoxy(ox + 5, oy + 3);
				ChayChu("                  ");
				ShowPointer();
				gotoxy(ox + i, oy);
				textcolor(249);
				continue;
			}
		}
		if (c == 77 && temp == -32){ i++; ox++; gotoxy(ox, oy); continue; }
		if (i >= 1 && c == 75 && temp == -32){ ox--; i--; gotoxy(ox, oy); continue; }
		temp = c;
		if (i > 0 && c == 8)
		{
			printf("\b \b");
			i--;
			continue;
		}
		if (c < 0 || i < 0)continue;
		/*   /\:*"<>|
		*   47 92 58 42 34 60 62 124
		*/
		if (c == 47 || c == 92 || c == 58 || c == 42 || c == 34 || c == 60 || c == 62 || c == 124)
			continue;
		if (i >= 0)
		{
			xau[i++] = c;
			printf("%c", c);
		}	
	} while (c != 13);
	if (xau[i - 1] == ' ' || c == 13)
		i--;
	xau[i] = NULL;
	HidePointer();

}
/*----------Date---------------*/
void TachNgay(char *xau, int *day, int *mount, int *year)
{
	Date Nhap;
	int x = 0, j = 0, z = 0;
	for (int unsigned i = 0; i < strlen(xau); i++)
	{
		if (i == 0 || i == 1)
		{
			Nhap.day[x] = xau[i];
			x++;
			if (x == 2)*day = atoi(Nhap.day);
		}
		if (i == 3 || i == 4)
		{
			Nhap.month[j] = xau[i];
			j++;
			if (j == 2)*mount = atoi(Nhap.month);
		}
		if (i >= 6 && i <= 9)
		{
			Nhap.year[z] = xau[i];
			z++;
			if (z == 4) *year = atoi(Nhap.year);
		}
	}
}
int KT_Date(int &day, int &month, int &year)
{
	if (year < 0 || year >2017)
	{
		return 0;
	}
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		switch (month)
		{
		case 1: case 3:	case 5: case 7:case 8: case 10: case 12:
		{
					break;
		}

		case 4: case 6: case 9: case 11:
		{
					if (day > 30)
					{
						return 0;
					}
					break;
		}
		case 2:
		{
				  if (day > 29)
				  {
					  return 0;
				  }
				  break;
		}
		}
		return 1;

	}
	// Nam Không nhu?n
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{break; }
	case 4: case 6: case 9: case 11:
	{
				if (day > 30)
				{
					return 0;
				}
				break;
	}
	case 2:
	{
			  if (day > 28)
			  {
				  return 0;
			  }
			  break;
	}
	}
	return 1;
}

/*----------Ph?---------------*/
void NhapHoten(char xau[50], int &y, char &a)
{
	int i = strlen(xau); char c, temp;
	gotoxy(60 + i, 10);
	do
	{
		c = getch();
		if (c == 27) { a = 27; break; }
		if (i != 0 && c == 8) { printf("\b \b"); i--; continue; }

		if (c == 80 && c == -32) { y++; break; }
		if (c == 72 && c == -32) { y--; break; }
		if (c == 13) y++;
		temp = c;
		if (c == 32 && xau[i - 1] != ' ' && i != 0) { printf(" "); xau[i++] = c; }
		if (!isalpha(c)) continue;
		if (i == 0 || xau[i - 1] == ' ') c = toupper(c);
		if (i != 0 && xau[i - 1] != ' ') c = tolower(c);
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);
	if (xau[i - 1] == ' ') i--;
	xau[i] = NULL;
}
void NhapMaLop(char xau[20], int &y, char &a)
{
	char c, temp = 0; int i = strlen(xau);
	gotoxy(60 + i, 6);
	do
	{
		c = getch();
		if (i != 0 && c == 8) { printf("\b \b"); i--; continue; }
		if (c == 27) { a = 27; break; }
		if (c == 80 && c == -32)
		{
			y++;
			break;
		}
		if (c == 72 && c == -32)
		{
			y--;
			break;
		}
		if (c == 13) y++;
		temp = c;
		if (!isalnum(c)) continue;
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);
	xau[i] = NULL;
}
void NhapMaSV(char xau[20], int &y, char &a)
{
	char c, temp; int i = strlen(xau);
	gotoxy(60 + i, 8);
	do
	{
		c = getch();
		if (i != 0 && c == 8) { printf("\b \b"); i--; continue; }
		if (c == 27) { a = 27; break; }
		if (c == 80 && c == -32) { y++; break; }
		if (c == 72 && c == -32) { y--; break; }
		if (c == 13) y++;
		temp = c;
		if (!isalnum(c)) continue;
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);
	xau[i] = NULL;
}
void NhapDiemTb(char xau[10], int &y, char &a)
{
	char c, temp; int i = 0;
	i = strlen(xau);
	gotoxy(60 + i, 14);
	do
	{
		c = getch();
		if (i != 0 && c == 8) { printf("\b \b"); i--; continue; }
		if (c == 27) { a = 27; break; }
		if (c == 80 && c == -32) { y++; break; }
		if (c == 72 && c == -32) { y--; break; }
		if (c == 13) a = 0;
		temp = c;
		if (c == '.' && xau[i - 1] == '.') continue;
		if (!isdigit(c) && c != '.') continue;
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);
	xau[i] = NULL;
}
void move(int &y, char &a)
{
	char c;
	c = getch();
	if (c == 80) y++;
	if (c == 72) y--;
	if (c == 75) y = 6;
	if (c == 77) y = 7;
	if (c == 13 && y == 7) a = 27;
	if (c == 13 && y == 6) a = 13;
}
void date(char xau[25], int &y, char &a)
{
	char c, temp; int i = strlen(xau);
	gotoxy(60 + i, 12);
	do{
		c = getch();
		if (c == 8 && i > 0) { printf("\b \b"); xau[i--] = NULL; }
		if (c == 27) { a = 27; break; }
		if (c == 80 && c == -32) { y++; break; }
		if (c == 72 && c == -32) { y--; break; }
		if (c == 13) y++;
		temp = c;
		if (!isdigit(c) && (c != '-' || xau[i - 1] == '-')) continue;
		if (c == '-' && (i == 0 || (xau[i - 1] == '0')) && i != 2 && i != 5) continue;
		if (i == 2 || i == 5) c = '-';
		if (i == 1 && ((xau[0] > '2' && c > '1') || (xau[0] == '0' && c == '0'))) continue;
		if (i == 0 && c > '3') {
			xau[i++] = '0'; printf("0");
		}
		if ((i == 1) && c == '-' && xau[i - 1] != '0'){
			xau[i++] = '0'; _strrev(xau);
			printf("\b \b"); printf("%s", xau);
		}
		if (i == 4 && ((xau[3] > '0' && c > '2') || (xau[3] == '0' && c == '0'))) continue;
		if (i == 3 && c > '1'){
			xau[i++] = '0'; printf("0");
		}
		if (i == 4 && c == '-'){
			printf("\b \b"); printf("01");
			xau[3] = '0'; xau[i++] = '1';
		}
		if ((i == 6 && (c<'1' || c>'2')) || i > 9) continue;
		xau[i++] = c;
		printf("%c", c);
	} while (c != 13);
	xau[i] = NULL;
}
void XoaNhap(char a1[25], char a2[25], char a3[50], char a4[25], char a5[10])
{
	gotoxy(60, 6); textcolor(0); printf("\t\t\t");
	gotoxy(60, 8); textcolor(0); printf("\t\t\t");
	gotoxy(60, 10); textcolor(0); printf("\t\t\t\t\t");
	gotoxy(60, 12); textcolor(0); printf("\t\t\t");
	gotoxy(60, 14); textcolor(0); printf("\t\t");
	strcpy(a1, "");
	strcpy(a2, "");
	strcpy(a3, "");
	strcpy(a4, "");
	strcpy(a5, "");
}
int ktNhap(int &y, char maLop[25], char maSv[25], char ten[50], char ntn[25], char diem[10])
{
	if (strlen(maLop) == 0 || strlen(maSv) == 0 || strlen(ten) == 0 || strlen(ntn) == 0 || strlen(diem) == 0){
		if (strlen(diem) == 0) y = 5;
		if (strlen(ntn) == 0) y = 4;
		if (strlen(ten) == 0) y = 3;
		if (strlen(maSv) == 0) y = 2;
		if (strlen(maLop) == 0) y = 1;
		return 0;
	}
	else
		return 1;
}
void themhs()
{
	vector<HoSo> HS;
	HoSo SV;
	int y = 1;
	char a = 'a';
	char maLop[25] = "";
	char maSv[25] = "";
	char ten[50] = "";
	char ntn[25] = "";
	char diem[10] = "";
	fflush(stdin);
	gotoxy(40, 6); textcolor(15); printf("Ma lop:\n");
	gotoxy(40, 8); textcolor(15); printf("Ma sinh vien:\n");
	gotoxy(40, 10); textcolor(15); printf("Ho va ten:\n");
	gotoxy(40, 12); textcolor(15); printf("Ngay sinh:\n");
	gotoxy(40, 14); textcolor(15); printf("Diem TBTL:\n");
	gotoxy(40, 18); printf("Luu");
	gotoxy(70, 18); printf("Thoat");
	do
	{
		switch (y)
		{
		case 1: ShowPointer(); NhapMaLop(maLop, y, a); break;
		case 2: NhapMaSV(maSv, y, a); break;
		case 3: NhapHoten(ten, y, a); break;
		case 4: date(ntn, y, a); break;
		case 5: ShowPointer(); NhapDiemTb(diem, y, a); break;
		case 6: HidePointer();
			gotoxy(40, 18); textcolor(10); printf("Luu"); move(y, a);
			gotoxy(40, 18); textcolor(15); printf("Luu");
			if (a == 13 && ktNhap(y, maLop, maSv, ten, ntn, diem) != 0) {
				strcpy(SV.MaLop, maLop);
				strcpy(SV.MaSV, maSv);
				strcpy(SV.Hoten, ten);
				strcpy(SV.NgaySinh, ntn);
				SV.DiemTB = atof(diem);
				HS.push_back(SV);
				Ghifile("DSSVtemp.kBz", HS);
				HS.clear();
				XoaNhap(maLop, maSv, ten, ntn, diem);
				a = 'a'; y = 1;
			}ShowPointer(); break;
		case 7: HidePointer();
			gotoxy(70, 18); textcolor(10); printf("Thoat"); move(y, a);
			gotoxy(70, 18); textcolor(15); printf("Thoat"); break;
		}
		if (y > 7) y = 1;
		if (y < 1) y = 7;
		if (a == 0 && (strlen(maLop) == 0 || strlen(maSv) == 0 || strlen(ten) == 0 || strlen(ntn) == 0 || strlen(diem) == 0))
		{
			gotoxy(50, 16); printf("Vui long nhap du cac muc!");
		}
	} while (a != 27);
}

#define Console_Dai 120
#define Console_Rong 28

char unsigned  c = 205;  //?ng Ngang
char unsigned d = 186;  // ?ng d?c
char unsigned c1 = 201; // góc trái trên
char unsigned c2 = 200; // góc trái du?i
char unsigned c3 = 187; // góc ph?i trên 
char unsigned c4 = 188; // góc ph?i du?i
char unsigned c5 = 202; // ?ng cam lên
char unsigned c6 = 203; // ?ng c?m xu?ng
char unsigned c7 = 206; // ?ng D?u c?ng
void EditMenu(char *FileName, vector<HoSo> &HS, int &n, int &ToaDo, int &Trang);
void Edit(char *FileName, vector <HoSo> &HS, int LocaEdit, int STT, int ox, int oy);

/*IN KHUNG Th?ng KÊ */
void Khung_PrintfTK(char *s)
{
	for (int i = 50; i < 100; i++)
	{
		gotoxy(i, 26);
		printf("%c", c);
	}
	for (int i = 5; i < 26; i++)
	{
		gotoxy(50, i);
		printf("%c", d);
	}
	for (int i = 5; i < 26; i++)
	{
		gotoxy(100, i);
		printf("%c", d);
	}

	for (int i = 5; i < 26; i++)
	{
		gotoxy(80, i);
		printf("%c", d);
	}
	for (int i = 50; i < 100; i++)
	{
		for (int j = 4; j < 26; j = j + 2)
		{
			gotoxy(i, j);
			printf("%c", c);
			gotoxy(80, j); printf("%c", c7);
			gotoxy(50, j); printf("%c", 204);
			gotoxy(100, j); printf("%c", 185);
		}
	}
	gotoxy(80, 4); printf("%c", c6);
	gotoxy(80, 26); printf("%c", c5);
	/// Các Góc
	gotoxy(100, 4); printf("%c", c3);
	gotoxy(100, 26); printf("%c", c4);
	gotoxy(50, 4); printf("%c", c1);
	gotoxy(50, 26); printf("%c", c2);
	// Menu
	gotoxy(85, 5); printf("So Luong");
	gotoxy(63, 5); printf("%s", s);

}
/*IN KHUNG */
void Ong_NganCach(int OY)
{
	// ?ng Ngan Cách {
	int i;
	for (i = 38; i < Console_Dai - 3; i++)
	{
		gotoxy(i, OY);
		printf("%c", c);
		if (i == 38)
		{
			gotoxy(i, OY);
			printf("%c", 204);
		}
		// Các ?ng c?m xu?ng
		else if (i == 44)
		{
			gotoxy(i, OY);
			printf("%c", c7);
		}
		else if (i == 57)
		{
			gotoxy(i, OY);
			printf("%c", c7);
		}
		else if (i == 68)
		{
			gotoxy(i, OY);
			printf("%c", c7);
		}

		else if (i == 90)
		{
			gotoxy(i, OY);
			printf("%c", c7);
		}
		else if (i == 107)
		{
			gotoxy(i, OY);
			printf("%c", c7);
		}
		else if (i == 116)
		{

			gotoxy(i, 0);
			printf("%c", 185);
			break;
		}
	}
}
void Ong_DaiDuoi(int ChieuDai_duoi_min)
{
	// ?ng Chi?u dài du?i
	int i;
	//ChieuDai_duoi_min ;
	for (i = 38; i <= Console_Dai - 3; i++)
	{
		gotoxy(i, ChieuDai_duoi_min);
		printf("%c", c);
		if (i == 38)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c2);
		}
		else if (i == 44)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);
		}
		if (i == 117)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c4);
			break;
		}
		// Các ?ng c?m Lên
		if (i == 44)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);

		}
		else if (i == 57)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);
		}
		else if (i == 68)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);
		}
		else if (i == 90)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);
		}
		else if (i == 107)
		{
			gotoxy(i, ChieuDai_duoi_min);
			printf("%c", c5);
		}
	}
}
void Ong_ChieuRong(int Ong_RongMin)
{
	int i;
	Ong_RongMin += 7;
	for (i = 5; i < Ong_RongMin; i += 2)
	{
		gotoxy(117, i);
		printf("%c", d);
		gotoxy(38, i);
		printf("%c", d);
		gotoxy(44, i);
		printf("%c", d);
		gotoxy(57, i);
		printf("%c", d);
		gotoxy(68, i);
		printf("%c", d);
		gotoxy(90, i);
		printf("%c", d);
		gotoxy(107, i);
		printf("%c", d);
	}

}
void Khung_IN()
{
	// khung bên trong (khung con)
	gotoxy(0, 0);
	int i;
	//?ng Chi?u dài trên
	for (i = 38; i < Console_Dai - 3; i++)
	{
		gotoxy(i, 4);
		printf("%c", c);
		if (i == 38)
		{
			gotoxy(i, 4);
			printf("%c", c1);
		}
		// Các ?ng c?m xu?ng
		else if (i == 44)
		{
			gotoxy(i, 4);
			printf("%c", c6);
		}
		else if (i == 57)
		{
			gotoxy(i, 4);
			printf("%c", c6);
		}
		else if (i == 68)
		{
			gotoxy(i, 4);
			printf("%c", c6);
		}
		else if (i == 90)
		{
			gotoxy(i, 4);
			printf("%c", c6);
		}
		else if (i == 107)
		{
			gotoxy(i, 4);
			printf("%c", c6);
		}
		else if (i == 116)
		{
			gotoxy(i, 0);
			printf("%c", c3);
			break;
		}
	}
	Ong_NganCach(6);
	gotoxy(69, 3);
	printf("Danh Sach Sinh Vien");
	gotoxy(40, 5);
	printf("STT");
	gotoxy(48, 5);
	printf("Ma Lop");
	gotoxy(61, 5);
	printf("Ma SV");
	gotoxy(75, 5);
	printf("Ho Va Ten");
	gotoxy(95, 5);
	printf("Ngay Sinh");
	gotoxy(109, 5);
	printf("Diem TB");
}
vector<HoSo>  input(char *FileName)
{
	vector<HoSo> HS;
	HoSo SV;
	FILE *fp;
	int a = 0;
	fp = fopen(FileName, "rb");
	if ((fp == NULL) || (feof(fp)))
	{
		return HS;
	}
	else
	{
		while (!feof(fp))
		{
			fread(&SV, sizeof(SV), 1, fp);
			if (!feof(fp))
				HS.push_back(SV);
		}
	}
	return HS;
}
void UpdateFile(char *FileName, vector <HoSo > HS)
{
	HoSo SV;
	FILE *fp;
	fp = fopen(FileName, "wb");
	for (unsigned i = 0; i < HS.size(); i++)
	{
		fwrite(&HS[i], sizeof(SV), 1, fp);
	}
	fclose(fp);
}
void ChuyenMau(int x)
{
	// Ð?i Màu Ch?
	switch (x)
	{
	case 70:
		textcolor(14);
		gotoxy(108, 28);
		printf("Next >>");
		textcolor(7);
		gotoxy(92, 28);
		printf(" << Preview");
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(57, 28);
		printf("Add");
		textcolor(7);
		gotoxy(68, 28);
		printf("Edit");
		break;
	case 85:
		textcolor(14);
		gotoxy(92, 28);
		printf(" << Preview");
		textcolor(7);
		gotoxy(108, 28);
		printf("Next >>");
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(57, 28);
		printf("Add");
		textcolor(7);
		gotoxy(68, 28);
		printf("Edit");
		break;
	case 100:
		textcolor(9);
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(108, 28);
		printf("Next >>");
		gotoxy(92, 28);
		printf(" << Preview");
		textcolor(7);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(57, 28);
		printf("Add");
		textcolor(7);
		gotoxy(68, 28);
		printf("Edit");
		break;
	case 115:
		textcolor(9);
		gotoxy(68, 28);
		printf("Edit");
		textcolor(7);
		gotoxy(108, 28);
		printf("Next >>");
		gotoxy(92, 28);
		printf(" << Preview");
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(57, 28);
		printf("Add");
		break;
	case 130:
		textcolor(9);
		gotoxy(57, 28);
		printf("Add");
		textcolor(7);
		gotoxy(108, 28);
		printf("Next >>");
		gotoxy(92, 28);
		printf(" << Preview");
		textcolor(7);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(68, 28);
		printf("Edit");
		break;
	case 145:
		textcolor(12);
		gotoxy(43, 28);
		printf("Cancel");
		textcolor(7);
		gotoxy(108, 28);
		printf("Next >>");
		gotoxy(92, 28);
		printf(" << Preview");
		gotoxy(80, 28);
		printf("Delete");
		textcolor(7);
		gotoxy(57, 28);
		printf("Add");
		textcolor(7);
		gotoxy(68, 28);
		printf("Edit");
		break;
	}
}
void Menu_In_Down()
{
	gotoxy(80, 28);
	printf("Delete");
	gotoxy(43, 28);
	printf("Cancel");
	gotoxy(57, 28);
	printf("Add");
	gotoxy(68, 28);
	printf("Edit");
	textcolor(14);
	gotoxy(108, 28);
	printf("Next >>");
	textcolor(7);
	gotoxy(105, 28);
	printf("|");
	textcolor(7);
	gotoxy(92, 28);
	printf(" << Preview");
}
void dialogNull()
{
	Khung_IN();
	gotoxy(40, 3);
	printf("Empty Data !!!!!!!!");
	Ong_ChieuRong(1);
	Ong_DaiDuoi(8);
	getch();
	clrscr();
}
void Next_DS(int &x, int &Ong_Rong, int &Trang, int &b)
{
	clrscr();
	x += 10;
	Ong_Rong = 0;
	b = 7;
	gotoxy(39, 3);
	printf("Trang - %d >>", Trang);
	Menu_batPhim(6);
	Trang++;
}
void DeleteHS(char *FileName, vector<HoSo> &HS, int &n, int &ToaDo, int &Trang)
{
	int Oy;
	ChuyenControUpDown(&ToaDo, Trang - 1, (HS.size() / 10 + 1), &Oy);
	if (ToaDo == -1)
	{
		clrscr();
		OutPut(HS, FileName, n);
		return;
	}
	if (ToaDo > n)
	{
		gotoxy(70, 26);
		textcolor(192);
		printf("Do not exist");
		textcolor(15);
		getch();
		clrscr();
		OutPut(HS, FileName, n);
		return;
	}
	DeleteSV(HS, ToaDo);
	clrscr();
	UpdateFile(FileName, HS);
	OutPut(HS, FileName, HS.size());
	clrscr();
}
void Prevew_DS(int &Next, int &Trang, int &i, int &b, int &stt, int &Ong_Rong)
{
	clrscr();
	Next = (Trang - 2) * 10;
	Ong_Rong = 0;
	stt = (Trang - 2) * 10;
	b = 7;
	i = ((Trang - 2) * 10) - 1;
	Trang--;
}
void OutPut(vector <HoSo> HS, char *FileName, int n)
{
	if (n == 0){dialogNull();}
	HidePointer();
	int ToaDo = 0, Err, Trang = 1, Next = 0; // Qua Trang;
	int TongSo_SV = n,b = 7, stt = 0,Ong_Rong = 0, i;
	for (i = 0; i < TongSo_SV; i++)
	{
		/*---------------------------------------------------------------------------*/
		gotoxy(39, 3);
		printf("Trang - %d >>", Trang);
		Khung_IN();
		Ong_NganCach(b - 1);
		textcolor(9);
		gotoxy(41, b);
		printf("%d", stt + 1);
		gotoxy(46, b);
		printf("%s", HS[i].MaLop);
		gotoxy(59, b);
		printf("%s", HS[i].MaSV);
		gotoxy(70, b);
		printf("%s", HS[i].Hoten);
		gotoxy(94, b);
		printf("%s", HS[i].NgaySinh);
		gotoxy(111, b);
		printf("%0.2f", HS[i].DiemTB);
		textcolor(7);
		/*--------------------------------------*/
		b += 2; stt++;
		Ong_Rong += 2; Ong_ChieuRong(Ong_Rong); Ong_DaiDuoi(b - 1);
		/*--------------------------------------*/
		gotoxy(100, 3);printf("Tong So (%d/%d)", stt, TongSo_SV);
		/*--------------------Quá 10 SV ----------------------*/
		if (stt == (10 + Next))
		{
			Next += 10;
			// Menu In ? du?i
			Menu_In_Down();
			// Ph?n B?t Phím //
			/* Ph?i là 77 Trái là  75  delete 83 */
			int x = 70, Nhap;
			while (1)
			{
				//getch();
				Nhap = getch();
				switch (Nhap)
				{
				case 77:
					x -= 15;
					break;
				case 75:
					x += 15;
					break;
					/*--------------------?n Phím Delete ----------------------*/
				case 83:
					DeleteHS(FileName, HS, n, ToaDo, Trang);
					return;
				case 27:
					checkExit(&Err, "Exit");{if (Err == -1){return;
					}
						clrscr();OutPut(HS, FileName, n);return;}
					return;
				}
				/*--------------------Quá 10 SV && ?n Enter ----------------------*/
				if (Nhap == 13)
				{
					switch (x)
					{
					case 70: //next 
						Next_DS(x, Ong_Rong, Trang, b);
						break;
					case 85: // Prevew
						if (Trang >= 2)
						{
							Prevew_DS(Next, Trang, i, b, stt, Ong_Rong);
							break;
						}
						else{clrscr();checkExit(&Err, "Exit");{if (Err == -1)return;
								clrscr();
								OutPut(HS, FileName, n);
								return;}
						}
						/*--------------------Quá 10 SV && Delete ----------------------*/
					case 100:
						DeleteHS(FileName, HS, n, ToaDo, Trang);return;
						/*--------------------Quá 10 SV && Edit ----------------------*/
					case 115:
						EditMenu(FileName, HS, n, ToaDo, Trang);return;
						/*--------------------Quá 10 SV && ADD ----------------------*/
					case 130:
						clrscr();
						ThemMoi_Hs(FileName);
						HS = input(FileName);
						clrscr();
						OutPut(HS, FileName, HS.size());
						return;
					case 145: // Thoát 
						checkExit(&Err, "Exit");{if (Err == -1){return;}
							clrscr();
							OutPut(HS, FileName, n);
							return;}
						return;
					}
				}
				if ((x > 145)) x = 70;
				if ((x < 70)) x = 145;
				ChuyenMau(x);
				if (Nhap == 13) break;
			}
		}

		/*------Trang Ð?u SV <10 ||  Trang Cu?i -----*/
		if ((stt == TongSo_SV))
		{
			gotoxy(100, 3);
			printf("Tong So (%d/%d)", stt, TongSo_SV);
			gotoxy(52, 3);
			textcolor(201);
			printf("[Het]");
			textcolor(15);
			Menu_In_Down();
			// Ph?n B?t Phím //
			/* Ph?i là 77 Trái là  75*/
			int x = 70, Nhap;
			while (1)
			{
				Nhap = getch();
				switch (Nhap)
				{
				case 77:
					x -= 15;
					break;
				case 75:
					x += 15;
					break;
					/*------Trang Ð?u SV <10 ||  Trang Cu?i và Delete-----*/
				case 83:
					DeleteHS(FileName, HS, n, ToaDo, Trang);
					return;
				case 27:
					checkExit(&Err, "Exit");{if (Err == -1){return;}
						clrscr();
						OutPut(HS, FileName, n);
						return;}
					return;
				}
				if (Nhap == 13)
				{
					switch (x)
					{
					case 70:	//next 
						if (TongSo_SV == stt){clrscr();checkExit(&Err, "Exit");{if (Err == -1){
							return;}
								clrscr();
								OutPut(HS, FileName, n);
								return;}
						}
					case 85: //lùi
						if (Trang >= 2)
						{
							Prevew_DS(Next, Trang, i, b, stt, Ong_Rong);
							break;
						}
						return;
						/*------Trang Ð?u SV <10 ||  Trang Cu?i và Delete-----*/
					case 100: // Delete
						DeleteHS(FileName, HS, n, ToaDo, Trang);return;
						/*------Trang Ð?u SV <10 ||  Trang Cu?i và Edit-----*/
					case 115:// edit
						EditMenu(FileName, HS, n, ToaDo, Trang);return;
						/*------Trang Ð?u SV <10 ||  Trang Cu?i và ADD-----*/
					case 130: // Thêm	
						clrscr();
						ThemMoi_Hs(FileName);
						HS = input(FileName);
						clrscr();
						OutPut(HS, FileName, HS.size());
						return;
					case 145: // Thoát 
						checkExit(&Err, "Exit");{if (Err == -1){return;}
							clrscr();
							OutPut(HS, FileName, n);
							return;}
						return;
					}
				}
				if ((x > 145)) x = 70;
				if ((x < 70)) x = 145;
				ChuyenMau(x);
				if (Nhap == 13) break;
			}
		}
	}
}
void InFile(vector <HoSo> HS, char *Filename)
{
	FILE *f1;
	int i = 1;
	f1 = fopen(Filename, "w");
	fprintf(f1, "          \t\t-----------DANH SÁCH SINH VIÊN-------------\n");
	fprintf(f1, "---------------------------------------------------------------------------------------------\n");

	fprintf(f1, "| stt  |     MALOP  |        MASV  |           HOTEN         |     NGAYSINH    |   DIEMTB   |\n");
	for (unsigned i = 0; i < HS.size(); i++)
	{
		fprintf(f1, "---------------------------------------------------------------------------------------------\n");
		fprintf(f1, "|%-5.03d | %-10s | %-12s | %-23s | %-15s | %-10.2f |\n", (i + 1), _strupr(HS[i].MaLop), HS[i].MaSV, HS[i].Hoten, HS[i].NgaySinh, HS[i].DiemTB);
	}
	fprintf(f1, "---------------------------------------------------------------------------------------------\n");
	fclose(f1);
}

void DeleteSV(vector <HoSo> &HS, int ToaDo)
{
	int n = HS.size();
	vector<HoSo> HStemp(HS);
	HS.clear();
	for (int i = 0; i < n; i++)
	{
		if (i != (ToaDo - 1)) HS.push_back(HStemp[i]);
	}
}

void EditMenu(char *FileName, vector<HoSo> &HS, int &n, int &ToaDo, int &Trang)
{
	int ox, oy, LocaEdit;
	ChuyenControUpDown(&ToaDo, Trang - 1, (HS.size() / 10 + 1), &oy);
	if (ToaDo == -1){clrscr();OutPut(HS, FileName, n);return;}
	if (ToaDo > n)
	{
		gotoxy(70, 26);
		textcolor(192);
		printf("Do not exist");
		textcolor(15);
		getch();
		clrscr();
		OutPut(HS, FileName, n);
		return;
	}
	ChuyenControLeftRight(&LocaEdit, &ox, oy);
	Edit(FileName, HS, LocaEdit, ToaDo - 1, ox, oy);
}

void Edit(char *FileName, vector <HoSo> &HS, int LocaEdit, int STT, int ox, int oy)
{
	int err, lengStr;
	char temp[10];
	switch (LocaEdit)
	{
	case 1:
		gotoxy(ox + 1, oy);
		printf("%s", HS[STT].MaLop);
		do{
			textcolor(14);
			lengStr = strlen(HS[STT].MaLop);
			EnterMaLop(HS[STT].MaLop, lengStr, ox + 1 + strlen(HS[STT].MaLop), oy, &err);
			if (err == -1){	return;}
			if ((strlen(HS[STT].MaLop) <= 0) || (strlen(HS[STT].MaLop) > 15))
			{
				textcolor(12);
				gotoxy(ox + 11, oy);
				printf("!");
			}
		} while ((strlen(HS[STT].MaLop) <= 0) || (strlen(HS[STT].MaLop) > 15));
		textcolor(7);
		UpdateFile(FileName, HS);
		clrscr();
		OutPut(HS, FileName, HS.size());
		break;
	case 2:
	{
			  gotoxy(ox + 1, oy);
			  printf("%s", HS[STT].MaSV);
			  vector <HoSo> HSTK;
			  vector<HoSo> HStemp;
			  HStemp = input(FileName);
			  do
			  {
				  textcolor(14);
				  lengStr = strlen(HS[STT].MaSV);
				  EnterMaSV(HS[STT].MaSV, lengStr, ox + 1 + strlen(HS[STT].MaSV), oy, &err);
				  if (err == -1){return;}
				  // X? lý Trùng
				  HSTK.clear();
				  TuanTu_MaSV(HStemp, HSTK, HS[STT].MaSV);
				  if (HSTK.size() >= 1){
					  gotoxy(ox + 9, oy);
					  textcolor(12);
					  printf("!");
				  }
				  if (strlen(HS[STT].MaSV) != 8)
				  {
					  gotoxy(ox + 9, oy);
					  textcolor(12);
					  printf("!");
				  }
			  } while ((strlen(HS[STT].MaSV) != 8) || HSTK.size() >= 1);
			  HStemp.~vector();
			  textcolor(7);
			  UpdateFile(FileName, HS);
			  clrscr();
			  OutPut(HS, FileName, HS.size());
	}
		break;
	case 3:
		gotoxy(ox + 1, oy);
		printf("%s", HS[STT].Hoten);
		do
		{
			textcolor(14);
			lengStr = strlen(HS[STT].Hoten);
			EnterHoTen(HS[STT].Hoten, lengStr, ox + 1 + strlen(HS[STT].Hoten), oy, &err);
			if (err == -1){ return; }
			if (strlen(HS[STT].Hoten) <= 0)
			{
				gotoxy(ox + 20, oy);
				textcolor(12);
				printf("!");
			}
		} while (strlen(HS[STT].Hoten) <= 0);
		textcolor(7);
		UpdateFile(FileName, HS);
		clrscr();
		OutPut(HS, FileName, HS.size());
		break;
	case 4:
	{
			  gotoxy(ox + 1, oy);
			  printf("%s", HS[STT].NgaySinh);
			  int day = 0, month = 0, year = 0;
			  Date Nhap;
			  do{
				  textcolor(14);
				  lengStr = strlen(HS[STT].NgaySinh);
				  EnterNgaySinh(HS[STT].NgaySinh, lengStr, ox + 1 + strlen(HS[STT].NgaySinh), oy, &err);
				  if (err == -1){ return; }
				  TachNgay(HS[STT].NgaySinh, &day, &month, &year);
				  if (KT_Date(day, month, year) == 0 || (strlen(HS[STT].NgaySinh) != 10))
				  {
					  textcolor(12);
					  gotoxy(ox + 13, oy);
					  printf("!");
				  }
			  } while ((KT_Date(day, month, year) == 0) || (strlen(HS[STT].NgaySinh) != 10));
			  textcolor(7);
			  UpdateFile(FileName, HS);
			  clrscr();
			  OutPut(HS, FileName, HS.size());
	}
		break;
	case 5:
		gotoxy(ox + 1, oy);
		printf("%0.2f", HS[STT].DiemTB);
		do
		{
			textcolor(14);
			ChangePSeach(HS[STT].DiemTB, temp);
			lengStr = strlen(temp);
			EnterDiem(temp, lengStr, ox + 1 + lengStr, oy, &err);
			if (err == -1){ return; }
			HS[STT].DiemTB = (float)atof(temp);
			if (HS[STT].DiemTB > 10.0 || HS[STT].DiemTB <0.0)
			{
				textcolor(12);
				gotoxy(ox + 6, oy);
				printf("!");
				textcolor(7);
			}
		} while (HS[STT].DiemTB >10.0 || HS[STT].DiemTB < 0.0);
		textcolor(7);
		UpdateFile(FileName, HS);
		clrscr();
		OutPut(HS, FileName, HS.size());
		break;
	}
}

int compare_Search(char *xau,char *look)
{

	char *s = strstr(xau, look);
	if (s != NULL)
	{
		return 0;
	}
	return -1;
}
/*----------Search Nh? Phân---------------*/
void NhiPhan_Malop(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	int n = HS.size();
	SX_NoiBot_MaLop(HS, n);
	int left = 0;
	int right = n - 1;
	int i = 0;

	while (left <= right) {
		int mid = (left + right) / 2;	
		if (compare_Search(HS[mid].MaLop, look) == 0)
		{  
			
			for (int i = mid + 1; i<HS.size() ; i++)
			{
				if(compare_Search(HS[i].MaLop, look) == 0)
				HSTK.push_back(HS[i]);
			}
			HSTK.push_back(HS[mid]);
			for (int i = mid - 1; (i > 0) ; i--)
			{
				if (compare_Search(HS[i].MaLop, look) == 0)
				HSTK.push_back(HS[i]);
			}	
			SX_NoiBot_MaLop(HSTK, HSTK.size());
			return ;
		}			
		else if (SoSanhChuoi(look, HS[mid].MaLop) == -1)
			right = mid - 1;
		else if (SoSanhChuoi(look, HS[mid].MaLop)==1)
			left = mid + 1;	
	}
	return;
}
void NhiPhan_MaSV(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	int n = HS.size();
	SX_NoiBot_MaSV(HS, n);
	int left = 0;
	int right = n - 1;
	int i = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (compare_Search(HS[mid].MaSV, look) == 0)
		{

			for (int i = mid + 1; (i<HS.size()); i++)
			{
				if (compare_Search(HS[i].MaSV, look) == 0)
				HSTK.push_back(HS[i]);
			}
			HSTK.push_back(HS[mid]);
			for (int  i = mid - 1; (i >0) ; i--)
			{
				if (compare_Search(HS[i].MaSV, look) == 0)
				HSTK.push_back(HS[i]);
			}
			SX_NoiBot_MaSV(HSTK, HSTK.size());
			return;
		}
		else if (SoSanhChuoi(look, HS[mid].MaSV) == -1)
			right = mid - 1;
		else if (SoSanhChuoi(look, HS[mid].MaSV) == 1)
			left = mid + 1;
	}
	return;
}
void NhiPhan_HoTen(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	char temp1[50], temp2[50];
	int n = HS.size();
	SX_NoiBot_HoTen(HS, n);
	int left = 0;
	int right = n - 1;
	int i = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		DaoChuoi(HS[mid].Hoten, temp2);
		DaoChuoi(look, temp1);
		if (compare_Search(HS[mid].Hoten, look) == 0)
		{

			for (int i = mid + 1; (i<HS.size()); i++)
			{
				if (compare_Search(HS[i].Hoten, look) == 0)
					HSTK.push_back(HS[i]);
			}
			HSTK.push_back(HS[mid]);
			for (int i = mid - 1; (i > 0); i--)
			{
				if (compare_Search(HS[i].Hoten, look) == 0)
					HSTK.push_back(HS[i]);
			}
			SX_NoiBot_HoTen(HSTK, HSTK.size());
			return;
		}
		else if (SoSanhChuoi(temp1, temp2) == -1)
			right = mid - 1;
		else if (SoSanhChuoi(temp1, temp2) == 1)
			left = mid + 1;
	}
	return;
}
void NhiPhan_NgaySinh(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	int n = HS.size();
	SX_NoiBot_NgaySinh(HS, n);
	int left = 0;
	int right = n - 1;
	int i = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		if (compare_Search(HS[mid].NgaySinh, look) == 0)
		{

			for (int   i = mid + 1; (i<HS.size()) ; i++)
			{
				if (compare_Search(HS[i].NgaySinh, look) == 0)
				HSTK.push_back(HS[i]);
			}
			HSTK.push_back(HS[mid]);
			for (int i = mid - 1; (i > 0); i--)
			{
				if (compare_Search(HS[i].NgaySinh, look) == 0)
				HSTK.push_back(HS[i]);
			}
			SX_NoiBot_NgaySinh(HSTK, HSTK.size());
			return;
		}
		else if (SoSanhChuoi(look, HS[mid].NgaySinh) == -1)
			right = mid - 1;
		else if (SoSanhChuoi(look, HS[mid].NgaySinh) == 1)
			left = mid + 1;
	}
	return;
}
void NhiPhan_DTB(vector <HoSo> HS, vector <HoSo> &HSTK, float look)
{
	int n = HS.size();
	SX_NoiBot_DiemTB(HS, HS.size());
	int left = 0;
	int right = n - 1;
	int i = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (HS[mid].DiemTB==look)
		{
			for (int i = mid + 1; i<HS.size(); i++)
			{
				if (HS[i].DiemTB == look)
				HSTK.push_back(HS[i]);
			}
			HSTK.push_back(HS[mid]);
			for (int i = mid - 1; i >= 0; i--)
			{			
				if (HS[i].DiemTB== look)
				HSTK.push_back(HS[i]);
			}
			SX_NoiBot_DiemTB(HSTK, HSTK.size());
			return;
		}
		else if (HS[mid].DiemTB <look)
			right = mid - 1;
		else if (HS[mid].DiemTB >look)
			left = mid + 1;
	}
	return;
}

/*----------Search Tu?n T?---------------*/
void TuanTu_Malop(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	HSTK.clear();
	for (int   i = 0; i < HS.size(); i++)
	{
		char *s = strstr(HS[i].MaLop, look);
		if (s != NULL)
		{
			HSTK.push_back(HS[i]);
		}
	}
}
void TuanTu_MaSV(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	HSTK.clear();
	for (int   i = 0; i < HS.size(); i++)
	{
		char *s = strstr(HS[i].MaSV, look);
		if (s != NULL)
		{
			HSTK.push_back(HS[i]);
		}
	}
}
void TuanTu_HoTen(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	HSTK.clear();
	for (int   i = 0; i < HS.size(); i++)
	{
		char *s = strstr(HS[i].Hoten, look);
		if (s != NULL)
		{
			HSTK.push_back(HS[i]);
		}
	}
}
void TuanTu_NgaySinh(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	HSTK.clear();
	for (int   i = 0; i < HS.size(); i++)
	{
		char *s = strstr(HS[i].NgaySinh, look);
		if (s != NULL)
		{
			HSTK.push_back(HS[i]);
		}
	}
}
void TuanTu_DTB(vector <HoSo> HS, vector <HoSo> &HSTK, char look[])
{
	char Temp[10];
	HSTK.clear();
	for (int   i = 0; i < HS.size(); i++)
	{
		ChangePSeach(HS[i].DiemTB, Temp);
		char *s = strstr(Temp,look );
		if (s != NULL)
		{
			HSTK.push_back(HS[i]);
		}
	}
}

/*----------Main Search---------------*/
void menu1()
{
	int a = 45;
	gotoxy(a, 8);
	ChayChu("Tim Kiem Tuan Tu");
	gotoxy(a, 10);
	ChayChu("Tim Kiem Nhi Phan");
	gotoxy(a + 5, 12);
	printf("-Thoat-");
}
void Menu_Search_DoiMau1(int ToaDo)
{
	int a = 45;
	//
	for (int i = 3; i < 30; i++)
	{
		gotoxy(75, i);
		printf("%c", 186);
	}
	char  unsigned c5 = 202; // ?ng cam lên
	char  unsigned c6 = 203; // ?ng c?m xu?ng
	gotoxy(75, 2);
	printf("%c", 203);
	gotoxy(75, 30);
	printf("%c", 202);
	switch (ToaDo)
	{
	case 8:
		textcolor(14);
		gotoxy(a, 8);
		printf("Tim Kiem Tuan Tu");
		textcolor(7);
		gotoxy(a, 10);
		printf("Tim Kiem Nhi Phan");
		gotoxy(a + 5, 12);
		printf("-Thoat-");
		break;
	case 10:
		textcolor(7);
		gotoxy(a + 5, 12);
		printf("-Thoat-");
		gotoxy(a, 8);
		printf("Tim Kiem Tuan Tu");
		textcolor(14);
		gotoxy(a, 10);
		printf("Tim Kiem Nhi Phan");
		textcolor(7);
		break;
	case 12:
		textcolor(12);
		gotoxy(a + 5, 12);
		printf("-Thoat-");
		textcolor(7);
		gotoxy(a, 8);
		printf("Tim Kiem Tuan Tu");
		gotoxy(a, 10);
		printf("Tim Kiem Nhi Phan");
		break;
	}
}
void Menu_Search_DoiMau2(char *s, int ToaDo)
{
	int a = 85;
	gotoxy(a, 8);
	printf("Tim Kiem %s Theo Ma Lop", s);
	gotoxy(a, 10);
	printf("Tim Kiem %s Theo Ma SV", s);
	gotoxy(a, 12);
	printf("Tim Kiem %s Theo Ho Ten", s);
	gotoxy(a, 14);
	printf("Tim Kiem %s Theo Ngay Sinh", s);
	gotoxy(a, 16);
	printf("Tim Kiem %s Theo Diem TB", s);
	gotoxy(a + 5, 18);
	printf("-Thoat-");


	switch (ToaDo)
	{
	case 8:
		textcolor(14);
		gotoxy(a, 8);
		printf("Tim Kiem %s Theo Ma Lop", s);
		textcolor(7);
		break;
	case 10:
		textcolor(14);
		gotoxy(a, 10);
		printf("Tim Kiem %s Theo Ma SV", s);
		textcolor(7);
		break;
	case 12:
		textcolor(14);
		gotoxy(a, 12);
		printf("Tim Kiem %s Theo Ho Ten", s);
		textcolor(7);
		break;
	case 14:
		textcolor(14);
		gotoxy(a, 14);
		printf("Tim Kiem %s Theo Ngay Sinh", s);
		textcolor(7);
		break;
	case 16:
		textcolor(14);
		gotoxy(a, 16);
		printf("Tim Kiem %s Theo Diem TB", s);
		textcolor(7);
		break;
	case 18:
		textcolor(12);
		gotoxy(a + 5, 18);
		printf("-Thoat-");
		textcolor(7);
		break;
	}

}
void SaveFileSearch(vector <HoSo> HSTK, int z, char *FileTxt, char *FileWb)
{
	clrscr();
	OutPut(HSTK, FileWb, HSTK.size());
	if (HSTK.size() == 0)
	{
		Menu_Search_DoiMau1(z);
		return;
	}	
	InFile(HSTK, FileTxt);
	int check;
	checkExit(&check, "Save");
	if (check == -1)
	{
		clrscr();
		XoaCheckExit();
		HidePointer();
		HSTK.clear();
		HSTK=input(FileWb);
		if (HSTK.size()>0)
		InFile(HSTK, FileTxt);
		Menu_Search_DoiMau1(z);
		HSTK.clear();
		UpdateFile(FileWb, HSTK);
		return;
	}
	HSTK.clear();
	clrscr();
	Menu_Search_DoiMau1(z);
	pain();
	return;
}
void MenuConSearch1(vector <HoSo> HS, char *s, int z)
{
	int Err;
	vector <HoSo> HSTK;
	int x = 0, y = 0, c;
	x = 40, y = 8;
	Menu_batPhim(8);
	Menu_Search_DoiMau2(s, 8);
	while (1)
	{
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;
			break;
		case 72:
			y -= 2;
			break;
		case 27:
			int Err; checkExit(&Err, "Exit"); if (Err == -1){ pain(); clrscr(); return; }
			else{ clrscr(); pain(); Menu_Search_DoiMau1(8); break; }
		}
		if (c == 13)
		{
			switch (y)
			{
			case 8:
				/*Ngu?i Dùng Ðang ?n vào Tìm Ki?m Ma L?p*/
				clrscr();
				textcolor(12);
				gotoxy(67, 5); printf("Seach Ma Lop ");
				textcolor(7);
				pain();
				char NhapMaLop[20];
				Khung_seach();
				do{
					textcolor(9);
					EnterMaLop(NhapMaLop, 0, 60, 9, &Err);
					if (Err == -1)
					{
						clrscr();
						return;
					}
					if ((strlen(NhapMaLop) <= 0) || (strlen(NhapMaLop) > 15))
					{
						textcolor(14);
						gotoxy(60 + 43, 9);
						printf("ERRO ! Empty ");
					}
				} while ((strlen(NhapMaLop) <= 0) || (strlen(NhapMaLop) > 15));
				/*-----Tìm Ki?m Mã L?p--------*/
				switch (z)
				{
				case 8:
					TuanTu_Malop(HS, HSTK, NhapMaLop);
					break;
				case 10:
					NhiPhan_Malop(HS, HSTK, NhapMaLop);		
					break;
				}
				/*In ra sau khi Tìm Ki?m*/
				clrscr();
				gotoxy(80, 2);
				textcolor(244);
				printf("Tim Kiem Ma Lop ");
				textcolor(241);
				printf("look: ");
				textcolor(252);
				printf("%s", NhapMaLop);
				textcolor(7);
				SX_Chon_MaLop(HSTK, HSTK.size());
				SaveFileSearch(HSTK, z, "searchNumberClass.txt","searchNumberClass.wb");
				HSTK.clear();
				break;
			case 10:
				/*Ngu?i Dùng Ðang ?n vào Tìm Ki?m Ma SV*/
				clrscr();
				textcolor(12);
				gotoxy(64, 5); printf("Seach Ma Sinh Vien ");
				textcolor(7);
				pain();
				char NhapMaSV[20];
				Khung_seach();
				do{
					textcolor(9);
					EnterMaSV(NhapMaSV, 0, 60, 9, &Err);
					if (Err == -1)
					{
						clrscr();
						return;
					}
					if ((strlen(NhapMaSV) <= 0) || (strlen(NhapMaSV) > 15))
					{
						textcolor(14);
						gotoxy(60 + 43, 9);
						printf("ERRO  !!");
					}
				} while ((strlen(NhapMaSV) <= 0) || (strlen(NhapMaSV) > 15));

				/*-----Tìm Ki?m Mã SV--------*/
				switch (z)
				{
				case 8:
					TuanTu_MaSV(HS, HSTK, NhapMaSV);
					break;
				case 10:
					NhiPhan_MaSV(HS, HSTK, NhapMaSV);
					break;
				}
				/*In ra sau khi Tìm Ki?m*/
				clrscr();
				gotoxy(80, 2);
				textcolor(244);
				printf("Tim Kiem SV ");
				textcolor(241);
				printf("look: ");
				textcolor(252);
				printf("%s", NhapMaSV);
				textcolor(7);
				SX_Chon_MaSV(HSTK, HSTK.size());
				SaveFileSearch(HSTK, z,"searchNumberID.txt","searchNumberID.wb");
				HSTK.clear();
				break;
			case 12:
				/*Ngu?i Dùng Ðang ?n vào tìm Ki?m Hoten*/
				clrscr();
				textcolor(12);
				gotoxy(66, 5); printf("Seach Ho Ten ");
				textcolor(7);
				pain();
				char NhapHoten[20];
				Khung_seach();
				do{
					textcolor(9);
					EnterHoTen(NhapHoten, 0, 60, 9, &Err);
					if (Err == -1)
					{
						clrscr();
						return;
					}
					if ((strlen(NhapHoten) <= 0) || (strlen(NhapHoten) > 15))
					{
						textcolor(14);
						gotoxy(60 + 43, 9);
						printf("ERRO  !!");
					}
				} while ((strlen(NhapHoten) <= 0) || (strlen(NhapHoten) > 15));
				/*-----Tìm Ki?m HoTen--------*/
				switch (z)
				{
				case 8:
					TuanTu_HoTen(HS, HSTK, NhapHoten);
					break;
				case 10:
					NhiPhan_HoTen(HS, HSTK, NhapHoten);
					break;
				}
				/*In ra sau khi Tìm Ki?m*/
				clrscr();
				gotoxy(80, 2);
				textcolor(244);
				printf("Tim Kiem Ho Ten ");
				textcolor(241);
				printf("look: ");
				textcolor(252);
				printf("%s", NhapHoten);
				textcolor(7);
				SX_Chon_HoTen(HSTK, HSTK.size());
				SaveFileSearch(HSTK, z, "searchName.txt", "searchName.wb");
				HSTK.clear();
				break;
			case 14:
				/*Ngu?i Dùng Ðang ?n vào Tìm Ki?m Ngay Sinh*/
				clrscr();
				textcolor(12);
				gotoxy(65, 5); printf("Seach Ngay Sinh ");
				textcolor(7);
				pain();
				char NhapNgaySinh[20];
				Khung_seach();
				do{
					textcolor(9);
					EnterNgaySinh(NhapNgaySinh, 0, 60, 9, &Err);
					if (Err == -1)
					{
						clrscr();
						return;
					}
					if ((strlen(NhapNgaySinh) <= 0) || (strlen(NhapNgaySinh) > 15))
					{
						textcolor(14);
						gotoxy(60 + 43, 9);
						printf("ERRO  !!");
					}
				} while ((strlen(NhapNgaySinh) <= 0) || (strlen(NhapNgaySinh) > 15));
				/*-----Tìm Ki?m Ngay Sinh--------*/
				switch (z)
				{
				case 8:
					TuanTu_NgaySinh(HS, HSTK, NhapNgaySinh);
					break;
				case 10:
					NhiPhan_NgaySinh(HS, HSTK, NhapNgaySinh);
					break;
				}
				/*In ra sau khi Tìm Ki?m*/
				clrscr();
				gotoxy(80, 2);
				textcolor(244);
				printf("Search Birth Day ");
				textcolor(241);
				printf("look: ");
				textcolor(252);
				printf("%s", NhapNgaySinh);
				textcolor(7);
				SX_NoiBot_NgaySinh(HSTK, HSTK.size());
				SaveFileSearch(HSTK, z, "searchBirthDay.txt","searchBirthDay.wb" );
				HSTK.clear();
				break;
			case 16:
				/*Ngu?i Dùng Ðang ?n vào Tìm Ki?m Diem TB*/
				clrscr();
				textcolor(12);
				gotoxy(66, 5); printf("Seach Diem TB ");
				textcolor(7);
				pain();
				char NhapDTB[20];
				Khung_seach();
				do{
					textcolor(9);
					EnterDiem(NhapDTB, 0, 60, 9, &Err);
					if (Err == -1)
					{
						clrscr();
						return;
					}
					if ((strlen(NhapDTB) <= 0) || (strlen(NhapDTB) > 15))
					{
						textcolor(14);
						gotoxy(60 + 43, 9);
						printf("ERRO  !!");
					}
				} while ((strlen(NhapDTB) <= 0) || (strlen(NhapDTB) > 15));

				/*-----Tìm Ki?m Mã DTB--------*/
				switch (z)
				{
				case 8:
					TuanTu_DTB(HS, HSTK, NhapDTB);
					break;
				case 10:
					
					NhiPhan_DTB(HS, HSTK, atof(NhapDTB));
					break;
				}
				/*In ra sau khi Tìm Ki?m*/
				clrscr();
				gotoxy(80, 2);
				textcolor(244);
				printf("Tim Kiem DiemTB ");
				textcolor(241);
				printf("look: ");
				textcolor(252);
				printf("%s", NhapDTB);
				textcolor(7);
				SX_NoiBot_DiemTB(HSTK, HSTK.size());
				SaveFileSearch(HSTK, z, "searchPoint.txt", "searchPoint.wb");
				HSTK.clear();
				break;
			case 18:
				clrscr();
				pain();
				return;
				break;
			}
		}
		if (y > 18)	y = 8;
		if (y < 8) y = 18;
		Menu_Search_DoiMau2(s, y);
		gotoxy(x, y);
	}
}
void MainSearch(vector <HoSo> HS, char *FileName, int n)
{
	HidePointer();
	if (HS.size() == 0)
	{
      dialogNull(); return;
	}
	{
		int x = 0, y = 0, c;
		x = 40, y = 8;
		Menu_batPhim(8);
		menu1();
		Menu_Search_DoiMau1(8);
		while (1)
		{
			c = getch();
			switch (c)
			{
			case 80:
				y += 2;
				break;
			case 72:
				y -= 2;
				break;
			case 27:
				int Err; checkExit(&Err, "Exit"); if (Err == -1){ pain();clrscr(); return; }
				else{ clrscr(); pain(); break; }
			}
			if (c == 13)
			{
				switch (y)
				{
				case 8:
					MenuConSearch1(HS, "Tuan Tu", y);
					break;
				case 10:
					MenuConSearch1(HS, "Nhi Phan", y);
					break;
				case 12:
					clrscr();
					pain();
					return;
					break;
				}
			}
			if (y > 12)	y = 8;
			if (y < 8) y = 12;
			Menu_Search_DoiMau1(y);
			gotoxy(x, y);
		}
	}
}



/*----------Function Support -----------------*/
void Swap_change(HoSo &Hs1, HoSo &Hs2)
{
	HoSo HsTemp;
	HsTemp = Hs1;
	Hs1 = Hs2;
	Hs2 = HsTemp;
}
int SoSanhChuoi(char *s1, char *s2)
{
	int x, y, size;
	x = strlen(s1);
	y = strlen(s2);
	(x >= y) ? (size = x) : (size = y);

	for (int i = 0; i < size; i++)
	{
		if (s1[i]>s2[i]){ return 1; }
		if (s1[i] < s2[i]){ return -1; }
	}
	if (x > y){ return 1; }
	if (x < y){ return -1; }
	return 0;
}
void DaoChuoi(char s[], char temp[])
{
	int x = strlen(s);
	if (s == NULL) return;
	int j = 0, i;
	for (i = x - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
			break;
	}
	int n = 0;
	int z;
	for (z = 0; z < x - i - 1; z++)
	{
		temp[z] = s[i + z + 1];// i dang ? d?u cách
	}
	temp[z++] = ' ';
	for (j = 0; j < i; j++, z++)
	{
		temp[z] = s[j];// i dang ? d?u cách
	}
	temp[z++] = '\0';
}
void swapDate(vector <HoSo> &HS)
{
	Date Nhap;
	for (int h = 0; h < HS.size(); h++)
	{
		int x = 0, j = 0, z = 0;
		for (int i = 0; i < strlen(HS[h].NgaySinh); i++)
		{
			if (i == 0 || i == 1)
			{
				Nhap.day[x] = HS[h].NgaySinh[i];
				x++;
			}
			if (i == 3 || i == 4)
			{
				Nhap.month[j] = HS[h].NgaySinh[i];
				j++;
			}
			if (i >= 6 && i <= 9)
			{
				Nhap.year[z] = HS[h].NgaySinh[i];
				z++;
			}
		}
		int cout = 0;
		for (int i = 0; i < z; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.year[i];
			cout++;
		}
		HS[h].NgaySinh[cout] = '/';
		cout++;
		for (int i = 0; i < j; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.month[i];
			cout++;
		}
		HS[h].NgaySinh[cout] = '/';
		cout++;
		for (int i = 0; i < j; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.day[i];
			cout++;
			if (i == j - 1)
			{
				HS[h].NgaySinh[cout] = '\0';
				cout++;
			}
		}
	}
}
void swapDate2(vector <HoSo> &HS)
{
	Date Nhap;
	for (int unsigned h = 0; h < HS.size(); h++)
	{
		int x = 0, j = 0, z = 0;
		for (int unsigned i = 0; i < strlen(HS[h].NgaySinh); i++)
		{
			if (i >= 0 && i <= 3)
			{
				Nhap.year[x] = HS[h].NgaySinh[i];
				x++;
			}
			if (i == 5 || i == 6)
			{
				Nhap.month[j] = HS[h].NgaySinh[i];
				j++;
			}
			if (i == 8 || i == 9)
			{
				Nhap.day[z] = HS[h].NgaySinh[i];
				z++;
			}
		}
		int cout = 0;
		for (int i = 0; i < z; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.day[i];
			cout++;
		}
		HS[h].NgaySinh[cout] = '/';
		cout++;
		for (int i = 0; i < j; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.month[i];
			cout++;
		}
		HS[h].NgaySinh[cout] = '/';
		cout++;
		for (int i = 0; i < x; i++)
		{
			HS[h].NgaySinh[cout] = Nhap.year[i];
			cout++;
			if (i == x - 1)
			{
				HS[h].NgaySinh[cout] = '\0';
				cout++;
			}
		}
	}
}
void ChangePoint(float x, char A[])
{
	char temp[10];
	_itoa(x * 100, temp, 10);
	int leng = (strlen(temp));
	int i = 0;
	for (int j = 0; j < 4; j++)
	{
		if ((j == 1) && leng <= 3)
		{
			A[i] = '.';
			i++;
		}
		if ((j == 2) && leng == 4)
		{
			A[i] = '.';
			i++;
		}
		if ((j == 0) && leng <= 3)
		{
			A[i] = '0';
			i++;
		}
		A[i] = temp[j];
		i++;
		temp[j] = NULL;
		if (j == leng - 1)
		{
			A[i] = '\0';
			i++;
		}
	}
}
void ChangePSeach(float x, char A[])
{
	if (x > 10.0)return;
	char temp[5];
	_itoa(x * 100, temp, 10);
	int i = 0;
	for (int j = 0; j < 4; j++)
	{
		if ((j == 1) && (strlen(temp) == 3))
		{
			A[i] = '.';
			i++;
		}
		if ((j == 2) && (strlen(temp) == 4))
		{
			A[i] = '.';
			i++;
		}
		A[i] = temp[j];
		i++;
		if (j == 4 || j == 3)
		{
			A[i] = '\0';
			i++;
		}
		//temp[j] = NULL;
	}
}
/*-------------SX Mã L?p --------------------*/
void SX_Chon_MaLop(vector <HoSo> &HS, int n)
{
	if (HS.size() == 0){ return; }
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanhChuoi(HS[i].MaLop, HS[j].MaLop) == 1)
			{
				Swap_change(HS[i], HS[j]);
			}
		}
	}
	return;
}
void SX_Chen_MaLop(vector <HoSo> &HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j >0; j--)
		{
			if (SoSanhChuoi(HS[j].MaLop, HS[j - 1].MaLop) == -1)
			{
				Swap_change(HS[j], HS[j - 1]);
			}
		}
	}
	return;
}
void SX_NoiBot_MaLop(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (SoSanhChuoi(HS[j].MaLop, HS[j + 1].MaLop) == 1)
			{
				Swap_change(HS[j], HS[j + 1]);
			}
		}
	}
	return;
}
void SX_QuickSort_MaLop(vector<HoSo>&HS, int left, int right)
{
	if (HS.size() == 0){ return; }
	HoSo hoso_tg;
	int i = left;
	int j = right;
	int tg = int(left + right) / 2;
	hoso_tg = HS[tg];
	while (i <= j)
	{
		while (SoSanhChuoi(HS[i].MaLop, hoso_tg.MaLop) == -1 && i <= right)
		{
			i++;
		}
		while (SoSanhChuoi(HS[j].MaLop, hoso_tg.MaLop) == 1 && j >= left)
		{
			j--;
		}
		if (i <= j)
		{
			Swap_change(HS[i], HS[j]);
			i++;
			j--;
		}
	}
	if (left < j)
	{
		SX_QuickSort_MaLop(HS, left, j);
	}
	if (i < right)
	{
		SX_QuickSort_MaLop(HS, i, right);
	}
	return;
}
/*-----------S?p X?p Mã SV---------------*/
void SX_Chon_MaSV(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanhChuoi(HS[i].MaSV, HS[j].MaSV) == 1)
			{
				Swap_change(HS[i], HS[j]);
			}
		}
	}
	return;
}
void SX_Chen_MaSV(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j >0; j--)
		{
			if (SoSanhChuoi(HS[j].MaSV, HS[j - 1].MaSV) == -1)
			{
				Swap_change(HS[j], HS[j - 1]);
			}
		}
	}
	return;
}
void SX_NoiBot_MaSV(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (SoSanhChuoi(HS[j].MaSV, HS[j + 1].MaSV) == 1)
			{
				Swap_change(HS[j], HS[j + 1]);
			}
		}
	}
	return;
}
void SX_QuickSort_MaSV(vector <HoSo>&HS, int left, int right)
{
	if (HS.size() == 0){ return; }
	HoSo hoso_tg;
	int i = left;
	int j = right;
	int tg = int(left + right) / 2;
	hoso_tg = HS[tg];

	while (i <= j)
	{
		while (SoSanhChuoi(HS[i].MaSV, hoso_tg.MaSV) == -1 && i <= right)
		{
			i++;
		}
		while (SoSanhChuoi(HS[j].MaSV, hoso_tg.MaSV) == 1 && j >= left)
		{
			j--;
		}

		if (i <= j)
		{
			Swap_change(HS[i], HS[j]);
			i++;
			j--;
		}
	}
	if (left < j)
	{
		SX_QuickSort_MaSV(HS, left, j);
	}
	if (i < right)
	{
		SX_QuickSort_MaSV(HS, i, right);
	}
	return;
}
/*-----------S?p X?p H? tên---------------*/
void SX_Chon_HoTen(vector <HoSo> &HS, int n)
{
	char temp1[50], temp2[50];
	if (HS.size() == 0){ return; }
	for (int i = 0; i < n - 1; i++)
	{
		DaoChuoi(HS[i].Hoten, temp1);
		for (int j = i + 1; j < n; j++)
		{
			DaoChuoi(HS[j].Hoten, temp2);
			if (SoSanhChuoi(temp1, temp2) == 1)
			{
				Swap_change(HS[i], HS[j]);
			}
		}
	}
	return;
}
void SX_Chen_HoTen(vector <HoSo>&HS, int n)
{
	char temp1[50], temp2[50];
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		DaoChuoi(HS[i].Hoten, temp1);
		for (j = i; j >0; j--)
		{
			DaoChuoi(HS[j - 1].Hoten, temp2);
			if (SoSanhChuoi(temp1, temp2) == -1)
			{
				Swap_change(HS[j], HS[j - 1]);
			}
		}
	}
	return;
}
void SX_NoiBot_HoTen(vector <HoSo>&HS, int n)
{
	char temp1[50], temp2[50];
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			DaoChuoi(HS[j].Hoten, temp1);
			DaoChuoi(HS[j + 1].Hoten, temp2);
			if (SoSanhChuoi(temp1, temp2) == 1)
			{
				Swap_change(HS[j], HS[j + 1]);
			}
		}
	}
	return;
}
void SX_QuickSort_HoTen(vector <HoSo>&HS, int left, int right)
{
	char temp1[50], temp2[50], temp3[50];
	if (HS.size() == 0){ return; }
	HoSo hoso_tg;
	int i = left;
	int j = right;
	int tg = int(left + right) / 2;
	hoso_tg = HS[tg];
	DaoChuoi(hoso_tg.Hoten, temp3);
	while (i <= j)
	{
		DaoChuoi(HS[i].Hoten, temp1);
		while (SoSanhChuoi(temp1, temp3) == -1 && i <= right)
		{
			i++;
			DaoChuoi(HS[i].Hoten, temp1);
		}
		DaoChuoi(HS[j].Hoten, temp2);
		while (SoSanhChuoi(temp2, temp3) == 1 && j >= left)
		{
			j--;
			if (j > 0)
				DaoChuoi(HS[j].Hoten, temp2);
		}
		if (i <= j)
		{
			Swap_change(HS[i], HS[j]);
			i++;
			j--;
		}
	}
	if (left < j)
	{
		SX_QuickSort_HoTen(HS, left, j);
	}
	if (i < right)
	{
		SX_QuickSort_HoTen(HS, i, right);
	}
	return;
}
/*-----------S?p X?p Ngày sinh---------------*/
void SX_Chon_NgaySinh(vector <HoSo> &HS, int n)
{

	if (HS.size() == 0){ return; }
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (SoSanhChuoi(HS[i].NgaySinh, HS[j].NgaySinh) == 1)
			{
				Swap_change(HS[i], HS[j]);
			}
		}
	}
	return;
}
void SX_Chen_NgaySinh(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i; j >0; j--)
		{
			if (SoSanhChuoi(HS[j].NgaySinh, HS[j - 1].NgaySinh) == -1)
			{
				Swap_change(HS[j], HS[j - 1]);
			}
		}
	}
	return;
}
void SX_NoiBot_NgaySinh(vector <HoSo>&HS, int n)
{
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (SoSanhChuoi(HS[j].NgaySinh, HS[j + 1].NgaySinh) == 1)
			{
				Swap_change(HS[j], HS[j + 1]);
			}
		}
	}
	return;
}
void SX_QuickSort_NgaySinh(vector <HoSo>&HS, int left, int right)
{
	if (HS.size() == 0){ return; }
	HoSo hoso_tg;
	int i = left;
	int j = right;
	int tg = int(left + right) / 2;
	hoso_tg = HS[tg];
	while (i <= j)
	{
		while (SoSanhChuoi(HS[i].NgaySinh, hoso_tg.NgaySinh) == -1 && i <= right)
		{
			i++;
		}
		while (SoSanhChuoi(HS[j].NgaySinh, hoso_tg.NgaySinh) == 1 && j >= left)
		{
			j--;
		}
		if (i <= j)
		{
			Swap_change(HS[i], HS[j]);
			i++;
			j--;
		}
	}
	if (left < j)
	{
		SX_QuickSort_NgaySinh(HS, left, j);
	}
	if (i < right)
	{
		SX_QuickSort_NgaySinh(HS, i, right);
	}
	return;
}
/*-----------S?p X?p Ði?m TB---------------*/
void SX_Chon_DiemTB(vector <HoSo> &HS, int n)
{
	char Temp1[10], Temp2[10];
	if (HS.size() == 0){ return; }
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			ChangePoint(HS[i].DiemTB, Temp1);
			ChangePoint(HS[j].DiemTB, Temp2);
			if (SoSanhChuoi(Temp1, Temp2) == -1)
			{
				Swap_change(HS[i], HS[j]);
			}
		}
	}
	return;
}
void SX_Chen_DiemTB(vector <HoSo>&HS, int n)
{
	char Temp1[10], Temp2[10];
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		ChangePoint(HS[i].DiemTB, Temp1);
		for (j = i; j >0; j--)
		{
			ChangePoint(HS[j - 1].DiemTB, Temp2);
			if (SoSanhChuoi(Temp1, Temp2) == 1)
			{
				Swap_change(HS[j], HS[j - 1]);
			}
		}
	}
	return;
}
void SX_NoiBot_DiemTB(vector <HoSo>&HS, int n)
{
	char Temp1[10], Temp2[10];
	if (HS.size() == 0){ return; }
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			ChangePoint(HS[j].DiemTB, Temp1);
			ChangePoint(HS[j + 1].DiemTB, Temp2);
			if (SoSanhChuoi(Temp1, Temp2) == -1)
			{
				Swap_change(HS[j], HS[j + 1]);
			}
		}
	}
	return;
}
void SX_QuickSort_DiemTB(vector <HoSo>&HS, int left, int right)
{
	char Temp1[10], Temp2[10], temp3[10];
	if (HS.size() == 0){ return; }
	HoSo hoso_tg;
	int i = left;
	int j = right;
	int tg = int(left + right) / 2;
	hoso_tg = HS[tg];
	ChangePoint(hoso_tg.DiemTB, temp3);
	while (i <= j)
	{
		ChangePoint(HS[i].DiemTB, Temp1);
		while (SoSanhChuoi(Temp1, temp3) == 1 && i <= right)
		{
			i++;
			ChangePoint(HS[i].DiemTB, Temp1);
		}
		ChangePoint(HS[j].DiemTB, Temp2);
		while (SoSanhChuoi(Temp2, temp3) == -1 && j >= left)
		{
			j--;
			if (j > 0)
				ChangePoint(HS[j].DiemTB, Temp2);
		}
		if (i <= j)
		{
			Swap_change(HS[i], HS[j]);
			i++;
			j--;
		}
	}
	if (left < j)
	{
		SX_QuickSort_DiemTB(HS, left, j);
	}
	if (i < right)
	{
		SX_QuickSort_DiemTB(HS, i, right);
	}
	return;
}
/*---------------Main------------------------*/
void Menu_sx_DoiMau1(int ToaDo)
{
	int a = 50;
	gotoxy(a, 7); printf("Sap Xep Chon");
	gotoxy(a, 9); printf("Sap Xep Chen");
	gotoxy(a, 11); printf("Sap Xep Noi Bot");
	gotoxy(a, 13); printf("Sap Xep Nhanh");
	gotoxy(a + 5, 15); printf("-Thoat-");
	//////////////////////////
	int i;
	for (i = 42; i < 73; i++)
	{
		gotoxy(i, 5); printf("%c", 178);
	}
	for (i = 6; i < 20; i++)
	{
		gotoxy(42, i); printf("%c", 178);

	}
	// dài du?i
	for (i = 42; i < 73; i++)
	{
		gotoxy(i, 19); printf("%c", 178);
	}

	// //RONG
	for (i = 6; i < 20; i++)
	{
		gotoxy(72, i); printf("%c", 178);
	}
	////////////////////////
	switch (ToaDo)
	{
	case 7:
		textcolor(14);
		gotoxy(a, 7); printf("Sap Xep Chon");
		textcolor(7);
		break;
	case 9:
		textcolor(14);
		gotoxy(a, 9); printf("Sap Xep Chen");;
		textcolor(7);
		break;
	case 11:
		textcolor(14);
		gotoxy(a, 11); printf("Sap Xep Noi Bot");
		textcolor(7);
		break;
	case 13:
		textcolor(14);
		gotoxy(a, 13); printf("Sap Xep Nhanh");
		textcolor(7);
		break;
	case 15:
		textcolor(12);
		gotoxy(a + 5, 15);
		printf("-Thoat-");
		textcolor(7);
		break;
	}
}
void Menu_sx_DoiMau2(char *s, int ToaDo)
{
	int a = 85;
	gotoxy(a, 7); printf("Sap Xep %s Theo Ma Lop", s);
	gotoxy(a, 9); printf("Sap Xep %s Theo Ma SV", s);
	gotoxy(a, 11); printf("Sap Xep %s Theo Ho Ten", s);
	gotoxy(a, 13); printf("Sap Xep %s Theo Ngay Sinh", s);
	gotoxy(a, 15); printf("Sap Xep %s Theo Diem TB", s);
	gotoxy(a + 5, 17); printf("-Thoat-");

	////////////////////////////////////////////////////////////////
	int slep = 10;
	int i;
	for (i = 80; i < 117; i++)
	{
		gotoxy(i, 5); printf("%c", 178);
	}
	for (i = 6; i < 20; i++)
	{
		gotoxy(80, i); printf("%c", 178);
	}
	// dài du?i
	for (i = 80; i < 117; i++)
	{
		gotoxy(i, 19); printf("%c", 178);
	}

	// //RONG
	for (i = 6; i < 20; i++)
	{
		gotoxy(116, i); printf("%c", 178);
	}
	///////////////////////////////////////////////////////////////
	switch (ToaDo)
	{
	case 7:
		textcolor(14);
		gotoxy(a, 7); printf("Sap Xep %s Theo Ma Lop", s);
		textcolor(7);
		break;
	case 9:
		textcolor(14);
		gotoxy(a, 9); printf("Sap Xep %s Theo Ma SV", s);
		textcolor(7);
		break;
	case 11:
		textcolor(14);
		gotoxy(a, 11); printf("Sap Xep %s Theo Ho Ten", s);
		textcolor(7);
		break;
	case 13:
		textcolor(14);
		gotoxy(a, 13); printf("Sap Xep %s Theo Ngay Sinh", s);
		textcolor(7);
		break;
	case 15:
		textcolor(14);
		gotoxy(a, 15); printf("Sap Xep %s Theo Diem TB", s);
		textcolor(7);
		break;
	case 17:
		textcolor(12);
		gotoxy(a + 5, 17); printf("-Thoat-");
		textcolor(7);
		break;
	}

}
void SaveFileSort(int z, char *FileName, char *s, vector <HoSo>HS)
{
	int check;
	checkExit(&check, "Save");
	if (check == -1)
	{
		clrscr();
		XoaCheckExit();
		HidePointer();
		UpdateFile(FileName, HS);
		Menu_sx_DoiMau1(z);
		Menu_sx_DoiMau2(s, 7);
		return;
	}
	clrscr();
	Menu_sx_DoiMau1(z);
	Menu_sx_DoiMau2(s, 7);
	return;
}
void MenuConSX1(vector <HoSo> &HS, char *FileName, char *s, int z)
{

	int n = HS.size();
	int x = 0, y = 0, c;
	x = 40, y = 7;
	Menu_batPhim(7);
	Menu_sx_DoiMau2(s, 7);
	while (1)
	{
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;break;
		case 72:
			y -= 2;break;
		case 27:
			int Err; checkExit(&Err, "Exit"); if (Err == -1){ clrscr(); return; }
			else{ clrscr(); Menu_sx_DoiMau2(s, y); Menu_sx_DoiMau1(z); break; }
		}
		if (c == 13)
		{
			switch (y)
			{
			case 7:
				/*Ngu?i Dùng Ðang ?n vào S?p x?p Ma Lop*/
				switch (z)
				{
				case 7:
					SX_Chon_MaLop(HS, HS.size()); break;
				case 9:
					SX_Chen_MaLop(HS, HS.size()); break;
				case 11:
					SX_NoiBot_MaLop(HS, HS.size()); break;
				case 13:
					SX_QuickSort_MaLop(HS, 0, HS.size() - 1); break;
				}
				/*In ra sau khi s?p x?p*/
				clrscr();
				OutPut(HS, FileName, n);
				SaveFileSort(z, FileName, s, HS);
				break;
			case 9:
				/*Ngu?i Dùng Ðang ?n vào S?p x?p Ma SV*/
				switch (z)
				{
				case 7:
					SX_Chon_MaSV(HS, HS.size()); break;
				case 9:
					SX_Chen_MaSV(HS, HS.size()); break;
				case 11:
					SX_NoiBot_MaSV(HS, HS.size()); break;
				case 13:
					SX_QuickSort_MaSV(HS, 0, HS.size() - 1); break;
				}
				/*In ra sau khi s?p x?p*/
				clrscr();
				OutPut(HS, FileName, n);
				SaveFileSort(z, FileName, s, HS);
				break;
			case 11:
				/*Ngu?i Dùng Ðang ?n vào S?p x?p Hoten*/
				switch (z)
				{
				case 7:
					SX_Chon_HoTen(HS, HS.size()); break;
				case 9:
					SX_Chen_HoTen(HS, HS.size()); break;
				case 11:
					SX_NoiBot_HoTen(HS, HS.size()); break;
				case 13:
					SX_QuickSort_HoTen(HS, 0, HS.size() - 1); break;
				}
				/*In ra sau khi s?p x?p*/
				clrscr();
				OutPut(HS, FileName, n);
				SaveFileSort(z, FileName, s, HS);
				break;
			case 13:
				/*Ngu?i Dùng Ðang ?n vào S?p x?p Ngay Sinh*/
				swapDate(HS);
				switch (z)
				{
				case 7:
					SX_Chon_NgaySinh(HS, HS.size()); break;
				case 9:
					SX_Chen_NgaySinh(HS, HS.size()); break;
				case 11:
					SX_NoiBot_NgaySinh(HS, HS.size()); break;
				case 13:
					SX_QuickSort_NgaySinh(HS, 0, HS.size() - 1); break;
				}
				/*In ra sau khi s?p x?p*/
				swapDate2(HS);
				clrscr();
				OutPut(HS, FileName, n);
				SaveFileSort(z, FileName, s, HS);
				break;
			case 15:
				/*Ngu?i Dùng Ðang ?n vào S?p x?p Diem TB*/
				switch (z)
				{
				case 7:
					SX_Chon_DiemTB(HS, HS.size()); break;
				case 9:
					SX_Chen_DiemTB(HS, HS.size()); break;
				case 11:
					SX_NoiBot_DiemTB(HS, HS.size()); break;
				case 13:
					SX_QuickSort_DiemTB(HS, 0, HS.size() - 1); break;
				}
				/*In ra sau khi s?p x?p*/
				clrscr();
				OutPut(HS, FileName, n);
				SaveFileSort(z, FileName, s, HS);
				break;
			case 17:
				clrscr();return;
			}
		}
		if (y > 17)	y = 7;
		if (y < 7) y = 17;
		Menu_sx_DoiMau2(s, y);
		gotoxy(x, y);
	}
}
void MainSapxep(vector <HoSo> &HS, char *FileName)
{
	int n = HS.size();
	if (n == 0){ dialogNull(); return; }
	int x = 0, y = 0, c;
	x = 40, y = 7;
	Menu_batPhim(7);
	Menu_sx_DoiMau1(7);
	while (1)
	{
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;break;
		case 72:
			y -= 2;break;
		case 27:
			int Err; checkExit(&Err, "Exit"); if (Err == -1){ clrscr(); return; }
			else{ clrscr(); Menu_sx_DoiMau1(y); break; }
		}
		if (c == 13)
		{
			switch (y)
			{
			case 7:
				MenuConSX1(HS, FileName, "Chon", y);break;
			case 9:
				MenuConSX1(HS, FileName, "Chen", y);break;
			case 11:
				MenuConSX1(HS, FileName, "Noi Bot", y);break;
			case 13:
				MenuConSX1(HS, FileName, "Nhanh", y);break;
			case 15:
				clrscr();
				pain();
				return;
			}
		}
		if (y > 15)	y = 7;
		if (y < 7) y = 15;
		Menu_sx_DoiMau1(y);
		gotoxy(x, y);
	}
}


void ThongKe_MaLop(vector<HoSo> HS)
{
	Khung_PrintfTK("Ma Lop");
	int n = HS.size();
	SX_NoiBot_MaLop(HS, n);
	TK_Class a[100];
	int j = 0;
	a[j].MaLop = HS[0].MaLop;
	for (int i = 1; i < n; i++)
	{
		if (!strcmp(a[j].MaLop, HS[i].MaLop))
		{
			a[j].soluong++;
		}
		else
		{
			j++;
			a[j].MaLop = HS[i].MaLop;
		}
	}
	if (j == 0) (j = 1);
	int b = 7, next = 1;
	HidePointer();
	for (int i = 0; i <= j; i++)
	{
		gotoxy(60, b);
		printf("%s", a[i].MaLop);
		gotoxy(88, b);
		printf("%d", a[i].soluong);
		b += 2;
		if (i + 1 == 10 * next)
		{
			next++;
			getch();
			clrscr();
			Khung_PrintfTK("Ma Lop");
			b = 7;
		}
		gotoxy(88, 28);
		printf("Next (Enter)");
		if (j == 1)break;
	}
}
void ThongKe_Point(vector<HoSo> HS)
{
	Khung_PrintfTK("Diem TB");
	int n = HS.size();
	SX_NoiBot_DiemTB(HS, n);
	TK_Point a[100];
	int j = 0;
	a[j].Point = HS[0].DiemTB;
	for (int i = 1; i < n; i++)
	{
		if (a[j].Point == HS[i].DiemTB)
		{
			a[j].soluong++;
		}
		else
		{
			j++;
			a[j].Point = HS[i].DiemTB;
		}
	}
	if (j == 0) (j = 1);
	int b = 7;
	int next = 1;
	HidePointer();
	for (int i = 0; i <= j; i++)
	{
		gotoxy(65, b);
		printf("%0.2f", a[i].Point);
		gotoxy(88, b);
		printf("%d", a[i].soluong);
		b += 2;
		if (i + 1 == 10 * next)
		{
			next++;
			getch();
			clrscr();
			Khung_PrintfTK("Diem TB");
			b = 7;
		}
		gotoxy(88, 28);
		printf("Next (Enter)");
		if (j == 1)break;
	}
}
/*----------Ð?m SV theo Ði?m---------------*/
int SoSVGioi(vector <HoSo>HS, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (HS[i].DiemTB >= 8){ count++; }
	}return count;
}
int SoSVKha(vector <HoSo>HS, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ((HS[i].DiemTB < 8) && ((HS[i].DiemTB >= 6.5))){ count++; }
	}return count;
}
int SoSVTB(vector <HoSo>HS, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ((HS[i].DiemTB < 6.5) && ((HS[i].DiemTB >= 4))){ count++; }
	}
	return count;
}
int SoSVYeu(vector <HoSo>HS, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if ((HS[i].DiemTB < 4))	{ count++; }
	}return count;
}
void TK_Diem_color(int ToaDo)
{
	switch (ToaDo)
	{
	case 18:
		textcolor(14);
		gotoxy(50, 18);
		printf("Xem Bieu Do");
		textcolor(15);
		gotoxy(60, 20);
		printf("-Thoat-");
		break;
	case 20:
		textcolor(15);
		gotoxy(50, 18);
		printf("Xem Bieu Do");
		textcolor(12);
		gotoxy(60, 20);
		printf("-Thoat-");
		break;
	}
}
void TK_Diem(char *Loai, int loaiSV, vector <HoSo> HS, char *FileName, int n)
{
	int tongSv = n;
	int c; int y = 18; int x = 50;
	textcolor(480);
	gotoxy(45, 4);
	printf("Ti Le SV %s", Loai);
	textcolor(15);
	gotoxy(60, 6);
	printf("Tong So SV Trong Danh Sach: %d", tongSv);
	gotoxy(45, 12);
	printf("*So Luong SV %s : %d", Loai, loaiSV);
	gotoxy(45, 14);
	printf("*Chiem Ti Le : %3.2f  %%", (loaiSV / (float)tongSv) * 100);
	gotoxy(50, 18);
	printf("Xem Bieu Do");
	gotoxy(60, 20);
	printf("-Thoat-");
	TK_Diem_color(18);
	while (1)
	{
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;
			break;
		case 72:
			y -= 2;
			break;
		}
		if (c == 13)
		{
			switch (y)
			{
			case 18:
				clrscr();
				Khung_BieuDo(HS, n);
				getch();
				clrscr();
				TK_Diem(Loai, loaiSV, HS, FileName, n);
				return;
				break;
			case 20:
				clrscr();
				return;
				break;
			}
		}
		if (y > 20)	y = 18;
		if (y < 18) y = 20;
		TK_Diem_color(y);
		gotoxy(x, y);
	}
}
/*----------main Th?ng Kê--------------*/
void menu1z()
{
	int a = 45;
	gotoxy(a, 8); ChayChu("1. Bao Cao So Luong SV Theo Lop");
	gotoxy(a, 10); ChayChu("2. Thong Ke Xep Loai SV");
	gotoxy(a, 12); ChayChu("3. Bao Cao So Luong SV Theo Diem");
	gotoxy(a + 5, 14); ChayChu("-Thoat-");
}
void Menu_ThongKe_DoiMau1(int ToaDo)
{
	int a = 45;
	switch (ToaDo)
	{

	case 8:
		textcolor(14);
		gotoxy(a, 8); printf("1. Bao Cao So Luong SV Theo Lop");
		textcolor(7);
		gotoxy(a, 12); printf("3. Bao Cao So Luong SV Theo Diem");
		gotoxy(a, 10); printf("2. Thong Ke Xep Loai SV");
		gotoxy(a + 5, 14); printf("-Thoat-");
		break;
	case 10:
		textcolor(14);
		gotoxy(a, 10); printf("2. Thong Ke Xep Loai SV");
		textcolor(7);
		gotoxy(a, 8); printf("1. Bao Cao So Luong SV Theo Lop");
		gotoxy(a, 12); printf("3. Bao Cao So Luong SV Theo Diem");
		gotoxy(a + 5, 14); printf("-Thoat-");
		break;
	case 12:
		textcolor(14);
		gotoxy(a, 12); printf("3. Bao Cao So Luong SV Theo Diem");
		textcolor(7);
		gotoxy(a + 5, 14); printf("-Thoat-");
		gotoxy(a, 10); printf("2. Thong Ke Xep Loai SV");
		gotoxy(a, 8); printf("1. Bao Cao So Luong SV Theo Lop");
		break;
	case 14:
		textcolor(12);
		gotoxy(a + 5, 14); printf("-Thoat-");
		textcolor(7);
		gotoxy(a, 8); printf("1. Bao Cao So Luong SV Theo Lop");
		gotoxy(a, 10); printf("2. Thong Ke Xep Loai SV");
		gotoxy(a, 12); printf("3. Bao Cao So Luong SV Theo Diem");
		break;
	}
}
void Menu_ThongKe_DoiMau2(int Toado)
{
	int a = 85;
	gotoxy(a, 8); printf("Thong Ke Ti Le SV Gioi");
	gotoxy(a, 10); printf("Thong Ke Ti Le SV Kha");
	gotoxy(a, 12); printf("Thong Ke Ti Le SV Trung Binh");
	gotoxy(a, 14); printf("Thong Ke Ti Le SV yeu");
	gotoxy(a + 5, 16); printf("-Thoat-");
	////////////////////////////////////////////////////////////////
	for (int i = 3; i < 30; i++)
	{
		gotoxy(80, i); printf("%c", 186);
	}
	char c5 = 202; // ?ng cam lên
	char c6 = 203; // ?ng c?m xu?ng
	gotoxy(80, 2);
	printf("%c", 203);
	gotoxy(80, 30);
	printf("%c", 202);
	///////////////////////////////////////////////////////////////
	switch (Toado)
	{
	case 8:
		textcolor(14);
		gotoxy(a, 8); printf("Thong Ke Ti Le SV Gioi");
		textcolor(7);
		break;
	case 10:
		textcolor(14);
		gotoxy(a, 10); printf("Thong Ke Ti Le SV Kha");
		textcolor(7);
		break;
	case 12:
		textcolor(14);
		gotoxy(a, 12); printf("Thong Ke Ti Le SV Trung Binh");
		textcolor(7);
		break;
	case 14:
		textcolor(14);
		gotoxy(a, 14); printf("Thong Ke Ti Le SV yeu");
		textcolor(7);
		break;
	case 16:
		textcolor(14);
		gotoxy(a + 5, 16); printf("-Thoat-");
		textcolor(7);
		break;
	}
}
void Main_con_ThongKe(vector<HoSo> HS, char* FileName, int n)
{
	int x = 0, y = 0, c;
	x = 40, y = 8;
	Menu_batPhim(9);
	Menu_ThongKe_DoiMau2(8);
	while (1)
	{
		c = getch();
		switch (c)
		{
		case 80:
			y += 2;
			break;
		case 72:
			y -= 2;
			break;
		case 27:
			int Err; checkExit(&Err, "Exit"); if (Err == -1){ clrscr(); return; }
			else{ clrscr(); Menu_ThongKe_DoiMau1(10); Menu_ThongKe_DoiMau2(y); break; }
		}
		if (c == 13)
		{
			switch (y)
			{
			case 8:
				clrscr();pain();
				TK_Diem("Gioi", SoSVGioi(HS, n), HS, FileName, n);
				Menu_ThongKe_DoiMau1(10);
				break;
			case 10:
				clrscr();pain();
				TK_Diem("Kha", SoSVKha(HS, n), HS, FileName, n);
				Menu_ThongKe_DoiMau1(10);
				break;
			case 12:
				clrscr();
				pain();
				TK_Diem("Trung Binh", SoSVTB(HS, n), HS, FileName, n);
				Menu_ThongKe_DoiMau1(10);
				break;
			case 14:
				clrscr();pain();
				TK_Diem("Yeu", SoSVYeu(HS, n), HS, FileName, n);
				Menu_ThongKe_DoiMau1(10);
				break;
			case 16:
				pain();clrscr();
				return;
			}
		}
		if (y > 16)	y = 8;
		if (y < 8) y = 16;
		Menu_ThongKe_DoiMau2(y);
		gotoxy(x, y);
	}
}
void Main_ThongKe(vector <HoSo> HS, char* FileName, int n)
{
	int tongSv = HS.size();
	if (tongSv == 0){dialogNull();return;}
	HidePointer();
	{
		int x = 0, y = 0, c;
		x = 40, y = 8;
		Menu_batPhim(9);menu1z();Menu_ThongKe_DoiMau1(8);
		while (1)
		{
			fflush(stdin);
			c = getch();
			switch (c)
			{
			case 80:
				y += 2;
				break;
			case 72:
				y -= 2;
				break;
			case 27:
				int Err; checkExit(&Err, "Exit"); if (Err == -1){ clrscr(); return; }
				else{ clrscr(); pain(); Menu_ThongKe_DoiMau1(y); break; }
			}
			if (c == 13)
			{
				switch (y)
				{
				case 8:
					clrscr();
					ThongKe_MaLop(HS);
					getch();
					clrscr();
					break;
				case 10:
					Main_con_ThongKe(HS, FileName, n);
					break;
				case 12:
					clrscr();
					ThongKe_Point(HS);
					getch();
					clrscr();
					break;
				case 14:
					clrscr();
					pain();
					return;
					break;
				}
			}
			if (y > 14)	y = 8;
			if (y < 8) y = 14;
			Menu_ThongKe_DoiMau1(y);
			gotoxy(x, y);
		}
	}
}
/*----------Bi?u d?---------------*/
void xuly_BieuDo(vector <HoSo>HS, int n)
{
	float pt_gioi, pt_kha, pt_tb, pt_yeu;
	pt_gioi = ((float)SoSVGioi(HS, n) / n) * 100;
	pt_kha = ((float)SoSVKha(HS, n) / n) * 100;
	pt_tb = ((float)SoSVTB(HS, n) / n) * 100;
	pt_yeu = ((float)SoSVYeu(HS, n) / n) * 100;
	int Tang = 24;
	/////Yeues
	textcolor(12);
	for (float j = 0; j < pt_yeu; (float)(j += 6))
	{
		gotoxy(59, Tang);printf("%c%c%c", 178, 178, 178);
		Tang -= 1;
	}
	textcolor(7);
	gotoxy(58, Tang);printf("%0.2f%%", pt_yeu);
	/////Tb
	Tang = 24;
	textcolor(8);
	for (float j = 0; j < pt_tb; (float)(j += 5.5))
	{
		gotoxy(71, Tang);printf("%c%c%c", 178, 178, 178);
		Tang -= 1;
	}textcolor(7);
	gotoxy(70, Tang);printf("%0.2f%%", pt_tb);
	/////Kha
	textcolor(14);
	Tang = 24;
	for (float j = 0; j < pt_kha; (float)(j += 5.5))
	{
		gotoxy(83, Tang);printf("%c%c%c", 178, 178, 178);
		Tang -= 1;
	}textcolor(7);
	gotoxy(82, Tang);printf("%0.2f%%", pt_kha);
	/////Gioi
	textcolor(9);
	Tang = 24;
	for (float j = 0; j < pt_gioi; (float)(j += 5.5))
	{
		gotoxy(95, Tang);printf("%c%c%c", 178, 178, 178);
		Tang -= 1;
	}textcolor(7);
	gotoxy(94, Tang);printf("%0.2f%%", pt_gioi);
}
void Khung_BieuDo(vector <HoSo>HS, int n)
{
	pain();
	gotoxy(50, 4);printf("^");
	gotoxy(47, 3);printf("(%%)");
	gotoxy(50, 25);printf("%c", 192);
	for (int i = 51; i < 110; i++){
		gotoxy(i, 25);printf("%c", 196);
	}
	for (int i = 5; i < 25; i++){
		gotoxy(50, i);printf("%c", 179);
	}
	gotoxy(108, 26);printf("(Type)");
	gotoxy(110, 25);printf(">");
	for (int i = 60; i < 100; i = i + 12)
	{
		gotoxy(i, 25);
		printf("%c", 193);
		if (i == 60){
			gotoxy(i - 1, 26);printf("Yeu");
		}
		if (i == 72)
		{
			gotoxy(i, 26);printf("TB");
		}
		if (i == 84)
		{
			gotoxy(i - 1, 26);printf("Kha");
		}
		if (i == 96)
		{
			gotoxy(i - 1, 26);printf("Gioi");
		}
	}
	int PhanTram = 100;
	for (int i = 5; i < 25; i = i + 4)
	{
		gotoxy(50, i);printf("%c", 197);// ?ng C?ng
		gotoxy(46, i);printf("%d%%", PhanTram);
		PhanTram -= 20;
	}
	gotoxy(47, 25); printf("0%%");
	gotoxy(65, 28);printf("Bieu Do Thong Ke Hoc Luc SV");
	xuly_BieuDo(HS, n);
}


void Khung_checkFile(char *Xau)
{
	char unsigned c = 205;  //?ng Ngang
	char unsigned d = 186;  // ?ng d?c
	char unsigned c1 = 201; // góc trái trên
	char unsigned c2 = 200; // góc trái du?i
	char unsigned c3 = 187; // góc ph?i trên 
	char unsigned c4 = 188; // góc ph?i du?i
	char unsigned c5 = 202; // ?ng cam lên
	char unsigned c6 = 203; // ?ng c?m xu?ng

	gotoxy(0, 0);
	int i;
	textcolor(14);
	gotoxy(52, 7);
	ChayChu("Nhap Vao "); printf("%s", Xau);
	textcolor(7);
	//?ng Bên Chi?u Dài Trên t
	for (i = 35; i < 85; i++)
	{
		gotoxy(i, 8);
		printf("%c", c);

	}
	gotoxy(35, 8); printf("%c", c1);
	gotoxy(85, 8); printf("%c", c3);
	//?ng Bên Chi?u Dài Du?i 
	for (i = 35; i < 85; i++)
	{
		gotoxy(i, 10);
		printf("%c", c);
	}
	gotoxy(35, 8); printf("%c", c1);
	gotoxy(85, 8); printf("%c", c3);
	/// ?ng Bên Chi?u r?ng
	for (i = 9; i < 10; i++)
	{
		gotoxy(35, i);
		printf("%c", d);

	}
	for (i = 9; i < 10; i++)
	{
		gotoxy(85, i);
		printf("%c", d);
	}
	gotoxy(35, 10); printf("%c", c2);
	gotoxy(85, 10); printf("%c", c4);
}
int checkFile(char *Filename)
{
	int Err;
	Khung_checkFile("Ten File: ");
	do{
		EnterNameFile(Filename, 0, 50, 9, &Err);
		if (Err == -1)
		{
			HidePointer();
			textcolor(7);
			gotoxy(50, 15);
			printf("SET File Default DSSV.kBz");
			strcpy(Filename, "DSSV.kBz");
			getch();
			ShowPointer();
			return 0;
		}
		if (strlen(Filename) <= 0)
		{
			textcolor(12);
			gotoxy(54, 11);
			ChayChu("ERRO ! Empty ");
		}
	} while (strlen(Filename) <= 0);
	textcolor(7);
	gotoxy(52, 11);
	printf("                        ");
	return 1;
}
void colorMain_Extra(int toado)
{
	switch (toado)
	{
	case 11:
		gotoxy(48, 11); textcolor(14); printf("1. Type DataBase Default");
		gotoxy(48, 13); textcolor(7); printf("2. DataBase Existing");
		gotoxy(48, 15); textcolor(7); printf("3. Create New DataBase");
		gotoxy(48, 17); textcolor(7); printf(" \tExit");
		break;
	case 13:
		gotoxy(48, 11); textcolor(7); printf("1. Type DataBase Default");
		gotoxy(48, 13); textcolor(14); printf("2. DataBase Existing");
		gotoxy(48, 15); textcolor(7); printf("3. Create New DataBase");
		gotoxy(48, 17); textcolor(7); printf(" \tExit");
		break;
	case 15:
		gotoxy(48, 11); textcolor(7); printf("1. Type DataBase Default");
		gotoxy(48, 13); textcolor(7); printf("2. DataBase Existing");
		gotoxy(48, 15); textcolor(14); printf("3. Create New DataBase");
		gotoxy(48, 17); textcolor(7); printf(" \tExit");
		break;
	case 17:
		gotoxy(48, 11); textcolor(7); printf("1. Type DataBase Default");
		gotoxy(48, 13); textcolor(7); printf("2. DataBase Existing");
		gotoxy(48, 15); textcolor(7); printf("3. Create New DataBase");
		gotoxy(48, 17); textcolor(12); printf(" \tExit");
		break;
	}
}
void MenuMainExTra()
{
	FrameGioiThieu();
	gotoxy(0, 0);
	gotoxy(37, 1); textcolor(9);
	ChayChu("---------------------------------------------------");
	gotoxy(46, 5); textcolor(14); ChayChu("CHUONG TRINH QUAN LY HOC VIEN");
	gotoxy(52, 9); textcolor(12); ChayChu("Select DataBase");
	gotoxy(48, 11); textcolor(7); ChayChu("1. Type DataBase Default");
	gotoxy(48, 13); textcolor(7); ChayChu("2. DataBase Existing");
	gotoxy(48, 15); textcolor(7); ChayChu("3. Create New DataBase");
	gotoxy(48, 17); textcolor(7); ChayChu(" \tExit");
	gotoxy(36, 20); textcolor(12); ChayChu("Ctrl+I :"); textcolor(7); ChayChu(" Setting ");
	gotoxy(55, 20); textcolor(12); ChayChu("Ctrl+H :"); textcolor(7); ChayChu(" Help ");
	gotoxy(70, 20); textcolor(12); ChayChu("Ctrl+A :"); textcolor(7); ChayChu(" About");
	textcolor(7);
}
void Main_Extra(char FileName[], int *type)
{
	HidePointer();
	MenuMainExTra();
	char defaultNameFile[30] ;
	/*------------------------------*/
	int x = 0, y = 0, c;
	 y = 11;
	 colorMain_Extra(11);
	while (1)
	{	
		fflush(stdin);
		c = getch();
		switch (c)
		{
		case 80:
			y+=2;
			break;
		case 72: 
			y-=2;
			break;
		case 9: // setting
			textcolor(7);
			system("cls");
			FrameGioiThieu();
			setting(defaultNameFile);
			system("cls");
			MenuMainExTra();
			break;
		case 8:// help
			system("cls");
			FrameGioiThieu();
			Help();
			system("cls");
			MenuMainExTra();
			break;
		case 1:// about
			system("cls");
			GioiThieu();
			getch();
			system("cls");
			MenuMainExTra();
			break;
		}
		if (c == 13)
		{
			switch (y)
			{
			case 11:
				clrscr();
				GetNameDefault(defaultNameFile);
				strcpy(FileName,defaultNameFile);
				*type = 1;
				return;
			case 13:
				clrscr();
				strcpy(FileName, FileName);
				checkFile(FileName);
				*type = 2;
				return;
			case 15:
				clrscr();
				strcpy(FileName, FileName);
				checkFile(FileName);	
				*type = 3;
				return;
			case 17:
				clrscr();
				*type = 4;
				return;
				break;
			}
		}
		if (y > 17)	y = 11;
		if (y < 11) y = 17;
		colorMain_Extra(y);
	}
	ShowPointer();
}
void Menu()
{
	int a = 5;
	system("cls");
	pain();
	gotoxy(a + 6, 3);
	textcolor(252);
	printf("***MENU***");
	textcolor(7);
	//	textcolor(14);
	gotoxy(a, 5);
	ChayChu("1. Them Moi Ho So");
	gotoxy(a, 6);
	ChayChu("2. In Danh Sach");
	gotoxy(a, 7);
	ChayChu("3. Sap Xep");
	gotoxy(a, 8);
	ChayChu("4. Tim Kiem");
	gotoxy(a, 9);
	ChayChu("5. Thong Ke");
	gotoxy(a, 10);
	ChayChu("6. Thoat");
	gotoxy(a, 5);
}
void Menu_batPhim(int Toado)
{
	int a = 5;
	//	XoaManHinh();
	//	pain();
	gotoxy(a + 6, 3);
	textcolor(415);
	printf("***MENU***");
	textcolor(7);
	gotoxy(a, 5);
	printf("1. Them Moi Ho So");
	gotoxy(a, 6);
	printf("2. In Danh Sach");
	gotoxy(a, 7);
	printf("3. Sap Xep");
	gotoxy(a, 8);
	printf("4. Tim Kiem");
	gotoxy(a, 9);
	printf("5. Thong Ke");
	gotoxy(a, 10);
	printf("6. Thoat");
	gotoxy(a, 5);

	switch (Toado)
	{
	case 5:
		textcolor(14);
		gotoxy(a, 5);
		printf("1. Them Moi Ho So");
		textcolor(7);
		break;
	case 6:
		textcolor(14);
		gotoxy(a, 6);
		printf("2. In Danh Sach");
		textcolor(7);
		break;
	case 7:

		textcolor(14);
		gotoxy(a, 7);
		printf("3. Sap Xep");
		textcolor(7);
		break;
	case 8:
		textcolor(14);
		gotoxy(a, 8);
		printf("4. Tim Kiem");
		textcolor(7);
		break;
	case 9:
		textcolor(14);
		gotoxy(a, 9);
		printf("5. Thong Ke");
		textcolor(7);
		break;
	case 10:
		textcolor(12);
		gotoxy(a, 10);
		printf("6. Thoat");
		textcolor(7);
		break;
	}

}
/*------------------------*/
void ChuyenControUpDown(int *ToaDo, int Trang, int trangcuoi, int *Oy)
{
	int x, y, c;
	x = 36, y = 7;
	gotoxy(x, y);
	printf("=>");
	int i = 0;
	while (1)
	{

		fflush(stdin);
		c = getch();
		switch (c)
		{
		case 80:
			if (y == 25)
			{
				y += 3;
				gotoxy(x, y - 3);
				printf("  ");
				textcolor(12);
				gotoxy(43, 28);
				printf("Cancel");
			}
			else
			{
				y += 2;
				gotoxy(x, y - 2);
				printf("  ");
				textcolor(7);
				gotoxy(43, 28);
				printf("Cancel");
			}

			break;
		case 72:
			if (y == 28)
			{
				y -= 3;
				gotoxy(x, y + 3);
				printf("  ");
				textcolor(7);
				gotoxy(43, 28);
				printf("Cancel");
			}
			else
			{
				if (y == 7)
				{
					textcolor(12);
					gotoxy(43, 28);
					printf("Cancel");
				}
				y -= 2;
				gotoxy(x, y + 2);
				printf("  ");
			}
		}
		if (c == 13)
		{
			switch (y)
			{
			case 7:
				*ToaDo = (10 * Trang + 1);
				*Oy = y;
				break;
			case 9:
				*ToaDo = (10 * Trang + 2);
				*Oy = y;
				break;
			case 11:
				*ToaDo = (10 * Trang + 3);
				*Oy = y;
				break;
			case 13:
				*ToaDo = (10 * Trang + 4);
				*Oy = y;
				break;
			case 15:
				*ToaDo = (10 * Trang + 5);
				*Oy = y;
				break;
			case 17:
				*ToaDo = (10 * Trang + 6);
				*Oy = y;
				break;
			case 19:
				*ToaDo = (10 * Trang + 7);
				*Oy = y;
				break;
			case 21:
				*ToaDo = (10 * Trang + 8);
				*Oy = y;
				break;
			case 23:
				*ToaDo = (10 * Trang + 9);
				*Oy = y;
				break;
			case 25:
				*ToaDo = (10 * Trang + 10);
				*Oy = y;
				break;
			case 28:
				*ToaDo = -1;
				break;
			}
		}
		//// trang cu?i n/10+1
		if (y > 28)	y = 7;
		if (y < 7) y = 28;
		gotoxy(x, y);
		printf("=>");
		if (c == 13) break;

	}
}
void ChuyenControLeftRight(int *ToaDoOx, int *Ox, int Oy)
{
	//int *ToaDo, int Trang, int trangcuoi
	int x, y, c;
	x = 45, y = Oy;
	int i = 0;
	gotoxy(x, y);
	printf("*");
	while (1)
	{
		fflush(stdin);
		c = getch();
		switch (c)
		{
		case 77:
			if (x == 58){ x += 11; gotoxy(x - 11, y); printf(" "); break; }
			if (x == 69){ x += 24; gotoxy(x - 24, y); printf(" "); break; }
			if (x == 93){ x += 17; gotoxy(x - 17, y); printf(" "); break; }
			{x += 13; gotoxy(x - 13, y); printf(" "); }
			break;
		case 75:
			if (x == 69){ x -= 11; gotoxy(x + 11, y); printf(" "); break; }
			if (x == 93){ x -= 24; gotoxy(x + 24, y); printf(" "); break; }
			if (x == 110){ x -= 17; gotoxy(x + 17, y); printf(" "); break; }
			{x -= 13; gotoxy(x + 13, y); printf(" "); }
			break;
		case 27:
		{
				   return;
		}
		}
		if (c == 13)
		{
			switch (x)
			{
			case 45:
				*ToaDoOx = 1;
				*Ox = x;
				break;
			case 58:
				*ToaDoOx = 2;
				*Ox = x;
				break;
			case 69:
				*ToaDoOx = 3;
				*Ox = x;
				break;
			case 93:
				*ToaDoOx = 4;
				*Ox = x;
				break;
			case 110:
				*ToaDoOx = 5;
				*Ox = x;
				break;
			}
		}
		if (x > 110) x = 45;
		if (x < 45) x = 110;
		gotoxy(x, y);
		printf("*");
		if (c == 13) break;

	}
}
