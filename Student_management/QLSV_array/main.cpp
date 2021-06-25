#include "Ham.h"

/*--------MAIN---------*/
int main()
{
	vector <HoSo> HS;
	char FileName[50];
	int type, Err;
	Main_Extra(FileName, &type);
	if (type == 3)UpdateFile(FileName, HS);
	if (type == 4)
	{
		HidePointer();
		textcolor(12);
		gotoxy(50, 9 + 2);
		ChayChu("Press [Enter] to accept Exit");
		textcolor(14);
		gotoxy(50 + 5, 10 + 3);
		ChayChu("OR [ESC] to Cancel");
		char c = getch();
		if (c == 13)Err = -1;
		textcolor(7);
		ShowPointer();
		if (Err == -1)
		{
			END();
			getch();
			return 0;
		}
		if (c == 27)
		{
			system("cls");
			HidePointer();
			main();
		}
	}
	HS = input(FileName);
	int n = HS.size();
	HidePointer();
	Menu();
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
			case 27:
				int Err;
				checkExit(&Err, "Exit");
				if (Err == -1)
				{
					END();
					getch();
					return 0;
				}
				else
				{
					XoaCheckExit();
					HidePointer();
					break;
				}
			}
			if (c == 13)
			{
				switch (y)
				{
				case 5:
					//themhs();
					ThemMoi_Hs(FileName);
					clrscr();
					break;
				case 6:
					clrscr();
					HS = input(FileName);
					OutPut(HS, FileName, HS.size());
					InFile(HS, "DanhSachSV.txt");
					clrscr();
					break;
				case 7:
					HS = input(FileName);
					MainSapxep(HS, FileName);
					break;
				case 8:
					HS = input(FileName);
					MainSearch(HS, FileName, HS.size());
					break;
				case 9:
					HS = input(FileName);
					Main_ThongKe(HS, FileName, HS.size());
					break;
				case 10:
					int Err;
					checkExit(&Err, "Exit");
					if (Err == -1)
					{
						END();
						getch();
						return 0;
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
	return 0;
}
