*请在您的dll里面声明一个DebugProc函数，并且把处理消息放在里面。原型如下：
DWORD __stdcall DebugProc(DWORD message,PVOID additional_data)
并且包含Debugger.h

message：调试器发送的消息。
additional_message：额外的数据。

返回值：
	一般情况下：RETURN_NOT_HANDLED为拒绝处理，RETURN_HANDLED为已经处理，RETURN_NOT_OUTPUT为不要通知用户。
	如果收到MSG_EXIT_PROCESS消息，返回任何值都是无效的。


消息含义：
	MSG_LOAD(0x00000000)：插件被加载了，additional_data指向编辑框的句柄，您可以通过SetWindowText设置内容。
	MSG_UNLOAD(0x00000001)：插件被卸载了。
	MSG_CREATE_PROCESS(0x00000002)：一个程序被加载了，additional_data指向程序的路径。（WCHAR）
	MSG_CREATE_THREAD(0x00000003)：被调试的进程创建了一个新进程。
	MSG_EXIT_PROCESS(0x00000004)：被调试的进程退出了，此时返回任何值都是无效的。
	MSG_EXCEPTION(0x00000005)：发生异常，additional_data为具体的异常代码 ,具体见下。
	MSG_EXIT_THREAD(0x00000006)：被调试的进程里面的一个线程退出了。
	MSG_RIP(0x00000007)：被调试的进程发生了系统错误。
	MSG_UNLOAD_DLL(0x00000008)：被调试的进程卸载了一个DLL。
	MSG_OUTPUT_DEBUG_STRING(0x00000009)：被调试的进程通过OutputDebugString输出了一个字符串，additional_data指向被输出的字符串（WCHAR）

另：

EXCEPTION_ACCESS_VIOLATION

0xC0000005

程序企图读写一个不可访问的地址时引发的异常。例如企图读取0地址处的内存。

EXCEPTION_ARRAY_BOUNDS_EXCEEDED

0xC000008C

数组访问越界时引发的异常。

EXCEPTION_BREAKPOINT

0x80000003

触发断点时引发的异常。

EXCEPTION_DATATYPE_MISALIGNMENT

0x80000002

程序读取一个未经对齐的数据时引发的异常。

EXCEPTION_FLT_DENORMAL_OPERAND

0xC000008D

如果浮点数操作的操作数是非正常的，则引发该异常。所谓非正常，即它的值太小以至于不能用标准格式表示出来。

EXCEPTION_FLT_DIVIDE_BY_ZERO

0xC000008E

浮点数除法的除数是0时引发该异常。

EXCEPTION_FLT_INEXACT_RESULT

0xC000008F

浮点数操作的结果不能精确表示成小数时引发该异常。

EXCEPTION_FLT_INVALID_OPERATION

0xC0000090

该异常表示不包括在这个表内的其它浮点数异常。

EXCEPTION_FLT_OVERFLOW

0xC0000091

浮点数的指数超过所能表示的最大值时引发该异常。

EXCEPTION_FLT_STACK_CHECK

0xC0000092

进行浮点数运算时栈发生溢出或下溢时引发该异常。

EXCEPTION_FLT_UNDERFLOW

0xC0000093

浮点数的指数小于所能表示的最小值时引发该异常。

EXCEPTION_ILLEGAL_INSTRUCTION

0xC000001D

程序企图执行一个无效的指令时引发该异常。

EXCEPTION_IN_PAGE_ERROR

0xC0000006

程序要访问的内存页不在物理内存中时引发的异常。

EXCEPTION_INT_DIVIDE_BY_ZERO

0xC0000094

整数除法的除数是0时引发该异常。

EXCEPTION_INT_OVERFLOW

0xC0000095

整数操作的结果溢出时引发该异常。

EXCEPTION_INVALID_DISPOSITION

0xC0000026

异常处理器返回一个无效的处理的时引发该异常。

EXCEPTION_NONCONTINUABLE_EXCEPTION

0xC0000025

发生一个不可继续执行的异常时，如果程序继续执行，则会引发该异常。

EXCEPTION_PRIV_INSTRUCTION

0xC0000096

程序企图执行一条当前CPU模式不允许的指令时引发该异常。

EXCEPTION_SINGLE_STEP

0x80000004

标志寄存器的TF位为1时，每执行一条指令就会引发该异常。主要用于单步调试。

EXCEPTION_STACK_OVERFLOW

0xC00000FD

栈溢出时引发该异常。