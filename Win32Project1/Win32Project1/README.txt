*��������dll��������һ��DebugProc���������ҰѴ�����Ϣ�������档ԭ�����£�
DWORD __stdcall DebugProc(DWORD message,PVOID additional_data)
���Ұ���Debugger.h

message�����������͵���Ϣ��
additional_message����������ݡ�

����ֵ��
	һ������£�RETURN_NOT_HANDLEDΪ�ܾ�����RETURN_HANDLEDΪ�Ѿ�����RETURN_NOT_OUTPUTΪ��Ҫ֪ͨ�û���
	����յ�MSG_EXIT_PROCESS��Ϣ�������κ�ֵ������Ч�ġ�


��Ϣ���壺
	MSG_LOAD(0x00000000)������������ˣ�additional_dataָ��༭��ľ����������ͨ��SetWindowText�������ݡ�
	MSG_UNLOAD(0x00000001)�������ж���ˡ�
	MSG_CREATE_PROCESS(0x00000002)��һ�����򱻼����ˣ�additional_dataָ������·������WCHAR��
	MSG_CREATE_THREAD(0x00000003)�������ԵĽ��̴�����һ���½��̡�
	MSG_EXIT_PROCESS(0x00000004)�������ԵĽ����˳��ˣ���ʱ�����κ�ֵ������Ч�ġ�
	MSG_EXCEPTION(0x00000005)�������쳣��additional_dataΪ������쳣���� ,������¡�
	MSG_EXIT_THREAD(0x00000006)�������ԵĽ��������һ���߳��˳��ˡ�
	MSG_RIP(0x00000007)�������ԵĽ��̷�����ϵͳ����
	MSG_UNLOAD_DLL(0x00000008)�������ԵĽ���ж����һ��DLL��
	MSG_OUTPUT_DEBUG_STRING(0x00000009)�������ԵĽ���ͨ��OutputDebugString�����һ���ַ�����additional_dataָ��������ַ�����WCHAR��

��

EXCEPTION_ACCESS_VIOLATION

0xC0000005

������ͼ��дһ�����ɷ��ʵĵ�ַʱ�������쳣��������ͼ��ȡ0��ַ�����ڴ档

EXCEPTION_ARRAY_BOUNDS_EXCEEDED

0xC000008C

�������Խ��ʱ�������쳣��

EXCEPTION_BREAKPOINT

0x80000003

�����ϵ�ʱ�������쳣��

EXCEPTION_DATATYPE_MISALIGNMENT

0x80000002

�����ȡһ��δ�����������ʱ�������쳣��

EXCEPTION_FLT_DENORMAL_OPERAND

0xC000008D

��������������Ĳ������Ƿ������ģ����������쳣����ν��������������ֵ̫С�����ڲ����ñ�׼��ʽ��ʾ������

EXCEPTION_FLT_DIVIDE_BY_ZERO

0xC000008E

�����������ĳ�����0ʱ�������쳣��

EXCEPTION_FLT_INEXACT_RESULT

0xC000008F

�����������Ľ�����ܾ�ȷ��ʾ��С��ʱ�������쳣��

EXCEPTION_FLT_INVALID_OPERATION

0xC0000090

���쳣��ʾ��������������ڵ������������쳣��

EXCEPTION_FLT_OVERFLOW

0xC0000091

��������ָ���������ܱ�ʾ�����ֵʱ�������쳣��

EXCEPTION_FLT_STACK_CHECK

0xC0000092

���и���������ʱջ�������������ʱ�������쳣��

EXCEPTION_FLT_UNDERFLOW

0xC0000093

��������ָ��С�����ܱ�ʾ����Сֵʱ�������쳣��

EXCEPTION_ILLEGAL_INSTRUCTION

0xC000001D

������ͼִ��һ����Ч��ָ��ʱ�������쳣��

EXCEPTION_IN_PAGE_ERROR

0xC0000006

����Ҫ���ʵ��ڴ�ҳ���������ڴ���ʱ�������쳣��

EXCEPTION_INT_DIVIDE_BY_ZERO

0xC0000094

���������ĳ�����0ʱ�������쳣��

EXCEPTION_INT_OVERFLOW

0xC0000095

���������Ľ�����ʱ�������쳣��

EXCEPTION_INVALID_DISPOSITION

0xC0000026

�쳣����������һ����Ч�Ĵ����ʱ�������쳣��

EXCEPTION_NONCONTINUABLE_EXCEPTION

0xC0000025

����һ�����ɼ���ִ�е��쳣ʱ������������ִ�У�����������쳣��

EXCEPTION_PRIV_INSTRUCTION

0xC0000096

������ͼִ��һ����ǰCPUģʽ�������ָ��ʱ�������쳣��

EXCEPTION_SINGLE_STEP

0x80000004

��־�Ĵ�����TFλΪ1ʱ��ÿִ��һ��ָ��ͻ��������쳣����Ҫ���ڵ������ԡ�

EXCEPTION_STACK_OVERFLOW

0xC00000FD

ջ���ʱ�������쳣��