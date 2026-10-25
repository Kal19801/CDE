/* cde_win32_compat.h - r20: Win32 补缺类型/声明子集（sweep TU 用）。
 * port_prelude 刻意不拉 windows.h（INCLUDE_NONE 纪律）；cde_types 已定义的
 * 名字（HWND/HDC/LPCSTR/COLORREF/RECT/tagRECT/tagPOINT/BOOL/DWORD/UINT 等
 * r-era 惯例）一律不重复定义，本头只补 cde_types 缺口。
 * 等价性：类型布局/调用约定由 Win32 ABI 固定，与原版一致。 */
#pragma once

typedef char *LPSTR;
typedef wchar_t *LPWSTR;
typedef struct HICON__ *HICON;
typedef struct HCURSOR__ *HCURSOR;
typedef struct HINSTANCE__ *HINSTANCE;
typedef struct HBITMAP__ *HBITMAP;
typedef struct HMENU__ *HMENU;
typedef struct HBRUSH__ *HBRUSH;
typedef void *HANDLE;
typedef void *LPVOID;
typedef const void *LPCVOID;

/* kernel32/user32/gdi32 函数声明已由系统头链提供（freetype/glfw 间接拉入
 * windows.h）；此处不再重复声明以免 CC/签名冲突。类型补缺见上。 */
