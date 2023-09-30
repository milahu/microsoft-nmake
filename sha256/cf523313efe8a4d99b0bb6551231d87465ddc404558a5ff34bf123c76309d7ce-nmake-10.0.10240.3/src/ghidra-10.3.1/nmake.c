typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void * UniqueProcess;
    void * UniqueThread;
};

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    ImageBaseOffset32 EndAddress;
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

typedef void * HANDLE;

typedef ulong DWORD;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef wchar_t WCHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

typedef struct _WIN32_FIND_DATAW * LPWIN32_FIND_DATAW;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR * LPWSTR;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW * LPSTARTUPINFOW;

typedef struct _PROCESS_INFORMATION * LPPROCESS_INFORMATION;

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulonglong ULONG_PTR;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef struct _SYSTEMTIME * LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef char CHAR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION * PRUNTIME_FUNCTION;

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef WCHAR * LPCWSTR;

typedef struct _M128A * PM128A;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef union _union_63 _union_63, *P_union_63;

typedef ulonglong * PDWORD64;

typedef struct _struct_64 _struct_64, *P_struct_64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

typedef struct _UNWIND_HISTORY_TABLE * PUNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef CHAR * LPSTR;

typedef WORD LANGID;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS * PKNONVOLATILE_CONTEXT_POINTERS;

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef EXCEPTION_ROUTINE * PEXCEPTION_ROUTINE;

typedef DWORD ACCESS_MASK;

typedef DWORD LCID;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct _DISPATCHER_CONTEXT _DISPATCHER_CONTEXT, *P_DISPATCHER_CONTEXT;

struct _DISPATCHER_CONTEXT {
};

typedef longlong INT_PTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[9];
};

typedef struct _FILETIME * LPFILETIME;

typedef INT_PTR (* FARPROC)(void);

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef HANDLE * LPHANDLE;

typedef DWORD * LPDWORD;

typedef struct HKEY__ * HKEY;

typedef HKEY * PHKEY;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef HANDLE HGLOBAL;

typedef BOOL * LPBOOL;

typedef void * LPCVOID;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ * HRSRC;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef uint UINT;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef ulonglong uintptr_t;

typedef int (* _onexit_t)(void);

typedef void (* _invalid_parameter_handler)(wchar_t *, wchar_t *, wchar_t *, uint, uintptr_t);

typedef ulonglong size_t;

typedef ushort wint_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef longlong intptr_t;




void FUN_140001000(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_140025c48;
  uVar3 = 0;
  uVar2 = 0;
  FUN_14000dfd0(&DAT_140025c50,(longlong **)&DAT_140025c48,(longlong **)0x0,(ushort *)0x0,0,0,0);
  DAT_140025c40 = FUN_14000dcc4(&DAT_140025c50,puVar1,uVar2,uVar3);
  return;
}



void FUN_140001044(undefined2 *param_1,undefined8 param_2,ulonglong param_3,ulonglong **param_4)

{
  longlong **pplVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  undefined8 *local_res8 [4];
  
  if (DAT_140025c40 != 0) {
    DAT_140025c38 = DAT_140025c38 | 0x20;
    FUN_1400011b8(param_1,param_2,param_3,param_4);
    DAT_140025c40 = 0;
  }
  if ((DAT_140025c38 & 0x20) != 0) {
    param_1 = &DAT_140025c50;
    cVar4 = FUN_14000f614(&DAT_140025c50,param_2,param_3,param_4);
    if (cVar4 != '\0') {
      if ((DAT_140025c38 & 0x10) != 0) {
        FUN_140003898((ulonglong)DAT_140025c24,0x444,param_3,param_4);
      }
      param_1 = (undefined2 *)(ulonglong)DAT_140025c24;
      param_2 = 0x43d;
      FUN_140003898((ulonglong)param_1,0x43d,param_3,param_4);
    }
  }
  local_res8[0] = FUN_14000dc58(param_1,param_2,param_3,param_4);
  uVar2 = DAT_140025c30;
  uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),DAT_140025c38);
  if ((DAT_140025c38 & 0x40) == 0) {
    pvVar5 = FUN_14000dcc4(&DAT_140025c50,uVar8,param_3,param_4);
    uVar8 = (ulonglong)DAT_140025c38;
    local_res8[0][1] = pvVar5;
  }
  else {
    DAT_140025c30 = 0;
    local_res8[0][1] = uVar2;
  }
  if (((byte)uVar8 & 0x30) != 0x10) {
    param_4 = (ulonglong **)0x0;
    FUN_14000dfd0((wchar_t *)local_res8[0][1],(longlong **)&DAT_140025c48,(longlong **)0x0,
                  (ushort *)0x0,0,0,0);
    uVar8 = (ulonglong)DAT_140025c38;
  }
  pplVar1 = DAT_140025c48;
  DAT_140025c48 = pplVar1;
  if ((uVar8 & 0x20) != 0) {
    FUN_140001474(L"$",local_res8,(ulonglong **)&DAT_140025c48,param_4);
    FUN_140001474(L"*?",local_res8,(ulonglong **)0x0,param_4);
    DAT_140025c48 = pplVar1;
    if (pplVar1 != (longlong **)0x0) {
      do {
        pplVar9 = pplVar1;
        pplVar1 = (longlong **)*pplVar9;
        *pplVar9 = (longlong *)DAT_14003d0e0;
        DAT_14003d0e0 = pplVar9;
      } while (pplVar1 != (longlong **)0x0);
      DAT_140025c48 = (longlong **)0x0;
    }
  }
  puVar3 = DAT_140025c28;
  puVar7 = &DAT_140025c28;
  while (puVar6 = puVar3, puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
    puVar3 = (undefined8 *)*puVar6;
  }
  *puVar7 = local_res8[0];
  return;
}



void FUN_1400011b8(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong **param_4)

{
  longlong **pplVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  
  DAT_1400157ef = DAT_1400157ee;
  DAT_140025c28 = FUN_14000dc58(param_1,param_2,param_3,param_4);
  DAT_140025c28[1] = DAT_140025c40;
  pplVar1 = DAT_140025c48;
  FUN_140001474(L"$",&DAT_140025c28,(ulonglong **)&DAT_140025c48,param_4);
  uVar5 = 0;
  puVar3 = &DAT_140025c28;
  FUN_140001474(L"*?",&DAT_140025c28,(ulonglong **)0x0,param_4);
  DAT_140025c48 = pplVar1;
  if (pplVar1 != (longlong **)0x0) {
    do {
      pplVar4 = pplVar1;
      pplVar1 = (longlong **)*pplVar4;
      *pplVar4 = (longlong *)DAT_14003d0e0;
      DAT_14003d0e0 = pplVar4;
    } while (pplVar1 != (longlong **)0x0);
    DAT_140025c48 = (longlong **)0x0;
  }
  if (DAT_140025c28 == (undefined8 *)0x0) {
    if ((DAT_140025c38 & 0x20) != 0) {
      return;
    }
    puVar3 = (undefined8 *)0x43b;
    uVar5 = DAT_140025c40;
    FUN_140003898((ulonglong)DAT_140025c20,0x43b,DAT_140025c40,param_4);
    if (DAT_140025c28 == (undefined8 *)0x0) {
      return;
    }
  }
  cVar2 = FUN_14000f614((short *)DAT_140025c28[1],puVar3,uVar5,param_4);
  if (cVar2 != '\0') {
    DAT_140025c38 = DAT_140025c38 | 0x10;
  }
  return;
}



void FUN_1400012a0(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong **param_4)

{
  code *pcVar1;
  longlong **pplVar2;
  bool bVar3;
  longlong **pplVar4;
  byte bVar5;
  
  if (DAT_140025c40 == 0) {
    DAT_140025c38 = DAT_140025c38 & 0xdf;
  }
  else {
    FUN_1400011b8(param_1,param_2,param_3,param_4);
    DAT_140025c40 = 0;
  }
  pplVar2 = DAT_140025c28;
  if (DAT_140025c52 != 0) {
    DAT_1400157ef = DAT_1400157ef | 0x20;
  }
  if (DAT_140025c28 == (longlong **)0x0) {
    FUN_140003898((ulonglong)DAT_140025c24,0x40d,param_3,param_4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((DAT_140025c38 & 0x10) == 0) {
    pplVar2 = DAT_140025c28;
    if ((*DAT_140025c28 != (longlong *)0x0) ||
       (bVar3 = FUN_1400013b0((wchar_t *)DAT_140025c28[1],param_2,param_3,param_4),
       pplVar2 = DAT_140025c28, !bVar3)) goto LAB_140001392;
    free(DAT_140025c28[1]);
  }
  else {
    bVar5 = DAT_1400157ef >> 5;
    pplVar4 = (longlong **)FUN_140009244(0x30,param_2,param_3,param_4);
    pplVar4[2] = pplVar2[1];
    *(byte *)(pplVar4 + 5) = bVar5 & 1;
    *pplVar4 = (longlong *)DAT_140025c00;
    DAT_140025c00 = pplVar4;
    if (*pplVar4 != (longlong *)0x0) {
      (*pplVar4)[1] = (longlong)pplVar4;
    }
  }
  pplVar2 = DAT_14003d0e0;
  DAT_14003d0e0 = DAT_140025c28;
  *DAT_140025c28 = (longlong *)pplVar2;
  pplVar2 = DAT_1400157e0;
LAB_140001392:
  DAT_1400157e0 = pplVar2;
  DAT_140025c38 = DAT_140025c38 | 0x80;
  DAT_140025c28 = (longlong **)0x0;
  return;
}



bool FUN_1400013b0(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  
  iVar3 = _wcsicmp(param_1,L".SILENT");
  if (iVar3 == 0) {
    DAT_140025c38 = DAT_140025c38 | 2;
    FUN_14000b804(0x73,'\x01',param_3,param_4);
  }
  iVar4 = _wcsicmp(param_1,L".IGNORE");
  if (iVar4 == 0) {
    DAT_140025c38 = DAT_140025c38 | 4;
    FUN_14000b804(0x69,'\x01',param_3,param_4);
  }
  else {
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      wVar2 = *(wchar_t *)((longlong)pwVar5 + ((longlong)L".SUFFIXES" - (longlong)param_1));
      if (wVar1 != wVar2) break;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    if (wVar1 == wVar2) {
      DAT_140025c38 = DAT_140025c38 | 1;
    }
    else {
      lVar6 = (longlong)L".PRECIOUS" - (longlong)param_1;
      do {
        wVar1 = *param_1;
        wVar2 = *(wchar_t *)((longlong)param_1 + lVar6);
        if (wVar1 != wVar2) break;
        param_1 = param_1 + 1;
      } while (wVar2 != L'\0');
      if (wVar1 != wVar2) {
        return iVar3 == 0;
      }
      DAT_140025c38 = DAT_140025c38 | 8;
    }
  }
  return true;
}



void FUN_140001474(wchar_t *param_1,undefined8 *param_2,ulonglong **param_3,ulonglong **param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  short *_Memory;
  undefined8 *puVar3;
  void *pvVar4;
  short *psVar5;
  undefined8 *puVar6;
  short **ppsVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong **ppuVar12;
  void *_Memory_00;
  undefined8 *local_res10;
  short *local_res20;
  
  puVar3 = (undefined8 *)0x0;
  _Memory = (short *)0x0;
  local_res10 = (undefined8 *)0x0;
  _Memory_00 = (void *)0x0;
  puVar9 = (undefined8 *)*param_2;
  puVar11 = (undefined8 *)0x0;
  ppuVar12 = param_3;
  do {
    while( true ) {
      puVar10 = puVar9;
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      pwVar8 = param_1;
      pwVar2 = wcspbrk((wchar_t *)puVar10[1],param_1);
      if (pwVar2 != (wchar_t *)0x0) break;
LAB_1400015e7:
      puVar9 = (undefined8 *)*puVar10;
      puVar11 = puVar10;
    }
    if (*param_1 == L'$') {
      pwVar8 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar8 >> 8),0xff);
      ppuVar12 = param_3;
      _Memory = (short *)FUN_14000e740((wchar_t *)puVar10[1],-1,param_3,param_4);
      free((void *)puVar10[1]);
    }
    else {
      cVar1 = FUN_14000f614((wchar_t *)puVar10[1],pwVar8,ppuVar12,param_4);
      if ((cVar1 != '\0') ||
         (puVar3 = (undefined8 *)FUN_14000fde8((wchar_t *)puVar10[1],pwVar8,ppuVar12,param_4),
         local_res10 = puVar3, puVar3 == (undefined8 *)0x0)) goto LAB_1400015e7;
      _Memory_00 = (void *)puVar10[1];
    }
    if (puVar11 == (undefined8 *)0x0) {
      *param_2 = *puVar10;
      *puVar10 = DAT_14003d0e0;
      puVar9 = (undefined8 *)*param_2;
    }
    else {
      *puVar11 = *puVar10;
      *puVar10 = DAT_14003d0e0;
      puVar9 = (undefined8 *)*puVar11;
    }
    DAT_14003d0e0 = puVar10;
    psVar5 = _Memory;
    if (*param_1 == L'$') {
      while( true ) {
        local_res20 = psVar5;
        ppsVar7 = &local_res20;
        psVar5 = FUN_14000160c(ppsVar7);
        if (psVar5 == (short *)0x0) break;
        puVar3 = FUN_14000dc58(ppsVar7,pwVar8,(ulonglong)ppuVar12,param_4);
        pvVar4 = FUN_14000dcc4(psVar5,pwVar8,(ulonglong)ppuVar12,param_4);
        puVar3[1] = pvVar4;
        *puVar3 = *param_2;
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = puVar3;
        }
        *param_2 = puVar3;
        local_res10 = puVar3;
        psVar5 = local_res20;
      }
      free(_Memory);
    }
    else {
      if (puVar3 != (undefined8 *)0x0) {
        if (puVar11 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)*puVar3;
          puVar11 = puVar3;
          while (puVar6 = puVar10, puVar6 != (undefined8 *)0x0) {
            puVar11 = puVar6;
            puVar10 = (undefined8 *)*puVar6;
          }
        }
        do {
          puVar10 = puVar3;
          puVar3 = (undefined8 *)*puVar10;
        } while (puVar3 != (undefined8 *)0x0);
        *puVar10 = *param_2;
        *param_2 = local_res10;
        puVar3 = local_res10;
      }
      free(_Memory_00);
    }
  } while( true );
}



short * FUN_14000160c(short **param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  for (psVar2 = *param_1; (*psVar2 == 0x20 || (*psVar2 == 9)); psVar2 = psVar2 + 1) {
  }
  sVar1 = *psVar2;
  if (sVar1 == 0) {
    return (short *)0x0;
  }
  psVar3 = psVar2;
  if (sVar1 == 0x22) {
    do {
      psVar3 = psVar3 + 1;
      if (*psVar3 == 0) break;
    } while (*psVar3 != 0x22);
  }
  else {
    do {
      if (sVar1 == 0x20) goto LAB_140001681;
      if (sVar1 == 9) break;
      psVar3 = psVar3 + 1;
      sVar1 = *psVar3;
    } while (sVar1 != 0);
  }
  if ((*psVar3 == 0x20) || (*psVar3 == 9)) {
LAB_140001681:
    *psVar3 = 0;
  }
  else {
    if (*psVar3 == 0x22) {
      psVar3 = psVar3 + 1;
      if (*psVar3 != 0) goto LAB_140001681;
    }
    else if (*psVar3 != 0) goto LAB_140001685;
    psVar3 = psVar3 + -1;
  }
LAB_140001685:
  *param_1 = psVar3 + 1;
  return psVar2;
}



void FUN_14000169c(undefined8 param_1,wchar_t *param_2,ulonglong param_3,ulonglong **param_4)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  
  if ((char)DAT_140025c38 < '\0') {
    DAT_140025c38 = DAT_140025c38 & 0x7f;
  }
  if ((DAT_140025c38 & 0x10) == 0) {
    if ((DAT_140025c38 & 6) == 0) {
      if ((DAT_140025c38 & 1) == 0) {
        if ((DAT_140025c38 & 8) == 0) {
          DAT_140025c08 = (longlong *)FUN_140009244(0x30,param_2,param_3,param_4);
          *DAT_140025c08 = DAT_140025c28;
          DAT_140025c08[1] = DAT_140025c48;
          goto LAB_1400017cd;
        }
        if (DAT_140025c28 == 0) goto LAB_1400017cd;
        puVar1 = &DAT_140025c10;
      }
      else {
        if (DAT_140025c28 == 0) {
          if (DAT_140025c18 != (undefined8 *)0x0) {
            do {
              puVar1 = DAT_140025c18;
              DAT_140025c18 = (undefined8 *)*puVar1;
              free((void *)puVar1[1]);
              *puVar1 = DAT_14003d0e0;
              DAT_14003d0e0 = puVar1;
            } while (DAT_140025c18 != (undefined8 *)0x0);
          }
          goto LAB_1400017cd;
        }
        puVar1 = &DAT_140025c18;
      }
      FUN_140001f10(puVar1,param_2,param_3,param_4);
    }
    else if (DAT_140025c28 != 0) {
      if ((DAT_140025c38 & 2) == 0) {
        pwVar2 = L".IGNORE";
        if ((DAT_140025c38 & 4) == 0) {
          pwVar2 = (wchar_t *)0x0;
        }
      }
      else {
        pwVar2 = L".SILENT";
      }
      FUN_140003898((ulonglong)DAT_140025c24,0x442,(ulonglong)pwVar2,param_4);
    }
  }
  else if (DAT_140025c28 != 0) {
    FUN_140003898((ulonglong)DAT_140025c24,0x43e,param_3,param_4);
  }
LAB_1400017cd:
  DAT_140025c38 = DAT_140025c38 | 0x40;
  DAT_140025c28 = 0;
  DAT_140025c48 = 0;
  return;
}



void FUN_1400017f0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong **pplVar1;
  bool bVar2;
  bool bVar3;
  longlong **pplVar4;
  undefined uVar5;
  wchar_t *pwVar6;
  
  pplVar4 = DAT_1400157e0;
  bVar2 = true;
  if ((DAT_140025c38 & 0x10) == 0) {
    if ((DAT_140025c38 & 0xf) == 0) {
      *(longlong *)(DAT_140025c08 + 0x10) = DAT_140025c28;
      *(undefined8 *)(DAT_140025c08 + 0x18) = DAT_140025c48;
      *(undefined *)(DAT_140025c08 + 0x20) = DAT_1400157ef;
      uVar5 = 1;
      if (pplVar4 != (longlong **)0x0) {
        do {
          bVar3 = FUN_1400013b0((wchar_t *)pplVar4[1],param_2,param_3,param_4);
          if (bVar3) {
            param_2 = 0x445;
            FUN_140003898((ulonglong)DAT_140025c24,0x445,param_3,param_4);
          }
          param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),uVar5);
          FUN_140001ddc((wchar_t *)pplVar4[1],param_2,param_3,param_4);
          if (DAT_1400157f8 == (longlong **)0x0) {
            bVar2 = false;
            DAT_1400157f8 = pplVar4;
          }
          pplVar1 = (longlong **)*pplVar4;
          DAT_1400157e0 = pplVar1;
          if (bVar2) {
            *pplVar4 = (longlong *)DAT_14003d0e0;
            DAT_14003d0e0 = pplVar4;
          }
          pplVar4 = pplVar1;
          uVar5 = 0;
        } while (pplVar1 != (longlong **)0x0);
      }
    }
    else if (DAT_140025c28 != 0) {
      if ((DAT_140025c38 & 2) == 0) {
        if ((DAT_140025c38 & 4) == 0) {
          if ((DAT_140025c38 & 8) == 0) {
            pwVar6 = L".SUFFIXES";
            if ((DAT_140025c38 & 1) == 0) {
              pwVar6 = (wchar_t *)0x0;
            }
          }
          else {
            pwVar6 = L".PRECIOUS";
          }
        }
        else {
          pwVar6 = L".IGNORE";
        }
      }
      else {
        pwVar6 = L".SILENT";
      }
      FUN_140003898((ulonglong)DAT_140025c24,0x441,(ulonglong)pwVar6,param_4);
    }
  }
  else {
    *(longlong *)(DAT_140025c00 + 0x18) = DAT_140025c28;
  }
  DAT_1400157e0 = (longlong **)0x0;
  DAT_140025c28 = 0;
  DAT_140025c48 = 0;
  DAT_140025c08 = 0;
  DAT_140025c38 = 0;
  return;
}



ulonglong FUN_140001ac8(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  undefined auVar2 [16];
  int iVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  bool bVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  
  wVar1 = *param_1;
  pwVar6 = param_1;
  pwVar12 = param_3;
  while (wVar1 != L'\0') {
    if ((ushort)*pwVar6 < 0x80) {
      in_RAX = (ulonglong)(ushort)*pwVar6;
      bVar8 = (bool)((&DAT_140011640)[in_RAX] & 1);
    }
    else {
      iVar3 = iswspace(*pwVar6);
      bVar8 = iVar3 == 0;
      in_RAX = CONCAT44(extraout_var,iVar3);
    }
    if (bVar8 == false) break;
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  if (*pwVar6 != L'\0') {
    if (((ulonglong)param_3 & 4) != 0) {
      return in_RAX & 0xffffffffffffff00;
    }
    pwVar12 = (wchar_t *)(ulonglong)(ushort)*pwVar6;
    FUN_140003898((ulonglong)DAT_140025c24,0x3e9,(ulonglong)pwVar12,param_4);
  }
  pwVar6 = param_2;
  if ((((ulonglong)param_3 & 0x40) != 0) &&
     (pwVar4 = wcschr(param_2,L'$'), lVar11 = 0, pwVar4 != (wchar_t *)0x0)) {
    do {
      lVar10 = lVar11;
      lVar11 = lVar10 + 1;
      pwVar4 = wcschr(pwVar4 + 1,L'$');
    } while (pwVar4 != (wchar_t *)0x0);
    if (lVar11 != 0) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (param_2[lVar11] != L'\0');
      auVar2._8_8_ = 0;
      auVar2._0_8_ = lVar10 + 2 + lVar11;
      lVar11 = SUB168(ZEXT816(2) * auVar2,8);
      sVar5 = SUB168(ZEXT816(2) * auVar2,0);
      if (lVar11 != 0) {
        sVar5 = 0xffffffffffffffff;
      }
      pwVar6 = (wchar_t *)FUN_140009214(sVar5,lVar11,0xffffffffffffffff,param_4);
      wVar1 = *param_2;
      pwVar4 = pwVar6;
      pwVar12 = param_2;
      while (wVar1 != L'\0') {
        *pwVar4 = wVar1;
        pwVar12 = pwVar12 + 1;
        pwVar9 = pwVar4 + 1;
        if (wVar1 == L'$') {
          *pwVar9 = L'$';
          pwVar9 = pwVar4 + 2;
        }
        pwVar4 = pwVar9;
        wVar1 = *pwVar12;
      }
      *pwVar4 = L'\0';
      free(param_2);
    }
  }
  uVar7 = FUN_140001c2c(param_1,pwVar6,CONCAT71((int7)((ulonglong)pwVar12 >> 8),(char)param_3),
                        param_4);
  return uVar7;
}



longlong FUN_140001c2c(wchar_t *param_1,wchar_t *param_2,ulonglong param_3,wchar_t *param_4)

{
  errno_t eVar1;
  undefined8 *puVar2;
  uint7 uVar7;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  wchar_t *pwVar8;
  ulonglong uVar9;
  bool bVar10;
  size_t local_res20;
  
  local_res20 = 0;
  pwVar4 = param_2;
  uVar9 = param_3;
  if ((param_3 & 2) == 0) {
    if ((DAT_1400157ed == '\0') || ((DAT_1400157ec & 4) != 0)) goto LAB_140001cf2;
    uVar9 = 0;
    pwVar4 = (wchar_t *)0x0;
    param_4 = param_1;
    eVar1 = _wgetenv_s(&local_res20,(wchar_t *)0x0,0,param_1);
    if ((eVar1 != 0) || (local_res20 == 0)) goto LAB_140001cf2;
    puVar2 = FUN_14000918c((ushort *)param_1);
    if (puVar2 == (undefined8 *)0x0) {
LAB_140001ccd:
      pwVar4 = FUN_14000e6a4(param_2);
      eVar1 = _wputenv_s(param_1,pwVar4);
      if (eVar1 != 0) {
        pwVar4 = (wchar_t *)0x41f;
        FUN_140003898((ulonglong)DAT_140025c24,0x41f,uVar9,param_4);
      }
      goto LAB_140001cf2;
    }
    uVar7 = (uint7)((ulonglong)puVar2 >> 8);
    if (((*(byte *)(puVar2 + 3) & 2) == 0) && ((*(byte *)(puVar2 + 3) & DAT_1400157ec & 4) == 0))
    goto LAB_140001ccd;
LAB_140001cc3:
    lVar3 = (ulonglong)uVar7 << 8;
  }
  else {
    if (*param_2 != L'\0') goto LAB_140001ccd;
LAB_140001cf2:
    DAT_1400157ed = '\0';
    pwVar8 = param_1;
    ppwVar5 = (wchar_t **)FUN_14000918c((ushort *)param_1);
    if (ppwVar5 != (wchar_t **)0x0) {
      uVar7 = (uint7)((ulonglong)ppwVar5 >> 8);
      if (((*(byte *)(ppwVar5 + 3) & 2) != 0) || ((*(byte *)(ppwVar5 + 3) & DAT_1400157ec & 4) != 0)
         ) goto LAB_140001cc3;
    }
    ppwVar6 = (wchar_t **)FUN_14000dc58(pwVar8,pwVar4,uVar9,param_4);
    ppwVar6[1] = param_2;
    bVar10 = ppwVar5 == (wchar_t **)0x0;
    if (bVar10) {
      ppwVar5 = (wchar_t **)FUN_140009244(0x20,pwVar4,uVar9,param_4);
      ppwVar5[1] = param_1;
    }
    *(byte *)(ppwVar5 + 3) = *(byte *)(ppwVar5 + 3) & 0xef;
    *(byte *)(ppwVar5 + 3) = *(byte *)(ppwVar5 + 3) | (byte)param_3;
    pwVar4 = ppwVar5[2];
    *ppwVar6 = pwVar4;
    ppwVar5[2] = (wchar_t *)ppwVar6;
    ppwVar6 = DAT_140037098;
    if (bVar10) {
      DAT_140037098 = (wchar_t **)0x0;
      pwVar4 = *ppwVar6;
      *ppwVar5 = pwVar4;
      *ppwVar6 = (wchar_t *)ppwVar5;
    }
    if (((param_3 & 0x40) == 0) && (pwVar4 = wcschr(param_2,L'$'), pwVar4 != (wchar_t *)0x0)) {
      *(byte *)(ppwVar5 + 3) = *(byte *)(ppwVar5 + 3) | 1;
      pwVar4 = (wchar_t *)
               FUN_14000dfd0(param_2,(longlong **)0x0,(longlong **)0x0,(ushort *)param_1,1,0,
                             (byte)param_3);
      *(byte *)(ppwVar5 + 3) = *(byte *)(ppwVar5 + 3) & 0xfe;
      if ((char)pwVar4 == '\0') {
        ppwVar5[2] = (wchar_t *)0x0;
        *(byte *)(ppwVar5 + 3) = *(byte *)(ppwVar5 + 3) | 0x10;
      }
    }
    lVar3 = CONCAT71((int7)((ulonglong)pwVar4 >> 8),1);
  }
  return lVar3;
}



void FUN_140001ddc(wchar_t *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined6 extraout_var;
  ulonglong uVar6;
  
  cVar1 = (char)param_2;
  if (DAT_140025c08 == (undefined8 *)0x0) {
    DAT_140025c08 = (undefined8 *)FUN_140009244(0x30,param_2,param_3,param_4);
  }
  puVar5 = DAT_140025c08;
  puVar3 = (undefined8 *)FUN_140009244(0x10,param_2,param_3,param_4);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)FUN_140009244(0x30,param_2,param_3,param_4);
    *puVar4 = *puVar5;
    puVar4[1] = puVar5[1];
    puVar4[2] = puVar5[2];
    puVar4[3] = puVar5[3];
    *(undefined *)(puVar4 + 4) = *(undefined *)(puVar5 + 4);
    puVar4[5] = puVar5[5];
    puVar3[1] = puVar4;
  }
  else {
    puVar3[1] = DAT_140025c08;
  }
  puVar5 = FUN_14000dde0(param_1,param_2,param_3,param_4);
  if (puVar5 == (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar5 = (undefined8 *)FUN_140009244(0x30,param_2,param_3,param_4);
    *(byte *)(puVar5 + 2) = DAT_1400157ef;
    puVar5[1] = param_1;
    puVar5[4] = puVar3;
    uVar2 = FUN_14000dd88((wint_t *)param_1);
    uVar6 = CONCAT62(extraout_var,uVar2) & 0xffffffff;
    *puVar5 = (&DAT_140025800)[uVar6];
    (&DAT_140025800)[uVar6] = puVar5;
  }
  else {
    if (((*(byte *)(puVar5 + 2) ^ DAT_1400157ef) & 0x20) != 0) {
      FUN_140003898((ulonglong)DAT_140025c24,0x43f,param_3,param_4);
    }
    puVar4 = puVar5 + 4;
    for (puVar5 = (undefined8 *)puVar5[4]; puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      puVar4 = puVar5;
    }
    *puVar4 = puVar3;
    free(param_1);
  }
  return;
}



void FUN_140001f10(undefined8 *param_1,wchar_t *param_2,undefined8 param_3,ulonglong **param_4)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  wchar_t **_Context;
  wchar_t *local_res10;
  
  puVar1 = DAT_140025c28;
  local_res10 = param_2;
  while (puVar9 = puVar1, puVar9 != (undefined8 *)0x0) {
    pwVar2 = wcschr((wchar_t *)puVar9[1],L'$');
    puVar1 = DAT_140025c48;
    if (pwVar2 == (wchar_t *)0x0) {
      puVar1 = (undefined8 *)*puVar9;
      *puVar9 = 0;
      puVar7 = (undefined8 *)*param_1;
      puVar4 = param_1;
      while (puVar3 = puVar7, puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        puVar7 = (undefined8 *)*puVar3;
      }
      *puVar4 = puVar9;
    }
    else {
      pwVar2 = (wchar_t *)FUN_14000e740((wchar_t *)puVar9[1],-1,&DAT_140025c48,param_4);
      if (puVar1 != DAT_140025c48) {
        do {
          puVar7 = puVar1;
          puVar1 = (undefined8 *)*puVar7;
          *puVar7 = DAT_14003d0e0;
          DAT_14003d0e0 = puVar7;
        } while (puVar1 != DAT_140025c48);
      }
      local_res10 = (wchar_t *)0x0;
      _Str = pwVar2;
      while( true ) {
        _Context = &local_res10;
        puVar8 = &DAT_14001161c;
        pwVar6 = wcstok_s(_Str,L" \t",_Context);
        if (pwVar6 == (wchar_t *)0x0) break;
        puVar4 = FUN_14000dc58(_Str,puVar8,(ulonglong)_Context,param_4);
        pvVar5 = FUN_14000dcc4(pwVar6,puVar8,(ulonglong)_Context,param_4);
        puVar4[1] = pvVar5;
        puVar1 = (undefined8 *)*param_1;
        puVar7 = param_1;
        while (puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
          puVar7 = puVar3;
          puVar1 = (undefined8 *)*puVar3;
        }
        *puVar7 = puVar4;
        _Str = (wchar_t *)0x0;
      }
      free(pwVar2);
      free((void *)puVar9[1]);
      puVar1 = (undefined8 *)*puVar9;
      *puVar9 = DAT_14003d0e0;
      DAT_14003d0e0 = puVar9;
    }
  }
  return;
}



int FUN_140002054(wchar_t *param_1,undefined8 *param_2,FILETIME param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  uVar3 = 0;
  iVar1 = FUN_14000209c(param_1,param_2,param_3,(FILE *)0x0,(_FILETIME)&local_res20);
  if (local_res20 != (longlong *)0x0) {
    uVar2 = FUN_1400030d8(local_res20,param_2,param_3,uVar3);
    iVar1 = iVar1 + (int)uVar2;
    FUN_140003278(&local_res20);
  }
  return iVar1;
}



void FUN_14000209c(wchar_t *param_1,undefined8 *param_2,FILETIME param_3,FILE *param_4,
                  _FILETIME param_5)

{
  undefined uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined6 extraout_var;
  ulonglong uVar5;
  FILETIME FVar6;
  undefined uVar7;
  undefined7 uVar8;
  bool bVar9;
  
  uVar7 = SUB81(param_4,0);
  uVar8 = (undefined7)((ulonglong)param_4 >> 8);
  DAT_1400157e8 = DAT_1400157e8 + 1;
  uVar1 = SUB81(param_2,0);
  FVar6 = param_3;
  puVar3 = FUN_14000dde0(param_1,param_2,param_3,param_4);
  bVar9 = puVar3 != (undefined8 *)0x0;
  if (!bVar9) {
    puVar3 = (undefined8 *)FUN_140009244(0x30,param_2,(ulonglong)FVar6,CONCAT71(uVar8,uVar7));
    pvVar4 = FUN_14000dcc4(param_1,param_2,(ulonglong)FVar6,CONCAT71(uVar8,uVar7));
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[1] = pvVar4;
    *(undefined *)(puVar3 + 2) = uVar1;
    *(undefined *)((longlong)puVar3 + 0x11) = 0;
    uVar2 = FUN_14000dd88((wint_t *)param_1);
    uVar5 = CONCAT62(extraout_var,uVar2) & 0xffffffff;
    param_2 = &DAT_140025800;
    *puVar3 = (&DAT_140025800)[uVar5];
    (&DAT_140025800)[uVar5] = puVar3;
  }
  FUN_140002160((ulonglong)puVar3,CONCAT71((int7)((ulonglong)param_2 >> 8),uVar1),param_3,
                (ulonglong **)CONCAT71(uVar8,bVar9),param_4,param_5);
  DAT_1400157e8 = DAT_1400157e8 + -1;
  return;
}



void FUN_140002160(ulonglong param_1,ulonglong param_2,FILETIME param_3,ulonglong **param_4,
                  FILE *param_5,_FILETIME param_6)

{
  longlong **pplVar1;
  wchar_t *pwVar2;
  undefined uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  FILETIME FVar9;
  void *pvVar10;
  longlong *plVar11;
  FILE *pFVar12;
  FILETIME FVar13;
  ulonglong uVar14;
  FILETIME FVar15;
  FILETIME *pFVar16;
  FILETIME FVar17;
  HANDLE *ppvVar18;
  FILETIME FVar19;
  FILETIME FVar20;
  int iVar21;
  undefined auStackY_5a8 [32];
  int local_558;
  char local_554;
  FILETIME local_550;
  FILETIME *local_548;
  FILETIME local_540;
  FILETIME *local_538;
  FILE *local_530;
  FILETIME local_528;
  FILETIME local_520;
  FILETIME local_518;
  longlong *local_510;
  FILETIME local_508;
  FILETIME local_500;
  FILETIME local_4f8;
  HANDLE local_4f0;
  longlong *local_4e8;
  longlong *local_4e0;
  FILE *local_4d8;
  _FILETIME local_4d0;
  FILETIME *local_4c8;
  undefined8 *local_4c0;
  FILETIME local_4b8;
  FILETIME *local_4b0;
  byte local_4a8 [4];
  FILETIME local_4a4;
  FILETIME local_494;
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStackY_5a8;
  FVar13.dwLowDateTime = 0;
  FVar13.dwHighDateTime = 0;
  local_4d8 = param_5;
  local_530 = param_5;
  local_4d0 = param_6;
  local_554 = (char)param_4;
  local_558 = 0;
  local_4f8 = param_3;
  if (param_1 == 0) {
    *(undefined8 *)param_3 = 0;
    goto LAB_140002af5;
  }
  uVar14 = param_2;
  FVar17 = param_3;
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FVar17 = *(FILETIME *)(param_1 + 8);
    uVar14 = 0x42f;
    FUN_140003898(0,0x42f,(ulonglong)FVar17,param_4);
  }
  pplVar1 = *(longlong ***)(param_1 + 0x28);
  if (pplVar1 != (longlong **)0x0) {
    FUN_1400030d8(*pplVar1,uVar14,FVar17,param_4);
    FUN_140003278(pplVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x18);
    goto LAB_140002af5;
  }
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    if ((param_2 & 1) != 0) {
      FUN_14000c33c(DAT_1400157e8 * 2,*(undefined8 *)(param_1 + 8),*(FILETIME *)(param_1 + 0x18));
    }
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x18);
    if ((((DAT_1400157ec & 8) == 0) && (DAT_1400157e8 == 1)) &&
       ((*(byte *)(param_1 + 0x11) & 4) == 0)) {
      ppvVar18 = &local_4f0;
      lVar6 = FUN_140005ca8(*(wchar_t **)(param_1 + 8),(LPWIN32_FIND_DATAW)local_4a8,ppvVar18,
                            param_4);
      if (lVar6 != 0) {
        FUN_1400039c0(2,*(undefined8 *)(param_1 + 8),ppvVar18,param_4);
      }
    }
    goto LAB_140002af5;
  }
  local_510 = *(longlong **)(param_1 + 0x20);
  local_520.dwLowDateTime = 0;
  local_520.dwHighDateTime = 0;
  local_508.dwLowDateTime = 0;
  local_508.dwHighDateTime = 0;
  pwVar2 = *(wchar_t **)(param_1 + 8);
  local_518.dwLowDateTime = 0;
  local_518.dwHighDateTime = 0;
  local_540.dwLowDateTime = 0;
  local_540.dwHighDateTime = 0;
  local_4e8 = (longlong *)0x0;
  local_548 = (FILETIME *)0x0;
  local_538 = (FILETIME *)0x0;
  local_550.dwLowDateTime = 0;
  local_550.dwHighDateTime = 0;
  local_528.dwLowDateTime = 0;
  local_528.dwHighDateTime = 0;
  local_500.dwLowDateTime = 0;
  local_500.dwHighDateTime = 0;
  local_4c8 = (FILETIME *)0x0;
  local_4e0 = (longlong *)0x0;
  DAT_140026470 = pwVar2;
  DAT_140026478 = pwVar2;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  if (local_510 != (longlong *)0x0) {
    FVar15 = FVar13;
    if ((*(byte *)(local_510[1] + 0x20) & 0x20) != 0) {
      FVar17 = (FILETIME)&local_4f0;
      lVar6 = FUN_140005ca8(pwVar2,(LPWIN32_FIND_DATAW)local_4a8,(HANDLE *)FVar17,param_4);
      if ((lVar6 != 0) &&
         (((local_4a8[0] & 0x10) == 0 ||
          ((FVar15 = local_4a4, local_4a4.dwLowDateTime == 0 && (local_4a4.dwHighDateTime == 0))))))
      {
        FVar15 = local_494;
      }
    }
    do {
      FVar19.dwLowDateTime = 0;
      FVar19.dwHighDateTime = 0;
      pFVar16 = (FILETIME *)local_510[1];
      local_4b0 = pFVar16 + 5;
      local_538 = pFVar16;
      if (*local_4b0 == (FILETIME)0x0) {
        FVar20 = *(FILETIME *)(param_1 + 8);
        local_4c8 = local_4b0;
        puVar7 = (undefined8 *)FUN_140002b20(pFVar16,FVar20,(LPWIN32_FIND_DATAW)FVar17,param_4);
        puVar8 = puVar7;
        iVar21 = local_558;
        for (; local_4c0 = puVar8, puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
          local_528 = *(FILETIME *)(puVar7 + 2);
          FVar17 = (FILETIME)&local_528;
          param_4 = (ulonglong **)0x0;
          FVar20.dwLowDateTime._0_1_ = *(undefined *)&pFVar16[4].dwLowDateTime;
          iVar5 = FUN_14000209c((wchar_t *)puVar7[1],(undefined8 *)FVar20,FVar17,(FILE *)0x0,
                                (_FILETIME)&local_4e0);
          iVar21 = iVar21 + iVar5;
          if ((DAT_140025c3b != '\0') && (iVar5 != 0)) {
            puVar8 = FUN_14000dde0((wchar_t *)puVar7[1],FVar20,FVar17,param_4);
            if ((*(byte *)((longlong)puVar8 + 0x11) & 8) == 0) {
              FVar17 = *(FILETIME *)(puVar7 + 1);
              FVar20.dwLowDateTime = 0xfaa;
              FVar20.dwHighDateTime = 0;
              DAT_140015040 = 0;
              FUN_140003898(0,0xfaa,(ulonglong)FVar17,param_4);
            }
            *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 8;
          }
          FVar9 = local_528;
          if ((ulonglong)local_528 < (ulonglong)FVar19) {
            FVar9 = FVar19;
          }
          if ((FVar15 == (FILETIME)0x0) && ((*(byte *)&pFVar16[4].dwLowDateTime & 0x20) == 0)) {
            FVar17 = (FILETIME)&local_4f0;
            FVar20 = (FILETIME)local_4a8;
            lVar6 = FUN_140005ca8(*(wchar_t **)(param_1 + 8),(LPWIN32_FIND_DATAW)local_4a8,
                                  (HANDLE *)FVar17,param_4);
            if (lVar6 != 0) {
              if (((local_4a8[0] & 0x10) == 0) ||
                 ((FVar15 = local_4a4, local_4a4.dwLowDateTime == 0 &&
                  (local_4a4.dwHighDateTime == 0)))) {
                FVar15 = local_494;
              }
              *(FILETIME *)(param_1 + 0x18) = FVar15;
            }
          }
          if ((((*(byte *)(param_1 + 0x10) & 0x10) != 0) ||
              ((ulonglong)FVar15 < (ulonglong)local_528)) ||
             ((FVar13 = local_528, DAT_140025c3a != '\0' && (FVar15 == local_528)))) {
            puVar8 = FUN_14000dc58(local_528,FVar20,(ulonglong)FVar17,param_4);
            pvVar10 = FUN_14000dcc4((void *)puVar7[1],FVar20,(ulonglong)FVar17,param_4);
            puVar8[1] = pvVar10;
            FVar13 = (FILETIME)&local_508;
            while (FVar19 = local_520, FVar19 != (FILETIME)0x0) {
              FVar13 = FVar19;
              local_520 = *(FILETIME *)FVar19;
            }
            *(undefined8 **)FVar13 = puVar8;
            local_520 = local_508;
          }
          puVar8 = FUN_14000dc58(FVar13,FVar20,(ulonglong)FVar17,param_4);
          pvVar10 = FUN_14000dcc4((void *)puVar7[1],FVar20,(ulonglong)FVar17,param_4);
          puVar8[1] = pvVar10;
          FVar13 = (FILETIME)&local_540;
          while (FVar19 = local_518, FVar19 != (FILETIME)0x0) {
            FVar13 = FVar19;
            local_518 = *(FILETIME *)FVar19;
          }
          *(undefined8 **)FVar13 = puVar8;
          puVar8 = local_4c0;
          FVar13 = local_550;
          FVar19 = FVar9;
          local_518 = local_540;
        }
        local_558 = iVar21;
        if (local_4e0 != (longlong *)0x0) {
          uVar14 = FUN_1400030d8(local_4e0,FVar20,FVar17,param_4);
          iVar21 = local_558 + (int)uVar14;
          local_558 = iVar21;
          FUN_140003278(&local_4e0);
        }
        while (FVar20 = local_518, pFVar16 = local_538, uVar3 = DAT_140036cec,
              puVar8 != (undefined8 *)0x0) {
          free((void *)puVar8[1]);
          puVar7 = (undefined8 *)*puVar8;
          free(puVar8);
          puVar8 = puVar7;
        }
        param_4 = (ulonglong **)
                  CONCAT71((int7)((ulonglong)param_4 >> 8),*(byte *)&local_538[4].dwLowDateTime);
        if ((*(byte *)&local_538[4].dwLowDateTime & 0x20) == 0) {
          if (local_538[2] != (FILETIME)0x0) {
            if (local_548 == (FILETIME *)0x0) {
              local_548 = local_538;
            }
            else {
              FVar17 = *(FILETIME *)(param_1 + 8);
              FUN_140003898(0,0xfa4,(ulonglong)FVar17,param_4);
            }
          }
          FVar9 = FVar19;
          if ((ulonglong)FVar19 < (ulonglong)local_500) {
            FVar9 = local_500;
          }
        }
        else {
          DAT_140036cec = uVar3;
          FVar9 = local_500;
          if (local_538[2] != (FILETIME)0x0) {
            DAT_140026470 = *(wchar_t **)(param_1 + 8);
            DAT_140026458 = 0;
            DAT_140026460 = (wchar_t *)0x0;
            DAT_140026468 = local_520;
            DAT_140026450 = local_518;
            DAT_140026478 = DAT_140026470;
            if ((((((DAT_140025c3b != '\0') && ((*(byte *)(param_1 + 0x11) & 8) == 0)) ||
                  (iVar21 == 0)) && ((ulonglong)FVar15 < (ulonglong)FVar19)) ||
                ((DAT_140025c3a != '\0' && (FVar15 == FVar19)))) ||
               (((FVar15 == (FILETIME)0x0 && (FVar19 == (FILETIME)0x0)) ||
                (*local_538 == (FILETIME)0x0)))) {
              DAT_140036cec = 1;
              if (local_4d8 == (FILE *)0x0) {
                if (local_518 == (FILETIME)0x0) {
                  local_530 = (FILE *)0x0;
                  local_4d8 = local_530;
                }
                else {
                  local_530 = *(FILE **)((longlong)local_518 + 8);
                  local_4d8 = local_530;
                }
              }
              FVar17 = local_538[3];
              iVar5 = FUN_140003c94(DAT_140026470,(longlong *)local_538[2],(ulonglong *)FVar17,
                                    param_4,local_4d8);
              iVar21 = iVar21 + iVar5;
              local_558 = iVar21;
              if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
                FVar17 = (FILETIME)&local_4f0;
                lVar6 = FUN_140005ca8(*(wchar_t **)(param_1 + 8),(LPWIN32_FIND_DATAW)local_4a8,
                                      (HANDLE *)FVar17,param_4);
                if (lVar6 == 0) goto LAB_140002644;
                if (((local_4a8[0] & 0x10) == 0) ||
                   ((local_550 = local_4a4, local_4a4.dwLowDateTime == 0 &&
                    (local_4a4.dwHighDateTime == 0)))) {
                  local_550 = local_494;
                }
              }
              else {
LAB_140002644:
                if (local_500 == (FILETIME)0x0) {
                  GetSystemTimeAsFileTime(&local_4b8);
                  local_550 = local_4b8;
                }
                else {
                  local_550 = local_500;
                }
              }
              FVar19 = local_520;
              FVar13 = local_550;
              *local_4b0 = local_550;
              FUN_140002f98((longlong **)FVar20);
              if (FVar20 != FVar19) {
                FUN_140002f98((longlong **)FVar19);
              }
              local_520.dwLowDateTime = 0;
              local_520.dwHighDateTime = 0;
              local_508.dwLowDateTime = 0;
              local_508.dwHighDateTime = 0;
              local_518.dwLowDateTime = 0;
              local_518.dwHighDateTime = 0;
              local_540.dwLowDateTime = 0;
              local_540.dwHighDateTime = 0;
            }
            pFVar16 = local_538;
            DAT_140036cec = uVar3;
            FVar9 = local_500;
            if (DAT_140025c3b != '\0') {
              if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
                FVar17 = *(FILETIME *)(param_1 + 8);
                FUN_140003898(0,0xfab,(ulonglong)FVar17,param_4);
                *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xf7;
              }
              FVar9 = local_500;
              if (iVar21 != 0) {
                FVar17 = *(FILETIME *)(param_1 + 8);
                iVar21 = 0;
                local_558 = 0;
                DAT_140015040 = 0;
                FUN_140003898(0,0xfaa,(ulonglong)FVar17,param_4);
                FVar9 = local_500;
              }
            }
          }
        }
        local_500 = FVar9;
        if (((*(byte *)&pFVar16[4].dwLowDateTime & 0x20) != 0) && (*local_510 == 0)) {
          *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
          *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
          if (iVar21 < 1) {
            bVar4 = *(byte *)(param_1 + 0x11) & 0xfb;
          }
          else {
            bVar4 = *(byte *)(param_1 + 0x11) | 4;
          }
          *(byte *)(param_1 + 0x11) = bVar4;
          if ((ulonglong)FVar15 < (ulonglong)FVar13) {
            FVar15 = FVar13;
          }
          *(FILETIME *)(param_1 + 0x18) = FVar15;
          *(FILETIME *)local_4f8 = FVar15;
          goto LAB_140002af5;
        }
      }
      else if ((ulonglong)FVar15 < (ulonglong)*local_4b0 || FVar15 == *local_4b0) {
        FVar15 = *local_4b0;
      }
      local_510 = (longlong *)*local_510;
      param_3 = local_4f8;
    } while (local_510 != (longlong *)0x0);
  }
  FVar13 = *(FILETIME *)param_3;
  DAT_140026458 = 0;
  DAT_140026460 = (wchar_t *)0x0;
  if (FVar13 == (FILETIME)0x0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      FVar17 = (FILETIME)&local_4f0;
      lVar6 = FUN_140005ca8(*(wchar_t **)(param_1 + 8),(LPWIN32_FIND_DATAW)local_4a8,
                            (HANDLE *)FVar17,param_4);
      if ((lVar6 != 0) &&
         (((local_4a8[0] & 0x10) == 0 ||
          ((FVar13 = local_4a4, local_4a4.dwLowDateTime == 0 && (local_4a4.dwHighDateTime == 0))))))
      {
        FVar13 = local_494;
      }
    }
    else {
      FVar13 = *(FILETIME *)(param_1 + 0x18);
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FVar17 = FVar13;
    FUN_14000c33c(DAT_1400157e8 * 2,*(undefined8 *)(param_1 + 8),FVar13);
  }
  FVar9 = FVar13;
  plVar11 = (longlong *)
            FUN_14000da54(param_1,local_258,FVar17,FVar13,(longlong **)&local_508,
                          (longlong **)&local_540,&local_558,&local_500,(wchar_t **)&local_530);
  FVar20 = local_500;
  FVar19 = local_508;
  FVar15 = local_540;
  iVar21 = local_558;
  uVar3 = DAT_140036cec;
  if ((plVar11 != (longlong *)0x0) && (local_548 == (FILETIME *)0x0)) {
    local_4e8 = (longlong *)plVar11[3];
    DAT_140026460 = local_258;
  }
  DAT_140026470 = *(wchar_t **)(param_1 + 8);
  DAT_140026468 = local_508;
  DAT_140026450 = local_540;
  DAT_140026478 = DAT_140026470;
  if ((((DAT_140025c3b == '\0') || ((*(byte *)(param_1 + 0x11) & 8) != 0)) && (local_558 != 0)) ||
     (((((ulonglong)local_500 <= (ulonglong)FVar13 &&
        ((DAT_140025c3a == '\0' || (FVar13 != local_500)))) &&
       ((FVar13 != (FILETIME)0x0 || (local_500 != (FILETIME)0x0)))) &&
      ((*(byte *)(param_1 + 0x10) & 0x10) == 0)))) {
    FVar20 = local_550;
    if ((((DAT_1400157ec & 8) == 0) && (DAT_1400157e8 == 1)) &&
       ((*(byte *)(param_1 + 0x11) & 8) == 0)) {
      FUN_1400039c0(2,DAT_140026470,FVar17,FVar9);
      FVar20 = local_550;
    }
  }
  else {
    DAT_140036cec = 1;
    if (local_548 != (FILETIME *)0x0) {
      pFVar12 = local_530;
      if (local_530 == (FILE *)0x0) {
        if (local_540 == (FILETIME)0x0) {
          pFVar12 = (FILE *)0x0;
        }
        else {
          pFVar12 = *(FILE **)((longlong)local_540 + 8);
        }
      }
      FVar9.dwLowDateTime._0_1_ = *(undefined *)&local_548[4].dwLowDateTime;
      iVar5 = FUN_140003c94(DAT_140026470,(longlong *)local_548[2],(ulonglong *)local_548[3],FVar9,
                            pFVar12);
      iVar21 = iVar21 + iVar5;
      goto LAB_1400029cb;
    }
    if (local_4e8 == (longlong *)0x0) {
      if ((DAT_1400157ec & 0x10) != 0) {
        if (local_538 != (FILETIME *)0x0) {
          FVar9.dwLowDateTime._0_1_ = *(undefined *)&local_538[4].dwLowDateTime;
          iVar5 = FUN_140003c94(DAT_140026470,(longlong *)local_538[2],(ulonglong *)local_538[3],
                                FVar9,local_530);
          iVar21 = iVar21 + iVar5;
        }
        goto LAB_1400029e0;
      }
      if ((local_554 == '\0') && (FVar13 == (FILETIME)0x0)) {
        if (DAT_140025c3b != '\0') {
          iVar21 = 1;
          goto LAB_1400029e0;
        }
        FUN_140003898(0,0x431,(ulonglong)DAT_140026470,FVar9);
      }
LAB_1400029cb:
      if (local_548 == (FILETIME *)0x0) goto LAB_1400029d7;
LAB_1400029ea:
      DAT_140036cec = uVar3;
      GetSystemTimeAsFileTime(&local_4d0);
      FVar20 = (FILETIME)((longlong)local_4d0 + 2);
    }
    else {
      if ((*(char *)(plVar11 + 5) == '\0') || ((DAT_1400157ec & 0x40) != 0)) {
        FVar9.dwLowDateTime._0_1_ = *(undefined *)(param_1 + 0x10);
        iVar5 = FUN_140003c94(DAT_140026470,local_4e8,(ulonglong *)plVar11[4],FVar9,local_530);
        iVar21 = iVar21 + iVar5;
      }
      else {
        FUN_140002fe0((longlong **)local_4d0,plVar11,param_1,FVar9);
      }
LAB_1400029d7:
      if (local_4e8 != (longlong *)0x0) goto LAB_1400029ea;
LAB_1400029e0:
      DAT_140036cec = uVar3;
      if (DAT_140026450 == (FILETIME)0x0) goto LAB_1400029ea;
    }
    param_3 = local_4f8;
    if ((local_4c8 != (FILETIME *)0x0) && (local_548 != (FILETIME *)0x0)) {
      *local_4c8 = FVar20;
    }
  }
  if ((DAT_140025c3b != '\0') && (iVar21 != 0)) {
    DAT_140015040 = 0;
    if ((*(byte *)(param_1 + 0x11) & 8) == 0) {
      if (DAT_1400157e8 != 1) goto LAB_140002a7b;
      uVar14 = 0xfaa;
    }
    else {
      uVar14 = 0xfab;
    }
    FUN_140003898(0,uVar14,*(ulonglong *)(param_1 + 8),FVar9);
  }
LAB_140002a7b:
  if (((DAT_1400157ec & 8) == 0) || (DAT_1400157e8 != 1)) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
    bVar4 = *(byte *)(param_1 + 0x11);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      *(byte *)(param_1 + 0x11) = bVar4 | 2;
      if (iVar21 < 1) {
        bVar4 = bVar4 & 0xfb | 2;
      }
      else {
        bVar4 = bVar4 | 6;
      }
      *(byte *)(param_1 + 0x11) = bVar4;
    }
    if ((ulonglong)FVar13 < (ulonglong)FVar20) {
      FVar13 = FVar20;
    }
    *(FILETIME *)(param_1 + 0x18) = FVar13;
    *(FILETIME *)param_3 = FVar13;
    FUN_140002f98((longlong **)FVar15);
    if (FVar15 != FVar19) {
      FUN_140002f98((longlong **)FVar19);
    }
  }
  else {
    FUN_140002f98((longlong **)FVar15);
    if (FVar15 != FVar19) {
      FUN_140002f98((longlong **)FVar19);
    }
  }
LAB_140002af5:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_5a8);
  return;
}



void FUN_140002b20(FILETIME *param_1,FILETIME param_2,LPWIN32_FIND_DATAW param_3,ulonglong **param_4
                  )

{
  undefined auVar1 [16];
  bool bVar2;
  short sVar3;
  FILETIME FVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FILETIME FVar7;
  longlong ******pppppplVar8;
  size_t sVar9;
  longlong *****ppppplVar10;
  longlong ******pppppplVar11;
  longlong ******pppppplVar12;
  longlong ******pppppplVar13;
  WCHAR *pWVar14;
  wchar_t wVar15;
  longlong ******pppppplVar16;
  FILETIME FVar17;
  FILETIME FVar18;
  FILETIME FVar19;
  longlong ******pppppplVar20;
  longlong lVar21;
  undefined auStack_2e8 [32];
  longlong ******local_2c8;
  undefined local_2c0 [16];
  FILETIME local_2b0;
  FILETIME local_2a8;
  FILETIME local_2a0;
  FILETIME local_298;
  undefined local_288 [592];
  ulonglong local_38;
  longlong lVar22;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_2e8;
  local_2b0 = *param_1;
  pppppplVar8 = (longlong ******)0x0;
  local_2a8 = param_1[1];
  local_2c8 = (longlong ******)0x0;
  local_2c0._0_4_ = 0;
  local_2c0._4_4_ = 0;
  FVar17 = param_2;
  FVar7 = DAT_140026458;
  do {
    DAT_140026458 = FVar17;
    local_298 = DAT_140026458;
    if (local_2b0 == (FILETIME)0x0) {
      DAT_140026458 = FVar7;
      __security_check_cookie(local_38 ^ (ulonglong)auStack_2e8);
      return;
    }
    local_2c0._8_8_ = *(FILETIME *)((longlong)local_2b0 + 8);
    wVar15 = *(wchar_t *)local_2c0._8_8_;
    FVar4 = (FILETIME)local_2c0._8_8_;
    FVar17 = DAT_140026458;
    if (wVar15 != L'\0') {
      do {
        if (wVar15 == L'$') break;
        if (wVar15 == L'^') {
          FVar4 = (FILETIME)((longlong)FVar4 + 2);
        }
        FVar4 = (FILETIME)((longlong)FVar4 + 2);
        wVar15 = *(wchar_t *)FVar4;
      } while (wVar15 != L'\0');
      if (*(wchar_t *)FVar4 != L'\0') {
        param_3 = (LPWIN32_FIND_DATAW)&local_2a8;
        FVar17._1_7_ = DAT_140026458._1_7_;
        FVar17.dwLowDateTime._0_1_ = 1;
        local_2c0._8_8_ =
             FUN_14000e740((wchar_t *)local_2c0._8_8_,'\x01',(ulonglong **)param_3,param_4);
        FVar7 = DAT_140026458;
      }
    }
    DAT_140026458 = FVar7;
    local_2a0 = (FILETIME)FUN_14000dcc4((void *)local_2c0._8_8_,FVar17,(ulonglong)param_3,param_4);
    FVar7 = local_2a0;
LAB_140002c08:
    while( true ) {
      FVar4 = local_2b0;
      FVar18.dwLowDateTime = 0;
      FVar18.dwHighDateTime = 0;
      sVar3 = *(short *)FVar7;
      if ((sVar3 == 0) || ((sVar3 != 0x20 && (sVar3 != 9)))) break;
      FVar7 = (FILETIME)((longlong)FVar7 + 2);
    }
    sVar3 = *(short *)FVar7;
    if (sVar3 != 0) {
      FVar4 = FVar7;
      if (sVar3 == 0x22) {
        do {
          if (sVar3 == 0) goto LAB_140002c3b;
          FVar4 = (FILETIME)((longlong)FVar4 + 2);
          sVar3 = *(short *)FVar4;
        } while (sVar3 != 0x22);
LAB_140002c35:
        if (*(short *)FVar4 == 0) {
LAB_140002c3b:
          FVar17.dwLowDateTime = 0x40e;
          FVar17.dwHighDateTime = 0;
          FUN_140003898(0,0x40e,(ulonglong)param_3,param_4);
        }
        FVar4 = (FILETIME)((longlong)FVar4 + 2);
      }
      else {
        FVar19 = FVar7;
        if (sVar3 == 0x7b) {
          do {
            FVar4 = (FILETIME)((longlong)FVar19 + 2);
            if (*(short *)FVar4 == 0x22) {
              FVar4 = (FILETIME)((longlong)FVar19 + 4);
              do {
                sVar3 = *(short *)FVar4;
                if (sVar3 == 0) break;
                FVar4 = (FILETIME)((longlong)FVar4 + 2);
              } while (sVar3 != 0x22);
            }
          } while ((*(short *)FVar4 != 0x7d) && (FVar19 = FVar4, *(short *)FVar4 != 0));
          if (*(short *)FVar4 == 0) {
            FVar17.dwLowDateTime = 0x423;
            FVar17.dwHighDateTime = 0;
            FUN_140003898(0,0x423,(ulonglong)param_3,param_4);
          }
          FVar4 = (FILETIME)((longlong)FVar4 + 2);
          sVar3 = *(short *)FVar4;
          if (sVar3 == 0x22) {
            do {
              if (sVar3 == 0) goto LAB_140002c3b;
              FVar4 = (FILETIME)((longlong)FVar4 + 2);
              sVar3 = *(short *)FVar4;
            } while (sVar3 != 0x22);
            goto LAB_140002c35;
          }
        }
        while (((sVar3 != 0 && (*(short *)FVar4 != 0x20)) && (*(short *)FVar4 != 9))) {
          sVar3 = *(short *)((longlong)FVar4 + 2);
          FVar4 = (FILETIME)((longlong)FVar4 + 2);
        }
      }
      if (*(short *)FVar4 != 0) {
        *(undefined2 *)FVar4 = 0;
        FVar4 = (FILETIME)((longlong)FVar4 + 2);
      }
      FVar19 = FVar7;
      if (*(short *)FVar7 == 0x7b) {
        do {
          if (*(short *)FVar19 == 0x7d) break;
          if (*(short *)FVar19 == 0x5e) {
            FVar19 = (FILETIME)((longlong)FVar19 + 2);
          }
          FVar19 = (FILETIME)((longlong)FVar19 + 2);
        } while (*(short *)FVar19 != 0);
        FVar18 = FVar7;
        if (*(short *)FVar19 != 0) {
          *(undefined2 *)FVar19 = 0;
          FVar18 = (FILETIME)((longlong)FVar7 + 2);
          FVar19 = (FILETIME)((longlong)FVar19 + 2);
        }
      }
      local_288._4_4_ = 0;
      local_288._8_4_ = 0;
      bVar2 = false;
      local_288._20_4_ = 0;
      local_288._24_4_ = 0;
      pwVar5 = (wchar_t *)FUN_14000dcc4((void *)FVar19,FVar17,(ulonglong)param_3,param_4);
      FVar17 = (FILETIME)&DAT_140011614;
      pwVar6 = wcspbrk((wchar_t *)FVar19,L"*?");
      pppppplVar20 = pppppplVar8;
      if ((pwVar6 != (wchar_t *)0x0) || (FVar18 != (FILETIME)0x0)) {
        param_4 = (ulonglong **)local_2c0;
        param_3 = (LPWIN32_FIND_DATAW)local_288;
        FVar17 = FVar19;
        FVar7 = (FILETIME)FUN_140005e6c((wchar_t *)FVar18,(wchar_t *)FVar19,param_3,param_4);
        if (FVar7 != (FILETIME)0x0) {
          bVar2 = true;
          free(pwVar5);
          FVar17 = (FILETIME)((longlong)local_288 + 0x2c);
          pwVar5 = (wchar_t *)FUN_14000f570((wchar_t *)FVar7,(wchar_t *)FVar17);
          FVar19 = FVar7;
        }
      }
      do {
        pppppplVar8 = (longlong ******)FUN_140009244(0x18,FVar17,(ulonglong)param_3,param_4);
        FVar17.dwLowDateTime = 0x20;
        FVar17.dwHighDateTime = 0;
        pwVar6 = wcschr(pwVar5,L' ');
        if (pwVar6 == (wchar_t *)0x0) {
LAB_140002e1a:
          ppppplVar10 = (longlong *****)FUN_14000dcc4(pwVar5,FVar17,(ulonglong)param_3,param_4);
          pppppplVar8[1] = ppppplVar10;
        }
        else {
          FVar17.dwLowDateTime = 0x22;
          FVar17.dwHighDateTime = 0;
          pwVar6 = wcschr(pwVar5,L'\"');
          if (pwVar6 != (wchar_t *)0x0) goto LAB_140002e1a;
          lVar21 = -1;
          do {
            lVar22 = lVar21;
            lVar21 = lVar22 + 1;
          } while (pwVar5[lVar21] != L'\0');
          FVar17 = (FILETIME)(lVar22 + 4);
          auVar1._8_8_ = 0;
          auVar1._0_8_ = FVar17;
          lVar21 = SUB168(ZEXT816(2) * auVar1,8);
          sVar9 = SUB168(ZEXT816(2) * auVar1,0);
          if (lVar21 != 0) {
            sVar9 = 0xffffffffffffffff;
          }
          ppppplVar10 = (longlong *****)FUN_140009214(sVar9,lVar21,(ulonglong)param_3,param_4);
          pppppplVar8[1] = ppppplVar10;
          wcscpy_s((wchar_t *)ppppplVar10,(rsize_t)FVar17,L"\"");
          wcscat_s((wchar_t *)pppppplVar8[1],(rsize_t)FVar17,pwVar5);
          param_3 = (LPWIN32_FIND_DATAW)&DAT_140011624;
          wcscat_s((wchar_t *)pppppplVar8[1],(rsize_t)FVar17,L"\"");
        }
        if (DAT_140025c39 == '\0') {
LAB_140002e4c:
          if (((local_288[0] & 0x10) == 0) ||
             ((FVar7 = (FILETIME)local_288._4_8_, (DWORD)local_288._4_8_ == 0 &&
              (SUB84(local_288._4_8_,4) == 0)))) {
            FVar7 = (FILETIME)local_288._20_8_;
          }
          *(FILETIME *)(pppppplVar8 + 2) = FVar7;
        }
        else {
          param_3 = (LPWIN32_FIND_DATAW)local_2c0;
          FVar17 = (FILETIME)local_288;
          lVar21 = FUN_140005ca8(pwVar5,(LPWIN32_FIND_DATAW)FVar17,(HANDLE *)param_3,param_4);
          if (lVar21 != 0) goto LAB_140002e4c;
          pppppplVar8[2] = (longlong *****)0x0;
        }
        if (DAT_140025c39 == '\0') {
          pppppplVar13 = (longlong ******)&local_2c8;
          for (; pppppplVar20 != (longlong ******)0x0; pppppplVar20 = (longlong ******)*pppppplVar20
              ) {
            pppppplVar13 = pppppplVar20;
          }
          *pppppplVar13 = (longlong *****)pppppplVar8;
          pppppplVar8 = local_2c8;
          pppppplVar13 = local_2c8;
        }
        else {
          FVar17 = *(FILETIME *)(pppppplVar8 + 2);
          pppppplVar12 = pppppplVar20;
          pppppplVar16 = pppppplVar20;
          pppppplVar13 = pppppplVar8;
          if (pppppplVar20 != (longlong ******)0x0) {
            do {
              pppppplVar11 = pppppplVar12;
              pppppplVar12 = pppppplVar11;
              if ((ulonglong)*(FILETIME *)(pppppplVar11 + 2) <= (ulonglong)FVar17 &&
                  FVar17 != *(FILETIME *)(pppppplVar11 + 2)) break;
              pppppplVar12 = (longlong ******)*pppppplVar11;
              pppppplVar16 = pppppplVar11;
            } while (pppppplVar12 != (longlong ******)0x0);
            if (pppppplVar16 != pppppplVar12) {
              *pppppplVar16 = (longlong *****)pppppplVar8;
              *pppppplVar8 = (longlong *****)pppppplVar12;
              pppppplVar8 = pppppplVar20;
              pppppplVar13 = local_2c8;
            }
          }
        }
        local_2c8 = pppppplVar13;
        free(pwVar5);
        FVar7 = FVar4;
        if (!bVar2) goto LAB_140002c08;
        FVar17 = (FILETIME)&DAT_140011614;
        pwVar5 = wcspbrk((wchar_t *)FVar19,L"*?");
        if ((pwVar5 == (wchar_t *)0x0) ||
           (FVar17 = (FILETIME)local_2c0._0_8_,
           pWVar14 = FUN_140005e30((LPWIN32_FIND_DATAW)local_288,(HANDLE)local_2c0._0_8_),
           pWVar14 == (WCHAR *)0x0)) goto LAB_140002c08;
        FVar17 = (FILETIME)((longlong)local_288 + 0x2c);
        pwVar5 = (wchar_t *)FUN_14000f570((wchar_t *)FVar19,(wchar_t *)FVar17);
        pppppplVar20 = pppppplVar8;
        if (pwVar5 == (wchar_t *)0x0) goto LAB_140002c08;
      } while( true );
    }
    if ((FILETIME)local_2c0._8_8_ != *(FILETIME *)((longlong)local_2b0 + 8)) {
      free((void *)local_2c0._8_8_);
    }
    free((void *)local_2a0);
    local_2b0 = *(FILETIME *)FVar4;
    FVar17 = local_298;
    FVar7 = DAT_140026458;
  } while( true );
}



void FUN_140002f98(longlong **param_1)

{
  longlong **pplVar1;
  
  if (param_1 != (longlong **)0x0) {
    do {
      pplVar1 = param_1;
      param_1 = (longlong **)*pplVar1;
      free(pplVar1[1]);
      *pplVar1 = (longlong *)DAT_14003d0e0;
      DAT_14003d0e0 = pplVar1;
    } while (param_1 != (longlong **)0x0);
  }
  return;
}



void FUN_140002fe0(longlong **param_1,longlong *param_2,ulonglong param_3,undefined8 param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  
  pplVar8 = (longlong **)0x0;
  pplVar1 = (longlong **)*param_1;
  plVar4 = param_2;
  uVar9 = param_3;
  if ((longlong **)*param_1 != (longlong **)0x0) {
    do {
      pplVar6 = pplVar1;
      if ((pplVar6[1] == param_2) &&
         (pplVar1 = pplVar6, *(char *)(pplVar6 + 2) == *(char *)(param_3 + 0x10))) break;
      pplVar1 = (longlong **)*pplVar6;
      pplVar8 = pplVar6;
    } while (pplVar1 != (longlong **)0x0);
    pplVar6 = param_1;
    if (pplVar1 != (longlong **)0x0) goto LAB_14000305c;
  }
  uVar5 = 0;
  pplVar1 = (longlong **)FUN_140009244(0x28,param_2,param_3,param_4);
  pplVar1[1] = param_2;
  pplVar6 = (longlong **)CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined *)(param_3 + 0x10));
  *(undefined *)(pplVar1 + 2) = *(undefined *)(param_3 + 0x10);
  if (pplVar8 == (longlong **)0x0) {
    if ((longlong **)*param_1 == (longlong **)0x0) {
      *param_1 = (longlong *)pplVar1;
    }
    else {
      **param_1 = (longlong)pplVar1;
    }
  }
  else {
    *pplVar8 = (longlong *)pplVar1;
  }
LAB_14000305c:
  plVar2 = FUN_14000dc58(pplVar6,plVar4,uVar9,param_4);
  pvVar3 = FUN_14000dcc4(*(void **)(param_3 + 8),plVar4,uVar9,param_4);
  plVar2[1] = (longlong)pvVar3;
  pplVar8 = (longlong **)pplVar1[3];
  pplVar6 = pplVar1 + 3;
  while (pplVar7 = pplVar8, pplVar7 != (longlong **)0x0) {
    pplVar6 = pplVar7;
    pplVar8 = (longlong **)*pplVar7;
  }
  *pplVar6 = plVar2;
  plVar4 = FUN_14000dc58(0,pplVar6,uVar9,param_4);
  pvVar3 = FUN_14000dcc4(DAT_140026460,pplVar6,uVar9,param_4);
  plVar4[1] = (longlong)pvVar3;
  pplVar8 = (longlong **)pplVar1[4];
  pplVar1 = pplVar1 + 4;
  while (pplVar6 = pplVar8, pplVar6 != (longlong **)0x0) {
    pplVar1 = pplVar6;
    pplVar8 = (longlong **)*pplVar6;
  }
  *pplVar1 = plVar4;
  *(longlong ***)(param_3 + 0x28) = param_1;
  return;
}



ulonglong FUN_1400030d8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  bool bVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  undefined uVar14;
  undefined7 uVar15;
  ulonglong uVar16;
  
  uVar14 = (undefined)param_4;
  uVar15 = (undefined7)((ulonglong)param_4 >> 8);
  uVar16 = 0;
  uVar10 = uVar16;
  if (param_1 != (longlong *)0x0) {
    do {
      uVar11 = uVar16;
      for (puVar12 = (undefined8 *)param_1[4]; lVar8 = -1, puVar12 != (undefined8 *)0x0;
          puVar12 = (undefined8 *)*puVar12) {
        pwVar5 = (wchar_t *)puVar12[1];
        do {
          lVar8 = lVar8 + 1;
        } while (pwVar5[lVar8] != L'\0');
        uVar11 = uVar11 + 1 + lVar8;
        if ((*pwVar5 != L'\"') && (pwVar5 = wcschr(pwVar5,L' '), pwVar5 != (wchar_t *)0x0)) {
          uVar11 = uVar11 + 2;
        }
      }
      uVar11 = uVar11 + 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar11;
      lVar8 = SUB168(ZEXT416(2) * auVar1,8);
      sVar4 = SUB168(ZEXT416(2) * auVar1,0);
      if (lVar8 != 0) {
        sVar4 = 0xffffffffffffffff;
      }
      pwVar5 = (wchar_t *)FUN_140009214(sVar4,lVar8,0xffffffffffffffff,CONCAT71(uVar15,uVar14));
      *pwVar5 = L'\0';
      for (puVar12 = (undefined8 *)param_1[4]; puVar12 != (undefined8 *)0x0;
          puVar12 = (undefined8 *)*puVar12) {
        if ((*(wchar_t *)puVar12[1] == L'\"') ||
           (pwVar6 = wcschr((wchar_t *)puVar12[1],L' '), pwVar6 == (wchar_t *)0x0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          wcscat_s(pwVar5,uVar11,L"\"");
        }
        wcscat_s(pwVar5,uVar11,(wchar_t *)puVar12[1]);
        pwVar6 = L" ";
        if (bVar2) {
          pwVar6 = L"\" ";
        }
        wcscat_s(pwVar5,uVar11,pwVar6);
      }
      uVar14 = *(undefined *)(param_1 + 2);
      puVar13 = *(ulonglong **)(param_1[1] + 0x20);
      plVar9 = *(longlong **)(param_1[1] + 0x18);
      DAT_140026460 = pwVar5;
      uVar3 = FUN_140003d14((longlong *)param_1[3],plVar9,puVar13,(FILE *)CONCAT71(uVar15,uVar14),
                            (FILE *)0x0);
      if (uVar3 == 0) {
        for (puVar12 = (undefined8 *)param_1[3]; puVar12 != (undefined8 *)0x0;
            puVar12 = (undefined8 *)*puVar12) {
          puVar7 = FUN_14000dde0((wchar_t *)puVar12[1],plVar9,puVar13,CONCAT71(uVar15,uVar14));
          puVar7[5] = 0;
          *(byte *)((longlong)puVar7 + 0x11) = *(byte *)((longlong)puVar7 + 0x11) & 0xfb | 2;
        }
      }
      free(pwVar5);
      param_1 = (longlong *)*param_1;
      uVar10 = (ulonglong)((int)uVar10 + uVar3);
    } while (param_1 != (longlong *)0x0);
  }
  return uVar10;
}



void FUN_140003278(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *_Memory;
  
  _Memory = (undefined8 *)*param_1;
  while (_Memory != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)_Memory[3];
    *puVar1 = DAT_14003d0e0;
    DAT_14003d0e0 = (undefined8 *)_Memory[4];
    *DAT_14003d0e0 = puVar1;
    puVar1 = (undefined8 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  *param_1 = 0;
  return;
}



void FUN_1400032c8(void **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  FILE *_File;
  
  sVar1 = *(short *)((longlong)*param_1 + *param_2 * 2 + -2);
  _File = DAT_140026480;
  while ((DAT_140026480 = _File, sVar1 != 10 &&
         (pwVar2 = fgetws(&DAT_140025c50,0x400,_File), pwVar2 != (wchar_t *)0x0))) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while ((&DAT_140025c50)[lVar3] != 0);
    if ((*(short *)((longlong)&DAT_140025c48 + lVar3 * 2 + 4) == 0x5c) &&
       (*(short *)((longlong)&DAT_140025c48 + lVar3 * 2 + 6) == 10)) {
      *(undefined4 *)((longlong)&DAT_140025c48 + lVar3 * 2 + 4) = 0x20;
    }
    lVar3 = *param_2;
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while ((&DAT_140025c50)[lVar4] != 0);
    *param_2 = *param_2 + lVar4;
    pvVar5 = FUN_140009274(*param_1,*param_2 * 2 + 2,(ulonglong)_File,param_4);
    if (pvVar5 == (void *)0x0) {
      FUN_140003898((ulonglong)DAT_140025c20,0x419,(ulonglong)_File,param_4);
    }
    lVar4 = *param_2;
    *param_1 = pvVar5;
    wcscpy_s((wchar_t *)((longlong)pvVar5 + lVar3 * 2),(lVar4 - lVar3) + 1,&DAT_140025c50);
    sVar1 = *(short *)((longlong)*param_1 + *param_2 * 2 + -2);
    _File = DAT_140026480;
  }
  return;
}



void FUN_1400033d0(void *param_1,ulonglong param_2,void **param_3,undefined8 param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  void **ppvVar4;
  
  uVar3 = param_2 & 0xffffffff;
  ppvVar4 = param_3;
  if (*param_3 == (void *)0x0) {
    pvVar2 = FUN_140009214(0x40,param_2,(ulonglong)param_3,param_4);
    *param_3 = pvVar2;
    goto LAB_140003443;
  }
  if ((param_2 & 7) != 0) goto LAB_140003443;
  uVar1 = uVar3 + 8;
  pvVar2 = (void *)0x0;
  if (uVar1 < 0x1fffffffffffffff) {
    param_2 = uVar1 * 8;
    pvVar2 = realloc(*param_3,param_2);
    if (pvVar2 == (void *)0x0) goto LAB_140003430;
  }
  else {
LAB_140003430:
    param_2 = 0x41b;
    FUN_140003898((ulonglong)DAT_140025c24,0x41b,(ulonglong)ppvVar4,param_4);
  }
  *param_3 = pvVar2;
LAB_140003443:
  pvVar2 = FUN_14000dcc4(param_1,param_2,(ulonglong)ppvVar4,param_4);
  *(void **)((longlong)*param_3 + uVar3 * 8) = pvVar2;
  return;
}



void FUN_140003468(wchar_t *param_1,uint *param_2,void **param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  wchar_t *local_res20;
  
  pwVar1 = wcschr(param_1,L'\\');
  if ((pwVar1 != (wchar_t *)0x0) &&
     (((pwVar1[-1] == L' ' || (pwVar1[-1] == L'\t')) && (pwVar1[1] == L'\n')))) {
    *pwVar1 = L'\0';
  }
  local_res20 = (wchar_t *)0x0;
  while( true ) {
    pwVar1 = wcstok_s(param_1,L" \t\n",&local_res20);
    if (pwVar1 == (wchar_t *)0x0) {
      return;
    }
    if (*pwVar1 == L'@') break;
    FUN_1400033d0(pwVar1,(ulonglong)*param_2,param_3,param_4);
    *param_2 = *param_2 + 1;
    param_1 = (wchar_t *)0x0;
  }
  FUN_140003898(0,0xfa1,(ulonglong)(pwVar1 + 1),param_4);
  return;
}



void FUN_140003510(wchar_t *param_1,uint *param_2,void **param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  void **ppvVar8;
  wchar_t *local_28;
  longlong local_20;
  
  bVar3 = false;
  pwVar4 = wcschr(param_1,L'\"');
  if (pwVar4 == (wchar_t *)0x0) {
    FUN_140003468(param_1,param_2,param_3,param_4);
  }
  else {
    ppvVar8 = (void **)0x1;
    if ((pwVar4 == param_1) || (pwVar6 = pwVar4 + -1, *pwVar6 != L'=')) {
      *pwVar4 = L'\0';
      pwVar6 = pwVar4 + 1;
      ppvVar8 = param_3;
      local_28 = pwVar6;
      FUN_140003468(param_1,param_2,param_3,param_4);
    }
    else {
      *pwVar4 = L' ';
      for (; ((param_1 < pwVar6 && (*pwVar6 != L' ')) && (1 < (ushort)(*pwVar6 + L'\xfff7')));
          pwVar6 = pwVar6 + -1) {
      }
      local_28 = pwVar6;
      if (pwVar6 != param_1) {
        *pwVar6 = L'\0';
        pwVar6 = pwVar6 + 1;
        ppvVar8 = param_3;
        FUN_140003468(param_1,param_2,param_3,param_4);
        local_28 = pwVar6;
      }
    }
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar6[lVar7] != L'\0');
    wVar2 = *pwVar6;
    pwVar4 = pwVar6;
    while (pwVar5 = pwVar6, wVar2 != L'\0') {
      if (*pwVar6 == L'\"') {
        if (pwVar6[1] != L'\"') {
          *pwVar6 = L'\0';
          pwVar5 = pwVar6 + 1;
          FUN_1400033d0(pwVar4,(ulonglong)*param_2,param_3,param_4);
          *param_2 = *param_2 + 1;
          FUN_140003510(pwVar6 + 2,param_2,param_3,param_4);
          ppvVar8 = param_3;
          break;
        }
        *pwVar6 = L'\"';
        do {
          pwVar1 = pwVar5 + 2;
          pwVar5[1] = *pwVar1;
          pwVar5 = pwVar5 + 1;
        } while (*pwVar1 != L'\0');
      }
      else if (((*pwVar6 == L'\\') && ((pwVar6[-1] == L' ' || (pwVar6[-1] == L'\t')))) &&
              (pwVar6[1] == L'\n')) {
        lVar7 = lVar7 + -2;
        *pwVar6 = L'\0';
        local_20 = lVar7;
        if (!bVar3) {
          bVar3 = true;
          local_28 = (wchar_t *)FUN_14000dcc4(pwVar4,0,(ulonglong)ppvVar8,param_4);
        }
        FUN_1400032c8(&local_28,&local_20,ppvVar8,param_4);
        pwVar6 = local_28 + lVar7;
        pwVar4 = local_28;
        lVar7 = local_20;
      }
      pwVar6 = pwVar6 + 1;
      wVar2 = *pwVar6;
    }
    if (pwVar5 == pwVar4 + lVar7) {
      FUN_140003898(0,0x3ee,(ulonglong)ppvVar8,param_4);
    }
    if (bVar3) {
      free(pwVar4);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1400036ec(wchar_t *param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  code *pcVar1;
  int iVar2;
  FILE *_File;
  wchar_t *pwVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  uint local_res10 [2];
  longlong local_res18;
  wchar_t *local_res20;
  undefined8 **local_48 [2];
  
  ppuVar7 = (undefined8 **)0x0;
  local_res10[0] = 0;
  _File = _wfsopen(param_1,L"rt,ccs=unicode",0x20);
  DAT_140026480 = _File;
  if (_File == (FILE *)0x0) {
    FUN_140003898(0,0x41c,(ulonglong)param_1,param_4);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_48[0] = (undefined8 **)0x0;
  uVar5 = 0x400;
  pwVar3 = fgetws(&DAT_140025c50,0x400,_File);
  ppuVar8 = ppuVar7;
  if (pwVar3 != (wchar_t *)0x0) {
    do {
      local_res18 = -1;
      do {
        lVar4 = local_res18;
        local_res18 = lVar4 + 1;
      } while ((&DAT_140025c50)[local_res18] != 0);
      if (((local_res18 == 0x3ff) && (_DAT_14002644c != 10)) ||
         ((*(short *)((longlong)&DAT_140025c48 + local_res18 * 2 + 6) == 10 &&
          (*(short *)((longlong)&DAT_140025c48 + local_res18 * 2 + 4) == 0x5c)))) {
        if ((*(short *)((longlong)&DAT_140025c48 + local_res18 * 2 + 6) == 10) &&
           (*(short *)((longlong)&DAT_140025c48 + local_res18 * 2 + 4) == 0x5c)) {
          uVar5 = lVar4 * 2;
          if (0x7ff < uVar5) {
            __report_rangecheckfailure();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          (&DAT_140025c50)[lVar4] = 0;
          *(undefined2 *)((longlong)&DAT_140025c48 + local_res18 * 2 + 4) = 0x20;
          local_res18 = lVar4;
        }
        local_res20 = (wchar_t *)FUN_14000dcc4(&DAT_140025c50,uVar5,(ulonglong)_File,param_4);
        FUN_1400032c8(&local_res20,&local_res18,_File,param_4);
        pwVar3 = local_res20;
      }
      else {
        pwVar3 = &DAT_140025c50;
      }
      FUN_140003510(pwVar3,local_res10,local_48,param_4);
      if (pwVar3 != &DAT_140025c50) {
        free(pwVar3);
      }
      uVar5 = 0x400;
      _File = DAT_140026480;
      pwVar3 = fgetws(&DAT_140025c50,0x400,DAT_140026480);
    } while (pwVar3 != (wchar_t *)0x0);
    ppuVar7 = (undefined8 **)(ulonglong)local_res10[0];
    ppuVar8 = local_48[0];
  }
  iVar2 = fclose(DAT_140026480);
  if (iVar2 == -1) {
    FUN_140003898(0,0x424,(ulonglong)param_1,param_4);
    _File = (FILE *)param_1;
  }
  FUN_14000b43c((uint)ppuVar7,ppuVar8,(undefined8 **)_File,param_4);
  if ((uint)ppuVar7 != 0) {
    ppuVar8 = ppuVar8 + (longlong)ppuVar7;
    do {
      ppuVar8 = ppuVar8 + -1;
      uVar6 = (int)ppuVar7 - 1;
      ppuVar7 = (undefined8 **)(ulonglong)uVar6;
      if (*ppuVar8 != (undefined8 *)0x0) {
        free(*ppuVar8);
      }
    } while (uVar6 != 0);
  }
  return;
}



ulonglong FUN_140003898(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  wint_t wVar2;
  int iVar3;
  undefined8 uVar4;
  undefined6 extraout_var;
  FILE *_File;
  undefined4 extraout_var_00;
  uint uVar6;
  wchar_t *pwVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong local_res18;
  undefined8 local_res20;
  ulonglong uVar5;
  
  puVar8 = &local_res18;
  uVar10 = param_1 & 0xffffffff;
  uVar5 = param_2;
  if ((DAT_1400157ec & 0x20) != 0) {
    uVar5 = (param_2 & 0xffffffff) / 1000;
    if ((int)uVar5 == 4) {
      return (param_2 & 0xffffffff) * 0x10624dd3 & 0xffffffff;
    }
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_140003a8c(param_1,uVar5,param_3,param_4);
  if ((int)uVar10 == 0) {
    FUN_14000be7c(L"NMAKE : ",uVar5,param_3,param_4);
  }
  else {
    FUN_14000be7c(L"%s(%u) : ",DAT_140026490,uVar10,param_4);
    param_3 = uVar10;
  }
  uVar5 = (param_2 & 0xffffffff) * 0x10624dd3 >> 0x20;
  iVar1 = (int)((param_2 & 0xffffffff) / 1000);
  if (iVar1 == 1) {
    FUN_1400039c0(0x14,uVar5,param_3,param_4);
    iVar9 = 2;
    if ((int)param_2 == 0x41b) {
      iVar9 = 4;
    }
  }
  else {
    iVar9 = 2;
    if (iVar1 == 2) {
      uVar6 = 0x15;
    }
    else {
      if (iVar1 != 4) goto LAB_14000394f;
      uVar6 = 0x16;
    }
    FUN_1400039c0(uVar6,uVar5,param_3,param_4);
  }
LAB_14000394f:
  FUN_14000be7c(L" U%04d: ",param_2 & 0xffffffff,param_3,param_4);
  uVar4 = FUN_14000bbec(param_2 & 0xffffffff);
  FUN_14000bf3c(uVar4,puVar8);
  wVar2 = FUN_14000bea4();
  uVar5 = CONCAT62(extraout_var,wVar2);
  if (DAT_140037093 == '\0') {
    _File = (FILE *)__acrt_iob_func(2);
    iVar3 = fflush(_File);
    uVar5 = CONCAT44(extraout_var_00,iVar3);
  }
  if (iVar1 != 1) {
    return uVar5;
  }
  pwVar7 = L"Stop.\n";
  FUN_14000be7c(L"Stop.\n",puVar8,param_3,param_4);
  FUN_14000bb48(pwVar7,puVar8,param_3,param_4);
                    // WARNING: Subroutine does not return
  exit(iVar9);
}



void FUN_1400039c0(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  FILE *_File;
  undefined4 in_register_0000000c;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if ((param_1 == 0xd) || ((DAT_1400157ec & 0x20) == 0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_140003a8c(CONCAT44(in_register_0000000c,param_1),param_2,param_3,param_4);
    bVar1 = param_1 - 0x14 < 6;
    if (param_1 == 0x18) {
      if (bVar1) {
        FUN_14000bea4();
      }
      else {
        FUN_14000c008();
      }
    }
    uVar2 = FUN_14000bbec((ulonglong)param_1);
    if (bVar1) {
      FUN_14000bf3c(uVar2,&local_res10);
    }
    else {
      FUN_14000c044(uVar2,&local_res10);
    }
    if ((0xd < param_1 - 10) && (param_1 != 0x7c)) {
      if (param_1 - 0x14 < 6) {
        FUN_14000bea4();
      }
      else {
        FUN_14000c008();
      }
    }
    if (bVar1) {
      if (DAT_140037093 == '\0') {
        _File = (FILE *)__acrt_iob_func(2);
        fflush(_File);
      }
    }
    else {
      FUN_14000bfb0();
    }
  }
  return;
}



void FUN_140003a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FILE *_File;
  wchar_t *pwVar1;
  
  if (DAT_140026488 == '\0') {
    pwVar1 = L"14.00.23506.0";
    DAT_140026488 = '\x01';
    FUN_1400039c0(0x18,L"14.00.23506.0",param_3,param_4);
    FUN_1400039c0(0x19,pwVar1,param_3,param_4);
    if (DAT_140037093 == '\0') {
      _File = (FILE *)__acrt_iob_func(2);
      fflush(_File);
    }
  }
  return;
}



void FUN_140003ae0(int *param_1,wchar_t **param_2,wchar_t *param_3,undefined8 param_4)

{
  wchar_t wVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  bVar2 = true;
  wVar1 = *param_3;
  pwVar6 = param_3;
  while (wVar1 != L'\0') {
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  *param_1 = 0;
  pwVar7 = param_3;
  if (param_3 < pwVar6) {
    do {
      sVar3 = wcsspn(param_3,L" \t");
      pwVar4 = param_3 + sVar3;
      if (pwVar6 <= pwVar4) break;
      if (param_2 != (wchar_t **)0x0) {
        *param_2 = pwVar4;
        param_2 = param_2 + 1;
      }
      if (*pwVar4 == L'\"') {
        param_3 = pwVar4 + 1;
        if (param_3 < pwVar6) {
          do {
            if (*param_3 == L'\\') {
              param_3 = param_3 + 1;
            }
            else if (*param_3 == L'\"') break;
            param_3 = param_3 + 1;
          } while (param_3 < pwVar6);
          if (param_3 < pwVar6) {
            param_3 = wcspbrk(param_3 + 1,L" \t");
            goto LAB_140003c4b;
          }
        }
      }
      else {
        pwVar5 = L" \t\"/";
        param_3 = wcspbrk(pwVar4,L" \t\"/");
        if (param_3 != (wchar_t *)0x0) {
          do {
            if (((pwVar6 <= param_3) || (*param_3 != L'/')) || (bVar2)) break;
            pwVar5 = L" \t\"/";
            param_3 = wcspbrk(param_3 + 1,L" \t\"/");
          } while (param_3 != (wchar_t *)0x0);
          if ((param_3 != (wchar_t *)0x0) && (*param_3 == L'\"')) {
            do {
              param_3 = param_3 + 1;
              if (pwVar6 <= param_3) break;
            } while (*param_3 != L'\"');
            pwVar5 = L" \t";
            param_3 = wcspbrk(param_3,L" \t");
          }
        }
        if (bVar2) {
          bVar2 = false;
          if (param_3 != (wchar_t *)0x0) {
            if ((*param_3 == L'/') && (param_2 != (wchar_t **)0x0)) {
              *param_3 = L'\0';
              pwVar4 = (wchar_t *)FUN_14000dcc4(param_2[-1],pwVar5,(ulonglong)pwVar7,param_4);
              param_2[-1] = pwVar4;
              *param_3 = L'/';
              param_3 = param_3 + -1;
            }
            goto LAB_140003c4b;
          }
LAB_140003c50:
          param_3 = pwVar6;
        }
        else {
LAB_140003c4b:
          if (param_3 == (wchar_t *)0x0) goto LAB_140003c50;
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_3 = L'\0';
          param_3 = param_3 + 1;
        }
      }
      *param_1 = *param_1 + 1;
    } while (param_3 < pwVar6);
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  return;
}



void FUN_140003c94(void *param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4,
                  FILE *param_5)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)param_4 >> 8);
  plVar3 = param_2;
  puVar4 = param_3;
  uVar5 = (char)param_4;
  plVar1 = FUN_14000dc58(param_1,param_2,(ulonglong)param_3,param_4);
  pvVar2 = FUN_14000dcc4(param_1,plVar3,(ulonglong)puVar4,CONCAT71(uVar6,uVar5));
  plVar1[1] = (longlong)pvVar2;
  FUN_140003d14(plVar1,param_2,param_3,(FILE *)CONCAT71(uVar6,(char)param_4),param_5);
  *plVar1 = (longlong)DAT_14003d0e0;
  DAT_14003d0e0 = plVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_140003d14(longlong *param_1,longlong *param_2,ulonglong *param_3,FILE *param_4,
                  FILE *param_5)

{
  wchar_t wVar1;
  undefined auVar2 [16];
  bool bVar3;
  bool bVar4;
  undefined uVar5;
  char cVar6;
  wchar_t wVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  HANDLE hFile;
  undefined8 uVar11;
  wchar_t *pwVar12;
  int *piVar13;
  longlong lVar14;
  ulonglong uVar16;
  size_t sVar17;
  int **_Dst;
  ulonglong uVar18;
  _FILETIME _Var19;
  FILE *pFVar20;
  byte bVar21;
  _FILETIME _Var22;
  int **ppiVar23;
  FILE *pFVar24;
  longlong *local_res10;
  ulonglong *local_res18 [2];
  uint local_64;
  uint local_60;
  _FILETIME local_58;
  _FILETIME local_50;
  _FILETIME local_48;
  _FILETIME local_40;
  longlong lVar15;
  
  DAT_140025c3c = DAT_140025c3c + 1;
  local_64 = 0;
  local_60 = 0;
  if ((DAT_1400157ec & 8) == 0) {
    bVar21 = (byte)((ulonglong)param_4 & 0xff);
    local_res18[0] = param_3;
    if ((DAT_1400157ec & 0x10) == 0) {
      uVar9 = 0;
      if (param_2 != (longlong *)0x0) {
        pFVar24 = param_4;
        local_res10 = param_2;
        do {
          _Var22 = (_FILETIME)local_res18;
          pFVar24 = (FILE *)(CONCAT71((int7)((ulonglong)pFVar24 >> 8),
                                      (char)(((ulonglong)param_4 & 0xff) >> 6)) & 0xffffffffffffff01
                            );
          cVar6 = FUN_1400077d0((wchar_t *)local_res10[1],(wchar_t **)&local_48,(ulonglong **)_Var22
                                ,pFVar24);
          _DAT_14002648c = 0;
          uVar5 = 0;
          bVar4 = false;
          bVar3 = false;
          local_58 = local_48;
          wVar1 = *(wchar_t *)local_48;
          _Var19 = local_48;
          wVar7 = wVar1;
          while (wVar7 != L'\0') {
            if ((*(wchar_t *)_Var19 == L'^') || (*(wchar_t *)_Var19 == L'$')) {
              _Var19 = (_FILETIME)((longlong)_Var19 + 2);
            }
            _Var19 = (_FILETIME)((longlong)_Var19 + 2);
            wVar7 = *(wchar_t *)_Var19;
          }
          while( true ) {
            uVar9 = (uint)(ushort)wVar1;
            if (((0x37 < (ushort)(uVar9 - 9)) ||
                ((0x80001001800001U >> ((ulonglong)(uVar9 - 9) & 0x3f) & 1) == 0)) &&
               (wVar1 != L'^')) break;
            if (uVar9 == 0x21) {
              bVar4 = true;
LAB_140004031:
              if (wVar1 == L'^') break;
            }
            else {
              if (uVar9 == 0x2d) {
                local_58 = (_FILETIME)((longlong)local_58 + 2);
                uVar5 = 1;
                iVar8 = iswdigit(*(wint_t *)local_58);
                _Var19 = local_58;
                if (iVar8 == 0) {
                  _DAT_14002648c = 0xffffffff;
                }
                else {
                  _Var22.dwLowDateTime = 10;
                  _Var22.dwHighDateTime = 0;
                  _DAT_14002648c = wcstoul((wchar_t *)local_58,(wchar_t **)&local_58,10);
                  piVar13 = _errno();
                  if (*piVar13 == 0x22) {
                    uVar18 = (ulonglong)DAT_140025c20;
                    *(undefined2 *)local_58 = 0;
                    FUN_140003898(uVar18,0x436,(ulonglong)_Var19,pFVar24);
                    _Var22 = _Var19;
                  }
                  while (iVar8 = iswspace(*(wint_t *)local_58), iVar8 != 0) {
                    local_58 = (_FILETIME)((longlong)local_58 + 2);
                  }
                }
                local_58 = (_FILETIME)((longlong)local_58 + -2);
                goto LAB_140004031;
              }
              if (uVar9 == 0x40) {
                if ((DAT_1400157ee & 4) == 0) {
                  bVar3 = true;
                }
                goto LAB_140004031;
              }
              if (uVar9 != 0x5e) goto LAB_140004031;
              local_58 = (_FILETIME)((longlong)local_58 + 2);
              if ((*(wchar_t *)local_58 != L' ') && (*(wchar_t *)local_58 != L'\t')) break;
            }
            local_58 = (_FILETIME)((longlong)local_58 + 2);
            wVar1 = *(wchar_t *)local_58;
          }
          if (bVar4) {
            pFVar24 = (FILE *)CONCAT71((int7)((ulonglong)pFVar24 >> 8),bVar3);
            _Var22.dwLowDateTime._0_1_ = bVar21;
            uVar11 = FUN_1400059e0((wchar_t *)local_58,local_res18[0],bVar21,(ulonglong **)pFVar24,
                                   (wchar_t *)param_5,&local_64);
            _Var19 = local_58;
            if ((char)uVar11 == '\0') goto LAB_140004094;
            pwVar12 = wcschr((wchar_t *)local_58,L'$');
            if (pwVar12 != (wchar_t *)0x0) {
              local_58 = (_FILETIME)
                         FUN_14000e740((wchar_t *)local_58,-1,local_res18,(ulonglong **)pFVar24);
            }
            if (_Var19 != local_58) {
              free((void *)local_58);
            }
            uVar9 = local_64;
            if (((((ulonglong)param_4 & 2) == 0) && (DAT_140025c3b != '\0')) &&
               ((local_64 != 0 && (_DAT_14002648c < local_64)))) break;
          }
          else {
LAB_140004094:
            local_40 = local_58;
            if ((cVar6 == '\0') &&
               (pwVar12 = wcschr((wchar_t *)local_58,L'$'), pwVar12 != (wchar_t *)0x0)) {
              _Var22 = (_FILETIME)local_res18;
              local_58 = (_FILETIME)
                         FUN_14000e740((wchar_t *)local_58,-1,(ulonglong **)_Var22,
                                       (ulonglong **)pFVar24);
            }
            lVar14 = -1;
            do {
              lVar15 = lVar14;
              lVar14 = lVar15 + 1;
            } while (*(wchar_t *)((longlong)local_58 + lVar14 * 2) != L'\0');
            uVar16 = lVar15 + 2;
            uVar18 = 0x8000;
            if (0x8000 < uVar16) {
              uVar18 = uVar16;
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar18;
            lVar14 = SUB168(ZEXT816(2) * auVar2,8);
            sVar17 = SUB168(ZEXT816(2) * auVar2,0);
            if (lVar14 != 0) {
              sVar17 = 0xffffffffffffffff;
            }
            _Dst = (int **)FUN_140009214(sVar17,lVar14,(ulonglong)_Var22,pFVar24);
            wcscpy_s((wchar_t *)_Dst,uVar18,(wchar_t *)local_58);
            _Var22 = local_58;
            pFVar24 = param_5;
            cVar6 = FUN_14000f778((wchar_t *)_Dst,uVar18,(wchar_t *)local_58,(wchar_t *)param_5);
            if (cVar6 != '\0') {
              _Var22 = local_58;
              FUN_140003898(0,0x447,(ulonglong)local_58,pFVar24);
            }
            while( true ) {
              if (((ulonglong)param_4 & 4) == 0) {
                ppiVar23 = (int **)CONCAT71(_Var22._1_7_,1);
              }
              else {
                ppiVar23 = (int **)0x0;
              }
              if ((((ulonglong)param_4 & 4) == 0) && ((((ulonglong)param_4 & 8) != 0 || (bVar3)))) {
                cVar6 = '\0';
              }
              else {
                cVar6 = '\x01';
              }
              pFVar24 = (FILE *)CONCAT71((int7)((ulonglong)pFVar24 >> 8),uVar5);
              uVar9 = FUN_140005114(_Dst,cVar6,ppiVar23,(int *)pFVar24,(void **)&local_50);
              pFVar20 = (FILE *)(ulonglong)uVar9;
              local_64 = uVar9;
              if (((ulonglong)param_4 & 2) != 0) goto LAB_1400041fa;
              if (uVar9 != 0x103) break;
              if (DAT_140036ced == (bVar21 & 2)) {
                FUN_140003898(0,0xfac,(ulonglong)local_50,pFVar24);
                pFVar20 = (FILE *)0x0;
                local_64 = 0;
                break;
              }
              if (9 < local_60) goto LAB_1400041d6;
              _Var22 = local_50;
              FUN_140003898(0,0xfad,(ulonglong)local_50,pFVar24);
              local_60 = local_60 + 1;
            }
            uVar9 = (uint)pFVar20;
            if (uVar9 == 0) goto LAB_1400041fa;
LAB_1400041d6:
            uVar9 = (uint)pFVar20;
            if ((_DAT_14002648c < uVar9) && (DAT_140025c3b == '\0')) {
              FUN_140003898(0,0x435,(ulonglong)local_50,pFVar20);
              pFVar24 = pFVar20;
            }
LAB_1400041fa:
            if (local_40 != local_58) {
              free((void *)local_58);
            }
            free((void *)local_48);
            free(_Dst);
            if ((((((ulonglong)param_4 & 2) == 0) && (DAT_140025c3b != '\0')) && (uVar9 != 0)) &&
               (_DAT_14002648c < uVar9)) break;
          }
          local_res10 = (longlong *)*local_res10;
        } while (local_res10 != (longlong *)0x0);
      }
      if (((((ulonglong)param_4 & 2) == 0) && (DAT_140025c3b != '\0')) && (_DAT_14002648c < uVar9))
      {
        return uVar9;
      }
    }
    else if (param_1 != (longlong *)0x0) {
      do {
        pwVar12 = (wchar_t *)param_1[1];
        if (*pwVar12 == L'\"') {
          pwVar10 = wcsrchr(pwVar12,L'\"');
          *pwVar10 = L'\0';
          wVar7 = pwVar12[1];
          *pwVar12 = wVar7;
          pwVar10 = pwVar12 + 1;
          while (wVar7 != L'\0') {
            wVar7 = pwVar10[1];
            *pwVar10 = wVar7;
            pwVar10 = pwVar10 + 1;
          }
        }
        FUN_1400039c0(5,pwVar12,param_3,param_4);
        if ((bVar21 >> 2 & 1) == 0) {
          GetSystemTimeAsFileTime(&local_48);
          param_4 = (FILE *)0x0;
          param_3 = (ulonglong *)0x0;
          hFile = CreateFileW(pwVar12,0x100,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
          if (hFile != (HANDLE)0xffffffffffffffff) {
            param_4 = (FILE *)&local_48;
            param_3 = (ulonglong *)0x0;
            SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,(FILETIME *)param_4);
            CloseHandle(hFile);
          }
        }
        param_1 = (longlong *)*param_1;
      } while (param_1 != (longlong *)0x0);
    }
  }
  return 0;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_140004288(void)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong lVar5;
  ulonglong *_Dst;
  ulonglong *puVar6;
  undefined auStack_10270 [32];
  wchar_t *apwStack_10250 [2];
  wchar_t awStack_10240 [261];
  wchar_t awStack_10036 [7];
  wchar_t awStack_10028 [4];
  ulonglong auStack_10020 [8190];
  undefined auStack_2a [2];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x1400042b1;
  local_28 = DAT_140015008 ^ (ulonglong)auStack_10270;
  apwStack_10250[0] = (wchar_t *)0x0;
  wcscpy_s(awStack_10028,0x8000,L"set ");
  _Dst = auStack_10020;
  for (_Str = &DAT_140015808; (*_Str == L' ' || (*_Str == L'\t')); _Str = _Str + 1) {
  }
  pwVar2 = wcschr(_Str,L'=');
  if (pwVar2 == (wchar_t *)0x0) {
LAB_140004532:
    __security_check_cookie(local_28 ^ (ulonglong)auStack_10270);
    return;
  }
  for (; *_Str != L'='; _Str = _Str + 1) {
    *(wchar_t *)_Dst = *_Str;
    _Dst = (ulonglong *)((longlong)_Dst + 2);
    if (&local_28 <= _Dst) goto LAB_140004532;
  }
  lVar5 = -1;
  wVar1 = L'=';
LAB_140004357:
  if (wVar1 == L'^') {
    wVar1 = _Str[1];
    puVar6 = _Dst;
    if (wVar1 == L'\0') goto LAB_1400044f5;
    _Str = _Str + 2;
LAB_14000436e:
    *(wchar_t *)_Dst = wVar1;
    puVar6 = (ulonglong *)((longlong)_Dst + 2);
    if (&local_28 <= puVar6) goto LAB_140004532;
  }
  else {
    _Str = _Str + 1;
    if (wVar1 != L'%') goto LAB_14000436e;
    pwVar2 = awStack_10240;
    for (; (wVar1 = *_Str, wVar1 != L'%' && (wVar1 != L'\0')); _Str = _Str + 1) {
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
      if (pwVar2 == awStack_10036) goto LAB_140004532;
    }
    wVar1 = *_Str;
    _Str = _Str + 1;
    *pwVar2 = L'\0';
    if (wVar1 == L'\0') {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (awStack_10240[lVar3] != L'\0');
      puVar6 = (ulonglong *)((longlong)_Dst + (lVar4 + 2) * 2);
      if (&local_28 <= puVar6) goto LAB_140004532;
      *(undefined2 *)_Dst = 0x25;
      wcscpy_s((wchar_t *)((longlong)_Dst + 2),
               (longlong)&local_28 - (longlong)(wchar_t *)((longlong)_Dst + 2) >> 1,awStack_10240);
LAB_1400044f5:
      *(undefined2 *)puVar6 = 0;
      wcscpy_s((wchar_t *)&DAT_140015800,0x8000,awStack_10028);
      auStack_10020[0]._0_2_ = 0;
      do {
        lVar5 = lVar5 + 1;
      } while (awStack_10028[lVar5] != L'\0');
      goto LAB_140004532;
    }
    _wdupenv_s(apwStack_10250,(size_t *)0x0,awStack_10240);
    lVar3 = -1;
    if (apwStack_10250[0] == (wchar_t *)0x0) {
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (awStack_10240[lVar3] != L'\0');
      puVar6 = (ulonglong *)((longlong)_Dst + (lVar4 + 3) * 2);
      if (&local_28 <= puVar6) goto LAB_140004532;
      *(undefined2 *)_Dst = 0x25;
      wcscpy_s((wchar_t *)((longlong)_Dst + 2),
               (longlong)&local_28 - (longlong)(wchar_t *)((longlong)_Dst + 2) >> 1,awStack_10240);
      *(undefined2 *)((longlong)puVar6 + -2) = 0x25;
    }
    else {
      do {
        lVar3 = lVar3 + 1;
      } while (apwStack_10250[0][lVar3] != L'\0');
      puVar6 = (ulonglong *)((longlong)_Dst + lVar3 * 2);
      if (&local_28 <= puVar6) goto LAB_140004532;
      wcscpy_s((wchar_t *)_Dst,(longlong)&local_28 - (longlong)_Dst >> 1,apwStack_10250[0]);
      free(apwStack_10250[0]);
      apwStack_10250[0] = (wchar_t *)0x0;
    }
  }
  wVar1 = *_Str;
  _Dst = puVar6;
  if (wVar1 == L'\0') goto LAB_1400044f5;
  goto LAB_140004357;
}



wchar_t * FUN_140004564(wchar_t *param_1,undefined8 param_2,wchar_t *param_3,undefined8 param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *local_res8;
  
  pwVar2 = (wchar_t *)FUN_14000dcc4(&DAT_140011dec,param_2,(ulonglong)param_3,param_4);
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    pwVar3 = wcschr(param_1,L'%');
    if ((pwVar3 == (wchar_t *)0x0) || (pwVar4 = wcschr(pwVar3 + 1,L'%'), pwVar4 == (wchar_t *)0x0))
    {
      pwVar2 = FUN_14000dd24(pwVar2,param_1,param_3,param_4);
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_1[lVar5] != L'\0');
      param_1 = param_1 + lVar5;
    }
    else {
      *pwVar3 = L'\0';
      *pwVar4 = L'\0';
      local_res8 = (wchar_t *)0x0;
      pwVar2 = FUN_14000dd24(pwVar2,param_1,param_3,param_4);
      param_3 = pwVar3 + 1;
      _wdupenv_s(&local_res8,(size_t *)0x0,param_3);
      if (local_res8 == (wchar_t *)0x0) {
        *pwVar3 = L'%';
        pwVar2 = FUN_14000dd24(pwVar2,pwVar3,param_3,param_4);
        pwVar2 = FUN_14000dd24(pwVar2,L"%",param_3,param_4);
      }
      else {
        pwVar2 = FUN_14000dd24(pwVar2,local_res8,param_3,param_4);
        free(local_res8);
        local_res8 = (wchar_t *)0x0;
      }
      *pwVar3 = L'%';
      param_1 = pwVar4 + 1;
      *pwVar4 = L'%';
    }
    wVar1 = *param_1;
  }
  return pwVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined FUN_140004690(int param_1,wchar_t **param_2,int *param_3,undefined8 param_4)

{
  wchar_t wVar1;
  wint_t wVar2;
  int iVar3;
  short *psVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  wchar_t *pwVar9;
  int *piVar10;
  wchar_t *pwVar11;
  
  pwVar5 = *param_2;
  pwVar7 = param_2[1];
  piVar10 = param_3;
  iVar3 = iswalpha(*pwVar5);
  if (((iVar3 != 0) && (pwVar5[1] == L':')) && (pwVar5[2] == L'\0')) {
    wVar2 = towupper(*pwVar5);
    _chdrive(wVar2 - 0x40);
    *param_3 = 0;
    return 1;
  }
  puVar8 = &DAT_140011df8;
  iVar3 = _wcsicmp(pwVar5,L"set");
  if (iVar3 == 0) {
    if ((((param_1 != 1) && (_DAT_140015800 != 0)) &&
        (psVar4 = (short *)FUN_140004288(), psVar4 != (short *)0x0)) && (*psVar4 != 0)) {
      pwVar5 = (wchar_t *)FUN_14000dcc4(psVar4,puVar8,(ulonglong)piVar10,param_4);
      iVar3 = _wputenv(pwVar5);
      *param_3 = iVar3;
      if (iVar3 == -1) {
        FUN_140003898((ulonglong)DAT_140025c24,0x41f,(ulonglong)piVar10,param_4);
      }
LAB_140004886:
      if (*param_3 != 0) {
        *param_3 = 1;
      }
      return 1;
    }
  }
  else {
    pwVar11 = (wchar_t *)0x2;
    pwVar9 = L"cd";
    iVar3 = _wcsnicmp(pwVar5,L"cd",2);
    if (iVar3 == 0) {
      pwVar5 = pwVar5 + 2;
    }
    else {
      pwVar11 = (wchar_t *)0x5;
      pwVar9 = L"chdir";
      iVar3 = _wcsnicmp(pwVar5,L"chdir",5);
      if (iVar3 != 0) {
        return 0;
      }
      pwVar5 = pwVar5 + 5;
    }
    if (param_1 < 3) {
      while (param_1 != 0) {
        pwVar9 = *param_2;
        param_1 = param_1 + -1;
        wVar1 = *pwVar9;
        pwVar6 = pwVar9;
        while (wVar1 != L'\0') {
          wVar1 = *pwVar9;
          pwVar11 = (wchar_t *)(ulonglong)(ushort)wVar1;
          param_4 = 0xfffd;
          if ((wVar1 + L'ﾤ' & 0xfffdU) == 0) {
            if (pwVar9[1] == L'\"') {
              *pwVar6 = wVar1;
              pwVar6 = pwVar6 + 1;
              pwVar9 = pwVar9 + 1;
            }
            *pwVar6 = *pwVar9;
LAB_14000480e:
            pwVar6 = pwVar6 + 1;
          }
          else if (wVar1 != L'\"') {
            *pwVar6 = wVar1;
            goto LAB_14000480e;
          }
          pwVar9 = pwVar9 + 1;
          wVar1 = *pwVar9;
        }
        *pwVar6 = L'\0';
        param_2 = param_2 + 1;
      }
      if ((*pwVar5 == L'\0') && (pwVar7 != (wchar_t *)0x0)) {
        iVar3 = iswalpha(*pwVar7);
        if (((iVar3 != 0) && (pwVar7[1] == L':')) && (pwVar7[2] == L'\0')) {
          return 0;
        }
      }
      else {
        pwVar7 = pwVar5;
        if ((1 < (ushort)(*pwVar5 + L'ￒ')) && (*pwVar5 != L'\\')) {
          return 0;
        }
      }
      pwVar5 = FUN_140004564(pwVar7,pwVar9,pwVar11,param_4);
      iVar3 = _wchdir(pwVar5);
      *param_3 = iVar3;
      free(pwVar5);
      goto LAB_140004886;
    }
  }
  return 0;
}



undefined8 FUN_1400048b4(wchar_t *param_1,int param_2)

{
  errno_t eVar1;
  int iVar2;
  long lVar3;
  wchar_t *pwVar4;
  FILE *_File;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  wchar_t wVar8;
  int local_res10 [2];
  
  for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
  }
  wVar8 = L'\0';
  pwVar4 = wcspbrk(param_1,L" \t<>\r");
  if (pwVar4 != (wchar_t *)0x0) {
    wVar8 = *pwVar4;
    *pwVar4 = L'\0';
  }
  if (param_2 == 4) {
    _File = (FILE *)__acrt_iob_func(0);
    uVar6 = 0;
  }
  else {
    _File = (FILE *)__acrt_iob_func(1);
    uVar6 = 0x109;
    if (param_2 == 2) {
      uVar6 = 0x301;
    }
  }
  uVar7 = 0x40;
  local_res10[0] = 0;
  eVar1 = _wsopen_s(local_res10,param_1,(int)uVar6,0x40,0x180);
  uVar5 = CONCAT44(extraout_var,eVar1);
  if (eVar1 == 0) {
    iVar2 = _fileno(_File);
    iVar2 = _dup2(local_res10[0],iVar2);
    if (iVar2 == -1) {
      FUN_140003898(0,0x411,uVar6,uVar7);
    }
    iVar2 = _close(local_res10[0]);
    uVar5 = CONCAT44(extraout_var_00,iVar2);
    if (param_2 == 3) {
      iVar2 = _fileno(_File);
      lVar3 = _lseek(iVar2,0,2);
      uVar5 = CONCAT44(extraout_var_01,lVar3);
    }
  }
  for (; *param_1 != L'\0'; param_1 = param_1 + 1) {
    *param_1 = L' ';
  }
  if (pwVar4 != (wchar_t *)0x0) {
    *pwVar4 = wVar8;
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),eVar1 == 0);
}



undefined FUN_1400049fc(wchar_t *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  int *_Src;
  undefined8 uVar9;
  FILE *pFVar10;
  wchar_t *pwVar11;
  int *piVar12;
  int *piVar13;
  
  bVar3 = false;
  bVar2 = false;
  _Src = (int *)0x0;
  piVar12 = param_3;
  piVar13 = param_4;
  pwVar11 = param_1;
  bVar4 = false;
LAB_140004a33:
  do {
    pwVar8 = wcspbrk(pwVar11,L"<>|");
    if (pwVar8 == (wchar_t *)0x0) {
      return 0;
    }
    wVar1 = *pwVar8;
    if (wVar1 == L'<') {
      if (bVar3) goto LAB_140004b66;
      if (_Src == (int *)0x0) {
        _Src = (int *)FUN_14000dcc4(pwVar11,0x3e,(ulonglong)piVar12,piVar13);
      }
      *pwVar8 = L' ';
      pFVar10 = (FILE *)__acrt_iob_func(0);
      iVar7 = _fileno(pFVar10);
      iVar7 = _dup(iVar7);
      *param_3 = iVar7;
      bVar3 = true;
      if (iVar7 == -1) goto LAB_140004b66;
      uVar9 = FUN_1400048b4(pwVar8 + 1,4);
      cVar5 = (char)uVar9;
    }
    else {
      if (wVar1 != L'>') {
        if (wVar1 == L'|') goto LAB_140004b66;
        FUN_140003898(0,0x411,(ulonglong)piVar12,piVar13);
        goto LAB_140004a33;
      }
      if (bVar2) goto LAB_140004b66;
      if (_Src == (int *)0x0) {
        _Src = (int *)FUN_14000dcc4(pwVar11,0x3e,(ulonglong)piVar12,piVar13);
      }
      *pwVar8 = L' ';
      bVar2 = true;
      pwVar11 = pwVar8 + 1;
      if (*pwVar11 == L'>') {
        *pwVar11 = L' ';
        iVar7 = 3;
        pwVar11 = pwVar8 + 2;
      }
      else {
        iVar7 = 2;
      }
      pFVar10 = (FILE *)__acrt_iob_func(1);
      iVar6 = _fileno(pFVar10);
      iVar6 = _dup(iVar6);
      *param_4 = iVar6;
      bVar3 = bVar4;
      if (iVar6 == -1) goto LAB_140004b66;
      uVar9 = FUN_1400048b4(pwVar11,iVar7);
      cVar5 = (char)uVar9;
    }
    pwVar11 = pwVar8 + 1;
    bVar4 = bVar3;
    if (cVar5 == '\0') {
LAB_140004b66:
      if (_Src != (int *)0x0) {
        piVar12 = _Src;
        wcscpy_s(param_1,0xffffffffffffffff,(wchar_t *)_Src);
        free(_Src);
      }
      if ((bVar3) && (*param_3 != -1)) {
        pFVar10 = (FILE *)__acrt_iob_func(0);
        iVar7 = _fileno(pFVar10);
        iVar7 = _dup2(*param_3,iVar7);
        if (iVar7 == -1) {
          FUN_140003898(0,0x411,(ulonglong)piVar12,piVar13);
        }
        _close(*param_3);
        *param_3 = -1;
      }
      if ((bVar2) && (*param_4 != -1)) {
        pFVar10 = (FILE *)__acrt_iob_func(1);
        iVar7 = _fileno(pFVar10);
        iVar7 = _dup2(*param_4,iVar7);
        if (iVar7 == -1) {
          FUN_140003898(0,0x411,(ulonglong)piVar12,piVar13);
        }
        _close(*param_4);
        *param_4 = -1;
      }
      return 1;
    }
  } while( true );
}



bool FUN_140004c30(short *param_1,ulonglong *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar3 = param_1, sVar1 == 0x3b) {
    psVar2 = psVar2 + 1;
    sVar1 = *psVar2;
  }
  do {
    sVar1 = *psVar2;
    if ((sVar1 == 0) || (sVar1 == 0x3b)) goto LAB_140004ca2;
    if (sVar1 == 0x22) {
      psVar2 = psVar2 + 1;
      sVar1 = *psVar2;
      if (sVar1 == 0) {
LAB_140004ca2:
        sVar1 = *psVar2;
        *psVar3 = 0;
        *param_2 = -(ulonglong)(sVar1 != 0) & (ulonglong)(psVar2 + 1);
        return psVar3 != param_1;
      }
      do {
        if (sVar1 == 0x22) break;
        psVar2 = psVar2 + 1;
        *psVar3 = sVar1;
        psVar3 = psVar3 + 1;
        sVar1 = *psVar2;
      } while (sVar1 != 0);
      if (*psVar2 == 0) goto LAB_140004ca2;
    }
    else {
      *psVar3 = sVar1;
      psVar3 = psVar3 + 1;
    }
    psVar2 = psVar2 + 1;
  } while( true );
}



void FUN_140004cc4(wchar_t *param_1,wchar_t *param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  bool bVar5;
  wchar_t *_Filename;
  wchar_t *pwVar6;
  bool bVar7;
  errno_t eVar8;
  BOOL BVar9;
  longlong lVar10;
  wchar_t *_DstBuf;
  size_t sVar11;
  wchar_t *_PathResult;
  longlong lVar12;
  wchar_t *_Dst;
  wchar_t *pwVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  wchar_t *_Ext;
  undefined auStackY_6d8 [32];
  wchar_t *local_680;
  wchar_t *local_678;
  wchar_t *local_670;
  wchar_t *local_668;
  wchar_t *local_660;
  wchar_t local_658 [8];
  wchar_t local_648 [256];
  wchar_t local_448 [256];
  wchar_t local_248 [256];
  ulonglong local_48;
  longlong lVar13;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStackY_6d8;
  _Dst = (wchar_t *)0x0;
  bVar5 = false;
  pwVar18 = _Dst;
  if (*param_1 == L'\"') {
    lVar10 = -1;
    do {
      lVar12 = lVar10;
      lVar10 = lVar12 + 1;
    } while (param_1[lVar10] != L'\0');
    pwVar18 = param_1 + lVar12;
    if (*pwVar18 == L'\"') {
      bVar5 = true;
      do {
        param_1 = param_1 + 1;
        pwVar17 = pwVar18;
      } while (*param_1 == L'\"');
      do {
        pwVar18 = pwVar17;
        if (pwVar18 <= param_1) break;
        pwVar17 = pwVar18 + -1;
      } while (pwVar18[-1] == L'\"');
      *pwVar18 = L'\0';
    }
  }
  pwVar17 = local_448;
  pwVar16 = (wchar_t *)0x3;
  local_670 = param_2;
  _wsplitpath_s(param_1,local_658,3,pwVar17,0x100,local_248,0x100,local_648,0x100);
  if (local_648[0] == L'\0') {
    pwVar17 = L"PATHEXT";
    pwVar16 = (wchar_t *)0x0;
    eVar8 = _wgetenv_s((size_t *)&local_678,(wchar_t *)0x0,0,L"PATHEXT");
    if ((eVar8 == 0) && (local_678 != (wchar_t *)0x0)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_678;
      lVar10 = SUB168(ZEXT816(2) * auVar1,8);
      sVar11 = SUB168(ZEXT816(2) * auVar1,0);
      if (lVar10 != 0) {
        sVar11 = 0xffffffffffffffff;
      }
      _DstBuf = (wchar_t *)FUN_140009214(sVar11,lVar10,(ulonglong)pwVar16,pwVar17);
      pwVar17 = L"PATHEXT";
      pwVar16 = local_678;
      eVar8 = _wgetenv_s((size_t *)&local_678,_DstBuf,(size_t)local_678,L"PATHEXT");
      if (eVar8 != 0) {
        free(_DstBuf);
        _DstBuf = _Dst;
      }
      if (_DstBuf != (wchar_t *)0x0) goto LAB_140004e60;
    }
    lVar10 = SUB168(ZEXT816(2) * ZEXT816(0x21),8);
    sVar11 = SUB168(ZEXT816(2) * ZEXT816(0x21),0);
    local_678 = (wchar_t *)0x21;
    if (lVar10 != 0) {
      sVar11 = 0xffffffffffffffff;
    }
    _DstBuf = (wchar_t *)FUN_140009214(sVar11,lVar10,(ulonglong)pwVar16,pwVar17);
    pwVar16 = L".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS";
    wcscpy_s(_DstBuf,(rsize_t)local_678,L".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS");
  }
  else {
    lVar10 = -1;
    do {
      lVar12 = lVar10;
      lVar10 = lVar12 + 1;
    } while (local_648[lVar10] != L'\0');
    local_678 = (wchar_t *)(lVar12 + 2);
    _DstBuf = local_648;
  }
LAB_140004e60:
  if ((local_658[0] == L'\0') && (local_448[0] == L'\0')) {
    pwVar17 = L"PATH";
    uVar15 = 0;
    eVar8 = _wgetenv_s((size_t *)&local_680,(wchar_t *)0x0,0,L"PATH");
    if ((eVar8 != 0) || (local_680 == (wchar_t *)0x0)) {
      local_680 = (wchar_t *)0x1;
    }
    BVar9 = NeedCurrentDirectoryForExePathW(local_248);
    if (BVar9 != 0) {
      local_680 = local_680 + 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_680;
    lVar10 = SUB168(ZEXT816(2) * auVar2,8);
    sVar11 = SUB168(ZEXT816(2) * auVar2,0);
    if (lVar10 != 0) {
      sVar11 = 0xffffffffffffffff;
    }
    _PathResult = (wchar_t *)FUN_140009214(sVar11,lVar10,uVar15,pwVar17);
    pwVar14 = _PathResult;
    if (BVar9 != 0) {
      wcscpy_s(_PathResult,(rsize_t)local_680,L".;");
      local_680 = local_680 + -1;
      pwVar14 = _PathResult + 2;
    }
    pwVar16 = L"PATH";
    pwVar17 = local_680;
    eVar8 = _wgetenv_s((size_t *)&local_680,pwVar14,(size_t)local_680,L"PATH");
    pwVar6 = _PathResult;
    if ((eVar8 != 0) || (local_680 == (wchar_t *)0x0)) {
      *pwVar14 = L'\0';
    }
  }
  else {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (local_658[lVar10] != L'\0');
    lVar12 = -1;
    do {
      lVar13 = lVar12;
      lVar12 = lVar13 + 1;
    } while (local_448[lVar12] != L'\0');
    uVar15 = lVar13 + 2 + lVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar15;
    lVar10 = SUB168(ZEXT816(2) * auVar3,8);
    sVar11 = SUB168(ZEXT816(2) * auVar3,0);
    if (lVar10 != 0) {
      sVar11 = 0xffffffffffffffff;
    }
    _PathResult = (wchar_t *)FUN_140009214(sVar11,lVar10,(ulonglong)pwVar16,pwVar17);
    pwVar16 = local_448;
    pwVar17 = local_658;
    eVar8 = _wmakepath_s(_PathResult,uVar15,pwVar17,pwVar16,(wchar_t *)0x0,(wchar_t *)0x0);
    pwVar6 = _PathResult;
    if (eVar8 != 0) {
      free(_PathResult);
      _PathResult = (wchar_t *)0x0;
      pwVar6 = _PathResult;
    }
  }
  do {
    pwVar14 = pwVar6;
    if ((pwVar14 == (wchar_t *)0x0) ||
       (bVar7 = FUN_140004c30(pwVar14,(ulonglong *)&local_660), !bVar7)) {
      free(_Dst);
      free(_PathResult);
      if (_DstBuf != local_648) {
        free(_DstBuf);
      }
LAB_1400050ea:
      __security_check_cookie(local_48 ^ (ulonglong)auStackY_6d8);
      return;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_678;
    lVar10 = SUB168(ZEXT816(2) * auVar4,8);
    sVar11 = SUB168(ZEXT816(2) * auVar4,0);
    if (lVar10 != 0) {
      sVar11 = 0xffffffffffffffff;
    }
    _Dst = (wchar_t *)FUN_140009214(sVar11,lVar10,(ulonglong)pwVar17,pwVar16);
    pwVar17 = _DstBuf;
    wcscpy_s(_Dst,(rsize_t)local_678,_DstBuf);
    _Ext = _Dst;
    while ((pwVar6 = local_660, _Ext != (wchar_t *)0x0 &&
           (bVar7 = FUN_140004c30(_Ext,(ulonglong *)&local_668), _Filename = local_670,
           pwVar6 = local_660, bVar7))) {
      pwVar17 = (wchar_t *)0x0;
      pwVar16 = pwVar14;
      eVar8 = _wmakepath_s(local_670,0x104,(wchar_t *)0x0,pwVar14,local_248,_Ext);
      _Ext = local_668;
      if ((eVar8 == 0) && (eVar8 = _waccess_s(_Filename,0), _Ext = local_668, eVar8 == 0)) {
        lVar10 = -1;
        if (bVar5) {
          do {
            lVar12 = lVar10;
            lVar10 = lVar12 + 1;
          } while (_Filename[lVar10] != L'\0');
          memmove(_Filename + 1,_Filename,lVar10 * 2);
          *_Filename = L'\"';
          _Filename[lVar12 + 2] = L'\"';
          _Filename[lVar12 + 3] = L'\0';
          *pwVar18 = L'\"';
        }
        free(_Dst);
        free(_PathResult);
        if (_DstBuf != local_648) {
          free(_DstBuf);
        }
        goto LAB_1400050ea;
      }
    }
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140005114(int **param_1,char param_2,int **param_3,int *param_4,void **param_5)

{
  code *pcVar1;
  undefined auVar2 [16];
  bool bVar3;
  bool bVar4;
  void **ppvVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int **ppiVar12;
  size_t sVar13;
  int **_ArgList;
  int **ppiVar14;
  wchar_t *pwVar15;
  void *pvVar16;
  FILE *pFVar17;
  ulong *puVar18;
  ulonglong uVar19;
  HANDLE hHandle;
  int *piVar20;
  uint uVar21;
  undefined8 uVar22;
  longlong lVar23;
  int **lpExitCode;
  longlong lVar24;
  ulonglong uVar25;
  undefined auStack_4a8 [32];
  char local_488;
  uint local_484;
  int **local_480;
  undefined local_478 [8];
  int **local_470;
  int local_468;
  undefined8 local_460;
  undefined8 local_458;
  int *local_248 [66];
  ulonglong local_38;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_4a8;
  _ArgList = (int **)0x0;
  cVar6 = (char)param_3;
  local_488 = (char)param_4;
  local_460 = param_5;
  local_480 = param_1;
  if (DAT_1400364a0 == (int *)0x0) {
    DAT_1400364a0 = (int *)FUN_140005938();
  }
  bVar4 = true;
  if (*(short *)local_480 == 0x2d) {
    local_480 = (int **)((longlong)local_480 + 2);
    local_488 = '\x01';
    iVar8 = iswdigit(*(wint_t *)local_480);
    ppiVar12 = local_480;
    if (iVar8 == 0) {
      _DAT_14002648c = 0xffffffff;
    }
    else {
      param_3 = (int **)0xa;
      _DAT_14002648c = wcstoul((wchar_t *)local_480,(wchar_t **)&local_480,10);
      piVar20 = _errno();
      if (*piVar20 == 0x22) {
        *(undefined2 *)local_480 = 0;
        FUN_140003898(0,0x436,(ulonglong)ppiVar12,param_4);
        param_3 = ppiVar12;
      }
      while (iVar8 = iswspace(*(wint_t *)local_480), iVar8 != 0) {
        local_480 = (int **)((longlong)local_480 + 2);
      }
    }
  }
  else if ((*(short *)local_480 == 0x40) &&
          (local_480 = (int **)((longlong)local_480 + 2), cVar6 != '\0')) {
    param_2 = '\0';
  }
  if (*(short *)local_480 == 0) goto LAB_140005900;
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (*(short *)((longlong)local_480 + uVar11 * 2) != 0);
  uVar22 = 0x8000;
  if (uVar11 < 0x8000) {
    param_3 = local_480;
    wcscpy_s((wchar_t *)&DAT_140015800,0x8000,(wchar_t *)local_480);
  }
  else {
    _DAT_140015800 = 0;
  }
  ppiVar12 = (int **)FUN_14000dcc4(local_480,uVar22,(ulonglong)param_3,param_4);
  local_470 = ppiVar12;
  if (param_2 != '\0') {
    FUN_14000bfe0(L"\t%s\n",ppiVar12,param_3,param_4);
    FUN_14000bfb0();
  }
  ppiVar14 = ppiVar12;
  FUN_140003ae0((int *)&local_484,(wchar_t **)0x0,(wchar_t *)ppiVar12,param_4);
  uVar21 = local_484;
  if (local_484 != 0) {
    auVar2 = ZEXT816(8) * ZEXT416(local_484 + 5);
    lVar23 = auVar2._8_8_;
    sVar13 = auVar2._0_8_;
    if (lVar23 != 0) {
      sVar13 = 0xffffffffffffffff;
    }
    _ArgList = (int **)FUN_140009214(sVar13,lVar23,(ulonglong)ppiVar14,param_4);
    FUN_140003ae0((int *)&local_484,(wchar_t **)_ArgList,(wchar_t *)ppiVar12,param_4);
    if (((*_ArgList != (int *)0x0) && (DAT_140026498 != (wchar_t *)0x0)) &&
       (iVar8 = _wcsicmp((wchar_t *)*_ArgList,DAT_140026498), iVar8 == 0)) {
      if (DAT_1400157f0 == (int *)0x0) {
        ppiVar14 = (int **)__p__wpgmptr();
        piVar20 = *ppiVar14;
        DAT_1400157f0 = piVar20;
        pwVar15 = wcspbrk((wchar_t *)piVar20,L" ");
        param_5 = local_460;
        if (pwVar15 != (wchar_t *)0x0) {
          lVar23 = -1;
          do {
            lVar24 = lVar23;
            lVar23 = lVar24 + 1;
          } while (*(short *)((longlong)DAT_1400157f0 + lVar23 * 2) != 0);
          uVar11 = lVar24 + 4;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar11;
          lVar23 = SUB168(ZEXT816(2) * auVar2,8);
          sVar13 = SUB168(ZEXT816(2) * auVar2,0);
          if (lVar23 != 0) {
            sVar13 = 0xffffffffffffffff;
          }
          DAT_1400157f0 = (int *)FUN_140009214(sVar13,lVar23,0xffffffffffffffff,param_4);
          wcscpy_s((wchar_t *)DAT_1400157f0,uVar11,L"\"");
          wcscat_s((wchar_t *)DAT_1400157f0,uVar11,(wchar_t *)piVar20);
          wcscat_s((wchar_t *)DAT_1400157f0,uVar11,L"\"");
          param_5 = local_460;
        }
      }
      *_ArgList = DAT_1400157f0;
    }
    if (cVar6 == '\0') {
      piVar20 = (int *)local_478;
      ppiVar14 = _ArgList;
      cVar6 = FUN_140004690(uVar21,(wchar_t **)_ArgList,piVar20,param_4);
      if (((cVar6 != '\0') && (local_478._0_4_ != 0)) && (param_5 != (void **)0x0)) {
        pvVar16 = FUN_14000dcc4(*_ArgList,ppiVar14,(ulonglong)piVar20,param_4);
        *param_5 = pvVar16;
      }
    }
    else {
      pwVar15 = wcspbrk((wchar_t *)local_480,L"<>|&%");
      ppiVar14 = (int **)local_478;
      lpExitCode = _ArgList;
      cVar6 = FUN_140004690(uVar21,(wchar_t **)_ArgList,(int *)ppiVar14,param_4);
      if (cVar6 == '\0') {
        lVar23 = -1;
        uVar11 = 0xffffffffffffffff;
        do {
          uVar11 = uVar11 + 1;
        } while (*(short *)((longlong)local_480 + uVar11 * 2) != 0);
        if ((uVar11 < 0x1000) && (pwVar15 != (wchar_t *)0x0)) {
          cVar6 = '\x01';
        }
        else {
          param_4 = (int *)(local_478 + 4);
          local_468 = -1;
          ppiVar14 = (int **)&local_468;
          local_478._4_4_ = 0xffffffff;
          cVar6 = FUN_1400049fc((wchar_t *)local_480,lpExitCode,(int *)ppiVar14,param_4);
          iVar8 = local_468;
          uVar21 = local_478._4_4_;
          if (cVar6 == '\0') {
            uVar11 = 0xffffffffffffffff;
            do {
              uVar11 = uVar11 + 1;
            } while (*(short *)((longlong)local_480 + uVar11 * 2) != 0);
            ppiVar14 = local_480;
            if (0x7fff < uVar11) {
              lpExitCode = (int **)0x447;
              FUN_140003898(0,0x447,(ulonglong)local_480,param_4);
            }
            if ((iVar8 != -1) || (uVar21 != 0xffffffff)) {
              free(local_470);
              ppiVar14 = (int **)FUN_14000dcc4(local_480,lpExitCode,(ulonglong)ppiVar14,param_4);
              local_470 = ppiVar14;
              FUN_140003ae0((int *)&local_484,(wchar_t **)_ArgList,(wchar_t *)ppiVar14,param_4);
            }
            lpExitCode = (int **)&local_458;
            cVar7 = FUN_140004cc4((wchar_t *)*_ArgList,(wchar_t *)lpExitCode);
            if (cVar7 == '\0') {
              cVar6 = '\x01';
              goto LAB_140005541;
            }
            if ((short)local_458 == 0x22) {
              do {
                lVar23 = lVar23 + 1;
              } while (*(short *)((longlong)&local_458 + lVar23 * 2) != 0);
              if (*(short *)((longlong)&local_460 + lVar23 * 2 + 6) == 0x22) {
                memmove(&local_458,(void *)((longlong)&local_458 + 2),lVar23 * 2);
                if (0x207 < lVar23 * 2 - 4U) {
                  __report_rangecheckfailure();
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                *(undefined2 *)((longlong)&local_460 + lVar23 * 2 + 4) = 0;
              }
            }
            *_ArgList = (int *)&local_458;
            pwVar15 = wcschr((wchar_t *)&local_458,L' ');
            if (pwVar15 != (wchar_t *)0x0) {
              local_248[0]._0_2_ = L'\"';
              wcscpy_s((wchar_t *)((longlong)local_248 + 2),0x103,(wchar_t *)&local_458);
              wcscat_s((wchar_t *)local_248,0x104,L"\"");
              *_ArgList = (int *)local_248;
            }
            piVar20 = _errno();
            lpExitCode = (int **)&local_458;
            *piVar20 = 0;
            ppiVar14 = _ArgList;
            uVar11 = _wspawnvp(0,(wchar_t *)lpExitCode,(wchar_t **)_ArgList);
            if (((uVar11 == 0xffffffffffffffff) && (piVar20 = _errno(), *piVar20 != 0xc)) &&
               (puVar18 = __doserrno(), *puVar18 == 0xc1)) {
              cVar6 = '\x01';
            }
          }
          else {
LAB_140005541:
            uVar11 = (ulonglong)(uint)local_478._0_4_;
          }
          local_478._0_4_ = (undefined4)uVar11;
          if (iVar8 != -1) {
            pFVar17 = (FILE *)__acrt_iob_func(0);
            uVar9 = _fileno(pFVar17);
            lpExitCode = (int **)(ulonglong)uVar9;
            iVar10 = _dup2(iVar8,uVar9);
            if (iVar10 == -1) {
              lpExitCode = (int **)0x411;
              FUN_140003898(0,0x411,(ulonglong)ppiVar14,param_4);
            }
            _close(iVar8);
          }
          if (uVar21 != 0xffffffff) {
            pFVar17 = (FILE *)__acrt_iob_func(1);
            uVar9 = _fileno(pFVar17);
            lpExitCode = (int **)(ulonglong)uVar9;
            iVar8 = _dup2(uVar21,uVar9);
            if (iVar8 == -1) {
              lpExitCode = (int **)0x411;
              FUN_140003898(0,0x411,(ulonglong)ppiVar14,param_4);
            }
            _close(uVar21);
          }
          if (cVar6 == '\0') goto LAB_140005456;
        }
        uVar25 = 0;
        uVar19 = 0xffffffffffffffff;
        bVar3 = false;
        uVar11 = uVar19;
        do {
          uVar11 = uVar11 + 1;
        } while (*(short *)((longlong)local_480 + uVar11 * 2) != 0);
        if (uVar11 < 0x1000) {
          wcscpy_s((wchar_t *)&DAT_140015800,0x8000,(wchar_t *)local_480);
        }
        else {
          FUN_140003898(0,0x447,(ulonglong)local_480,param_4);
        }
        piVar20 = *_ArgList;
        if (*(short *)piVar20 == 0x22) {
          do {
            uVar19 = uVar19 + 1;
          } while (*(short *)((longlong)piVar20 + uVar19 * 2) != 0);
          if (*(short *)((longlong)piVar20 + uVar19 * 2 + -2) == 0x22) {
            for (lVar23 = (longlong)(int)(local_484 - 1); 0 < lVar23; lVar23 = lVar23 + -1) {
              pwVar15 = wcspbrk((wchar_t *)_ArgList[lVar23],L"\"");
              if (pwVar15 != (wchar_t *)0x0) {
                bVar3 = true;
                _ArgList[local_484] = (int *)&DAT_140011624;
                local_484 = local_484 + 1;
                _ArgList[local_484] = (int *)0x0;
                break;
              }
            }
          }
        }
        lVar23 = (longlong)(int)local_484;
        if (-1 < (int)local_484) {
          do {
            _ArgList[lVar23 + 2] = _ArgList[lVar23];
            lVar23 = lVar23 + -1;
          } while (-1 < lVar23);
        }
        *_ArgList = DAT_1400364a0;
        pwVar15 = (wchar_t *)&DAT_140011e84;
        if (bVar3) {
          pwVar15 = L"/c \"";
        }
        _ArgList[1] = (int *)pwVar15;
        piVar20 = _errno();
        *piVar20 = 0;
        lpExitCode = (int **)*_ArgList;
        ppiVar14 = _ArgList;
        hHandle = (HANDLE)_wspawnvp(1,(wchar_t *)lpExitCode,(wchar_t **)_ArgList);
        if (hHandle != (HANDLE)0xffffffffffffffff) {
          WaitForSingleObject(hHandle,0xffffffff);
          do {
            lpExitCode = (int **)(local_478 + 4);
            GetExitCodeProcess(hHandle,(LPDWORD)lpExitCode);
            local_478._0_4_ = local_478._4_4_;
            if (local_478._4_4_ != 0x103) break;
            Sleep(1000);
            uVar25 = uVar25 + 1;
          } while (uVar25 < 10);
          CloseHandle(hHandle);
          goto LAB_140005456;
        }
        local_478._0_4_ = 0xffffffff;
LAB_140005462:
        ppiVar12 = local_470;
        if (local_488 == '\0') {
          piVar20 = _errno();
          if (*piVar20 != 0) {
            if (*piVar20 == 2) {
              ppiVar14 = (int **)*_ArgList;
              lpExitCode = (int **)0x439;
              FUN_140003898(0,0x439,(ulonglong)ppiVar14,param_4);
              goto LAB_14000588f;
            }
            if (*piVar20 == 0xc) {
              if (cVar6 == '\0') {
                ppiVar14 = (int **)*_ArgList;
              }
              else {
                ppiVar14 = (int **)_ArgList[2];
              }
              lpExitCode = (int **)0x43a;
            }
            else {
              piVar20 = _errno();
              _wcserror_s((wchar_t *)local_248,200,*piVar20);
              ppiVar14 = local_248;
              lpExitCode = (int **)0x415;
            }
            FUN_140003898(0,(ulonglong)lpExitCode,(ulonglong)ppiVar14,param_4);
          }
          goto LAB_140005893;
        }
      }
      else {
        cVar6 = '\0';
LAB_140005456:
        if (local_478._0_4_ == 0xffffffff) goto LAB_140005462;
LAB_14000588f:
        ppiVar12 = local_470;
        if (local_478._0_4_ != 0) {
LAB_140005893:
          ppvVar5 = local_460;
          ppiVar12 = local_470;
          if (local_460 != (void **)0x0) {
            if (cVar6 == '\0') {
              piVar20 = *_ArgList;
            }
            else {
              piVar20 = _ArgList[2];
            }
            pvVar16 = FUN_14000dcc4(piVar20,lpExitCode,(ulonglong)ppiVar14,param_4);
            *ppvVar5 = pvVar16;
            ppiVar12 = local_470;
          }
        }
      }
    }
  }
  uVar21 = 0;
  ppiVar14 = _ArgList;
  if (local_484 != 0xfffffffb) {
    do {
      if (*ppiVar14 == (int *)0x0) break;
      if ((int **)*ppiVar14 == ppiVar12) {
        bVar4 = false;
        break;
      }
      uVar21 = uVar21 + 1;
      ppiVar14 = ppiVar14 + 1;
    } while (uVar21 < local_484 + 5);
  }
  if (_ArgList != (int **)0x0) {
    free(_ArgList);
  }
  if ((ppiVar12 != (int **)0x0) && (bVar4)) {
    free(ppiVar12);
  }
LAB_140005900:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_4a8);
  return;
}



void FUN_140005938(void)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 in_R9;
  undefined auStack_258 [32];
  wchar_t *local_238 [2];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStack_258;
  pwVar3 = L"COMSPEC";
  uVar1 = 0;
  local_238[0] = (wchar_t *)0x0;
  _wdupenv_s(local_238,(size_t *)0x0,L"COMSPEC");
  if (local_238[0] == (wchar_t *)0x0) {
    pwVar3 = local_228;
    pwVar2 = L"PATH";
    _wsearchenv(L"CMD.EXE",L"PATH",pwVar3);
    if (local_228[0] == L'\0') {
      pwVar2 = (wchar_t *)0x420;
      FUN_140003898(0,0x420,(ulonglong)pwVar3,in_R9);
    }
    FUN_14000dcc4(local_228,pwVar2,(ulonglong)pwVar3,in_R9);
  }
  else {
    FUN_14000dcc4(local_238[0],uVar1,(ulonglong)pwVar3,in_R9);
    free(local_238[0]);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_258);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1400059e0(wchar_t *param_1,undefined8 param_2,byte param_3,ulonglong **param_4,
                       wchar_t *param_5,uint *param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  uint7 uVar10;
  wchar_t *pwVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t *extraout_RAX;
  wchar_t *pwVar11;
  short sVar12;
  int **ppiVar13;
  ulonglong **ppuVar14;
  short sVar15;
  undefined8 *local_58;
  void *local_50 [2];
  
  pwVar6 = (wchar_t *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)param_4);
  sVar12 = 0;
  local_58 = (undefined8 *)0x0;
  pwVar11 = param_1;
  ppuVar14 = param_4;
  if (*param_1 != L'\0') {
    sVar15 = 0x3f;
    do {
      uVar10 = (uint7)((ulonglong)pwVar6 >> 8);
      pwVar6 = (wchar_t *)((ulonglong)uVar10 << 8);
      pwVar8 = pwVar11;
      if (*pwVar11 == L'$') {
        if (pwVar11[1] == L'(') {
          pwVar11 = pwVar11 + 1;
          pwVar6 = (wchar_t *)CONCAT71(uVar10,1);
        }
        pwVar8 = pwVar11 + 1;
        if (*pwVar8 == L'?') {
          puVar9 = DAT_140026468;
          sVar12 = sVar15;
          if ((((char)pwVar6 == '\0') ||
              ((pwVar6 = wcschr(L"DFBR",pwVar11[2]), pwVar6 != (wchar_t *)0x0 &&
               (puVar9 = DAT_140026468, pwVar11[3] == L')')))) ||
             (pwVar8 = pwVar11, puVar9 = DAT_140026468, pwVar11[2] == L')')) break;
        }
        else if (((*pwVar8 == L'*') && (pwVar11[2] == L'*')) &&
                (((char)pwVar6 == '\0' ||
                 (((pwVar6 = wcschr(L"DFBR",pwVar11[3]), pwVar6 != (wchar_t *)0x0 &&
                   (pwVar11[4] == L')')) || (pwVar11[3] == L')')))))) {
          pwVar11 = pwVar8;
          puVar9 = DAT_140026450;
          sVar12 = 0x2a;
          break;
        }
      }
      pwVar11 = pwVar8 + 1;
      puVar9 = local_58;
      sVar12 = 0;
    } while (*pwVar11 != L'\0');
    local_58 = puVar9;
    pwVar6 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar6 >> 8),(char)param_4);
  }
  if (*pwVar11 == L'\0') {
    uVar7 = (ulonglong)pwVar6 & 0xffffffffffffff00;
  }
  else {
    if (local_58 != (undefined8 *)0x0) {
      bVar2 = (byte)pwVar6;
      do {
        puVar9 = DAT_140026450;
        if (sVar12 != 0x2a) {
          puVar9 = DAT_140026468;
        }
        puVar1 = (undefined8 *)*puVar9;
        DAT_140025c48 = param_2;
        *puVar9 = 0;
        pwVar8 = (wchar_t *)FUN_14000e740(param_1,-1,(ulonglong **)&DAT_140025c48,ppuVar14);
        pwVar6 = pwVar8;
        pwVar11 = param_5;
        cVar4 = FUN_14000f778((wchar_t *)&DAT_1400264a0,0x8000,pwVar8,param_5);
        if (cVar4 != '\0') {
          pwVar6 = pwVar8;
          FUN_140003898(0,0x447,(ulonglong)pwVar8,pwVar11);
        }
        if (((param_3 & 4) == 0) || (((ulonglong)param_4 & 8) != 0)) {
          ppiVar13 = (int **)CONCAT71((int7)((ulonglong)pwVar6 >> 8),1);
        }
        else {
          ppiVar13 = (int **)0x0;
        }
        if (((param_3 & 4) == 0) && (((param_3 & 8) != 0 || (((ulonglong)param_4 & 1) != 0)))) {
          cVar4 = '\0';
        }
        else {
          cVar4 = '\x01';
        }
        ppuVar14 = (ulonglong **)
                   (CONCAT71((int7)((ulonglong)pwVar11 >> 8),bVar2 >> 1) & 0xffffffffffffff01);
        uVar5 = FUN_140005114((int **)&DAT_1400264a0,cVar4,ppiVar13,(int *)ppuVar14,local_50);
        *param_6 = uVar5;
        if (((((param_3 & 2) == 0) && (uVar5 != 0)) && (_DAT_14002648c < uVar5)) &&
           (DAT_140025c3b == '\0')) {
          ppuVar14 = (ulonglong **)(ulonglong)uVar5;
          FUN_140003898(0,0x435,(ulonglong)local_50[0],ppuVar14);
        }
        puVar9 = DAT_140026468;
        puVar3 = puVar1;
        if (sVar12 == 0x2a) {
          puVar9 = DAT_140026450;
          DAT_140026450 = puVar1;
          puVar3 = DAT_140026468;
        }
        DAT_140026468 = puVar3;
        *puVar9 = puVar1;
        free(pwVar8);
        pwVar6 = extraout_RAX;
        if (((param_3 & 2) == 0) && (DAT_140025c3b != '\0')) {
          uVar5 = *param_6;
          pwVar6 = (wchar_t *)(ulonglong)uVar5;
          if ((uVar5 != 0) && (_DAT_14002648c < uVar5)) break;
        }
      } while (puVar1 != (undefined8 *)0x0);
    }
    puVar9 = local_58;
    if (sVar12 == 0x2a) {
      DAT_140026450 = local_58;
      puVar9 = DAT_140026468;
    }
    DAT_140026468 = puVar9;
    uVar7 = CONCAT71((int7)((ulonglong)pwVar6 >> 8),1);
  }
  return uVar7;
}



void FUN_140005ca8(wchar_t *param_1,LPWIN32_FIND_DATAW param_2,HANDLE *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  wchar_t wVar2;
  undefined auVar3 [16];
  wchar_t *pwVar4;
  longlong lVar5;
  size_t sVar7;
  wchar_t *_Memory;
  HANDLE pvVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  HANDLE *ppvVar11;
  undefined auStack_278 [32];
  wchar_t local_258 [264];
  ulonglong local_48;
  longlong lVar6;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStack_278;
  _Memory = local_258;
  ppvVar11 = param_3;
  pwVar4 = wcspbrk(param_1,L"\"^*?");
  pwVar10 = param_1;
  if (pwVar4 != (wchar_t *)0x0) {
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (param_1[lVar5] != L'\0');
    uVar1 = lVar6 + 2;
    pwVar10 = _Memory;
    if (0x104 < uVar1) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar1;
      lVar5 = SUB168(ZEXT816(2) * auVar3,8);
      sVar7 = SUB168(ZEXT816(2) * auVar3,0);
      if (lVar5 != 0) {
        sVar7 = 0xffffffffffffffff;
      }
      _Memory = (wchar_t *)FUN_140009214(sVar7,lVar5,(ulonglong)ppvVar11,param_4);
      pwVar10 = _Memory;
      if (_Memory == (wchar_t *)0x0) {
        FUN_140003898((ulonglong)DAT_140025c24,0x41b,(ulonglong)ppvVar11,param_4);
      }
    }
    for (; wVar2 = *param_1, wVar2 != L'\0'; param_1 = param_1 + 1) {
      if ((wVar2 != L'^') && (wVar2 != L'\"')) {
        *_Memory = wVar2;
        _Memory = _Memory + 1;
      }
    }
    *_Memory = L'\0';
    _Memory = pwVar10;
  }
  pvVar8 = FindFirstFileW(pwVar10,param_2);
  *param_3 = pvVar8;
  if ((pvVar8 == (HANDLE)0xffffffffffffffff) ||
     (uVar9 = FUN_140005f9c(pwVar10,&param_2->dwFileAttributes,(ulonglong)ppvVar11,param_4),
     (char)uVar9 == '\0')) {
    if (_Memory != local_258) {
      free(_Memory);
    }
  }
  else {
    if ((pwVar4 == (wchar_t *)0x0) ||
       ((pwVar4 = wcschr(pwVar10,L'*'), pwVar4 == (wchar_t *)0x0 &&
        (pwVar10 = wcschr(pwVar10,L'?'), pwVar10 == (wchar_t *)0x0)))) {
      FindClose(*param_3);
      *param_3 = (HANDLE)0xffffffffffffffff;
    }
    if (_Memory != local_258) {
      free(_Memory);
    }
    if ((((*(byte *)&param_2->dwFileAttributes & 0x10) == 0) &&
        ((param_2->ftLastWriteTime).dwLowDateTime == 0)) &&
       ((param_2->ftLastWriteTime).dwHighDateTime == 0)) {
      (param_2->ftLastWriteTime).dwLowDateTime = 0xffffffff;
      (param_2->ftLastWriteTime).dwHighDateTime = 0xffffffff;
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_278);
  return;
}



WCHAR * FUN_140005e30(LPWIN32_FIND_DATAW param_1,HANDLE param_2)

{
  BOOL BVar1;
  WCHAR *pWVar2;
  
  BVar1 = FindNextFileW(param_2,param_1);
  if (BVar1 == 0) {
    FindClose(param_2);
    pWVar2 = (WCHAR *)0x0;
  }
  else {
    pWVar2 = param_1->cFileName;
  }
  return pWVar2;
}



void * FUN_140005e6c(wchar_t *param_1,wchar_t *param_2,LPWIN32_FIND_DATAW param_3,HANDLE *param_4)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  LPWIN32_FIND_DATAW p_Var5;
  wchar_t *_Dst;
  HANDLE *ppvVar6;
  HANDLE *ppvVar7;
  
  p_Var5 = param_3;
  ppvVar6 = param_4;
  ppvVar7 = param_4;
  lVar2 = FUN_140005ca8(param_2,param_3,param_4,param_4);
  if (lVar2 == 0) {
    if (param_1 == (wchar_t *)0x0) {
      return (void *)0x0;
    }
    do {
      do {
        _Dst = &DAT_140025c50;
LAB_140005ece:
        while (wVar1 = *param_1, wVar1 != L'\0') {
          do {
            if (wVar1 != L'\"') break;
            param_1 = param_1 + 1;
            wVar1 = *param_1;
          } while (wVar1 != L'\0');
          wVar1 = *param_1;
          if (wVar1 == L'\0') break;
          param_1 = param_1 + 1;
          *_Dst = wVar1;
          if (wVar1 == L';') break;
          _Dst = _Dst + 1;
        }
        if (_Dst == &DAT_140025c50) {
          if (*param_1 == L'\0') {
            return (void *)0x0;
          }
          goto LAB_140005ece;
        }
        if ((_Dst[-1] != L'\\') && (_Dst[-1] != L'/')) {
          *_Dst = L'\\';
          _Dst = _Dst + 1;
        }
        *_Dst = L'\0';
        pwVar3 = wcspbrk(&DAT_140025c50,L"*?");
      } while (pwVar3 != (wchar_t *)0x0);
      wcscpy_s(_Dst,0x400 - ((longlong)(_Dst + -0xa0012e28) >> 1),param_2);
      p_Var5 = param_3;
      ppvVar6 = param_4;
      lVar2 = FUN_140005ca8(&DAT_140025c50,param_3,param_4,ppvVar7);
    } while (lVar2 == 0);
    param_2 = &DAT_140025c50;
  }
  pvVar4 = FUN_14000dcc4(param_2,p_Var5,(ulonglong)ppvVar6,ppvVar7);
  return pvVar4;
}



ulonglong FUN_140005f9c(wchar_t *param_1,uint *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  short sVar2;
  BOOL BVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  size_t sVar7;
  uint *lpFileName;
  HANDLE hFile;
  HANDLE extraout_RAX;
  HANDLE pvVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  
  if (((*param_2 & 0x400) == 0) || (param_2[9] != 0xa000000c)) {
LAB_14000611b:
    uVar13 = CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
  }
  else {
    puVar12 = param_2 + 0xb;
    pwVar4 = wcsrchr(param_1,L'\\');
    uVar13 = 0;
    lpFileName = puVar12;
    if (pwVar4 != (wchar_t *)0x0) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pwVar4[lVar9] != L'\0');
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)((longlong)puVar12 + lVar5 * 2) != 0);
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_1[lVar6] != L'\0');
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (2 - lVar9) + lVar5 + lVar6;
      lVar9 = SUB168(ZEXT816(2) * auVar1,8);
      sVar7 = SUB168(ZEXT816(2) * auVar1,0);
      if (lVar9 != 0) {
        sVar7 = 0xffffffffffffffff;
      }
      lpFileName = (uint *)FUN_140009214(sVar7,lVar9,param_3,param_4);
      if (lpFileName == (uint *)0x0) {
        FUN_140003898((ulonglong)DAT_140025c24,0x41b,param_3,param_4);
      }
      uVar11 = (ulonglong)((longlong)pwVar4 + (1 - (longlong)param_1)) >> 1;
      if (pwVar4 < param_1) {
        uVar11 = uVar13;
      }
      puVar10 = lpFileName;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 + 1;
          *(short *)puVar10 =
               *(short *)(((longlong)param_1 - (longlong)lpFileName) + (longlong)puVar10);
          puVar10 = (uint *)((longlong)puVar10 + 2);
        } while (uVar13 != uVar11);
      }
      sVar2 = 0x5c;
      while( true ) {
        *(short *)puVar10 = sVar2;
        puVar10 = (uint *)((longlong)puVar10 + 2);
        sVar2 = *(short *)puVar12;
        if (sVar2 == 0) break;
        puVar12 = (uint *)((longlong)puVar12 + 2);
      }
      *(short *)puVar10 = 0;
    }
    hFile = CreateFileW((LPCWSTR)lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
    ;
    pvVar8 = hFile;
    if (pwVar4 != (wchar_t *)0x0) {
      free(lpFileName);
      pvVar8 = extraout_RAX;
    }
    if (hFile != (HANDLE)0xffffffffffffffff) {
      BVar3 = GetFileTime(hFile,(LPFILETIME)(param_2 + 1),(LPFILETIME)(param_2 + 3),
                          (LPFILETIME)(param_2 + 5));
      if (BVar3 != 0) {
        BVar3 = CloseHandle(hFile);
        register0x00000020 = (BADSPACEBASE *)CONCAT44(extraout_var_00,BVar3);
        goto LAB_14000611b;
      }
      BVar3 = CloseHandle(hFile);
      pvVar8 = (HANDLE)CONCAT44(extraout_var,BVar3);
    }
    uVar13 = (ulonglong)pvVar8 & 0xffffffffffffff00;
  }
  return uVar13;
}



wint_t FUN_14000613c(undefined8 param_1,LPWIN32_FIND_DATAW param_2,LPWIN32_FIND_DATAW param_3,
                    HANDLE *param_4)

{
  short sVar1;
  char cVar2;
  wint_t wVar3;
  wchar_t wVar4;
  int iVar5;
  LPWIN32_FIND_DATAW _Memory;
  LPWIN32_FIND_DATAW p_Var6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined *puVar11;
  bool bVar12;
  char local_res8 [8];
  wchar_t *local_res10;
  
  wVar3 = getwc(DAT_140026480);
  do {
    if (DAT_1400364b0 == (LPWIN32_FIND_DATAW)0x0) {
      if (DAT_140015041 == '\0') {
        return wVar3;
      }
      if (wVar3 != 0x21) {
        return wVar3;
      }
    }
    DAT_140015041 = 0;
    if (DAT_1400364b0 == (LPWIN32_FIND_DATAW)0x0) {
      _Memory = (LPWIN32_FIND_DATAW)FUN_140006490(0,param_2,(ulonglong)param_3,param_4);
    }
    else {
      ungetwc(wVar3,DAT_140026480);
      _Memory = DAT_1400364b0;
      DAT_1400364b0 = (LPWIN32_FIND_DATAW)0x0;
    }
    bVar12 = _Memory != DAT_1400364b8;
    pcVar9 = local_res8;
    p_Var6 = (LPWIN32_FIND_DATAW)FUN_1400065f8((wchar_t *)_Memory,pcVar9,param_3,param_4);
    param_2 = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)pcVar9 >> 8),local_res8[0]);
    if (local_res8[0] == '\t') {
      if (DAT_140026489 != '\0') {
        param_2 = (LPWIN32_FIND_DATAW)0x409;
        param_3 = _Memory;
        FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)_Memory,param_4);
      }
      cVar2 = FUN_140008bcc(p_Var6,param_2,param_3,param_4);
      if (cVar2 == '\x12') {
        return 0x20;
      }
    }
    else if (local_res8[0] == '\n') {
      if (*(short *)&p_Var6->dwFileAttributes != 0) {
        do {
          sVar1 = *(short *)&p_Var6->dwFileAttributes;
          if (sVar1 == 0x2b) {
            p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2);
            wVar3 = *(wint_t *)&p_Var6->dwFileAttributes;
            if (wVar3 == 0) break;
            do {
              if (wVar3 == 0x2d) break;
              wVar4 = towupper(wVar3);
              uVar10 = (ulonglong)(ushort)wVar4;
              pwVar7 = wcschr(L"DINSU",wVar4);
              if (pwVar7 == (wchar_t *)0x0) {
                if (DAT_140026489 != '\0') {
                  wVar4 = towupper(*(wint_t *)&p_Var6->dwFileAttributes);
                  uVar10 = (ulonglong)(ushort)wVar4;
                  pwVar7 = wcschr(L"ABCEKLPQRTY",wVar4);
                  if (pwVar7 != (wchar_t *)0x0) goto LAB_1400062ce;
                }
                param_2 = (LPWIN32_FIND_DATAW)0x400;
                FUN_140003898((ulonglong)DAT_140025c20,0x400,(ulonglong)param_3,param_4);
              }
              else {
LAB_1400062ce:
                param_2 = (LPWIN32_FIND_DATAW)CONCAT71((int7)(uVar10 >> 8),1);
                FUN_14000b804(*(ushort *)&p_Var6->dwFileAttributes,'\x01',param_3,param_4);
              }
              p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2);
              wVar3 = *(wint_t *)&p_Var6->dwFileAttributes;
            } while (wVar3 != 0);
            if (*(short *)&p_Var6->dwFileAttributes == 0) break;
LAB_140006305:
            p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2);
            wVar3 = *(wint_t *)&p_Var6->dwFileAttributes;
            if (wVar3 == 0) break;
            do {
              if (wVar3 == 0x2b) break;
              wVar4 = towupper(wVar3);
              pwVar7 = wcschr(L"DINSU",wVar4);
              if (pwVar7 == (wchar_t *)0x0) {
                if (DAT_140026489 != '\0') {
                  wVar4 = towupper(*(wint_t *)&p_Var6->dwFileAttributes);
                  pwVar7 = wcschr(L"ABCEKLMPQRTV",wVar4);
                  if (pwVar7 != (wchar_t *)0x0) goto LAB_140006360;
                }
                param_2 = (LPWIN32_FIND_DATAW)0x400;
                FUN_140003898((ulonglong)DAT_140025c20,0x400,(ulonglong)param_3,param_4);
              }
              else {
LAB_140006360:
                param_2 = (LPWIN32_FIND_DATAW)0x0;
                FUN_14000b804(*(ushort *)&p_Var6->dwFileAttributes,'\0',param_3,param_4);
              }
              p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2);
              wVar3 = *(wint_t *)&p_Var6->dwFileAttributes;
            } while (wVar3 != 0);
          }
          else {
            if (sVar1 == 0x2d) goto LAB_140006305;
            if ((sVar1 != 0x20) && (sVar1 != 9)) {
              param_2 = (LPWIN32_FIND_DATAW)0x400;
              FUN_140003898((ulonglong)DAT_140025c20,0x400,(ulonglong)param_3,param_4);
            }
          }
          if ((*(short *)&p_Var6->dwFileAttributes == 0) ||
             (p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2),
             *(short *)&p_Var6->dwFileAttributes == 0)) break;
        } while( true );
      }
    }
    else if (local_res8[0] == '\v') {
      param_2 = (LPWIN32_FIND_DATAW)0x41a;
      FUN_140003898((ulonglong)DAT_140025c20,0x41a,(ulonglong)p_Var6,param_4);
      param_3 = p_Var6;
    }
    else if (local_res8[0] == '\f') {
      param_3 = (LPWIN32_FIND_DATAW)0x2;
      puVar11 = &DAT_140011ecc;
      iVar5 = _wcsnicmp((wchar_t *)p_Var6,L"\\t",2);
      param_2 = p_Var6;
      if (iVar5 == 0) {
        FUN_14000bfe0(&DAT_140011ed4,puVar11,param_3,param_4);
        param_2 = (LPWIN32_FIND_DATAW)&p_Var6->ftCreationTime;
      }
      FUN_1400039c0(0xd,param_2,param_3,param_4);
    }
    else if (local_res8[0] == '\r') {
      local_res10 = (wchar_t *)0x0;
      p_Var6 = (LPWIN32_FIND_DATAW)wcstok_s((wchar_t *)p_Var6,L" \t",&local_res10);
      param_3 = (LPWIN32_FIND_DATAW)&local_res10;
      param_2 = (LPWIN32_FIND_DATAW)&DAT_14001161c;
      pwVar7 = wcstok_s((wchar_t *)0x0,L" \t",(wchar_t **)param_3);
      if (pwVar7 != (wchar_t *)0x0) {
        param_2 = (LPWIN32_FIND_DATAW)0x409;
        param_3 = p_Var6;
        FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)p_Var6,param_4);
      }
      puVar8 = FUN_14000918c((ushort *)p_Var6);
      if (puVar8 != (undefined8 *)0x0) {
        *(byte *)(puVar8 + 3) = *(byte *)(puVar8 + 3) | 0x10;
      }
    }
    else {
      FUN_1400069a4((wchar_t *)p_Var6,(byte *)param_2,param_3,param_4);
    }
    DAT_140015041 = '\x01';
    if (bVar12) {
      free(_Memory);
    }
    DAT_140025c20 = DAT_140025c20 + 1;
    wVar3 = getwc(DAT_140026480);
  } while( true );
}



void FUN_140006490(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  wint_t wVar2;
  wchar_t _Ch;
  size_t sVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  wVar2 = FUN_140008044('\x01');
  if ((wVar2 == 10) || (wVar2 == 0xffff)) {
    FUN_140003898((ulonglong)DAT_140025c20,0x3fa,param_3,param_4);
  }
  uVar6 = 0;
  while (((_Ch = FUN_140008128(wVar2,'\x01'), _Ch != L'#' && (_Ch != L'\n')) && (_Ch != L'\xffff')))
  {
    if ((DAT_1400364a8 < 2) || (DAT_1400364a8 - 2 < (ulonglong)uVar6)) {
      uVar4 = DAT_1400364a8 + 0x400;
      if (DAT_1400364b8 == (wchar_t *)0x0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = DAT_1400364a8 + 0x401;
        lVar5 = SUB168(ZEXT816(2) * auVar1,8);
        sVar3 = SUB168(ZEXT816(2) * auVar1,0);
        if (lVar5 != 0) {
          sVar3 = 0xffffffffffffffff;
        }
        DAT_1400364a8 = uVar4;
        DAT_1400364b8 = (wchar_t *)FUN_140009214(sVar3,lVar5,param_3,param_4);
      }
      else {
        DAT_1400364a8 = uVar4;
        DAT_1400364b8 = (wchar_t *)FUN_140009274(DAT_1400364b8,uVar4 * 2 + 2,param_3,param_4);
      }
    }
    uVar4 = (ulonglong)uVar6;
    uVar6 = uVar6 + 1;
    DAT_1400364b8[uVar4] = _Ch;
    wVar2 = getwc(DAT_140026480);
  }
  DAT_1400364b8[uVar6] = L'\0';
  if (_Ch == L'#') {
    do {
      _Ch = getwc(DAT_140026480);
      if (_Ch == L'\n') goto LAB_1400065c0;
    } while (_Ch != L'\xffff');
  }
  else {
LAB_1400065c0:
    if (_Ch != L'\xffff') goto LAB_1400065d5;
  }
  ungetwc(_Ch,DAT_140026480);
LAB_1400065d5:
  FUN_14000e6a4(DAT_1400364b8);
  return;
}



wchar_t * FUN_1400065f8(wchar_t *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t wVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *local_res8;
  
  wVar1 = *param_1;
  *param_2 = '\0';
  pwVar4 = param_1;
  while (((wVar1 != L'\0' && (wVar1 != L' ')) && (wVar1 != L'\t'))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  lVar5 = (longlong)pwVar4 - (longlong)param_1 >> 1;
  wVar1 = *pwVar4;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  local_res8 = pwVar4;
  iVar2 = _wcsnicmp(param_1,L"INCLUDE",7);
  if ((iVar2 == 0) && (lVar5 == 7)) {
    *param_2 = '\t';
    local_res8 = pwVar4;
  }
  else {
    iVar2 = _wcsnicmp(param_1,L"CMDSWITCHES",0xb);
    if ((iVar2 == 0) && (lVar5 == 0xb)) {
      *param_2 = '\n';
      local_res8 = pwVar4;
    }
    else {
      iVar2 = _wcsnicmp(param_1,L"ERROR",5);
      if ((iVar2 == 0) && (lVar5 == 5)) {
        *param_2 = '\v';
        local_res8 = pwVar4;
      }
      else {
        iVar2 = _wcsnicmp(param_1,L"MESSAGE",7);
        if ((iVar2 == 0) && (lVar5 == 7)) {
          *param_2 = '\f';
          local_res8 = pwVar4;
        }
        else {
          iVar2 = _wcsnicmp(param_1,L"UNDEF",5);
          if ((iVar2 == 0) && (lVar5 == 5)) {
            *param_2 = '\r';
            local_res8 = pwVar4;
          }
          else {
            uVar3 = FUN_140006774(param_1,lVar5,&local_res8);
            *param_2 = (char)uVar3;
            if ((char)uVar3 == '\0') {
              FUN_140003898((ulonglong)DAT_140025c20,0x3f9,DAT_1400364b8,param_4);
            }
          }
        }
      }
    }
  }
  return local_res8;
}



undefined8 FUN_140006774(wchar_t *param_1,longlong param_2,wchar_t **param_3)

{
  wchar_t wVar1;
  wchar_t *_Str1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar3;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ulonglong extraout_RAX;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  ulonglong extraout_RAX_00;
  wchar_t *pwVar4;
  undefined uVar5;
  ulonglong uVar6;
  undefined4 extraout_var_04;
  undefined4 extraout_var_08;
  
  iVar2 = _wcsnicmp(param_1,L"IF",2);
  if ((iVar2 == 0) && (param_2 == 2)) {
    uVar3 = CONCAT44(extraout_var,iVar2);
    uVar5 = 1;
    goto LAB_140006985;
  }
  iVar2 = _wcsnicmp(param_1,L"IFDEF",5);
  if ((iVar2 == 0) && (param_2 == 5)) {
    uVar3 = CONCAT44(extraout_var_00,iVar2);
    uVar5 = 6;
    goto LAB_140006985;
  }
  iVar2 = _wcsnicmp(param_1,L"IFNDEF",6);
  if ((iVar2 == 0) && (param_2 == 6)) {
    uVar3 = CONCAT44(extraout_var_01,iVar2);
    uVar5 = 7;
    goto LAB_140006985;
  }
  iVar2 = _wcsnicmp(param_1,L"ELSE",4);
  if ((iVar2 == 0) && (param_2 == 4)) {
    _Str1 = *param_3;
    uVar3 = (ulonglong)(ushort)*_Str1;
    pwVar4 = _Str1;
    if (*_Str1 == L'\0') {
      uVar5 = 2;
      goto LAB_140006985;
    }
    do {
      if (((short)uVar3 == 0x20) || ((short)uVar3 == 9)) break;
      pwVar4 = pwVar4 + 1;
      uVar3 = (ulonglong)(ushort)*pwVar4;
    } while (*pwVar4 != L'\0');
    uVar6 = (longlong)pwVar4 - (longlong)_Str1 >> 1 & 0xffffffff;
    for (; (wVar1 = *pwVar4, wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))));
        pwVar4 = pwVar4 + 1) {
    }
    *param_3 = pwVar4;
    iVar2 = _wcsnicmp(_Str1,L"IF",2);
    if ((iVar2 == 0) && (uVar3 = CONCAT44(extraout_var_02,iVar2), uVar6 == 2)) goto LAB_140006913;
    iVar2 = _wcsnicmp(_Str1,L"IFDEF",5);
    if ((iVar2 == 0) && (uVar3 = CONCAT44(extraout_var_03,iVar2), uVar6 == 5)) goto LAB_140006939;
    iVar2 = _wcsnicmp(_Str1,L"IFNDEF",6);
    extraout_RAX = CONCAT44(extraout_var_04,iVar2);
    uVar3 = extraout_RAX;
    uVar5 = 0;
    if ((iVar2 != 0) || (uVar5 = 0, uVar6 != 6)) goto LAB_140006985;
  }
  else {
    iVar2 = _wcsnicmp(param_1,L"ELSEIF",6);
    if ((iVar2 == 0) && (uVar3 = CONCAT44(extraout_var_05,iVar2), param_2 == 6)) {
LAB_140006913:
      uVar5 = 3;
      goto LAB_140006985;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFDEF",9);
    if ((iVar2 == 0) && (uVar3 = CONCAT44(extraout_var_06,iVar2), param_2 == 9)) {
LAB_140006939:
      uVar5 = 4;
      goto LAB_140006985;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFNDEF",10);
    if ((iVar2 != 0) || (uVar3 = CONCAT44(extraout_var_07,iVar2), param_2 != 10)) {
      iVar2 = _wcsnicmp(param_1,L"ENDIF",5);
      extraout_RAX_00 = CONCAT44(extraout_var_08,iVar2);
      uVar3 = extraout_RAX_00;
      uVar5 = 0;
      if (iVar2 == 0) {
        uVar5 = 0;
        if (param_2 == 5) {
          uVar5 = 8;
        }
      }
      goto LAB_140006985;
    }
  }
  uVar5 = 5;
LAB_140006985:
  return CONCAT71((int7)(uVar3 >> 8),uVar5);
}



void FUN_1400069a4(wchar_t *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  bool bVar6;
  
  bVar3 = (byte)param_2;
  if (bVar3 == 1) {
LAB_140006aa7:
    if (DAT_140015044 == 0xf) {
      FUN_140003898((ulonglong)DAT_140025c20,0x3fb,(ulonglong)param_1,param_4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    DAT_140015044 = DAT_140015044 + 1;
    bVar6 = DAT_140015044 != 0;
    pwVar4 = (wchar_t *)(longlong)DAT_140015044;
    *(undefined *)(pwVar4 + 0xa001b260) = 1;
    if ((bVar6) && ((*(byte *)((longlong)pwVar4 + 0x1400364bf) & 2) == 0)) {
      *(undefined *)(pwVar4 + 0xa001b260) = 5;
      goto LAB_140006a09;
    }
LAB_140006aec:
    pwVar5 = param_1;
    bVar6 = FUN_14000d1f8(param_1,bVar3,(ulonglong)param_1,param_4);
    pwVar4 = param_1;
    param_1 = pwVar5;
    if (bVar6) {
      (&DAT_1400364c0)[DAT_140015044] = (&DAT_1400364c0)[DAT_140015044] | 2;
      return;
    }
  }
  else {
    if (bVar3 == 2) {
      pwVar4 = (wchar_t *)(longlong)DAT_140015044;
      if ((DAT_140015044 < 0) || (bVar3 = *(byte *)(pwVar4 + 0xa001b260), (bVar3 & 9) == 0)) {
        FUN_140003898((ulonglong)DAT_140025c20,0x3fd,(ulonglong)param_1,param_4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(byte *)(pwVar4 + 0xa001b260) = bVar3 & 0xf6;
      if ((bVar3 & 4) != 0) goto LAB_140006a09;
      if ((bVar3 & 2) == 0) {
        bVar3 = bVar3 & 0xf6 | 2;
      }
      else {
        bVar3 = bVar3 & 0xf4;
      }
      *(byte *)(pwVar4 + 0xa001b260) = bVar3;
    }
    else {
      if (bVar3 < 3) {
        return;
      }
      if (bVar3 < 6) {
        pwVar4 = (wchar_t *)(longlong)DAT_140015044;
        if ((DAT_140015044 < 0) || (bVar1 = *(byte *)(pwVar4 + 0xa001b260), (bVar1 & 9) == 0)) {
          FUN_140003898((ulonglong)DAT_140025c20,0x3fd,(ulonglong)param_1,param_4);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(byte *)(pwVar4 + 0xa001b260) = bVar1 & 0xfe | 8;
        if ((bVar1 & 4) != 0) goto LAB_140006a09;
        if ((bVar1 & 2) != 0) {
          *(byte *)(pwVar4 + 0xa001b260) = bVar1 & 0xfc | 0xc;
          goto LAB_140006a09;
        }
        goto LAB_140006aec;
      }
      if (bVar3 < 8) goto LAB_140006aa7;
      if (bVar3 != 8) {
        return;
      }
      if (DAT_140015044 < 0) {
        FUN_140003898((ulonglong)DAT_140025c20,0x401,(ulonglong)param_1,param_4);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      DAT_140015044 = DAT_140015044 + -1;
      if (DAT_140015044 < 0) {
        return;
      }
      bVar3 = (&DAT_1400364c0)[DAT_140015044];
      pwVar4 = param_1;
    }
    if ((bVar3 & 2) != 0) {
      return;
    }
  }
LAB_140006a09:
  FUN_140006b10(pwVar4,param_2,(ulonglong)param_1,param_4);
  return;
}



void FUN_140006b10(undefined8 param_1,byte *param_2,ulonglong param_3,undefined8 param_4)

{
  wint_t wVar1;
  wchar_t *pwVar2;
  byte local_res8 [8];
  
  do {
    wVar1 = getwc(DAT_140026480);
    if (wVar1 != 0x21) {
      while (wVar1 != 0xffff) {
        DAT_140025c20 = DAT_140025c20 + 1;
        while( true ) {
          if (wVar1 == 0x5c) {
            param_2 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            wVar1 = FUN_140008128(0x5c,'\x01');
            if ((wVar1 == 0x21) && (DAT_140015041 != '\0')) goto LAB_140006bce;
            DAT_140015041 = '\0';
          }
          if (wVar1 == 0x23) goto LAB_140006b93;
          if (wVar1 == 10) break;
          if (wVar1 == 0xffff) goto LAB_140006bc8;
          wVar1 = getwc(DAT_140026480);
        }
LAB_140006ba6:
        if (wVar1 == 0xffff) break;
        if (wVar1 == 0x21) goto LAB_140006bce;
        wVar1 = getwc(DAT_140026480);
        if (wVar1 == 0x21) break;
      }
LAB_140006bc8:
      if (wVar1 != 0x21) {
        if (wVar1 == 0xffff) {
          FUN_140003898((ulonglong)DAT_140025c20,0x3fc,param_3,param_4);
        }
        return;
      }
    }
LAB_140006bce:
    pwVar2 = DAT_1400364b0;
    if ((DAT_1400364b0 != (wchar_t *)0x0) && (DAT_1400364b0 != DAT_1400364b8)) {
      free(DAT_1400364b0);
    }
    DAT_1400364b0 = (wchar_t *)FUN_140006490(pwVar2,param_2,param_3,param_4);
    param_2 = local_res8;
    FUN_1400065f8(DAT_1400364b0,(char *)param_2,param_3,param_4);
    if (local_res8[0] < 9) {
      return;
    }
    DAT_140025c20 = DAT_140025c20 + 1;
  } while( true );
LAB_140006b93:
  wVar1 = getwc(DAT_140026480);
  if (wVar1 == 10) goto LAB_140006ba6;
  if (wVar1 == 0xffff) goto LAB_140006bc8;
  goto LAB_140006b93;
}



ulonglong FUN_140006c34(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar5;
  longlong lVar6;
  FILE *pFVar7;
  wchar_t *local_res8;
  
  DAT_140025c20 = 0;
  local_res8 = param_1;
  do {
    pFVar7 = DAT_140026480;
    pwVar4 = fgetws(&DAT_140025c50,0x400,DAT_140026480);
    if (pwVar4 == (wchar_t *)0x0) {
      iVar3 = feof(DAT_140026480);
      uVar5 = CONCAT44(extraout_var_00,iVar3);
      if (iVar3 == 0) {
        DAT_140025c24 = DAT_140025c20;
        uVar5 = FUN_140003898(0,0x41d,(ulonglong)pFVar7,param_4);
      }
      return uVar5 & 0xffffffffffffff00;
    }
    if (DAT_140025c50 == 0x5b) {
      local_res8 = (wchar_t *)0x0;
      pwVar4 = &DAT_140025c52;
      bVar1 = false;
      while ((pwVar4 = wcstok_s(pwVar4,L" \t\n",&local_res8), pwVar4 != (wchar_t *)0x0 && (!bVar1)))
      {
        lVar2 = -1;
        do {
          lVar6 = lVar2;
          lVar2 = lVar6 + 1;
        } while (pwVar4[lVar6 + 1] != L'\0');
        if (pwVar4[lVar6] == L']') {
          bVar1 = true;
          pwVar4[lVar6] = L'\0';
        }
        iVar3 = _wcsicmp(pwVar4,L"nmake");
        if (iVar3 == 0) {
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
        }
        pwVar4 = (wchar_t *)0x0;
      }
    }
    DAT_140025c20 = DAT_140025c20 + 1;
  } while( true );
}



wint_t * FUN_140006d18(wint_t *param_1,LPWIN32_FIND_DATAW param_2,LPWIN32_FIND_DATAW param_3,
                      HANDLE *param_4)

{
  FILE *_File;
  wint_t _Ch;
  int iVar1;
  wint_t *pwVar2;
  wint_t *pwVar3;
  
  iVar1 = (int)param_2;
  _Ch = FUN_14000613c(param_1,param_2,param_3,param_4);
  pwVar3 = param_1;
  while( true ) {
    if (_Ch == 0) {
      return pwVar3;
    }
    if (_Ch == 0xffff) {
      *pwVar3 = 0;
      return (wint_t *)0x0;
    }
    *pwVar3 = _Ch;
    _File = DAT_140026480;
    pwVar2 = pwVar3 + 1;
    if (pwVar2 == param_1 + iVar1) {
      *pwVar3 = 0;
      ungetwc(_Ch,_File);
      return pwVar2;
    }
    if (_Ch == 10) break;
    DAT_140015041 = 0;
    _Ch = FUN_14000613c(0xffff,param_2,param_3,param_4);
    pwVar3 = pwVar2;
  }
  DAT_140025c20 = DAT_140025c20 + 1;
  DAT_140015041 = 1;
  *pwVar2 = 0;
  return pwVar2;
}



undefined2 * FUN_140006dac(wchar_t **param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  pwVar7 = &DAT_140036e90;
  bVar1 = false;
  pwVar6 = *param_1;
  bVar2 = false;
  bVar3 = false;
  do {
    pwVar5 = wcschr(pwVar6,L'<');
    if (pwVar5 == (wchar_t *)0x0) {
      return (undefined2 *)0x0;
    }
    pwVar6 = pwVar5 + 1;
    if (*pwVar6 == L'<') {
      bVar1 = true;
    }
  } while (!bVar1);
  wVar4 = pwVar5[2];
  pwVar6 = pwVar5 + 2;
  while ((pwVar5 = pwVar6, wVar4 != L'\0' &&
         (((0x3e < (ushort)wVar4 ||
           ((0x5000100000000600U >> ((ulonglong)(ushort)wVar4 & 0x3f) & 1) == 0)) && (wVar4 != L'^')
          )))) {
    if (wVar4 == L'\"') {
      bVar2 = !bVar2;
      bVar3 = bVar2;
    }
    if ((wVar4 == L' ') && (!bVar3)) break;
    if ((wVar4 == L'$') && (pwVar5 = pwVar6 + 1, *pwVar5 == L'(')) {
      *pwVar7 = L'$';
      pwVar7 = pwVar7 + 1;
      *pwVar7 = L'(';
      wVar4 = *pwVar5;
      if (wVar4 == L'\n') break;
      do {
        if (wVar4 == L')') break;
        pwVar5 = pwVar5 + 1;
        *pwVar7 = wVar4;
        pwVar7 = pwVar7 + 1;
        wVar4 = *pwVar5;
      } while (wVar4 != L'\n');
      if (*pwVar5 == L'\n') break;
    }
    else {
      *pwVar7 = wVar4;
      pwVar7 = pwVar7 + 1;
      pwVar5 = pwVar6 + 1;
    }
    pwVar6 = pwVar5;
    wVar4 = *pwVar5;
  }
  *pwVar7 = L'\0';
  *param_1 = pwVar5;
  return &DAT_140036e90;
}



void FUN_140006ee0(WCHAR *param_1,LPWIN32_FIND_DATAW *param_2,wchar_t **param_3,HANDLE *param_4)

{
  WCHAR WVar1;
  longlong **pplVar2;
  int iVar3;
  wint_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  void *pvVar9;
  longlong **pplVar10;
  size_t sVar11;
  LPWIN32_FIND_DATAW _Dst;
  LPWIN32_FIND_DATAW p_Var12;
  WCHAR *pWVar13;
  longlong **pplVar14;
  undefined8 uVar15;
  longlong lVar16;
  WCHAR *pWVar17;
  LPWIN32_FIND_DATAW _Src;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined auStack_888 [32];
  char local_868;
  wchar_t *local_860;
  LPWIN32_FIND_DATAW *local_858;
  wchar_t local_848;
  WCHAR local_846 [1023];
  ulonglong local_48;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStack_888;
  local_868 = '\0';
  _Src = (LPWIN32_FIND_DATAW)&DAT_140012008;
  p_Var12 = (LPWIN32_FIND_DATAW)0x0;
  uVar18 = 0;
  _Dst = (LPWIN32_FIND_DATAW)0x0;
  local_858 = param_2;
  wcscpy_s(&local_848,0x400,L"<<");
  pwVar4 = FUN_140006d18((wint_t *)(&local_848 + 2),(LPWIN32_FIND_DATAW)0x3fe,_Src,param_4);
  if (pwVar4 == (wint_t *)0x0) {
    iVar3 = feof((FILE *)DAT_140026480);
    if (iVar3 != 0) {
      _Src = (LPWIN32_FIND_DATAW)&DAT_140012000;
      FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)&DAT_140012000,param_4);
    }
    FUN_140003898((ulonglong)DAT_140025c20,0x41d,(ulonglong)_Src,param_4);
  }
  local_860 = &local_848;
  pwVar6 = &local_848;
  while( true ) {
    uVar15 = 10;
    pwVar6 = wcschr(pwVar6,L'\n');
    if ((pwVar6 == (wchar_t *)0x0) || ((&local_848 < pwVar6 && (pwVar6[-1] != L'^')))) break;
    pwVar6 = pwVar6 + 1;
    _Src = DAT_140026480;
    pwVar5 = fgetws(pwVar6,0x400 - (int)((longlong)pwVar6 - (longlong)&local_848 >> 1),
                    (FILE *)DAT_140026480);
    if (pwVar5 == (wchar_t *)0x0) {
      iVar3 = feof((FILE *)DAT_140026480);
      if (iVar3 != 0) {
        _Src = (LPWIN32_FIND_DATAW)&DAT_140012000;
        FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)&DAT_140012000,param_4);
      }
      FUN_140003898((ulonglong)DAT_140025c20,0x41d,(ulonglong)_Src,param_4);
    }
    DAT_140025c20 = DAT_140025c20 + 1;
  }
  puVar7 = FUN_140006dac(&local_860);
  while (puVar7 != (undefined2 *)0x0) {
    plVar8 = (longlong *)FUN_140009244(0x18,uVar15,(ulonglong)_Src,param_4);
    pvVar9 = FUN_14000dcc4(puVar7,uVar15,(ulonglong)_Src,param_4);
    plVar8[1] = (longlong)pvVar9;
    pplVar2 = DAT_140036ce0;
    pplVar14 = (longlong **)&DAT_140036ce0;
    while (pplVar10 = pplVar2, pplVar10 != (longlong **)0x0) {
      pplVar14 = pplVar10;
      pplVar2 = (longlong **)*pplVar10;
    }
    *pplVar14 = plVar8;
    puVar7 = FUN_140006dac(&local_860);
    param_2 = local_858;
  }
  for (; DAT_140036ce0 != (longlong **)0x0; DAT_140036ce0 = (longlong **)*DAT_140036ce0) {
    while( true ) {
      pWVar17 = &local_848;
      uVar19 = uVar18;
      do {
        WVar1 = *pWVar17;
        pWVar17 = pWVar17 + 1;
        *param_1 = WVar1;
        param_1 = param_1 + 1;
        uVar18 = uVar19;
        if (param_1 == *param_3) {
          if (_Dst == (LPWIN32_FIND_DATAW)0x0) {
            lVar16 = SUB168(ZEXT416(2) * ZEXT816(0x800),8);
            sVar11 = SUB168(ZEXT416(2) * ZEXT816(0x800),0);
            if (lVar16 != 0) {
              sVar11 = 0xffffffffffffffff;
            }
            _Dst = (LPWIN32_FIND_DATAW)FUN_140009214(sVar11,lVar16,(ulonglong)_Src,param_4);
            _Src = *param_2;
            param_4 = (HANDLE *)0x400;
            wcsncpy_s((wchar_t *)_Dst,0x800,(wchar_t *)_Src,0x400);
            param_1 = _Dst[3].cFileName + 0x72;
            uVar18 = 0x800;
            pWVar13 = _Dst[6].cFileName + 0xfa;
          }
          else {
            uVar18 = uVar19 + 0x400;
            if ((uVar18 < uVar19) ||
               (p_Var12 = (LPWIN32_FIND_DATAW)FUN_140009274(_Dst,uVar18 * 2,(ulonglong)_Src,param_4)
               , p_Var12 == (LPWIN32_FIND_DATAW)0x0)) {
              FUN_140003898((ulonglong)DAT_140025c20,0x419,(ulonglong)_Src,param_4);
            }
            param_1 = p_Var12->cFileName + (uVar19 - 0x16);
            pWVar13 = p_Var12[3].cFileName + uVar19 + 0x72;
            param_2 = local_858;
            _Dst = p_Var12;
          }
          *param_3 = pWVar13;
          *param_2 = _Dst;
        }
        uVar19 = uVar18;
      } while (*pWVar17 != L'\0');
      if (((local_868 != '\0') && (local_848 == L'<')) && (local_846[0] == 0x3c)) break;
      local_868 = '\x01';
      pwVar4 = FUN_140006d18((wint_t *)&local_848,(LPWIN32_FIND_DATAW)0x400,_Src,param_4);
      if (pwVar4 == (wint_t *)0x0) {
        iVar3 = feof((FILE *)DAT_140026480);
        if (iVar3 != 0) {
          _Src = (LPWIN32_FIND_DATAW)&DAT_140012000;
          FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)&DAT_140012000,param_4);
        }
        FUN_140003898((ulonglong)DAT_140025c20,0x41d,(ulonglong)_Src,param_4);
      }
    }
    if ((*DAT_140036ce0 != (longlong *)0x0) &&
       (pwVar4 = FUN_140006d18((wint_t *)&local_848,(LPWIN32_FIND_DATAW)0x400,_Src,param_4),
       pwVar4 == (wint_t *)0x0)) {
      iVar3 = feof((FILE *)DAT_140026480);
      if (iVar3 != 0) {
        _Src = (LPWIN32_FIND_DATAW)&DAT_140012000;
        FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)&DAT_140012000,param_4);
      }
      FUN_140003898((ulonglong)DAT_140025c20,0x41d,(ulonglong)_Src,param_4);
    }
  }
  *param_1 = L'\0';
  __security_check_cookie(local_48 ^ (ulonglong)auStack_888);
  return;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_140007294(wchar_t **param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *_Dst;
  longlong lVar1;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  longlong lVar6;
  rsize_t rVar7;
  undefined8 auStack_58 [5];
  wchar_t awStack_30 [4];
  ulonglong local_28 [2];
  longlong lVar2;
  
  local_28[0] = DAT_140015008 ^ (ulonglong)local_28;
  pwVar4 = *param_1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (pwVar4[lVar6] != L'\0');
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (param_2[lVar1] != L'\0');
  rVar7 = lVar2 + lVar6;
  uVar5 = rVar7 * 2 + 0xf;
  if (uVar5 <= rVar7 * 2) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_58[1] = 0x140007312;
  lVar6 = -(uVar5 & 0xfffffffffffffff0);
  _Dst = (wchar_t *)((longlong)awStack_30 + lVar6);
  pwVar3 = _Dst;
  do {
    if (*pwVar4 == L'<') {
      if (pwVar4[1] == L'<') {
        *pwVar3 = L'\0';
        *(undefined8 *)((longlong)auStack_58 + lVar6) = 0x140007359;
        wcscat_s(_Dst,rVar7,param_2);
        pwVar4 = pwVar4 + 2;
        *(undefined8 *)((longlong)auStack_58 + lVar6) = 0x140007369;
        wcscat_s(_Dst,rVar7,pwVar4);
        lVar1 = -1;
        do {
          lVar2 = lVar1;
          lVar1 = lVar2 + 1;
        } while (_Dst[lVar1] != L'\0');
        pwVar3 = *param_1;
        rVar7 = lVar2 + 2;
        *(undefined8 *)((longlong)auStack_58 + lVar6) = 0x140007382;
        pwVar4 = (wchar_t *)FUN_140009274(pwVar3,rVar7 * 2,(ulonglong)pwVar4,param_4);
        *param_1 = pwVar4;
        *(undefined8 *)((longlong)auStack_58 + lVar6) = 0x140007394;
        wcscpy_s(pwVar4,rVar7,_Dst);
        uVar5 = local_28[0] ^ (ulonglong)local_28;
        *(undefined8 *)((longlong)auStack_58 + lVar6) = 0x1400073a0;
        __security_check_cookie(uVar5);
        return;
      }
      *pwVar3 = L'<';
    }
    else {
      *pwVar3 = *pwVar4;
    }
    pwVar4 = pwVar4 + 1;
    pwVar3 = pwVar3 + 1;
  } while( true );
}



void FUN_1400073bc(FILE *param_1,longlong param_2,wchar_t **param_3,FILE *param_4,undefined *param_5
                  )

{
  wint_t wVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  size_t _Size;
  wchar_t *pwVar13;
  LPCWSTR lpWideCharStr;
  wint_t *pwVar14;
  wchar_t **ppwVar15;
  FILE *pFVar16;
  ulonglong _MaxCount;
  wchar_t *local_50 [2];
  longlong lVar9;
  
  bVar3 = true;
  ppwVar15 = param_3;
  pFVar16 = param_4;
  pwVar6 = wcsstr(*param_3,L"<<");
  bVar4 = false;
  if ((pwVar6 != (wchar_t *)0x0) && ((pwVar6 == *param_3 || (pwVar6[-1] == L'\n')))) {
    uVar11 = 10;
    pwVar7 = wcschr(pwVar6 + 2,L'\n');
    if (pwVar7 != (wchar_t *)0x0) {
      *pwVar7 = L'\0';
    }
    pwVar6 = (wchar_t *)FUN_14000dcc4(pwVar6 + 2,uVar11,(ulonglong)ppwVar15,pFVar16);
    if (pwVar7 != (wchar_t *)0x0) {
      *pwVar7 = L'\n';
    }
    ppwVar15 = local_50;
    local_50[0] = (wchar_t *)0x0;
    pwVar7 = wcstok_s(pwVar6,L", \t",ppwVar15);
    bVar4 = false;
    while (pwVar7 != (wchar_t *)0x0) {
      iVar5 = _wcsicmp(pwVar7,L"keep");
      if (iVar5 == 0) {
        *param_5 = 1;
      }
      else {
        iVar5 = _wcsicmp(pwVar7,L"nokeep");
        if (iVar5 == 0) {
          *param_5 = 0;
        }
        else {
          iVar5 = _wcsicmp(pwVar7,L"unicode");
          if (iVar5 == 0) {
            bVar4 = true;
          }
          else {
            FUN_140003898((ulonglong)DAT_140025c20,0x446,(ulonglong)ppwVar15,pFVar16);
          }
        }
      }
      ppwVar15 = local_50;
      pwVar7 = wcstok_s((wchar_t *)0x0,L", \t",ppwVar15);
    }
    free(pwVar6);
    if (bVar4) {
      pFVar16 = param_1;
      fwrite(&DAT_1400120b4,2,1,param_1);
    }
  }
  iVar5 = wcsncmp(*param_3,L"<<",2);
  do {
    if (iVar5 == 0) {
      *param_3 = *param_3 + 2;
      return;
    }
    pwVar6 = wcschr(*param_3,L'\n');
    if (pwVar6 == (wchar_t *)0x0) {
      return;
    }
    if ((char)param_4 != '\0') {
      pwVar7 = *param_3;
      bVar3 = !bVar3;
      *pwVar6 = L'\0';
      pwVar13 = pwVar7;
      if (*pwVar7 != L'\0') {
LAB_140007595:
        iVar5 = iswspace(*pwVar13);
        if (iVar5 != 0) break;
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (*(short *)(param_2 + lVar8 * 2) != 0);
        _MaxCount = 0x400 - (lVar9 + 0xd);
        for (; *pwVar7 != L'\0'; pwVar7 = pwVar7 + lVar8) {
          wcsncpy_s((wchar_t *)&DAT_14003d150,0x400,pwVar7,_MaxCount);
          uVar10 = 0xffffffffffffffff;
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while ((&DAT_14003d150)[lVar8] != 0);
          do {
            uVar10 = uVar10 + 1;
          } while (pwVar7[uVar10] != L'\0');
          if (_MaxCount < uVar10) {
            pwVar14 = &DAT_14003d150;
            wVar1 = DAT_14003d150;
            while (wVar1 != 0) {
              iVar5 = iswspace(*pwVar14);
              if (iVar5 != 0) {
                lVar8 = ((longlong)(pwVar14 + -0xa001e8a8) >> 1) + 1;
              }
              pwVar14 = pwVar14 + 1;
              wVar1 = *pwVar14;
            }
          }
          if (0x7ff < (ulonglong)(lVar8 * 2)) {
            __report_rangecheckfailure();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (&DAT_14003d150)[lVar8] = 0;
          puVar12 = &DAT_140012028;
          if (bVar3) {
            puVar12 = &DAT_140012020;
          }
          FUN_14000bfe0(L"\techo %s %s %s\n",&DAT_14003d150,puVar12,param_2);
          bVar3 = true;
        }
        goto LAB_1400076d9;
      }
LAB_1400075ac:
      puVar12 = &DAT_140012028;
      if (bVar3) {
        puVar12 = &DAT_140012020;
      }
      FUN_14000bfe0(L"\techo. %s %s\n",puVar12,param_2,pFVar16);
LAB_1400076d9:
      *pwVar6 = L'\n';
    }
    if (bVar4) {
      fwrite(*param_3,(longlong)pwVar6 - (longlong)*param_3 >> 1,2,param_1);
      _Size = 4;
      puVar12 = &DAT_1400120b0;
    }
    else {
      for (lpWideCharStr = *param_3; lpWideCharStr < pwVar6; lpWideCharStr = lpWideCharStr + 1) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,1,(LPSTR)local_50,4,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 != 0) {
          fwrite(local_50,(longlong)iVar5,1,param_1);
        }
      }
      _Size = 2;
      puVar12 = &DAT_1400120ac;
    }
    pFVar16 = param_1;
    fwrite(puVar12,_Size,1,param_1);
    *param_3 = pwVar6 + 1;
    bVar3 = false;
    iVar5 = wcsncmp(pwVar6 + 1,L"<<",2);
  } while( true );
  pwVar13 = pwVar13 + 1;
  if (*pwVar13 == L'\0') goto LAB_1400075ac;
  goto LAB_140007595;
}



void FUN_1400077d0(wchar_t *param_1,wchar_t **param_2,ulonglong **param_3,FILE *param_4)

{
  code *pcVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  errno_t eVar4;
  UINT UVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ulonglong *_Memory;
  undefined2 *puVar8;
  FILE *_File;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong **ppuVar17;
  wchar_t *pwVar18;
  undefined auStackY_4b8 [32];
  char local_488;
  undefined local_487;
  ulonglong *local_480;
  wchar_t *local_478;
  size_t local_470;
  wchar_t local_468 [264];
  FILE local_258 [11];
  ulonglong local_48;
  longlong lVar16;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStackY_4b8;
  local_487 = SUB81(param_4,0);
  uVar13 = 10;
  ppuVar17 = param_3;
  pwVar6 = wcschr(param_1,L'\n');
  if (pwVar6 == (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)FUN_14000dcc4(param_1,uVar13,(ulonglong)ppuVar17,param_4);
    *param_2 = pwVar6;
  }
  else {
    *pwVar6 = L'\0';
    uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),0xff);
    ppuVar17 = param_3;
    pwVar7 = (wchar_t *)FUN_14000e740(param_1,-1,param_3,(ulonglong **)param_4);
    *param_2 = pwVar7;
    *pwVar6 = L'\n';
    if (*param_2 == param_1) {
      pwVar7 = (wchar_t *)FUN_14000dcc4(param_1,uVar13,(ulonglong)ppuVar17,param_4);
      *param_2 = pwVar7;
    }
    local_478 = *param_2;
    puVar14 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar13 >> 8),0xff);
    _Memory = (ulonglong *)FUN_14000e740(pwVar6 + 1,-1,param_3,(ulonglong **)param_4);
    local_480 = _Memory;
    puVar8 = FUN_140006dac(&local_478);
    while (_File = (FILE *)0x0, puVar8 != (undefined2 *)0x0) {
      local_488 = '\0';
      pwVar7 = (wchar_t *)FUN_14000dcc4(puVar8,puVar14,(ulonglong)param_3,param_4);
      if (*pwVar7 == L'\0') {
        local_470 = 0;
        eVar4 = _wgetenv_s(&local_470,local_468,0x103,L"TMP");
        if ((eVar4 != 0) || (local_470 == 0)) {
          wcscpy_s(local_468,0x103,L".");
        }
        param_4 = local_258;
        pwVar18 = (wchar_t *)0x0;
        UVar5 = GetTempFileNameW(local_468,L"nm",0,(LPWSTR)param_4);
        if (UVar5 != 0) {
          wcscpy_s(local_468,0x103,(wchar_t *)local_258);
          pwVar18 = (wchar_t *)0x20;
          _File = _wfsopen(local_468,L"wb",0x20);
        }
        if (_File == (FILE *)0x0) {
          pwVar18 = local_468;
          FUN_140003898((ulonglong)DAT_140025c20,0x41e,(ulonglong)pwVar18,param_4);
        }
        pwVar9 = wcschr(local_468,L' ');
        if ((pwVar9 != (wchar_t *)0x0) &&
           (pwVar9 = wcschr(local_468,L'\"'), pwVar9 == (wchar_t *)0x0)) {
          lVar15 = -1;
          do {
            lVar16 = lVar15;
            lVar15 = lVar16 + 1;
          } while (local_468[lVar15] != L'\0');
          pwVar18 = (wchar_t *)(lVar15 * 2);
          memmove(local_468 + 1,local_468,(size_t)pwVar18);
          local_468[0] = L'\"';
          local_468[lVar16 + 2] = L'\"';
          if (0x205 < lVar15 * 2 + 4U) {
            __report_rangecheckfailure();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_468[lVar16 + 3] = L'\0';
        }
        pwVar9 = local_468;
        FUN_140007294(param_2,pwVar9,pwVar18,param_4);
        free(pwVar7);
        pwVar7 = (wchar_t *)FUN_14000dcc4(local_468,pwVar9,(ulonglong)pwVar18,param_4);
      }
      else {
        _File = (FILE *)FUN_14000fd2c(pwVar7,L"wb");
        if (_File == (FILE *)0x0) {
          FUN_140003898((ulonglong)DAT_140025c20,0x41e,(ulonglong)pwVar7,param_4);
        }
        else {
          pwVar18 = *param_2;
          do {
            pwVar9 = wcschr(pwVar18,L'<');
            pwVar18 = pwVar9 + 1;
          } while (*pwVar18 != L'<');
          lVar15 = -1;
          do {
            lVar15 = lVar15 + 1;
          } while ((pwVar9 + 2)[lVar15] != L'\0');
          memmove(pwVar9,pwVar9 + 2,lVar15 * 2 + 2);
        }
      }
      local_478 = *param_2;
      param_3 = &local_480;
      param_4 = (FILE *)CONCAT71((int7)((ulonglong)param_4 >> 8),local_487);
      FUN_1400073bc(_File,(longlong)pwVar7,(wchar_t **)param_3,param_4,&local_488);
      puVar2 = local_480;
      puVar14 = (undefined8 *)0xa;
      pwVar18 = wcschr((wchar_t *)local_480,L'\n');
      if (pwVar18 == (wchar_t *)0x0) {
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (*(wchar_t *)((longlong)puVar2 + lVar15 * 2) != L'\0');
        local_480 = (ulonglong *)((longlong)puVar2 + lVar15 * 2);
      }
      else {
        local_480 = (ulonglong *)(pwVar18 + 1);
      }
      fclose(_File);
      if (local_488 == '\0') {
        puVar10 = FUN_14000dc58(_File,puVar14,(ulonglong)param_3,param_4);
        pvVar11 = FUN_14000dcc4(pwVar7,puVar14,(ulonglong)param_3,param_4);
        puVar10[1] = pvVar11;
        puVar3 = DAT_140036e88;
        puVar14 = &DAT_140036e88;
        while (puVar12 = puVar3, puVar12 != (undefined8 *)0x0) {
          puVar14 = puVar12;
          puVar3 = (undefined8 *)*puVar12;
        }
        *puVar14 = puVar10;
      }
      free(pwVar7);
      puVar8 = FUN_140006dac(&local_478);
    }
    if (_Memory != (ulonglong *)(pwVar6 + 1)) {
      free(_Memory);
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_4b8);
  return;
}



void FUN_140007b64(char param_1)

{
  wint_t wVar1;
  undefined7 in_register_00000009;
  FILE *pFVar2;
  LPWIN32_FIND_DATAW in_RDX;
  LPWIN32_FIND_DATAW in_R8;
  HANDLE *in_R9;
  
  pFVar2 = (FILE *)CONCAT71(in_register_00000009,param_1);
  while( true ) {
    DAT_140015041 = 0;
    do {
      if (param_1 == '\0') {
        wVar1 = FUN_14000613c(pFVar2,in_RDX,in_R8,in_R9);
      }
      else {
        wVar1 = getwc(DAT_140026480);
      }
      pFVar2 = (FILE *)0xffff;
      if (wVar1 == 0xffff) {
        return;
      }
    } while (wVar1 != 10);
    DAT_140015041 = 1;
    if (param_1 == '\0') {
      wVar1 = FUN_14000613c(0xffff,in_RDX,in_R8,in_R9);
    }
    else {
      pFVar2 = DAT_140026480;
      wVar1 = getwc(DAT_140026480);
    }
    if (((wVar1 != 0x3b) || (DAT_140026489 == '\0')) && (wVar1 != 0x23)) break;
    DAT_140025c20 = DAT_140025c20 + 1;
  }
  ungetwc(wVar1,DAT_140026480);
  return;
}



void FUN_140007bf0(short param_1,undefined8 param_2,ulonglong param_3,HANDLE *param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  LPWIN32_FIND_DATAW p_Var6;
  undefined8 uVar7;
  LPWIN32_FIND_DATAW p_Var8;
  
  if ((param_1 == 10) || (param_1 == -1)) {
    FUN_140003898((ulonglong)DAT_140025c20,0x407,param_3,param_4);
  }
  uVar7 = 0x3ff;
  p_Var8 = DAT_140026480;
  DAT_140025c50 = param_1;
  pwVar4 = fgetws(&DAT_140025c52,0x3ff,(FILE *)DAT_140026480);
  if (pwVar4 == (wchar_t *)0x0) {
    iVar3 = feof((FILE *)DAT_140026480);
    if (iVar3 != 0) {
      p_Var8 = (LPWIN32_FIND_DATAW)&DAT_140012000;
      FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)&DAT_140012000,param_4);
    }
    uVar7 = 0x41d;
    FUN_140003898((ulonglong)DAT_140025c20,0x41d,(ulonglong)p_Var8,param_4);
  }
  p_Var6 = (LPWIN32_FIND_DATAW)&DAT_140025c50;
  lVar2 = -1;
  do {
    lVar5 = lVar2;
    lVar2 = lVar5 + 1;
  } while ((&DAT_140025c50)[lVar5 + 1] != 0);
  if ((&DAT_140025c50)[lVar5] == 10) {
    if (0x7ff < (ulonglong)(lVar5 * 2)) {
      __report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (&DAT_140025c50)[lVar5] = 0;
  }
  for (; (*(short *)&p_Var6->dwFileAttributes == 0x20 || (*(short *)&p_Var6->dwFileAttributes == 9))
      ; p_Var6 = (LPWIN32_FIND_DATAW)((longlong)&p_Var6->dwFileAttributes + 2)) {
  }
  FUN_140008bcc(p_Var6,uVar7,p_Var8,param_4);
  return;
}



undefined FUN_140007cc8(ulonglong param_1,LPWIN32_FIND_DATAW param_2,LPWIN32_FIND_DATAW param_3)

{
  undefined uVar1;
  ushort _Ch;
  wint_t _Ch_00;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  LPWIN32_FIND_DATAW p_Var5;
  wchar_t *pwVar6;
  LPWIN32_FIND_DATAW p_Var7;
  uint uVar8;
  HANDLE *ppvVar9;
  
  p_Var5 = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)param_2 >> 8),DAT_140015041);
  p_Var7 = param_3;
  do {
    uVar8 = (uint)param_1 & 0xffff;
    ppvVar9 = (HANDLE *)(ulonglong)(uVar8 - 10);
    if (uVar8 - 10 != 0) {
      if (uVar8 - 0x3a != 0) {
        if (uVar8 == 0x3b) {
          DAT_140015041 = 0;
          return 0x13;
        }
        if (uVar8 == 0x3d) {
          DAT_140015041 = 0;
          return 0x16;
        }
        ppvVar9 = (HANDLE *)(ulonglong)(uVar8 - 0x5b);
        if (uVar8 - 0x5b == 0) {
          if ((DAT_140026489 != '\0') && ((char)p_Var5 != '\0')) {
            return 0x17;
          }
        }
        else {
          uVar8 = uVar8 - 0x5e;
          ppvVar9 = (HANDLE *)(ulonglong)uVar8;
          if (uVar8 != 0) {
            if (uVar8 != 0xffa1) goto LAB_140007e9e;
            iVar2 = feof(DAT_140026480);
            if (iVar2 == 0) {
              p_Var5 = (LPWIN32_FIND_DATAW)0x40e;
              FUN_140003898((ulonglong)DAT_140025c20,0x40e,(ulonglong)p_Var7,ppvVar9);
            }
            if (DAT_140036ce8 == 0) {
              if (DAT_140015044 < 0) {
                return 0x17;
              }
              param_1 = (ulonglong)DAT_140025c20;
              p_Var5 = (LPWIN32_FIND_DATAW)0x3fc;
              FUN_140003898(param_1,0x3fc,(ulonglong)p_Var7,ppvVar9);
            }
            else {
              iVar2 = fclose(DAT_140026480);
              if (iVar2 == 0xffff) {
                p_Var5 = (LPWIN32_FIND_DATAW)0x424;
                p_Var7 = DAT_140026490;
                FUN_140003898(0,0x424,(ulonglong)DAT_140026490,ppvVar9);
              }
              free(DAT_140026490);
              DAT_140036ce8 = DAT_140036ce8 + -1;
              lVar3 = (longlong)DAT_140036ce8;
              param_1 = lVar3 * 3;
              DAT_140026480 = *(FILE **)(&DAT_140036d00 + lVar3 * 0x18);
              DAT_140026490 = (LPWIN32_FIND_DATAW)(&DAT_140036cf8)[lVar3 * 3];
              DAT_140025c20 = *(uint *)(&DAT_140036cf0 + lVar3 * 0x18);
            }
            goto LAB_140007df6;
          }
        }
        ungetwc((wint_t)param_1,DAT_140026480);
        param_2 = (LPWIN32_FIND_DATAW)(param_2[-1].cAlternateFileName + 0xd);
LAB_140007e9e:
        FUN_140008874(param_2[-1].cAlternateFileName + 0xd,param_3,p_Var7,ppvVar9);
        if (DAT_140015041 != '\0') {
          pwVar6 = L"include";
          iVar2 = _wcsicmp(&DAT_140025c50,L"include");
          if (iVar2 == 0) {
            DAT_140015041 = 0;
            _Ch_00 = FUN_140008044('\0');
            if ((_Ch_00 != 0x3a) && (_Ch_00 != 0x3d)) {
              if (DAT_140026489 != '\0') {
                pwVar6 = (wchar_t *)0x409;
                FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)param_2,ppvVar9);
                p_Var7 = param_2;
              }
              uVar1 = FUN_140007bf0(_Ch_00,pwVar6,(ulonglong)p_Var7,ppvVar9);
              return uVar1;
            }
            ungetwc(_Ch_00,DAT_140026480);
            return 0x10;
          }
        }
        DAT_140015041 = 0;
        return 0x10;
      }
      DAT_140015041 = '\0';
      _Ch = FUN_14000613c(param_1,p_Var5,p_Var7,(HANDLE *)(ulonglong)(uVar8 - 0x3a));
      if (_Ch == 0x3a) {
        param_2->dwFileAttributes = 0x3a;
        return 0x15;
      }
      uVar1 = 0x14;
      goto LAB_140007e65;
    }
LAB_140007df6:
    DAT_140025c20 = DAT_140025c20 + 1;
    DAT_140015041 = 1;
    _Ch = FUN_14000613c(param_1,p_Var5,p_Var7,ppvVar9);
    if (((_Ch == 0x3b) && (DAT_140026489 != '\0')) || (_Ch == 0x23)) {
      uVar4 = 0;
      FUN_140007b64('\0');
      DAT_140025c20 = DAT_140025c20 + 1;
      DAT_140015041 = 1;
      _Ch = FUN_14000613c(uVar4,p_Var5,p_Var7,ppvVar9);
    }
    param_1 = (ulonglong)_Ch;
    if ((_Ch == 0x20) || (_Ch == 9)) {
      DAT_140015041 = 0;
      return 0x12;
    }
    p_Var5 = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)p_Var5 >> 8),1);
    DAT_140015041 = '\x01';
  } while (_Ch == 0xffff);
  uVar1 = 0x11;
LAB_140007e65:
  ungetwc(_Ch,DAT_140026480);
  return uVar1;
}



ulonglong FUN_140007f84(undefined8 param_1,LPWIN32_FIND_DATAW param_2,LPWIN32_FIND_DATAW param_3,
                       HANDLE *param_4)

{
  char cVar1;
  wint_t wVar2;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined8 uVar3;
  ulonglong uVar4;
  LPWIN32_FIND_DATAW p_Var5;
  
  cVar1 = (char)param_2;
  if (DAT_14002648a == '\0') {
    if ((byte)(cVar1 - 0x18U) < 2) {
      uVar3 = FUN_1400081f0(CONCAT71((int7)((ulonglong)param_1 >> 8),cVar1),param_2,
                            (FILETIME)&DAT_140026450,param_4);
      return CONCAT71((int7)((ulonglong)uVar3 >> 8),cVar1);
    }
    DAT_140025c50 = FUN_140008044('\0');
    p_Var5 = (LPWIN32_FIND_DATAW)&DAT_140025c52;
    uVar4 = (ulonglong)DAT_140025c50;
    DAT_140025c52 = 0;
  }
  else {
    DAT_140025c20 = DAT_140025c20 + 1;
    DAT_14002648a = '\0';
    wVar2 = FUN_14000613c(param_1,param_2,param_3,param_4);
    if ((wVar2 == 0x20) || (wVar2 == 9)) {
      DAT_140015041 = 0;
      return CONCAT71((int7)(CONCAT62(extraout_var,wVar2) >> 8),0x12);
    }
    uVar4 = 0xffff;
    DAT_140015041 = 1;
    if (wVar2 != 0xffff) {
      wVar2 = ungetwc(wVar2,DAT_140026480);
      return CONCAT71((int7)(CONCAT62(extraout_var_00,wVar2) >> 8),0x11);
    }
    p_Var5 = (LPWIN32_FIND_DATAW)&DAT_140025c50;
  }
  uVar4 = FUN_140007cc8(uVar4,p_Var5,(LPWIN32_FIND_DATAW)&DAT_140026450);
  return uVar4;
}



wint_t FUN_140008044(char param_1)

{
  wint_t _Ch;
  undefined7 in_register_00000009;
  FILE *pFVar1;
  LPWIN32_FIND_DATAW in_RDX;
  LPWIN32_FIND_DATAW in_R8;
  HANDLE *in_R9;
  
  pFVar1 = (FILE *)CONCAT71(in_register_00000009,param_1);
  do {
    if (param_1 == '\0') {
      _Ch = FUN_14000613c(pFVar1,in_RDX,in_R8,in_R9);
    }
    else {
      pFVar1 = DAT_140026480;
      _Ch = getwc(DAT_140026480);
    }
    if (((_Ch == 0x20) || (_Ch == 9)) || (_Ch == 0x5e)) {
      if (_Ch == 0x5e) {
        if (param_1 == '\0') {
          _Ch = FUN_14000613c(pFVar1,in_RDX,in_R8,in_R9);
        }
        else {
          pFVar1 = DAT_140026480;
          _Ch = getwc(DAT_140026480);
        }
        if ((_Ch != 0x20) && (_Ch != 9)) {
          ungetwc(_Ch,DAT_140026480);
          _Ch = 0x5e;
          break;
        }
      }
      DAT_140015041 = '\0';
    }
    if (_Ch == 0x5c) {
      pFVar1 = (FILE *)0x5c;
      in_RDX = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)in_RDX >> 8),param_1);
      _Ch = FUN_140008128(0x5c,param_1);
    }
  } while ((_Ch == 0x20) || (_Ch == 9));
  if (_Ch == 0x3b) {
    if (DAT_140015041 == '\0') {
      return 0x3b;
    }
    if (DAT_140026489 != '\0') goto LAB_140008102;
  }
  if (_Ch != 0x23) {
    return _Ch;
  }
LAB_140008102:
  FUN_140007b64(param_1);
  DAT_140015041 = 1;
  return 10;
}



wint_t FUN_140008128(wint_t param_1,char param_2)

{
  wint_t _Ch;
  ushort uVar1;
  undefined6 in_register_0000000a;
  FILE *pFVar2;
  ulonglong uVar3;
  undefined7 in_register_00000011;
  LPWIN32_FIND_DATAW p_Var4;
  LPWIN32_FIND_DATAW in_R8;
  HANDLE *in_R9;
  
  p_Var4 = (LPWIN32_FIND_DATAW)CONCAT71(in_register_00000011,param_2);
  pFVar2 = (FILE *)CONCAT62(in_register_0000000a,param_1);
  while( true ) {
    if ((wint_t)pFVar2 != 0x5c) {
      return (wint_t)pFVar2;
    }
    if (param_2 == '\0') {
      _Ch = FUN_14000613c(pFVar2,p_Var4,in_R8,in_R9);
    }
    else {
      pFVar2 = DAT_140026480;
      _Ch = getwc(DAT_140026480);
    }
    if (_Ch != 10) break;
    DAT_140025c20 = DAT_140025c20 + 1;
    DAT_140015041 = 1;
    if (param_2 == '\0') {
      uVar1 = FUN_14000613c(pFVar2,p_Var4,in_R8,in_R9);
    }
    else {
      uVar1 = getwc(DAT_140026480);
    }
    pFVar2 = (FILE *)(ulonglong)uVar1;
    if (((uVar1 == 0x3b) && (DAT_140026489 != '\0')) || (uVar1 == 0x23)) {
      uVar3 = (ulonglong)CONCAT11((char)(uVar1 >> 8),param_2);
      FUN_140007b64(param_2);
      DAT_140025c20 = DAT_140025c20 + 1;
      if (param_2 == '\0') {
        uVar1 = FUN_14000613c(uVar3,p_Var4,in_R8,in_R9);
      }
      else {
        uVar1 = getwc(DAT_140026480);
      }
      pFVar2 = (FILE *)(ulonglong)uVar1;
    }
  }
  ungetwc(_Ch,DAT_140026480);
  return 0x5c;
}



void FUN_1400081f0(undefined8 param_1,LPWIN32_FIND_DATAW param_2,FILETIME param_3,HANDLE *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  wint_t wVar4;
  ushort uVar5;
  int iVar6;
  size_t sVar7;
  FILETIME FVar8;
  void *pvVar9;
  char cVar10;
  FILETIME _Dst;
  undefined7 uVar12;
  ulonglong uVar11;
  IMAGE_DOS_HEADER *pIVar13;
  longlong lVar14;
  LPWIN32_FIND_DATAW p_Var15;
  FILETIME FVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  FILETIME FVar21;
  ulonglong uVar22;
  FILETIME _Src;
  bool bVar23;
  FILETIME local_res18;
  FILETIME local_res20;
  
  cVar10 = (char)param_1;
  FVar16 = (FILETIME)&DAT_140025c50;
  FVar8.dwLowDateTime = 0;
  FVar8.dwHighDateTime = 0;
  bVar3 = false;
  bVar2 = false;
  uVar20 = 0;
  local_res20 = (FILETIME)&DAT_140025c50;
  _Src = (FILETIME)&DAT_140025c50;
  FVar21 = param_3;
  local_res18 = param_3;
  wVar4 = FUN_14000613c(param_1,param_2,(LPWIN32_FIND_DATAW)param_3,param_4);
  uVar18 = (uint)wVar4;
  if (cVar10 == '\x18') {
    uVar17 = 2;
  }
  else {
    if ((wVar4 == 0x20) || (wVar4 == 9)) {
LAB_14000828b:
      uVar17 = 2;
      uVar5 = FUN_140008044('\0');
      goto LAB_140008295;
    }
    if (wVar4 == 0x5e) {
      wVar4 = FUN_14000613c(0x5e,param_2,(LPWIN32_FIND_DATAW)FVar21,param_4);
      if ((wVar4 == 0x20) || (wVar4 == 9)) goto LAB_14000828b;
      ungetwc(wVar4,(FILE *)DAT_140026480);
      uVar18 = 0x5e;
    }
    uVar17 = 1;
  }
  do {
    FVar21.dwLowDateTime = 0x3c;
    FVar21.dwHighDateTime = 0;
    if ((short)uVar18 == 0x22) {
      bVar2 = !bVar3;
      bVar3 = bVar2;
    }
    if ((short)uVar18 == 0x5e) {
      if ((bVar2) || (cVar10 != '\x19')) {
        wVar4 = FUN_14000613c(0x5e,(LPWIN32_FIND_DATAW)&IMAGE_DOS_HEADER_140000000,
                              (LPWIN32_FIND_DATAW)0x3c,param_4);
        ungetwc(wVar4,(FILE *)DAT_140026480);
        uVar18 = 0x5e;
        goto LAB_1400084f0;
      }
      wVar4 = FUN_14000613c(0x5e,(LPWIN32_FIND_DATAW)&IMAGE_DOS_HEADER_140000000,
                            (LPWIN32_FIND_DATAW)0x3c,param_4);
      uVar18 = (uint)wVar4;
      if (uVar18 < 0x2e) {
        if (uVar18 == 0x2d) goto LAB_140008352;
        if (uVar18 != 10) {
          if (uVar18 != 0x21) {
            if (0x21 < uVar18) {
              if (uVar18 < 0x24) goto LAB_140008419;
              if (((uVar18 - 0x24 & 0xfffffffa) == 0) && (uVar18 != 0x25)) goto LAB_140008352;
            }
            goto LAB_1400084f0;
          }
          goto LAB_140008352;
        }
      }
      else {
        if (uVar18 != 0x40) {
          if (uVar18 == 0x5c) goto LAB_140008419;
          if ((0x1f < uVar18 - 0x5e) || ((0xa0000001U >> (uVar18 - 0x5e & 0x1f) & 1) == 0))
          goto LAB_1400084f0;
        }
LAB_140008352:
        *(undefined2 *)FVar16 = 0x5e;
        FVar16 = (FILETIME)((longlong)FVar16 + 2);
        if (FVar16 == param_3) {
          if (DAT_140025c30 == (FILETIME)0x0) {
            uVar19 = 0x800;
            lVar14 = SUB168(ZEXT416(2) * ZEXT816(0x800),8);
            sVar7 = SUB168(ZEXT416(2) * ZEXT816(0x800),0);
            if (lVar14 != 0) {
              sVar7 = 0xffffffffffffffff;
            }
            DAT_140025c30 = (FILETIME)FUN_140009214(sVar7,lVar14,(ulonglong)FVar21,param_4);
            param_4 = (HANDLE *)0x400;
            wcsncpy_s((wchar_t *)DAT_140025c30,0x800,(wchar_t *)_Src,0x400);
            FVar16 = (FILETIME)((longlong)DAT_140025c30 + 0x800);
            param_3 = (FILETIME)((longlong)DAT_140025c30 + 0x1000);
            FVar21 = _Src;
          }
          else {
            uVar19 = uVar20 + 0x400;
            if ((uVar19 < uVar20) ||
               (FVar8 = (FILETIME)
                        FUN_140009274((void *)DAT_140025c30,uVar19 * 2,(ulonglong)FVar21,param_4),
               FVar8 == (FILETIME)0x0)) {
              FUN_140003898((ulonglong)DAT_140025c20,0x419,(ulonglong)FVar21,param_4);
            }
            FVar16 = (FILETIME)((longlong)FVar8 + uVar20 * 2);
            param_3 = (FILETIME)((longlong)FVar8 + uVar19 * 2);
            DAT_140025c30 = FVar8;
          }
          local_res20 = DAT_140025c30;
          uVar20 = uVar19;
          _Src = DAT_140025c30;
          local_res18 = param_3;
        }
      }
LAB_140008419:
      uVar19 = 0;
      goto LAB_140008423;
    }
LAB_1400084f0:
    FVar21.dwLowDateTime = 0x3c;
    FVar21.dwHighDateTime = 0;
    uVar11 = (ulonglong)uVar18;
    wVar4 = (wint_t)uVar18;
    uVar22 = uVar20;
    if (uVar18 < 0x3c) {
      if (uVar18 != 0x3b) {
        if (uVar18 == 9) {
LAB_140008563:
          uVar19 = 5;
          goto LAB_140008423;
        }
        if (uVar18 == 10) {
LAB_1400086a1:
          uVar19 = 6;
          goto LAB_140008423;
        }
        if (uVar18 == 0x20) goto LAB_140008563;
        if (uVar18 != 0x23) {
          if (uVar18 == 0x24) {
            uVar19 = 7;
          }
          else if (uVar18 == 0x28) {
            uVar19 = 8;
          }
          else if (uVar18 == 0x29) {
            uVar19 = 9;
          }
          else if (uVar18 == 0x2a) {
            uVar19 = 0xb;
          }
          else {
            uVar11 = (ulonglong)(uVar18 - 0x3a);
            if (uVar18 - 0x3a != 0) goto LAB_140008665;
            uVar19 = 4;
          }
          goto LAB_140008423;
        }
LAB_1400086f3:
        pIVar13 = &IMAGE_DOS_HEADER_140000000;
        if ((char)uVar17 == '\0') goto LAB_1400086fa;
        if (cVar10 != '\x19') {
          _Dst = (FILETIME)(uVar17 * 0xe);
          uVar17 = (ulonglong)(byte)(&UNK_140011a91)[(longlong)_Dst];
          goto LAB_14000843a;
        }
        goto LAB_1400087f9;
      }
      uVar19 = 0;
      if (((char)uVar17 != '\0') || (DAT_140026489 == '\0')) goto LAB_140008423;
LAB_1400086fa:
      pIVar13 = &IMAGE_DOS_HEADER_140000000;
      _Dst.dwLowDateTime = 0;
      _Dst.dwHighDateTime = 0;
      bVar3 = false;
      bVar2 = false;
      FUN_140007b64('\0');
      DAT_140025c20 = DAT_140025c20 + 1;
    }
    else {
      if (uVar18 < 0x45) {
        if (uVar18 == 0x44) goto LAB_1400085c0;
        if (uVar18 != 0x3c) {
          if (uVar18 == 0x3d) {
            uVar19 = 2;
            goto LAB_140008423;
          }
          if (0x3e < uVar18) {
            if (uVar18 < 0x41) goto LAB_140008641;
            if (uVar18 == 0x42) goto LAB_1400085c0;
          }
LAB_140008665:
          if (wVar4 < 0x80) {
            uVar12 = (undefined7)(uVar11 >> 8);
            bVar23 = (bool)((&DAT_140011640)[uVar18] & 1);
          }
          else {
            uVar19 = (ulonglong)uVar18;
            iVar6 = iswspace(wVar4);
            bVar23 = iVar6 == 0;
            uVar12 = (undefined7)(uVar19 >> 8);
          }
          uVar11 = CONCAT71(uVar12,-bVar23);
          uVar19 = (ulonglong)(byte)-(bVar23 != false) & 0xffffffffffffff0a;
          goto LAB_1400085c3;
        }
LAB_140008641:
        uVar19 = 0xc;
LAB_1400085d3:
        FVar21.dwLowDateTime = 0x3c;
        FVar21.dwHighDateTime = 0;
        if ((cVar10 != '\x18') || (wVar4 != 0x3c)) goto LAB_140008423;
        wVar4 = FUN_14000613c(uVar11,(LPWIN32_FIND_DATAW)&IMAGE_DOS_HEADER_140000000,
                              (LPWIN32_FIND_DATAW)0x3c,param_4);
        if (wVar4 == 0x3c) {
          FVar21 = (FILETIME)&local_res18;
          pIVar13 = (IMAGE_DOS_HEADER *)&local_res20;
          FVar16 = (FILETIME)
                   FUN_140006ee0((WCHAR *)FVar16,(LPWIN32_FIND_DATAW *)pIVar13,(wchar_t **)FVar21,
                                 param_4);
          DAT_140025c20 = DAT_140025c20 - 1;
          uVar19 = 6;
          uVar18 = 10;
          _Src = local_res20;
          param_3 = local_res18;
        }
        else {
          pIVar13 = (IMAGE_DOS_HEADER *)DAT_140026480;
          ungetwc(wVar4,(FILE *)DAT_140026480);
        }
        _Dst = (FILETIME)(uVar17 * 0xe + uVar19);
        uVar17 = (ulonglong)(byte)(&UNK_140011a90)[(longlong)_Dst];
      }
      else {
        if ((uVar18 != 0x46) && (uVar18 != 0x52)) {
          if (uVar18 != 0x5c) {
            if (uVar18 == 0xffff) goto LAB_1400086a1;
            goto LAB_140008665;
          }
          uVar19 = 3;
          goto LAB_140008423;
        }
LAB_1400085c0:
        uVar19 = 0xd;
LAB_1400085c3:
        if ((char)uVar19 == '\f') goto LAB_1400085d3;
        if ((char)uVar19 == '\x01') goto LAB_1400086f3;
LAB_140008423:
        pIVar13 = &IMAGE_DOS_HEADER_140000000;
        _Dst = (FILETIME)(uVar17 * 0xe + uVar19);
        uVar17 = (ulonglong)(byte)(&UNK_140011a90)[(longlong)_Dst];
        uVar22 = uVar20;
      }
LAB_14000843a:
      wVar4 = (wint_t)uVar18;
      if ((char)uVar17 == '@') {
LAB_1400087f9:
        p_Var15 = DAT_140026480;
        ungetwc(wVar4,(FILE *)DAT_140026480);
        break;
      }
      if ((uVar17 & 0x20) != 0) {
        _Dst.dwHighDateTime = 0;
        _Dst.dwLowDateTime = DAT_140025c20;
        FVar21.dwHighDateTime = 0;
        FVar21.dwLowDateTime = uVar18;
        pIVar13 = (IMAGE_DOS_HEADER *)(ulonglong)(((uint)uVar17 & 0xffffffdf) + 1000);
        FUN_140003898((ulonglong)_Dst,(ulonglong)pIVar13,(ulonglong)FVar21,param_4);
      }
      uVar20 = uVar22;
      if ((char)uVar17 == '\0') {
        DAT_140025c20 = DAT_140025c20 + 1;
        *(undefined2 *)((longlong)FVar16 + -2) = 0x20;
        DAT_140015041 = 1;
        uVar5 = FUN_14000613c(_Dst,(LPWIN32_FIND_DATAW)pIVar13,(LPWIN32_FIND_DATAW)FVar21,param_4);
        DAT_140015041 = 0;
        if ((uVar5 == 0x20) || (uVar5 == 9)) {
          uVar17 = 2;
          do {
            do {
              uVar5 = FUN_14000613c(_Dst,(LPWIN32_FIND_DATAW)pIVar13,(LPWIN32_FIND_DATAW)FVar21,
                                    param_4);
            } while (uVar5 == 0x20);
          } while (uVar5 == 9);
        }
        _Dst._2_6_ = 0;
        _Dst.dwLowDateTime._0_2_ = uVar5;
        pIVar13 = (IMAGE_DOS_HEADER *)DAT_140026480;
        ungetwc(uVar5,(FILE *)DAT_140026480);
      }
      else {
        *(wint_t *)FVar16 = wVar4;
        FVar16 = (FILETIME)((longlong)FVar16 + 2);
        if (FVar16 == param_3) {
          if (DAT_140025c30 == (FILETIME)0x0) {
            uVar20 = 0x800;
            lVar14 = SUB168(ZEXT816(2) * ZEXT816(0x800),8);
            sVar7 = SUB168(ZEXT816(2) * ZEXT816(0x800),0);
            if (lVar14 != 0) {
              sVar7 = 0xffffffffffffffff;
            }
            _Dst = (FILETIME)FUN_140009214(sVar7,lVar14,(ulonglong)FVar21,param_4);
            param_4 = (HANDLE *)0x400;
            pIVar13 = (IMAGE_DOS_HEADER *)0x800;
            FVar21 = _Src;
            DAT_140025c30 = _Dst;
            wcsncpy_s((wchar_t *)_Dst,0x800,(wchar_t *)_Src,0x400);
            FVar16 = (FILETIME)((longlong)DAT_140025c30 + 0x800);
            param_3 = (FILETIME)((longlong)DAT_140025c30 + 0x1000);
            local_res18 = param_3;
          }
          else {
            uVar20 = uVar22 + 0x400;
            if (uVar20 < uVar22) {
LAB_1400087e8:
              FUN_140003898((ulonglong)DAT_140025c20,0x419,(ulonglong)FVar21,param_4);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pIVar13 = (IMAGE_DOS_HEADER *)(uVar20 * 2);
            _Dst = DAT_140025c30;
            FVar8 = (FILETIME)
                    FUN_140009274((void *)DAT_140025c30,(size_t)pIVar13,(ulonglong)FVar21,param_4);
            if (FVar8 == (FILETIME)0x0) goto LAB_1400087e8;
            FVar16 = (FILETIME)((longlong)FVar8 + uVar22 * 2);
            param_3 = (FILETIME)((longlong)FVar8 + uVar20 * 2);
            DAT_140025c30 = FVar8;
            local_res18 = param_3;
          }
        }
      }
    }
    uVar5 = FUN_14000613c(_Dst,(LPWIN32_FIND_DATAW)pIVar13,(LPWIN32_FIND_DATAW)FVar21,param_4);
LAB_140008295:
    uVar18 = (uint)uVar5;
  } while( true );
  while( true ) {
    iVar6 = iswspace(*(wint_t *)((longlong)FVar8 + -2));
    FVar16 = (FILETIME)((longlong)FVar8 + -2);
    if (iVar6 == 0) break;
    FVar8 = FVar16;
    if ((ulonglong)FVar8 <= (ulonglong)_Src) break;
  }
  FVar16 = DAT_140025c30;
  *(undefined2 *)FVar8 = 0;
  if (FVar16 == (FILETIME)0x0) {
    pvVar9 = FUN_14000dcc4((void *)_Src,p_Var15,(ulonglong)FVar21,param_4);
  }
  else {
    pvVar9 = FUN_140009274((void *)FVar16,((longlong)FVar8 - (longlong)FVar16 >> 1) * 2 + 2,
                           (ulonglong)FVar21,param_4);
    if (pvVar9 == (void *)0x0) {
      return;
    }
  }
  DAT_140025c30 = (FILETIME)pvVar9;
  return;
}



void FUN_140008874(short *param_1,LPWIN32_FIND_DATAW param_2,LPWIN32_FIND_DATAW param_3,
                  HANDLE *param_4)

{
  short sVar1;
  char cVar2;
  bool bVar3;
  wint_t wVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined7 uVar9;
  LPWIN32_FIND_DATAW p_Var8;
  ushort _C;
  uint uVar10;
  LPWIN32_FIND_DATAW p_Var11;
  byte bVar12;
  
  sVar1 = *param_1;
  p_Var11 = (LPWIN32_FIND_DATAW)(param_1 + 1);
  bVar3 = false;
  cVar2 = '\0';
  uVar7 = 0x10;
  p_Var8 = param_2;
  if (sVar1 == 0x22) {
    cVar2 = '\x01';
    bVar12 = 0x10;
  }
  else if (sVar1 == 0x24) {
    bVar12 = 2;
  }
  else {
    bVar12 = (sVar1 != 0x7b) - 1U & 8;
  }
  do {
    wVar4 = FUN_14000613c(uVar7,p_Var8,param_3,param_4);
    uVar10 = (uint)wVar4;
    if (wVar4 == 0x5e) {
      wVar4 = FUN_14000613c(uVar7,p_Var8,param_3,param_4);
      uVar10 = (uint)wVar4;
      if ((wVar4 != 10) && (uVar10 != 0x23)) {
        if (uVar10 != 0x24) {
          if (wVar4 < 0x28) goto LAB_14000893a;
          if (0x29 < wVar4) {
            if (uVar10 == 0x5c) goto LAB_140008932;
            if ((0x1f < uVar10 - 0x5e) || ((0xa0000001U >> (uVar10 - 0x5e & 0x1f) & 1) == 0))
            goto LAB_14000893a;
          }
        }
        *(short *)&p_Var11->dwFileAttributes = 0x5e;
        p_Var11 = (LPWIN32_FIND_DATAW)((longlong)&p_Var11->dwFileAttributes + 2);
      }
LAB_140008932:
      p_Var8 = (LPWIN32_FIND_DATAW)((ulonglong)p_Var8 & 0xffffffffffffff00);
    }
    else {
LAB_14000893a:
      uVar9 = (undefined7)((ulonglong)p_Var8 >> 8);
      if (uVar10 < 0x2a) {
        if (uVar10 == 0x29) {
          p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,9);
        }
        else if (uVar10 == 9) {
LAB_140008998:
          p_Var8 = (LPWIN32_FIND_DATAW)(CONCAT71(uVar9,~-cVar2) & 0xffffffffffffff05);
        }
        else if (uVar10 == 10) {
LAB_140008a73:
          p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,6);
        }
        else {
          if (uVar10 == 0x20) goto LAB_140008998;
          if (uVar10 == 0x22) {
            p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,0xe);
            if (bVar12 == 0x12) {
              cVar2 = '\x01';
            }
          }
          else if (uVar10 == 0x23) {
            p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,1);
          }
          else if (uVar10 == 0x24) {
            p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,7);
          }
          else {
            if (uVar10 != 0x28) goto LAB_1400089f3;
            p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,8);
          }
        }
      }
      else if (uVar10 == 0x3a) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,4);
      }
      else if (uVar10 == 0x3b) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,3);
      }
      else if (uVar10 == 0x3d) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,2);
      }
      else if (uVar10 == 0x5c) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,0xd);
      }
      else if (uVar10 == 0x7b) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,0xb);
      }
      else if (uVar10 == 0x7d) {
        p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71(uVar9,0xc);
      }
      else {
        if (uVar10 == 0xffff) goto LAB_140008a73;
LAB_1400089f3:
        _C = (ushort)uVar10;
        if ((DAT_140025c38 & 0x80) == 0) {
          if (_C < 0x80) {
            bVar6 = (bool)((&DAT_140011640)[uVar10] & 1);
          }
          else {
            iVar5 = iswspace(_C);
            bVar6 = iVar5 == 0;
          }
          p_Var8 = (LPWIN32_FIND_DATAW)
                   (CONCAT71((int7)((ulonglong)p_Var8 >> 8),-(bVar6 != false)) & 0xffffffffffffff0a)
          ;
        }
        else {
          if (_C < 0x80) {
            bVar6 = (bool)((&DAT_140011640)[uVar10] & 1);
          }
          else {
            iVar5 = iswspace(_C);
            bVar6 = iVar5 == 0;
          }
          if (((bVar6 == false) && (_C != 0x2a)) && (_C != 0x40)) goto LAB_140008932;
          p_Var8 = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)p_Var8 >> 8),10);
        }
      }
    }
    uVar7 = (ulonglong)bVar12 * 0xf + ((ulonglong)p_Var8 & 0xff);
    bVar12 = (&DAT_140011970)[uVar7];
    if ((cVar2 != '\0') && (uVar7 = 0x10, bVar12 == 1)) {
      bVar12 = 0x10;
    }
    if (bVar3) {
      if ((char)p_Var8 == '\x06') {
        DAT_140025c20 = DAT_140025c20 + 1;
        DAT_140015041 = 1;
        wVar4 = FUN_14000613c(uVar7,p_Var8,param_3,param_4);
        DAT_140015041 = 0;
        uVar10 = (uint)wVar4;
        if ((wVar4 == 0x20) || (wVar4 == 9)) {
          bVar12 = 0x40;
          do {
            do {
              wVar4 = FUN_14000613c(uVar7,p_Var8,param_3,param_4);
              uVar10 = (uint)wVar4;
            } while (wVar4 == 0x20);
          } while (wVar4 == 9);
        }
        else {
          bVar12 = p_Var11 != (LPWIN32_FIND_DATAW)&DAT_140025c52;
        }
      }
      else {
        *(short *)&p_Var11->dwFileAttributes = 0x5c;
        p_Var11 = (LPWIN32_FIND_DATAW)((longlong)&p_Var11->dwFileAttributes + 2);
      }
    }
    bVar3 = false;
    if (param_2 <= p_Var11) {
      uVar7 = (ulonglong)DAT_140025c20;
      p_Var8 = (LPWIN32_FIND_DATAW)0x434;
      FUN_140003898(uVar7,0x434,(ulonglong)param_3,param_4);
    }
    if (bVar12 == 0x40) {
      ungetwc((wint_t)uVar10,DAT_140026480);
      *(short *)&p_Var11->dwFileAttributes = 0;
      FUN_14000bb94(param_1);
      return;
    }
    if ((bVar12 & 0x20) != 0) {
      uVar7 = (ulonglong)DAT_140025c20;
      param_3 = (LPWIN32_FIND_DATAW)(ulonglong)uVar10;
      p_Var8 = (LPWIN32_FIND_DATAW)(ulonglong)((bVar12 & 0xffffffdf) + 1000);
      FUN_140003898(uVar7,(ulonglong)p_Var8,(ulonglong)param_3,param_4);
    }
    if (bVar12 == 0xf) {
      bVar3 = true;
    }
    else {
      *(wint_t *)&p_Var11->dwFileAttributes = (wint_t)uVar10;
      p_Var11 = (LPWIN32_FIND_DATAW)((longlong)&p_Var11->dwFileAttributes + 2);
    }
  } while( true );
}



void FUN_140008bcc(LPWIN32_FIND_DATAW param_1,undefined8 param_2,LPWIN32_FIND_DATAW param_3,
                  HANDLE *param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  undefined auVar3 [16];
  wint_t _Ch;
  int iVar4;
  LPWIN32_FIND_DATAW p_Var5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  wchar_t *_Memory;
  wchar_t *pwVar8;
  LPWIN32_FIND_DATAW _Str1;
  longlong lVar9;
  size_t sVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined *puVar15;
  int iVar16;
  uint uVar17;
  short sVar19;
  wchar_t **ppwVar20;
  LPWIN32_FIND_DATAW p_Var21;
  ulonglong uVar22;
  bool bVar23;
  undefined auStack_2b8 [32];
  LPWIN32_FIND_DATAW local_298;
  undefined local_290 [600];
  ulonglong local_38;
  ulonglong uVar18;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_2b8;
  pvVar12 = (void *)0x0;
  if ((*(short *)&param_1->dwFileAttributes == 0) || (*(short *)&param_1->dwFileAttributes == 0x23))
  {
    FUN_140003898((ulonglong)DAT_140025c20,0x407,(ulonglong)param_3,param_4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar15 = &DAT_1400120d0;
  p_Var5 = (LPWIN32_FIND_DATAW)wcspbrk((wchar_t *)param_1,L"\t#");
  lVar11 = -1;
  if (p_Var5 == (LPWIN32_FIND_DATAW)0x0) {
    do {
      lVar9 = lVar11;
      lVar11 = lVar9 + 1;
    } while (param_1->cFileName[lVar9 + -0x15] != L'\0');
    p_Var5 = (LPWIN32_FIND_DATAW)(param_1->cFileName + lVar9 + -0x15);
  }
  else {
    sVar19 = 0;
    if (*(wchar_t *)&p_Var5->dwFileAttributes == L'#') {
      sVar19 = 0x23;
    }
    *(wchar_t *)&p_Var5->dwFileAttributes = L'\0';
    p_Var21 = p_Var5;
    if (sVar19 == 0) {
      while( true ) {
        p_Var21 = (LPWIN32_FIND_DATAW)((longlong)&p_Var21->dwFileAttributes + 2);
        wVar1 = *(wchar_t *)&p_Var21->dwFileAttributes;
        if ((wVar1 == L'\0') || (wVar1 == L'#')) break;
        if ((wVar1 != L' ') && (wVar1 != L'\t')) {
          puVar15 = (undefined *)0x409;
          param_3 = p_Var21;
          FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)p_Var21,param_4);
        }
      }
    }
  }
  do {
    p_Var21 = p_Var5;
    if (p_Var21 <= param_1) break;
    p_Var5 = (LPWIN32_FIND_DATAW)(p_Var21[-1].cAlternateFileName + 0xd);
  } while ((*(wchar_t *)&p_Var5->dwFileAttributes == L' ') ||
          (*(wchar_t *)&p_Var5->dwFileAttributes == L'\t'));
  *(wchar_t *)&p_Var21->dwFileAttributes = L'\0';
  if ((*(short *)&param_1->dwFileAttributes == 0x3c) &&
     (p_Var21[-1].cAlternateFileName[0xd] == L'>')) {
    pwVar8 = (wchar_t *)((longlong)&param_1->dwFileAttributes + 2);
    p_Var21[-1].cAlternateFileName[0xd] = L'\0';
    pwVar6 = FUN_14000e6a4(pwVar8);
    if (pwVar6 == pwVar8) {
      pwVar6 = (wchar_t *)FUN_14000dcc4(pwVar8,puVar15,(ulonglong)param_3,param_4);
    }
    puVar7 = FUN_14000918c((ushort *)L"INCLUDE");
    if (puVar7 != (undefined8 *)0x0) {
      pvVar12 = *(void **)(puVar7[2] + 8);
    }
    if (pvVar12 == (void *)0x0) {
      pwVar8 = (wchar_t *)0x0;
    }
    else {
      _Memory = (wchar_t *)FUN_14000dcc4(pvVar12,puVar15,(ulonglong)param_3,param_4);
      pwVar8 = FUN_14000e6a4(_Memory);
      if (pwVar8 != _Memory) {
        free(_Memory);
      }
    }
    param_4 = (HANDLE *)local_290;
    p_Var21 = (LPWIN32_FIND_DATAW)(local_290 + 8);
    _Str1 = (LPWIN32_FIND_DATAW)FUN_140005e6c(pwVar8,pwVar6,p_Var21,param_4);
    if (_Str1 == (LPWIN32_FIND_DATAW)0x0) {
      FUN_140003898((ulonglong)DAT_140025c20,0x41c,(ulonglong)pwVar6,param_4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pwVar8 != (wchar_t *)0x0) {
      free(pwVar8);
    }
    free(pwVar6);
  }
  else {
    if ((*(short *)&param_1->dwFileAttributes == 0x22) &&
       (p_Var21[-1].cAlternateFileName[0xd] == L'\"')) {
      p_Var21[-1].cAlternateFileName[0xd] = L'\0';
      param_1 = (LPWIN32_FIND_DATAW)((longlong)&param_1->dwFileAttributes + 2);
    }
    p_Var5 = (LPWIN32_FIND_DATAW)FUN_14000e6a4((wchar_t *)param_1);
    if (p_Var5 == param_1) {
      p_Var5 = (LPWIN32_FIND_DATAW)FUN_14000dcc4(param_1,puVar15,(ulonglong)param_3,param_4);
    }
    p_Var21 = (LPWIN32_FIND_DATAW)local_290;
    lVar11 = FUN_140005ca8((wchar_t *)p_Var5,(LPWIN32_FIND_DATAW)(local_290 + 8),(HANDLE *)p_Var21,
                           param_4);
    _Str1 = param_1;
    if (lVar11 == 0) {
      pwVar6 = wcspbrk((wchar_t *)p_Var5,L"\\/:");
      if (pwVar6 == (wchar_t *)0x0) {
        uVar13 = (ulonglong)(int)DAT_140036ce8;
        uVar17 = DAT_140036ce8;
        if (-1 < (int)DAT_140036ce8) {
          ppwVar20 = (wchar_t **)(&DAT_140036cf8 + uVar13 * 3);
          uVar18 = uVar13;
          uVar22 = uVar13;
          do {
            uVar17 = (uint)uVar18;
            pwVar6 = DAT_140026490;
            if (uVar17 != (uint)uVar13) {
              pwVar6 = *ppwVar20;
            }
            pwVar6 = (wchar_t *)FUN_140009078(pwVar6);
            if (pwVar6 != (wchar_t *)0x0) {
              lVar11 = -1;
              do {
                lVar14 = lVar11 + 1;
                lVar9 = lVar11 + -0x15;
                lVar11 = lVar14;
              } while (p_Var5->cFileName[lVar9] != L'\0');
              lVar11 = -1;
              do {
                lVar9 = lVar11;
                lVar11 = lVar9 + 1;
              } while (pwVar6[lVar11] != L'\0');
              uVar13 = lVar9 + 3 + lVar14;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar13;
              lVar11 = SUB168(ZEXT816(2) * auVar3,8);
              sVar10 = SUB168(ZEXT816(2) * auVar3,0);
              if (lVar11 != 0) {
                sVar10 = 0xffffffffffffffff;
              }
              local_298 = (LPWIN32_FIND_DATAW)
                          FUN_140009214(sVar10,lVar11,0xffffffffffffffff,param_4);
              wcscpy_s((wchar_t *)local_298,uVar13,pwVar6);
              wcscat_s((wchar_t *)local_298,uVar13,L"\\");
              _Str1 = local_298;
              wcscat_s((wchar_t *)local_298,uVar13,(wchar_t *)p_Var5);
              p_Var21 = (LPWIN32_FIND_DATAW)local_290;
              lVar11 = FUN_140005ca8((wchar_t *)_Str1,(LPWIN32_FIND_DATAW)(local_290 + 8),
                                     (HANDLE *)p_Var21,param_4);
              if (lVar11 != 0) {
                free(pwVar6);
                break;
              }
              free(pwVar6);
              free(_Str1);
            }
            uVar17 = uVar17 - 1;
            uVar18 = (ulonglong)uVar17;
            ppwVar20 = ppwVar20 + -3;
            uVar22 = uVar22 - 1;
            _Str1 = param_1;
            if ((longlong)uVar22 < 0) break;
            uVar13 = (ulonglong)DAT_140036ce8;
          } while( true );
        }
        free(p_Var5);
        p_Var5 = _Str1;
        if (-1 < (int)uVar17) goto LAB_140008f17;
      }
      p_Var21 = p_Var5;
      FUN_140003898((ulonglong)DAT_140025c20,0x41c,(ulonglong)p_Var21,param_4);
    }
  }
LAB_140008f17:
  iVar16 = 0;
  if (0 < (int)DAT_140036ce8) {
    ppwVar20 = (wchar_t **)&DAT_140036cf8;
    do {
      iVar4 = _wcsicmp((wchar_t *)_Str1,*ppwVar20);
      if (iVar4 == 0) {
        p_Var21 = _Str1;
        FUN_140003898((ulonglong)DAT_140025c20,0x430,(ulonglong)_Str1,param_4);
      }
      iVar16 = iVar16 + 1;
      ppwVar20 = ppwVar20 + 3;
    } while (iVar16 < (int)DAT_140036ce8);
  }
  lVar11 = (longlong)(int)DAT_140036ce8;
  DAT_140036ce8 = DAT_140036ce8 + 1;
  bVar23 = DAT_14002648b != '\0';
  DAT_140025c24 = 0;
  *(FILE **)(&DAT_140036d00 + lVar11 * 0x18) = DAT_140026480;
  *(uint *)(&DAT_140036cf0 + lVar11 * 0x18) = DAT_140025c20;
  (&DAT_140036cf8)[lVar11 * 3] = DAT_140026490;
  if (bVar23) {
    FUN_14000bfe0(L"Included: %s\n",_Str1,p_Var21,param_4);
  }
  pwVar6 = L"rt,ccs=unicode";
  DAT_140026480 = (FILE *)FUN_14000fd2c((wchar_t *)_Str1,L"rt,ccs=unicode");
  if (DAT_140026480 == (FILE *)0x0) {
    pwVar6 = (wchar_t *)0x41c;
    p_Var21 = _Str1;
    FUN_140003898((ulonglong)DAT_140025c20,0x41c,(ulonglong)_Str1,param_4);
  }
  DAT_140026490 = (wchar_t *)FUN_14000dcc4(_Str1,pwVar6,(ulonglong)p_Var21,param_4);
  DAT_140025c20 = 1;
  DAT_140015041 = 1;
  _Ch = FUN_14000613c(_Str1,(LPWIN32_FIND_DATAW)pwVar6,p_Var21,param_4);
  if ((_Ch == 0x20) || (_Ch == 9)) {
    DAT_140015041 = 0;
  }
  else {
    DAT_140015041 = 1;
    ungetwc(_Ch,DAT_140026480);
    DAT_140025c20 = DAT_140025c20 + -1;
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_2b8);
  return;
}



void FUN_140009078(wchar_t *param_1)

{
  undefined auVar1 [16];
  longlong lVar2;
  size_t sVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ulonglong _SIZE;
  ulonglong uVar7;
  undefined auStackY_278 [32];
  wchar_t local_228 [8];
  wchar_t local_218 [256];
  ulonglong local_18;
  longlong lVar3;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStackY_278;
  pwVar5 = local_218;
  uVar7 = 3;
  _wsplitpath_s(param_1,local_228,3,pwVar5,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (local_228[lVar6] != L'\0');
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (local_218[lVar2] != L'\0');
  _SIZE = lVar3 + 2 + lVar6;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = _SIZE;
  lVar6 = SUB168(ZEXT816(2) * auVar1,8);
  sVar4 = SUB168(ZEXT816(2) * auVar1,0);
  if (lVar6 != 0) {
    sVar4 = 0xffffffffffffffff;
  }
  pwVar5 = (wchar_t *)FUN_140009214(sVar4,lVar6,uVar7,pwVar5);
  _wmakepath_s(pwVar5,_SIZE,local_228,local_218,(wchar_t *)0x0,(wchar_t *)0x0);
  lVar6 = -1;
  do {
    lVar2 = lVar6;
    lVar6 = lVar2 + 1;
  } while (pwVar5[lVar2 + 1] != L'\0');
  if ((pwVar5[lVar2] == L'\\') || (pwVar5[lVar2] == L'/')) {
    pwVar5[lVar2] = L'\0';
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_278);
  return;
}



undefined8 * FUN_14000918c(ushort *param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  short *psVar6;
  ushort *puVar7;
  longlong lVar8;
  
  uVar3 = *param_1;
  puVar4 = (undefined8 *)0x0;
  puVar7 = param_1;
  if (uVar3 == 0) {
    DAT_140037098 = &DAT_1400364d0;
  }
  else {
    do {
      uVar5 = (int)puVar4 + (uint)uVar3;
      uVar3 = puVar7[1];
      puVar4 = (undefined8 *)(ulonglong)uVar5;
      puVar7 = puVar7 + 1;
    } while (uVar3 != 0);
    DAT_140037098 = &DAT_1400364d0 + (byte)uVar5;
    puVar4 = DAT_140037098;
    while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
      psVar6 = (short *)puVar4[1];
      lVar8 = (longlong)param_1 - (longlong)psVar6;
      do {
        sVar1 = *psVar6;
        sVar2 = *(short *)((longlong)psVar6 + lVar8);
        if (sVar1 != sVar2) break;
        psVar6 = psVar6 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        if ((*(byte *)(puVar4 + 3) & 0x10) != 0) {
          puVar4 = (undefined8 *)0x0;
        }
        return puVar4;
      }
    }
  }
  return (undefined8 *)0x0;
}



void * FUN_140009214(size_t param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_140003898((ulonglong)DAT_140025c24,0x41b,param_3,param_4);
  }
  return pvVar1;
}



void * FUN_140009244(size_t param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  void *_Dst;
  
  _Dst = FUN_140009214(param_1,param_2,param_3,param_4);
  memset(_Dst,0,param_1);
  return _Dst;
}



void * FUN_140009274(void *param_1,size_t param_2,ulonglong param_3,undefined8 param_4)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = FUN_140009214(param_2,param_2,param_3,param_4);
  }
  else {
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_140003898((ulonglong)DAT_140025c24,0x41b,param_3,param_4);
    }
  }
  return pvVar1;
}



// WARNING: Type propagation algorithm not settling

void FUN_1400092b4(wchar_t *param_1,wchar_t *param_2)

{
  code *pcVar1;
  errno_t eVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  HMODULE pHVar7;
  FARPROC pFVar8;
  INT_PTR IVar9;
  HANDLE pvVar10;
  wchar_t *lpMem;
  uint uVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  ushort *puVar14;
  longlong lVar15;
  undefined auStack_798 [32];
  undefined4 local_778;
  DWORD local_768;
  undefined2 local_764 [2];
  uint local_760;
  undefined4 local_75c;
  DWORD local_758 [2];
  undefined local_750 [8];
  wchar_t *local_748 [2];
  HMODULE *local_738;
  undefined2 *local_730;
  wchar_t *local_728;
  rsize_t local_720;
  wchar_t *local_718;
  wchar_t **local_710;
  DWORD *local_708;
  HMODULE **local_700;
  undefined2 **local_6f8;
  wchar_t **local_6f0;
  rsize_t *local_6e8;
  byte local_6d8;
  WCHAR local_6ac;
  WCHAR local_6aa;
  WCHAR local_6a8;
  ushort local_488 [4];
  WCHAR local_480;
  undefined8 local_47e;
  undefined2 local_476;
  wchar_t local_470 [12];
  wchar_t local_458 [263];
  wchar_t awStack_24a [265];
  ulonglong local_38;
  longlong lVar16;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_798;
  uVar11 = 0;
  local_720 = 0;
  local_730 = &DAT_14003de00;
  local_738 = (HMODULE *)&DAT_14003ddf8;
  local_728 = (wchar_t *)0x0;
  local_758[0] = 0x60;
  local_748[0] = param_2;
  if (((*param_1 == L'\0') || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0'))
  goto LAB_1400098cb;
  DAT_14003ddf8 = 0;
  eVar2 = wcsncpy_s(awStack_24a + 1,0x104,param_1,0xffffffffffffffff);
  if (eVar2 != 0) goto LAB_1400098cb;
  lVar16 = -1;
  do {
    lVar6 = lVar16;
    lVar16 = lVar6 + 1;
  } while (awStack_24a[lVar6 + 2] != L'\0');
  if ((awStack_24a[lVar6 + 1] != L'\\') &&
     (eVar2 = wcsncat_s(awStack_24a + 1,0x104,L"\\",0xffffffffffffffff), eVar2 != 0))
  goto LAB_1400098cb;
  local_718 = awStack_24a + 1;
  local_768 = 0x80070002;
  local_710 = local_748;
  local_480 = L'\0';
  local_708 = local_758;
  local_700 = &local_738;
  local_6f8 = &local_730;
  local_6f0 = &local_728;
  local_6e8 = &local_720;
  local_47e = 0;
  local_476 = 0;
  DVar3 = GetEnvironmentVariableW(L"VSLANG",&local_480,6);
  if ((DVar3 - 1 < 5) &&
     ((local_480 != L'\0' && (FUN_1400098fc(&local_718,&local_480,10,&local_768), local_768 == 0))))
  goto LAB_1400098cb;
  if (DAT_14003d140 == (PVOID)0x0) {
    pHVar7 = GetModuleHandleW(L"kernel32.dll");
    if (pHVar7 != (HMODULE)0x0) {
      pFVar8 = GetProcAddress(pHVar7,"SetThreadPreferredUILanguages");
      DAT_14003d140 = EncodePointer(pFVar8);
      goto LAB_1400094af;
    }
LAB_1400096a8:
    local_488[0] = GetUserDefaultUILanguage();
    if (((local_488[0] & 0x3ff) == 1) || ((local_488[0] & 0x3ff) == 0xd)) {
      local_488[0] = 0x409;
    }
    puVar14 = local_488;
    local_488[2] = 0x409;
    local_488[1] = local_488[0] & 0x3ff | 0x400;
    do {
      _itow_s((uint)*puVar14,local_470,6,10);
      if (local_470[0] != L'\0') {
        FUN_1400098fc(&local_718,local_470,10,&local_768);
      }
      if (local_768 == 0) goto LAB_1400098cb;
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 1;
    } while (uVar11 < 3);
  }
  else {
    pFVar8 = (FARPROC)DecodePointer(DAT_14003d140);
LAB_1400094af:
    if (pFVar8 == (FARPROC)0x0) goto LAB_1400096a8;
    DVar3 = GetEnvironmentVariableW(L"VS_UNICODE_OUTPUT",(LPWSTR)0x0,0);
    if ((DVar3 == 0) && (IVar9 = (*pFVar8)(0x100,0,0), (int)IVar9 == 0)) goto LAB_1400098cb;
    local_760 = 0;
    local_75c = 0;
    if (DAT_14003d138 == (PVOID)0x0) {
      pHVar7 = GetModuleHandleW(L"kernel32.dll");
      if (pHVar7 != (HMODULE)0x0) {
        pFVar8 = GetProcAddress(pHVar7,"GetThreadPreferredUILanguages");
        DAT_14003d138 = EncodePointer(pFVar8);
        goto LAB_14000953c;
      }
    }
    else {
      pFVar8 = (FARPROC)DecodePointer(DAT_14003d138);
LAB_14000953c:
      if (pFVar8 != (FARPROC)0x0) {
        IVar9 = (*pFVar8)(0x34,&local_75c,0,&local_760);
        if ((int)IVar9 == 0) goto LAB_1400098cb;
        uVar12 = (ulonglong)local_760;
        pvVar10 = GetProcessHeap();
        lpMem = (wchar_t *)HeapAlloc(pvVar10,0,uVar12 * 2);
        if ((lpMem == (wchar_t *)0x0) ||
           (IVar9 = (*pFVar8)(0x34,&local_75c,lpMem,&local_760), (int)IVar9 == 0))
        goto LAB_1400098cb;
        if (*lpMem != L'\0') {
          pwVar13 = lpMem;
          if (*lpMem == L'\0') goto LAB_1400095d0;
          do {
            FUN_1400098fc(&local_718,pwVar13,0x10,&local_768);
LAB_1400095d0:
          } while ((local_768 != 0) && (pwVar13 = pwVar13 + 5, *pwVar13 != L'\0'));
        }
        pvVar10 = GetProcessHeap();
        HeapFree(pvVar10,0,lpMem);
        if (local_768 == 0) goto LAB_1400098cb;
      }
    }
  }
  FUN_1400098fc(&local_718,L"1033",10,&local_768);
  if (((local_768 != 0) &&
      (eVar2 = wcsncpy_s(local_458,0x104,awStack_24a + 1,0xffffffffffffffff), eVar2 == 0)) &&
     (eVar2 = wcsncat_s(local_458,0x104,L"*",0xffffffffffffffff), eVar2 == 0)) {
    pvVar10 = FindFirstFileW(local_458,(LPWIN32_FIND_DATAW)&local_6d8);
    if (pvVar10 == (HANDLE)0xffffffffffffffff) {
      GetLastError();
    }
    else {
      lVar16 = -1;
      do {
        lVar15 = lVar16 + 1;
        lVar6 = lVar16 + 2;
        lVar16 = lVar15;
      } while (awStack_24a[lVar6] != L'\0');
      do {
        do {
          do {
            BVar4 = FindNextFileW(pvVar10,(LPWIN32_FIND_DATAW)&local_6d8);
            if (BVar4 == 0) goto LAB_1400098b2;
          } while ((((local_6d8 & 0x10) == 0) || ((local_6ac == L'.' && (local_6aa == L'\0')))) ||
                  ((local_6ac == L'.' && ((local_6aa == L'.' && (local_6a8 == L'\0'))))));
          local_778 = 1;
          iVar5 = swscanf_s(&local_6ac,L"%hu%c",local_764,local_750);
        } while (iVar5 == -1);
        if (0x207 < (ulonglong)(lVar15 * 2)) {
          __report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_458[lVar15] = L'\0';
        eVar2 = wcsncat_s(local_458,0x104,&local_6ac,0xffffffffffffffff);
      } while ((((eVar2 != 0) ||
                (eVar2 = wcsncat_s(local_458,0x104,L"\\",0xffffffffffffffff), eVar2 != 0)) ||
               (eVar2 = wcsncat_s(local_458,0x104,local_748[0],0xffffffffffffffff), eVar2 != 0)) ||
              (pHVar7 = LoadLibraryExW(local_458,(HANDLE)0x0,local_758[0]), pHVar7 == (HMODULE)0x0))
      ;
      *local_738 = pHVar7;
      if (local_730 != (undefined2 *)0x0) {
        *local_730 = local_764[0];
      }
      if (local_728 != (wchar_t *)0x0) {
        wcscpy_s(local_728,local_720,local_458);
      }
LAB_1400098b2:
      FindClose(pvVar10);
    }
  }
LAB_1400098cb:
  __security_check_cookie(local_38 ^ (ulonglong)auStack_798);
  return;
}



void FUN_1400098fc(wchar_t **param_1,wchar_t *param_2,int param_3,DWORD *param_4)

{
  ulong uVar1;
  errno_t eVar2;
  DWORD DVar3;
  HMODULE pHVar4;
  uint uVar5;
  undefined auStack_298 [32];
  wchar_t *local_278;
  wchar_t local_270 [12];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStack_298;
  uVar1 = wcstoul(param_2,&local_278,param_3);
  if (*local_278 == L'\0') {
    _itow_s(uVar1 & 0xffff,local_270,6,10);
    eVar2 = wcsncpy_s(local_258,0x104,*param_1,0xffffffffffffffff);
    if (eVar2 == 0) {
      eVar2 = wcsncat_s(local_258,0x104,local_270,0xffffffffffffffff);
      if (eVar2 == 0) {
        eVar2 = wcsncat_s(local_258,0x104,L"\\",0xffffffffffffffff);
        if (eVar2 == 0) {
          eVar2 = wcsncat_s(local_258,0x104,*(wchar_t **)param_1[1],0xffffffffffffffff);
          if (eVar2 == 0) {
            pHVar4 = LoadLibraryExW(local_258,(HANDLE)0x0,*(DWORD *)param_1[2]);
            if (pHVar4 == (HMODULE)0x0) {
              if (*param_4 == 0x80070002) {
                DVar3 = GetLastError();
                uVar5 = DVar3 & 0xffff | 0x80070000;
                if ((int)DVar3 < 1) {
                  uVar5 = DVar3;
                }
                *param_4 = uVar5;
              }
            }
            else {
              **(HMODULE **)param_1[3] = pHVar4;
              if (*(undefined2 **)param_1[4] != (undefined2 *)0x0) {
                **(undefined2 **)param_1[4] = (short)uVar1;
              }
              if (*(wchar_t **)param_1[5] != (wchar_t *)0x0) {
                wcscpy_s(*(wchar_t **)param_1[5],*(rsize_t *)param_1[6],local_258);
              }
              *param_4 = 0;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStack_298);
  return;
}



void _guard_check_icall(void)

{
  return;
}



bool FUN_140009a74(void)

{
  ulonglong uVar1;
  
  if (0 < DAT_140037094) {
    if (DAT_140037094 < 3) {
      return false;
    }
    if (DAT_140037094 == 3) {
      uVar1 = FUN_140009aa8();
      return (char)uVar1 == '\0';
    }
  }
  return true;
}



ulonglong FUN_140009aa8(void)

{
  DWORD DVar1;
  LSTATUS LVar2;
  LSTATUS LVar3;
  undefined4 extraout_var;
  ulonglong uVar4;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DWORD local_res8 [2];
  DWORD local_res10 [2];
  int local_res18 [2];
  HKEY local_res20;
  ulonglong extraout_RAX;
  
  DVar1 = GetVersion();
  if ((byte)DVar1 < 6) {
    LVar2 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"Software\\Microsoft\\VisualStudio\\9.0\\General",0,0x20019,&local_res20)
    ;
    uVar4 = CONCAT44(extraout_var_00,LVar2);
    if (LVar2 == 0) {
      local_res8[0] = 4;
      LVar2 = RegQueryValueExW(local_res20,L"UserCanAutoSendErrorReport",(LPDWORD)0x0,local_res10,
                               (LPBYTE)local_res18,local_res8);
      LVar3 = RegCloseKey(local_res20);
      extraout_RAX = CONCAT44(extraout_var_01,LVar3);
      uVar4 = extraout_RAX;
      if (((LVar2 == 0) && (local_res10[0] == 4)) && (local_res8[0] == 4)) {
        return CONCAT71((int7)(extraout_RAX >> 8),local_res18[0] == 1);
      }
    }
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,DVar1) >> 8),1);
  }
  return uVar4;
}



ulonglong FUN_140009b54(LPCWSTR param_1)

{
  LSTATUS LVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  DWORD local_res10 [2];
  DWORD local_res18 [2];
  HKEY local_res20;
  ulonglong extraout_RAX;
  
  LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,
                        L"Software\\Wow6432node\\Microsoft\\PCHealth\\ErrorReporting\\DW\\Installed"
                        ,0,0x20019,&local_res20);
  uVar4 = CONCAT44(extraout_var,LVar1);
  if (LVar1 == 0) {
    local_res18[0] = 0x208;
    LVar1 = RegQueryValueExW(local_res20,L"DW0201",(LPDWORD)0x0,local_res10,(LPBYTE)param_1,
                             local_res18);
    LVar2 = RegCloseKey(local_res20);
    extraout_RAX = CONCAT44(extraout_var_00,LVar2);
    param_1[0x103] = L'\0';
    uVar4 = extraout_RAX;
    if (LVar1 == 0) {
      if (local_res10[0] == 2) {
        DVar3 = ExpandEnvironmentStringsW(param_1,param_1,0x104);
        uVar4 = (ulonglong)(DVar3 - 1);
        if (DVar3 - 1 < 0x104) {
LAB_140009c04:
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
      else if (local_res10[0] == 1) goto LAB_140009c04;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// Library Function - Single Match
//  bool __cdecl InitializeWatsonSharedMem(void)
// 
// Library: Visual Studio 2017 Release

bool __cdecl InitializeWatsonSharedMem(void)

{
  undefined extraout_AL;
  undefined7 extraout_var;
  LPVOID pvVar2;
  HANDLE pvVar1;
  undefined7 extraout_var_00;
  
  pvVar1 = CreateFileMappingW((HANDLE)0xffffffffffffffff,(LPSECURITY_ATTRIBUTES)&DAT_14003d0f8,4,0,
                              0x9cb8,(LPCWSTR)0x0);
  extraout_AL = SUB81(pvVar1,0);
  DAT_1400370a0 = (HANDLE)CONCAT71(extraout_var,extraout_AL);
  if (CONCAT71(extraout_var,extraout_AL) != 0) {
    pvVar2 = MapViewOfFileEx((HANDLE)CONCAT71(extraout_var,extraout_AL),6,0,0,0,(LPVOID)0x0);
    DAT_1400370a8 = CONCAT71(extraout_var_00,(char)pvVar2);
    if (CONCAT71(extraout_var_00,(char)pvVar2) != 0) {
      return true;
    }
    CloseHandle(DAT_1400370a0);
    DAT_1400370a0 = (HANDLE)0x0;
  }
  return false;
}



// WARNING: Removing unreachable block (ram,0x000140009d35)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_140009c94(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  HANDLE hHandle;
  HANDLE hHandle_00;
  HANDLE hSourceProcessHandle;
  wchar_t **ppwVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  bool bVar9;
  HANDLE local_res10;
  
  local_res10 = (HANDLE)0x0;
  uVar8 = 1;
  if (DAT_14003d128 != (HANDLE)0x0) {
    return 1;
  }
  bVar9 = true;
  if (DAT_140037094 < 1) {
LAB_140009cf1:
    if (bVar9) {
      return 1;
    }
  }
  else if (2 < DAT_140037094) {
    if (DAT_140037094 == 3) {
      uVar4 = FUN_140009aa8();
      bVar9 = (char)uVar4 == '\0';
    }
    goto LAB_140009cf1;
  }
  _DAT_14003d0f8 = 0x18;
  _DAT_14003d100 = 0;
  _DAT_14003d108 = 1;
  if ((DAT_1400370a8 == (undefined4 *)0x0) && (bVar9 = InitializeWatsonSharedMem(), !bVar9)) {
    return 1;
  }
  uVar4 = FUN_140009b54((LPCWSTR)&DAT_14003d950);
  if ((char)uVar4 == '\0') {
    return 1;
  }
  DAT_14003d128 = CreateEventW((LPSECURITY_ATTRIBUTES)&DAT_14003d0f8,0,0,(LPCWSTR)0x0);
  hHandle = CreateEventW((LPSECURITY_ATTRIBUTES)&DAT_14003d0f8,0,0,(LPCWSTR)0x0);
  hHandle_00 = CreateMutexW((LPSECURITY_ATTRIBUTES)&DAT_14003d0f8,0,(LPCWSTR)0x0);
  hSourceProcessHandle = GetCurrentProcess();
  BVar2 = DuplicateHandle(hSourceProcessHandle,hSourceProcessHandle,hSourceProcessHandle,
                          &local_res10,0x1fffff,1,0);
  puVar7 = DAT_1400370a8;
  if ((BVar2 != 0) && (DAT_14003d128 != (HANDLE)0x0)) {
    if (hHandle == (HANDLE)0x0) goto LAB_14000a0fe;
    if ((hHandle_00 != (HANDLE)0x0) && (local_res10 != (HANDLE)0x0)) {
      memset(DAT_1400370a8,0,0x9cb8);
      *(HANDLE *)(puVar7 + 0x10) = local_res10;
      DVar3 = GetCurrentProcessId();
      DAT_1400370a8[2] = DVar3;
      DVar3 = GetCurrentThreadId();
      puVar7 = DAT_1400370a8;
      DAT_1400370a8[3] = DVar3;
      *(HANDLE *)(puVar7 + 0xc) = DAT_14003d128;
      *(HANDLE *)(puVar7 + 8) = hHandle;
      *(HANDLE *)(puVar7 + 0xe) = hHandle_00;
      *puVar7 = 0x9cb8;
      puVar7[1] = 0x20000;
      *(longlong **)(puVar7 + 6) = param_1;
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(*param_1 + 0x10);
      DVar3 = GetVersion();
      puVar7 = DAT_1400370a8;
      if (DAT_140037094 == 1) {
        *(undefined8 *)(DAT_1400370a8 + 0x12) = 0;
      }
      else {
        if (DAT_140037094 == 2) {
          DAT_1400370a8[0x12] = 8;
        }
        else {
          if (DAT_140037094 != 3) goto LAB_14000a0f0;
          DAT_1400370a8[0x12] = 0;
        }
        puVar7[0x13] = (uint)((byte)DVar3 < 6);
      }
      cVar1 = DAT_140036cef;
      puVar7[0x14] = 0;
      puVar7[0x16] = 0;
      puVar7[0x18] = 1;
      puVar7[0x15] = ~-(uint)(cVar1 != '\0') & 0x10 | 4;
      puVar7[0x1a] = -(uint)(cVar1 != '\0') & 0x10 | 1;
      wcsncpy_s((wchar_t *)(puVar7 + 0x872),0x38,(wchar_t *)PTR_DAT_140015090,0xffffffffffffffff);
      ppwVar5 = (wchar_t **)__p__wpgmptr();
      wcsncpy_s((wchar_t *)(DAT_1400370a8 + 0x9d),0x104,*ppwVar5,0xffffffffffffffff);
      puVar7 = DAT_1400370a8;
      if (DAT_1400370a8 + 0x11f == (undefined4 *)0x0) {
        piVar6 = _errno();
        *piVar6 = 0x16;
        _invalid_parameter_noinfo();
        puVar7 = DAT_1400370a8;
      }
      else {
        DAT_1400370a8[0x11f] = 0x4d4c4b48;
        puVar7[0x120] = 0x666f535c;
        puVar7[0x121] = 0x72617774;
        puVar7[0x122] = 0x694d5c65;
        puVar7[0x123] = 0x736f7263;
        puVar7[0x124] = 0x5c74666f;
        puVar7[0x125] = 0x65746e49;
        puVar7[0x126] = 0x74656e72;
        puVar7[0x127] = 0x70784520;
        puVar7[0x128] = 0x65726f6c;
        puVar7[0x129] = 0x65525c72;
        puVar7[0x12a] = 0x74736967;
        puVar7[299] = 0x69746172;
        puVar7[300] = 0x445c6e6f;
        puVar7[0x12d] = 0x74696769;
        puVar7[0x12e] = 0x72506c61;
        *(undefined8 *)(puVar7 + 0x12f) = 0x4449746375646f;
      }
      wcsncpy_s((wchar_t *)(puVar7 + 0x1f0),0x104,(wchar_t *)PTR_DAT_140015098,0xffffffffffffffff);
      FID_conflict_sprintf_s((wchar_t *)&DAT_14003db60,0x104,L"dw20.exe -x -s %I64u");
      memset(&DAT_14003dd70,0,0x68);
      _DAT_14003dd70 = 0x68;
      BVar2 = CreateProcessW((LPCWSTR)&DAT_14003d950,(LPWSTR)&DAT_14003db60,
                             (LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000020,
                             (LPVOID)0x0,(LPCWSTR)0x0,(LPSTARTUPINFOW)&DAT_14003dd70,
                             (LPPROCESS_INFORMATION)&DAT_14003ddd8);
      uVar8 = 1;
      if (BVar2 != 0) {
        CloseHandle(DAT_14003ddd8);
        CloseHandle(DAT_14003dde0);
        bVar9 = true;
        do {
          DVar3 = WaitForSingleObject(DAT_14003d128,20000);
          if (DVar3 == 0) {
            DVar3 = WaitForSingleObject(hHandle,1);
            if (DVar3 == 0) {
              bVar9 = false;
            }
          }
          else {
            DVar3 = WaitForSingleObject(hHandle_00,20000);
            if (DVar3 == 0x102) break;
            if (DVar3 == 0x80) {
              ReleaseMutex(hHandle_00);
              break;
            }
            DVar3 = WaitForSingleObject(DAT_14003d128,1);
            if (DVar3 == 0) {
              DVar3 = WaitForSingleObject(hHandle,1);
              bVar9 = (bool)(bVar9 & DVar3 != 0);
            }
            else {
              SetEvent(hHandle);
              bVar9 = false;
            }
            ReleaseMutex(hHandle_00);
          }
        } while (bVar9);
        uVar8 = 1;
        if ((*(byte *)(DAT_1400370a8 + 0x26a8) & 0x10) != 0) {
          uVar8 = 0;
        }
      }
    }
  }
LAB_14000a0f0:
  if (hHandle != (HANDLE)0x0) {
    CloseHandle(hHandle);
  }
LAB_14000a0fe:
  if (hHandle_00 != (HANDLE)0x0) {
    CloseHandle(hHandle_00);
  }
  if (local_res10 != (HANDLE)0x0) {
    CloseHandle(local_res10);
  }
  if (DAT_14003d128 != (HANDLE)0x0) {
    CloseHandle(DAT_14003d128);
    DAT_14003d128 = (HANDLE)0x0;
  }
  if (DAT_1400370a8 != (undefined4 *)0x0) {
    UnmapViewOfFile(DAT_1400370a8);
    DAT_1400370a8 = (undefined4 *)0x0;
  }
  if (DAT_1400370a0 != (HANDLE)0x0) {
    CloseHandle(DAT_1400370a0);
    DAT_1400370a0 = (HANDLE)0x0;
  }
  if (DAT_140015042 == '\0') {
    return uVar8;
  }
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined4 FUN_14000a198(int **param_1)

{
  undefined4 uVar1;
  
  if ((**param_1 != -0x7ffffffd) && (DAT_140037092 == '\0')) {
    DAT_140037092 = 1;
    PTR_DAT_140015098 = (undefined *)u_msvcr140_dll_140012ef0;
    PTR_DAT_140015090 = &DAT_140012ea0;
    DAT_140015042 = 0;
    uVar1 = FUN_140009c94((longlong *)param_1);
    return uVar1;
  }
  return 0;
}



uint FUN_14000a1e0(int **param_1,int *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  piVar7 = param_2;
  piVar9 = param_3;
  if (DAT_140026488 == '\0') {
    FUN_140003a8c(param_1,param_2,param_3,param_4);
  }
  FUN_14000bfe0(L"\nNMAKE : fatal error U1038: Internal error\n",piVar7,piVar9,param_4);
  FUN_14000bfb0();
  piVar7 = *param_1;
  iVar1 = piVar7[1];
  iVar2 = piVar7[2];
  iVar3 = piVar7[3];
  *param_2 = *piVar7;
  param_2[1] = iVar1;
  param_2[2] = iVar2;
  param_2[3] = iVar3;
  iVar1 = piVar7[5];
  iVar2 = piVar7[6];
  iVar3 = piVar7[7];
  param_2[4] = piVar7[4];
  param_2[5] = iVar1;
  param_2[6] = iVar2;
  param_2[7] = iVar3;
  iVar1 = piVar7[9];
  iVar2 = piVar7[10];
  iVar3 = piVar7[0xb];
  param_2[8] = piVar7[8];
  param_2[9] = iVar1;
  param_2[10] = iVar2;
  param_2[0xb] = iVar3;
  iVar1 = piVar7[0xd];
  iVar2 = piVar7[0xe];
  iVar3 = piVar7[0xf];
  param_2[0xc] = piVar7[0xc];
  param_2[0xd] = iVar1;
  param_2[0xe] = iVar2;
  param_2[0xf] = iVar3;
  iVar1 = piVar7[0x11];
  iVar2 = piVar7[0x12];
  iVar3 = piVar7[0x13];
  param_2[0x10] = piVar7[0x10];
  param_2[0x11] = iVar1;
  param_2[0x12] = iVar2;
  param_2[0x13] = iVar3;
  iVar1 = piVar7[0x15];
  iVar2 = piVar7[0x16];
  iVar3 = piVar7[0x17];
  param_2[0x14] = piVar7[0x14];
  param_2[0x15] = iVar1;
  param_2[0x16] = iVar2;
  param_2[0x17] = iVar3;
  iVar1 = piVar7[0x19];
  iVar2 = piVar7[0x1a];
  iVar3 = piVar7[0x1b];
  param_2[0x18] = piVar7[0x18];
  param_2[0x19] = iVar1;
  param_2[0x1a] = iVar2;
  param_2[0x1b] = iVar3;
  iVar1 = piVar7[0x1d];
  iVar2 = piVar7[0x1e];
  iVar3 = piVar7[0x1f];
  param_2[0x1c] = piVar7[0x1c];
  param_2[0x1d] = iVar1;
  param_2[0x1e] = iVar2;
  param_2[0x1f] = iVar3;
  iVar1 = piVar7[0x21];
  iVar2 = piVar7[0x22];
  iVar3 = piVar7[0x23];
  param_2[0x20] = piVar7[0x20];
  param_2[0x21] = iVar1;
  param_2[0x22] = iVar2;
  param_2[0x23] = iVar3;
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(piVar7 + 0x24);
  if (param_3 != (int *)0x0) {
    lVar6 = 9;
    piVar7 = param_1[1];
    do {
      piVar8 = param_3;
      piVar9 = piVar7;
      iVar1 = piVar9[1];
      iVar2 = piVar9[2];
      iVar3 = piVar9[3];
      *piVar8 = *piVar9;
      piVar8[1] = iVar1;
      piVar8[2] = iVar2;
      piVar8[3] = iVar3;
      iVar1 = piVar9[5];
      iVar2 = piVar9[6];
      iVar3 = piVar9[7];
      piVar8[4] = piVar9[4];
      piVar8[5] = iVar1;
      piVar8[6] = iVar2;
      piVar8[7] = iVar3;
      iVar1 = piVar9[9];
      iVar2 = piVar9[10];
      iVar3 = piVar9[0xb];
      piVar8[8] = piVar9[8];
      piVar8[9] = iVar1;
      piVar8[10] = iVar2;
      piVar8[0xb] = iVar3;
      iVar1 = piVar9[0xd];
      iVar2 = piVar9[0xe];
      iVar3 = piVar9[0xf];
      piVar8[0xc] = piVar9[0xc];
      piVar8[0xd] = iVar1;
      piVar8[0xe] = iVar2;
      piVar8[0xf] = iVar3;
      iVar1 = piVar9[0x11];
      iVar2 = piVar9[0x12];
      iVar3 = piVar9[0x13];
      piVar8[0x10] = piVar9[0x10];
      piVar8[0x11] = iVar1;
      piVar8[0x12] = iVar2;
      piVar8[0x13] = iVar3;
      iVar1 = piVar9[0x15];
      iVar2 = piVar9[0x16];
      iVar3 = piVar9[0x17];
      piVar8[0x14] = piVar9[0x14];
      piVar8[0x15] = iVar1;
      piVar8[0x16] = iVar2;
      piVar8[0x17] = iVar3;
      iVar1 = piVar9[0x19];
      iVar2 = piVar9[0x1a];
      iVar3 = piVar9[0x1b];
      piVar8[0x18] = piVar9[0x18];
      piVar8[0x19] = iVar1;
      piVar8[0x1a] = iVar2;
      piVar8[0x1b] = iVar3;
      iVar1 = piVar9[0x1d];
      iVar2 = piVar9[0x1e];
      iVar3 = piVar9[0x1f];
      piVar8[0x1c] = piVar9[0x1c];
      piVar8[0x1d] = iVar1;
      piVar8[0x1e] = iVar2;
      piVar8[0x1f] = iVar3;
      lVar6 = lVar6 + -1;
      piVar7 = piVar9 + 0x20;
      param_3 = piVar8 + 0x20;
    } while (lVar6 != 0);
    iVar1 = piVar9[0x21];
    iVar2 = piVar9[0x22];
    iVar3 = piVar9[0x23];
    piVar8[0x20] = piVar9[0x20];
    piVar8[0x21] = iVar1;
    piVar8[0x22] = iVar2;
    piVar8[0x23] = iVar3;
    iVar1 = piVar9[0x25];
    iVar2 = piVar9[0x26];
    iVar3 = piVar9[0x27];
    piVar8[0x24] = piVar9[0x24];
    piVar8[0x25] = iVar1;
    piVar8[0x26] = iVar2;
    piVar8[0x27] = iVar3;
    iVar1 = piVar9[0x29];
    iVar2 = piVar9[0x2a];
    iVar3 = piVar9[0x2b];
    piVar8[0x28] = piVar9[0x28];
    piVar8[0x29] = iVar1;
    piVar8[0x2a] = iVar2;
    piVar8[0x2b] = iVar3;
    iVar1 = piVar9[0x2d];
    iVar2 = piVar9[0x2e];
    iVar3 = piVar9[0x2f];
    piVar8[0x2c] = piVar9[0x2c];
    piVar8[0x2d] = iVar1;
    piVar8[0x2e] = iVar2;
    piVar8[0x2f] = iVar3;
    iVar1 = piVar9[0x31];
    iVar2 = piVar9[0x32];
    iVar3 = piVar9[0x33];
    piVar8[0x30] = piVar9[0x30];
    piVar8[0x31] = iVar1;
    piVar8[0x32] = iVar2;
    piVar8[0x33] = iVar3;
  }
  if (DAT_140037094 < 1) {
LAB_14000a314:
    bVar10 = true;
  }
  else {
    if (DAT_140037094 < 3) goto LAB_14000a31a;
    if (DAT_140037094 != 3) goto LAB_14000a314;
    uVar5 = FUN_140009aa8();
    bVar10 = (char)uVar5 == '\0';
  }
  if (bVar10) {
    return (uint)(DAT_140037092 == '\0');
  }
LAB_14000a31a:
  uVar4 = FUN_14000a198(param_1);
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000a348(uint param_1,longlong param_2,undefined8 param_3,wchar_t *param_4)

{
  short **_Dst;
  wchar_t *_Str;
  undefined auVar1 [16];
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  longlong lVar5;
  ulonglong uVar6;
  wchar_t **ppwVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  wchar_t *_Dst_00;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  wchar_t *_Size;
  undefined auStack_908 [256];
  int local_808;
  uint local_800;
  uint local_7f8;
  undefined local_7b0 [1224];
  undefined local_2e8 [688];
  ulonglong local_38;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_908;
  SetErrorMode(1);
  memset(local_2e8,0,0x98);
  _Size = (wchar_t *)0x4c8;
  memset(local_7b0,0,0x4c8);
  setlocale(2,".ACP");
  pFVar4 = (FILE *)__acrt_iob_func(1);
  lVar5 = FUN_14000be34(pFVar4);
  DAT_1400370b0 = (undefined)lVar5;
  pFVar4 = (FILE *)__acrt_iob_func(2);
  lVar5 = FUN_14000be34(pFVar4);
  DAT_140037093 = (undefined)lVar5;
  _set_invalid_parameter_handler(_guard_check_icall);
  _DAT_14003d0f8 = 0x18;
  uVar10 = 0;
  _DAT_14003d100 = 0;
  iVar11 = 1;
  _DAT_14003d108 = 1;
  InitializeWatsonSharedMem();
  DAT_140037094 = 2;
  do {
    local_808 = iVar11;
    if ((int)param_1 <= iVar11) {
      if ((DAT_140037094 == 3) && (uVar6 = FUN_140009aa8(), (char)uVar6 == '\0')) {
        _Size = L"http://go.microsoft.com/fwlink/?LinkId=79513";
        FUN_140003898(0,0xfae,(ulonglong)L"http://go.microsoft.com/fwlink/?LinkId=79513",param_4);
      }
      bVar2 = FUN_140009a74();
      if (!bVar2) {
        SetUnhandledExceptionFilter(FUN_14000a198);
      }
      if (DAT_140036cee != '\0') {
        _DAT_00000000 = 0;
      }
      while (local_7f8 = (uint)uVar10, local_7f8 < 0x100) {
        (&DAT_1400364d0)[uVar10] = 0;
        uVar10 = (ulonglong)(local_7f8 + 1);
      }
      if (DAT_140026498 == (void *)0x0) {
        ppwVar7 = (wchar_t **)__p__wpgmptr();
        _Str = *ppwVar7;
        uVar10 = 0x20;
        pwVar8 = wcschr(_Str,L' ');
        _Dst_00 = _Str;
        if (pwVar8 != (wchar_t *)0x0) {
          lVar5 = -1;
          do {
            lVar12 = lVar5;
            lVar5 = lVar12 + 1;
          } while (_Str[lVar5] != L'\0');
          uVar10 = lVar12 + 4;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar10;
          lVar5 = SUB168(ZEXT816(2) * auVar1,8);
          sVar9 = SUB168(ZEXT816(2) * auVar1,0);
          if (lVar5 != 0) {
            sVar9 = 0xffffffffffffffff;
          }
          _Dst_00 = (wchar_t *)FUN_140009214(sVar9,lVar5,(ulonglong)_Size,param_4);
          wcscpy_s(_Dst_00,uVar10,L"\"");
          wcscat_s(_Dst_00,uVar10,_Str);
          _Size = L"\"";
          wcscat_s(_Dst_00,uVar10,L"\"");
        }
        DAT_140026498 = FUN_14000dcc4(_Dst_00,uVar10,(ulonglong)_Size,param_4);
      }
      signal(2);
      signal(0xf);
      uVar10 = (ulonglong)param_1;
      iVar11 = FUN_14000ab18(param_1,param_2,(ulonglong)_Size,param_4);
      FUN_14000bb48(uVar10,param_2,_Size,param_4);
      if (DAT_140015040 == '\0') {
        iVar11 = 1;
      }
                    // WARNING: Subroutine does not return
      exit(iVar11);
    }
    _Dst = (short **)(param_2 + (longlong)iVar11 * 8);
    if ((**_Dst - 0x2dU & 0xfffd) == 0) {
      iVar3 = _wcsicmp(*_Dst + 1,L"errorreport:none");
      if (iVar3 == 0) {
        DAT_140037094 = 0;
      }
      else {
        iVar3 = _wcsicmp(*_Dst + 1,L"errorreport:prompt");
        if (iVar3 == 0) {
          DAT_140037094 = 1;
        }
        else {
          iVar3 = _wcsicmp(*_Dst + 1,L"errorreport:queue");
          if (iVar3 == 0) {
            DAT_140037094 = 2;
          }
          else {
            iVar3 = _wcsicmp(*_Dst + 1,L"errorreport:send");
            if (iVar3 == 0) {
              DAT_140037094 = 3;
            }
            else {
              iVar3 = _wcsicmp(*_Dst + 1,L"errorreport:test");
              if (iVar3 != 0) goto LAB_14000a537;
              DAT_140036cee = '\x01';
            }
          }
        }
      }
      _Size = (wchar_t *)((longlong)(int)((param_1 - iVar11) + -1) << 3);
      memmove(_Dst,(void *)(param_2 + (longlong)(iVar11 + 1) * 8),(size_t)_Size);
      param_1 = param_1 - 1;
      iVar11 = iVar11 + -1;
      local_800 = param_1;
    }
LAB_14000a537:
    iVar11 = iVar11 + 1;
  } while( true );
}



void FUN_14000a944(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong **param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  wchar_t **ppwVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  
  pwVar1 = (wchar_t *)FUN_14000dcc4(&DAT_140012d40,param_2,param_3,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(&DAT_140012d48,param_2,param_3,param_4);
  uVar9 = 0;
  FUN_140001ac8(pwVar1,pwVar2,(wchar_t *)0x0,(wchar_t *)param_4);
  pwVar1 = (wchar_t *)FUN_14000dcc4(&DAT_140012d50,pwVar2,uVar9,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(&DAT_140012d48,pwVar2,uVar9,param_4);
  uVar9 = 0;
  FUN_140001ac8(pwVar1,pwVar2,(wchar_t *)0x0,(wchar_t *)param_4);
  pwVar1 = (wchar_t *)FUN_14000dcc4(&DAT_140012d58,pwVar2,uVar9,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(&DAT_140012d48,pwVar2,uVar9,param_4);
  uVar9 = 0;
  FUN_140001ac8(pwVar1,pwVar2,(wchar_t *)0x0,(wchar_t *)param_4);
  pwVar1 = (wchar_t *)FUN_14000dcc4(&DAT_140012d60,pwVar2,uVar9,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(L"ml64",pwVar2,uVar9,param_4);
  uVar9 = 0;
  FUN_140001ac8(pwVar1,pwVar2,(wchar_t *)0x0,(wchar_t *)param_4);
  pwVar1 = (wchar_t *)FUN_14000dcc4(&DAT_140012d74,pwVar2,uVar9,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(&DAT_140012d7c,pwVar2,uVar9,param_4);
  uVar9 = 0;
  FUN_140001ac8(pwVar1,pwVar2,(wchar_t *)0x0,(wchar_t *)param_4);
  pwVar1 = (wchar_t *)FUN_14000dcc4(L"_NMAKE_VER",pwVar2,uVar9,param_4);
  pwVar2 = (wchar_t *)FUN_14000dcc4(L"14.00.23506.0",pwVar2,uVar9,param_4);
  pwVar10 = (wchar_t *)CONCAT71((int7)(uVar9 >> 8),2);
  FUN_140001ac8(pwVar1,pwVar2,pwVar10,(wchar_t *)param_4);
  pwVar3 = (wchar_t *)FUN_14000dcc4(L"MAKE",pwVar2,(ulonglong)pwVar10,param_4);
  pwVar4 = (wchar_t *)FUN_14000dcc4(DAT_140026498,pwVar2,(ulonglong)pwVar10,param_4);
  pwVar1 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar10 >> 8),0x4c);
  FUN_140001ac8(pwVar3,pwVar4,pwVar1,(wchar_t *)param_4);
  pwVar2 = L".SUFFIXES";
  uVar8 = 0;
  lVar7 = 0;
  do {
    DAT_140025c40 = FUN_14000dcc4(pwVar2,pwVar4,(ulonglong)pwVar1,param_4);
    ppwVar6 = *(wchar_t ***)((longlong)&PTR_PTR_DAT_140011770 + lVar7);
    puVar5 = &DAT_140025c50;
    pwVar4 = (wchar_t *)0x400;
    pwVar1 = *ppwVar6;
    wcscpy_s(&DAT_140025c50,0x400,pwVar1);
    FUN_1400012a0(puVar5,pwVar4,(ulonglong)pwVar1,param_4);
    while( true ) {
      ppwVar6 = ppwVar6 + 1;
      pwVar2 = *ppwVar6;
      if (pwVar2 == (wchar_t *)0x0) break;
      puVar5 = &DAT_140025c50;
      pwVar4 = (wchar_t *)0x400;
      wcscpy_s(&DAT_140025c50,0x400,pwVar2);
      FUN_140001044(puVar5,pwVar4,(ulonglong)pwVar2,param_4);
      pwVar1 = pwVar2;
    }
    if (uVar8 == 0) {
      FUN_14000169c(puVar5,pwVar4,(ulonglong)pwVar1,param_4);
    }
    FUN_1400017f0(puVar5,pwVar4,(ulonglong)pwVar1,param_4);
    uVar8 = uVar8 + 1;
    lVar7 = (ulonglong)uVar8 * 8;
    pwVar2 = (wchar_t *)(&PTR_u__SUFFIXES_140011900)[uVar8];
  } while (pwVar2 != (wchar_t *)0x0);
  return;
}



void FUN_14000ab18(int param_1,longlong param_2,ulonglong param_3,wchar_t *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  errno_t eVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FILETIME _Path;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  longlong **pplVar10;
  longlong *plVar11;
  ulonglong **ppuVar12;
  undefined8 *puVar13;
  wchar_t *_Memory;
  LPWIN32_FIND_DATAW p_Var14;
  FILE *pFVar15;
  longlong lVar16;
  rsize_t _SizeInWords;
  longlong lVar17;
  size_t _Size;
  undefined8 uVar18;
  ulonglong *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  wchar_t *pwVar23;
  LPWIN32_FIND_DATAW _ResultPath;
  wchar_t **ppwVar24;
  FILETIME FVar25;
  undefined auStackY_528 [32];
  FILETIME local_4f8;
  wchar_t *local_4f0;
  size_t local_4e8;
  HANDLE local_4e0;
  _WIN32_FIND_DATAW local_4d8;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStackY_528;
  local_4f0 = (wchar_t *)0x0;
  pwVar6 = (wchar_t *)FUN_14000dcc4(L"MAKEDIR",param_2,param_3,param_4);
  _Path = (FILETIME)_wgetcwd((wchar_t *)0x0,0);
  local_4f8 = _Path;
  FUN_140001ac8(pwVar6,(wchar_t *)_Path,(wchar_t *)CONCAT71((int7)(param_3 >> 8),0x42),param_4);
  pwVar23 = L"MAKEFLAGS";
  _SizeInWords = 0;
  _wdupenv_s(&local_4f0,(size_t *)0x0,L"MAKEFLAGS");
  pwVar6 = local_4f0;
  if (local_4f0 != (wchar_t *)0x0) {
    lVar16 = -1;
    do {
      lVar17 = lVar16;
      lVar16 = lVar17 + 1;
    } while (u_MAKEFLAGS__140015050[lVar16] != L'\0');
    _SizeInWords = lVar17 - 8;
    param_4 = (wchar_t *)0xffffffffffffffff;
    pwVar23 = local_4f0;
    wcsncpy_s(u_MAKEFLAGS__140015050 + 10,_SizeInWords,local_4f0,0xffffffffffffffff);
  }
  DAT_1400157ed = 1;
  pwVar7 = (wchar_t *)
           FUN_14000dcc4(u_MAKEFLAGS__140015050 + 10,_SizeInWords,(ulonglong)pwVar23,param_4);
  pwVar8 = (wchar_t *)FUN_14000dcc4(L"MAKEFLAGS",_SizeInWords,(ulonglong)pwVar23,param_4);
  pwVar23 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar23 >> 8),6);
  FUN_140001ac8(pwVar8,pwVar7,pwVar23,param_4);
  for (; (pwVar6 != (wchar_t *)0x0 && (*pwVar6 != L'\0')); pwVar6 = pwVar6 + 1) {
    FUN_14000b804(*pwVar6,'\x01',pwVar23,param_4);
  }
  free(local_4f0);
  pwVar6 = L"NTMAKEENV";
  local_4f0 = (wchar_t *)0x0;
  _ResultPath = (LPWIN32_FIND_DATAW)0x0;
  eVar3 = _wgetenv_s(&local_4e8,(wchar_t *)0x0,0,L"NTMAKEENV");
  if ((eVar3 == 0) && (local_4e8 != 0)) {
    DAT_140036ced = 1;
  }
  pwVar23 = (wchar_t *)(param_2 + 8);
  uVar9 = (ulonglong)(param_1 - 1U);
  FUN_14000b43c(param_1 - 1U,(undefined8 **)pwVar23,(undefined8 **)_ResultPath,pwVar6);
  if (DAT_140026488 == '\0') {
    FUN_140003a8c(uVar9,pwVar23,_ResultPath,pwVar6);
  }
  if ((DAT_1400157ec & 2) == 0) {
    FUN_14000a944(uVar9,pwVar23,(ulonglong)_ResultPath,(ulonglong **)pwVar6);
    _ResultPath = &local_4d8;
    DAT_140026490 = L"tools.ini";
    pwVar23 = L"INIT";
    _wsearchenv(L"tools.ini",L"INIT",(wchar_t *)_ResultPath);
    if ((wchar_t)local_4d8.dwFileAttributes != L'\0') {
      _ResultPath = (LPWIN32_FIND_DATAW)0x20;
      pwVar23 = L"rt,ccs=unicode";
      pwVar7 = (wchar_t *)&local_4d8;
      DAT_140026480 = _wfsopen(pwVar7,L"rt,ccs=unicode",0x20);
      if (DAT_140026480 == (FILE *)0x0) {
        FUN_140003898(0,0x41d,(ulonglong)&local_4d8,pwVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = FUN_140006c34(pwVar7,pwVar23,_ResultPath,pwVar6);
      if ((char)uVar9 == '\0') {
        iVar4 = fclose(DAT_140026480);
        if (iVar4 == -1) {
          p_Var14 = &local_4d8;
LAB_14000ad46:
          pwVar23 = (wchar_t *)0x424;
          FUN_140003898(0,0x424,(ulonglong)p_Var14,pwVar6);
          _ResultPath = p_Var14;
        }
      }
      else {
        DAT_140025c20 = DAT_140025c20 + 1;
        DAT_140026489 = 1;
        FUN_14000c0b8(pwVar7,pwVar23,_ResultPath,(HANDLE *)pwVar6);
        iVar4 = fclose(DAT_140026480);
        p_Var14 = (LPWIN32_FIND_DATAW)DAT_140026490;
        if (iVar4 == -1) goto LAB_14000ad46;
      }
    }
  }
  pwVar23 = (wchar_t *)
            FUN_14000dcc4(u_MAKEFLAGS__140015050 + 10,pwVar23,(ulonglong)_ResultPath,pwVar6);
  eVar3 = _wputenv_s(L"MAKEFLAGS",pwVar23);
  if (eVar3 != 0) {
    pwVar23 = (wchar_t *)0x41f;
    FUN_140003898(0,0x41f,(ulonglong)_ResultPath,pwVar6);
  }
  if (DAT_140036e80 == (longlong **)0x0) {
    pwVar23 = (wchar_t *)0x4;
    pwVar7 = L"makefile";
    iVar4 = _waccess(L"makefile",4);
    if (iVar4 == 0) {
      pplVar10 = (longlong **)FUN_14000dc58(pwVar7,pwVar23,(ulonglong)_ResultPath,pwVar6);
      plVar11 = (longlong *)FUN_14000dcc4(L"makefile",pwVar23,(ulonglong)_ResultPath,pwVar6);
      pplVar10[1] = plVar11;
      DAT_140036e80 = pplVar10;
    }
    else if (DAT_1400157f8 == (longlong **)0x0) {
      if ((DAT_1400157ec & 1) == 0) {
        pwVar23 = (wchar_t *)0x428;
        FUN_140003898(0,0x428,(ulonglong)_ResultPath,pwVar6);
      }
    }
    else {
      p_Var14 = (LPWIN32_FIND_DATAW)DAT_1400157f8[1];
      pwVar23 = (wchar_t *)0x4;
      iVar4 = _waccess((wchar_t *)p_Var14,4);
      if (iVar4 == 0) {
        pwVar23 = (wchar_t *)0x2e;
        ppuVar12 = (ulonglong **)wcsrchr((wchar_t *)p_Var14,L'.');
        if (ppuVar12 != (ulonglong **)0x0) {
          pwVar23 = (wchar_t *)0x101;
          plVar11 = FUN_14000d274((wchar_t *)&local_4d8,0x101,(wchar_t *)p_Var14,(wchar_t *)ppuVar12
                                  ,&local_288);
          _ResultPath = p_Var14;
          pwVar6 = (wchar_t *)ppuVar12;
          if (plVar11 != (longlong *)0x0) goto LAB_14000ae4c;
        }
        DAT_140036e80 = DAT_1400157f8;
        DAT_1400157f8 = (longlong **)*DAT_1400157f8;
      }
    }
  }
LAB_14000ae4c:
  puVar13 = (undefined8 *)__p__wenviron();
  ppwVar24 = (wchar_t **)*puVar13;
  pwVar7 = *ppwVar24;
  while (pplVar10 = DAT_140036e80, pwVar7 != (wchar_t *)0x0) {
    pwVar23 = (wchar_t *)0x3d;
    pwVar7 = wcschr(pwVar7,L'=');
    if (pwVar7 != (wchar_t *)0x0) {
      pwVar23 = L"MAKEFLAGS";
      _ResultPath = (LPWIN32_FIND_DATAW)0x8;
      iVar4 = _wcsnicmp(*ppwVar24,L"MAKEFLAGS",8);
      if (iVar4 != 0) {
        *pwVar7 = L'\0';
        if (**ppwVar24 != L'\0') {
          pwVar8 = (wchar_t *)FUN_14000dcc4(*ppwVar24,pwVar23,(ulonglong)_ResultPath,pwVar6);
          lVar16 = -1;
          do {
            lVar17 = lVar16;
            lVar16 = lVar17 + 1;
          } while (pwVar8[lVar16] != L'\0');
          _Size = lVar17 + 2;
          _wcsupr_s(pwVar8,_Size);
          _Memory = (wchar_t *)FUN_14000dcc4(pwVar7 + 1,_Size,(ulonglong)_ResultPath,pwVar6);
          DAT_1400157ed = 0;
          _ResultPath = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)_ResultPath >> 8),4);
          *pwVar7 = L'=';
          pwVar23 = _Memory;
          uVar9 = FUN_140001ac8(pwVar8,_Memory,(wchar_t *)_ResultPath,pwVar6);
          if ((char)uVar9 == '\0') {
            free(pwVar8);
            free(_Memory);
          }
        }
      }
    }
    ppwVar24 = ppwVar24 + 1;
    _Path = local_4f8;
    pwVar7 = *ppwVar24;
  }
  for (; pplVar10 != (longlong **)0x0; pplVar10 = (longlong **)*pplVar10) {
    plVar11 = pplVar10[1];
    if ((*(short *)plVar11 == 0x2d) && (*(short *)((longlong)plVar11 + 2) == 0)) {
      DAT_140026490 = (wchar_t *)FUN_14000dcc4(L"STDIN",pwVar23,(ulonglong)_ResultPath,pwVar6);
      p_Var14 = (LPWIN32_FIND_DATAW)0x0;
      DAT_140026480 = (FILE *)__acrt_iob_func();
    }
    else {
      p_Var14 = (LPWIN32_FIND_DATAW)FUN_14000dcc4(plVar11,pwVar23,(ulonglong)_ResultPath,pwVar6);
      _ResultPath = (LPWIN32_FIND_DATAW)0x20;
      pwVar23 = L"rt,ccs=unicode";
      DAT_140026490 = (wchar_t *)p_Var14;
      DAT_140026480 = _wfsopen((wchar_t *)p_Var14,L"rt,ccs=unicode",0x20);
      if (DAT_140026480 == (FILE *)0x0) {
        pwVar23 = (wchar_t *)0x41c;
        p_Var14 = (LPWIN32_FIND_DATAW)0x0;
        _ResultPath = (LPWIN32_FIND_DATAW)DAT_140026490;
        FUN_140003898(0,0x41c,(ulonglong)DAT_140026490,pwVar6);
      }
    }
    DAT_140025c20 = 0;
    DAT_140026489 = 0;
    FUN_14000c0b8(p_Var14,pwVar23,_ResultPath,(HANDLE *)pwVar6);
    pFVar15 = (FILE *)__acrt_iob_func(0);
    if ((DAT_140026480 != pFVar15) && (iVar4 = fclose(DAT_140026480), iVar4 == -1)) {
      pwVar23 = (wchar_t *)0x424;
      _ResultPath = (LPWIN32_FIND_DATAW)DAT_140026490;
      FUN_140003898(0,0x424,(ulonglong)DAT_140026490,pwVar6);
    }
  }
  FUN_140002f98(DAT_140036e80);
  DAT_140025c24 = 0;
  FUN_14000d80c();
  if ((DAT_1400157ec & 1) != 0) {
    FUN_1400039c0(8,pwVar23,_ResultPath,pwVar6);
    puVar13 = &DAT_1400364d0;
    do {
      for (puVar21 = (undefined8 *)*puVar13; puVar21 != (undefined8 *)0x0;
          puVar21 = (undefined8 *)*puVar21) {
        if ((puVar21[2] != 0) &&
           (_ResultPath = *(LPWIN32_FIND_DATAW *)(puVar21[2] + 8),
           _ResultPath != (LPWIN32_FIND_DATAW)0x0)) {
          pwVar23 = (wchar_t *)puVar21[1];
          FUN_1400039c0(0xe,pwVar23,_ResultPath,pwVar6);
          for (puVar22 = *(undefined8 **)puVar21[2]; puVar22 != (undefined8 *)0x0;
              puVar22 = (undefined8 *)*puVar22) {
            pwVar23 = (wchar_t *)puVar22[1];
            if (pwVar23 != (wchar_t *)0x0) {
              FUN_14000bfe0(L"\t\t%s\n",pwVar23,_ResultPath,pwVar6);
            }
          }
        }
      }
      puVar13 = puVar13 + 1;
    } while ((longlong)puVar13 < 0x140036cd0);
    FUN_14000c008();
    FUN_14000bfb0();
    FUN_1400039c0(7,pwVar23,_ResultPath,pwVar6);
    for (puVar13 = DAT_140025c00; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
      uVar18 = puVar13[2];
      pwVar23 = L"%s:";
      if (*(char *)(puVar13 + 5) != '\0') {
        pwVar23 = L"%s::";
      }
      FUN_14000bfe0(pwVar23,uVar18,_ResultPath,pwVar6);
      FUN_1400039c0(10,uVar18,_ResultPath,pwVar6);
      plVar11 = (longlong *)puVar13[3];
      if (plVar11 != (longlong *)0x0) {
        pwVar23 = L"%s\n";
        while( true ) {
          FUN_14000bfe0(pwVar23,plVar11[1],_ResultPath,pwVar6);
          plVar11 = (longlong *)*plVar11;
          if (plVar11 == (longlong *)0x0) break;
          pwVar23 = L"\t\t\t%s\n";
        }
      }
      FUN_14000c008();
    }
    pwVar23 = L".SUFFIXES";
    FUN_14000bfe0(L"%s: ",L".SUFFIXES",_ResultPath,pwVar6);
    for (puVar13 = DAT_140025c18; puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
      pwVar23 = (wchar_t *)puVar13[1];
      FUN_14000bfe0(&DAT_140012f60,pwVar23,_ResultPath,pwVar6);
    }
    FUN_14000c008();
    FUN_14000bfb0();
    FUN_1400039c0(9,pwVar23,_ResultPath,pwVar6);
    puVar13 = &DAT_140025800;
    lVar16 = 0x80;
    do {
      puVar21 = (undefined8 *)*puVar13;
      while (puVar21 != (undefined8 *)0x0) {
        puVar19 = (ulonglong *)puVar21[1];
        ppwVar24 = (wchar_t **)
                   (ulonglong)
                   ((-(uint)((*(byte *)(*(longlong *)(puVar21[4] + 8) + 0x20) & 0x20) != 0) & 0x1a)
                   + 0x20);
        FUN_14000bfe0(L"%s:%c",puVar19,ppwVar24,pwVar6);
        DAT_140026458 = puVar21[1];
        DAT_140026470 = DAT_140026458;
        DAT_140026478 = DAT_140026458;
        for (puVar22 = (undefined8 *)puVar21[4]; puVar22 != (undefined8 *)0x0;
            puVar22 = (undefined8 *)*puVar22) {
          puVar1 = (undefined8 *)puVar22[1];
          FUN_1400039c0(0xb,puVar19,ppwVar24,pwVar6);
          uVar9 = 0;
          uVar5 = 1;
          do {
            if ((*(byte *)(puVar1 + 4) & (byte)uVar5) != 0) {
              FUN_14000bfe0(L"-%c ",(ulonglong)(ushort)L"dinsb"[uVar9],ppwVar24,pwVar6);
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar5 = uVar5 * 2;
          } while (uVar5 < 0x10);
          puVar19 = (ulonglong *)puVar1[1];
          FUN_14000c458((undefined8 *)*puVar1,puVar19,ppwVar24,(ulonglong **)pwVar6);
          FUN_1400039c0(10,puVar19,ppwVar24,pwVar6);
          plVar11 = (longlong *)puVar1[2];
          if (plVar11 != (longlong *)0x0) {
            puVar19 = (ulonglong *)plVar11[1];
            if (puVar19 == (ulonglong *)0x0) goto LAB_14000b24a;
            pwVar23 = L"%s\n";
            do {
              FUN_14000bfe0(pwVar23,puVar19,ppwVar24,pwVar6);
LAB_14000b24a:
              do {
                plVar11 = (longlong *)*plVar11;
                if (plVar11 == (longlong *)0x0) goto LAB_14000b259;
                puVar19 = (ulonglong *)plVar11[1];
              } while (puVar19 == (ulonglong *)0x0);
              pwVar23 = L"\t\t\t%s\n";
            } while( true );
          }
          FUN_14000c008();
LAB_14000b259:
        }
        puVar21 = (undefined8 *)*puVar21;
        FUN_14000c008();
      }
      puVar13 = puVar13 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    FUN_14000c008();
    FUN_14000bfb0();
    DAT_140026458 = 0;
    DAT_140026470 = 0;
    DAT_140026478 = 0;
    _Path = local_4f8;
  }
  FVar25.dwLowDateTime = 0;
  FVar25.dwHighDateTime = 0;
  if (DAT_1400364b8 != (void *)0x0) {
    free(DAT_1400364b8);
  }
  do {
    pplVar10 = DAT_1400157f8;
    if (DAT_1400157f8 == (longlong **)0x0) {
LAB_14000b400:
      _wchdir((wchar_t *)_Path);
      __security_check_cookie(local_38 ^ (ulonglong)auStackY_528);
      return;
    }
    puVar20 = &DAT_140011614;
    pwVar23 = wcspbrk((wchar_t *)DAT_1400157f8[1],L"*?");
    if (pwVar23 == (wchar_t *)0x0) {
      local_4f8 = FVar25;
      iVar4 = FUN_140002054((wchar_t *)DAT_1400157f8[1],
                            (undefined8 *)CONCAT71((int7)((ulonglong)puVar20 >> 8),DAT_1400157ee),
                            (FILETIME)&local_4f8);
      if ((iVar4 < 0) && ((DAT_1400157ec & 8) != 0)) {
        FUN_140002f98(pplVar10);
        goto LAB_14000b400;
      }
    }
    else {
      pwVar23 = (wchar_t *)FUN_140005ca8((wchar_t *)DAT_1400157f8[1],&local_4d8,&local_4e0,pwVar6);
      if (pwVar23 == (wchar_t *)0x0) {
        FUN_140003898(0,0x42d,(ulonglong)DAT_1400157f8[1],pwVar6);
      }
      else {
        do {
          pwVar7 = (wchar_t *)FUN_14000f570((wchar_t *)DAT_1400157f8[1],pwVar23);
          if ((((wchar_t)local_4d8.dwFileAttributes & 0x10U) == 0) ||
             ((local_4f8 = local_4d8.ftCreationTime, local_4d8.ftCreationTime.dwLowDateTime == 0 &&
              (pwVar23 = (wchar_t *)((ulonglong)local_4d8.ftCreationTime >> 0x20),
              local_4d8.ftCreationTime.dwHighDateTime == 0)))) {
            local_4f8 = local_4d8.ftLastWriteTime;
          }
          iVar4 = FUN_140002054(pwVar7,(undefined8 *)
                                       CONCAT71((int7)((ulonglong)pwVar23 >> 8),DAT_1400157ee),
                                (FILETIME)&local_4f8);
          free(pwVar7);
          if ((iVar4 < 0) && ((DAT_1400157ec & 8) != 0)) {
            FUN_140002f98(pplVar10);
            goto LAB_14000b400;
          }
          pwVar23 = FUN_140005e30(&local_4d8,local_4e0);
        } while (pwVar23 != (WCHAR *)0x0);
      }
    }
    DAT_1400157f8 = (longlong **)*pplVar10;
    *pplVar10 = (longlong *)DAT_14003d0e0;
    DAT_14003d0e0 = pplVar10;
  } while( true );
}



void FUN_14000b43c(uint param_1,undefined8 **param_2,undefined8 **param_3,wchar_t *param_4)

{
  undefined auVar1 [16];
  bool bVar2;
  int iVar3;
  errno_t eVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  void *pvVar12;
  undefined8 **ppuVar13;
  FILE *pFVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  wchar_t *pwVar17;
  undefined *puVar18;
  longlong lVar19;
  undefined8 ***pppuVar20;
  wchar_t *pwVar21;
  undefined7 uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  FILE *local_res18;
  longlong lVar27;
  
  if (param_1 != 0) {
    uVar24 = 0;
    bVar2 = false;
    pwVar21 = (wchar_t *)param_2;
    do {
      uVar23 = (uint)uVar24;
      pppuVar20 = (undefined8 ***)param_2[uVar24];
      if (*(wchar_t *)pppuVar20 == L'@') {
        FUN_1400036ec((wchar_t *)((longlong)pppuVar20 + 2),pwVar21,param_3,param_4);
      }
      else {
        if ((*(wchar_t *)pppuVar20 + L'ￓ' & 0xfffdU) == 0) {
          pwVar9 = (wchar_t *)((longlong)pppuVar20 + 2);
          pwVar21 = L"help";
          iVar3 = _wcsicmp(pwVar9,L"help");
          if (iVar3 != 0) {
LAB_14000b6d0:
            if (*pwVar9 != L'\0') {
              pwVar21 = L"nologo";
              pwVar17 = pwVar9;
              iVar3 = _wcsicmp(pwVar9,L"nologo");
              uVar22 = (undefined7)((ulonglong)pwVar21 >> 8);
              if (iVar3 == 0) {
                pwVar21 = (wchar_t *)CONCAT71(uVar22,1);
                FUN_14000b804(pwVar9[2],'\x01',param_3,param_4);
              }
              else if (*pwVar9 == L'?') {
                bVar2 = true;
              }
              else if ((*pwVar9 == L'f') || (*pwVar9 == L'F')) {
                puVar10 = (undefined8 *)(pwVar9 + 1);
                if (*(short *)puVar10 == 0) {
                  uVar23 = uVar23 + 1;
                  if ((param_1 <= uVar23) || (puVar10 = param_2[uVar23], *(short *)puVar10 == 0)) {
                    pwVar21 = (wchar_t *)0x425;
                    pwVar17 = (wchar_t *)0x0;
                    FUN_140003898(0,0x425,(ulonglong)param_3,param_4);
                  }
                }
                ppuVar15 = (undefined8 **)FUN_14000dc58(pwVar17,pwVar21,(ulonglong)param_3,param_4);
                puVar10 = (undefined8 *)FUN_14000dcc4(puVar10,pwVar21,(ulonglong)param_3,param_4);
                ppuVar15[1] = puVar10;
                pppuVar20 = (undefined8 ***)DAT_140036e80;
                pwVar21 = (wchar_t *)&DAT_140036e80;
                while (pppuVar5 = pppuVar20, pppuVar5 != (undefined8 ***)0x0) {
                  pwVar21 = (wchar_t *)pppuVar5;
                  pppuVar20 = (undefined8 ***)*pppuVar5;
                }
                *(undefined8 ***)pwVar21 = ppuVar15;
              }
              else {
                if ((*pwVar9 + L'ﾨ' & 0xffdfU) != 0) goto code_r0x00014000b6c2;
                pppuVar20 = (undefined8 ***)(pwVar9 + 1);
                if (*(short *)pppuVar20 == 0) {
                  uVar23 = uVar23 + 1;
                  if ((param_1 <= uVar23) ||
                     (pppuVar20 = (undefined8 ***)param_2[uVar23], *(short *)pppuVar20 == 0)) {
                    pwVar21 = (wchar_t *)0x426;
                    FUN_140003898(0,0x426,(ulonglong)param_3,param_4);
                  }
                }
                if ((*(short *)pppuVar20 == 0x2d) && (*(short *)((longlong)pppuVar20 + 2) == 0)) {
                  pFVar14 = (FILE *)__acrt_iob_func(1);
                  FUN_14000bee0(pFVar14);
                }
                else {
                  param_3 = (undefined8 **)&DAT_140012e58;
                  pwVar21 = (wchar_t *)pppuVar20;
                  eVar4 = _wfopen_s(&local_res18,(wchar_t *)pppuVar20,L"wt");
                  if (eVar4 != 0) {
                    pwVar21 = (wchar_t *)0x418;
                    FUN_140003898(0,0x418,(ulonglong)pppuVar20,param_4);
                    param_3 = pppuVar20;
                  }
                  FUN_14000bee0(local_res18);
                  fclose(local_res18);
                }
              }
            }
            goto LAB_14000b7dd;
          }
          bVar2 = true;
          break;
        }
        pwVar21 = (wchar_t *)0x3d;
        pppuVar5 = (undefined8 ***)wcschr((wchar_t *)pppuVar20,L'=');
        if (pppuVar5 == (undefined8 ***)0x0) {
          pppuVar5 = pppuVar20;
          FUN_14000bb94((short *)pppuVar20);
          if (*(wchar_t *)pppuVar20 != L'\0') {
            puVar10 = FUN_14000dc58(pppuVar5,pwVar21,(ulonglong)param_3,param_4);
            pwVar21 = (wchar_t *)0x20;
            pwVar9 = wcschr((wchar_t *)pppuVar20,L' ');
            if (pwVar9 == (wchar_t *)0x0) {
              pvVar12 = FUN_14000dcc4(pppuVar20,pwVar21,(ulonglong)param_3,param_4);
              puVar10[1] = pvVar12;
            }
            else {
              lVar26 = -1;
              do {
                lVar27 = lVar26;
                lVar26 = lVar27 + 1;
              } while (*(wchar_t *)((longlong)pppuVar20 + lVar26 * 2) != L'\0');
              auVar1._8_8_ = 0;
              auVar1._0_8_ = lVar27 + 4;
              lVar19 = SUB168(ZEXT816(2) * auVar1,8);
              sVar8 = SUB168(ZEXT816(2) * auVar1,0);
              if (lVar19 != 0) {
                sVar8 = 0xffffffffffffffff;
              }
              puVar11 = (undefined2 *)FUN_140009214(sVar8,lVar19,0xffffffffffffffff,param_4);
              param_3 = (undefined8 **)(lVar26 * 2);
              *puVar11 = 0x22;
              memcpy(puVar11 + 1,pppuVar20,(size_t)param_3);
              puVar11[lVar27 + 2] = 0x22;
              puVar11[lVar27 + 3] = 0;
              puVar10[1] = puVar11;
              pwVar21 = (wchar_t *)pppuVar20;
            }
            ppuVar15 = (undefined8 **)DAT_1400157f8;
            ppuVar16 = &DAT_1400157f8;
            while (ppuVar13 = ppuVar15, ppuVar13 != (undefined8 **)0x0) {
              ppuVar16 = ppuVar13;
              ppuVar15 = (undefined8 **)*ppuVar13;
            }
            *ppuVar16 = puVar10;
          }
        }
        else {
          if (pppuVar5 == pppuVar20) {
            FUN_140003898(0,0x427,(ulonglong)param_3,param_4);
          }
          *(undefined2 *)pppuVar5 = 0;
          pppuVar6 = pppuVar5;
          do {
            do {
              pppuVar7 = pppuVar6;
              pppuVar6 = (undefined8 ***)((longlong)pppuVar7 + -2);
            } while (*(short *)pppuVar6 == 0x20);
          } while (*(short *)pppuVar6 == 9);
          puVar18 = &DAT_14001161c;
          *(short *)pppuVar7 = 0;
          DAT_1400157ed = 1;
          sVar8 = wcsspn((wchar_t *)((longlong)pppuVar5 + 2),L" \t");
          pwVar21 = (wchar_t *)
                    FUN_14000dcc4((wchar_t *)((longlong)pppuVar5 + 2) + sVar8,puVar18,
                                  (ulonglong)param_3,param_4);
          puVar18 = &DAT_14001161c;
          sVar8 = wcsspn((wchar_t *)pppuVar20,L" \t");
          pwVar9 = (wchar_t *)
                   FUN_14000dcc4((wchar_t *)((longlong)pppuVar20 + sVar8 * 2),puVar18,
                                 (ulonglong)param_3,param_4);
          param_3 = (undefined8 **)CONCAT71((int7)((ulonglong)param_3 >> 8),2);
          FUN_140001ac8(pwVar9,pwVar21,(wchar_t *)param_3,param_4);
        }
        param_2[uVar24] = (undefined8 *)0x0;
      }
LAB_14000b7dd:
      uVar24 = (ulonglong)(uVar23 + 1);
    } while (uVar23 + 1 < param_1);
    if (bVar2) {
      uVar25 = 100;
      uVar23 = 0x67;
      do {
        pwVar21 = L"NMAKE";
        FUN_1400039c0(uVar25,L"NMAKE",param_3,param_4);
        uVar25 = uVar25 + 1;
      } while (uVar25 < 0x67);
      do {
        if (uVar23 == 0x71) {
          uVar23 = 0x72;
        }
        if (uVar23 == 0x79) {
          uVar23 = 0x7a;
        }
        FUN_1400039c0(uVar23,pwVar21,param_3,param_4);
        uVar23 = uVar23 + 1;
      } while (uVar23 < 0x7d);
                    // WARNING: Subroutine does not return
      exit(0);
    }
  }
  return;
code_r0x00014000b6c2:
  pwVar21 = (wchar_t *)CONCAT71(uVar22,1);
  FUN_14000b804(*pwVar9,'\x01',param_3,param_4);
  pwVar9 = pwVar9 + 1;
  goto LAB_14000b6d0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000b804(ushort param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  longlong lVar2;
  wchar_t _Ch;
  errno_t eVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  bVar7 = 0;
  pbVar6 = &DAT_1400157ee;
  _Ch = towupper(param_1);
  uVar8 = (uint)(ushort)_Ch;
  if ((ushort)_Ch < 0x4d) {
    if (_Ch == L'L') {
      bVar7 = 0x80;
    }
    else {
      if (uVar8 == 0x20) {
        return;
      }
      uVar10 = (ulonglong)(uVar8 - 0x41);
      if (uVar8 - 0x41 == 0) {
        bVar7 = 0x10;
        goto LAB_14000b8c6;
      }
      if (uVar8 == 0x42) {
        DAT_140025c3a = 1;
        return;
      }
      if (uVar8 != 0x43) {
        uVar10 = (ulonglong)(uVar8 - 0x44);
        if (uVar8 - 0x44 == 0) {
          bVar7 = 1;
          goto LAB_14000b8c6;
        }
        if (uVar8 != 0x45) {
          if (uVar8 == 0x47) {
            DAT_14002648b = 1;
            return;
          }
          uVar8 = uVar8 - 0x49;
          uVar10 = (ulonglong)uVar8;
          if (uVar8 == 0) {
            bVar7 = 2;
            goto LAB_14000b8c6;
          }
          if (uVar8 == 2) {
            DAT_140025c3b = 1;
            return;
          }
LAB_14000b95d:
          uVar10 = (ulonglong)param_1;
          FUN_140003898(0,0x429,uVar10,param_4);
          goto LAB_14000b8c6;
        }
        pbVar6 = &DAT_1400157ec;
        uVar9 = 0;
        goto LAB_14000b8c3;
      }
      bVar7 = 0x20;
      uVar8 = 0;
    }
    uVar10 = (ulonglong)uVar8;
    pbVar6 = &DAT_1400157ec;
    DAT_140026488 = 1;
  }
  else {
    uVar9 = uVar8 - 0x4e;
    if (uVar9 != 0) {
      if (uVar8 == 0x4f) {
        DAT_140025c39 = 1;
        return;
      }
      uVar10 = (ulonglong)(uVar8 - 0x50);
      if (uVar8 - 0x50 == 0) {
        bVar7 = 1;
      }
      else {
        uVar10 = (ulonglong)(uVar8 - 0x51);
        if (uVar8 - 0x51 == 0) {
          bVar7 = 8;
        }
        else {
          uVar10 = (ulonglong)(uVar8 - 0x52);
          if (uVar8 - 0x52 == 0) {
            bVar7 = 2;
          }
          else {
            uVar10 = (ulonglong)(uVar8 - 0x53);
            if (uVar8 - 0x53 == 0) {
              bVar7 = 8;
              goto LAB_14000b8c6;
            }
            uVar10 = (ulonglong)(uVar8 - 0x54);
            if (uVar8 - 0x54 == 0) {
              bVar7 = 0x10;
            }
            else {
              uVar8 = uVar8 - 0x55;
              uVar10 = (ulonglong)uVar8;
              if (uVar8 == 0) {
                bVar7 = 0x40;
                goto LAB_14000b8c6;
              }
              if (uVar8 != 4) goto LAB_14000b95d;
              bVar7 = 0x40;
            }
          }
        }
      }
      pbVar6 = &DAT_1400157ec;
      goto LAB_14000b8c6;
    }
LAB_14000b8c3:
    uVar10 = (ulonglong)uVar9;
    bVar7 = 4;
  }
LAB_14000b8c6:
  if (_DAT_140036e78 == (undefined8 *)0x0) {
    _DAT_140036e78 = FUN_14000918c((ushort *)L"MAKEFLAGS");
    DAT_140036e70 = _DAT_140036e78[2];
  }
  lVar2 = DAT_140036e70;
  if (param_2 == '\0') {
    if (pbVar6 != &DAT_1400157ee) {
      return;
    }
    uVar5 = (ulonglong)(ushort)_Ch;
    DAT_1400157ee = DAT_1400157ee & ~bVar7;
    pwVar4 = wcschr(*(wchar_t **)(DAT_140036e70 + 8),_Ch);
    if (pwVar4 != (wchar_t *)0x0) {
      do {
        pwVar1 = pwVar4 + 1;
        *pwVar4 = *pwVar1;
        pwVar4 = pwVar4 + 1;
      } while (*pwVar1 != L'\0');
    }
  }
  else {
    *pbVar6 = *pbVar6 | bVar7;
    if (_Ch == L'Q') {
      *pbVar6 = *pbVar6 | 0x20;
    }
    uVar5 = (ulonglong)(ushort)_Ch;
    pwVar4 = wcschr(*(wchar_t **)(lVar2 + 8),_Ch);
    if (pwVar4 == (wchar_t *)0x0) {
      uVar5 = 0x20;
      pwVar4 = wcschr(*(wchar_t **)(DAT_140036e70 + 8),L' ');
      if (pwVar4 != (wchar_t *)0x0) {
        *pwVar4 = _Ch;
      }
    }
  }
  pwVar4 = (wchar_t *)FUN_14000dcc4(u_MAKEFLAGS__140015050 + 10,uVar5,uVar10,param_4);
  eVar3 = _wputenv_s(L"MAKEFLAGS",pwVar4);
  if (eVar3 != 0) {
    FUN_140003898((ulonglong)DAT_140025c20,0x41f,uVar10,param_4);
  }
  return;
}



void FUN_14000bb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  _fcloseall();
  for (puVar1 = DAT_140036e88; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    _wunlink((wchar_t *)puVar1[1]);
    if ((DAT_1400157ee & 4) != 0) {
      FUN_14000bfe0(L"\tdel %s\n",puVar1[1],param_3,param_4);
      FUN_14000bfb0();
    }
  }
  return;
}



void FUN_14000bb94(short *param_1)

{
  bool bVar1;
  longlong lVar2;
  short *psVar4;
  longlong lVar3;
  
  lVar2 = -1;
  do {
    lVar3 = lVar2;
    lVar2 = lVar3 + 1;
  } while (param_1[lVar2] != 0);
  bVar1 = false;
  psVar4 = param_1 + lVar3;
  if (*param_1 != 0x22) goto LAB_14000bbd5;
  if (*psVar4 != 0x22) goto LAB_14000bbd5;
  bVar1 = true;
  do {
    psVar4 = psVar4 + -1;
LAB_14000bbd5:
  } while ((param_1 < psVar4) && ((*psVar4 == 0x20 || (*psVar4 == 0x2e))));
  if (bVar1) {
    psVar4 = psVar4 + 1;
    *psVar4 = 0x22;
  }
  psVar4[1] = 0;
  return;
}



void FUN_14000bbec(ulonglong param_1)

{
  HMODULE hModule;
  errno_t eVar1;
  int iVar2;
  wchar_t **ppwVar3;
  HRSRC hResInfo;
  HGLOBAL pvVar4;
  uint uVar5;
  undefined auStackY_688 [32];
  wchar_t local_638 [8];
  wchar_t local_628 [256];
  wchar_t local_428 [256];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStackY_688;
  if (DAT_14003ddf0 == '\0') {
    ppwVar3 = (wchar_t **)__p__wpgmptr();
    _wsplitpath_s(*ppwVar3,local_638,3,local_428,0x100,local_628,0x100,(wchar_t *)0x0,0);
    _wmakepath_s(local_228,0x104,local_638,local_428,(wchar_t *)0x0,(wchar_t *)0x0);
    eVar1 = wcsncat_s(local_628,0x100,L"UI.DLL",0xffffffffffffffff);
    if (eVar1 == 0) {
      iVar2 = FUN_1400092b4(local_228,local_628);
      if (iVar2 < 0) {
        DAT_14003ddf8 = (HMODULE)0x0;
      }
    }
    else {
      DAT_14003ddf8 = (HMODULE)0x0;
    }
    DAT_14003ddf0 = '\x01';
  }
  hModule = DAT_14003ddf8;
  hResInfo = FindResourceExW(DAT_14003ddf8,(LPCWSTR)0x6,
                             (LPCWSTR)(ulonglong)(ushort)((short)((param_1 & 0xffffffff) >> 4) + 1),
                             DAT_14003de00);
  if (((hResInfo != (HRSRC)0x0) && (pvVar4 = LoadResource(hModule,hResInfo), pvVar4 != (HGLOBAL)0x0)
      ) && (uVar5 = (uint)(param_1 & 0xffffffff) & 0xf, (param_1 & 0xf) != 0)) {
    do {
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_688);
  return;
}



undefined * FUN_14000bd80(void)

{
  return &DAT_14003d120;
}



// Library Function - Multiple Matches With Different Base Names
//  sprintf_s
//  swprintf_s
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

int __cdecl FID_conflict_sprintf_s(wchar_t *_Dst,size_t _SizeInWords,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_14000bd80();
  iVar1 = __stdio_common_vswprintf_s(*puVar2,_Dst,_SizeInWords,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



undefined * FUN_14000bddc(void)

{
  return &DAT_14003d130;
}



// Library Function - Single Match
//  swscanf_s
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl swscanf_s(wchar_t *_Src,wchar_t *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)FUN_14000bddc();
  iVar1 = __stdio_common_vswscanf(*puVar2 | 1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar1;
}



longlong FUN_14000be34(FILE *param_1)

{
  int _FileHandle;
  DWORD DVar1;
  BOOL BVar2;
  HANDLE hFile;
  longlong lVar3;
  undefined4 extraout_var;
  DWORD local_res10 [6];
  
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  DVar1 = GetFileType(hFile);
  if ((DVar1 & 0xffff7fff) == 2) {
    BVar2 = GetConsoleMode(hFile,local_res10);
    lVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),BVar2 != 0);
  }
  else {
    lVar3 = (ulonglong)(uint3)((DVar1 & 0xffff7fff) >> 8) << 8;
  }
  return lVar3;
}



void FUN_14000be7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14000bf3c(param_1,&local_res10);
  return;
}



wint_t FUN_14000bea4(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_140037093 == '\0') {
    _File = (FILE *)__acrt_iob_func(2);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void FUN_14000bee0(FILE *param_1)

{
  int _FileHandleDst;
  int _FileHandleSrc;
  FILE *pFVar1;
  longlong lVar2;
  
  pFVar1 = (FILE *)__acrt_iob_func(2);
  _FileHandleDst = _fileno(pFVar1);
  _FileHandleSrc = _fileno(param_1);
  _dup2(_FileHandleSrc,_FileHandleDst);
  pFVar1 = (FILE *)__acrt_iob_func(2);
  lVar2 = FUN_14000be34(pFVar1);
  DAT_140037093 = (char)lVar2;
  return;
}



void FUN_14000bf3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_140037093 == '\0') {
    uVar2 = __acrt_iob_func(2);
    puVar1 = (undefined8 *)FUN_14000bd80();
    __stdio_common_vfwprintf(*puVar1,uVar2,param_1,0,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_14000bd80();
    __conio_common_vcwprintf(*puVar1,param_1,0,param_2);
  }
  return;
}



int FUN_14000bfb0(void)

{
  int iVar1;
  FILE *_File;
  
  if (DAT_1400370b0 != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(1);
                    // WARNING: Could not recover jumptable at 0x00014000bfd6. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_14000bfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14000c044(param_1,&local_res10);
  return;
}



wint_t FUN_14000c008(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_1400370b0 == '\0') {
    _File = (FILE *)__acrt_iob_func(1);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void FUN_14000c044(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_1400370b0 == '\0') {
    uVar2 = __acrt_iob_func(1);
    puVar1 = (undefined8 *)FUN_14000bd80();
    __stdio_common_vfwprintf(*puVar1,uVar2,param_1,0,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_14000bd80();
    __conio_common_vcwprintf(*puVar1,param_1,0,param_2);
  }
  return;
}



void FUN_14000c0b8(undefined8 param_1,undefined8 param_2,LPWIN32_FIND_DATAW param_3,HANDLE *param_4)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  longlong lVar10;
  byte bVar11;
  LPWIN32_FIND_DATAW p_Var12;
  
  iVar5 = DAT_140015048 + 1;
  DAT_14002648a = 1;
  uVar6 = DAT_140015048 + 2;
  DAT_140015048 = uVar6;
  (&DAT_140036cd0)[iVar5] = 0x17;
  if (0xf < (ulonglong)(longlong)(int)uVar6) {
    __report_rangecheckfailure();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (&DAT_140036cd0)[(int)uVar6] = 0;
  DAT_140025c24 = DAT_140025c20;
  uVar4 = FUN_140007f84((ulonglong)uVar6,(LPWIN32_FIND_DATAW)0x0,param_3,param_4);
  uVar7 = (ulonglong)(int)DAT_140015048;
  uVar4 = uVar4 & 0xff;
  bVar11 = 0;
  p_Var12 = (LPWIN32_FIND_DATAW)CONCAT71((int7)((ulonglong)param_3 >> 8),(&DAT_140036cd0)[uVar7]);
  uVar8 = uVar7;
  do {
    uVar6 = (uint)uVar8;
    if ((char)p_Var12 == '\x17') {
      DAT_140015048 = uVar6 - 1;
      return;
    }
    if (((ulonglong)p_Var12 & 0x40) == 0) {
      cVar9 = (char)((ulonglong)p_Var12 & 0xff);
      if (((ulonglong)p_Var12 & 0x10) != 0) {
        if (cVar9 == (char)uVar4) {
          DAT_140015048 = uVar6 - 1;
          bVar1 = (&DAT_140036cd0)[(int)DAT_140015048];
          uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar1);
          if ((bVar1 & 0x40) != 0) {
            DAT_140015048 = uVar6 - 2;
            (*(code *)(&PTR_FUN_140011b50)[bVar1 & 0xf])();
          }
          uVar8 = (ulonglong)DAT_140015048;
          DAT_140025c24 = DAT_140025c20;
          if (bVar11 != 0) {
            if (DAT_140025c50 == 10) {
              DAT_140025c24 = DAT_140025c20 - 1;
            }
            uVar4 = (ulonglong)bVar11;
            bVar11 = 0;
            goto LAB_14000c2c3;
          }
          uVar4 = FUN_140007f84(uVar7,(LPWIN32_FIND_DATAW)
                                      (ulonglong)
                                      CONCAT31((int3)(DAT_140015048 >> 8),
                                               (&DAT_140036cd0)[(int)DAT_140015048]),p_Var12,param_4
                               );
          uVar4 = uVar4 & 0xff;
          DAT_140025c24 = DAT_140025c20;
        }
        else {
          uVar7 = (ulonglong)DAT_140025c24;
          p_Var12 = (LPWIN32_FIND_DATAW)&DAT_140025c50;
          FUN_140003898(uVar7,0x409,(ulonglong)&DAT_140025c50,param_4);
        }
        goto LAB_14000c210;
      }
      lVar10 = ((ulonglong)p_Var12 & 0xff) * 8;
      bVar1 = (&DAT_140011ba0)[(ulonglong)((uint)uVar4 & 0xf) + lVar10];
      if ((bVar1 & 0x20) != 0) {
        uVar7 = (ulonglong)DAT_140025c24;
        p_Var12 = (LPWIN32_FIND_DATAW)&DAT_140025c50;
        FUN_140003898(uVar7,(ulonglong)(bVar1 + 1000),(ulonglong)&DAT_140025c50,param_4);
        uVar6 = DAT_140015048;
      }
      DAT_140015048 = uVar6 - 1;
      uVar8 = (ulonglong)DAT_140015048;
      uVar3 = (ulonglong)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar11 == 0) {
          uVar7 = FUN_140007f84(uVar7,(LPWIN32_FIND_DATAW)
                                      (ulonglong)CONCAT31((int3)(DAT_140015048 >> 8),cVar9),p_Var12,
                                param_4);
          uVar8 = (ulonglong)DAT_140015048;
          bVar11 = (byte)uVar7;
        }
        uVar3 = (ulonglong)
                ((bVar1 & 0xf) + (uint)(byte)(&DAT_140011b80)[(ulonglong)(bVar11 & 0xf) + lVar10]);
      }
      uVar7 = uVar3;
      param_4 = (HANDLE *)(&PTR_DAT_140011be0)[uVar7];
      p_Var12 = (LPWIN32_FIND_DATAW)(ulonglong)*(byte *)param_4;
      if (*(byte *)param_4 != 0) {
        do {
          DAT_140015048 = (int)uVar8 + 1;
          uVar8 = (ulonglong)DAT_140015048;
          uVar7 = (ulonglong)(int)DAT_140015048;
          (&DAT_140036cd0)[uVar7] =
               *(byte *)((longlong)param_4 + (longlong)(p_Var12->cFileName + -0x16));
          uVar6 = (int)p_Var12 - 1;
          p_Var12 = (LPWIN32_FIND_DATAW)(ulonglong)uVar6;
        } while (uVar6 != 0);
      }
    }
    else {
      DAT_140015048 = uVar6 - 1;
      (*(code *)(&PTR_FUN_140011b50)[(uint)p_Var12 & 0xf])();
LAB_14000c210:
      uVar8 = (ulonglong)DAT_140015048;
    }
LAB_14000c2c3:
    p_Var12 = (LPWIN32_FIND_DATAW)
              CONCAT71((int7)((ulonglong)p_Var12 >> 8),(&DAT_140036cd0)[(int)uVar8]);
  } while( true );
}



ulonglong FUN_14000c304(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_2 + lVar1 * 2) != 0);
  uVar2 = param_1 + lVar1;
  if (0x28 < (ulonglong)(param_1 + lVar1)) {
    FUN_14000bfe0(L"\n\t\t\t",param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_14000c33c(uint param_1,undefined8 param_2,FILETIME param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined auStackY_a8 [32];
  FILETIME local_78;
  _FILETIME local_70;
  _SYSTEMTIME local_68;
  WCHAR local_58 [12];
  WCHAR local_40 [20];
  ulonglong local_18;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStackY_a8;
  local_78 = param_3;
  if (param_3 == (FILETIME)0x0) {
    FUN_1400039c0(6,(ulonglong)(param_1 + 0x1a),0x20,param_2);
  }
  else {
    BVar1 = FileTimeToLocalFileTime(&local_78,&local_70);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_70,&local_68);
      if (BVar1 != 0) {
        iVar2 = GetDateFormatW(0x400,0,&local_68,L"ddd, MMM dd yyyy",local_40,0x14);
        if (iVar2 != 0) {
          iVar2 = GetTimeFormatW(0x400,0,&local_68,L"HH:mm:ss",local_58,0xc);
          if (iVar2 != 0) {
            FUN_1400039c0(4,local_40,local_58,(ulonglong)param_1);
          }
        }
      }
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_a8);
  return;
}



void FUN_14000c458(undefined8 *param_1,ulonglong *param_2,wchar_t **param_3,ulonglong **param_4)

{
  wchar_t *pwVar1;
  wchar_t *_Memory;
  wchar_t *pwVar2;
  void *pvVar3;
  ulonglong uVar4;
  wchar_t **ppwVar5;
  undefined auStack_2c8 [32];
  wchar_t *local_2a8;
  wchar_t *local_2a0;
  ulonglong *local_298 [2];
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_140015008 ^ (ulonglong)auStack_2c8;
  local_298[0] = param_2;
  FUN_1400039c0(0xc,param_2,param_3,param_4);
  uVar4 = 0;
  for (; param_1 != (undefined8 *)0x0; param_1 = (undefined8 *)*param_1) {
    pwVar1 = wcschr((wchar_t *)param_1[1],L'$');
    if (pwVar1 == (wchar_t *)0x0) {
      pwVar1 = wcspbrk((wchar_t *)param_1[1],L"*?");
      if (pwVar1 == (wchar_t *)0x0) {
        FUN_14000bfe0(&DAT_140012f60,param_1[1],param_3,param_4);
        uVar4 = FUN_14000c304(uVar4,param_1[1],param_3,param_4);
      }
      else {
        param_3 = &local_2a8;
        pwVar1 = (wchar_t *)FUN_140005ca8((wchar_t *)param_1[1],&local_288,param_3,param_4);
        while (pwVar1 != (wchar_t *)0x0) {
          pvVar3 = (void *)FUN_14000f570((wchar_t *)param_1[1],pwVar1);
          FUN_14000bfe0(&DAT_140012f60,pvVar3,param_3,param_4);
          uVar4 = FUN_14000c304(uVar4,(longlong)pvVar3,param_3,param_4);
          free(pvVar3);
          pwVar1 = FUN_140005e30(&local_288,local_2a8);
        }
      }
    }
    else {
      local_2a0 = (wchar_t *)0x0;
      _Memory = (wchar_t *)FUN_14000e740((wchar_t *)param_1[1],'\x01',local_298,param_4);
      pwVar1 = _Memory;
      while( true ) {
        param_3 = &local_2a0;
        pwVar1 = wcstok_s(pwVar1,L" \t",param_3);
        if (pwVar1 == (wchar_t *)0x0) break;
        pwVar2 = wcspbrk(pwVar1,L"*?");
        if (pwVar2 == (wchar_t *)0x0) {
          FUN_14000bfe0(&DAT_140012f60,pwVar1,param_3,param_4);
          uVar4 = FUN_14000c304(uVar4,(longlong)pwVar1,param_3,param_4);
        }
        else {
          ppwVar5 = &local_2a8;
          pwVar2 = (wchar_t *)FUN_140005ca8(pwVar1,&local_288,ppwVar5,param_4);
          while (pwVar2 != (wchar_t *)0x0) {
            pvVar3 = (void *)FUN_14000f570(pwVar1,pwVar2);
            FUN_14000bfe0(&DAT_140012f60,pvVar3,ppwVar5,param_4);
            uVar4 = FUN_14000c304(uVar4,(longlong)pvVar3,ppwVar5,param_4);
            free(pvVar3);
            pwVar2 = FUN_140005e30(&local_288,local_2a8);
          }
        }
        pwVar1 = (wchar_t *)0x0;
      }
      free(_Memory);
    }
  }
  __security_check_cookie(local_38 ^ (ulonglong)auStack_2c8);
  return;
}



short * FUN_14000c958(void)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  undefined8 in_R9;
  
  psVar1 = (short *)((longlong)DAT_1400370d8 + 2);
  sVar3 = *psVar1;
  DAT_1400370d8 = psVar1;
  if (sVar3 != 0) {
    do {
      psVar2 = DAT_1400370d8;
      if ((sVar3 == 0x22) && (psVar2 = DAT_1400370d8 + 1, *psVar2 != 0x22)) break;
      DAT_1400370d8 = psVar2 + 1;
      sVar3 = *DAT_1400370d8;
    } while (sVar3 != 0);
    if (*DAT_1400370d8 != 0) goto LAB_14000c9c7;
  }
  FUN_140003898((ulonglong)DAT_140025c20,0x3fe,0x22,in_R9);
LAB_14000c9c7:
  *DAT_1400370d8 = 0;
  DAT_1400370d8 = DAT_1400370d8 + 1;
  return psVar1;
}



short * FUN_14000c9e0(void)

{
  short *_Src;
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined8 in_R9;
  
  psVar1 = (short *)((longlong)DAT_1400370d8 + 2);
  sVar2 = *psVar1;
  DAT_1400370d8 = psVar1;
  if (sVar2 != 0) {
    do {
      if ((sVar2 == 0x5e) && (_Src = DAT_1400370d8 + 1, *_Src == 0x5d)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (_Src[lVar3] != 0);
        memmove(DAT_1400370d8,_Src,lVar3 * 2 + 2);
      }
      else if (sVar2 == 0x5d) break;
      DAT_1400370d8 = DAT_1400370d8 + 1;
      sVar2 = *DAT_1400370d8;
    } while (sVar2 != 0);
    if (*DAT_1400370d8 != 0) goto LAB_14000ca81;
  }
  FUN_140003898((ulonglong)DAT_140025c20,0x3fe,0x5d,in_R9);
LAB_14000ca81:
  *DAT_1400370d8 = 0;
  DAT_1400370d8 = DAT_1400370d8 + 1;
  return psVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14000caa0(byte param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  
  if (param_1 == 0x19) {
    bVar1 = 3;
  }
  else if (param_1 == 0) {
    bVar1 = 4;
  }
  else if (param_1 < 0x16) {
    bVar1 = (0x12 < param_1) + 1;
  }
  else {
    bVar1 = 0;
  }
  if ((&DAT_140011cc0)[(ulonglong)DAT_1400370b1 * 5 + (ulonglong)bVar1] == '\0') {
    FUN_140003898((ulonglong)DAT_140025c20,0x3ff,param_3,param_4);
  }
  DAT_1400370b1 = bVar1;
  _DAT_1400370c0 = param_2;
  DAT_1400370b3 = param_1;
  DAT_1400370b8 = param_1;
  return;
}



short * FUN_14000cb34(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  for (; (sVar1 = *DAT_1400370d8, sVar1 == 0x20 || (sVar1 == 9)); DAT_1400370d8 = DAT_1400370d8 + 1)
  {
  }
  psVar2 = DAT_1400370d8;
  if (sVar1 != 0x28) {
    FUN_140003898((ulonglong)DAT_140025c20,0x3ff,param_3,param_4);
    psVar2 = DAT_1400370d8;
  }
  do {
    do {
      psVar2 = psVar2 + 1;
      sVar1 = *psVar2;
    } while (sVar1 == 0x20);
  } while (sVar1 == 9);
  DAT_1400370d8 = psVar2;
  psVar3 = psVar2;
  if (sVar1 == 0x22) {
    psVar2 = FUN_14000c958();
    for (; (sVar1 = *DAT_1400370d8, sVar1 == 0x20 || (sVar1 == 9));
        DAT_1400370d8 = DAT_1400370d8 + 1) {
    }
    if (sVar1 != 0x29) {
      FUN_140003898((ulonglong)DAT_140025c20,0x3ff,param_3,param_4);
    }
    DAT_1400370d8 = DAT_1400370d8 + 1;
  }
  else {
    while( true ) {
      sVar1 = *DAT_1400370d8;
      DAT_1400370d8 = DAT_1400370d8 + 1;
      if (sVar1 == 0) {
        FUN_140003898((ulonglong)DAT_140025c20,0x3ff,param_3,param_4);
      }
      if (sVar1 == 0x29) break;
      if ((sVar1 != 0x20) && (sVar1 != 9)) {
        psVar3 = DAT_1400370d8;
      }
    }
    *psVar3 = 0;
  }
  return psVar2;
}



void FUN_14000cc64(void)

{
  ushort _C;
  bool bVar1;
  wint_t wVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  short *psVar6;
  int *piVar7;
  wchar_t *pwVar8;
  byte bVar9;
  ushort **ppuVar10;
  wchar_t *pwVar11;
  undefined **ppuVar12;
  ulonglong in_R9;
  
  for (; (_C = *(ushort *)DAT_1400370d8, _C == 0x20 || (_C == 9));
      DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 2)) {
  }
  ppuVar10 = DAT_1400370d8;
  if ((_C < 0x80) && (((&DAT_140011640)[_C] & 2) != 0)) {
    ppuVar12 = &PTR_DAT_1400150a0;
    puVar5 = (ushort *)PTR_DAT_1400150a0;
    if (PTR_DAT_1400150a0 == (undefined *)0x0) goto LAB_14000cd3a;
    do {
      in_R9 = (ulonglong)*puVar5;
      ppuVar10 = DAT_1400370d8;
      if (*puVar5 == 0) goto LAB_14000cd3a;
      do {
        if (*(short *)ppuVar10 != (short)in_R9) break;
        puVar5 = puVar5 + 1;
        ppuVar10 = (ushort **)((longlong)ppuVar10 + 2);
        in_R9 = (ulonglong)*puVar5;
      } while (*puVar5 != 0);
      if (*puVar5 == 0) goto LAB_14000cd3a;
      ppuVar12 = (undefined **)((ushort **)ppuVar12 + 2);
      puVar5 = (ushort *)*ppuVar12;
    } while (puVar5 != (ushort *)0x0);
  }
  else {
    ppuVar12 = (undefined **)&DAT_1400151f0;
LAB_14000cd3a:
    DAT_1400370d8 = ppuVar10;
    if ((ushort *)*ppuVar12 != (ushort *)0x0) {
      bVar9 = *(byte *)((ushort **)ppuVar12 + 1);
      psVar6 = (short *)0x0;
      goto LAB_14000ceb4;
    }
  }
  if (_C == 0x2d) {
    DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 2);
    psVar6 = (short *)0x0;
    if (DAT_1400370b3 == '\x16') {
      bVar9 = 0xe;
    }
    else {
      bVar9 = 0x13;
    }
  }
  else if (_C == 0x22) {
    psVar6 = FUN_14000c958();
    bVar9 = 0x17;
  }
  else if (_C == 0x5b) {
    psVar6 = FUN_14000c9e0();
    bVar9 = 0x18;
  }
  else {
    iVar3 = iswdigit(_C);
    ppuVar10 = DAT_1400370d8;
    if (iVar3 == 0) {
      if (_C == 0) {
        psVar6 = (short *)0x0;
        DAT_1400370b2 = 1;
        bVar9 = 0;
        goto LAB_14000ceb4;
      }
      pwVar11 = L"DEFINED";
      ppuVar12 = (undefined **)0x7;
      iVar3 = _wcsnicmp((wchar_t *)DAT_1400370d8,L"DEFINED",7);
      if (iVar3 == 0) {
        DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 0xe);
        pwVar8 = FUN_14000cb34(ppuVar10,pwVar11,(ulonglong)ppuVar12,in_R9);
        bVar1 = FUN_14000d180(pwVar8,pwVar11,ppuVar12,in_R9);
      }
      else {
        pwVar11 = L"EXISTS";
        ppuVar12 = (undefined **)0x6;
        ppuVar10 = DAT_1400370d8;
        iVar3 = _wcsnicmp((wchar_t *)DAT_1400370d8,L"EXISTS",6);
        if (iVar3 == 0) {
          DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 0xc);
        }
        else {
          pwVar11 = L"EXIST";
          ppuVar12 = (undefined **)0x5;
          ppuVar10 = DAT_1400370d8;
          iVar3 = _wcsnicmp((wchar_t *)DAT_1400370d8,L"EXIST",5);
          if (iVar3 != 0) {
            FUN_140003898((ulonglong)DAT_140025c20,0x3ff,(ulonglong)ppuVar12,in_R9);
            return;
          }
          DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 10);
        }
        pwVar11 = FUN_14000cb34(ppuVar10,pwVar11,(ulonglong)ppuVar12,in_R9);
        iVar3 = _waccess(pwVar11,0);
        bVar1 = iVar3 == 0;
      }
      psVar6 = (short *)(ulonglong)bVar1;
    }
    else {
      piVar7 = _errno();
      ppuVar12 = (undefined **)0x0;
      *piVar7 = 0;
      lVar4 = wcstol((wchar_t *)DAT_1400370d8,(wchar_t **)&DAT_1400370d8,0);
      psVar6 = (short *)(longlong)lVar4;
      piVar7 = _errno();
      if (*piVar7 == 0x22) {
        *(undefined2 *)DAT_1400370d8 = 0;
        FUN_140003898((ulonglong)DAT_140025c20,0x436,(ulonglong)ppuVar10,in_R9);
        ppuVar12 = (undefined **)ppuVar10;
      }
      wVar2 = towupper(*(wint_t *)DAT_1400370d8);
      if (wVar2 == 0x4c) {
        DAT_1400370d8 = (ushort **)((longlong)DAT_1400370d8 + 2);
      }
    }
    bVar9 = 0x16;
  }
LAB_14000ceb4:
  FUN_14000caa0(bVar9,psVar6,(ulonglong)ppuVar12,in_R9);
  return;
}



void FUN_14000cee0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_1400370d0 < &DAT_14003b0e0) {
    FUN_140003898((ulonglong)DAT_140025c20,0x3ff,param_3,param_4);
  }
  if (&DAT_14003b0d0 < DAT_1400370c8) {
    FUN_140003898((ulonglong)DAT_140025c20,0x412,param_3,param_4);
  }
  uVar1 = DAT_1400370d0[1];
  uVar2 = DAT_1400370d0[2];
  uVar3 = DAT_1400370d0[3];
  *DAT_1400370c8 = *DAT_1400370d0;
  DAT_1400370c8[1] = uVar1;
  DAT_1400370c8[2] = uVar2;
  DAT_1400370c8[3] = uVar3;
  DAT_1400370c8 = DAT_1400370c8 + 4;
  DAT_1400370d0 = DAT_1400370d0 + -4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_14000cf64(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined uVar13;
  undefined7 uVar14;
  bool bVar15;
  
  uVar13 = (undefined)param_3;
  uVar14 = (undefined7)(param_3 >> 8);
  DAT_1400370b1 = 3;
  puVar12 = (uint *)&DAT_1400370e0;
  DAT_1400370d0 = (uint *)&DAT_14003b0e0;
  bVar15 = false;
  DAT_1400370c8 = (uint *)&DAT_1400370e0;
  DAT_1400370b2 = '\0';
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),0x19);
  DAT_1400370b3 = 0x19;
  FUN_14000caa0(0x19,0,param_3,param_4);
  puVar11 = DAT_1400370d0;
  uVar4 = uRam00000001400370c4;
  uVar3 = _DAT_1400370c0;
  uVar2 = uRam00000001400370bc;
  cVar5 = DAT_1400370b2;
  *DAT_1400370d0 = _DAT_1400370b8;
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
joined_r0x00014000cfcc:
  do {
    if (cVar5 != '\0') {
      if (puVar11 != (uint *)&DAT_14003b0d0) {
        FUN_140003898((ulonglong)DAT_140025c20,0x3ff,CONCAT71(uVar14,uVar13),param_4);
        puVar11 = DAT_1400370d0;
      }
      for (; puVar12 < DAT_1400370c8; puVar12 = puVar12 + 4) {
        if (*(byte *)puVar12 < 0x16) {
          pcVar8 = (code *)&LAB_14000c658;
          if (0x12 < *(byte *)puVar12) {
            pcVar8 = (code *)&LAB_14000c914;
          }
          cVar5 = (*pcVar8)(CONCAT71(0x14000c9,*(byte *)puVar12));
          puVar11 = DAT_1400370d0;
          if (cVar5 == '\0') {
            FUN_140003898((ulonglong)DAT_140025c20,0x438,CONCAT71(uVar14,uVar13),param_4);
            puVar11 = DAT_1400370d0;
          }
        }
        else {
          puVar10 = puVar11 + 4;
          DAT_1400370d0 = puVar10;
          if (*(byte *)puVar12 == 0x18) {
            param_4 = 0;
            uVar13 = 1;
            iVar6 = FUN_140005114(*(int ***)(puVar12 + 2),'\0',(int **)CONCAT71(uVar14,1),(int *)0x0
                                  ,(void **)0x0);
            puVar11 = DAT_1400370d0;
            *(longlong *)(DAT_1400370d0 + 2) = (longlong)iVar6;
            *(byte *)puVar11 = 0x16;
          }
          else {
            uVar2 = puVar12[1];
            uVar3 = puVar12[2];
            uVar4 = puVar12[3];
            *puVar10 = *puVar12;
            puVar11[5] = uVar2;
            puVar11[6] = uVar3;
            puVar11[7] = uVar4;
            puVar11 = puVar10;
          }
        }
      }
      if ((puVar11 == (uint *)&DAT_14003b0e0) && (DAT_14003b0e0 == '\x16')) {
        bVar15 = DAT_14003b0e8 != 0;
      }
      else {
        FUN_140003898((ulonglong)DAT_140025c20,0x3ff,CONCAT71(uVar14,uVar13),param_4);
      }
      return bVar15;
    }
    FUN_14000cc64();
    if (DAT_1400370b8 != 0x19) {
      uVar7 = (ulonglong)DAT_1400370b8;
      while( true ) {
        bVar1 = (&DAT_140011ce0)[uVar7];
        uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar1);
        if ((byte)(&DAT_140011ce0)[*(byte *)DAT_1400370d0] <= bVar1 &&
            bVar1 != (&DAT_140011ce0)[*(byte *)DAT_1400370d0]) break;
        if (bVar1 == 0) goto LAB_14000d049;
        FUN_14000cee0(uVar9,DAT_1400370d0,CONCAT71(uVar14,uVar13),param_4);
        uVar7 = (ulonglong)(_DAT_1400370b8 & 0xff);
      }
    }
    uVar4 = uRam00000001400370c4;
    uVar3 = _DAT_1400370c0;
    uVar2 = uRam00000001400370bc;
    if (DAT_1400370d0 == (uint *)&DAT_14003d0d0) {
      uVar9 = (ulonglong)DAT_140025c20;
      FUN_140003898(uVar9,0x412,CONCAT71(uVar14,uVar13),param_4);
      puVar11 = DAT_1400370d0;
      cVar5 = DAT_1400370b2;
    }
    else {
      puVar11 = DAT_1400370d0 + 4;
      *puVar11 = _DAT_1400370b8;
      DAT_1400370d0[5] = uVar2;
      DAT_1400370d0[6] = uVar3;
      DAT_1400370d0[7] = uVar4;
      DAT_1400370d0 = puVar11;
      cVar5 = DAT_1400370b2;
    }
  } while( true );
LAB_14000d049:
  while (*(byte *)DAT_1400370d0 != 0x19) {
    FUN_14000cee0(uVar9,DAT_1400370d0,CONCAT71(uVar14,uVar13),param_4);
  }
  if (DAT_1400370d0 < &DAT_14003b0e0) {
    uVar9 = (ulonglong)DAT_140025c20;
    FUN_140003898(uVar9,0x3ff,CONCAT71(uVar14,uVar13),param_4);
  }
  puVar11 = DAT_1400370d0 + -4;
  DAT_1400370d0 = puVar11;
  cVar5 = DAT_1400370b2;
  goto joined_r0x00014000cfcc;
}



bool FUN_14000d180(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t **ppwVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  wchar_t **_Context;
  wchar_t *local_res10 [3];
  
  local_res10[0] = (wchar_t *)0x0;
  ppwVar1 = (wchar_t **)wcstok_s(param_1,L" \t",local_res10);
  _Context = local_res10;
  pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",_Context);
  if (pwVar2 != (wchar_t *)0x0) {
    _Context = ppwVar1;
    FUN_140003898((ulonglong)DAT_140025c20,0x409,(ulonglong)ppwVar1,param_4);
  }
  if (ppwVar1 == (wchar_t **)0x0) {
    FUN_140003898((ulonglong)DAT_140025c20,0x417,(ulonglong)_Context,param_4);
  }
  puVar3 = FUN_14000918c((ushort *)ppwVar1);
  return puVar3 != (undefined8 *)0x0;
}



bool FUN_14000d1f8(wchar_t *param_1,byte param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  uint uVar3;
  ulonglong uVar4;
  
  pwVar2 = param_1;
  if (*param_1 == L'\0') {
    pwVar2 = (wchar_t *)(ulonglong)DAT_140025c20;
    FUN_140003898((ulonglong)pwVar2,0x3fa,param_3,param_4);
  }
  uVar3 = (uint)param_2;
  uVar4 = (ulonglong)(uVar3 - 4);
  if (uVar3 - 4 == 0) {
LAB_14000d259:
    bVar1 = FUN_14000d180(param_1,uVar4,param_3,param_4);
  }
  else {
    uVar4 = (ulonglong)(uVar3 - 5);
    if (uVar3 - 5 != 0) {
      uVar3 = uVar3 - 6;
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) goto LAB_14000d259;
      if (uVar3 != 1) {
        DAT_1400370d8 = param_1;
        bVar1 = FUN_14000cf64(pwVar2,uVar4,param_3,param_4);
        return bVar1;
      }
    }
    bVar1 = FUN_14000d180(param_1,uVar4,param_3,param_4);
    bVar1 = !bVar1;
  }
  return bVar1;
}



longlong *
FUN_14000d274(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,wchar_t *param_4,
             LPWIN32_FIND_DATAW param_5)

{
  wchar_t *_Str;
  FILETIME FVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  longlong lVar11;
  HANDLE hFindFile;
  undefined8 uVar12;
  rsize_t rVar13;
  wchar_t *pwVar14;
  rsize_t _MaxCount;
  uint uVar15;
  int iVar16;
  wchar_t *pwVar17;
  rsize_t _MaxCount_00;
  wchar_t *pwVar18;
  longlong lVar19;
  ulonglong uVar20;
  int local_res10;
  longlong *local_58;
  
  local_58 = DAT_140025c00;
  pwVar18 = param_3;
  pwVar7 = param_4;
  if (DAT_140025c00 != (longlong *)0x0) {
    do {
      pwVar8 = (wchar_t *)local_58[2];
      pwVar5 = wcsrchr(pwVar8,L'.');
      iVar4 = FUN_14000fb60(pwVar5,param_4);
      if (iVar4 == 0) {
        pwVar9 = pwVar8 + 1;
        *param_1 = L'\0';
        wVar3 = *pwVar9;
        pwVar14 = pwVar9;
        if (wVar3 != L'\0') {
          do {
            if (wVar3 == L'{') break;
            if (wVar3 == L'^') {
              pwVar14 = pwVar14 + 1;
            }
            else {
              pwVar18 = (wchar_t *)0x22;
              if (wVar3 == L'\"') {
                do {
                  pwVar14 = pwVar14 + 1;
                } while (*pwVar14 != L'\"');
              }
            }
            pwVar14 = pwVar14 + 1;
            wVar3 = *pwVar14;
          } while (wVar3 != L'\0');
          pwVar17 = pwVar14;
          if (*pwVar14 != L'\0') {
            do {
              if (*pwVar17 == L'}') break;
              if (*pwVar17 == L'^') {
                pwVar17 = pwVar17 + 1;
              }
              pwVar17 = pwVar17 + 1;
            } while (*pwVar17 != L'\0');
            uVar20 = (longlong)pwVar17 + (-2 - (longlong)pwVar14) >> 1;
            iVar16 = (int)uVar20;
            uVar20 = uVar20 & 0xffffffff;
            iVar4 = (int)uVar20;
            pwVar18 = param_3;
            if (*param_3 == L'\"') {
              pwVar18 = param_3 + 1;
            }
            pwVar5 = pwVar14 + 1;
            if (iVar16 == 0) {
LAB_14000d3e3:
              pwVar18 = (wchar_t *)0x5c;
              if (iVar4 == -1) goto LAB_14000d7cd;
            }
            else {
              lVar19 = (longlong)pwVar18 - (longlong)pwVar5;
              do {
                if ((*pwVar5 == L'\\') || (*pwVar5 == L'/')) {
                  if ((*(short *)(lVar19 + (longlong)pwVar5) != 0x5c) &&
                     (*(short *)(lVar19 + (longlong)pwVar5) != 0x2f)) {
                    iVar4 = -1;
                    goto LAB_14000d3e3;
                  }
                }
                else {
                  pwVar18 = (wchar_t *)0x1;
                  iVar4 = _wcsnicmp(pwVar5,(wchar_t *)(lVar19 + (longlong)pwVar5),1);
                  if (iVar4 != 0) goto LAB_14000d7cd;
                }
                pwVar5 = pwVar5 + 1;
                uVar15 = (int)uVar20 - 1;
                uVar20 = (ulonglong)uVar15;
              } while (uVar15 != 0);
            }
            pwVar18 = (wchar_t *)0x5c;
            _Str = param_3 + (longlong)iVar16 + 1;
            pwVar6 = wcschr(_Str,L'\\');
            pwVar5 = pwVar14;
            if (((pwVar6 != (wchar_t *)0x0) ||
                (pwVar6 = wcschr(_Str,L'/'), pwVar6 != (wchar_t *)0x0)) &&
               ((pwVar6 != _Str || ((pwVar17[-1] == L'\\' || (pwVar17[-1] == L'/'))))))
            goto LAB_14000d7cd;
          }
        }
        local_res10 = (int)param_2;
        if (*pwVar8 == L'{') {
          wVar3 = *pwVar9;
          pwVar18 = pwVar9;
          while ((wVar3 != L'\0' && (*pwVar18 != L'}'))) {
            if (*pwVar18 == L'^') {
              pwVar18 = pwVar18 + 1;
            }
            pwVar18 = pwVar18 + 1;
            wVar3 = *pwVar18;
          }
          _MaxCount_00 = (longlong)pwVar18 - (longlong)pwVar9 >> 1;
          iVar4 = (int)_MaxCount_00;
          if (iVar4 == 0) {
            if (*param_3 == L'\"') {
              _MaxCount_00 = 3;
              pwVar18 = L"\".\\";
            }
            else {
              _MaxCount_00 = 2;
              pwVar18 = L".\\";
            }
            rVar13 = _MaxCount_00;
            wcsncpy_s(param_1,param_2,pwVar18,_MaxCount_00);
            pwVar18 = pwVar8 + 2;
          }
          else {
            _MaxCount = (rsize_t)iVar4;
            rVar13 = _MaxCount;
            wcsncpy_s(param_1,param_2,pwVar9,_MaxCount);
            pwVar18 = pwVar9 + (int)(iVar4 + 1U);
            if (pwVar18[-2] != L'\\') {
              param_1[_MaxCount] = L'\\';
              _MaxCount_00 = (rsize_t)(iVar4 + 1U);
            }
          }
          pwVar7 = wcsrchr(param_3,L'\\');
          pwVar8 = wcsrchr(param_3,L'/');
          if (pwVar7 < pwVar8) {
            pwVar7 = pwVar8;
          }
          iVar4 = (int)_MaxCount_00;
          if (pwVar7 == (wchar_t *)0x0) {
            pwVar7 = param_3;
            if (*param_3 == L'\"') {
              pwVar7 = param_3 + 1;
            }
            pwVar9 = pwVar7;
            wcscpy_s(param_1 + iVar4,param_2 - (longlong)iVar4,pwVar7);
            lVar19 = -(longlong)pwVar7;
          }
          else {
            pwVar9 = pwVar7 + 1;
            wcscpy_s(param_1 + iVar4,param_2 - (longlong)iVar4,pwVar9);
            lVar19 = -2 - (longlong)pwVar7;
          }
          iVar4 = iVar4 + (int)((longlong)param_4 + lVar19 >> 1);
        }
        else {
          pwVar9 = param_3;
          if (*pwVar14 != L'\0') {
            pwVar9 = wcsrchr(param_3,L'.');
            wVar3 = *pwVar9;
            if (wVar3 != L':') {
              do {
                if (((wVar3 == L'\\') || (wVar3 == L'/')) || (pwVar9 <= param_3)) break;
                pwVar9 = pwVar9 + -1;
                wVar3 = *pwVar9;
              } while (wVar3 != L':');
              if ((0x2d < (ushort)(*pwVar9 + L'￑')) ||
                 ((0x200000000801U >> ((ulonglong)(ushort)(*pwVar9 + L'￑') & 0x3f) & 1) == 0))
              goto LAB_14000d627;
            }
            pwVar9 = pwVar9 + 1;
          }
LAB_14000d627:
          iVar4 = (int)((longlong)param_4 - (longlong)pwVar9 >> 1);
          rVar13 = (rsize_t)iVar4;
          iVar16 = 0;
          if ((pwVar9 != param_3) && (*param_3 == L'\"')) {
            *param_1 = L'\"';
            iVar16 = 1;
          }
          if (local_res10 - iVar16 <= iVar4) {
            FUN_140003898(0,0x434,(ulonglong)pwVar18,pwVar7);
          }
          wcsncpy_s(param_1 + iVar16,param_2 - (longlong)iVar16,pwVar9,rVar13);
          iVar4 = iVar4 + iVar16;
          pwVar18 = pwVar8;
        }
        iVar16 = (int)((longlong)pwVar5 - (longlong)pwVar18 >> 1);
        if (local_res10 - iVar4 <= iVar16) {
          FUN_140003898(0,0x434,(ulonglong)pwVar9,rVar13);
        }
        lVar19 = (longlong)iVar4;
        pwVar8 = (wchar_t *)(longlong)iVar16;
        rVar13 = param_2 - lVar19;
        pwVar7 = pwVar8;
        wcsncpy_s(param_1 + lVar19,rVar13,pwVar18,(rsize_t)pwVar8);
        if ((*param_1 == L'\"') && (param_1[(longlong)pwVar8 + lVar19 + -1] != L'\"')) {
          if ((local_res10 - iVar16) - iVar4 < 2) {
            rVar13 = 0x434;
            FUN_140003898(0,0x434,(ulonglong)pwVar18,pwVar7);
          }
          param_1[(longlong)pwVar8 + lVar19] = L'\"';
          iVar16 = iVar16 + 1;
        }
        param_1[iVar16 + lVar19] = L'\0';
        puVar10 = FUN_14000dde0(param_1,rVar13,pwVar18,pwVar7);
        if (puVar10 != (undefined8 *)0x0) {
          FVar1 = *(FILETIME *)(puVar10 + 3);
          param_5->ftCreationTime = FVar1;
          param_5->ftLastWriteTime = FVar1;
          return local_58;
        }
        bVar2 = false;
        pwVar8 = param_1;
        if (*param_1 == L'\"') {
          lVar19 = -1;
          do {
            lVar11 = lVar19;
            lVar19 = lVar11 + 1;
          } while (param_1[lVar19] != L'\0');
          if (param_1[lVar11] == L'\"') {
            pwVar8 = FUN_14000fcac(param_1,rVar13,pwVar18,pwVar7);
            bVar2 = true;
          }
        }
        hFindFile = FindFirstFileW(pwVar8,param_5);
        if ((hFindFile != (HANDLE)0xffffffffffffffff) &&
           (uVar12 = FUN_140005f9c(pwVar8,&param_5->dwFileAttributes,(ulonglong)pwVar18,pwVar7),
           (char)uVar12 != '\0')) {
          FindClose(hFindFile);
          if ((*(byte *)&param_5->dwFileAttributes & 0x10) != 0) {
            return local_58;
          }
          if ((param_5->ftLastWriteTime).dwLowDateTime != 0) {
            return local_58;
          }
          if ((param_5->ftLastWriteTime).dwHighDateTime != 0) {
            return local_58;
          }
          (param_5->ftLastWriteTime).dwLowDateTime = 0xffffffff;
          (param_5->ftLastWriteTime).dwHighDateTime = 0xffffffff;
          return local_58;
        }
        if (bVar2) {
          free(pwVar8);
        }
      }
LAB_14000d7cd:
      local_58 = (longlong *)*local_58;
    } while (local_58 != (longlong *)0x0);
  }
  return (longlong *)0x0;
}



void FUN_14000d80c(void)

{
  wchar_t *_Str1;
  longlong **pplVar1;
  longlong **pplVar2;
  short sVar3;
  int iVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  longlong **_Memory;
  size_t _MaxCount;
  longlong *plVar7;
  longlong *_Str2;
  undefined8 in_R9;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong *local_res8;
  
  _Memory = DAT_140025c00;
  local_res8 = (longlong *)0x0;
  DAT_140025c00 = (longlong **)0x0;
  puVar9 = DAT_140025c18;
  do {
    if (puVar9 == (undefined8 *)0x0) {
      while (_Memory != (longlong **)0x0) {
        if ((DAT_1400157ec & 1) != 0) {
          FUN_140003898(0,0xfa5,(ulonglong)_Memory[2],in_R9);
        }
        free(_Memory[2]);
        FUN_140002f98((longlong **)_Memory[3]);
        FUN_140002f98((longlong **)_Memory[4]);
        pplVar2 = (longlong **)*_Memory;
        free(_Memory);
        _Memory = pplVar2;
      }
      return;
    }
    _Str1 = (wchar_t *)puVar9[1];
    _MaxCount = 0xffffffffffffffff;
    do {
      _MaxCount = _MaxCount + 1;
      pplVar2 = _Memory;
    } while (_Str1[_MaxCount] != L'\0');
joined_r0x00014000d861:
    while (pplVar2 != (longlong **)0x0) {
      _Str2 = pplVar2[2];
      sVar3 = *(short *)_Str2;
      if (sVar3 == 0x7b) {
        do {
          plVar7 = _Str2;
          if (sVar3 == 0x5e) {
            plVar7 = (longlong *)((longlong)_Str2 + 2);
          }
          _Str2 = (longlong *)((longlong)plVar7 + 2);
          sVar3 = *(short *)_Str2;
        } while (sVar3 != 0x7d);
        _Str2 = (longlong *)((longlong)plVar7 + 4);
      }
      iVar4 = _wcsnicmp(_Str1,(wchar_t *)_Str2,_MaxCount);
      if ((iVar4 == 0) &&
         ((*(short *)((longlong)_Str2 + _MaxCount * 2) == 0x2e ||
          (*(short *)((longlong)_Str2 + _MaxCount * 2) == 0x7b)))) {
        if ((longlong **)pplVar2[1] == (longlong **)0x0) {
          _Memory = (longlong **)*pplVar2;
        }
        else {
          *pplVar2[1] = (longlong)*pplVar2;
        }
        if (*pplVar2 != (longlong *)0x0) {
          (*pplVar2)[1] = (longlong)pplVar2[1];
        }
        pplVar1 = (longlong **)*pplVar2;
        *pplVar2 = (longlong *)0x0;
        pplVar8 = DAT_140025c00;
        while( true ) {
          if (pplVar8 == (longlong **)0x0) goto code_r0x00014000d908;
          iVar4 = _wcsicmp((wchar_t *)pplVar8[2],(wchar_t *)pplVar2[2]);
          if (iVar4 == 0) break;
          pplVar8 = (longlong **)*pplVar8;
        }
        free(pplVar2[2]);
        while (pplVar8 = (longlong **)pplVar2[3], pplVar8 != (longlong **)0x0) {
          pplVar2[3] = *pplVar8;
          free(pplVar8[1]);
          *pplVar8 = (longlong *)DAT_14003d0e0;
          DAT_14003d0e0 = pplVar8;
        }
        free(pplVar2);
        pplVar2 = pplVar1;
      }
      else {
        pplVar2 = (longlong **)*pplVar2;
      }
    }
    puVar9 = (undefined8 *)*puVar9;
  } while( true );
code_r0x00014000d908:
  pplVar8 = (longlong **)pplVar2[3];
  while (pplVar8 != (longlong **)0x0) {
    DAT_14003d110 = *(char *)(pplVar2 + 5);
    if (DAT_14003d110 != '\0') {
      DAT_14003d118 = pplVar2[2];
    }
    in_R9 = 0;
    FUN_14000dfd0((wchar_t *)pplVar8[1],&local_res8,(longlong **)0x0,(ushort *)0x0,0,0,0);
    pplVar8 = (longlong **)*pplVar8;
    DAT_14003d110 = 0;
  }
  pplVar2[4] = local_res8;
  local_res8 = (longlong *)0x0;
  pplVar8 = DAT_140025c00;
  pplVar6 = (longlong **)&DAT_140025c00;
  while (pplVar5 = pplVar8, pplVar5 != (longlong **)0x0) {
    pplVar6 = pplVar5;
    pplVar8 = (longlong **)*pplVar5;
  }
  *pplVar6 = (longlong *)pplVar2;
  pplVar2 = pplVar1;
  goto joined_r0x00014000d861;
}



void FUN_14000da54(longlong param_1,wchar_t *param_2,undefined8 param_3,FILETIME param_4,
                  longlong **param_5,longlong **param_6,int *param_7,FILETIME *param_8,
                  wchar_t **param_9)

{
  longlong **pplVar1;
  int iVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong **pplVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  FILETIME FVar11;
  undefined8 uVar12;
  undefined auStackY_2f8 [32];
  FILETIME local_2c8;
  longlong *local_2c0;
  int *local_2b8;
  FILETIME *local_2b0;
  longlong *local_2a8;
  byte local_298;
  FILETIME local_294;
  FILETIME local_284;
  ulonglong local_48;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStackY_2f8;
  local_2b0 = param_8;
  local_2b8 = param_7;
  pwVar3 = wcsrchr(*(wchar_t **)(param_1 + 8),L'.');
  if (pwVar3 != (wchar_t *)0x0) {
    pwVar8 = (wchar_t *)0x101;
    local_2a8 = FUN_14000d274(param_2,0x101,*(wchar_t **)(param_1 + 8),pwVar3,
                              (LPWIN32_FIND_DATAW)&local_298);
    if (local_2a8 != (longlong *)0x0) {
      if (((local_298 & 0x10) == 0) ||
         ((local_294.dwLowDateTime == 0 && (local_294.dwHighDateTime == 0)))) {
        local_294 = local_284;
      }
      *param_9 = param_2;
      plVar5 = *param_6;
      local_2c8 = local_294;
      if (plVar5 != (longlong *)0x0) {
        do {
          pwVar8 = param_2;
          iVar2 = _wcsicmp((wchar_t *)plVar5[1],param_2);
          if (iVar2 == 0) break;
          plVar5 = (longlong *)*plVar5;
        } while (plVar5 != (longlong *)0x0);
        if (plVar5 != (longlong *)0x0) {
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
        }
      }
      puVar9 = (undefined8 *)CONCAT71((int7)((ulonglong)pwVar8 >> 8),*(undefined *)(param_1 + 0x10))
      ;
      local_2c0 = (longlong *)0x0;
      FVar11 = (FILETIME)&local_2c8;
      uVar12 = 0;
      iVar2 = FUN_14000209c(param_2,puVar9,FVar11,(FILE *)0x0,(_FILETIME)&local_2c0);
      if (local_2c0 != (longlong *)0x0) {
        uVar4 = FUN_1400030d8(local_2c0,puVar9,FVar11,uVar12);
        iVar2 = iVar2 + (int)uVar4;
        FUN_140003278(&local_2c0);
      }
      *local_2b8 = *local_2b8 + iVar2;
      if ((((*(byte *)(param_1 + 0x10) & 0x10) != 0) || ((ulonglong)param_4 < (ulonglong)local_2c8))
         || ((DAT_140025c3a != '\0' && (param_4 == local_2c8)))) {
        if (plVar5 == (longlong *)0x0) {
          plVar5 = FUN_14000dc58(local_2c8,puVar9,(ulonglong)FVar11,uVar12);
          pvVar6 = FUN_14000dcc4(param_2,puVar9,(ulonglong)FVar11,uVar12);
          plVar5[1] = (longlong)pvVar6;
          pplVar1 = (longlong **)*param_5;
          pplVar10 = param_5;
          while (pplVar7 = pplVar1, pplVar7 != (longlong **)0x0) {
            pplVar10 = pplVar7;
            pplVar1 = (longlong **)*pplVar7;
          }
          *pplVar10 = plVar5;
          if (*param_6 == (longlong *)0x0) {
            *param_6 = *param_5;
          }
        }
        if ((*(byte *)(param_1 + 0x10) & 0x11) == 1) {
          FUN_1400039c0(3,param_2,*(undefined8 *)(param_1 + 8),uVar12);
        }
      }
      if ((ulonglong)local_2c8 <= (ulonglong)*local_2b0 && *local_2b0 != local_2c8) {
        local_2c8 = *local_2b0;
      }
      *local_2b0 = local_2c8;
    }
  }
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_2f8);
  return;
}



undefined8 *
FUN_14000dc58(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (DAT_14003d0e0 == (undefined8 *)0x0) {
    if (DAT_14003d0f0 < 0x10) {
      DAT_14003d0e8 = (undefined8 *)FUN_140009214(0x8000,param_2,param_3,param_4);
      DAT_14003d0f0 = 0x8000;
    }
    DAT_14003d0f0 = DAT_14003d0f0 - 0x10;
    puVar1 = DAT_14003d0e8;
    DAT_14003d0e8 = DAT_14003d0e8 + 2;
  }
  else {
    puVar1 = DAT_14003d0e0;
    DAT_14003d0e0 = (undefined8 *)*DAT_14003d0e0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return puVar1;
}



void * FUN_14000dcc4(void *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  size_t sVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar5;
  longlong lVar4;
  
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (*(short *)((longlong)param_1 + lVar3 * 2) != 0);
  uVar5 = lVar4 + 2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  lVar3 = SUB168(ZEXT816(2) * auVar1,8);
  sVar2 = SUB168(ZEXT816(2) * auVar1,0);
  if (lVar3 != 0) {
    sVar2 = 0xffffffffffffffff;
  }
  _Dst = FUN_140009214(sVar2,lVar3,param_3,param_4);
  memcpy(_Dst,param_1,uVar5 * 2);
  return _Dst;
}



wchar_t * FUN_14000dd24(void *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  wchar_t *_Dst;
  ulonglong uVar2;
  
  lVar1 = -1;
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(short *)((longlong)param_1 + uVar2 * 2) != 0);
  do {
    lVar1 = lVar1 + 1;
  } while (param_2[lVar1] != L'\0');
  _Dst = (wchar_t *)FUN_14000fd90(param_1,uVar2 + lVar1 + 1,uVar2,param_4);
  wcscat_s(_Dst,uVar2 + lVar1 + 1,param_2);
  return _Dst;
}



ushort FUN_14000dd88(wint_t *param_1)

{
  wint_t wVar1;
  ushort uVar2;
  
  uVar2 = 0;
  wVar1 = *param_1;
  while (wVar1 != 0) {
    if (wVar1 == 0x2f) {
      wVar1 = 0x5c;
    }
    else {
      wVar1 = towupper(wVar1);
    }
    uVar2 = uVar2 + wVar1;
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  return uVar2 & 0x7f;
}



undefined8 *
FUN_14000dde0(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  ushort uVar4;
  int iVar5;
  undefined6 extraout_var;
  undefined8 *puVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined *_SizeInWords;
  longlong lVar9;
  ulonglong uVar11;
  longlong lVar10;
  
  bVar3 = false;
  if (*param_1 == L'\0') {
    return (undefined8 *)0x0;
  }
  uVar4 = FUN_14000dd88((wint_t *)param_1);
  puVar6 = FUN_14000faa4((wint_t *)param_1,param_2,(uint)CONCAT62(extraout_var,uVar4));
  if (puVar6 != (undefined8 *)0x0) {
    return puVar6;
  }
  _SizeInWords = &DAT_140013078;
  iVar5 = wcsncmp(param_1,L".\\",2);
  if (iVar5 != 0) {
    uVar11 = 2;
    _SizeInWords = &DAT_140013080;
    iVar5 = wcsncmp(param_1,L"./",2);
    if (iVar5 != 0) {
      lVar9 = -1;
      do {
        lVar10 = lVar9;
        lVar9 = lVar10 + 1;
      } while (param_1[lVar9] != L'\0');
      _SizeInWords = (undefined *)(lVar10 + 4);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = _SizeInWords;
      lVar9 = SUB168(ZEXT816(2) * auVar1,8);
      sVar7 = SUB168(ZEXT816(2) * auVar1,0);
      if (lVar9 != 0) {
        sVar7 = 0xffffffffffffffff;
      }
      pwVar8 = (wchar_t *)FUN_140009214(sVar7,lVar9,uVar11,param_4);
      wcscpy_s(pwVar8,(rsize_t)_SizeInWords,L".\\");
      wcscat_s(pwVar8,(rsize_t)_SizeInWords,param_1);
      bVar3 = true;
      goto LAB_14000deb0;
    }
  }
  pwVar8 = param_1 + 2;
LAB_14000deb0:
  uVar4 = FUN_14000dd88((wint_t *)pwVar8);
  puVar6 = FUN_14000faa4((wint_t *)pwVar8,_SizeInWords,(uint)CONCAT62(extraout_var_00,uVar4));
  if (puVar6 == (undefined8 *)0x0) {
    if (pwVar8 != param_1 + 2) {
      pwVar8[1] = L'/';
    }
    uVar4 = FUN_14000dd88((wint_t *)pwVar8);
    uVar11 = CONCAT62(extraout_var_01,uVar4) & 0xffffffff;
    puVar6 = FUN_14000faa4((wint_t *)pwVar8,_SizeInWords,(uint)uVar11);
    if (bVar3) {
      free(pwVar8);
    }
    if (puVar6 == (undefined8 *)0x0) {
      if (*param_1 == L'\"') {
        pwVar8 = FUN_14000fcac(param_1,_SizeInWords,uVar11,param_4);
      }
      else {
        lVar9 = -1;
        do {
          lVar10 = lVar9;
          lVar9 = lVar10 + 1;
        } while (param_1[lVar9] != L'\0');
        _SizeInWords = (undefined *)(lVar10 + 4);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = _SizeInWords;
        lVar9 = SUB168(ZEXT816(2) * auVar2,8);
        sVar7 = SUB168(ZEXT816(2) * auVar2,0);
        if (lVar9 != 0) {
          sVar7 = 0xffffffffffffffff;
        }
        pwVar8 = (wchar_t *)FUN_140009214(sVar7,lVar9,uVar11,param_4);
        wcscpy_s(pwVar8,(rsize_t)_SizeInWords,L"\"");
        wcscat_s(pwVar8,(rsize_t)_SizeInWords,param_1);
        wcscat_s(pwVar8,(rsize_t)_SizeInWords,L"\"");
      }
      uVar4 = FUN_14000dd88((wint_t *)pwVar8);
      puVar6 = FUN_14000faa4((wint_t *)pwVar8,_SizeInWords,(uint)CONCAT62(extraout_var_02,uVar4));
      free(pwVar8);
    }
  }
  else if (bVar3) {
    free(pwVar8);
  }
  return puVar6;
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_14000dfd0(wchar_t *param_1,longlong **param_2,longlong **param_3,ushort *param_4,
                  uint param_5,uint param_6,byte param_7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  longlong **pplVar4;
  undefined *puVar5;
  wchar_t wVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong **pplVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  ushort *puVar15;
  bool bVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  size_t _SizeInWords;
  undefined *puVar23;
  undefined8 uVar24;
  undefined auStack_2b8 [64];
  longlong **local_278;
  uint local_270;
  longlong **local_268;
  longlong **local_260;
  ushort *local_258;
  longlong *local_250;
  void *local_248;
  wchar_t local_240;
  wchar_t local_23e;
  undefined2 local_23c;
  wchar_t local_238 [264];
  ulonglong local_28;
  longlong lVar22;
  
  puVar23 = auStack_2b8;
  local_28 = DAT_140015008 ^ (ulonglong)&local_278;
  uVar19 = (ulonglong)param_1 & 0xffffffffffffff00;
  local_270 = (uint)uVar19;
  if (param_2 == (longlong **)0x0) {
    local_278 = (longlong **)0x0;
  }
  else if (param_3 == (longlong **)0x0) {
    local_278 = (longlong **)*param_2;
    if (local_278 != (longlong **)0x0) {
      for (; *local_278 != (longlong *)0x0; local_278 = (longlong **)*local_278) {
      }
    }
  }
  else {
    local_278 = (longlong **)*param_3;
  }
  puVar5 = auStack_2b8;
  local_268 = param_3;
  local_260 = param_2;
  local_258 = param_4;
  if (*param_1 != L'\0') {
    while (wVar6 = *param_1, puVar5 = puVar23, wVar6 != L'\0') {
      do {
        if (wVar6 == L'$') break;
        if (wVar6 == L'\"') {
          uVar19 = CONCAT71((int7)(uVar19 >> 8),(char)uVar19 == '\0');
        }
        if (((char)uVar19 == '\0') && (wVar6 == L'^')) {
          param_1 = param_1 + 1;
          uVar19 = uVar19 & 0xff;
          if (*param_1 == L'\"') {
            uVar19 = 1;
          }
        }
        param_1 = param_1 + 1;
        wVar6 = *param_1;
      } while (wVar6 != L'\0');
      local_270 = (uint)uVar19;
      if (*param_1 == L'\0') break;
      pwVar14 = param_1 + 1;
      if (*pwVar14 == L'\0') {
        if ((param_7 & 4) == 0) {
          *(undefined8 *)(puVar23 + -8) = 0x14000e0e4;
          FUN_140003898((ulonglong)DAT_140025c24,0x3ea,0x24,0);
          uVar19 = (ulonglong)local_270;
          goto LAB_14000e0fd;
        }
LAB_14000e64a:
        if (local_268 != (longlong **)0x0) {
          *local_268 = (longlong *)local_278;
        }
        goto LAB_14000e682;
      }
LAB_14000e0fd:
      uVar24 = 0;
      if (((char)uVar19 == '\0') && (*pwVar14 == L'^')) {
        pwVar14 = param_1 + 2;
        if ((ushort)*pwVar14 < 0x80) {
          bVar16 = (bool)((&DAT_140011640)[(ushort)*pwVar14] & 1);
        }
        else {
          wVar6 = *pwVar14;
          *(undefined8 *)(puVar23 + -8) = 0x14000e125;
          iVar7 = iswspace(wVar6);
          bVar16 = iVar7 == 0;
        }
        if ((bVar16 == false) && ((param_7 & 4) != 0)) goto LAB_14000e64a;
        wVar6 = *pwVar14;
        *(undefined8 *)(puVar23 + -8) = 0x14000e14b;
        FUN_140003898((ulonglong)DAT_140025c24,0x3e9,(ulonglong)(ushort)wVar6,uVar24);
      }
      pwVar8 = (wchar_t *)0x24;
      pwVar17 = pwVar14;
      if (*pwVar14 == L'$') {
        pwVar8 = pwVar14 + 1;
        pwVar17 = pwVar8;
        if ((*pwVar8 != L'^') && (pwVar17 = pwVar14, *pwVar8 == L'(')) {
          pwVar9 = pwVar14 + 2;
          if (*pwVar9 == L'^') {
LAB_14000e185:
            pwVar17 = pwVar9;
          }
          else if (*pwVar9 == L'@') {
            pwVar9 = pwVar14 + 3;
            if (*pwVar9 == L'^') {
LAB_14000e19d:
              wVar6 = pwVar9[1];
              *(undefined8 *)(puVar23 + -8) = 0x14000e1b2;
              FUN_140003898((ulonglong)DAT_140025c24,0x3e9,(ulonglong)(ushort)wVar6,0);
            }
            else {
              if (*pwVar9 == L')') goto LAB_14000e185;
              wVar6 = *pwVar9;
              *(undefined8 *)(puVar23 + -8) = 0x14000e1d0;
              pwVar8 = wcschr(L"DFBR",wVar6);
              if (pwVar8 != (wchar_t *)0x0) {
                pwVar9 = pwVar14 + 4;
                if (*pwVar9 == L'^') goto LAB_14000e19d;
                if (*pwVar9 == L')') goto LAB_14000e185;
              }
            }
          }
          else {
            pwVar17 = pwVar8;
            if (*pwVar8 != L'^') {
              pwVar17 = pwVar14 + 2;
            }
          }
        }
      }
      else {
        if (*pwVar14 == L'(') {
          pwVar17 = local_238;
          pwVar9 = pwVar14;
          while( true ) {
            pwVar14 = pwVar9 + 1;
            wVar6 = *pwVar14;
            if (wVar6 == L'\0') break;
            if (wVar6 == L')') goto LAB_14000e2d3;
            if (wVar6 == L':') break;
            if (wVar6 == L'^') {
              pwVar14 = pwVar9 + 2;
              if ((ushort)*pwVar14 < 0x80) {
                bVar16 = (bool)((&DAT_140011640)[(ushort)*pwVar14] & 1);
              }
              else {
                wVar6 = *pwVar14;
                *(undefined8 *)(puVar23 + -8) = 0x14000e25b;
                iVar7 = iswspace(wVar6);
                bVar16 = iVar7 == 0;
              }
              if (bVar16 == false) {
                pwVar8 = (wchar_t *)(ulonglong)(ushort)*pwVar14;
                *(undefined8 *)(puVar23 + -8) = 0x14000e27b;
                FUN_140003898((ulonglong)DAT_140025c24,0x3e9,(ulonglong)pwVar8,0);
              }
            }
            *pwVar17 = *pwVar14;
            pwVar17 = pwVar17 + 1;
            pwVar9 = pwVar14;
          }
          wVar6 = *pwVar14;
          if (wVar6 != L')') {
            do {
              if (wVar6 == L'^') {
                pwVar14 = pwVar14 + 1;
              }
              if (*pwVar14 == L'\0') break;
              pwVar14 = pwVar14 + 1;
              wVar6 = *pwVar14;
            } while (wVar6 != L')');
            if (*pwVar14 != L')') {
              *(undefined8 *)(puVar23 + -8) = 0x14000e2d0;
              FUN_140003898((ulonglong)DAT_140025c24,1000,(ulonglong)pwVar8,0);
            }
          }
LAB_14000e2d3:
          *pwVar17 = L'\0';
          if (0x202 < (longlong)pwVar17 - (longlong)local_238) {
            *(undefined8 *)(puVar23 + -8) = 0x14000e2fb;
            FUN_140003898((ulonglong)DAT_140025c24,0x434,(ulonglong)pwVar8,0);
          }
          wVar6 = local_238[0];
          uVar19 = (ulonglong)(ushort)local_238[0];
          pwVar17 = L"*@<?";
          *(undefined8 *)(puVar23 + -8) = 0x14000e30c;
          pwVar9 = wcschr(L"*@<?",wVar6);
          if (pwVar9 != (wchar_t *)0x0) {
            pwVar17 = pwVar14;
            if ((DAT_14003d110 == '\0') || ((DAT_1400157ec & 0x40) != 0)) goto LAB_14000e633;
            lVar21 = -1;
            do {
              lVar22 = lVar21;
              lVar21 = lVar22 + 1;
            } while (local_238[lVar21] != L'\0');
            _SizeInWords = lVar22 + 5;
            uVar18 = _SizeInWords * 2;
            uVar19 = uVar18 + 0xf;
            if (uVar19 <= uVar18) {
              uVar19 = 0xffffffffffffff0;
            }
            *(undefined8 *)(puVar23 + -8) = 0x14000e36b;
            lVar21 = -(uVar19 & 0xfffffffffffffff0);
            pwVar8 = (wchar_t *)(puVar23 + lVar21 + 0x38);
            *(undefined8 *)(puVar23 + lVar21 + -0x10) = 0x14000e386;
            FID_conflict_sprintf_s(pwVar8,_SizeInWords,L"$(%s)",local_238);
            uVar19 = 0x44c;
            pwVar17 = (wchar_t *)0x0;
            *(undefined8 *)(puVar23 + lVar21 + -0x10) = 0x14000e39c;
            FUN_140003898(0,0x44c,(ulonglong)pwVar8,DAT_14003d118);
            puVar23 = puVar23 + lVar21 + -8;
          }
        }
        else {
          wVar6 = *pwVar14;
          uVar19 = (ulonglong)(ushort)wVar6;
          *(undefined8 *)(puVar23 + -8) = 0x14000e3b4;
          pwVar9 = wcschr(L"*@<?",wVar6);
          if (pwVar9 != (wchar_t *)0x0) {
            if (((DAT_14003d110 == '\0') || ((DAT_1400157ec & 0x40) != 0)) || (*pwVar14 == L'<'))
            goto LAB_14000e633;
            local_23c = 0;
            pwVar8 = &local_240;
            local_240 = L'$';
            uVar19 = 0x44c;
            local_23e = *pwVar14;
            *(undefined8 *)(puVar23 + -8) = 0x14000e40b;
            FUN_140003898(0,0x44c,(ulonglong)pwVar8,DAT_14003d118);
          }
          if ((ushort)*pwVar14 < 0x80) {
            pwVar17 = (wchar_t *)
                      (CONCAT71(0x1400116,(&DAT_140011640)[(ushort)*pwVar14]) & 0xffffffffffffff01);
          }
          else {
            wVar6 = *pwVar14;
            uVar18 = (ulonglong)(ushort)wVar6;
            *(undefined8 *)(puVar23 + -8) = 0x14000e433;
            iVar7 = iswspace(wVar6);
            pwVar17 = (wchar_t *)CONCAT71((int7)(uVar18 >> 8),iVar7 == 0);
          }
          if ((char)pwVar17 == '\0') {
            if ((param_7 & 4) != 0) goto LAB_14000e64a;
            pwVar17 = (wchar_t *)(ulonglong)DAT_140025c24;
            uVar19 = 0x3ea;
            *(undefined8 *)(puVar23 + -8) = 0x14000e458;
            FUN_140003898((ulonglong)pwVar17,0x3ea,(ulonglong)pwVar8,0);
          }
          local_238[0] = *pwVar14;
          local_238[1] = 0;
        }
        uVar24 = 0;
        if (param_2 == (longlong **)0x0) {
          local_250 = (longlong *)0x0;
          *(undefined8 *)(puVar23 + -8) = 0x14000e486;
          local_248 = FUN_14000dcc4(&DAT_140011630,uVar19,(ulonglong)pwVar8,0);
          pplVar10 = &local_250;
        }
        else {
          *(undefined8 *)(puVar23 + -8) = 0x14000e471;
          pplVar10 = (longlong **)FUN_14000dc58(pwVar17,uVar19,(ulonglong)pwVar8,0);
        }
        *(undefined8 *)(puVar23 + -8) = 0x14000e497;
        puVar11 = FUN_14000918c((ushort *)local_238);
        if (puVar11 != (undefined8 *)0x0) {
          if (local_258 == (ushort *)0x0) {
LAB_14000e4ff:
            if ((*(byte *)(puVar11 + 3) & 1) == 0) {
              if ((*(byte *)(puVar11 + 3) & 0x10) != 0) goto LAB_14000e52d;
              pplVar10[1] = *(longlong **)(puVar11[2] + 8);
            }
            else {
              if ((param_7 & 4) != 0) {
                if (local_268 != (longlong **)0x0) {
                  *local_268 = (longlong *)local_278;
                }
                goto LAB_14000e682;
              }
              pwVar8 = local_238;
              uVar19 = 0x42e;
              *(undefined8 *)(puVar23 + -8) = 0x14000e527;
              FUN_140003898((ulonglong)DAT_140025c24,0x42e,(ulonglong)pwVar8,uVar24);
            }
          }
          else {
            pwVar8 = (wchar_t *)((longlong)local_238 - (longlong)local_258);
            puVar15 = local_258;
            do {
              puVar1 = (ushort *)((longlong)puVar15 + (longlong)pwVar8);
              uVar20 = (uint)*puVar15 - (uint)*puVar1;
              uVar19 = (ulonglong)uVar20;
              if (uVar20 != 0) break;
              puVar15 = puVar15 + 1;
            } while (*puVar1 != 0);
            if (uVar20 != 0) goto LAB_14000e4ff;
            uVar19 = (ulonglong)param_5;
            puVar12 = (undefined8 *)puVar11[2];
            uVar18 = uVar19;
            if (param_5 != param_6) {
              do {
                if (puVar12 == (undefined8 *)0x0) goto LAB_14000e52d;
                puVar12 = (undefined8 *)*puVar12;
                uVar20 = (int)uVar18 - 1;
                uVar18 = (ulonglong)uVar20;
              } while (uVar20 != param_6);
            }
            if (puVar12 == (undefined8 *)0x0) {
LAB_14000e52d:
              *(undefined8 *)(puVar23 + -8) = 0x14000e539;
              plVar13 = (longlong *)FUN_14000dcc4(&DAT_140011dec,uVar19,(ulonglong)pwVar8,uVar24);
            }
            else {
              plVar13 = (longlong *)puVar12[1];
            }
            pplVar10[1] = plVar13;
          }
        }
        if (local_260 != (longlong **)0x0) {
          if ((puVar11 == (undefined8 *)0x0) || ((*(byte *)(puVar11 + 3) & 0x10) != 0)) {
            *(undefined8 *)(puVar23 + -8) = 0x14000e56e;
            plVar13 = (longlong *)FUN_14000dcc4(&DAT_140011dec,uVar19,(ulonglong)pwVar8,0);
            pplVar10[1] = plVar13;
          }
          *pplVar10 = (longlong *)0x0;
          if (local_278 == (longlong **)0x0) {
            *local_260 = (longlong *)pplVar10;
          }
          else {
            *local_278 = (longlong *)pplVar10;
          }
          local_278 = pplVar10;
        }
        param_2 = local_260;
        pwVar17 = pwVar14;
        if (puVar11 != (undefined8 *)0x0) {
          plVar13 = pplVar10[1];
          *(undefined8 *)(puVar23 + -8) = 0x14000e5a9;
          pwVar14 = wcschr((wchar_t *)plVar13,L'$');
          param_2 = local_260;
          if (pwVar14 != (wchar_t *)0x0) {
            *(byte *)(puVar11 + 3) = *(byte *)(puVar11 + 3) | 1;
            uVar20 = param_6;
            if (local_258 != (ushort *)0x0) {
              puVar15 = local_258;
              do {
                uVar2 = *puVar15;
                uVar3 = *(ushort *)((longlong)puVar15 + ((longlong)local_238 - (longlong)local_258))
                ;
                if (uVar2 != uVar3) break;
                puVar15 = puVar15 + 1;
              } while (uVar3 != 0);
              if (uVar2 != uVar3) {
                uVar20 = param_5;
              }
            }
            puVar23[0x30] = param_7;
            pplVar4 = local_260;
            *(uint *)(puVar23 + 0x28) = uVar20;
            plVar13 = pplVar10[1];
            *(uint *)(puVar23 + 0x20) = param_5 + 1;
            *(undefined8 *)(puVar23 + -8) = 0x14000e61c;
            FUN_14000dfd0((wchar_t *)plVar13,pplVar4,(longlong **)&local_278,(ushort *)local_238,
                          *(uint *)(puVar23 + 0x20),*(uint *)(puVar23 + 0x28),puVar23[0x30]);
            *(byte *)(puVar11 + 3) = *(byte *)(puVar11 + 3) & 0xfe;
            param_2 = local_260;
          }
        }
      }
LAB_14000e633:
      param_1 = pwVar17 + 1;
      puVar5 = puVar23;
      if (*param_1 == L'\0') break;
      uVar19 = (ulonglong)local_270;
    }
  }
  puVar23 = puVar5;
  if (local_268 != (longlong **)0x0) {
    *local_268 = (longlong *)local_278;
  }
LAB_14000e682:
  uVar19 = local_28 ^ (ulonglong)&local_278;
  *(undefined8 *)(puVar23 + -8) = 0x14000e691;
  __security_check_cookie(uVar19);
  return;
}



wchar_t * FUN_14000e6a4(wchar_t *param_1)

{
  longlong **pplVar1;
  longlong **pplVar2;
  wchar_t *pwVar3;
  ulonglong **ppuVar4;
  longlong **local_res8;
  
  local_res8 = (longlong **)0x0;
  pwVar3 = wcschr(param_1,L'$');
  if (pwVar3 != (wchar_t *)0x0) {
    ppuVar4 = (ulonglong **)0x0;
    FUN_14000dfd0(param_1,(longlong **)&local_res8,(longlong **)0x0,(ushort *)0x0,0,0,0);
    pplVar2 = local_res8;
    param_1 = (wchar_t *)FUN_14000e740(param_1,-1,(ulonglong **)&local_res8,ppuVar4);
    while (pplVar2 != (longlong **)0x0) {
      pplVar1 = (longlong **)*pplVar2;
      *pplVar2 = (longlong *)DAT_14003d0e0;
      DAT_14003d0e0 = pplVar2;
      pplVar2 = pplVar1;
    }
  }
  return param_1;
}



void FUN_14000e740(wchar_t *param_1,char param_2,ulonglong **param_3,ulonglong **param_4)

{
  ulonglong **ppuVar1;
  code *pcVar2;
  undefined auVar3 [16];
  bool bVar4;
  bool bVar5;
  ulonglong **ppuVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong *puVar10;
  size_t sVar11;
  void *_Dst;
  longlong lVar12;
  ulonglong uVar13;
  undefined auStackY_8a8 [32];
  int iVar14;
  ulonglong *local_860;
  ulonglong *local_858;
  ulonglong *local_850;
  uint local_848;
  ulonglong *local_840;
  wchar_t *local_838;
  ulonglong **local_830;
  ulonglong local_828 [256];
  ulonglong local_28 [2];
  
  local_28[0] = DAT_140015008 ^ (ulonglong)auStackY_8a8;
  bVar5 = false;
  uVar13 = (ulonglong)param_1 & 0xffffffffffffff00;
  local_858 = local_28;
  local_850 = local_828;
  wVar7 = *param_1;
  local_860 = local_828;
  local_848 = (uint)uVar13;
  local_840 = (ulonglong *)0x400;
  local_838 = param_1;
  local_830 = param_3;
  if (wVar7 != L'\0') {
    bVar4 = false;
    while( true ) {
      while ((local_838 = param_1, wVar7 != L'\0' && (bVar4 = bVar5, wVar7 != L'$'))) {
        if (local_860 == local_858) {
          FUN_14000eb78(&local_850,&local_860,&local_858,(ulonglong *)&local_840,local_828);
          uVar13 = (ulonglong)local_848;
        }
        wVar7 = *param_1;
        if (wVar7 == L'\"') {
          uVar13 = CONCAT71((int7)(uVar13 >> 8),(char)uVar13 == '\0');
          local_848 = (uint)uVar13;
        }
        if (((char)uVar13 == '\0') && (wVar7 == L'^')) {
          *(wchar_t *)local_860 = L'^';
          local_860 = (ulonglong *)((longlong)local_860 + 2);
          if (local_860 == local_858) {
            FUN_14000eb78(&local_850,&local_860,&local_858,(ulonglong *)&local_840,local_828);
            uVar13 = (ulonglong)local_848;
          }
          param_1 = param_1 + 1;
          wVar7 = *param_1;
          uVar13 = uVar13 & 0xff;
          if (wVar7 == L'\"') {
            uVar13 = 1;
          }
          local_848 = (uint)uVar13;
        }
        param_1 = param_1 + 1;
        *(wchar_t *)local_860 = wVar7;
        local_860 = (ulonglong *)((longlong)local_860 + 2);
        wVar7 = *param_1;
      }
      param_4 = (ulonglong **)0x5e;
      param_3 = (ulonglong **)0x1;
      if (local_860 == local_858) {
        param_4 = &local_840;
        param_3 = &local_858;
        FUN_14000eb78(&local_850,&local_860,param_3,(ulonglong *)param_4,local_828);
      }
      if (*param_1 == L'\0') break;
      pwVar9 = param_1 + 2;
      if ((param_1[1] == L'(') && (pwVar8 = wcschr(L"*@<?",param_1[2]), pwVar8 != (wchar_t *)0x0)) {
        iVar14 = 3;
LAB_14000e925:
        param_4 = &local_858;
        param_3 = &local_860;
        FUN_14000ec20(&local_850,&local_838,(wchar_t **)param_3,(wchar_t **)param_4,
                      (ulonglong *)&local_840,iVar14,local_828);
      }
      else {
        if (param_1[1] == L'$') {
          if ((*pwVar9 == L'^') || (param_2 != '\x01')) {
LAB_14000e9bf:
            iVar14 = 5;
          }
          else if (*pwVar9 == L'@') {
            iVar14 = 2;
          }
          else {
            if (*pwVar9 == L'(') {
              pwVar9 = param_1 + 3;
            }
            if (((0x10 < (ushort)(pwVar9[1] + L'ﾾ')) ||
                ((0x10015U >> ((ushort)(pwVar9[1] + L'ﾾ') & 0x1f) & 1) == 0)) ||
               (pwVar9[2] != L')')) goto LAB_14000e9bf;
            iVar14 = 4;
          }
          goto LAB_14000e925;
        }
        pwVar9 = wcschr(L"*@<?",param_1[1]);
        ppuVar6 = local_830;
        if (pwVar9 != (wchar_t *)0x0) {
          iVar14 = 1;
          goto LAB_14000e925;
        }
        if (*local_830 == (ulonglong *)0x0) {
          FUN_140003898((ulonglong)DAT_140025c24,0x410,(ulonglong)param_3,param_4);
        }
        pwVar9 = wcschr((wchar_t *)(*ppuVar6)[1],L'$');
        if (pwVar9 == (wchar_t *)0x0) {
          puVar10 = (ulonglong *)(*ppuVar6)[1];
          *ppuVar6 = (ulonglong *)**ppuVar6;
        }
        else {
          ppuVar1 = (ulonglong **)*ppuVar6;
          *ppuVar6 = *ppuVar1;
          puVar10 = (ulonglong *)FUN_14000e740((wchar_t *)ppuVar1[1],param_2,ppuVar6,param_4);
          bVar4 = true;
          bVar5 = true;
        }
        param_4 = &local_858;
        param_3 = &local_860;
        FUN_14000f188(&local_850,&local_838,(wchar_t **)param_3,(wchar_t **)param_4,
                      (wchar_t *)puVar10,(ulonglong *)&local_840,local_828);
        if (bVar4) {
          free(puVar10);
          bVar4 = false;
          bVar5 = false;
        }
      }
      wVar7 = *local_838;
      if (wVar7 == L'\0') break;
      uVar13 = (ulonglong)local_848;
      param_1 = local_838;
    }
    if (local_860 == local_858) {
      param_4 = &local_840;
      param_3 = &local_858;
      FUN_14000eb78(&local_850,&local_860,param_3,(ulonglong *)param_4,local_828);
    }
  }
  puVar10 = local_850;
  *(wchar_t *)local_860 = L'\0';
  uVar13 = (longlong)local_860 + (2 - (longlong)local_850) >> 1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  lVar12 = SUB168(ZEXT416(2) * auVar3,8);
  sVar11 = SUB168(ZEXT416(2) * auVar3,0);
  if (lVar12 != 0) {
    sVar11 = 0xffffffffffffffff;
  }
  _Dst = FUN_140009214(sVar11,lVar12,(ulonglong)param_3,param_4);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,puVar10,uVar13 * 2);
    __security_check_cookie(local_28[0] ^ (ulonglong)auStackY_8a8);
    return;
  }
  FUN_140003898((ulonglong)DAT_140025c24,0x419,(ulonglong)param_3,param_4);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



void FUN_14000eb78(void **param_1,void **param_2,void **param_3,ulonglong *param_4,void *param_5)

{
  ulonglong uVar1;
  undefined auVar2 [16];
  size_t sVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  void **_Size;
  ulonglong *puVar7;
  
  _Size = param_3;
  puVar7 = param_4;
  if (*param_1 == param_5) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *param_4;
    lVar5 = SUB168(ZEXT816(2) * auVar2,8);
    sVar3 = SUB168(ZEXT816(2) * auVar2,0);
    if (lVar5 != 0) {
      sVar3 = 0xffffffffffffffff;
    }
    pvVar4 = FUN_140009214(sVar3,lVar5,(ulonglong)param_3,param_4);
    _Size = (void **)(*param_4 * 2);
    memcpy(pvVar4,*param_1,(size_t)_Size);
    *param_1 = pvVar4;
  }
  uVar6 = *param_4 + 0x400;
  pvVar4 = FUN_14000fd90(*param_1,uVar6,(ulonglong)_Size,puVar7);
  uVar1 = *param_4;
  *param_1 = pvVar4;
  *param_4 = uVar6;
  *param_2 = (void *)((longlong)pvVar4 + uVar1 * 2);
  *param_3 = (void *)((longlong)pvVar4 + uVar6 * 2);
  return;
}



void FUN_14000ec20(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
                  ulonglong *param_5,int param_6,void *param_7)

{
  wchar_t wVar1;
  longlong **pplVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  size_t sVar11;
  longlong **_Memory;
  wchar_t **ppwVar12;
  wchar_t **ppwVar13;
  uint uVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  longlong ***ppplVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  longlong ***ppplVar21;
  wchar_t **ppwVar22;
  longlong **_Memory_00;
  longlong **pplVar23;
  longlong **local_70;
  longlong **local_68;
  longlong **local_60;
  longlong ***local_58;
  wchar_t *local_50 [2];
  longlong lVar17;
  
  _Memory = (longlong **)0x0;
  bVar6 = false;
  bVar7 = false;
  local_58 = (longlong ***)0x0;
  uVar14 = 1;
  bVar5 = false;
  if (param_6 != 1) {
    ppwVar13 = param_2;
    pplVar9 = DAT_140026458;
    ppwVar22 = param_4;
    if (param_6 == 2) goto LAB_14000ed49;
    if (param_6 != 3) {
      if (param_6 != 4) {
        if (param_6 != 5) {
          return;
        }
        if (*param_3 == *param_4) {
          FUN_14000eb78(param_1,param_3,param_4,param_5,param_7);
        }
        pwVar15 = *param_3;
        *pwVar15 = L'$';
        *param_2 = *param_2 + 2;
        *param_3 = pwVar15 + 1;
        return;
      }
      uVar14 = 4;
      bVar6 = true;
      goto LAB_14000ed49;
    }
    bVar6 = true;
    uVar14 = 2;
  }
  ppwVar13 = (wchar_t **)*param_2;
  wVar1 = *(wchar_t *)((longlong)ppwVar13 + (ulonglong)uVar14 * 2);
  if (wVar1 == L'*') {
    pplVar9 = DAT_140026450;
    uVar8 = uVar14 + 1;
    if (*(wchar_t *)((longlong)ppwVar13 + (ulonglong)(uVar14 + 1) * 2) == L'*') {
LAB_14000ed44:
      uVar14 = uVar8;
      bVar5 = true;
    }
    else {
      bVar7 = true;
      pplVar9 = DAT_140026478;
    }
  }
  else {
    pplVar9 = DAT_140026460;
    if (wVar1 != L'<') {
      pplVar9 = DAT_140026468;
      uVar8 = uVar14;
      if (wVar1 == L'?') goto LAB_14000ed44;
      pplVar9 = _Memory;
      if (wVar1 == L'@') {
        pplVar9 = DAT_140026470;
      }
    }
  }
  uVar14 = uVar14 + 1;
  ppwVar22 = (wchar_t **)0x2a;
LAB_14000ed49:
  _Memory_00 = _Memory;
  if (pplVar9 == (longlong **)0x0) {
    for (pwVar15 = *param_2; ((*pwVar15 != L'\0' && (*pwVar15 != L' ')) && (*pwVar15 != L'\t'));
        pwVar15 = pwVar15 + 1) {
    }
    wVar1 = *pwVar15;
    ppwVar13 = (wchar_t **)0xfa6;
    uVar19 = (ulonglong)DAT_140025c24;
    *pwVar15 = L'\0';
    pwVar20 = *param_2;
    FUN_140003898(uVar19,0xfa6,(ulonglong)pwVar20,ppwVar22);
    *pwVar15 = wVar1;
    bVar5 = false;
    pplVar9 = (longlong **)FUN_14000dcc4(&DAT_140011dec,ppwVar13,(ulonglong)pwVar20,ppwVar22);
    _Memory_00 = pplVar9;
  }
  ppplVar21 = (longlong ***)0x0;
  if (bVar5) {
    local_50[0] = (wchar_t *)0x400;
    pplVar10 = (longlong **)FUN_140009214(0x800,ppwVar13,0,ppwVar22);
    pplVar23 = pplVar10 + 0x100;
    local_68 = pplVar23;
    local_70 = pplVar10;
    local_60 = pplVar10;
    for (pplVar2 = pplVar9; pplVar9 = local_60, _Memory_00 = pplVar9, local_60 = pplVar9,
        pplVar2 != (longlong **)0x0; pplVar2 = (longlong **)*pplVar2) {
      ppwVar13 = (wchar_t **)pplVar2[1];
      ppwVar12 = ppwVar13;
      if (bVar6) {
        lVar16 = -1;
        do {
          lVar17 = lVar16;
          lVar16 = lVar17 + 1;
        } while (*(short *)((longlong)ppwVar13 + lVar16 * 2) != 0);
        ppplVar18 = (longlong ***)(lVar17 + 2);
        if (local_58 < ppplVar18) {
          if (_Memory != (longlong **)0x0) {
            free(_Memory);
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = ppplVar18;
          lVar16 = SUB168(ZEXT816(2) * auVar3,8);
          sVar11 = SUB168(ZEXT816(2) * auVar3,0);
          if (lVar16 != 0) {
            sVar11 = 0xffffffffffffffff;
          }
          local_58 = ppplVar18;
          _Memory = (longlong **)FUN_140009214(sVar11,lVar16,(ulonglong)ppplVar21,ppwVar22);
        }
        ppplVar21 = local_58;
        ppwVar12 = (wchar_t **)
                   FUN_14000eff8((*param_2)[uVar14],(wchar_t *)_Memory,(rsize_t)local_58,
                                 (wchar_t *)ppwVar13);
        ppwVar22 = ppwVar13;
      }
      for (; *(short *)ppwVar12 != 0; ppwVar12 = (wchar_t **)((longlong)ppwVar12 + 2)) {
        if (pplVar10 == pplVar23) {
          ppwVar22 = local_50;
          ppplVar21 = &local_68;
          FUN_14000eb78(&local_60,&local_70,ppplVar21,(ulonglong *)ppwVar22,(void *)0x0);
          pplVar10 = local_70;
          pplVar23 = local_68;
        }
        *(undefined2 *)pplVar10 = *(undefined2 *)ppwVar12;
        pplVar10 = (longlong **)((longlong)pplVar10 + 2);
        local_70 = pplVar10;
      }
      if (pplVar10 == pplVar23) {
        ppwVar22 = local_50;
        ppplVar21 = &local_68;
        FUN_14000eb78(&local_60,&local_70,ppplVar21,(ulonglong *)ppwVar22,(void *)0x0);
        pplVar10 = local_70;
        pplVar23 = local_68;
      }
      *(undefined2 *)pplVar10 = 0;
      if (*pplVar2 != (longlong *)0x0) {
        *(undefined2 *)pplVar10 = 0x20;
        local_70 = (longlong **)((longlong)pplVar10 + 2);
        if (local_70 == pplVar23) {
          ppwVar22 = local_50;
          ppplVar21 = &local_68;
          FUN_14000eb78(&local_60,&local_70,ppplVar21,(ulonglong *)ppwVar22,(void *)0x0);
          pplVar23 = local_68;
        }
        *(undefined2 *)local_70 = 0;
        pplVar10 = local_70;
      }
    }
  }
  else {
    lVar16 = -1;
    do {
      lVar17 = lVar16;
      lVar16 = lVar17 + 1;
    } while (*(short *)((longlong)pplVar9 + lVar16 * 2) != 0);
    uVar19 = lVar17 + 2;
    if (uVar19 == 1) {
      uVar19 = 2;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar19;
    lVar16 = SUB168(ZEXT816(2) * auVar4,8);
    sVar11 = SUB168(ZEXT816(2) * auVar4,0);
    if (lVar16 != 0) {
      sVar11 = 0xffffffffffffffff;
    }
    _Memory = (longlong **)FUN_140009214(sVar11,lVar16,0,ppwVar22);
    if (bVar7) {
      pplVar9 = (longlong **)FUN_14000eff8(0x52,(wchar_t *)_Memory,uVar19,(wchar_t *)pplVar9);
    }
    if (bVar6) {
      pplVar9 = (longlong **)
                FUN_14000eff8((*param_2)[uVar14],(wchar_t *)_Memory,uVar19,(wchar_t *)pplVar9);
    }
  }
  FUN_14000f188(param_1,param_2,param_3,param_4,(wchar_t *)pplVar9,param_5,param_7);
  if (_Memory_00 != (longlong **)0x0) {
    free(_Memory_00);
  }
  if (_Memory != (longlong **)0x0) {
    free(_Memory);
  }
  return;
}



wchar_t * FUN_14000eff8(short param_1,wchar_t *param_2,rsize_t param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  errno_t eVar2;
  longlong lVar3;
  wchar_t *pwVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined *puVar9;
  wchar_t *pwVar10;
  longlong lVar4;
  
  pwVar10 = param_4;
  eVar2 = wcscpy_s(param_2,param_3,param_4);
  if (eVar2 != 0) {
    FUN_140003898((ulonglong)DAT_140025c24,0x410,(ulonglong)param_4,pwVar10);
  }
  wVar1 = *param_2;
  lVar3 = -1;
  do {
    lVar4 = lVar3;
    lVar3 = lVar4 + 1;
  } while (param_2[lVar3] != L'\0');
  pwVar7 = (wchar_t *)0x0;
  for (pwVar5 = param_2 + lVar4;
      ((pwVar8 = (wchar_t *)0x0, param_2 <= pwVar5 && (pwVar8 = pwVar5, *pwVar5 != L'\\')) &&
      (*pwVar5 != L'/')); pwVar5 = pwVar5 + -1) {
    if ((*pwVar5 == L'.') && (pwVar7 == (wchar_t *)0x0)) {
      pwVar7 = pwVar5;
    }
  }
  pwVar5 = param_2;
  if (param_1 == 0x42) {
    if (pwVar7 != (wchar_t *)0x0) {
      *pwVar7 = L'\0';
    }
  }
  else {
    if (param_1 == 0x44) {
      if (pwVar8 == (wchar_t *)0x0) {
        if (param_2[1] == L':') {
          param_2[2] = L'\0';
        }
        else {
          puVar9 = &DAT_1400120a8;
          eVar2 = wcscpy_s(param_2,param_3,L".");
          if (eVar2 != 0) {
            FUN_140003898((ulonglong)DAT_140025c24,0x410,(ulonglong)puVar9,pwVar10);
          }
        }
      }
      else {
        if ((param_2[1] == L':') && (pwVar8 == param_2 + 2)) {
          pwVar8 = pwVar8 + 1;
        }
        *pwVar8 = L'\0';
      }
      goto LAB_14000f119;
    }
    if (param_1 != 0x46) {
      if ((param_1 == 0x52) && (pwVar7 != (wchar_t *)0x0)) {
        *pwVar7 = L'\0';
      }
      goto LAB_14000f119;
    }
  }
  if (pwVar8 == (wchar_t *)0x0) {
    if (param_2[1] == L':') {
      pwVar5 = param_2 + 2;
    }
  }
  else {
    pwVar5 = pwVar8 + 1;
  }
LAB_14000f119:
  if (wVar1 == L'\"') {
    if ((*pwVar5 != L'\"') && (param_2 < pwVar5)) {
      pwVar5 = pwVar5 + -1;
      *pwVar5 = L'\"';
    }
    puVar6 = (undefined4 *)wcschr(pwVar5,L'\0');
    if (*(short *)((longlong)puVar6 + -2) != 0x22) {
      *puVar6 = 0x22;
    }
  }
  return pwVar5;
}



void FUN_14000f188(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
                  wchar_t *param_5,ulonglong *param_6,void *param_7)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  wchar_t *local_res10;
  
  *param_2 = *param_2 + 1;
  if (**param_2 == L'^') {
    *param_2 = *param_2 + 1;
  }
  local_res10 = wcschr(*param_2,L':');
  pwVar1 = *param_2;
  wVar3 = *pwVar1;
  pwVar2 = pwVar1;
  while ((wVar3 != L'\0' && (wVar3 != L')'))) {
    if (wVar3 == L'^') {
      pwVar2 = pwVar2 + 1;
    }
    pwVar2 = pwVar2 + 1;
    wVar3 = *pwVar2;
  }
  if (((*pwVar1 == L'(') && (local_res10 != (wchar_t *)0x0)) && (local_res10 < pwVar2)) {
    FUN_14000f300(param_1,&local_res10,param_3,param_4,param_5,param_6,param_7);
    *param_2 = local_res10;
  }
  else {
    wVar3 = *param_5;
    while (wVar3 != L'\0') {
      if (*param_3 == *param_4) {
        FUN_14000eb78(param_1,param_3,param_4,param_6,param_7);
      }
      pwVar1 = *param_3;
      wVar3 = *param_5;
      param_5 = param_5 + 1;
      *pwVar1 = wVar3;
      *param_3 = pwVar1 + 1;
      wVar3 = *param_5;
    }
    if (**param_2 == L'$') {
      *param_2 = *param_2 + 1;
    }
    pwVar1 = *param_2;
    if (*pwVar1 == L'(') {
      do {
        *param_2 = *param_2 + 1;
      } while (**param_2 != L')');
    }
    else if ((*pwVar1 == L'*') && (pwVar1[1] == L'*')) {
      *param_2 = *param_2 + 1;
    }
    *param_2 = *param_2 + 1;
  }
  return;
}



void FUN_14000f300(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
                  wchar_t *param_5,ulonglong *param_6,void *param_7)

{
  wchar_t wVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  size_t sVar5;
  wchar_t *_Str2;
  size_t sVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t **ppwVar13;
  wchar_t **ppwVar14;
  
  *param_2 = *param_2 + 1;
  for (pwVar8 = *param_2; wVar1 = *pwVar8, ppwVar13 = param_3, ppwVar14 = param_4, wVar1 != L'\0';
      pwVar8 = pwVar8 + 1) {
    if (wVar1 == L'=') goto LAB_14000f364;
    if (wVar1 == L'^') {
      pwVar8 = pwVar8 + 1;
    }
  }
  FUN_140003898((ulonglong)DAT_140025c20,0x3eb,(ulonglong)param_3,param_4);
LAB_14000f364:
  if (pwVar8 == *param_2) {
    FUN_140003898((ulonglong)DAT_140025c20,0x3ed,(ulonglong)ppwVar13,ppwVar14);
  }
  wVar1 = *pwVar8;
  pwVar10 = pwVar8;
  while (wVar1 != L'\0') {
    if (*pwVar10 == L')') goto LAB_14000f3ae;
    if (*pwVar10 == L'^') {
      pwVar10 = pwVar10 + 1;
    }
    pwVar10 = pwVar10 + 1;
    wVar1 = *pwVar10;
  }
  if (*pwVar10 != L')') {
    FUN_140003898((ulonglong)DAT_140025c20,1000,(ulonglong)ppwVar13,ppwVar14);
  }
LAB_14000f3ae:
  auVar2._8_8_ = 0;
  auVar2._0_8_ = ((longlong)pwVar8 - (longlong)*param_2 >> 1) + 1;
  lVar9 = SUB168(ZEXT816(2) * auVar2,8);
  sVar5 = SUB168(ZEXT816(2) * auVar2,0);
  if (lVar9 != 0) {
    sVar5 = 0xffffffffffffffff;
  }
  _Str2 = (wchar_t *)FUN_140009214(sVar5,lVar9,(ulonglong)ppwVar13,ppwVar14);
  pwVar7 = _Str2;
  for (pwVar12 = *param_2; *pwVar12 != L'='; pwVar12 = pwVar12 + 1) {
    if (*pwVar12 == L'^') {
      pwVar12 = pwVar12 + 1;
    }
    *pwVar7 = *pwVar12;
    pwVar7 = pwVar7 + 1;
  }
  *pwVar7 = L'\0';
  sVar5 = 0xffffffffffffffff;
  do {
    sVar5 = sVar5 + 1;
  } while (_Str2[sVar5] != L'\0');
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)pwVar10 - (longlong)pwVar8 >> 1;
  lVar9 = SUB168(ZEXT816(2) * auVar3,8);
  sVar6 = SUB168(ZEXT816(2) * auVar3,0);
  if (lVar9 != 0) {
    sVar6 = 0xffffffffffffffff;
  }
  pwVar7 = (wchar_t *)FUN_140009214(sVar6,lVar9,0xffffffffffffffff,ppwVar14);
  pwVar8 = pwVar7;
  while( true ) {
    pwVar11 = pwVar12 + 1;
    if (*pwVar11 == L')') break;
    if (*pwVar11 == L'^') {
      pwVar11 = pwVar12 + 2;
    }
    *pwVar8 = *pwVar11;
    pwVar8 = pwVar8 + 1;
    pwVar12 = pwVar11;
  }
  *param_2 = pwVar10 + 1;
  *pwVar8 = L'\0';
  wVar1 = *param_5;
  while (wVar1 != L'\0') {
    if ((wVar1 == *_Str2) && (iVar4 = wcsncmp(param_5,_Str2,sVar5), iVar4 == 0)) {
      wVar1 = *pwVar7;
      pwVar8 = pwVar7;
      while (wVar1 != L'\0') {
        if (*param_3 == *param_4) {
          FUN_14000eb78(param_1,param_3,param_4,param_6,param_7);
        }
        pwVar10 = *param_3;
        wVar1 = *pwVar8;
        pwVar8 = pwVar8 + 1;
        *pwVar10 = wVar1;
        *param_3 = pwVar10 + 1;
        wVar1 = *pwVar8;
      }
      param_5 = param_5 + sVar5;
    }
    else {
      if (*param_3 == *param_4) {
        FUN_14000eb78(param_1,param_3,param_4,param_6,param_7);
      }
      pwVar8 = *param_3;
      wVar1 = *param_5;
      param_5 = param_5 + 1;
      *pwVar8 = wVar1;
      *param_3 = pwVar8 + 1;
    }
    wVar1 = *param_5;
  }
  free(_Str2);
                    // WARNING: Could not recover jumptable at 0x00014000f568. Too many branches
                    // WARNING: Treating indirect jump as call
  free(pwVar7);
  return;
}



void FUN_14000f570(wchar_t *param_1,wchar_t *param_2)

{
  undefined8 uVar1;
  wchar_t *_Drive;
  wchar_t *_Dir;
  undefined auStackY_488 [32];
  wchar_t local_438 [8];
  wchar_t local_428 [256];
  wchar_t local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStackY_488;
  _wsplitpath_s(param_1,local_438,3,local_428,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  _Dir = local_428;
  _Drive = local_438;
  uVar1 = 0x104;
  _wmakepath_s(local_228,0x104,_Drive,_Dir,param_2,(wchar_t *)0x0);
  FUN_14000dcc4(local_228,uVar1,(ulonglong)_Drive,_Dir);
  __security_check_cookie(local_18 ^ (ulonglong)auStackY_488);
  return;
}



undefined FUN_14000f614(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  short sVar4;
  short *psVar5;
  undefined uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  uVar7 = 2;
  if (*param_1 == 0x7b) {
    param_1 = param_1 + 1;
    sVar4 = *param_1;
    if (sVar4 != 0) {
      do {
        if (sVar4 == 0x7d) break;
        if (sVar4 == 0x5e) {
          param_1 = param_1 + 1;
        }
        param_1 = param_1 + 1;
        sVar4 = *param_1;
      } while (sVar4 != 0);
      if (*param_1 != 0) {
        param_1 = param_1 + 1;
      }
    }
  }
  psVar1 = param_1;
  if (*param_1 != 0x2e) {
    return 0;
  }
  do {
    psVar5 = param_1;
    if (*psVar1 == 0x7b) break;
    if (*psVar1 == 0x5e) {
      psVar1 = psVar1 + 1;
    }
    psVar1 = psVar1 + 1;
  } while (*psVar1 != 0);
  for (; ((psVar5 < psVar1 && (*psVar5 != 0x5c)) && (*psVar5 != 0x2f)); psVar5 = psVar5 + 1) {
  }
  if ((*psVar1 == 0) || (psVar5 != psVar1)) {
    pwVar3 = wcspbrk(param_1 + 1,L"./\\");
    if (pwVar3 == (wchar_t *)0x0) {
      return 0;
    }
    if (*pwVar3 != L'.') {
      return 0;
    }
    pwVar3 = pwVar3 + 1;
  }
  else {
    psVar1 = psVar1 + 1;
    sVar4 = *psVar1;
    if (sVar4 == 0) {
      return 0;
    }
    do {
      if (sVar4 == 0x7d) break;
      if (sVar4 == 0x5e) {
        psVar1 = psVar1 + 1;
      }
      psVar1 = psVar1 + 1;
      sVar4 = *psVar1;
    } while (sVar4 != 0);
    if (*psVar1 == 0) {
      return 0;
    }
    if (psVar1[1] != 0x2e) {
      return 0;
    }
    pwVar3 = psVar1 + 2;
  }
  pwVar2 = wcschr(pwVar3,L'/');
  if ((pwVar2 == (wchar_t *)0x0) && (pwVar2 = wcschr(pwVar3,L'\\'), pwVar2 == (wchar_t *)0x0)) {
    pwVar3 = wcschr(pwVar3,L'.');
    if (pwVar3 == (wchar_t *)0x0) {
      uVar6 = 1;
    }
    else {
      FUN_140003898((ulonglong)DAT_140025c24,0x444,uVar7,param_4);
    }
  }
  return uVar6;
}



void FUN_14000f778(wchar_t *param_1,longlong param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined auStackY_2a8 [32];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_140015008 ^ (ulonglong)auStackY_2a8;
  wVar6 = *param_3;
  pwVar1 = param_1 + param_2;
joined_r0x00014000f7b8:
  if (wVar6 == L'\0') {
    if (param_1 < pwVar1) {
      *param_1 = L'\0';
    }
LAB_14000fa76:
    __security_check_cookie(local_48 ^ (ulonglong)auStackY_2a8);
    return;
  }
  if (pwVar1 <= param_1) goto LAB_14000fa76;
  pwVar10 = param_3;
  if (wVar6 == L'%') {
    pwVar10 = param_3 + 1;
    wVar6 = *pwVar10;
    pwVar9 = param_3;
    if (wVar6 == L'\0') goto LAB_14000fa05;
    if (wVar6 == L'%') {
      *param_1 = L'%';
      goto LAB_14000f813;
    }
    if (wVar6 == L's') {
      pwVar7 = param_4;
      pwVar9 = pwVar10;
      if (param_4 != (wchar_t *)0x0) {
        do {
          if ((*pwVar7 == L'\0') || (pwVar1 <= param_1)) break;
          *param_1 = *pwVar7;
          param_1 = param_1 + 1;
          pwVar7 = pwVar7 + 1;
        } while (pwVar7 != (wchar_t *)0x0);
      }
    }
    else {
      if (wVar6 != L'|') {
        *param_1 = L'%';
        param_1 = param_1 + 1;
        if (param_1 != pwVar1) {
          wVar6 = *pwVar10;
          goto LAB_14000f810;
        }
        goto LAB_14000fa76;
      }
      local_258[0] = L'\0';
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      do {
        pwVar9 = pwVar10 + 1;
        wVar6 = *pwVar9;
        if (wVar6 == L'\0') goto LAB_14000fa3b;
        if (wVar6 == L'F') {
          if (*pwVar10 == L'|') {
            bVar2 = true;
            bVar3 = true;
            bVar4 = true;
            bVar5 = true;
          }
        }
        else if (wVar6 == L'd') {
          bVar2 = true;
        }
        else if (wVar6 == L'e') {
          bVar5 = true;
        }
        else if (wVar6 == L'f') {
          bVar4 = true;
        }
        else {
          pwVar10 = pwVar9;
          if (wVar6 != L'p') goto LAB_14000fa3b;
          bVar3 = true;
        }
        pwVar10 = pwVar9;
      } while (wVar6 != L'F');
      if (param_4 == (wchar_t *)0x0) {
        FUN_140003898(0,0x449,(ulonglong)(ushort)wVar6,0x7c);
      }
      if (bVar2) {
        _wsplitpath_s(param_4,local_258,0x104,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      }
      if (bVar3) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (local_258[lVar8] != L'\0');
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,local_258 + lVar8,0x104 - lVar8,(wchar_t *)0x0,0,
                      (wchar_t *)0x0,0);
      }
      if (bVar4) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (local_258[lVar8] != L'\0');
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_258 + lVar8,0x104 - lVar8,
                      (wchar_t *)0x0,0);
      }
      if (bVar5) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (local_258[lVar8] != L'\0');
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0,local_258 + lVar8,
                      0x104 - lVar8);
      }
      if (local_258[0] != L'\0') {
        lVar8 = (longlong)local_258 - (longlong)param_1;
        do {
          if (pwVar1 <= param_1) break;
          *param_1 = *(wchar_t *)(lVar8 + (longlong)param_1);
          param_1 = param_1 + 1;
        } while (*(short *)(lVar8 + (longlong)param_1) != 0);
      }
    }
  }
  else {
LAB_14000f810:
    *param_1 = wVar6;
LAB_14000f813:
    param_1 = param_1 + 1;
    pwVar9 = pwVar10;
  }
LAB_14000fa05:
  param_3 = pwVar9 + 1;
  wVar6 = *param_3;
  goto joined_r0x00014000f7b8;
LAB_14000fa3b:
  for (; (pwVar9 = pwVar10, param_3 <= pwVar10 && (param_1 < pwVar1)); param_1 = param_1 + 1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
  }
  goto LAB_14000fa05;
}



undefined8 * FUN_14000faa4(wint_t *param_1,undefined8 param_2,uint param_3)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t *pwVar3;
  undefined8 *puVar4;
  wint_t *pwVar5;
  bool bVar6;
  
  puVar4 = (undefined8 *)(&DAT_140025800)[param_3];
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    wVar1 = *param_1;
    pwVar3 = param_1;
    for (pwVar5 = (wint_t *)puVar4[1]; (wVar1 != 0 && (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
      if ((*pwVar3 == 0x5c) || (*pwVar3 == 0x2f)) {
        if (*pwVar5 != 0x5c) {
          bVar6 = *pwVar5 == 0x2f;
          goto LAB_14000fb1c;
        }
      }
      else {
        wVar1 = towupper(*pwVar5);
        wVar2 = towupper(*pwVar3);
        bVar6 = wVar2 == wVar1;
LAB_14000fb1c:
        if (!bVar6) break;
      }
      pwVar3 = pwVar3 + 1;
      wVar1 = *pwVar3;
    }
    if ((*pwVar3 == 0) && (*pwVar5 == 0)) {
      return puVar4;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



// WARNING: Function: _alloca_probe replaced with injection: alloca_probe

void FUN_14000fb60(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *_Str1;
  wchar_t *_Str2;
  wchar_t wVar1;
  longlong lVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 auStack_50 [5];
  wchar_t awStack_28 [4];
  wchar_t awStack_20 [4];
  ulonglong local_18 [2];
  
  local_18[0] = DAT_140015008 ^ (ulonglong)local_18;
  lVar6 = -1;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != L'\0');
  uVar3 = lVar2 * 2 + 0x11;
  if (uVar3 <= lVar2 * 2 + 2U) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_50[2] = 0x14000fbc4;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  _Str1 = (wchar_t *)((longlong)awStack_20 + lVar2);
  do {
    lVar6 = lVar6 + 1;
  } while (param_2[lVar6] != L'\0');
  uVar3 = lVar6 * 2 + 0x11;
  if (uVar3 <= lVar6 * 2 + 2U) {
    uVar3 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_50 + lVar2 + 8) = 0x14000fbf6;
  lVar6 = -(uVar3 & 0xfffffffffffffff0);
  _Str2 = (wchar_t *)((longlong)awStack_28 + lVar6 + lVar2);
  if (*param_1 == L'\"') {
    param_1 = param_1 + 1;
  }
  wVar1 = *param_1;
  pwVar5 = _Str1;
  if (wVar1 != L'\0') {
    do {
      pwVar4 = pwVar5;
      *pwVar4 = wVar1;
      pwVar5 = pwVar4 + 1;
      wVar1 = *(wchar_t *)(((longlong)param_1 - (longlong)_Str1) + (longlong)pwVar5);
    } while (wVar1 != L'\0');
    if ((pwVar5 != _Str1) && (*pwVar4 == L'\"')) {
      pwVar5 = pwVar4;
    }
  }
  *pwVar5 = L'\0';
  if (*param_2 == L'\"') {
    param_2 = param_2 + 1;
  }
  wVar1 = *param_2;
  pwVar5 = _Str2;
  if (wVar1 != L'\0') {
    do {
      pwVar4 = pwVar5;
      *pwVar4 = wVar1;
      pwVar5 = pwVar4 + 1;
      wVar1 = *(wchar_t *)(((longlong)param_2 - (longlong)_Str2) + (longlong)pwVar5);
    } while (wVar1 != L'\0');
    if ((pwVar5 != _Str2) && (*pwVar4 == L'\"')) {
      pwVar5 = pwVar4;
    }
  }
  *pwVar5 = L'\0';
  *(undefined8 *)((longlong)auStack_50 + lVar6 + lVar2) = 0x14000fc8c;
  _wcsicmp(_Str1,_Str2);
  uVar3 = local_18[0] ^ (ulonglong)local_18;
  *(undefined8 *)((longlong)auStack_50 + lVar6 + lVar2) = 0x14000fc98;
  __security_check_cookie(uVar3);
  return;
}



short * FUN_14000fcac(short *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  size_t sVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar6;
  short sVar7;
  longlong lVar5;
  
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (param_1[lVar4] != 0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = lVar5 + 2;
  lVar4 = SUB168(ZEXT816(2) * auVar1,8);
  sVar2 = SUB168(ZEXT816(2) * auVar1,0);
  if (lVar4 != 0) {
    sVar2 = 0xffffffffffffffff;
  }
  psVar3 = (short *)FUN_140009214(sVar2,lVar4,0xffffffffffffffff,param_4);
  if (*param_1 == 0x22) {
    param_1 = param_1 + 1;
  }
  sVar7 = *param_1;
  psVar6 = psVar3;
  if (sVar7 != 0) {
    do {
      *psVar6 = sVar7;
      psVar6 = psVar6 + 1;
      sVar7 = *(short *)(((longlong)param_1 - (longlong)psVar3) + (longlong)psVar6);
    } while (sVar7 != 0);
  }
  if (psVar6[-1] == 0x22) {
    psVar6 = psVar6 + -1;
  }
  *psVar6 = 0;
  return psVar3;
}



void FUN_14000fd2c(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (*param_1 == L'\"') {
    pwVar2 = wcsrchr(param_1,L'\"');
    *pwVar2 = L'\0';
    wVar1 = param_1[1];
    *param_1 = wVar1;
    pwVar2 = param_1 + 1;
    while (wVar1 != L'\0') {
      wVar1 = pwVar2[1];
      *pwVar2 = wVar1;
      pwVar2 = pwVar2 + 1;
    }
  }
                    // WARNING: Could not recover jumptable at 0x00014000fd87. Too many branches
                    // WARNING: Treating indirect jump as call
  _wfsopen(param_1,param_2,0x20);
  return;
}



void * FUN_14000fd90(void *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 == (void *)0x0) {
    if (0x7ffffffffffffff8 < param_2) goto LAB_14000fdce;
    pvVar1 = malloc(param_2 * 2);
  }
  else {
    if (0x7ffffffffffffff8 < param_2) goto LAB_14000fdce;
    pvVar1 = realloc(param_1,param_2 * 2);
  }
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
LAB_14000fdce:
  FUN_140003898((ulonglong)DAT_140025c24,0x41b,param_3,param_4);
  return pvVar1;
}



void FUN_14000fde8(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  WCHAR *pWVar5;
  wchar_t *pwVar6;
  LPWIN32_FIND_DATAW p_Var7;
  HANDLE pvVar8;
  HANDLE *ppvVar9;
  undefined auStack_298 [32];
  HANDLE local_278 [2];
  _WIN32_FIND_DATAW local_268;
  ulonglong local_18;
  
  local_18 = DAT_140015008 ^ (ulonglong)auStack_298;
  ppvVar9 = local_278;
  p_Var7 = &local_268;
  pwVar6 = param_1;
  pwVar1 = (wchar_t *)FUN_140005ca8(param_1,p_Var7,ppvVar9,param_4);
  if (pwVar1 != (wchar_t *)0x0) {
    puVar2 = FUN_14000dc58(pwVar6,p_Var7,(ulonglong)ppvVar9,param_4);
    uVar3 = FUN_14000f570(param_1,pwVar1);
    puVar2[1] = uVar3;
    while( true ) {
      p_Var7 = &local_268;
      pvVar8 = local_278[0];
      pWVar5 = FUN_140005e30(p_Var7,local_278[0]);
      if (pWVar5 == (WCHAR *)0x0) break;
      puVar4 = FUN_14000dc58(p_Var7,pvVar8,(ulonglong)ppvVar9,param_4);
      uVar3 = FUN_14000f570(param_1,pWVar5);
      *puVar4 = puVar2;
      puVar4[1] = uVar3;
      puVar2 = puVar4;
    }
  }
  __security_check_cookie(local_18 ^ (ulonglong)auStack_298);
  return;
}



undefined8 FUN_14000ff58(void)

{
  FUN_140010764();
  return 0;
}



ulonglong FUN_14000ff84(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint _Code;
  undefined8 uVar4;
  ulonglong uVar5;
  code **ppcVar6;
  longlong *plVar7;
  uint *puVar8;
  wchar_t *in_R9;
  
  uVar4 = __scrt_initialize_crt(1);
  if ((char)uVar4 == '\0') {
    __scrt_fastfail(7);
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar2 = false;
  uVar5 = __scrt_acquire_startup_lock();
  iVar3 = DAT_140015770;
  if (DAT_140015770 == 1) {
    iVar3 = 7;
    __scrt_fastfail(7);
  }
  if (iVar3 == 0) {
    DAT_140015770 = 1;
    iVar3 = _initterm_e(&DAT_1400115b0,&DAT_1400115d0);
    if (iVar3 != 0) {
      return 0xff;
    }
    _initterm(&DAT_140011598,&DAT_1400115a8);
    DAT_140015770 = 2;
  }
  else {
    bVar2 = true;
  }
  __scrt_release_startup_lock((char)uVar5);
  ppcVar6 = (code **)FUN_14001078c();
  if ((*ppcVar6 != (code *)0x0) && (uVar5 = FUN_140010544((longlong)ppcVar6), (char)uVar5 != '\0'))
  {
    pcVar1 = *ppcVar6;
    _guard_check_icall();
    (*pcVar1)(0,2);
  }
  plVar7 = (longlong *)FUN_140010794();
  if ((*plVar7 != 0) && (uVar5 = FUN_140010544((longlong)plVar7), (char)uVar5 != '\0')) {
    _register_thread_local_exe_atexit_callback(*plVar7);
  }
  __telemetry_main_invoke_trigger(0);
  plVar7 = (longlong *)__p___wargv();
  puVar8 = (uint *)__p___argc();
  uVar4 = _get_initial_wide_environment();
  _Code = FUN_14000a348(*puVar8,*plVar7,uVar4,in_R9);
  uVar4 = 0;
  __telemetry_main_return_trigger(0);
  uVar5 = __scrt_is_managed_app();
  if ((char)uVar5 != '\0') {
    if (!bVar2) {
      _cexit();
    }
    __scrt_uninitialize_crt(CONCAT71((int7)((ulonglong)uVar4 >> 8),1),'\0');
    return (ulonglong)_Code;
  }
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void entry(void)

{
  __security_init_cookie();
  FUN_14000ff84();
  return;
}



// Library Function - Single Match
//  __security_check_cookie
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_140015008) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __report_gsfailure(_StackCookie);
}



// Library Function - Single Match
//  __raise_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE pvVar1;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  pvVar1 = GetCurrentProcess();
                    // WARNING: Could not recover jumptable at 0x000140010181. Too many branches
                    // WARNING: Treating indirect jump as call
  TerminateProcess(pvVar1,0xc0000409);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __report_gsfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_38 [8];
  undefined auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1400101b2;
  capture_previous_context((PCONTEXT)&DAT_1400152a0);
  _DAT_140015210 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140015338 = puVar3 + 0x40;
  _DAT_140015320 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140015200 = 0xc0000409;
  _DAT_140015204 = 1;
  _DAT_140015218 = 1;
  DAT_140015220 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140015008;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140015010;
  *(undefined8 *)(puVar3 + -8) = 0x140010254;
  DAT_140015398 = _DAT_140015210;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140011600);
  return;
}



// Library Function - Single Match
//  __report_rangecheckfailure
// 
// Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __report_rangecheckfailure(void)

{
  __report_securityfailure(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __report_securityfailure
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14001029a;
  capture_current_context((PCONTEXT)&DAT_1400152a0);
  _DAT_140015210 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_140015338 = puVar3 + 0x30;
  _DAT_140015200 = 0xc0000409;
  _DAT_140015204 = 1;
  _DAT_140015218 = 1;
  DAT_140015220 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x140010306;
  DAT_140015398 = _DAT_140015210;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_140011600);
  return;
}



// Library Function - Single Match
//  capture_current_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// Library Function - Single Match
//  capture_previous_context
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// Library Function - Single Match
//  __scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_acquire_startup_lock(void)

{
  bool bVar1;
  undefined7 extraout_var;
  ulonglong uVar3;
  void *pvVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  pvVar2 = (void *)CONCAT71(extraout_var,bVar1);
  if ((int)pvVar2 == 0) {
LAB_14001041e:
    uVar3 = (ulonglong)pvVar2 & 0xffffffffffffff00;
  }
  else {
    do {
      LOCK();
      bVar1 = DAT_140015778 == 0;
      DAT_140015778 = DAT_140015778 ^ (ulonglong)bVar1 * (DAT_140015778 ^ (ulonglong)StackBase);
      pvVar2 = (void *)(!bVar1 * DAT_140015778);
      UNLOCK();
      if (bVar1) goto LAB_14001041e;
    } while (StackBase != pvVar2);
    uVar3 = CONCAT71((int7)((ulonglong)pvVar2 >> 8),1);
  }
  return uVar3;
}



// Library Function - Single Match
//  __scrt_initialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

ulonglong __scrt_initialize_crt(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_1400157b0 = 1;
  }
  FUN_140010a24();
  uVar1 = FUN_140010cc8();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140010cc8();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = FUN_140010cc8();
  }
  return uVar1 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2015 Release

bool __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined uVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_1 < 2) {
    bVar3 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar3) == 0) || (param_1 != 0)) {
      bVar3 = true;
      bVar2 = 0x40 - ((byte)DAT_140015008 & 0x3f) & 0x3f;
      _DAT_140015790 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ DAT_140015008;
      local_28 = (undefined4)_DAT_140015790;
      uStack_24 = (undefined4)(_DAT_140015790 >> 0x20);
      _DAT_140015780 = local_28;
      uRam0000000140015784 = uStack_24;
      uRam0000000140015788 = local_28;
      uRam000000014001578c = uStack_24;
      _DAT_140015798 = local_28;
      uRam000000014001579c = uStack_24;
      uRam00000001400157a0 = local_28;
      uRam00000001400157a4 = uStack_24;
      _DAT_1400157a8 = _DAT_140015790;
    }
    else {
      iVar5 = _initialize_onexit_table(&DAT_140015780);
      if (iVar5 == 0) {
        iVar5 = _initialize_onexit_table(&DAT_140015798);
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = false;
      }
    }
    return bVar3;
  }
  __scrt_fastfail(5);
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}



// WARNING: Removing unreachable block (ram,0x0001400105d5)

ulonglong FUN_140010544(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1400001f8; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_140000310;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_1400105bb;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1400105bb:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((pIVar3->Characteristics & IMAGE_SCN_MEM_WRITE) == 0) {
      uVar1 = CONCAT71(uVar2,1);
    }
    else {
      uVar1 = (ulonglong)uVar2 << 8;
    }
  }
  return uVar1;
}



// Library Function - Single Match
//  __scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void __scrt_release_startup_lock(char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_140015778 = 0;
    UNLOCK();
  }
  return;
}



// Library Function - Single Match
//  __scrt_uninitialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

undefined __scrt_uninitialize_crt(undefined8 param_1,char param_2)

{
  if ((DAT_1400157b0 == '\0') || (param_2 == '\0')) {
    FUN_140010cc8();
    FUN_140010cc8();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  _onexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_140015008 & 0x3f;
  if (((DAT_140015008 ^ _DAT_140015780) >> bVar2 | (DAT_140015008 ^ _DAT_140015780) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140015780,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}



// Library Function - Single Match
//  atexit
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  __security_init_cookie
// 
// Library: Visual Studio 2015 Release

void __cdecl __security_init_cookie(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  _FILETIME local_res10;
  LARGE_INTEGER local_res18;
  
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  if (DAT_140015008 == 0x2b992ddfa232) {
    GetSystemTimeAsFileTime(&local_res10);
    local_res8 = local_res10;
    DVar1 = GetCurrentThreadId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_res8 = (_FILETIME)((ulonglong)local_res8 ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res18);
    DAT_140015008 =
         ((ulonglong)local_res18.s.LowPart << 0x20 ^
          CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) ^ (ulonglong)local_res8 ^
         (ulonglong)&local_res8) & 0xffffffffffff;
    if (DAT_140015008 == 0x2b992ddfa232) {
      DAT_140015008 = 0x2b992ddfa233;
    }
  }
  DAT_140015010 = ~DAT_140015008;
  return;
}



undefined8 FUN_140010744(void)

{
  return 1;
}



undefined8 FUN_14001074c(void)

{
  return 0x4000;
}



void FUN_140010754(void)

{
                    // WARNING: Could not recover jumptable at 0x00014001075b. Too many branches
                    // WARNING: Treating indirect jump as call
  InitializeSListHead(&DAT_1400157c0);
  return;
}



void FUN_140010764(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_14000bd80();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)FUN_14000bddc();
  *puVar1 = *puVar1 | 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140010780(void)

{
  return _DAT_140015004 == 0;
}



undefined * FUN_14001078c(void)

{
  return &DAT_14003de10;
}



undefined * FUN_140010794(void)

{
  return &DAT_14003de08;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_fastfail
// 
// Library: Visual Studio 2015 Release

void __scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined local_res18 [8];
  undefined local_res20 [8];
  undefined auStack_5c8 [8];
  undefined auStack_5c0 [232];
  undefined local_4d8 [152];
  undefined *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  _DAT_1400157d0 = 0;
  *(undefined8 *)(puVar4 + -8) = 0x1400107dd;
  memset(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x1400107e7;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x140010801;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined **)(puVar4 + 0x30) = local_res18;
    *(undefined **)(puVar4 + 0x28) = local_res20;
    *(undefined **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x140010842;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x140010874;
  memset(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x140010896;
  BVar2 = IsDebuggerPresent();
  *(undefined **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x1400108b7;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x1400108c2;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if (LVar3 == 0) {
    _DAT_1400157d0 = _DAT_1400157d0 & -(uint)(BVar2 == 1);
  }
  return;
}



undefined8 FUN_1400108e4(void)

{
  return 0;
}



// Library Function - Single Match
//  __scrt_is_managed_app
// 
// Library: Visual Studio 2015 Release

ulonglong __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  HMODULE pHVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  pHVar3 = pHVar1;
  if ((((pHVar1 == (HMODULE)0x0) || (pHVar3 = (HMODULE)0x5a4d, *(short *)&pHVar1->unused != 0x5a4d))
      || (pHVar3 = (HMODULE)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused),
         pHVar3->unused != 0x4550)) ||
     ((*(short *)&pHVar3[6].unused != 0x20b || ((uint)pHVar3[0x21].unused < 0xf)))) {
    uVar2 = (ulonglong)pHVar3 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)pHVar3 >> 8),pHVar3[0x3e].unused != 0);
  }
  return uVar2;
}



void FUN_14001093c(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010943. Too many branches
                    // WARNING: Treating indirect jump as call
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_14001094c);
  return;
}



void FUN_140010984(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  for (ppcVar2 = (code **)&DAT_140013438; ppcVar2 < &DAT_140013438; ppcVar2 = ppcVar2 + 1) {
    pcVar1 = *ppcVar2;
    if (pcVar1 != (code *)0x0) {
      _guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}



void _guard_check_icall(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x000140010b41)
// WARNING: Removing unreachable block (ram,0x000140010a9e)
// WARNING: Removing unreachable block (ram,0x000140010a43)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140010a24(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_XCR0;
  uint local_20;
  
  local_20 = 0;
  DAT_14001501c = 2;
  piVar1 = (int *)cpuid_basic_info(0);
  _DAT_140015018 = 1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  uVar5 = DAT_1400157d4;
  if ((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) {
    _DAT_140015020 = 0xffffffffffffffff;
    uVar6 = *puVar2 & 0xfff3ff0;
    if ((((uVar6 == 0x106c0) || (uVar6 == 0x20660)) || (uVar6 == 0x20670)) ||
       ((uVar5 = DAT_1400157d4 | 4, uVar6 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar6 - 0x30650) & 0x3f) & 1) != 0)))) {
      uVar5 = DAT_1400157d4 | 5;
    }
  }
  DAT_1400157d4 = uVar5;
  if (((piVar1[1] ^ 0x68747541U | piVar1[2] ^ 0x69746e65U | piVar1[3] ^ 0x444d4163U) == 0) &&
     (0x600eff < (*puVar2 & 0xff00f00))) {
    DAT_1400157d4 = DAT_1400157d4 | 4;
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    local_20 = *(uint *)(lVar3 + 4);
    if ((local_20 >> 9 & 1) != 0) {
      DAT_1400157d4 = DAT_1400157d4 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    _DAT_140015018 = 2;
    DAT_14001501c = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) && ((in_XCR0 & 6) == 6)) {
      DAT_14001501c = 0xe;
      _DAT_140015018 = 3;
      if ((local_20 & 0x20) != 0) {
        _DAT_140015018 = 5;
        DAT_14001501c = 0x2e;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2015 Release

bool __scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_140015030 != 0;
}



void __telemetry_main_invoke_trigger(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c00. Too many branches
                    // WARNING: Treating indirect jump as call
  __telemetry_main_invoke_trigger();
  return;
}



void __telemetry_main_return_trigger(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c06. Too many branches
                    // WARNING: Treating indirect jump as call
  __telemetry_main_return_trigger();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010c0c. Too many branches
                    // WARNING: Treating indirect jump as call
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010c12. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x000140010c18. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void _seh_filter_exe(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c1e. Too many branches
                    // WARNING: Treating indirect jump as call
  _seh_filter_exe();
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c24. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c2a. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_wide_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c30. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_wide_argv();
  return;
}



void _initialize_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c36. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_wide_environment();
  return;
}



void _get_initial_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c3c. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_wide_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c42. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c48. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010c54. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c5a. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___wargv(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c60. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___wargv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c66. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c72. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010c78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c84. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c8a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c90. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c96. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x000140010c9c. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010cc2. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



undefined FUN_140010cc8(void)

{
  return 1;
}



void FUN_140010cec(ulonglong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  lVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8) + *(longlong *)(param_2 + 8);
  if ((*(byte *)(lVar1 + 3) & 0xf) != 0) {
    param_1 = param_1 + (longlong)(int)(*(byte *)(lVar1 + 3) & 0xfffffff0);
  }
  __security_check_cookie(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  _alloca_probe
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void _alloca_probe(void)

{
  undefined *in_RAX;
  undefined *puVar1;
  undefined *puVar2;
  undefined local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (undefined *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000140010e42. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



// WARNING: This is an inlined function

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x000140010e60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_140010e8c(undefined8 *param_1)

{
  _seh_filter_exe(*(undefined4 *)*param_1,param_1);
  return;
}


