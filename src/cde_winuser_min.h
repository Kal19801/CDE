/* cde_winuser_min.h - r25w14: user32/gdi32 精细类型最小完备（Win32 ABI 忠实镜像）
 * 缘起：glfw 链拉的 windows.h（LEAN 语义）不含 LRESULT/WPARAM/LPARAM/LPBOOL/
 *       DEVMODEW/RAWINPUTDEVICELIST/WNDCLASSEXW/ICONINFO 等；整拉 winuser.h
 *       又与 cde_types_pdb.h 的 _GUID 撞 tag（guiddef.h 重定义）。
 * 等价性：以下布局逐字段镜像 mingw wingdi.h/winuser.h/basetsd.h（32 位），
 *         类型布局由 Win32 ABI 固定，与原版一致——与 cde_win32_compat.h 同纪律。
 * 注意：①只定义 secs 实际引用的类型；新需求按 mingw 真值逐个追加。
 *       ②数据宏通道把单字母名（x/y 等）#define 成了数据符号——结构体成员
 *         一律避用单字母（DEVMODEW 的 POINTL 分支内联为等宽 2×LONG）。 */
#pragma once

#ifndef CDE_WINUSER_MIN_H
#define CDE_WINUSER_MIN_H

/* ---- basetsd.h (32 位) / minwindef.h 真值 ----
 * ULONG_PTR/UINT_PTR 已由 cde_types_pdb.h 提供（ulong/uint）——不重复 */
typedef long LONG_PTR, *PLONG_PTR;
typedef int WINBOOL;          /* Win32 真值（cde_types 只有 BOOL=int） */
typedef UINT_PTR WPARAM;      /* minwindef.h:166 */
typedef LONG_PTR LPARAM;      /* minwindef.h:167 */
typedef LONG_PTR LRESULT;
typedef WINBOOL *LPBOOL;      /* wingdi.h 真值（WINBOOL 已存在于 cde_types） */

/* ---- wingdi.h DEVMODEW 真值（逐字段镜像；匿名 union 按 C11） ---- */
#ifndef CCHDEVICENAME
#define CCHDEVICENAME 32
#endif
#ifndef CCHFORMNAME
#define CCHFORMNAME 32
#endif
typedef struct _devicemodeW {
    WCHAR dmDeviceName[CCHDEVICENAME];
    WORD  dmSpecVersion;
    WORD  dmDriverVersion;
    WORD  dmSize;
    WORD  dmDriverExtra;
    DWORD dmFields;
    union {
        struct {
            short dmOrientation;
            short dmPaperSize;
            short dmPaperLength;
            short dmPaperWidth;
            short dmScale;
            short dmCopies;
            short dmDefaultSource;
            short dmPrintQuality;
        };
        struct {
            LONG  dmPosition_px;          /* POINTL.x —— 单字母成员避宏 */
            LONG  dmPosition_py;          /* POINTL.y */
            DWORD dmDisplayOrientation;
            DWORD dmDisplayFixedOutput;
        };
    };
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    WCHAR dmFormName[CCHFORMNAME];
    WORD  dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union {
        DWORD dmDisplayFlags;
        DWORD dmNup;
    };
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
} DEVMODEW, *PDEVMODEW;

/* ---- winuser.h 真值 ---- */
typedef struct tagRAWINPUTDEVICELIST {
    HANDLE hDevice;
    DWORD  dwType;
} RAWINPUTDEVICELIST, *PRAWINPUTDEVICELIST;

typedef struct tagWNDCLASSEXW {
    UINT    cbSize;
    UINT    style;
    void (*lpfnWndProc)(void);   /* WNDPROC——secs 只作槽位不回调，void() 指针保槽宽 */
    int     cbClsExtra;
    int     cbWndExtra;
    HINSTANCE hInstance;
    HICON   hIcon;
    HCURSOR hCursor;
    HBRUSH  hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON   hIconSm;
} WNDCLASSEXW, *PWNDCLASSEXW;

typedef struct _ICONINFO {
    WINBOOL fIcon;
    DWORD   xHotspot;
    DWORD   yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
} ICONINFO, *PICONINFO;

/* ---- cde_types_compat.h tagRECT 别名（RECT tag 真值） ---- */
typedef struct tagRECT RECT;

#endif /* CDE_WINUSER_MIN_H */
