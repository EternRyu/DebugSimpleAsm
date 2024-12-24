option casemap:none

includelib kernel32.lib
includelib user32.lib
includelib shell32.lib
includelib dbghelp.lib
includelib ntdll.lib

;includelib ucrtd.lib
;includelib vcruntimed.lib
;includelib msvcrtd.lib
;includelib msvcrt.lib
includelib libucrtd.lib
includelib libvcruntimed.lib
includelib libcmtd.lib
includelib msvcmrtd.lib

includelib Zycore.lib
includelib Zydis.lib

;printf PROTO  arg1:PTR byte
EXTRN fopen:proc
EXTRN fopen_s:proc
EXTRN printf:proc
EXTRN wcstombs:proc
EXTRN fseek:proc
EXTRN fread:proc
EXTRN MessageBoxA:proc
EXTRN fclose:proc
EXTRN CreateProcessA:proc
EXTRN GetLastError:proc
EXTRN system:proc
EXTRN WaitForDebugEvent:proc
EXTRN ContinueDebugEvent:proc
EXTRN OpenProcess:proc
EXTRN CloseHandle:proc
EXTRN ReadProcessMemory:proc
EXTRN WriteProcessMemory:proc
EXTRN memset:proc
EXTRN memcpy:proc
EXTRN OpenThread:proc
EXTRN ZydisDisassembleIntel:proc
EXTRN fgets:proc
EXTRN __acrt_iob_func:proc
EXTRN _strlwr_s:proc
EXTRN strlen:proc
EXTRN strtok_s:proc
EXTRN GetThreadContext:proc
EXTRN SetThreadContext:proc
EXTRN strcmp:proc
EXTRN malloc:proc
EXTRN strtoull:proc
EXTRN VirtualProtectEx:proc
EXTRN VirtualQueryEx:proc
EXTRN free:proc
EXTRN CreateFileA:proc
EXTRN GetCurrentDirectoryA:proc
EXTRN ReadFile:proc
EXTRN WriteFile:proc
EXTRN SetFilePointer:proc
EXTRN LoadLibraryA:proc
EXTRN GetProcAddress:proc
EXTRN NtQueryInformationProcess:proc
EXTRN WideCharToMultiByte:proc
;EXTRN NtWow64QueryInformationProcess64:proc