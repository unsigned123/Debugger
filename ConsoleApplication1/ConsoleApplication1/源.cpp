#include<Windows.h>

int main()
{
	RaiseException(0, 0, 0, NULL);
	MessageBox(NULL, TEXT("�ǵ����������ң�С�ܸм�������"), TEXT("��л"), MB_OK);
	OutputDebugString(TEXT("JIJEIJQWIEJIQWJE"));
	int a = 0;
	int b = 9;
	int c = b / a / 0;
	__asm
	{
		INT 3;
	};
	return 0;
}