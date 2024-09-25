# This file is part of the Monero P2Pool <https://github.com/SChernykh/p2pool>
# Copyright (c) 2021-2024 SChernykh <https://github.com/SChernykh>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, version 3.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.

import sys

allowedAPIs = {
	"getaddrinfo",
	"freeaddrinfo",
	"WSAPoll",
	"WSACreateEvent",
	"WSACloseEvent",
	"WSARecvFrom",
	"WSASend",
	"WSARecv",
	"WSADuplicateSocketW",
	"WSASocketW",
	"WSAIoctl",
	"getnameinfo",
	"WSASocketA",
	"GetAdaptersAddresses",
	"GetBestInterface",
	"DnsFree",
	"LoadLibraryExW",
	"RtlPcToFileHeader",
	"RtlUnwindEx",
	"GetCPInfo",
	"GetStringTypeW",
	"GetDriveTypeW",
	"DecodePointer",
	"EncodePointer",
	"FreeLibraryAndExitThread",
	"SystemTimeToTzSpecificLocalTime",
	"CreateThread",
	"LCMapStringEx",
	"ExitThread",
	"GetModuleHandleExW",
	"SetStdHandle",
	"FlsFree",
	"FlsSetValue",
	"FlsGetValue",
	"SetFilePointer",
	"SetEndOfFile",
	"UnmapViewOfFile",
	"GetLastError",
	"FlushViewOfFile",
	"CreateFileA",
	"CloseHandle",
	"CreateFileMappingA",
	"MapViewOfFile",
	"FlushFileBuffers",
	"GetStdHandle",
	"WriteConsoleA",
	"SetConsoleMode",
	"GetConsoleMode",
	"FormatMessageA",
	"SetThreadPriority",
	"GetCurrentThread",
	"SetThreadPriorityBoost",
	"IsDebuggerPresent",
	"Sleep",
	"RaiseException",
	"InitializeCriticalSection",
	"EnterCriticalSection",
	"LeaveCriticalSection",
	"DeleteCriticalSection",
	"QueryPerformanceCounter",
	"QueryPerformanceFrequency",
	"GetTickCount",
	"FreeLibrary",
	"GetProcAddress",
	"LoadLibraryA",
	"SetHandleInformation",
	"WaitForSingleObject",
	"GetCurrentThreadId",
	"TryEnterCriticalSection",
	"GetCurrentProcessId",
	"GetHandleInformation",
	"SetLastError",
	"CreateIoCompletionPort",
	"GetQueuedCompletionStatusEx",
	"InitializeSRWLock",
	"ReleaseSRWLockExclusive",
	"ReleaseSRWLockShared",
	"AcquireSRWLockExclusive",
	"AcquireSRWLockShared",
	"InitOnceExecuteOnce",
	"GetTickCount64",
	"GetModuleHandleW",
	"SetFileCompletionNotificationModes",
	"WideCharToMultiByte",
	"DuplicateHandle",
	"TryAcquireSRWLockExclusive",
	"TryAcquireSRWLockShared",
	"InitializeConditionVariable",
	"WakeConditionVariable",
	"WakeAllConditionVariable",
	"SleepConditionVariableCS",
	"SetEvent",
	"ReleaseSemaphore",
	"CreateEventA",
	"GetCurrentProcess",
	"ResumeThread",
	"TlsAlloc",
	"TlsGetValue",
	"TlsSetValue",
	"TlsFree",
	"GetNativeSystemInfo",
	"CreateSemaphoreA",
	"GetFileType",
	"PostQueuedCompletionStatus",
	"CreateFileW",
	"ResetEvent",
	"QueueUserWorkItem",
	"GetFileAttributesExW",
	"UnregisterWait",
	"GetNumberOfConsoleInputEvents",
	"ReadConsoleInputW",
	"ReadConsoleW",
	"WriteConsoleW",
	"FillConsoleOutputCharacterW",
	"FillConsoleOutputAttribute",
	"GetConsoleCursorInfo",
	"SetConsoleCursorInfo",
	"GetConsoleScreenBufferInfo",
	"SetConsoleCursorPosition",
	"SetConsoleTextAttribute",
	"WriteConsoleInputW",
	"ReadFile",
	"WriteFile",
	"ConnectNamedPipe",
	"SetNamedPipeHandleState",
	"PeekNamedPipe",
	"CreateNamedPipeW",
	"CancelIoEx",
	"CancelSynchronousIo",
	"SwitchToThread",
	"LocalFree",
	"GetNamedPipeHandleStateA",
	"GetNamedPipeClientProcessId",
	"GetNamedPipeServerProcessId",
	"MultiByteToWideChar",
	"SetConsoleCtrlHandler",
	"SetErrorMode",
	"GetQueuedCompletionStatus",
	"CreateDirectoryW",
	"FindClose",
	"FindFirstFileW",
	"FindNextFileW",
	"RtlUnwind",
	"GetFileAttributesW",
	"GetFileInformationByHandle",
	"GetFileSizeEx",
	"GetFinalPathNameByHandleW",
	"GetFullPathNameW",
	"RemoveDirectoryW",
	"SetFilePointerEx",
	"SetFileTime",
	"DeviceIoControl",
	"GetSystemInfo",
	"GetSystemTimeAsFileTime",
	"ReOpenFile",
	"CopyFileW",
	"MoveFileExW",
	"CreateHardLinkW",
	"GetFileInformationByHandleEx",
	"CreateSymbolicLinkW",
	"CancelIo",
	"DebugBreak",
	"GetCurrentDirectoryW",
	"TerminateProcess",
	"GetExitCodeProcess",
	"UnregisterWaitEx",
	"LCMapStringW",
	"GetLongPathNameW",
	"ReadDirectoryChangesW",
	"GetEnvironmentStringsW",
	"FreeEnvironmentStringsW",
	"SetEnvironmentVariableW",
	"GetModuleFileNameW",
	"FileTimeToSystemTime",
	"GetModuleHandleA",
	"LoadLibraryExA",
	"GetStartupInfoW",
	"FormatMessageW",
	"InitializeCriticalSectionEx",
	"GetSystemDirectoryA",
	"WaitForSingleObjectEx",
	"GetEnvironmentVariableA",
	"SleepEx",
	"VerSetConditionMask",
	"VerifyVersionInfoW",
	"VirtualProtect",
	"VirtualFree",
	"VirtualAlloc",
	"GetLargePageMinimum",
	"HeapFree",
	"HeapAlloc",
	"GetProcessHeap",
	"FlsAlloc",
	"SleepConditionVariableSRW",
	"GetExitCodeThread",
	"InitializeSListHead",
	"CreateEventW",
	"InitializeCriticalSectionAndSpinCount",
	"IsProcessorFeaturePresent",
	"SetUnhandledExceptionFilter",
	"UnhandledExceptionFilter",
	"RtlVirtualUnwind",
	"RtlLookupFunctionEntry",
	"SetFileAttributesW",
	"GetConsoleOutputCP",
	"ExitProcess",
	"GetCommandLineA",
	"GetCommandLineW",
	"GetDateFormatW",
	"GetTimeFormatW",
	"CompareStringW",
	"GetLocaleInfoW",
	"IsValidLocale",
	"GetUserDefaultLCID",
	"EnumSystemLocalesW",
	"HeapReAlloc",
	"HeapSize",
	"FindFirstFileExW",
	"IsValidCodePage",
	"GetACP",
	"GetOEMCP",
	"GetTimeZoneInformation",
	"RegisterWaitForSingleObject",
	"GetDiskFreeSpaceW",
	"RtlCaptureContext",
	"GetMessageA",
	"GetSystemMetrics",
	"MapVirtualKeyW",
	"DispatchMessageA",
	"TranslateMessage",
	"AdjustTokenPrivileges",
	"LookupPrivilegeValueA",
	"CryptDestroyHash",
	"CryptHashData",
	"CryptCreateHash",
	"CryptGetHashParam",
	"CryptReleaseContext",
	"CryptAcquireContextA",
	"SystemFunction036",
	"OpenProcessToken",
	"SetSecurityDescriptorDacl",
	"InitializeSecurityDescriptor",
	"BCryptGenRandom",
	"GetConsoleCP",
	"DeleteFileW",
	"GetTempPathW",
	"WSAConnect",
	"WSAGetOverlappedResult",
	"GetBestRoute2",
	"FreeMibTable",
	"GetUnicastIpAddressTable",
	"SymFromAddr",
	"RegEnumKeyExA",
	"RegQueryValueExA",
	"RegOpenKeyExA",
	"RegGetValueA",
	"RegCloseKey",
	"GetLocaleInfoEx",
	"ExpandEnvironmentStringsA",
	"GetWindowsDirectoryA",
	"GetVersionExA",
	"LoadLibraryW",
	"GetCurrentProcessorNumber",
	"OutputDebugStringA",
	"GetLogicalProcessorInformation",
	"InitOnceComplete",
	"InitOnceBeginInitialize",
	"BCryptOpenAlgorithmProvider",
	"BCryptCloseAlgorithmProvider",
	"CertOpenSystemStoreW",
	"CertEnumCertificatesInStore",
	"CertCloseStore",
	"CryptBinaryToStringW",
	"DeleteFileA",
	"GetFileAttributesA",
	"OpenThreadToken",
	"GetOverlappedResult",
}

f = open(sys.argv[1], 'r')
lines = f.readlines()
f.close()

exit_code = 0
count = 0

for line in lines:
	count += 1
	api = line[29:].strip()
	if api not in allowedAPIs:
		print('API call "{}" is not checked for Windows 7 compatibility. Check it and then add it to the list in tests/src/check_win7.py'.format(api))
		exit_code = 1

if exit_code == 0:
	print('{} imports checked successfully'.format(count))

sys.exit(exit_code)
