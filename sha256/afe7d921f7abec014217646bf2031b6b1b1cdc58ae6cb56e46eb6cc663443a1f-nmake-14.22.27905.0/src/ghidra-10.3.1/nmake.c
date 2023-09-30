typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
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

typedef struct _WIN32_FIND_DATAW * LPWIN32_FIND_DATAW;

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
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

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef union _SLIST_HEADER * PSLIST_HEADER;

typedef double ULONGLONG;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY * Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

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

typedef CHAR * LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION * PMEMORY_BASIC_INFORMATION;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

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

typedef LARGE_INTEGER * PLARGE_INTEGER;

typedef CHAR * LPSTR;

typedef WORD LANGID;

typedef DWORD ACCESS_MASK;

typedef WCHAR * LPCWSTR;

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

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[54];
};

typedef struct _FILETIME * LPFILETIME;

typedef int (* FARPROC)(void);

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

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
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
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

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

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
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
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
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

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
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

typedef uint uintptr_t;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

struct _IMAGE_SECTION_HEADER { // PlaceHolder Structure
};

typedef int (* _onexit_t)(void);

typedef void (* _invalid_parameter_handler)(wchar_t *, wchar_t *, wchar_t *, uint, uintptr_t);

typedef uint size_t;

typedef ushort wint_t;

typedef int errno_t;

typedef size_t rsize_t;

typedef int intptr_t;




void FUN_00402ae0(void)

{
  FUN_0040ebe0(&DAT_004226c0,(int **)&DAT_004226bc,(int **)0x0,(ushort *)0x0,0,0,0);
  DAT_004226b8 = FUN_0040e8fe(&DAT_004226c0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00402b07(undefined4 *param_1)

{
  int **ppiVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  byte bVar5;
  int **ppiVar6;
  undefined4 *local_8;
  
  local_8 = param_1;
  if (DAT_004226b8 != 0) {
    DAT_004226b4 = DAT_004226b4 | 0x20;
    FUN_00402c29();
    DAT_004226b8 = 0;
  }
  if (((DAT_004226b4 & 0x20) != 0) && (uVar2 = FUN_0040ff8c(&DAT_004226c0), (char)uVar2 != '\0')) {
    if ((DAT_004226b4 & 0x10) != 0) {
      FUN_004053c9(DAT_004226b0,0x444);
    }
    FUN_004053c9(DAT_004226b0,0x43d);
  }
  puVar3 = FUN_0040e8ac();
  bVar5 = DAT_004226b4;
  if ((DAT_004226b4 & 0x40) == 0) {
    pvVar4 = FUN_0040e8fe(&DAT_004226c0);
    bVar5 = DAT_004226b4;
    puVar3[1] = pvVar4;
  }
  else {
    puVar3[1] = DAT_004226ac;
    DAT_004226ac = 0;
  }
  local_8 = puVar3;
  if ((bVar5 & 0x30) != 0x10) {
    FUN_0040ebe0((wchar_t *)puVar3[1],(int **)&DAT_004226bc,(int **)0x0,(ushort *)0x0,0,0,0);
    bVar5 = DAT_004226b4;
  }
  ppiVar1 = _DAT_004226bc;
  _DAT_004226bc = ppiVar1;
  if ((bVar5 & 0x20) != 0) {
    FUN_00402ea0(L"$",&local_8,(int **)&DAT_004226bc);
    FUN_00402ea0(L"*?",&local_8,(int **)0x0);
    _DAT_004226bc = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar1;
        ppiVar1 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00433618;
        DAT_00433618 = ppiVar6;
      } while (ppiVar1 != (int **)0x0);
      _DAT_004226bc = (int **)0x0;
    }
  }
  FUN_0040ea03(&DAT_004226a8,local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00402c29(void)

{
  int **ppiVar1;
  undefined4 uVar2;
  int **ppiVar3;
  
  DAT_0041248f = DAT_0041248e;
  DAT_004226a8 = FUN_0040e8ac();
  DAT_004226a8[1] = DAT_004226b8;
  ppiVar1 = _DAT_004226bc;
  FUN_00402ea0(L"$",&DAT_004226a8,(int **)&DAT_004226bc);
  FUN_00402ea0(L"*?",&DAT_004226a8,(int **)0x0);
  _DAT_004226bc = ppiVar1;
  if (ppiVar1 != (int **)0x0) {
    do {
      ppiVar3 = ppiVar1;
      ppiVar1 = (int **)*ppiVar3;
      *ppiVar3 = (int *)DAT_00433618;
      DAT_00433618 = ppiVar3;
    } while (ppiVar1 != (int **)0x0);
    _DAT_004226bc = (int **)0x0;
  }
  if (((DAT_004226a8 != (undefined4 *)0x0) ||
      (((DAT_004226b4 & 0x20) == 0 &&
       (FUN_004053c9(DAT_004226a4,0x43b), DAT_004226a8 != (undefined4 *)0x0)))) &&
     (uVar2 = FUN_0040ff8c((short *)DAT_004226a8[1]), (char)uVar2 != '\0')) {
    DAT_004226b4 = DAT_004226b4 | 0x10;
  }
  return;
}



void FUN_00402ce6(void)

{
  byte bVar1;
  int **ppiVar2;
  bool bVar3;
  int **ppiVar4;
  
  if (DAT_004226b8 == 0) {
    DAT_004226b4 = DAT_004226b4 & 0xdf;
  }
  else {
    FUN_00402c29();
    DAT_004226b8 = 0;
  }
  ppiVar2 = DAT_004226a8;
  if (DAT_004226c2 != 0) {
    DAT_0041248f = DAT_0041248f | 0x20;
  }
  bVar1 = DAT_0041248f;
  if (DAT_004226a8 == (int **)0x0) {
    FUN_004053c9(DAT_004226b0,0x40d);
  }
  if ((DAT_004226b4 & 0x10) == 0) {
    if ((*ppiVar2 != (int *)0x0) ||
       (bVar3 = FUN_00402dc5((wchar_t *)ppiVar2[1]), ppiVar2 = DAT_004226a8, !bVar3))
    goto LAB_00402db4;
    free(DAT_004226a8[1]);
  }
  else {
    ppiVar4 = (int **)FUN_0040aba8(0x18);
    ppiVar4[2] = ppiVar2[1];
    *(byte *)(ppiVar4 + 5) = bVar1 >> 5 & 1;
    *ppiVar4 = (int *)DAT_00422694;
    DAT_00422694 = ppiVar4;
    if (*ppiVar4 != (int *)0x0) {
      (*ppiVar4)[1] = (int)ppiVar4;
    }
  }
  ppiVar2 = DAT_00433618;
  DAT_00433618 = DAT_004226a8;
  *DAT_004226a8 = (int *)ppiVar2;
  ppiVar2 = DAT_00412480;
LAB_00402db4:
  DAT_00412480 = ppiVar2;
  DAT_004226a8 = (int **)0x0;
  DAT_004226b4 = DAT_004226b4 | 0x80;
  return;
}



bool __fastcall FUN_00402dc5(wchar_t *param_1)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  iVar2 = _wcsicmp(param_1,L".SILENT");
  if (iVar2 == 0) {
    DAT_004226b4 = DAT_004226b4 | 2;
    FUN_0040c7e6(0x73,'\x01');
  }
  iVar3 = _wcsicmp(param_1,L".IGNORE");
  if (iVar3 == 0) {
    DAT_004226b4 = DAT_004226b4 | 4;
    FUN_0040c7e6(0x69,'\x01');
  }
  else {
    pwVar6 = L".SUFFIXES";
    pwVar5 = param_1;
    do {
      wVar1 = *pwVar5;
      bVar8 = (ushort)wVar1 < (ushort)*pwVar6;
      if (wVar1 != *pwVar6) {
LAB_00402e4b:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_00402e50;
      }
      if (wVar1 == L'\0') break;
      wVar1 = pwVar5[1];
      bVar8 = (ushort)wVar1 < (ushort)pwVar6[1];
      if (wVar1 != pwVar6[1]) goto LAB_00402e4b;
      pwVar5 = pwVar5 + 2;
      pwVar6 = pwVar6 + 2;
    } while (wVar1 != L'\0');
    uVar4 = 0;
LAB_00402e50:
    if (uVar4 == 0) {
      DAT_004226b4 = DAT_004226b4 | 1;
    }
    else {
      pwVar5 = L".PRECIOUS";
      do {
        wVar1 = *param_1;
        bVar8 = (ushort)wVar1 < (ushort)*pwVar5;
        if (wVar1 != *pwVar5) {
LAB_00402e86:
          uVar7 = -(uint)bVar8 | 1;
          break;
        }
        if (wVar1 == L'\0') break;
        wVar1 = param_1[1];
        bVar8 = (ushort)wVar1 < (ushort)pwVar5[1];
        if (wVar1 != pwVar5[1]) goto LAB_00402e86;
        param_1 = param_1 + 2;
        pwVar5 = pwVar5 + 2;
      } while (wVar1 != L'\0');
      if (uVar7 != 0) {
        return iVar2 == 0;
      }
      DAT_004226b4 = DAT_004226b4 | 8;
    }
  }
  return true;
}



void __fastcall FUN_00402ea0(wchar_t *param_1,undefined4 *param_2,int **param_3)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  void *pvVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  short *_Memory;
  undefined4 *local_24;
  undefined4 *local_20;
  short *local_1c;
  wchar_t *local_18;
  short *psStack_14;
  short *local_10;
  undefined4 *puStack_c;
  
  puVar7 = (undefined4 *)0x0;
  local_1c = (short *)0x0;
  local_24 = (undefined4 *)0x0;
  local_10 = (short *)0x0;
  puVar5 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)*param_2;
  local_20 = param_2;
  local_18 = param_1;
  do {
    while( true ) {
      if (puVar6 == (undefined4 *)0x0) {
        return;
      }
      pwVar1 = wcspbrk((wchar_t *)puVar6[1],local_18);
      if (pwVar1 != (wchar_t *)0x0) break;
LAB_00402ff3:
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
    if (*local_18 == L'$') {
      local_1c = (short *)FUN_0040f2f6((wchar_t *)puVar6[1],-1,param_3);
      free((void *)puVar6[1]);
    }
    else {
      uVar2 = FUN_0040ff8c((wchar_t *)puVar6[1]);
      if (((char)uVar2 != '\0') ||
         (puVar7 = (undefined4 *)FUN_004106ce((wchar_t *)puVar6[1]), local_24 = puVar7,
         puVar7 == (undefined4 *)0x0)) goto LAB_00402ff3;
      local_10 = (short *)puVar6[1];
    }
    if (puVar5 == (undefined4 *)0x0) {
      *local_20 = *puVar6;
      *puVar6 = DAT_00433618;
      puStack_c = local_20;
    }
    else {
      *puVar5 = *puVar6;
      *puVar6 = DAT_00433618;
      puStack_c = puVar5;
    }
    puStack_c = (undefined4 *)*puStack_c;
    DAT_00433618 = puVar6;
    if (*local_18 == L'$') {
      psStack_14 = local_1c;
      while (psVar4 = FUN_0040300c(&psStack_14), _Memory = local_1c, psVar4 != (short *)0x0) {
        puVar7 = FUN_0040e8ac();
        local_24 = puVar7;
        pvVar3 = FUN_0040e8fe(psVar4);
        puVar7[1] = pvVar3;
        *puVar7 = *local_20;
        *local_20 = puVar7;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = puVar7;
        }
      }
    }
    else {
      _Memory = local_10;
      if (puVar7 != (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)*puVar7;
          puVar5 = puVar7;
          while (puVar7 = puVar6, puVar7 != (undefined4 *)0x0) {
            puVar5 = puVar7;
            puVar6 = (undefined4 *)*puVar7;
          }
        }
        FUN_0040ea03(&local_24,*local_20);
        *local_20 = local_24;
        puVar7 = local_24;
        _Memory = local_10;
      }
    }
    free(_Memory);
    puVar6 = puStack_c;
  } while( true );
}



short * __fastcall FUN_0040300c(short **param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  
  for (psVar2 = *param_1; (sVar4 = *psVar2, sVar4 == 0x20 || (sVar4 == 9)); psVar2 = psVar2 + 1) {
  }
  if (sVar4 == 0) {
    return (short *)0x0;
  }
  psVar3 = psVar2;
  if (sVar4 == 0x22) {
    do {
      psVar3 = psVar3 + 1;
      sVar4 = *psVar3;
      if (sVar4 == 0) break;
    } while (sVar4 != 0x22);
  }
  else {
    do {
      if ((sVar4 == 0x20) || (sVar4 == 9)) break;
      psVar3 = psVar3 + 1;
      sVar4 = *psVar3;
    } while (sVar4 != 0);
  }
  psVar1 = psVar3;
  if ((sVar4 != 0x20) && (sVar4 != 9)) {
    if (sVar4 != 0x22) {
      if (sVar4 == 0) {
        psVar3 = psVar3 + -1;
      }
      goto LAB_004030c6;
    }
    psVar1 = psVar3 + 1;
    if (psVar3[1] == 0) goto LAB_004030c6;
  }
  psVar3 = psVar1;
  *psVar3 = 0;
LAB_004030c6:
  *param_1 = psVar3 + 1;
  return psVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004030d2(void)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  
  if ((char)DAT_004226b4 < '\0') {
    DAT_004226b4 = DAT_004226b4 & 0x7f;
  }
  if ((DAT_004226b4 & 0x10) == 0) {
    if ((DAT_004226b4 & 6) == 0) {
      if ((DAT_004226b4 & 1) == 0) {
        if ((DAT_004226b4 & 8) == 0) {
          DAT_00422698 = (int *)FUN_0040aba8(0x20);
          *DAT_00422698 = DAT_004226a8;
          DAT_00422698[1] = _DAT_004226bc;
          goto LAB_004031d5;
        }
        if (DAT_004226a8 == 0) goto LAB_004031d5;
        ppuVar2 = (undefined4 **)&DAT_0042269c;
      }
      else {
        if (DAT_004226a8 == 0) {
          if (DAT_004226a0 != (undefined4 *)0x0) {
            do {
              puVar1 = DAT_004226a0;
              DAT_004226a0 = (undefined4 *)*puVar1;
              free((void *)puVar1[1]);
              *puVar1 = DAT_00433618;
              DAT_00433618 = puVar1;
            } while (DAT_004226a0 != (undefined4 *)0x0);
          }
          goto LAB_004031d5;
        }
        ppuVar2 = &DAT_004226a0;
      }
      FUN_00403766(ppuVar2);
    }
    else if (DAT_004226a8 != 0) {
      FUN_004053c9(DAT_004226b0,0x442);
    }
  }
  else if (DAT_004226a8 != 0) {
    FUN_004053c9(DAT_004226b0,0x43e);
  }
LAB_004031d5:
  DAT_004226a8 = 0;
  _DAT_004226bc = 0;
  DAT_004226b4 = DAT_004226b4 | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004031ec(void)

{
  int **ppiVar1;
  bool bVar2;
  bool bVar3;
  int **ppiVar4;
  char local_5;
  
  ppiVar4 = DAT_00412480;
  bVar2 = true;
  local_5 = '\x01';
  if ((DAT_004226b4 & 0x10) == 0) {
    if ((DAT_004226b4 & 0xf) == 0) {
      *(int *)(DAT_00422698 + 8) = DAT_004226a8;
      *(undefined4 *)(DAT_00422698 + 0xc) = _DAT_004226bc;
      *(undefined *)(DAT_00422698 + 0x10) = DAT_0041248f;
      if (ppiVar4 != (int **)0x0) {
        do {
          bVar3 = FUN_00402dc5((wchar_t *)ppiVar4[1]);
          if (bVar3) {
            FUN_004053c9(DAT_004226b0,0x445);
          }
          FUN_004036a5((wchar_t *)ppiVar4[1],local_5);
          if (DAT_00422690 == (int **)0x0) {
            bVar2 = false;
            DAT_00422690 = ppiVar4;
          }
          ppiVar1 = (int **)*ppiVar4;
          DAT_00412480 = ppiVar1;
          if (bVar2) {
            *ppiVar4 = (int *)DAT_00433618;
            DAT_00433618 = ppiVar4;
          }
          local_5 = '\0';
          ppiVar4 = ppiVar1;
        } while (ppiVar1 != (int **)0x0);
      }
    }
    else if (DAT_004226a8 != 0) {
      FUN_004053c9(DAT_004226b0,0x441);
    }
  }
  else {
    *(int *)(DAT_00422694 + 0xc) = DAT_004226a8;
  }
  DAT_00412480 = (int **)0x0;
  DAT_004226a8 = 0;
  _DAT_004226bc = 0;
  DAT_00422698 = 0;
  DAT_004226b4 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403323(void)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined4 uVar4;
  wchar_t wVar5;
  int **ppiVar6;
  
  pwVar2 = wcschr(DAT_004226b8,L'$');
  ppiVar1 = _DAT_004226bc;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = (wchar_t *)FUN_0040f2f6(DAT_004226b8,-1,(int **)&DAT_004226bc);
    if (*pwVar2 == L'\0') {
      FUN_004053c9(DAT_004226b0,0x3ec);
    }
    _DAT_004226bc = ppiVar1;
    if (ppiVar1 != (int **)0x0) {
      do {
        ppiVar6 = ppiVar1;
        ppiVar1 = (int **)*ppiVar6;
        *ppiVar6 = (int *)DAT_00433618;
        DAT_00433618 = ppiVar6;
      } while (ppiVar1 != (int **)0x0);
      _DAT_004226bc = (int **)0x0;
    }
    free(DAT_004226b8);
    DAT_004226b8 = pwVar2;
  }
  wVar5 = *DAT_004226b8;
  pwVar2 = DAT_004226b8;
  if (wVar5 != L'\0') {
    do {
      uVar3 = FUN_004038ca(wVar5);
      if ((char)uVar3 == '\0') break;
      pwVar2 = pwVar2 + 1;
      wVar5 = *pwVar2;
    } while (wVar5 != L'\0');
    if (*pwVar2 != L'\0') {
      FUN_004053c9(DAT_004226b0,0x3e9);
    }
  }
  DAT_0041248d = 1;
  uVar4 = FUN_00403552(DAT_004226b8,DAT_004226ac,0);
  if ((char)uVar4 == '\0') {
    free(DAT_004226b8);
    free(DAT_004226ac);
  }
  DAT_004226ac = (wchar_t *)0x0;
  DAT_004226b8 = (wchar_t *)0x0;
  return;
}



int __fastcall FUN_00403430(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  
  wVar1 = *param_1;
  pwVar6 = param_1;
  while ((wVar1 != L'\0' && (uVar4 = FUN_004038ca(wVar1), (char)uVar4 != '\0'))) {
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  if (*pwVar6 != L'\0') {
    if ((param_3 & 4) != 0) {
      return (uint)(byte)((ushort)*pwVar6 >> 8) << 8;
    }
    FUN_004053c9(DAT_004226b0,0x3e9);
  }
  pwVar6 = param_2;
  if ((param_3 & 0x40) != 0) {
    pwVar5 = wcschr(param_2,L'$');
    iVar9 = 0;
    if (pwVar5 != (wchar_t *)0x0) {
      do {
        iVar8 = iVar9;
        iVar9 = iVar8 + 1;
        pwVar5 = wcschr(pwVar5 + 1,L'$');
      } while (pwVar5 != (wchar_t *)0x0);
      if (iVar9 != 0) {
        do {
          wVar1 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar1 != L'\0');
        lVar2 = (ulonglong)(uint)(iVar8 + 2 + ((int)pwVar6 - (int)(param_2 + 1) >> 1)) * 2;
        pwVar6 = (wchar_t *)
                 FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
        wVar1 = *param_2;
        pwVar5 = param_2;
        pwVar3 = pwVar6;
        while (wVar1 != L'\0') {
          *pwVar3 = wVar1;
          pwVar5 = pwVar5 + 1;
          pwVar7 = pwVar3 + 1;
          if (wVar1 == L'$') {
            *pwVar7 = L'$';
            pwVar7 = pwVar3 + 2;
          }
          pwVar3 = pwVar7;
          wVar1 = *pwVar5;
        }
        *pwVar3 = L'\0';
        free(param_2);
      }
    }
  }
  iVar9 = FUN_00403552(param_1,pwVar6,param_3);
  return iVar9;
}



int __fastcall FUN_00403552(wchar_t *param_1,wchar_t *param_2,uint param_3)

{
  uint uVar1;
  uint3 uVar7;
  wchar_t *_Value;
  errno_t eVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  int *piVar6;
  size_t local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = 0;
  if ((param_3 & 2) == 0) {
    if ((((DAT_0041248d == '\0') || ((DAT_0041248c & 4) != 0)) ||
        (eVar2 = _wgetenv_s(&local_c,(wchar_t *)0x0,0,param_1), eVar2 != 0)) || (local_c == 0))
    goto LAB_004035e3;
    uVar1 = FUN_0040aaef((ushort *)param_1);
    if (uVar1 == 0) {
LAB_004035ba:
      _Value = FUN_0040f28e(param_2);
      eVar2 = _wputenv_s(param_1,_Value);
      if (eVar2 != 0) {
        FUN_004053c9(DAT_004226b0,0x41f);
      }
      goto LAB_004035e3;
    }
    uVar7 = (uint3)(uVar1 >> 8);
    if (((*(byte *)(uVar1 + 0xc) & 2) == 0) && ((*(byte *)(uVar1 + 0xc) & DAT_0041248c & 4) == 0))
    goto LAB_004035ba;
LAB_00403606:
    iVar4 = (uint)uVar7 << 8;
  }
  else {
    if (*param_2 != L'\0') goto LAB_004035ba;
LAB_004035e3:
    DAT_0041248d = '\0';
    ppiVar3 = (int **)FUN_0040aaef((ushort *)param_1);
    if (ppiVar3 != (int **)0x0) {
      uVar7 = (uint3)((uint)ppiVar3 >> 8);
      if (((*(byte *)(ppiVar3 + 3) & 2) != 0) || ((*(byte *)(ppiVar3 + 3) & DAT_0041248c & 4) != 0))
      goto LAB_00403606;
    }
    ppiVar5 = (int **)FUN_0040e8ac();
    ppiVar5[1] = (int *)param_2;
    if (ppiVar3 == (int **)0x0) {
      ppiVar3 = (int **)FUN_0040aba8(0x10);
      ppiVar3[1] = (int *)param_1;
    }
    else {
      local_5 = '\x01';
    }
    *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) & 0xef | (byte)param_3;
    piVar6 = ppiVar3[2];
    *ppiVar5 = piVar6;
    ppiVar3[2] = (int *)ppiVar5;
    ppiVar5 = DAT_00436624;
    if (local_5 == '\0') {
      DAT_00436624 = (int **)0x0;
      piVar6 = *ppiVar5;
      *ppiVar3 = piVar6;
      *ppiVar5 = (int *)ppiVar3;
    }
    if (((param_3 & 0x40) == 0) && (piVar6 = (int *)wcschr(param_2,L'$'), piVar6 != (int *)0x0)) {
      *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) | 1;
      piVar6 = (int *)FUN_0040ebe0(param_2,(int **)0x0,(int **)0x0,(ushort *)param_1,1,0,param_3);
      *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) & 0xfe;
      if ((char)piVar6 == '\0') {
        ppiVar3[2] = (int *)0x0;
        *(byte *)(ppiVar3 + 3) = *(byte *)(ppiVar3 + 3) | 0x10;
      }
    }
    iVar4 = CONCAT31((int3)((uint)piVar6 >> 8),1);
  }
  return iVar4;
}



void __fastcall FUN_004036a5(wchar_t *param_1,char param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  
  if (DAT_00422698 == (undefined4 *)0x0) {
    DAT_00422698 = (undefined4 *)FUN_0040aba8(0x20);
  }
  if (param_2 == '\0') {
    puVar2 = (undefined4 *)FUN_00403880(DAT_00422698);
  }
  else {
    puVar2 = (undefined4 *)FUN_0040aba8(8);
    puVar2[1] = DAT_00422698;
  }
  puVar3 = FUN_0040ea50(param_1);
  if (puVar3 == (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar3 = (undefined4 *)FUN_0040aba8(0x20);
    *(byte *)(puVar3 + 2) = DAT_0041248f;
    puVar3[1] = param_1;
    puVar3[6] = puVar2;
    uVar1 = FUN_0040ea18((wint_t *)param_1);
    *puVar3 = (&DAT_00422490)[CONCAT22(extraout_var,uVar1)];
    (&DAT_00422490)[CONCAT22(extraout_var,uVar1)] = puVar3;
  }
  else {
    if (((*(byte *)(puVar3 + 2) ^ DAT_0041248f) & 0x20) != 0) {
      FUN_004053c9(DAT_004226b0,0x43f);
    }
    FUN_0040ea03(puVar3 + 6,puVar2);
    free(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00403766(undefined4 *param_1)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int **ppiVar6;
  undefined4 *local_14;
  wchar_t *local_c;
  undefined4 *local_8;
  
  local_8 = DAT_004226a8;
  local_14 = DAT_004226a8;
  while (local_14 != (undefined4 *)0x0) {
    pwVar2 = wcschr((wchar_t *)local_14[1],L'$');
    ppiVar1 = _DAT_004226bc;
    if (pwVar2 == (wchar_t *)0x0) {
      puVar4 = (undefined4 *)*local_14;
      *local_14 = 0;
      local_8 = puVar4;
      FUN_0040ea03(param_1,local_14);
      local_14 = puVar4;
    }
    else {
      pwVar2 = (wchar_t *)FUN_0040f2f6((wchar_t *)local_14[1],-1,(int **)&DAT_004226bc);
      if (ppiVar1 != _DAT_004226bc) {
        do {
          ppiVar6 = ppiVar1;
          ppiVar1 = (int **)*ppiVar6;
          *ppiVar6 = DAT_00433618;
          DAT_00433618 = ppiVar6;
        } while (ppiVar1 != _DAT_004226bc);
      }
      local_c = (wchar_t *)0x0;
      pwVar3 = wcstok_s(pwVar2,L" \t",&local_c);
      puVar4 = local_14;
      while (pwVar3 != (wchar_t *)0x0) {
        puVar4 = FUN_0040e8ac();
        pvVar5 = FUN_0040e8fe(pwVar3);
        puVar4[1] = pvVar5;
        FUN_0040ea03(param_1,puVar4);
        pwVar3 = wcstok_s((wchar_t *)0x0,L" \t",&local_c);
        puVar4 = local_8;
      }
      free(pwVar2);
      free((void *)puVar4[1]);
      local_8 = (undefined4 *)*puVar4;
      *local_14 = DAT_00433618;
      DAT_00433618 = local_14;
      local_14 = local_8;
    }
  }
  return;
}



void * __fastcall FUN_00403880(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar2 = FUN_0040aba8(8);
  puVar3 = (undefined4 *)FUN_0040aba8(0x20);
  uVar1 = *param_1;
  *(undefined4 **)((int)pvVar2 + 4) = puVar3;
  *puVar3 = uVar1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  *(undefined *)(puVar3 + 4) = *(undefined *)(param_1 + 4);
  puVar3[6] = param_1[6];
  puVar3[7] = param_1[7];
  return pvVar2;
}



uint __fastcall FUN_004038ca(ushort param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    return CONCAT11((char)(param_1 >> 8),(&DAT_00401060)[param_1]) & 0xffffff01;
  }
  iVar1 = iswspace(param_1);
  return CONCAT31((int3)((uint)-iVar1 >> 8),'\x01' - (iVar1 != 0));
}



void FUN_004038ef(void)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  int iVar3;
  ulonglong uVar4;
  undefined auStack_274 [4];
  undefined8 uStack_270;
  HANDLE pvStack_264;
  _WIN32_FIND_DATAW _Stack_260;
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)auStack_274;
  do {
    puVar1 = DAT_00422690;
    if (DAT_00422690 == (undefined4 *)0x0) {
LAB_00403a15:
      ___security_check_cookie_4(local_c ^ (uint)auStack_274);
      return;
    }
    pwVar2 = wcspbrk((wchar_t *)DAT_00422690[1],L"*?");
    if (pwVar2 == (wchar_t *)0x0) {
      uStack_270._0_4_ = 0;
      uStack_270._4_4_ = 0;
      iVar3 = FUN_00403a3f((wchar_t *)DAT_00422690[1],DAT_0041248e,&uStack_270);
      if ((iVar3 < 0) && ((DAT_0041248c & 8) != 0)) {
LAB_00403a34:
        FUN_00404b9e(puVar1);
        goto LAB_00403a15;
      }
    }
    else {
      pwVar2 = (wchar_t *)FUN_00407a1b((wchar_t *)DAT_00422690[1],&_Stack_260,&pvStack_264);
      if (pwVar2 == (wchar_t *)0x0) {
        FUN_004053c9(0,0x42d);
      }
      else {
        do {
          pwVar2 = (wchar_t *)FUN_0040ff18((wchar_t *)DAT_00422690[1],pwVar2);
          uVar4 = FUN_00407a01((byte *)&_Stack_260);
          uStack_270 = uVar4;
          iVar3 = FUN_00403a3f(pwVar2,DAT_0041248e,&uStack_270);
          free(pwVar2);
          if ((iVar3 < 0) && ((DAT_0041248c & 8) != 0)) goto LAB_00403a34;
          pwVar2 = FUN_00407ba7(&_Stack_260,pvStack_264);
        } while (pwVar2 != (WCHAR *)0x0);
      }
    }
    DAT_00422690 = (undefined4 *)*puVar1;
    *puVar1 = DAT_00433618;
    DAT_00433618 = puVar1;
  } while( true );
}



int __fastcall FUN_00403a3f(wchar_t *param_1,byte param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  int *local_c [2];
  
  local_c[0] = (int *)0x0;
  iVar1 = FUN_00403a7c(param_1,param_2,param_3,(wchar_t *)0x0,local_c);
  if (local_c[0] != (int *)0x0) {
    iVar2 = FUN_00404e10(local_c[0]);
    iVar1 = iVar1 + iVar2;
    FUN_00404e2e(local_c);
  }
  return iVar1;
}



void __fastcall
FUN_00403a7c(wchar_t *param_1,byte param_2,ulonglong *param_3,wchar_t *param_4,int **param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  
  DAT_00412484 = DAT_00412484 + 1;
  puVar1 = FUN_0040ea50(param_1);
  bVar2 = puVar1 == (undefined4 *)0x0;
  if (bVar2) {
    puVar1 = FUN_00404bc8((wint_t *)param_1,param_2);
  }
  FUN_00403ad2((int)puVar1,param_2,param_3,!bVar2,param_4,param_5);
  DAT_00412484 = DAT_00412484 + -1;
  return;
}



// WARNING: Removing unreachable block (ram,0x00403e4f)
// WARNING: Removing unreachable block (ram,0x00404361)

void __fastcall
FUN_00403ad2(int param_1,byte param_2,ulonglong *param_3,char param_4,wchar_t *param_5,int **param_6
            )

{
  byte bVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  wchar_t *pwVar10;
  int *piVar11;
  int *piVar12;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  bool bVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  _FILETIME local_4e0;
  longlong *local_4d8;
  int *local_4d4;
  int *local_4d0;
  wchar_t *local_4cc;
  int *local_4c8;
  undefined4 *local_4c4;
  ulonglong *local_4c0;
  longlong *local_4bc;
  HANDLE local_4b8;
  int *local_4b4;
  int *local_4b0;
  wchar_t *local_4a8;
  int *local_4a4;
  int *local_4a0;
  int **local_49c;
  int *local_498;
  int *local_494;
  int *local_490;
  int *local_488;
  int **local_484;
  int *local_480;
  int *local_47c;
  int *local_478;
  int *local_474;
  int *local_470;
  int *local_46c;
  byte local_465;
  _WIN32_FIND_DATAW local_464;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_4cc = param_5;
  local_4a8 = param_5;
  local_4c0 = param_3;
  local_470 = (int *)0x0;
  local_478 = (int *)0x0;
  local_465 = param_2;
  if (param_1 == 0) {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    goto LAB_00404676;
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    FUN_004053c9(0,0x42f);
  }
  puVar15 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar15 != (undefined4 *)0x0) {
    FUN_00404e10((undefined4 *)*puVar15);
    FUN_00404e2e(puVar15);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int **)local_4c0 = *(int **)(param_1 + 0x10);
    *(int **)((int)local_4c0 + 4) = *(int **)(param_1 + 0x14);
    goto LAB_00404676;
  }
  if ((*(byte *)(param_1 + 9) & 2) != 0) {
    if ((local_465 & 1) != 0) {
      FUN_0040d103(*(uint *)(param_1 + 0x10),*(uint *)(param_1 + 0x14));
    }
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(param_1 + 0x14);
    if (((((DAT_0041248c & 8) == 0) && (DAT_00412484 == 1)) && ((*(byte *)(param_1 + 9) & 4) == 0))
       && (iVar6 = FUN_00407a1b(*(wchar_t **)(param_1 + 4),&local_464,&local_4b8), iVar6 != 0)) {
      FUN_004054a3(2);
    }
    goto LAB_00404676;
  }
  piVar9 = *(int **)(param_1 + 0x18);
  lVar17 = 0;
  local_488 = (int *)0x0;
  local_480 = (int *)0x0;
  local_4d4 = (int *)0x0;
  local_49c = (int **)0x0;
  local_484 = (int **)0x0;
  local_47c = (int *)0x0;
  local_4a0 = (int *)0x0;
  local_4b4 = (int *)0x0;
  local_4b0 = (int *)0x0;
  local_494 = (int *)0x0;
  local_490 = (int *)0x0;
  local_4bc = (longlong *)0x0;
  local_4c8 = (int *)0x0;
  pwVar10 = *(wchar_t **)(param_1 + 4);
  local_46c = (int *)0x0;
  local_474 = (int *)0x0;
  lVar4 = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  DAT_00422ed4 = pwVar10;
  DAT_00422ed8 = pwVar10;
  local_4d0 = piVar9;
  if (piVar9 != (int *)0x0) {
    if ((*(byte *)(piVar9[1] + 0x10) & 0x20) != 0) {
      iVar6 = FUN_00407a1b(pwVar10,&local_464,&local_4b8);
      lVar4 = CONCAT44(local_474,local_46c);
      if (iVar6 == 0) {
        lVar17 = ZEXT48(local_474) << 0x20;
      }
      else {
        lVar17 = FUN_00407a01((byte *)&local_464);
        lVar4 = lVar17;
      }
    }
    do {
      local_474 = (int *)((ulonglong)lVar4 >> 0x20);
      local_46c = (int *)lVar4;
      piVar11 = (int *)((ulonglong)lVar17 >> 0x20);
      piVar12 = (int *)lVar17;
      local_484 = (int **)piVar9[1];
      local_498 = (int *)0x0;
      local_4a4 = (int *)0x0;
      local_4d8 = (longlong *)(local_484 + 6);
      if (((uint)*(int **)local_4d8 | (uint)local_484[7]) == 0) {
        local_4bc = local_4d8;
        puVar7 = (undefined4 *)FUN_00404687(local_484,*(undefined4 *)(param_1 + 4));
        local_4c4 = puVar7;
        for (puVar15 = puVar7; puVar15 != (undefined4 *)0x0; puVar15 = (undefined4 *)*puVar15) {
          local_4b4 = (int *)puVar15[2];
          local_4b0 = (int *)puVar15[3];
          iVar6 = FUN_00403a7c((wchar_t *)puVar15[1],*(byte *)(local_484 + 4),
                               (ulonglong *)&local_4b4,(wchar_t *)0x0,&local_4c8);
          local_478 = (int *)((int)local_470 + iVar6);
          local_470 = local_478;
          if ((DAT_004226b7 != 0) && (iVar6 != 0)) {
            puVar7 = FUN_0040ea50((wchar_t *)puVar15[1]);
            if ((*(byte *)((int)puVar7 + 9) & 8) == 0) {
              DAT_00412020 = 0;
              FUN_004053c9(0,0xfaa);
            }
            *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 8;
          }
          if ((local_4a4 <= local_4b0) && ((local_4a4 < local_4b0 || (local_498 <= local_4b4)))) {
            local_498 = local_4b4;
            local_4a4 = local_4b0;
          }
          if (((((uint)piVar12 | (uint)local_474) == 0) && ((*(byte *)(local_484 + 4) & 0x20) == 0))
             && (iVar6 = FUN_00407a1b(*(wchar_t **)(param_1 + 4),&local_464,&local_4b8), iVar6 != 0)
             ) {
            uVar18 = FUN_00407a01((byte *)&local_464);
            *(ulonglong *)(param_1 + 0x10) = uVar18;
            uVar3 = uVar18;
          }
          else {
            uVar3 = CONCAT44(local_474,local_46c);
            uVar18 = CONCAT44(local_474,piVar12);
          }
          local_474 = (int *)(uVar3 >> 0x20);
          local_46c = (int *)uVar3;
          if ((((*(byte *)(param_1 + 8) & 0x10) != 0) || (uVar18 < CONCAT44(local_4b0,local_4b4)))
             || ((DAT_004226b6 != '\0' && (uVar18 == CONCAT44(local_4b0,local_4b4))))) {
            puVar7 = FUN_0040e8ac();
            pvVar8 = FUN_0040e8fe((short *)puVar15[1]);
            puVar7[1] = pvVar8;
            FUN_0040ea03(&local_488,puVar7);
            uVar3 = CONCAT44(local_474,local_46c);
          }
          local_474 = (int *)(uVar3 >> 0x20);
          local_46c = (int *)uVar3;
          puVar7 = FUN_0040e8ac();
          pvVar8 = FUN_0040e8fe((short *)puVar15[1]);
          puVar7[1] = pvVar8;
          puVar7 = (undefined4 *)FUN_0040ea03(&local_480,puVar7);
          piVar12 = local_46c;
        }
        puVar15 = local_4c4;
        if (local_4c8 != (int *)0x0) {
          iVar6 = FUN_00404e10(local_4c8);
          local_478 = (int *)((int)local_470 + iVar6);
          local_470 = local_478;
          puVar7 = (undefined4 *)FUN_00404e2e(&local_4c8);
          puVar15 = local_4c4;
        }
        while (bVar1 = DAT_004333f8, puVar15 != (undefined4 *)0x0) {
          free((void *)puVar15[1]);
          puVar2 = (undefined4 *)*puVar15;
          free(puVar15);
          puVar15 = puVar2;
        }
        local_4c4 = (undefined4 *)CONCAT31((int3)((uint)puVar7 >> 8),*(byte *)(local_484 + 4));
        piVar9 = local_484[2];
        if ((*(byte *)(local_484 + 4) & 0x20) == 0) {
          if (piVar9 != (int *)0x0) {
            if (local_49c == (int **)0x0) {
              local_49c = local_484;
            }
            else {
              FUN_004053c9(0,0xfa4);
            }
          }
          piVar12 = local_470;
          if ((local_490 <= local_4a4) && ((local_490 < local_4a4 || (local_494 <= local_498)))) {
            local_494 = local_498;
            local_490 = local_4a4;
          }
        }
        else {
          piVar12 = local_470;
          DAT_004333f8 = bVar1;
          if (piVar9 != (int *)0x0) {
            DAT_00422ed4 = *(wchar_t **)(param_1 + 4);
            DAT_00422ec8 = 0;
            DAT_00422ecc = (wchar_t *)0x0;
            DAT_00422ed0 = local_488;
            DAT_00422ec4 = local_480;
            pwVar10 = DAT_00422ed4;
            DAT_00422ed8 = DAT_00422ed4;
            if ((((((DAT_004226b7 != 0) && ((*(byte *)(param_1 + 9) & 8) == 0)) ||
                  (local_470 == (int *)0x0)) &&
                 ((local_474 < local_4a4 || ((local_474 <= local_4a4 && (local_46c < local_498))))))
                || ((DAT_004226b6 != '\0' &&
                    ((local_46c == local_498 &&
                     (pwVar10 = *(wchar_t **)(param_1 + 4), local_474 == local_4a4)))))) ||
               (((((uint)local_46c | (uint)local_474) == 0 &&
                 (((uint)local_498 | (uint)local_4a4) == 0)) || (*local_484 == (int *)0x0)))) {
              DAT_004333f8 = 1;
              if (local_4cc == (wchar_t *)0x0) {
                if (local_480 == (int *)0x0) {
                  local_4cc = (wchar_t *)0x0;
                  local_4a8 = local_4cc;
                }
                else {
                  local_4cc = (wchar_t *)local_480[1];
                  local_4a8 = local_4cc;
                }
              }
              iVar6 = FUN_0040570a(pwVar10,piVar9,local_484[3],(uint)local_4c4,local_4cc);
              local_478 = (int *)((int)local_470 + iVar6);
              local_470 = local_478;
              if (((*(byte *)(param_1 + 8) & 4) == 0) &&
                 (iVar6 = FUN_00407a1b(*(wchar_t **)(param_1 + 4),&local_464,&local_4b8), iVar6 != 0
                 )) {
                lVar17 = FUN_00407a01((byte *)&local_464);
              }
              else if (((uint)local_494 | (uint)local_490) == 0) {
                GetSystemTimeAsFileTime(&local_4e0);
                lVar17 = CONCAT44(local_4e0.dwHighDateTime,local_4e0.dwLowDateTime);
              }
              else {
                lVar17 = CONCAT44(local_490,local_494);
              }
              piVar9 = local_488;
              local_4a0 = (int *)((ulonglong)lVar17 >> 0x20);
              local_47c = (int *)lVar17;
              *local_4d8 = lVar17;
              piVar12 = local_480;
              if (local_480 != local_488) {
                FUN_00404b9e(local_480);
                lVar17 = CONCAT44(local_4a0,local_47c);
                piVar12 = piVar9;
              }
              local_4a0 = (int *)((ulonglong)lVar17 >> 0x20);
              local_47c = (int *)lVar17;
              FUN_00404b9e(piVar12);
              local_488 = (int *)0x0;
              local_480 = (int *)0x0;
            }
            piVar12 = local_470;
            DAT_004333f8 = bVar1;
            if (DAT_004226b7 != 0) {
              if ((*(byte *)(param_1 + 9) & 8) != 0) {
                FUN_004053c9(0,0xfab);
                *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf7;
              }
              piVar12 = local_470;
              if (local_470 != (int *)0x0) {
                DAT_00412020 = 0;
                local_470 = (int *)0x0;
                local_478 = (int *)0x0;
                FUN_004053c9(0,0xfaa);
                piVar12 = (int *)0x0;
              }
            }
          }
        }
        lVar4 = CONCAT44(local_474,local_46c);
        if (((*(byte *)(local_484 + 4) & 0x20) != 0) && (*local_4d0 == 0)) {
          bVar1 = *(byte *)(param_1 + 9);
          bVar5 = bVar1 & 0xfe;
          *(byte *)(param_1 + 9) = bVar5 | 2;
          if ((int)piVar12 < 1) {
            bVar5 = bVar1 & 0xfa | 2;
          }
          else {
            bVar5 = bVar5 | 6;
          }
          *(byte *)(param_1 + 9) = bVar5;
          piVar9 = local_46c;
          piVar12 = local_474;
          if ((local_474 <= local_4a0) && ((local_474 < local_4a0 || (local_46c < local_47c)))) {
            piVar9 = local_47c;
            piVar12 = local_4a0;
          }
          *(int **)(param_1 + 0x10) = piVar9;
          *(int **)(param_1 + 0x14) = piVar12;
          *(int **)local_4c0 = piVar9;
          *(int **)((int)local_4c0 + 4) = piVar12;
          goto LAB_00404676;
        }
        lVar17 = CONCAT44(local_474,local_46c);
      }
      else {
        bVar16 = piVar11 < local_484[7];
        if ((bVar16 || piVar11 == local_484[7]) &&
           ((bVar16 || (piVar12 < *(int **)local_4d8 || piVar12 == *(int **)local_4d8)))) {
          lVar4 = *local_4d8;
          lVar17 = *local_4d8;
        }
      }
      piVar9 = (int *)*local_4d0;
      local_4d0 = piVar9;
    } while (piVar9 != (int *)0x0);
    pwVar10 = *(wchar_t **)(param_1 + 4);
  }
  local_474 = (int *)((ulonglong)lVar4 >> 0x20);
  local_46c = (int *)lVar4;
  DAT_00422ec8 = 0;
  DAT_00422ecc = (wchar_t *)0x0;
  uVar3 = *local_4c0;
  uVar18 = *local_4c0;
  if (((uint)*(int **)local_4c0 | (uint)*(int **)((int)local_4c0 + 4)) == 0) {
    if ((*(uint *)(param_1 + 0x10) | *(uint *)(param_1 + 0x14)) == 0) {
      iVar6 = FUN_00407a1b(pwVar10,&local_464,&local_4b8);
      lVar4 = CONCAT44(local_474,local_46c);
      pwVar10 = extraout_ECX;
      uVar18 = uVar3;
      if (iVar6 != 0) {
        uVar18 = FUN_00407a01((byte *)&local_464);
        lVar4 = CONCAT44(local_474,local_46c);
        pwVar10 = extraout_ECX_00;
      }
    }
    else {
      uVar18 = *(ulonglong *)(param_1 + 0x10);
    }
  }
  local_474 = (int *)((ulonglong)lVar4 >> 0x20);
  local_46c = (int *)lVar4;
  piVar9 = (int *)(uVar18 >> 0x20);
  piVar12 = (int *)uVar18;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_0040d103((uint)piVar12,(uint)piVar9);
    lVar4 = CONCAT44(local_474,local_46c);
    pwVar10 = extraout_ECX_01;
  }
  local_474 = (int *)((ulonglong)lVar4 >> 0x20);
  local_46c = (int *)lVar4;
  local_4d8 = (longlong *)
              FUN_0040e6fa(param_1,local_214,pwVar10,(uint)piVar12,(uint)piVar9,&local_488,
                           &local_480,(int *)&local_478,(uint *)&local_494,&local_4a8);
  if ((local_4d8 != (longlong *)0x0) && (local_49c == (int **)0x0)) {
    local_4d4 = *(int **)((int)local_4d8 + 0xc);
    DAT_00422ecc = local_214;
  }
  DAT_00422ed4 = *(wchar_t **)(param_1 + 4);
  DAT_00422ed0 = local_488;
  DAT_00422ec4 = local_480;
  local_46c = local_478;
  DAT_00422ed8 = DAT_00422ed4;
  if ((((DAT_004226b7 == 0) || ((*(byte *)(param_1 + 9) & 8) != 0)) && (local_478 != (int *)0x0)) ||
     ((((CONCAT44(local_490,local_494) <= uVar18 &&
        ((DAT_004226b6 == '\0' || (uVar18 != CONCAT44(local_490,local_494))))) &&
       ((uVar18 != 0 || (((uint)local_494 | (uint)local_490) != 0)))) &&
      ((*(byte *)(param_1 + 8) & 0x10) == 0)))) {
    piVar14 = local_478;
    if ((((DAT_0041248c & 8) == 0) && (DAT_00412484 == 1)) && ((*(byte *)(param_1 + 9) & 8) == 0)) {
      FUN_004054a3(2);
      piVar14 = local_478;
    }
  }
  else {
    local_465 = DAT_004333f8;
    DAT_004333f8 = 1;
    if (local_49c != (int **)0x0) {
      pwVar10 = local_4a8;
      if (local_4a8 == (wchar_t *)0x0) {
        if (local_480 == (int *)0x0) {
          pwVar10 = (wchar_t *)0x0;
        }
        else {
          pwVar10 = (wchar_t *)local_480[1];
        }
      }
      iVar6 = FUN_0040570a(*(short **)(param_1 + 4),local_49c[2],local_49c[3],
                           (uint)*(byte *)(local_49c + 4),pwVar10);
      local_46c = (int *)((int)local_478 + iVar6);
      goto LAB_004044d3;
    }
    if (local_4d4 == (int *)0x0) {
      if ((DAT_0041248c & 0x10) != 0) {
        if (local_484 != (int **)0x0) {
          iVar6 = FUN_0040570a(*(short **)(param_1 + 4),local_484[2],local_484[3],
                               (uint)*(byte *)(local_484 + 4),local_4a8);
          local_46c = (int *)((int)local_478 + iVar6);
        }
        goto LAB_004044f1;
      }
      if ((param_4 == '\0') && (uVar18 == 0)) {
        if (DAT_004226b7 != (byte)((byte)uVar18 | (byte)(uVar18 >> 0x20))) {
          local_46c = (int *)0x1;
          goto LAB_004044f1;
        }
        FUN_004053c9(0,0x431);
      }
LAB_004044d3:
      if (local_49c == (int **)0x0) goto LAB_004044e8;
LAB_00404508:
      DAT_004333f8 = local_465;
      GetSystemTimeAsFileTime(&local_4e0);
      piVar11 = (int *)(local_4e0.dwLowDateTime + 2);
      piVar13 = (int *)(local_4e0.dwHighDateTime + (0xfffffffd < local_4e0.dwLowDateTime));
    }
    else {
      if ((*(char *)((int)local_4d8 + 0x14) == '\0') || ((DAT_0041248c & 0x40) != 0)) {
        iVar6 = FUN_0040570a(*(short **)(param_1 + 4),local_4d4,*(int **)(local_4d8 + 2),
                             (uint)*(byte *)(param_1 + 8),local_4a8);
        local_46c = (int *)((int)local_478 + iVar6);
      }
      else {
        FUN_00404c0f(param_6,(int *)local_4d8,param_1);
      }
LAB_004044e8:
      if (local_4d4 != (int *)0x0) goto LAB_00404508;
LAB_004044f1:
      piVar11 = local_494;
      piVar13 = local_490;
      DAT_004333f8 = local_465;
      if (DAT_00422ec4 == (int *)0x0) goto LAB_00404508;
    }
    piVar14 = local_46c;
    local_4a0 = piVar13;
    local_47c = piVar11;
    if ((local_4bc != (longlong *)0x0) && (local_49c != (int **)0x0)) {
      *(int **)local_4bc = piVar11;
      *(int **)((int)local_4bc + 4) = piVar13;
    }
  }
  if ((DAT_004226b7 != 0) && (piVar14 != (int *)0x0)) {
    DAT_00412020 = 0;
    if ((*(byte *)(param_1 + 9) & 8) == 0) {
      if (DAT_00412484 != 1) goto LAB_004045ca;
      uVar19 = 0xfaa;
    }
    else {
      uVar19 = 0xfab;
    }
    FUN_004053c9(0,uVar19);
  }
LAB_004045ca:
  piVar11 = local_488;
  if (((DAT_0041248c & 8) == 0) || (DAT_00412484 != 1)) {
    bVar1 = *(byte *)(param_1 + 9);
    bVar5 = bVar1 & 0xfe;
    *(byte *)(param_1 + 9) = bVar5;
    if (*(int *)(param_1 + 0x1c) == 0) {
      if ((int)local_46c < 1) {
        bVar5 = bVar1 & 0xfa | 2;
      }
      else {
        bVar5 = bVar5 | 6;
      }
      *(byte *)(param_1 + 9) = bVar5;
    }
    if ((piVar9 <= local_4a0) && ((piVar9 < local_4a0 || (piVar12 < local_47c)))) {
      uVar18 = CONCAT44(local_4a0,local_47c);
    }
    *(ulonglong *)(param_1 + 0x10) = uVar18;
    *local_4c0 = uVar18;
    piVar9 = local_480;
    if (local_480 != local_488) {
      FUN_00404b9e(local_480);
      piVar9 = piVar11;
    }
    FUN_00404b9e(piVar9);
  }
  else {
    piVar9 = local_480;
    if (local_480 != local_488) {
      FUN_00404b9e(local_480);
      piVar9 = piVar11;
    }
    FUN_00404b9e(piVar9);
  }
LAB_00404676:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_00404687(int **param_1,undefined4 param_2)

{
  char cVar1;
  short *_Memory;
  undefined4 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  int **ppiVar10;
  WCHAR *pWVar11;
  wchar_t *pwVar12;
  int **ppiVar13;
  wchar_t wVar14;
  uint _SizeInWords;
  bool bVar15;
  undefined8 uVar16;
  int *local_288;
  undefined4 local_284;
  short *local_280;
  int *local_27c;
  int *local_278;
  wchar_t *local_274;
  HANDLE local_270;
  int **local_26c;
  wchar_t *local_268;
  wchar_t *local_264;
  char local_25d;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  piVar7 = *param_1;
  local_270 = (HANDLE)0x0;
  local_288 = param_1[1];
  local_26c = (int **)0x0;
  local_284 = param_2;
  local_278 = piVar7;
  if (piVar7 != (int *)0x0) {
    do {
      local_274 = (wchar_t *)piVar7[1];
      wVar14 = *local_274;
      pwVar12 = local_274;
      while ((wVar14 != L'\0' && (wVar14 != L'$'))) {
        if (wVar14 == L'^') {
          pwVar12 = pwVar12 + 1;
        }
        pwVar12 = pwVar12 + 1;
        wVar14 = *pwVar12;
      }
      local_278 = piVar7;
      if (wVar14 != L'\0') {
        DAT_00422ec8 = local_284;
        local_274 = (wchar_t *)FUN_0040f2f6(local_274,'\x01',&local_288);
      }
      pwVar12 = local_274;
      _Memory = (short *)FUN_0040e8fe(local_274);
      local_280 = _Memory;
      uVar2 = FUN_00404a60(&local_280,&local_268);
      cVar1 = (char)uVar2;
      while (cVar1 != '\0') {
        wVar14 = L'{';
        pwVar12 = local_268;
        if (*local_268 == L'{') {
          do {
            if (wVar14 == L'}') break;
            if (wVar14 == L'^') {
              pwVar12 = pwVar12 + 1;
            }
            pwVar12 = pwVar12 + 1;
            wVar14 = *pwVar12;
          } while (wVar14 != L'\0');
          if (wVar14 != L'\0') {
            *pwVar12 = L'\0';
            pwVar12 = pwVar12 + 1;
            local_268 = local_268 + 1;
          }
        }
        else {
          local_268 = (wchar_t *)0x0;
        }
        pwVar5 = local_268;
        local_25d = '\0';
        local_25c.ftCreationTime.dwLowDateTime = 0;
        local_25c.ftCreationTime.dwHighDateTime = 0;
        local_25c.ftLastWriteTime.dwLowDateTime = 0;
        local_25c.ftLastWriteTime.dwHighDateTime = 0;
        pwVar3 = (wchar_t *)FUN_0040e8fe(pwVar12);
        local_264 = pwVar3;
        pwVar4 = wcspbrk(pwVar12,L"*?");
        if (((pwVar4 != (wchar_t *)0x0) || (pwVar5 != (wchar_t *)0x0)) &&
           (pwVar5 = (wchar_t *)FUN_00407bca(pwVar5,pwVar12,&local_25c,&local_270),
           pwVar5 != (wchar_t *)0x0)) {
          local_25d = '\x01';
          free(pwVar3);
          local_264 = (wchar_t *)FUN_0040ff18(pwVar5,local_25c.cFileName);
          pwVar12 = pwVar5;
        }
        do {
          pwVar5 = local_264;
          ppiVar6 = (int **)FUN_0040aba8(0x10);
          pwVar3 = wcschr(pwVar5,L' ');
          if ((pwVar3 == (wchar_t *)0x0) ||
             (pwVar3 = wcschr(pwVar5,L'\"'), pwVar3 != (wchar_t *)0x0)) {
            piVar7 = (int *)FUN_0040e8fe(pwVar5);
            ppiVar6[1] = piVar7;
          }
          else {
            pwVar3 = pwVar5 + 1;
            do {
              wVar14 = *pwVar5;
              pwVar5 = pwVar5 + 1;
            } while (wVar14 != L'\0');
            _SizeInWords = ((int)pwVar5 - (int)pwVar3 >> 1) + 3;
            piVar7 = (int *)FUN_0040ab83(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                         (uint)((ulonglong)_SizeInWords * 2));
            ppiVar6[1] = piVar7;
            wcscpy_s((wchar_t *)piVar7,_SizeInWords,L"\"");
            wcscat_s((wchar_t *)ppiVar6[1],_SizeInWords,local_264);
            wcscat_s((wchar_t *)ppiVar6[1],_SizeInWords,L"\"");
            pwVar5 = local_264;
          }
          if (DAT_004226b5 == '\0') {
LAB_00404929:
            uVar16 = FUN_00407a01((byte *)&local_25c);
            ppiVar6[3] = (int *)((ulonglong)uVar16 >> 0x20);
          }
          else {
            iVar8 = FUN_00407a1b(pwVar5,&local_25c,&local_270);
            uVar16 = CONCAT44(iVar8,iVar8);
            if (iVar8 != 0) goto LAB_00404929;
            ppiVar6[3] = (int *)0x0;
          }
          local_27c = (int *)((ulonglong)uVar16 >> 0x20);
          piVar7 = (int *)uVar16;
          bVar15 = DAT_004226b5 == '\0';
          ppiVar6[2] = piVar7;
          if (bVar15) {
            FUN_0040ea03(&local_26c,ppiVar6);
            ppiVar6 = local_26c;
          }
          else {
            ppiVar10 = local_26c;
            ppiVar13 = local_26c;
            if (local_26c != (int **)0x0) {
              do {
                ppiVar9 = ppiVar10;
                bVar15 = ppiVar9[3] <= local_27c;
                ppiVar10 = ppiVar9;
                if ((bVar15 && local_27c != ppiVar9[3]) ||
                   ((bVar15 && (ppiVar9[2] <= piVar7 && piVar7 != ppiVar9[2])))) break;
                ppiVar10 = (int **)*ppiVar9;
                ppiVar13 = ppiVar9;
              } while (ppiVar10 != (int **)0x0);
              pwVar5 = local_264;
              if (ppiVar13 != ppiVar10) {
                *ppiVar13 = (int *)ppiVar6;
                *ppiVar6 = (int *)ppiVar10;
                ppiVar6 = local_26c;
              }
            }
          }
          local_26c = ppiVar6;
          free(pwVar5);
        } while ((((local_25d != '\0') &&
                  (pwVar5 = wcspbrk(pwVar12,L"*?"), pwVar5 != (wchar_t *)0x0)) &&
                 (pWVar11 = FUN_00407ba7(&local_25c,local_270), pWVar11 != (WCHAR *)0x0)) &&
                (local_264 = (wchar_t *)FUN_0040ff18(pwVar12,local_25c.cFileName),
                local_264 != (wchar_t *)0x0));
        uVar2 = FUN_00404a60(&local_280,&local_268);
        piVar7 = local_278;
        pwVar12 = local_274;
        cVar1 = (char)uVar2;
      }
      if (pwVar12 != (wchar_t *)piVar7[1]) {
        free(pwVar12);
      }
      free(_Memory);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
    local_278 = (int *)0x0;
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_00404a60(short **param_1,short **param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)*param_1;
  uVar2 = *puVar5;
  while ((uVar1 = (uint)uVar2, uVar2 != 0 && ((uVar2 == 0x20 || (uVar2 == 9))))) {
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
  }
  *param_2 = (short *)puVar5;
  if (uVar2 == 0) {
    return uVar1 & 0xffffff00;
  }
  uVar3 = 0x22;
  if (uVar2 == 0x22) {
    do {
      if ((short)uVar3 == 0) goto LAB_00404ad5;
      puVar5 = puVar5 + 1;
      uVar1 = (uint)*puVar5;
      uVar3 = uVar1;
    } while (*puVar5 != 0x22);
    goto LAB_00404ae2;
  }
  if (uVar2 == 0x7b) {
    do {
      puVar4 = puVar5 + 1;
      if (*puVar4 == 0x22) {
        puVar4 = puVar5 + 2;
        do {
          uVar2 = *puVar4;
          if (uVar2 == 0) break;
          puVar4 = puVar4 + 1;
        } while (uVar2 != 0x22);
      }
      uVar2 = *puVar4;
    } while ((uVar2 != 0x7d) && (puVar5 = puVar4, uVar2 != 0));
    if (uVar2 == 0) {
      FUN_004053c9(0,0x423);
    }
    uVar3 = 0x22;
    puVar5 = puVar4 + 1;
    uVar2 = *puVar5;
    uVar1 = (uint)uVar2;
    if (uVar2 == 0x22) {
      do {
        if ((short)uVar3 == 0) goto LAB_00404ad5;
        puVar5 = puVar5 + 1;
        uVar1 = (uint)*puVar5;
        uVar3 = uVar1;
      } while (*puVar5 != 0x22);
      goto LAB_00404ae2;
    }
  }
  if (uVar2 == 0) goto LAB_00404b95;
  uVar3 = (uint)uVar2;
  do {
    uVar2 = (ushort)uVar3;
    if ((uVar2 == 0x20) || (uVar1 = 0, uVar2 == 9)) break;
    puVar5 = puVar5 + 1;
    uVar2 = *puVar5;
    uVar1 = (uint)uVar2;
    uVar3 = uVar1;
  } while (uVar2 != 0);
LAB_00404b8b:
  if (uVar2 != 0) {
    uVar1 = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00404b95:
  *param_1 = (short *)puVar5;
  return CONCAT31((int3)(uVar1 >> 8),1);
LAB_00404ad5:
  uVar1 = FUN_004053c9(0,0x40e);
LAB_00404ae2:
  puVar5 = puVar5 + 1;
  uVar2 = *puVar5;
  goto LAB_00404b8b;
}



void __fastcall FUN_00404b9e(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (puVar1 = param_1, puVar1 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)*puVar1;
    free((void *)puVar1[1]);
    *puVar1 = DAT_00433618;
    DAT_00433618 = puVar1;
  }
  return;
}



undefined4 * __fastcall FUN_00404bc8(wint_t *param_1,undefined param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 extraout_var;
  
  puVar2 = (undefined4 *)FUN_0040aba8(0x20);
  pvVar3 = FUN_0040e8fe((short *)param_1);
  puVar2[1] = pvVar3;
  *(undefined *)(puVar2 + 2) = param_2;
  *(undefined *)((int)puVar2 + 9) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  uVar1 = FUN_0040ea18(param_1);
  *puVar2 = (&DAT_00422490)[CONCAT22(extraout_var,uVar1)];
  (&DAT_00422490)[CONCAT22(extraout_var,uVar1)] = puVar2;
  return puVar2;
}



void __fastcall FUN_00404c0f(int **param_1,int *param_2,int param_3)

{
  int **ppiVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar4 = (int **)0x0;
  ppiVar5 = (int **)*param_1;
  if (ppiVar5 != (int **)0x0) {
    do {
      if ((ppiVar5[1] == param_2) &&
         (ppiVar1 = ppiVar5, *(char *)(ppiVar5 + 2) == *(char *)(param_3 + 8))) break;
      ppiVar1 = (int **)*ppiVar5;
      ppiVar4 = ppiVar5;
      ppiVar5 = ppiVar1;
    } while (ppiVar1 != (int **)0x0);
    if (ppiVar1 != (int **)0x0) goto LAB_00404c70;
  }
  ppiVar1 = (int **)FUN_0040aba8(0x14);
  ppiVar1[1] = param_2;
  *(undefined *)(ppiVar1 + 2) = *(undefined *)(param_3 + 8);
  if (ppiVar4 == (int **)0x0) {
    if ((int **)*param_1 == (int **)0x0) {
      *param_1 = (int *)ppiVar1;
    }
    else {
      **param_1 = (int)ppiVar1;
    }
  }
  else {
    *ppiVar4 = (int *)ppiVar1;
  }
LAB_00404c70:
  puVar2 = FUN_0040e8ac();
  pvVar3 = FUN_0040e8fe(*(short **)(param_3 + 4));
  puVar2[1] = pvVar3;
  FUN_0040ea03(ppiVar1 + 3,puVar2);
  puVar2 = FUN_0040e8ac();
  pvVar3 = FUN_0040e8fe(DAT_00422ecc);
  puVar2[1] = pvVar3;
  FUN_0040ea03(ppiVar1 + 4,puVar2);
  *(int ***)(param_3 + 0x1c) = param_1;
  return;
}



uint __fastcall FUN_00404cbb(int param_1)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    pwVar4 = (wchar_t *)puVar2[1];
    pwVar5 = pwVar4;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    iVar8 = iVar8 + 1 + ((int)pwVar5 - (int)(pwVar4 + 1) >> 1);
    if ((*pwVar4 != L'\"') && (pwVar4 = wcschr(pwVar4,L' '), pwVar4 != (wchar_t *)0x0)) {
      iVar8 = iVar8 + 2;
    }
  }
  uVar6 = iVar8 + 1;
  pwVar4 = (wchar_t *)
           FUN_0040ab83(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar6 * 2));
  *pwVar4 = L'\0';
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if ((*(wchar_t *)puVar2[1] == L'\"') ||
       (pwVar5 = wcschr((wchar_t *)puVar2[1],L' '), pwVar5 == (wchar_t *)0x0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      wcscat_s(pwVar4,uVar6,L"\"");
    }
    wcscat_s(pwVar4,uVar6,(wchar_t *)puVar2[1]);
    pwVar5 = L"\" ";
    if (!bVar3) {
      pwVar5 = L" ";
    }
    wcscat_s(pwVar4,uVar6,pwVar5);
  }
  DAT_00422ecc = pwVar4;
  uVar6 = FUN_0040574c(*(int **)(param_1 + 0xc),*(int **)(*(int *)(param_1 + 4) + 0xc),
                       *(int **)(*(int *)(param_1 + 4) + 0x10),(uint)*(byte *)(param_1 + 8),
                       (wchar_t *)0x0);
  if (uVar6 == 0) {
    for (puVar2 = *(undefined4 **)(param_1 + 0xc); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      puVar7 = FUN_0040ea50((wchar_t *)puVar2[1]);
      puVar7[7] = 0;
      *(byte *)((int)puVar7 + 9) = *(byte *)((int)puVar7 + 9) & 0xfb | 2;
    }
  }
  free(pwVar4);
  return uVar6;
}



int __fastcall FUN_00404e10(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    uVar1 = FUN_00404cbb((int)param_1);
    iVar2 = iVar2 + uVar1;
  }
  return iVar2;
}



void __fastcall FUN_00404e2e(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  while (_Memory != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)_Memory[3];
    *puVar1 = DAT_00433618;
    DAT_00433618 = (undefined4 *)_Memory[4];
    *DAT_00433618 = puVar1;
    puVar1 = (undefined4 *)*_Memory;
    free(_Memory);
    _Memory = puVar1;
  }
  *param_1 = 0;
  return;
}



void __fastcall FUN_00404e5d(void **param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  wchar_t *pwVar4;
  void *pvVar5;
  int iVar6;
  short *psVar7;
  
  sVar2 = *(short *)((int)*param_1 + *param_2 * 2 + -2);
  while ((sVar2 != 10 &&
         (pwVar4 = fgetws(&DAT_004226c0,0x400,DAT_00422edc), pwVar4 != (wchar_t *)0x0))) {
    psVar3 = &DAT_004226c0;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar6 = (int)(psVar7 + -0x211360) >> 1;
    if (((&DAT_004226bc)[iVar6] == 0x5c) && ((&DAT_004226be)[iVar6] == 10)) {
      (&DAT_004226be)[iVar6] = 0;
      (&DAT_004226bc)[iVar6] = 0x20;
    }
    iVar6 = *param_2;
    psVar3 = &DAT_004226c0;
    do {
      psVar7 = psVar3;
      psVar3 = psVar7 + 1;
    } while (*psVar7 != 0);
    iVar1 = ((int)(psVar7 + -0x211360) >> 1) + iVar6;
    pvVar5 = *param_1;
    *param_2 = iVar1;
    pvVar5 = FUN_0040abc6(pvVar5,iVar1 * 2 + 2);
    if (pvVar5 == (void *)0x0) {
      FUN_004053c9(DAT_004226a4,0x419);
    }
    iVar1 = *param_2;
    *param_1 = pvVar5;
    wcscpy_s((wchar_t *)((int)pvVar5 + iVar6 * 2),(iVar1 - iVar6) + 1,&DAT_004226c0);
    sVar2 = *(short *)((int)*param_1 + *param_2 * 2 + -2);
  }
  return;
}



void __fastcall FUN_00404f65(short *param_1,uint param_2,void **param_3)

{
  void *pvVar1;
  
  if (*param_3 == (void *)0x0) {
    pvVar1 = FUN_0040ab83(0x20);
  }
  else {
    if ((param_2 & 7) != 0) goto LAB_00404f91;
    pvVar1 = FUN_00405379(*param_3,param_2 + 8);
  }
  *param_3 = pvVar1;
LAB_00404f91:
  pvVar1 = FUN_0040e8fe(param_1);
  *(void **)((int)*param_3 + param_2 * 4) = pvVar1;
  return;
}



void __fastcall FUN_00404fa4(wchar_t *param_1,uint *param_2,void **param_3)

{
  wchar_t *pwVar1;
  wchar_t *local_8;
  
  local_8 = param_1;
  pwVar1 = wcschr(param_1,L'\\');
  if ((pwVar1 != (wchar_t *)0x0) &&
     (((pwVar1[-1] == L' ' || (pwVar1[-1] == L'\t')) && (pwVar1[1] == L'\n')))) {
    *pwVar1 = L'\0';
  }
  local_8 = (wchar_t *)0x0;
  while( true ) {
    pwVar1 = wcstok_s(param_1,L" \t\n",&local_8);
    if (pwVar1 == (wchar_t *)0x0) {
      return;
    }
    if (*pwVar1 == L'@') break;
    FUN_00404f65(pwVar1,*param_2,param_3);
    *param_2 = *param_2 + 1;
    param_1 = (wchar_t *)0x0;
  }
  FUN_004053c9(0,0xfa1);
  return;
}



void __fastcall FUN_00405030(wchar_t *param_1,uint *param_2,void **param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  int local_14;
  wchar_t *local_10;
  uint *local_c;
  char local_5;
  
  local_5 = '\0';
  local_c = param_2;
  pwVar3 = wcschr(param_1,L'\"');
  if (pwVar3 == (wchar_t *)0x0) {
    FUN_00404fa4(param_1,param_2,param_3);
  }
  else {
    if ((pwVar3 == param_1) || (pwVar6 = pwVar3 + -1, param_2 = local_c, *pwVar6 != L'=')) {
      *pwVar3 = L'\0';
      FUN_00404fa4(param_1,param_2,param_3);
      pwVar6 = pwVar3 + 1;
    }
    else {
      *pwVar3 = L' ';
      for (; (((param_1 < pwVar6 && (wVar2 = *pwVar6, wVar2 != L' ')) && (wVar2 != L'\t')) &&
             (wVar2 != L'\n')); pwVar6 = pwVar6 + -1) {
      }
      if (pwVar6 != param_1) {
        *pwVar6 = L'\0';
        pwVar6 = pwVar6 + 1;
        FUN_00404fa4(param_1,local_c,param_3);
      }
    }
    pwVar3 = pwVar6;
    do {
      wVar2 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar2 != L'\0');
    iVar5 = (int)pwVar3 - (int)(pwVar6 + 1) >> 1;
    wVar2 = *pwVar6;
    pwVar3 = pwVar6;
    local_10 = pwVar6;
    while (pwVar4 = pwVar6, wVar2 != L'\0') {
      if (wVar2 == L'\"') {
        if (pwVar6[1] != L'\"') {
          *pwVar6 = L'\0';
          pwVar4 = pwVar6 + 1;
          FUN_00404f65(pwVar3,*local_c,param_3);
          *local_c = *local_c + 1;
          FUN_00405030(pwVar6 + 2,local_c,param_3);
          break;
        }
        *pwVar6 = L'\"';
        do {
          pwVar1 = pwVar4 + 2;
          pwVar4[1] = *pwVar1;
          pwVar4 = pwVar4 + 1;
        } while (*pwVar1 != L'\0');
      }
      else if (((wVar2 == L'\\') && ((pwVar6[-1] == L' ' || (pwVar6[-1] == L'\t')))) &&
              (pwVar6[1] == L'\n')) {
        iVar5 = iVar5 + -2;
        *pwVar6 = L'\0';
        local_14 = iVar5;
        if (local_5 == '\0') {
          local_5 = '\x01';
          local_10 = (wchar_t *)FUN_0040e8fe(pwVar3);
        }
        FUN_00404e5d(&local_10,&local_14);
        pwVar6 = local_10 + iVar5;
        iVar5 = local_14;
        pwVar3 = local_10;
      }
      pwVar6 = pwVar6 + 1;
      wVar2 = *pwVar6;
    }
    if (pwVar4 == pwVar3 + iVar5) {
      FUN_004053c9(0,0x3ee);
    }
    if (local_5 != '\0') {
      free(pwVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_004051e1(wchar_t *param_1)

{
  code *pcVar1;
  void *pvVar2;
  FILE *_File;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  void *local_14;
  uint local_10;
  wchar_t *local_c;
  int local_8;
  
  local_10 = 0;
  _File = _wfsopen(param_1,L"rt,ccs=unicode",0x20);
  DAT_00422edc = (int)_File;
  if (_File == (FILE *)0x0) {
    _File = (FILE *)FUN_004053c9(0,0x41c);
  }
  local_14 = (void *)0x0;
  pwVar3 = fgetws(&DAT_004226c0,0x400,_File);
  pvVar2 = (void *)0x0;
  uVar6 = 0;
  do {
    if (pwVar3 == (wchar_t *)0x0) {
      iVar4 = fclose((FILE *)DAT_00422edc);
      if (iVar4 == -1) {
        FUN_004053c9(0,0x424);
      }
      FUN_0040c408(uVar6,(int)pvVar2);
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        if (*(int *)((int)pvVar2 + uVar6 * 4) != 0) {
          free(*(void **)((int)pvVar2 + uVar6 * 4));
        }
      }
      return;
    }
    pwVar3 = &DAT_004226c0;
    do {
      pwVar5 = pwVar3;
      pwVar3 = pwVar5 + 1;
    } while (*pwVar5 != L'\0');
    local_8 = (int)(pwVar5 + -0x211360) >> 1;
    if (((local_8 == 0x3ff) && (_DAT_00422ebc != 10)) ||
       ((pwVar3 = &DAT_004226c0, (&DAT_004226be)[local_8] == 10 &&
        ((&DAT_004226bc)[local_8] == 0x5c)))) {
      if (((&DAT_004226be)[local_8] == 10) && ((&DAT_004226bc)[local_8] == 0x5c)) {
        iVar4 = local_8 + -1;
        if (0x7ff < (uint)(iVar4 * 2)) {
          ___report_rangecheckfailure();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (&DAT_004226c0)[iVar4] = 0;
        (&DAT_004226bc)[local_8] = 0x20;
        local_8 = iVar4;
      }
      local_c = (wchar_t *)FUN_0040e8fe(&DAT_004226c0);
      FUN_00404e5d(&local_c,&local_8);
      pwVar3 = local_c;
    }
    FUN_00405030(pwVar3,&local_10,&local_14);
    if (pwVar3 != &DAT_004226c0) {
      free(pwVar3);
    }
    pwVar3 = fgetws(&DAT_004226c0,0x400,(FILE *)DAT_00422edc);
    pvVar2 = local_14;
    uVar6 = local_10;
  } while( true );
}



void * __fastcall FUN_00405379(void *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 == (void *)0x0) {
    if (0x3ffffffe < param_2) goto LAB_004053b3;
    pvVar1 = malloc(param_2 << 2);
  }
  else {
    if (0x3ffffffe < param_2) goto LAB_004053b3;
    pvVar1 = realloc(param_1,param_2 << 2);
  }
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
LAB_004053b3:
  FUN_004053c9(DAT_004226b0,0x41b);
  return pvVar1;
}



void __cdecl FUN_004053c9(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int _Code;
  undefined unaff_DI;
  uint uVar3;
  
  _Code = 2;
  if (((DAT_0041248c & 0x20) != 0) && (param_2 - 4000 < 1000)) {
    return;
  }
  FUN_00405532();
  if (param_1 == 0) {
    FUN_0040cd83(L"NMAKE : ",unaff_DI);
  }
  else {
    FUN_0040cd83(L"%s(%u) : ",(char)DAT_00422ee4);
  }
  uVar1 = param_2 / 1000;
  if (uVar1 == 1) {
    FUN_004054a3(0x14);
    if (param_2 == 0x41b) {
      _Code = 4;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar3 = 0x15;
    }
    else {
      if (uVar1 != 4) goto LAB_00405458;
      uVar3 = 0x16;
    }
    FUN_004054a3(uVar3);
  }
LAB_00405458:
  FUN_0040cd83(L" U%04d: ",(char)param_2);
  uVar2 = FUN_0040cb26(param_2);
  FUN_0040cdfb(uVar2,&stack0x0000000c);
  FUN_0040cd92();
  FUN_0040cd65();
  if (uVar1 != 1) {
    return;
  }
  FUN_0040cd83(L"Stop.\n",(undefined)param_1);
  FUN_0040ca92();
                    // WARNING: Subroutine does not return
  exit(_Code);
}



void __cdecl FUN_004054a3(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0xd) || ((DAT_0041248c & 0x20) == 0)) {
    FUN_00405532();
    uVar1 = param_1 - 0x14;
    if (param_1 == 0x18) {
      if (uVar1 < 6) {
        FUN_0040cd92();
      }
      else {
        FUN_0040ce72();
      }
    }
    uVar2 = FUN_0040cb26(param_1);
    if (uVar1 < 6) {
      FUN_0040cdfb(uVar2,&stack0x00000008);
    }
    else {
      FUN_0040ce9e(uVar2,&stack0x00000008);
    }
    if (((param_1 < 10) || (0x17 < param_1)) && (param_1 != 0x7c)) {
      if (uVar1 < 6) {
        FUN_0040cd92();
      }
      else {
        FUN_0040ce72();
      }
    }
    if (uVar1 < 6) {
      FUN_0040cd65();
    }
    else {
      FUN_0040ce45();
    }
  }
  return;
}



void FUN_00405532(void)

{
  if (DAT_00422ee0 == '\0') {
    DAT_00422ee0 = 1;
    FUN_004054a3(0x18);
    FUN_004054a3(0x19);
    FUN_0040cd65();
    return;
  }
  return;
}



void FUN_0040555e(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 100;
  uVar1 = 0x67;
  do {
    FUN_004054a3(uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x67);
  do {
    if (uVar1 == 0x71) {
      uVar1 = 0x72;
    }
    if (uVar1 == 0x79) {
      uVar1 = 0x7a;
    }
    FUN_004054a3(uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x7d);
  return;
}



void __fastcall FUN_00405598(int *param_1,wchar_t **param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  bool bVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t **local_c;
  
  bVar2 = true;
  wVar1 = *param_3;
  pwVar5 = param_3;
  while (wVar1 != L'\0') {
    pwVar5 = pwVar5 + 1;
    wVar1 = *pwVar5;
  }
  *param_1 = 0;
  local_c = param_2;
  if (param_3 < pwVar5) {
    do {
      sVar3 = wcsspn(param_3,L" \t");
      pwVar4 = param_3 + sVar3;
      if (pwVar5 <= pwVar4) break;
      if (param_2 != (wchar_t **)0x0) {
        *param_2 = pwVar4;
        param_2 = param_2 + 1;
        local_c = param_2;
      }
      if (*pwVar4 == L'\"') {
        param_3 = pwVar4 + 1;
        if (param_3 < pwVar5) {
          do {
            if (*param_3 == L'\\') {
              param_3 = param_3 + 1;
            }
            else if (*param_3 == L'\"') break;
            param_3 = param_3 + 1;
          } while (param_3 < pwVar5);
          if (param_3 < pwVar5) {
            param_3 = wcspbrk(param_3 + 1,L" \t");
            goto LAB_004056dc;
          }
        }
      }
      else {
        param_3 = wcspbrk(pwVar4,L" \t\"/");
        if (param_3 != (wchar_t *)0x0) {
          do {
            if (((pwVar5 <= param_3) || (*param_3 != L'/')) || (bVar2)) break;
            param_3 = wcspbrk(param_3 + 1,L" \t\"/");
          } while (param_3 != (wchar_t *)0x0);
          param_2 = local_c;
          if ((param_3 != (wchar_t *)0x0) && (*param_3 == L'\"')) {
            do {
              param_3 = param_3 + 1;
              if (pwVar5 <= param_3) break;
            } while (*param_3 != L'\"');
            param_3 = wcspbrk(param_3,L" \t");
          }
        }
        if (bVar2) {
          bVar2 = false;
          if (param_3 != (wchar_t *)0x0) {
            if ((*param_3 == L'/') && (param_2 != (wchar_t **)0x0)) {
              *param_3 = L'\0';
              pwVar4 = (wchar_t *)FUN_0040e8fe(param_2[-1]);
              param_2[-1] = pwVar4;
              *param_3 = L'/';
              param_3 = param_3 + -1;
            }
            goto LAB_004056dc;
          }
LAB_004056e0:
          param_3 = pwVar5;
        }
        else {
LAB_004056dc:
          if (param_3 == (wchar_t *)0x0) goto LAB_004056e0;
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_3 = L'\0';
          param_3 = param_3 + 1;
        }
      }
      *param_1 = *param_1 + 1;
    } while (param_3 < pwVar5);
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  return;
}



void __fastcall FUN_0040570a(short *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = FUN_0040e8ac();
  pvVar2 = FUN_0040e8fe(param_1);
  piVar1[1] = (int)pvVar2;
  FUN_0040574c(piVar1,param_2,param_3,param_4,param_5);
  *piVar1 = (int)DAT_00433618;
  DAT_00433618 = piVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall FUN_0040574c(int *param_1,int *param_2,int *param_3,uint param_4,wchar_t *param_5)

{
  wchar_t wVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  int *piVar7;
  wchar_t *pwVar8;
  byte bVar9;
  ushort uVar10;
  byte bVar11;
  wchar_t wVar12;
  uint uVar13;
  int *local_20;
  wchar_t *local_1c;
  void *local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  wchar_t *local_8;
  
  DAT_00422ec0 = DAT_00422ec0 + 1;
  uVar13 = 0;
  local_14 = 0;
  local_10 = 0;
  if ((DAT_0041248c & 8) == 0) {
    if ((DAT_0041248c & 0x10) == 0) {
      if (param_2 != (int *)0x0) {
        bVar9 = (byte)param_4 >> 6;
        local_20 = param_2;
        do {
          uVar4 = FUN_00409358((wchar_t *)local_20[1],&local_1c,&param_3,bVar9 & 1);
          uVar4 = uVar4 & 0xff;
          _DAT_00432ef0 = 0;
          local_c = local_c & 0xffffff00;
          wVar12 = *local_1c;
          wVar1 = wVar12;
          pwVar8 = local_1c;
          while (local_8 = local_1c, wVar1 != L'\0') {
            if ((wVar1 == L'^') || (wVar1 == L'$')) {
              pwVar8 = pwVar8 + 1;
            }
            pwVar8 = pwVar8 + 1;
            wVar1 = *pwVar8;
          }
          while ((((wVar12 == L'!' || (wVar12 == L'-')) || (wVar12 == L'@')) ||
                 (((wVar12 == L'^' || (wVar12 == L' ')) || (wVar12 == L'\t'))))) {
            uVar10 = (ushort)uVar4;
            if (wVar12 == L'!') {
              uVar10 = uVar10 | 0x400;
LAB_004059bc:
              uVar4 = (uint)uVar10;
              local_c = CONCAT31(local_c._1_3_,(char)(uVar10 >> 8));
LAB_004059bf:
              if (wVar12 == L'^') break;
            }
            else {
              if (wVar12 == L'-') {
                local_8 = local_8 + 1;
                uVar4 = (uint)(uVar10 | 0x200);
                local_c = CONCAT31(local_c._1_3_,(char)((uVar10 | 0x200) >> 8));
                iVar6 = iswdigit(*local_8);
                if (iVar6 == 0) {
                  _DAT_00432ef0 = 0xffffffff;
                }
                else {
                  _DAT_00432ef0 = wcstoul(local_8,&local_8,10);
                  piVar7 = _errno();
                  iVar6 = DAT_004226a4;
                  if (*piVar7 == 0x22) {
                    *local_8 = L'\0';
                    FUN_004053c9(iVar6,0x436);
                  }
                  while (iVar6 = iswspace(*local_8), iVar6 != 0) {
                    local_8 = local_8 + 1;
                  }
                }
                local_8 = local_8 + -1;
                goto LAB_004059bf;
              }
              if (wVar12 == L'@') {
                if ((DAT_0041248e & 4) == 0) {
                  uVar10 = uVar10 | 0x100;
                  goto LAB_004059bc;
                }
                goto LAB_004059bf;
              }
              if (wVar12 == L'^') {
                local_8 = local_8 + 1;
                if ((*local_8 == L' ') || (*local_8 == L'\t')) {
                  bVar11 = 1;
                }
                else {
                  bVar11 = 0;
                }
                wVar12 = (-(ushort)bVar11 & 0xffc2) + L'^';
                goto LAB_004059bf;
              }
            }
            local_8 = local_8 + 1;
            wVar12 = *local_8;
          }
          if (((uVar4 & 0x400) == 0) ||
             (uVar13 = FUN_00407683(local_8,param_3,(byte)param_4,(byte)local_c,param_5,&local_10),
             pwVar8 = local_8, (char)uVar13 == '\0')) {
            pwVar8 = local_8;
            if (((char)uVar4 == '\0') && (pwVar5 = wcschr(local_8,L'$'), pwVar5 != (wchar_t *)0x0))
            {
              local_8 = (wchar_t *)FUN_0040f2f6(local_8,-1,&param_3);
            }
            pwVar5 = local_8;
            do {
              wVar1 = *pwVar5;
              pwVar5 = pwVar5 + 1;
            } while (wVar1 != L'\0');
            uVar13 = ((int)pwVar5 - (int)(local_8 + 1) >> 1) + 1;
            if (uVar13 < 0x8001) {
              uVar13 = 0x8000;
            }
            pwVar5 = (wchar_t *)
                     FUN_0040ab83(-(uint)((int)((ulonglong)uVar13 * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar13 * 2));
            wcscpy_s(pwVar5,uVar13,local_8);
            cVar2 = FUN_0041010b(pwVar5,uVar13,local_8,param_5);
            if (cVar2 != '\0') {
              FUN_004053c9(0,0x447);
            }
            uVar10 = CONCAT11((byte)param_4,(byte)param_4) & 0x204;
            while( true ) {
              cVar2 = (char)uVar10;
              if ((cVar2 == '\0') || ((local_c & 8) != 0)) {
                cVar3 = '\x01';
              }
              else {
                cVar3 = '\0';
              }
              if ((cVar2 == '\0') && (((param_4 & 8) != 0 || ((local_c & 1) != 0)))) {
                bVar11 = 0;
              }
              else {
                bVar11 = 1;
              }
              local_10 = FUN_00406e64(pwVar5,bVar11,cVar3,(byte)(uVar4 >> 8) >> 1 & 1,&local_18);
              bVar11 = (byte)(uVar10 >> 8);
              uVar13 = local_10;
              if (bVar11 != 0) goto LAB_00405ba3;
              if (local_10 != 0x103) break;
              if (DAT_004333f9 == '\0') {
                FUN_004053c9(0,0xfac);
                local_10 = 0;
                break;
              }
              if (9 < local_14) goto LAB_00405b7e;
              FUN_004053c9(0,0xfad);
              local_14 = local_14 + 1;
            }
            uVar13 = local_10;
            if (local_10 == 0) goto LAB_00405ba3;
LAB_00405b7e:
            uVar13 = local_10;
            if ((_DAT_00432ef0 < local_10) && (DAT_004226b7 == '\0')) {
              FUN_004053c9(0,0x435);
            }
LAB_00405ba3:
            if (pwVar8 != local_8) {
              free(local_8);
            }
            free(local_1c);
            free(pwVar5);
          }
          else {
            pwVar5 = wcschr(local_8,L'$');
            if (pwVar5 != (wchar_t *)0x0) {
              local_8 = (wchar_t *)FUN_0040f2f6(local_8,-1,&param_3);
            }
            if (pwVar8 != local_8) {
              free(local_8);
            }
            bVar11 = (byte)param_4 & 2;
            uVar13 = local_10;
          }
        } while (((((bVar11 != 0) || (DAT_004226b7 == '\0')) || (uVar13 == 0)) ||
                 (uVar13 <= _DAT_00432ef0)) && (local_20 = (int *)*local_20, local_20 != (int *)0x0)
                );
      }
      if ((((param_4 & 2) == 0) && (DAT_004226b7 != '\0')) && (_DAT_00432ef0 < uVar13)) {
        return uVar13;
      }
    }
    else if (param_1 != (int *)0x0) {
      bVar9 = (byte)param_4 >> 2;
      do {
        FUN_00407972((wchar_t *)param_1[1],bVar9 & 1);
        param_1 = (int *)*param_1;
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
}



wchar_t ** __fastcall FUN_00405bce(wchar_t *param_1,int param_2,wchar_t **param_3)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t **_ArgList;
  int iVar3;
  wchar_t *pwVar4;
  int *piVar5;
  HANDLE hHandle;
  wchar_t *pwVar6;
  uint uVar7;
  
  _ArgList = param_3;
  uVar7 = 0;
  if (param_1 == (wchar_t *)0x0) {
    pwVar4 = *param_3;
    if (*pwVar4 == L'\"') {
      param_3 = (wchar_t **)(pwVar4 + 1);
      pwVar6 = pwVar4;
      do {
        wVar1 = *pwVar6;
        pwVar6 = pwVar6 + 1;
      } while (wVar1 != L'\0');
      if (pwVar4[((int)pwVar6 - (int)param_3 >> 1) + -1] == L'\"') {
        for (iVar3 = param_2 + -1; 0 < iVar3; iVar3 = iVar3 + -1) {
          pwVar4 = wcspbrk(_ArgList[iVar3],L"\"");
          if (pwVar4 != (wchar_t *)0x0) goto LAB_00405bf2;
        }
      }
    }
    bVar2 = false;
  }
  else {
    param_3[param_2] = L">";
    param_3[param_2 + 1] = param_1;
    param_2 = param_2 + 2;
    param_3[param_2] = (wchar_t *)0x0;
LAB_00405bf2:
    _ArgList[param_2] = L"\"";
    bVar2 = true;
    param_2 = param_2 + 1;
    _ArgList[param_2] = (wchar_t *)0x0;
  }
  for (; -1 < param_2; param_2 = param_2 + -1) {
    _ArgList[param_2 + 2] = _ArgList[param_2];
  }
  *_ArgList = DAT_00422eec;
  pwVar4 = L"/c \"";
  if (!bVar2) {
    pwVar4 = L"/c";
  }
  _ArgList[1] = pwVar4;
  piVar5 = _errno();
  *piVar5 = 0;
  hHandle = (HANDLE)_wspawnvp(1,*_ArgList,_ArgList);
  if (hHandle == (HANDLE)0xffffffff) {
    param_3 = (wchar_t **)0xffffffff;
  }
  else {
    WaitForSingleObject(hHandle,0xffffffff);
    param_3 = (wchar_t **)0x0;
    do {
      GetExitCodeProcess(hHandle,(LPDWORD)&param_3);
      if (param_3 != (wchar_t **)0x103) break;
      Sleep(1000);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 10);
    CloseHandle(hHandle);
  }
  return param_3;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

void __fastcall FUN_00405cdf(int param_1,wchar_t **param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  errno_t eVar5;
  UINT UVar6;
  wchar_t **ppwVar7;
  FILE *_File;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwStack_106bc;
  size_t sStack_106b4;
  wchar_t *pwStack_106b0;
  wchar_t awStack_106ac [32768];
  wchar_t local_6ac [260];
  wchar_t local_4a4;
  undefined local_4a2 [512];
  wchar_t local_2a2 [3];
  wchar_t local_29c;
  undefined local_29a [126];
  wchar_t local_21c [266];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  sStack_106b4 = 0;
  pwStack_106b0 = (wchar_t *)0x0;
  wcscpy_s(awStack_106ac,0x8000,L"set ");
  pwVar8 = awStack_106ac + 4;
  for (pwVar10 = &DAT_00412498; (wVar1 = *pwVar10, wVar1 == L' ' || (wVar1 == L'\t'));
      pwVar10 = pwVar10 + 1) {
  }
  if (((wVar1 == L'/') && (pwVar10[1] == L'A')) && ((pwVar10[2] == L' ' || (pwVar10[2] == L'\t'))))
  {
    bVar3 = true;
    pwVar10 = pwVar10 + 3;
  }
  pwVar4 = wcschr(pwVar10,L'=');
  if (pwVar4 != (wchar_t *)0x0) {
    pwStack_106bc = awStack_106ac + 4;
    wVar1 = *pwVar10;
    while (wVar1 != L'=') {
      *pwVar8 = wVar1;
      pwVar8 = pwVar8 + 1;
      if (local_6ac <= pwVar8) goto LAB_0040628a;
      pwVar10 = pwVar10 + 1;
      wVar1 = *pwVar10;
    }
    if (!bVar3) {
      wVar1 = *pwVar10;
      do {
        if (wVar1 == L'\0') goto LAB_00406241;
        pwVar4 = pwVar10 + 1;
        if (wVar1 == L'^') {
          pwVar11 = pwVar8;
          if (*pwVar4 != L'\0') {
            *pwVar8 = *pwVar4;
            pwVar4 = pwVar10 + 2;
LAB_00406220:
            pwVar11 = pwVar8 + 1;
            if (pwVar11 < local_6ac) goto LAB_00406231;
            goto LAB_0040628a;
          }
        }
        else {
          if (wVar1 != L'%') {
            *pwVar8 = wVar1;
            goto LAB_00406220;
          }
          pwVar10 = &local_4a4;
          wVar1 = *pwVar4;
          while ((wVar1 != L'%' && (wVar1 != L'\0'))) {
            *pwVar10 = wVar1;
            pwVar10 = pwVar10 + 1;
            if (pwVar10 == local_2a2) goto LAB_0040628a;
            pwVar4 = pwVar4 + 1;
            wVar1 = *pwVar4;
          }
          pwVar4 = pwVar4 + 1;
          *pwVar10 = L'\0';
          if (wVar1 == L'\0') {
            pwVar10 = &local_4a4;
            do {
              wVar1 = *pwVar10;
              pwVar10 = pwVar10 + 1;
            } while (wVar1 != L'\0');
            if (local_6ac <= pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 1) goto LAB_0040628a;
            *pwVar8 = L'%';
            wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
            pwVar8 = pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 1;
LAB_00406241:
            *pwVar8 = L'\0';
            goto LAB_00406246;
          }
          _wdupenv_s(&pwStack_106b0,(size_t *)0x0,&local_4a4);
          if (pwStack_106b0 != (wchar_t *)0x0) {
            pwVar10 = pwStack_106b0;
            do {
              wVar1 = *pwVar10;
              pwVar10 = pwVar10 + 1;
            } while (wVar1 != (wchar_t)sStack_106b4);
            pwVar11 = pwVar8 + ((int)pwVar10 - (int)(pwStack_106b0 + 1) >> 1);
            if (pwVar11 < local_6ac) {
              wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,pwStack_106b0);
              free(pwStack_106b0);
              pwStack_106b0 = (wchar_t *)0x0;
              goto LAB_00406231;
            }
            goto LAB_0040628a;
          }
          pwVar10 = &local_4a4;
          do {
            wVar1 = *pwVar10;
            pwVar10 = pwVar10 + 1;
          } while (wVar1 != L'\0');
          pwVar11 = pwVar8 + ((int)pwVar10 - (int)local_4a2 >> 1) + 2;
          if (local_6ac <= pwVar11) goto LAB_0040628a;
          *pwVar8 = L'%';
          wcscpy_s(pwVar8 + 1,(int)local_6ac - (int)(pwVar8 + 1) >> 1,&local_4a4);
          pwVar11[-1] = L'%';
        }
LAB_00406231:
        wVar1 = *pwVar4;
        pwVar10 = pwVar4;
        pwVar8 = pwVar11;
      } while( true );
    }
    wVar1 = pwVar8[-1];
    if (((((wVar1 == L'*') || (wVar1 == L'/')) || (wVar1 == L'%')) ||
        ((wVar1 == L'+' || (wVar1 == L'-')))) ||
       ((wVar1 == L'&' || ((wVar1 == L'^' || (wVar1 == L'|')))))) {
      pwVar8 = pwVar8 + -1;
    }
    else {
      pwVar10 = pwVar8 + -2;
      if (((wVar1 == L'>') && (*pwVar10 == L'>')) || ((wVar1 == L'<' && (*pwVar10 == L'<')))) {
        pwVar8 = pwVar10;
      }
    }
    if (awStack_106ac[4] == 0x22) {
      pwStack_106bc = awStack_106ac + 5;
    }
    *pwVar8 = L'=';
    pwVar8 = pwVar8 + 1;
    if (pwVar8 < local_6ac) {
      sStack_106b4 = 0;
      eVar5 = _wgetenv_s(&sStack_106b4,local_21c,0x106,L"TMP");
      if ((eVar5 != 0) || (sStack_106b4 == 0)) {
        wcscpy_s(local_21c,0x106,L".");
      }
      UVar6 = GetTempFileNameW(local_21c,L"nm",0,local_6ac);
      if (UVar6 == 0) {
        FUN_004053c9(DAT_004226a4,0x43c);
      }
      wcscpy_s(local_21c,0x106,local_6ac);
      pwVar10 = wcschr(local_21c,L' ');
      if ((pwVar10 != (wchar_t *)0x0) &&
         (pwVar10 = wcschr(local_21c,L'\"'), pwVar10 == (wchar_t *)0x0)) {
        pwVar10 = local_21c;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        iVar9 = (int)pwVar10 - (int)(local_21c + 1) >> 1;
        memmove(local_21c + 1,local_21c,iVar9 * 2);
        local_21c[0] = L'\"';
        local_21c[iVar9 + 1] = L'\"';
        if (0x20b < iVar9 * 2 + 4U) {
          ___report_rangecheckfailure();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_21c[iVar9 + 2] = L'\0';
      }
      ppwVar7 = FUN_00405bce(local_21c,param_1,param_2);
      if (ppwVar7 == (wchar_t **)0x0) {
        _File = _wfsopen(local_21c,L"rt",0x20);
        if (_File == (FILE *)0x0) {
          FUN_004053c9(0,0x41c);
        }
        pwVar10 = fgetws(&local_29c,0x40,_File);
        if (pwVar10 == (wchar_t *)0x0) {
          FUN_004053c9(0,0x41d);
        }
        iVar9 = fclose(_File);
        if (iVar9 == -1) {
          FUN_004053c9(0,0x424);
        }
        iVar9 = _wremove(local_21c);
        if (iVar9 == -1) {
          FUN_004053c9(0,0x421);
        }
        pwVar10 = &local_29c;
        do {
          wVar1 = *pwVar10;
          pwVar10 = pwVar10 + 1;
        } while (wVar1 != L'\0');
        if (pwVar8 + ((int)pwVar10 - (int)local_29a >> 1) + 1 <= local_6ac) {
          wcscpy_s(pwVar8,(int)local_6ac - (int)pwVar8 >> 1,&local_29c);
LAB_00406246:
          wcscpy_s((wchar_t *)&DAT_00412490,0x8000,awStack_106ac);
          *pwStack_106bc = L'\0';
          pwVar8 = awStack_106ac;
          do {
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
        }
      }
    }
  }
LAB_0040628a:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



wchar_t * __fastcall FUN_004062f9(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *local_c;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00401690);
  wVar1 = *param_1;
  do {
    if (wVar1 == L'\0') {
      return local_8;
    }
    pwVar2 = wcschr(param_1,L'%');
    if (pwVar2 == (wchar_t *)0x0) {
LAB_004063dd:
      local_8 = FUN_0040e9a8(local_8,param_1);
      pwVar2 = param_1;
      do {
        wVar1 = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (wVar1 != L'\0');
      param_1 = param_1 + ((int)pwVar2 - (int)(param_1 + 1) >> 1);
    }
    else {
      pwVar3 = wcschr(pwVar2 + 1,L'%');
      if (pwVar3 == (wchar_t *)0x0) goto LAB_004063dd;
      *pwVar2 = L'\0';
      local_c = (wchar_t *)0x0;
      *pwVar3 = L'\0';
      pwVar4 = FUN_0040e9a8(local_8,param_1);
      _wdupenv_s(&local_c,(size_t *)0x0,pwVar2 + 1);
      if (local_c == (wchar_t *)0x0) {
        *pwVar2 = L'%';
        pwVar4 = FUN_0040e9a8(pwVar4,pwVar2);
        local_8 = FUN_0040e9a8(pwVar4,L"%");
      }
      else {
        local_8 = FUN_0040e9a8(pwVar4,local_c);
        free(local_c);
        local_c = (wchar_t *)0x0;
      }
      *pwVar2 = L'%';
      param_1 = pwVar3 + 1;
      *pwVar3 = L'%';
    }
    wVar1 = *param_1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall FUN_00406419(int param_1,wchar_t **param_2,int *param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t wVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  wchar_t *pwVar7;
  int *piVar8;
  
  pwVar7 = *param_2;
  pwVar2 = param_2[1];
  iVar4 = iswalpha(*pwVar7);
  if (((iVar4 == 0) || (pwVar7[1] != L':')) || (pwVar7[2] != L'\0')) {
    iVar4 = _wcsicmp(pwVar7,L"set");
    if (iVar4 == 0) {
      psVar6 = (short *)0x0;
      if ((((param_1 != 1) && (_DAT_00412490 != 0)) &&
          (psVar6 = (short *)FUN_00405cdf(param_1,param_2), psVar6 != (short *)0x0)) &&
         (*psVar6 != 0)) {
        pwVar7 = (wchar_t *)FUN_0040e8fe(psVar6);
        piVar8 = (int *)_wputenv(pwVar7);
        *param_3 = (int)piVar8;
        if (piVar8 == (int *)0xffffffff) {
          piVar8 = (int *)FUN_004053c9(DAT_004226b0,0x41f);
        }
        goto LAB_004065b4;
      }
    }
    else {
      iVar4 = _wcsnicmp(pwVar7,L"cd",2);
      if (iVar4 == 0) {
        psVar6 = (short *)0x4;
      }
      else {
        psVar6 = (short *)_wcsnicmp(pwVar7,L"chdir",5);
        if (psVar6 != (short *)0x0) goto LAB_004065c7;
        psVar6 = (short *)0xa;
      }
      pwVar7 = (wchar_t *)((int)pwVar7 + (int)psVar6);
      if (param_1 < 3) {
        FUN_004078e8(param_1,param_2);
        wVar1 = *pwVar7;
        psVar6 = (short *)(uint)(ushort)wVar1;
        if (wVar1 == L'\0') {
          if ((pwVar2 != (wchar_t *)0x0) &&
             (((iVar4 = iswalpha(*pwVar2), iVar4 == 0 || (psVar6 = (short *)0x0, pwVar2[1] != L':'))
              || (pwVar2[2] != L'\0')))) {
            pwVar7 = FUN_004062f9(pwVar2);
            piVar8 = (int *)_wchdir(pwVar7);
            *param_3 = (int)piVar8;
            free(pwVar7);
LAB_004065b4:
            if (*param_3 != 0) {
              *param_3 = 1;
            }
            goto LAB_0040646d;
          }
        }
        else if (((psVar6 == (short *)0x2e) || (psVar6 == (short *)0x5c)) ||
                (psVar6 == (short *)0x2f)) {
          pwVar7 = FUN_004062f9(pwVar7);
          piVar8 = (int *)_wchdir(pwVar7);
          *param_3 = (int)piVar8;
          free(pwVar7);
          goto LAB_004065b4;
        }
      }
    }
LAB_004065c7:
    uVar5 = (uint)psVar6 & 0xffffff00;
  }
  else {
    wVar3 = towupper(*pwVar7);
    _chdrive(wVar3 - 0x40);
    *param_3 = 0;
    piVar8 = param_3;
LAB_0040646d:
    uVar5 = CONCAT31((int3)((uint)piVar8 >> 8),1);
  }
  return uVar5;
}



char __fastcall FUN_004065d0(wchar_t *param_1,int param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  FILE *_File;
  errno_t eVar4;
  int iVar5;
  long _Offset;
  int _Origin;
  int local_c;
  char local_5;
  
  for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
  }
  wVar2 = L'\0';
  pwVar3 = wcspbrk(param_1,L" \t<>\r");
  if (pwVar3 != (wchar_t *)0x0) {
    wVar2 = *pwVar3;
    *pwVar3 = L'\0';
  }
  if (param_2 == 4) {
    _File = (FILE *)__acrt_iob_func(0);
    iVar5 = 0;
  }
  else {
    _File = (FILE *)__acrt_iob_func(1);
    iVar5 = ((param_2 != 2) - 1 & 0x1f8) + 0x109;
  }
  local_c = 0;
  eVar4 = _wsopen_s(&local_c,param_1,iVar5,0x40,0x180);
  local_5 = eVar4 == 0;
  if (eVar4 == 0) {
    iVar5 = _fileno(_File);
    iVar5 = _dup2(local_c,iVar5);
    if (iVar5 == -1) {
      FUN_004053c9(0,0x411);
    }
    _close(local_c);
  }
  if ((local_5 != '\0') && (param_2 == 3)) {
    _Origin = 2;
    _Offset = 0;
    iVar5 = _fileno(_File);
    _lseek(iVar5,_Offset,_Origin);
  }
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    *param_1 = L' ';
    param_1 = param_1 + 1;
    wVar1 = *param_1;
  }
  if (pwVar3 != (wchar_t *)0x0) {
    *pwVar3 = wVar2;
  }
  return local_5;
}



undefined __fastcall FUN_004066ef(wchar_t *param_1,rsize_t param_2,int *param_3,int *param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  FILE *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *_Src;
  int local_10;
  wchar_t *local_c;
  
  bVar2 = false;
  bVar3 = false;
  _Src = (wchar_t *)0x0;
  pwVar5 = wcspbrk(param_1,L"<>|");
  local_c = param_1;
  do {
    if (pwVar5 == (wchar_t *)0x0) {
      return 0;
    }
    wVar1 = *pwVar5;
    if (wVar1 == L'<') {
      if (bVar3) goto LAB_0040683b;
      if (_Src == (wchar_t *)0x0) {
        _Src = (wchar_t *)FUN_0040e8fe(local_c);
      }
      *pwVar5 = L' ';
      bVar3 = true;
      pwVar8 = pwVar5 + 1;
      pFVar6 = (FILE *)__acrt_iob_func(0);
      iVar7 = _fileno(pFVar6);
      iVar7 = _dup(iVar7);
      *param_3 = iVar7;
      if (iVar7 == -1) goto LAB_0040683b;
      local_10 = 4;
LAB_0040680b:
      local_c = pwVar5 + 1;
      cVar4 = FUN_004065d0(pwVar8,local_10);
      if (cVar4 == '\0') {
LAB_0040683b:
        if (_Src != (wchar_t *)0x0) {
          wcscpy_s(param_1,param_2,_Src);
          free(_Src);
        }
        if ((bVar3) && (*param_3 != -1)) {
          pFVar6 = (FILE *)__acrt_iob_func(0);
          iVar7 = _fileno(pFVar6);
          iVar7 = _dup2(*param_3,iVar7);
          if (iVar7 == -1) {
            FUN_004053c9(0,0x411);
          }
          _close(*param_3);
          *param_3 = -1;
        }
        if (!bVar2) {
          return 1;
        }
        if (*param_4 == -1) {
          return 1;
        }
        pFVar6 = (FILE *)__acrt_iob_func(1);
        iVar7 = _fileno(pFVar6);
        iVar7 = _dup2(*param_4,iVar7);
        if (iVar7 == -1) {
          FUN_004053c9(0,0x411);
        }
        _close(*param_4);
        *param_4 = -1;
        return 1;
      }
    }
    else {
      if (wVar1 == L'>') {
        if (bVar2) goto LAB_0040683b;
        if (_Src == (wchar_t *)0x0) {
          _Src = (wchar_t *)FUN_0040e8fe(local_c);
        }
        *pwVar5 = L' ';
        pwVar8 = pwVar5 + 1;
        bVar2 = true;
        if (*pwVar8 == L'>') {
          *pwVar8 = L' ';
          pwVar8 = pwVar5 + 2;
          local_10 = 3;
        }
        else {
          local_10 = 2;
        }
        pFVar6 = (FILE *)__acrt_iob_func(1);
        iVar7 = _fileno(pFVar6);
        iVar7 = _dup(iVar7);
        *param_4 = iVar7;
        if (iVar7 == -1) goto LAB_0040683b;
        goto LAB_0040680b;
      }
      if (wVar1 == L'|') goto LAB_0040683b;
      FUN_004053c9(0,0x411);
    }
    pwVar5 = wcspbrk(local_c,L"<>|");
  } while( true );
}



undefined4 FUN_004068f3(void)

{
  return 1;
}



uint __fastcall FUN_004068f9(short *param_1,uint *param_2)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  
  if (param_1 == (short *)0x0) {
    uVar2 = in_EAX & 0xffffff00;
  }
  else {
    sVar1 = *param_1;
    psVar3 = param_1;
    while (psVar4 = param_1, sVar1 == 0x3b) {
      psVar3 = psVar3 + 1;
      sVar1 = *psVar3;
    }
    while ((sVar1 != 0 && (sVar1 != 0x3b))) {
      psVar3 = psVar3 + 1;
      if (sVar1 == 0x22) {
        sVar1 = *psVar3;
        while ((sVar1 != 0 && (sVar1 != 0x22))) {
          psVar3 = psVar3 + 1;
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          sVar1 = *psVar3;
        }
        if (sVar1 != 0) {
          psVar3 = psVar3 + 1;
        }
      }
      else {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
      }
      sVar1 = *psVar3;
    }
    *param_2 = -(uint)(sVar1 != 0) & (uint)(psVar3 + 1);
    *psVar4 = 0;
    uVar2 = (uint)(psVar4 != param_1);
  }
  return uVar2;
}



void __fastcall FUN_004069c2(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  HMODULE hModule;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *_Dir;
  int iVar8;
  wchar_t *_Dst;
  wchar_t *local_63c;
  wchar_t *local_638;
  wchar_t *local_634;
  wchar_t *local_630;
  wchar_t *local_62c;
  wchar_t *local_628;
  size_t local_624;
  size_t local_620;
  char local_619;
  wchar_t local_618 [256];
  wchar_t local_418;
  undefined local_416 [510];
  wchar_t local_218;
  undefined local_216 [514];
  wchar_t local_14;
  undefined local_12 [6];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_630 = (wchar_t *)0x0;
  local_619 = '\0';
  if (*param_1 == L'\"') {
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    local_630 = param_1 + ((int)pwVar3 - (int)(param_1 + 1) >> 1) + -1;
    if (*local_630 == L'\"') {
      local_619 = '\x01';
      do {
        param_1 = param_1 + 1;
        pwVar3 = local_630;
      } while (*param_1 == L'\"');
      do {
        local_630 = pwVar3;
        if (local_630 <= param_1) break;
        pwVar3 = local_630 + -1;
      } while (local_630[-1] == L'\"');
      *local_630 = L'\0';
    }
  }
  local_628 = param_2;
  _wsplitpath_s(param_1,&local_14,3,&local_418,0x100,local_618,0x100,&local_218,0x100);
  if (local_218 == L'\0') {
    eVar4 = _wgetenv_s(&local_624,(wchar_t *)0x0,0,L"PATHEXT");
    if ((eVar4 == 0) && (local_624 != 0)) {
      pwVar3 = (wchar_t *)
               FUN_0040ab83(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                            (uint)((ulonglong)local_624 * 2));
      eVar4 = _wgetenv_s(&local_624,pwVar3,local_624,L"PATHEXT");
      if (eVar4 != 0) {
        free(pwVar3);
        pwVar3 = (wchar_t *)0x0;
      }
      if (pwVar3 != (wchar_t *)0x0) goto LAB_00406b3b;
    }
    local_624 = 0x21;
    pwVar3 = (wchar_t *)FUN_0040ab83(0x42);
    wcscpy_s(pwVar3,local_624,L".COM;.EXE;.BAT;.CMD;.VBS;.JS;.WS");
  }
  else {
    pwVar5 = &local_218;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar3 = &local_218;
    local_624 = ((int)pwVar5 - (int)local_216 >> 1) + 1;
  }
LAB_00406b3b:
  if ((local_14 == L'\0') && (local_418 == L'\0')) {
    eVar4 = _wgetenv_s(&local_620,(wchar_t *)0x0,0,L"PATH");
    if ((eVar4 != 0) || (local_620 == 0)) {
      local_620 = 1;
    }
    if (DAT_0043666c == (code *)0x0) {
      hModule = GetModuleHandleW(L"KERNEL32.DLL");
      DAT_0043666c = GetProcAddress(hModule,"NeedCurrentDirectoryForExePathW");
      if (DAT_0043666c == (FARPROC)0x0) {
        DAT_0043666c = FUN_004068f3;
      }
    }
    local_62c = (wchar_t *)(*DAT_0043666c)(local_618);
    if (local_62c != (wchar_t *)0x0) {
      local_620 = local_620 + 2;
    }
    pwVar5 = (wchar_t *)
             FUN_0040ab83(-(uint)((int)((ulonglong)local_620 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)local_620 * 2));
    pwVar7 = pwVar5;
    local_634 = pwVar5;
    if (local_62c != (wchar_t *)0x0) {
      wcscpy_s(pwVar5,local_620,L".;");
      local_620 = local_620 - 2;
      pwVar7 = pwVar5 + 2;
    }
    eVar4 = _wgetenv_s(&local_620,pwVar7,local_620,L"PATH");
    if ((eVar4 != 0) || (local_620 == 0)) {
      *pwVar7 = L'\0';
    }
  }
  else {
    pwVar5 = &local_14;
    do {
      wVar1 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar1 != L'\0');
    pwVar7 = &local_418;
    do {
      wVar1 = *pwVar7;
      pwVar7 = pwVar7 + 1;
    } while (wVar1 != L'\0');
    uVar6 = ((int)pwVar5 - (int)local_12 >> 1) + 1 + ((int)pwVar7 - (int)local_416 >> 1);
    lVar2 = (ulonglong)uVar6 * 2;
    pwVar5 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    local_634 = pwVar5;
    eVar4 = _wmakepath_s(pwVar5,uVar6,&local_14,&local_418,(wchar_t *)0x0,(wchar_t *)0x0);
    if (eVar4 != 0) {
      free(pwVar5);
      pwVar5 = (wchar_t *)0x0;
      local_634 = (wchar_t *)0x0;
    }
  }
  _Dst = (wchar_t *)0x0;
  pwVar7 = pwVar5;
  do {
    _Dir = pwVar7;
    uVar6 = FUN_004068f9(_Dir,(uint *)&local_62c);
    if ((char)uVar6 == '\0') {
      free(_Dst);
      free(pwVar5);
      if (pwVar3 != &local_218) {
        free(pwVar3);
      }
LAB_00406dcd:
      ___security_check_cookie_4(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    _Dst = (wchar_t *)
           FUN_0040ab83(-(uint)((int)((ulonglong)local_624 * 2 >> 0x20) != 0) |
                        (uint)((ulonglong)local_624 * 2));
    wcscpy_s(_Dst,local_624,pwVar3);
    pwVar7 = _Dst;
    while (local_638 = pwVar7, uVar6 = FUN_004068f9(pwVar7,(uint *)&local_63c), pwVar7 = local_62c,
          (char)uVar6 != '\0') {
      eVar4 = _wmakepath_s(local_628,0x104,(wchar_t *)0x0,_Dir,local_618,local_638);
      pwVar7 = local_63c;
      if ((eVar4 == 0) && (eVar4 = _waccess_s(local_628,0), pwVar7 = local_63c, eVar4 == 0)) {
        if (local_619 != '\0') {
          pwVar5 = local_628;
          do {
            wVar1 = *pwVar5;
            pwVar5 = pwVar5 + 1;
          } while (wVar1 != L'\0');
          iVar8 = (int)pwVar5 - (int)(local_628 + 1) >> 1;
          memmove(local_628 + 1,local_628,iVar8 * 2);
          *local_628 = L'\"';
          local_628[iVar8 + 1] = L'\"';
          local_628[iVar8 + 2] = L'\0';
          *local_630 = L'\"';
          pwVar5 = local_634;
        }
        free(_Dst);
        free(pwVar5);
        if (pwVar3 != &local_218) {
          free(pwVar3);
        }
        goto LAB_00406dcd;
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_00406e64(wchar_t *param_1,byte param_2,char param_3,char param_4,void **param_5)

{
  wchar_t wVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  wchar_t **ppwVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  FILE *pFVar12;
  int iVar13;
  ulong *puVar14;
  int *piVar15;
  uint uVar16;
  wchar_t **_ArgList;
  wchar_t *local_43c;
  int local_438;
  wchar_t **local_434;
  int local_430;
  int local_42c;
  char local_426;
  char local_425;
  wchar_t *local_424;
  wchar_t local_420;
  wchar_t local_41e [59];
  wchar_t local_3a8 [198];
  short asStack_21c [2];
  wchar_t local_218;
  undefined local_216 [522];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_424 = param_1;
  if (DAT_00422eec == 0) {
    DAT_00422eec = FUN_004075e7();
  }
  bVar4 = true;
  if (*local_424 == L'-') {
    local_424 = local_424 + 1;
    local_426 = '\x01';
    iVar13 = iswdigit(*local_424);
    if (iVar13 == 0) {
      _DAT_00432ef0 = 0xffffffff;
    }
    else {
      _DAT_00432ef0 = wcstoul(local_424,&local_424,10);
      piVar15 = _errno();
      if (*piVar15 == 0x22) {
        *local_424 = L'\0';
        FUN_004053c9(0,0x436);
      }
      while (iVar13 = iswspace(*local_424), iVar13 != 0) {
        local_424 = local_424 + 1;
      }
    }
  }
  else {
    if (*local_424 == L'@') {
      local_424 = local_424 + 1;
      param_2 = (param_3 != '\0') - 1U & param_2;
    }
    local_426 = param_4;
  }
  if (*local_424 == L'\0') goto LAB_004075d0;
  _ArgList = (wchar_t **)0x0;
  pwVar11 = local_424;
  do {
    wVar1 = *pwVar11;
    pwVar11 = pwVar11 + 1;
  } while (wVar1 != L'\0');
  if ((uint)((int)pwVar11 - (int)(local_424 + 1) >> 1) < 0x8000) {
    wcscpy_s((wchar_t *)&DAT_00412490,0x8000,local_424);
  }
  else {
    _DAT_00412490 = 0;
  }
  local_43c = (wchar_t *)FUN_0040e8fe(local_424);
  if (param_2 != 0) {
    FUN_0040ce63(L"\t%s\n",(char)local_43c);
    FUN_0040ce45();
  }
  FUN_00405598(&local_430,(wchar_t **)0x0,local_43c);
  iVar13 = local_430;
  if (local_430 != 0) {
    local_42c = local_430;
    lVar3 = (ulonglong)(local_430 + 8) * 4;
    _ArgList = (wchar_t **)FUN_0040ab83(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
    ;
    FUN_00405598(&local_430,_ArgList,local_43c);
    if (((*_ArgList != (wchar_t *)0x0) && (DAT_00422ee8 != 0)) &&
       (iVar6 = _wcsicmp(*_ArgList,(wchar_t *)DAT_00422ee8), iVar6 == 0)) {
      if (DAT_00412488 == (wchar_t *)0x0) {
        ppwVar7 = (wchar_t **)__p__wpgmptr();
        pwVar11 = *ppwVar7;
        DAT_00412488 = pwVar11;
        pwVar8 = wcspbrk(pwVar11,L" ");
        if (pwVar8 != (wchar_t *)0x0) {
          pwVar8 = DAT_00412488;
          do {
            wVar1 = *pwVar8;
            pwVar8 = pwVar8 + 1;
          } while (wVar1 != L'\0');
          uVar16 = ((int)pwVar8 - (int)(DAT_00412488 + 1) >> 1) + 3;
          DAT_00412488 = (wchar_t *)
                         FUN_0040ab83(-(uint)((int)((ulonglong)uVar16 * 2 >> 0x20) != 0) |
                                      (uint)((ulonglong)uVar16 * 2));
          wcscpy_s(DAT_00412488,uVar16,L"\"");
          wcscat_s(DAT_00412488,uVar16,pwVar11);
          wcscat_s(DAT_00412488,uVar16,L"\"");
          iVar13 = local_42c;
        }
      }
      *_ArgList = DAT_00412488;
    }
    if (param_3 == '\0') {
      uVar9 = FUN_00406419(iVar13,_ArgList,(int *)&local_434);
      if ((((char)uVar9 != '\0') && (local_434 != (wchar_t **)0x0)) && (param_5 != (void **)0x0)) {
        pvVar10 = FUN_0040e8fe(*_ArgList);
        *param_5 = pvVar10;
      }
    }
    else {
      pwVar11 = wcspbrk(local_424,L"<>|&%");
      uVar9 = FUN_00406419(iVar13,_ArgList,(int *)&local_434);
      if ((char)uVar9 == '\0') {
        pwVar8 = local_424;
        do {
          wVar1 = *pwVar8;
          pwVar8 = pwVar8 + 1;
        } while (wVar1 != L'\0');
        if (((uint)((int)pwVar8 - (int)(local_424 + 1) >> 1) < 0x1000) &&
           (pwVar11 != (wchar_t *)0x0)) {
          cVar5 = '\x01';
        }
        else {
          local_438 = -1;
          local_42c = -1;
          pwVar11 = local_424;
          do {
            wVar1 = *pwVar11;
            pwVar11 = pwVar11 + 1;
          } while (wVar1 != L'\0');
          local_425 = FUN_004066ef(local_424,((int)pwVar11 - (int)(local_424 + 1) >> 1) + 1,
                                   &local_438,&local_42c);
          if (local_425 == '\0') {
            pwVar11 = local_424;
            do {
              wVar1 = *pwVar11;
              pwVar11 = pwVar11 + 1;
            } while (wVar1 != L'\0');
            if (0x7fff < (uint)((int)pwVar11 - (int)(local_424 + 1) >> 1)) {
              FUN_004053c9(0,0x447);
            }
            if ((local_438 != -1) || (local_42c != -1)) {
              free(local_43c);
              local_43c = (wchar_t *)FUN_0040e8fe(local_424);
              FUN_00405598(&local_430,_ArgList,local_43c);
            }
            cVar5 = FUN_004069c2(*_ArgList,&local_218);
            if (cVar5 == '\0') {
              local_425 = '\x01';
            }
            else {
              if (local_218 == L'\"') {
                pwVar11 = &local_218;
                do {
                  wVar1 = *pwVar11;
                  pwVar11 = pwVar11 + 1;
                } while (wVar1 != L'\0');
                iVar13 = (int)pwVar11 - (int)local_216 >> 1;
                if (asStack_21c[iVar13 + 1] == 0x22) {
                  memmove(&local_218,local_216,iVar13 * 2);
                  if (0x207 < iVar13 * 2 - 4U) {
                    ___report_rangecheckfailure();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  asStack_21c[iVar13] = 0;
                }
              }
              *_ArgList = &local_218;
              pwVar11 = wcschr(&local_218,L' ');
              if (pwVar11 != (wchar_t *)0x0) {
                local_420 = L'\"';
                wcscpy_s(local_41e,0x103,&local_218);
                wcscat_s(&local_420,0x104,L"\"");
                *_ArgList = &local_420;
              }
              piVar15 = _errno();
              *piVar15 = 0;
              local_434 = (wchar_t **)_wspawnvp(0,&local_218,_ArgList);
              if (((local_434 == (wchar_t **)0xffffffff) && (piVar15 = _errno(), *piVar15 != 0xc))
                 && (puVar14 = __doserrno(), *puVar14 == 0xc1)) {
                local_425 = '\x01';
              }
            }
          }
          if (local_438 != -1) {
            pFVar12 = (FILE *)__acrt_iob_func(0);
            iVar13 = _fileno(pFVar12);
            iVar13 = _dup2(local_438,iVar13);
            if (iVar13 == -1) {
              FUN_004053c9(0,0x411);
            }
            _close(local_438);
          }
          if (local_42c != -1) {
            pFVar12 = (FILE *)__acrt_iob_func(1);
            iVar13 = _fileno(pFVar12);
            iVar13 = _dup2(local_42c,iVar13);
            if (iVar13 == -1) {
              FUN_004053c9(0,0x411);
            }
            _close(local_42c);
          }
          cVar5 = local_425;
          if (local_425 == '\0') goto LAB_004074c5;
        }
        pwVar11 = local_424;
        do {
          wVar1 = *pwVar11;
          pwVar11 = pwVar11 + 1;
        } while (wVar1 != L'\0');
        if ((uint)((int)pwVar11 - (int)(local_424 + 1) >> 1) < 0x1000) {
          wcscpy_s((wchar_t *)&DAT_00412490,0x8000,local_424);
        }
        else {
          FUN_004053c9(0,0x447);
        }
        local_434 = FUN_00405bce((wchar_t *)0x0,local_430,_ArgList);
      }
      else {
        cVar5 = '\0';
      }
LAB_004074c5:
      if (local_434 == (wchar_t **)0xffffffff) {
        if (local_426 == '\0') {
          piVar15 = _errno();
          iVar13 = *piVar15;
          if (iVar13 != 0) {
            if (iVar13 == 2) {
              FUN_004053c9(0,0x439);
              goto LAB_0040754f;
            }
            if (iVar13 == 0xc) {
              uVar16 = 0x43a;
            }
            else {
              piVar15 = _errno();
              _wcserror_s(local_3a8,200,*piVar15);
              uVar16 = 0x415;
            }
            FUN_004053c9(0,uVar16);
          }
          goto LAB_00407553;
        }
      }
      else {
LAB_0040754f:
        if (local_434 != (wchar_t **)0x0) {
LAB_00407553:
          if (param_5 != (void **)0x0) {
            ppwVar7 = _ArgList + 2;
            if (cVar5 == '\0') {
              ppwVar7 = _ArgList;
            }
            pvVar10 = FUN_0040e8fe(*ppwVar7);
            *param_5 = pvVar10;
          }
        }
      }
    }
  }
  uVar16 = 0;
  if (local_430 != -8) {
    do {
      if (_ArgList == (wchar_t **)0x0) goto LAB_004075b3;
      if (_ArgList[uVar16] == (wchar_t *)0x0) break;
      if (_ArgList[uVar16] == local_43c) {
        bVar4 = false;
        break;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < local_430 + 8U);
  }
  if (_ArgList != (wchar_t **)0x0) {
    free(_ArgList);
  }
LAB_004075b3:
  if ((local_43c != (wchar_t *)0x0) && (bVar4)) {
    free(local_43c);
  }
LAB_004075d0:
  ___security_check_cookie_4(local_c ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_004075e7(void)

{
  wchar_t *local_218;
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_218 = (wchar_t *)0x0;
  _wdupenv_s(&local_218,(size_t *)0x0,L"COMSPEC");
  if (local_218 == (wchar_t *)0x0) {
    _wsearchenv(L"CMD.EXE",L"PATH",local_214);
    if (local_214[0] == L'\0') {
      FUN_004053c9(0,0x420);
    }
    FUN_0040e8fe(local_214);
  }
  else {
    FUN_0040e8fe(local_218);
    free(local_218);
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __fastcall
FUN_00407683(wchar_t *param_1,undefined4 param_2,byte param_3,byte param_4,wchar_t *param_5,
            uint *param_6)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  int *piVar8;
  byte bVar9;
  ushort uVar10;
  short sVar11;
  uint uVar12;
  void *local_20;
  uint local_1c;
  wchar_t *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  wchar_t *local_c;
  undefined local_5;
  
  uVar12 = (uint)(ushort)*param_1;
  local_c = (wchar_t *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = param_1;
  local_10 = param_2;
  if (*param_1 == L'\0') {
LAB_00407714:
    sVar11 = (short)local_c;
LAB_00407717:
    if ((short)uVar12 != 0) {
      if (local_14 != (undefined4 *)0x0) {
        uVar12 = CONCAT31((int3)(uVar12 >> 8),param_3) & 0xffffff04;
        local_5 = (undefined)uVar12;
        local_1c = CONCAT31((int3)(uVar12 >> 8),param_4 >> 1) & 0xffffff01;
        uVar10 = CONCAT11(param_3,local_5) & 0x2ff;
        do {
          piVar8 = DAT_00422ec4;
          if (sVar11 != 0x2a) {
            piVar8 = DAT_00422ed0;
          }
          puVar2 = (undefined4 *)*piVar8;
          _DAT_004226bc = local_10;
          *piVar8 = 0;
          local_c = (wchar_t *)FUN_0040f2f6(local_18,-1,(int **)&DAT_004226bc);
          cVar4 = FUN_0041010b((wchar_t *)&DAT_00422ef0,0x8000,local_c,param_5);
          if (cVar4 != '\0') {
            FUN_004053c9(0,0x447);
          }
          cVar4 = (char)uVar10;
          if ((cVar4 == '\0') || ((param_4 & 8) != 0)) {
            cVar5 = '\x01';
          }
          else {
            cVar5 = '\0';
          }
          if ((cVar4 == '\0') && (((param_3 & 8) != 0 || ((param_4 & 1) != 0)))) {
            bVar9 = 0;
          }
          else {
            bVar9 = 1;
          }
          uVar12 = FUN_00406e64((wchar_t *)&DAT_00422ef0,bVar9,cVar5,(char)local_1c,&local_20);
          *param_6 = uVar12;
          cVar4 = (char)(uVar10 >> 8);
          if ((((cVar4 == '\0') && (uVar12 != 0)) && (_DAT_00432ef0 < uVar12)) &&
             (DAT_004226b7 == '\0')) {
            FUN_004053c9(0,0x435);
          }
          piVar8 = DAT_00422ed0;
          puVar3 = puVar2;
          if (sVar11 == 0x2a) {
            piVar8 = DAT_00422ec4;
            DAT_00422ec4 = puVar2;
            puVar3 = DAT_00422ed0;
          }
          DAT_00422ed0 = puVar3;
          *piVar8 = (int)puVar2;
          free(local_c);
        } while ((((cVar4 != '\0') || (DAT_004226b7 == '\0')) ||
                 ((*param_6 == 0 || (*param_6 <= _DAT_00432ef0)))) && (puVar2 != (undefined4 *)0x0))
        ;
      }
      puVar2 = local_14;
      if (sVar11 == 0x2a) {
        DAT_00422ec4 = local_14;
        puVar2 = DAT_00422ed0;
      }
      DAT_00422ed0 = puVar2;
      return 1;
    }
  }
  else {
    local_c = (wchar_t *)0x3f;
    do {
      pwVar6 = param_1;
      if ((short)uVar12 == 0x24) {
        wVar1 = param_1[1];
        if (wVar1 == L'(') {
          param_1 = param_1 + 1;
        }
        pwVar6 = param_1 + 1;
        if (*pwVar6 == L'?') {
          if ((wVar1 != L'(') ||
             (((pwVar6 = wcschr(L"DFBR",param_1[2]), pwVar6 != (wchar_t *)0x0 &&
               (param_1[3] == L')')) || (pwVar6 = param_1, param_1[2] == L')')))) {
            uVar12 = (uint)(ushort)*param_1;
            local_14 = DAT_00422ed0;
            goto LAB_00407714;
          }
        }
        else if (((*pwVar6 == L'*') && (param_1[2] == L'*')) &&
                (((wVar1 != L'(' ||
                  ((pwVar7 = wcschr(L"DFBR",param_1[3]), pwVar7 != (wchar_t *)0x0 &&
                   (param_1[4] == L')')))) || (param_1[3] == L')')))) {
          local_14 = DAT_00422ec4;
          uVar12 = (uint)(ushort)*pwVar6;
          sVar11 = 0x2a;
          goto LAB_00407717;
        }
      }
      param_1 = pwVar6 + 1;
      uVar12 = (uint)(ushort)*param_1;
    } while (*param_1 != L'\0');
  }
  return uVar12 & 0xffffff00;
}



void __fastcall FUN_004078e8(int param_1,short **param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short **local_8;
  
  local_8 = param_2;
  if (param_1 != 0) {
    do {
      psVar4 = *local_8;
      param_1 = param_1 + -1;
      sVar2 = *psVar4;
      psVar3 = psVar4;
      while (sVar2 != 0) {
        if ((sVar2 == 0x5c) || (sVar2 == 0x5e)) {
          psVar1 = psVar4 + 1;
          if (*psVar1 == 0x22) {
            *psVar3 = sVar2;
            sVar2 = *psVar1;
            psVar3 = psVar3 + 1;
            psVar4 = psVar1;
          }
          *psVar3 = sVar2;
LAB_00407948:
          psVar3 = psVar3 + 1;
        }
        else if (sVar2 != 0x22) {
          *psVar3 = sVar2;
          goto LAB_00407948;
        }
        psVar4 = psVar4 + 1;
        sVar2 = *psVar4;
      }
      local_8 = local_8 + 1;
      *psVar3 = 0;
    } while (param_1 != 0);
  }
  return;
}



void __fastcall FUN_00407972(wchar_t *param_1,char param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  HANDLE hFile;
  _FILETIME local_c;
  
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
  FUN_004054a3(5);
  if (param_2 == '\0') {
    GetSystemTimeAsFileTime(&local_c);
    hFile = CreateFileW(param_1,0x100,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_c);
      CloseHandle(hFile);
    }
  }
  return;
}



undefined8 __fastcall FUN_00407a01(byte *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    if ((iVar1 != 0) || (iVar2 != 0)) goto LAB_00407a1a;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x14);
LAB_00407a1a:
  return CONCAT44(iVar2,iVar1);
}



void __fastcall FUN_00407a1b(wchar_t *param_1,LPWIN32_FIND_DATAW param_2,HANDLE *param_3)

{
  uint uVar1;
  wchar_t wVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  HANDLE pvVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  wchar_t local_218 [262];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)&stack0xfffffffc;
  pwVar4 = wcspbrk(param_1,L"\"^*?");
  pwVar5 = param_1;
  pwVar8 = local_218;
  if (pwVar4 != (wchar_t *)0x0) {
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (wVar2 != L'\0');
    uVar1 = ((int)pwVar5 - (int)(param_1 + 1) >> 1) + 1;
    pwVar5 = local_218;
    if ((0x104 < uVar1) &&
       (lVar3 = (ulonglong)uVar1 * 2,
       pwVar5 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3)
       , pwVar5 == (wchar_t *)0x0)) {
      FUN_004053c9(DAT_004226b0,0x41b);
    }
    wVar2 = *param_1;
    pwVar8 = pwVar5;
    while (wVar2 != L'\0') {
      if ((wVar2 != L'^') && (wVar2 != L'\"')) {
        *pwVar8 = wVar2;
        pwVar8 = pwVar8 + 1;
      }
      param_1 = param_1 + 1;
      wVar2 = *param_1;
    }
    *pwVar8 = L'\0';
    pwVar8 = pwVar5;
  }
  pvVar6 = FindFirstFileW(pwVar5,param_2);
  *param_3 = pvVar6;
  if ((pvVar6 == (HANDLE)0xffffffff) ||
     (uVar7 = FUN_00407d53(pwVar5,&param_2->dwFileAttributes), (char)uVar7 == '\0')) {
    if (pwVar8 != local_218) {
      free(pwVar8);
    }
  }
  else {
    if ((pwVar4 == (wchar_t *)0x0) ||
       ((pwVar4 = wcschr(pwVar5,L'*'), pwVar4 == (wchar_t *)0x0 &&
        (pwVar5 = wcschr(pwVar5,L'?'), pwVar5 == (wchar_t *)0x0)))) {
      FindClose(*param_3);
      *param_3 = (HANDLE)0xffffffff;
    }
    if (pwVar8 != local_218) {
      free(pwVar8);
    }
    if ((((*(byte *)&param_2->dwFileAttributes & 0x10) == 0) &&
        ((param_2->ftLastWriteTime).dwLowDateTime == 0)) &&
       ((param_2->ftLastWriteTime).dwHighDateTime == 0)) {
      (param_2->ftLastWriteTime).dwLowDateTime = 0xffffffff;
      (param_2->ftLastWriteTime).dwHighDateTime = 0xffffffff;
    }
  }
  ___security_check_cookie_4(local_c ^ (uint)&stack0xfffffffc);
  return;
}



WCHAR * __fastcall FUN_00407ba7(LPWIN32_FIND_DATAW param_1,HANDLE param_2)

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



void * __fastcall
FUN_00407bca(wchar_t *param_1,wchar_t *param_2,LPWIN32_FIND_DATAW param_3,HANDLE *param_4)

{
  int iVar1;
  void *pvVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *_Dst;
  
  iVar1 = FUN_00407a1b(param_2,param_3,param_4);
  if (iVar1 == 0) {
    if (param_1 != (wchar_t *)0x0) {
LAB_00407bf3:
      _Dst = &DAT_004226c0;
LAB_00407bf8:
      wVar4 = *param_1;
      do {
        if (wVar4 != L'\0') {
          do {
            if (wVar4 != L'\"') break;
            param_1 = param_1 + 1;
            wVar4 = *param_1;
          } while (wVar4 != L'\0');
          if (wVar4 != L'\0') {
            param_1 = param_1 + 1;
            *_Dst = wVar4;
            if (wVar4 != L';') {
              _Dst = _Dst + 1;
              goto LAB_00407bf8;
            }
          }
        }
        if (_Dst != &DAT_004226c0) goto LAB_00407c53;
        wVar4 = *param_1;
        if (wVar4 == L'\0') break;
      } while( true );
    }
    pvVar2 = (void *)0x0;
  }
  else {
LAB_00407be8:
    pvVar2 = FUN_0040e8fe(param_2);
  }
  return pvVar2;
LAB_00407c53:
  if ((_Dst[-1] != L'\\') && (_Dst[-1] != L'/')) {
    *_Dst = L'\\';
    _Dst = _Dst + 1;
  }
  *_Dst = L'\0';
  pwVar3 = wcspbrk(&DAT_004226c0,L"*?");
  if (pwVar3 == (wchar_t *)0x0) {
    wcscpy_s(_Dst,0x400 - ((int)(_Dst + -0x211360) >> 1),param_2);
    _Dst = &DAT_004226c0;
    iVar1 = FUN_00407a1b(&DAT_004226c0,param_3,param_4);
    if (iVar1 != 0) {
      param_2 = &DAT_004226c0;
      goto LAB_00407be8;
    }
    goto LAB_00407bf8;
  }
  goto LAB_00407bf3;
}



uint __fastcall FUN_00407cc4(wchar_t *param_1,LPWIN32_FIND_DATAW param_2)

{
  wchar_t wVar1;
  bool bVar2;
  HANDLE hFindFile;
  HANDLE pvVar3;
  BOOL BVar4;
  wchar_t *pwVar5;
  
  bVar2 = false;
  pwVar5 = param_1;
  do {
    wVar1 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar1 != L'\0');
  if ((*param_1 == L'\"') && (param_1[((int)pwVar5 - (int)(param_1 + 1) >> 1) + -1] == L'\"')) {
    param_1 = FUN_004105c5(param_1);
    bVar2 = true;
  }
  hFindFile = FindFirstFileW(param_1,param_2);
  pvVar3 = hFindFile;
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (pvVar3 = (HANDLE)FUN_00407d53(param_1,&param_2->dwFileAttributes), (char)pvVar3 != '\0')) {
    BVar4 = FindClose(hFindFile);
    if (((*(byte *)&param_2->dwFileAttributes & 0x10) == 0) &&
       (((param_2->ftLastWriteTime).dwLowDateTime == 0 &&
        ((param_2->ftLastWriteTime).dwHighDateTime == 0)))) {
      (param_2->ftLastWriteTime).dwLowDateTime = 0xffffffff;
      (param_2->ftLastWriteTime).dwHighDateTime = 0xffffffff;
    }
    return CONCAT31((int3)((uint)BVar4 >> 8),1);
  }
  if (bVar2) {
    free(param_1);
  }
  return (uint)pvVar3 & 0xffffff00;
}



uint __fastcall FUN_00407d53(wchar_t *param_1,uint *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  BOOL in_EAX;
  wchar_t *pwVar3;
  HANDLE hFile;
  uint uVar4;
  BOOL BVar5;
  HANDLE pvVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  uint *puVar10;
  uint *puVar11;
  
  if (((*param_2 & 0x400) == 0) || (param_2[9] != 0xa000000c)) {
LAB_00407ec2:
    uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    puVar11 = param_2 + 0xb;
    pwVar3 = wcsrchr(param_1,L'\\');
    puVar10 = puVar11;
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar8 = param_1;
      do {
        wVar1 = *pwVar8;
        pwVar8 = pwVar8 + 1;
      } while (wVar1 != L'\0');
      pwVar9 = pwVar3;
      do {
        wVar1 = *pwVar9;
        pwVar9 = pwVar9 + 1;
      } while (wVar1 != L'\0');
      do {
        wVar1 = *(wchar_t *)puVar10;
        puVar10 = (uint *)((int)puVar10 + 2);
      } while (wVar1 != L'\0');
      lVar2 = (ulonglong)
              (uint)((((int)puVar10 - ((int)param_2 + 0x2e) >> 1) -
                     ((int)pwVar9 - (int)(pwVar3 + 1) >> 1)) +
                    ((int)pwVar8 - (int)(param_1 + 1) >> 1) + 2) * 2;
      puVar10 = (uint *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      if (puVar10 == (uint *)0x0) {
        FUN_004053c9(DAT_004226b0,0x41b);
      }
      puVar7 = puVar10;
      if (param_1 != pwVar3) {
        do {
          wVar1 = *param_1;
          param_1 = param_1 + 1;
          *(wchar_t *)puVar7 = wVar1;
          puVar7 = (uint *)((int)puVar7 + 2);
        } while (param_1 != pwVar3);
      }
      *(wchar_t *)puVar7 = L'\\';
      pwVar8 = (wchar_t *)((int)puVar7 + 2);
      wVar1 = *(wchar_t *)puVar11;
      while (wVar1 != L'\0') {
        puVar11 = (uint *)((int)puVar11 + 2);
        *pwVar8 = wVar1;
        pwVar8 = pwVar8 + 1;
        wVar1 = *(wchar_t *)puVar11;
      }
      *pwVar8 = L'\0';
    }
    hFile = CreateFileW((LPCWSTR)puVar10,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    pvVar6 = hFile;
    if (pwVar3 != (wchar_t *)0x0) {
      free(puVar10);
    }
    if (hFile != (HANDLE)0xffffffff) {
      BVar5 = GetFileTime(hFile,(LPFILETIME)(param_2 + 1),(LPFILETIME)(param_2 + 3),
                          (LPFILETIME)(param_2 + 5));
      if (BVar5 != 0) {
        in_EAX = CloseHandle(hFile);
        goto LAB_00407ec2;
      }
      pvVar6 = (HANDLE)CloseHandle(hFile);
    }
    uVar4 = (uint)pvVar6 & 0xffffff00;
  }
  return uVar4;
}



wint_t __fastcall FUN_00407ec9(wchar_t *param_1)

{
  char cVar1;
  wint_t _Ch;
  wchar_t *_Memory;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  undefined4 unaff_EDI;
  undefined4 uStack_10;
  wchar_t *apwStack_c [2];
  
  uStack_10 = param_1;
  apwStack_c[0] = param_1;
  do {
    _Ch = getwc(DAT_00422edc);
    if (DAT_00432ef8 == (wchar_t *)0x0) {
      if (DAT_00412021 == '\0') {
        return _Ch;
      }
      if (_Ch != 0x21) {
        return _Ch;
      }
    }
    DAT_00412021 = '\0';
    if (DAT_00432ef8 == (wchar_t *)0x0) {
      _Memory = (wchar_t *)FUN_00408072();
    }
    else {
      ungetwc(_Ch,DAT_00422edc);
      _Memory = DAT_00432ef8;
      DAT_00432ef8 = (wchar_t *)0x0;
    }
    uStack_10 = (wchar_t *)CONCAT13(_Memory != DAT_00432efc,(undefined3)uStack_10);
    pwVar2 = FUN_004081ae(_Memory,(char *)((int)&uStack_10 + 2));
    if (uStack_10._2_1_ == 9) {
      if (DAT_00422ee1 != '\0') {
        FUN_004053c9(DAT_004226a4,0x409);
      }
      cVar1 = FUN_0040a572(pwVar2);
      if (cVar1 == '\x12') {
        return 0x20;
      }
    }
    else if (uStack_10._2_1_ == 10) {
      FUN_004082ff((wint_t *)pwVar2);
    }
    else if (uStack_10._2_1_ == 0xb) {
      FUN_004053c9(DAT_004226a4,0x41a);
    }
    else if (uStack_10._2_1_ == 0xc) {
      iVar3 = _wcsnicmp(pwVar2,L"\\t",2);
      if (iVar3 == 0) {
        FUN_0040ce63(&DAT_0040179c,(char)unaff_EDI);
      }
      FUN_004054a3(0xd);
    }
    else if (uStack_10._2_1_ == 0xd) {
      apwStack_c[0] = (wchar_t *)0x0;
      pwVar2 = wcstok_s(pwVar2,L" \t",apwStack_c);
      pwVar4 = wcstok_s((wchar_t *)0x0,L" \t",apwStack_c);
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_004053c9(DAT_004226a4,0x409);
      }
      uVar5 = FUN_0040aaef((ushort *)pwVar2);
      if (uVar5 != 0) {
        *(byte *)(uVar5 + 0xc) = *(byte *)(uVar5 + 0xc) | 0x10;
      }
    }
    else {
      FUN_0040865e(pwVar2,uStack_10._2_1_);
    }
    DAT_00412021 = '\x01';
    if (uStack_10._3_1_ != '\0') {
      free(_Memory);
    }
    DAT_004226a4 = DAT_004226a4 + 1;
  } while( true );
}



void FUN_00408072(void)

{
  uint uVar1;
  longlong lVar2;
  short sVar3;
  FILE *_File;
  wint_t wVar4;
  wchar_t _Ch;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = FUN_00409be4('\x01');
  sVar3 = (short)uVar5;
  if ((sVar3 == 10) || (sVar3 == -1)) {
    FUN_004053c9(DAT_004226a4,0x3fa);
  }
  uVar5 = 0;
  uVar6 = FUN_00409cc1(sVar3,'\x01');
  while (((_Ch = (wchar_t)uVar6, _Ch != L'#' && (_Ch != L'\n')) && (_Ch != L'\xffff'))) {
    if ((DAT_00432ef4 < 2) || (DAT_00432ef4 - 2 < uVar5)) {
      uVar1 = DAT_00432ef4 + 0x400;
      if (DAT_00432efc == (wchar_t *)0x0) {
        lVar2 = (ulonglong)(DAT_00432ef4 + 0x401) * 2;
        DAT_00432ef4 = uVar1;
        DAT_00432efc = (wchar_t *)
                       FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      }
      else {
        DAT_00432ef4 = uVar1;
        DAT_00432efc = (wchar_t *)FUN_0040abc6(DAT_00432efc,uVar1 * 2 + 2);
      }
    }
    _File = DAT_00422edc;
    DAT_00432efc[uVar5] = _Ch;
    uVar5 = uVar5 + 1;
    wVar4 = getwc(_File);
    uVar6 = FUN_00409cc1(wVar4,'\x01');
  }
  DAT_00432efc[uVar5] = L'\0';
  if (_Ch == L'#') {
    _Ch = getwc(DAT_00422edc);
    while (_Ch != L'\n') {
      if (_Ch == L'\xffff') goto LAB_00408191;
      _Ch = getwc(DAT_00422edc);
    }
  }
  if (_Ch == L'\xffff') {
LAB_00408191:
    ungetwc(_Ch,DAT_00422edc);
  }
  FUN_0040f28e(DAT_00432efc);
  return;
}



wchar_t * __fastcall FUN_004081ae(wchar_t *param_1,char *param_2)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *local_c;
  wchar_t *local_8;
  
  *param_2 = '\0';
  cVar2 = '\t';
  wVar1 = *param_1;
  local_c = param_1;
  while (((wVar1 != L'\0' && (wVar1 != L' ')) && (wVar1 != L'\t'))) {
    local_c = local_c + 1;
    wVar1 = *local_c;
  }
  iVar4 = (int)local_c - (int)param_1 >> 1;
  wVar1 = *local_c;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    local_c = local_c + 1;
    wVar1 = *local_c;
  }
  local_8 = local_c;
  iVar3 = _wcsnicmp(param_1,L"INCLUDE",7);
  if ((iVar3 != 0) || (pwVar5 = local_8, iVar4 != 7)) {
    iVar3 = _wcsnicmp(param_1,L"CMDSWITCHES",0xb);
    if ((iVar3 == 0) && (iVar4 == 0xb)) {
      cVar2 = '\n';
      pwVar5 = local_8;
    }
    else {
      iVar3 = _wcsnicmp(param_1,L"ERROR",5);
      if ((iVar3 == 0) && (iVar4 == 5)) {
        cVar2 = '\v';
        pwVar5 = local_8;
      }
      else {
        iVar3 = _wcsnicmp(param_1,L"MESSAGE",7);
        if ((iVar3 == 0) && (iVar4 == 7)) {
          cVar2 = '\f';
          pwVar5 = local_8;
        }
        else {
          iVar3 = _wcsnicmp(param_1,L"UNDEF",5);
          if ((iVar3 == 0) && (iVar4 == 5)) {
            cVar2 = '\r';
            pwVar5 = local_8;
          }
          else {
            cVar2 = FUN_00408482(param_1,iVar4,&local_c);
            pwVar5 = local_c;
          }
        }
      }
    }
  }
  *param_2 = cVar2;
  if (cVar2 == '\0') {
    FUN_004053c9(DAT_004226a4,0x3f9);
  }
  return pwVar5;
}



void __fastcall FUN_004082ff(wint_t *param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wint_t wVar3;
  
  wVar3 = *param_1;
  do {
    if (wVar3 == 0) {
      return;
    }
    if (wVar3 == 0x2b) {
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      while ((wVar3 != 0 && (wVar3 != 0x2d))) {
        wVar1 = towupper(wVar3);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00422ee1 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLPQRTY",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_004083b3;
          }
          FUN_004053c9(DAT_004226a4,0x400);
        }
        else {
LAB_004083b3:
          FUN_0040c7e6(*param_1,'\x01');
        }
        param_1 = param_1 + 1;
        wVar3 = *param_1;
      }
      if (wVar3 == 0) {
        return;
      }
LAB_004083e9:
      param_1 = param_1 + 1;
      wVar3 = *param_1;
      while ((wVar3 != 0 && (wVar3 != 0x2b))) {
        wVar1 = towupper(wVar3);
        pwVar2 = wcschr(L"DINSU",wVar1);
        if (pwVar2 == (wchar_t *)0x0) {
          if (DAT_00422ee1 != '\0') {
            wVar1 = towupper(*param_1);
            pwVar2 = wcschr(L"ABCEKLMPQRTV",wVar1);
            if (pwVar2 != (wchar_t *)0x0) goto LAB_00408438;
          }
          FUN_004053c9(DAT_004226a4,0x400);
        }
        else {
LAB_00408438:
          FUN_0040c7e6(*param_1,'\0');
        }
        param_1 = param_1 + 1;
        wVar3 = *param_1;
      }
    }
    else {
      if (wVar3 == 0x2d) goto LAB_004083e9;
      if ((wVar3 != 0x20) && (wVar3 != 9)) {
        FUN_004053c9(DAT_004226a4,0x400);
        wVar3 = *param_1;
      }
    }
    if (wVar3 == 0) {
      return;
    }
    param_1 = param_1 + 1;
    wVar3 = *param_1;
  } while( true );
}



undefined __fastcall FUN_00408482(wchar_t *param_1,int param_2,wchar_t **param_3)

{
  wchar_t *_Str1;
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar2 = _wcsnicmp(param_1,L"IF",2);
  if ((iVar2 == 0) && (param_2 == 2)) {
    return 1;
  }
  iVar2 = _wcsnicmp(param_1,L"IFDEF",5);
  if ((iVar2 == 0) && (param_2 == 5)) {
    return 6;
  }
  iVar2 = _wcsnicmp(param_1,L"IFNDEF",6);
  if ((iVar2 == 0) && (param_2 == 6)) {
    return 7;
  }
  iVar2 = _wcsnicmp(param_1,L"ELSE",4);
  if ((iVar2 == 0) && (param_2 == 4)) {
    _Str1 = *param_3;
    wVar1 = *_Str1;
    pwVar4 = _Str1;
    if (wVar1 == L'\0') {
      return 2;
    }
    do {
      if ((wVar1 == L' ') || (wVar1 == L'\t')) break;
      pwVar4 = pwVar4 + 1;
      wVar1 = *pwVar4;
    } while (wVar1 != L'\0');
    iVar2 = (int)pwVar4 - (int)_Str1 >> 1;
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar4 = pwVar4 + 1;
      wVar1 = *pwVar4;
    }
    *param_3 = pwVar4;
    iVar3 = _wcsnicmp(_Str1,L"IF",2);
    if ((iVar3 == 0) && (iVar2 == 2)) {
      return 3;
    }
    iVar3 = _wcsnicmp(_Str1,L"IFDEF",5);
    if ((iVar3 == 0) && (iVar2 == 5)) {
      return 4;
    }
    iVar3 = _wcsnicmp(_Str1,L"IFNDEF",6);
    if (iVar3 != 0) {
      return 0;
    }
    if (iVar2 != 6) {
      return 0;
    }
  }
  else {
    iVar2 = _wcsnicmp(param_1,L"ELSEIF",6);
    if ((iVar2 == 0) && (param_2 == 6)) {
      return 3;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFDEF",9);
    if ((iVar2 == 0) && (param_2 == 9)) {
      return 4;
    }
    iVar2 = _wcsnicmp(param_1,L"ELSEIFNDEF",10);
    if ((iVar2 != 0) || (param_2 != 10)) {
      iVar2 = _wcsnicmp(param_1,L"ENDIF",5);
      if (iVar2 != 0) {
        return 0;
      }
      if (param_2 == 5) {
        return 8;
      }
      return 0;
    }
  }
  return 5;
}



void __fastcall FUN_0040865e(wchar_t *param_1,byte param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  wchar_t *pwVar4;
  wchar_t *extraout_ECX;
  wchar_t *pwVar5;
  
  pwVar5 = DAT_00412024;
  if (param_2 == 1) {
LAB_0040874a:
    if (DAT_00412024 != (wchar_t *)0xf) {
      pwVar4 = (wchar_t *)((int)DAT_00412024 + 1);
      puVar1 = (undefined *)((int)DAT_00412024 + 0x432f01);
      DAT_00412024 = pwVar4;
      *puVar1 = 1;
      if ((pwVar4 != (wchar_t *)0x0) && ((*(byte *)(pwVar5 + 0x219780) & 2) == 0)) {
        *(undefined *)((int)pwVar5 + 0x432f01) = 5;
        pwVar5 = param_1;
        goto LAB_004086b9;
      }
LAB_004086f6:
      cVar2 = FUN_0040e045(param_1,param_2);
      pwVar5 = extraout_ECX;
      if (cVar2 != '\0') {
        *(byte *)(DAT_00412024 + 0x219780) = *(byte *)(DAT_00412024 + 0x219780) | 2;
        return;
      }
      goto LAB_004086b9;
    }
    pwVar5 = (wchar_t *)0x3fb;
LAB_0040869a:
    DAT_00412024 = (wchar_t *)FUN_004053c9(DAT_004226a4,(uint)pwVar5);
LAB_004086a7:
    pwVar4 = (wchar_t *)((int)DAT_00412024 + -1);
    if ((int)pwVar4 < 0) {
      DAT_00412024 = pwVar4;
      return;
    }
    bVar3 = *(byte *)((int)DAT_00412024 + 0x432eff);
    DAT_00412024 = pwVar4;
  }
  else {
    if (param_2 != 2) {
      if (param_2 < 3) {
        return;
      }
      if (param_2 < 6) {
        if ((-1 < (int)DAT_00412024) &&
           (bVar3 = *(byte *)(DAT_00412024 + 0x219780), (bVar3 & 9) != 0)) {
          *(byte *)(DAT_00412024 + 0x219780) = bVar3 & 0xfe | 8;
          if ((bVar3 & 4) != 0) goto LAB_004086b9;
          if ((bVar3 & 2) != 0) {
            *(byte *)(pwVar5 + 0x219780) = bVar3 & 0xfc | 0xc;
            goto LAB_004086b9;
          }
          goto LAB_004086f6;
        }
        goto LAB_0040870c;
      }
      if (param_2 < 8) goto LAB_0040874a;
      if (param_2 != 8) {
        return;
      }
      pwVar5 = param_1;
      if ((int)DAT_00412024 < 0) {
        pwVar5 = (wchar_t *)0x401;
        goto LAB_0040869a;
      }
      goto LAB_004086a7;
    }
    if (((int)DAT_00412024 < 0) || (bVar3 = *(byte *)(DAT_00412024 + 0x219780), (bVar3 & 9) == 0)) {
LAB_0040870c:
      pwVar5 = (wchar_t *)0x3fd;
      goto LAB_0040869a;
    }
    *(byte *)(DAT_00412024 + 0x219780) = bVar3 & 0xf6;
    if ((bVar3 & 4) != 0) goto LAB_004086b9;
    if ((bVar3 & 2) == 0) {
      bVar3 = bVar3 & 0xf6 | 2;
    }
    else {
      bVar3 = bVar3 & 0xf4;
    }
    *(byte *)(pwVar5 + 0x219780) = bVar3;
  }
  if ((bVar3 & 2) != 0) {
    return;
  }
LAB_004086b9:
  FUN_00408787(pwVar5);
  return;
}



void __fastcall FUN_00408787(undefined4 param_1)

{
  wint_t wVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  do {
    wVar1 = getwc(DAT_00422edc);
    if (wVar1 != 0x21) {
      while (wVar1 != 0xffff) {
        DAT_004226a4 = DAT_004226a4 + 1;
        while( true ) {
          if (wVar1 == 0x5c) {
            uVar2 = FUN_00409cc1(0x5c,'\x01');
            wVar1 = (wint_t)uVar2;
            if ((wVar1 == 0x21) && (DAT_00412021 != '\0')) goto LAB_00408845;
            DAT_00412021 = '\0';
          }
          if (wVar1 == 0x23) goto LAB_0040880d;
          if (wVar1 == 10) break;
          if (wVar1 == 0xffff) goto LAB_00408840;
          wVar1 = getwc(DAT_00422edc);
        }
LAB_00408821:
        if (wVar1 == 0xffff) break;
        if (wVar1 == 0x21) goto LAB_00408845;
        wVar1 = getwc(DAT_00422edc);
        if (wVar1 == 0x21) break;
      }
LAB_00408840:
      if (wVar1 != 0x21) {
        if (wVar1 == 0xffff) {
          FUN_004053c9(DAT_004226a4,0x3fc);
        }
        return;
      }
    }
LAB_00408845:
    if ((DAT_00432ef8 != (wchar_t *)0x0) && (DAT_00432ef8 != DAT_00432efc)) {
      free(DAT_00432ef8);
    }
    DAT_00432ef8 = (wchar_t *)FUN_00408072();
    FUN_004081ae(DAT_00432ef8,(char *)((int)&uStack_8 + 3));
    if (uStack_8._3_1_ < 9) {
      return;
    }
    DAT_004226a4 = DAT_004226a4 + 1;
  } while( true );
LAB_0040880d:
  wVar1 = getwc(DAT_00422edc);
  if (wVar1 == 10) goto LAB_00408821;
  if (wVar1 == 0xffff) goto LAB_00408840;
  goto LAB_0040880d;
}



uint FUN_0040889f(void)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *local_8;
  
  DAT_004226a4 = 0;
  do {
    bVar2 = false;
    pwVar3 = fgetws(&DAT_004226c0,0x400,DAT_00422edc);
    if (pwVar3 == (wchar_t *)0x0) {
      uVar4 = feof(DAT_00422edc);
      if (uVar4 == 0) {
        DAT_004226b0 = DAT_004226a4;
        uVar4 = FUN_004053c9(0,0x41d);
      }
      return uVar4 & 0xffffff00;
    }
    if (DAT_004226c0 == 0x5b) {
      local_8 = (wchar_t *)0x0;
      pwVar3 = &DAT_004226c2;
      while ((pwVar3 = wcstok_s(pwVar3,L" \t\n",&local_8), pwVar3 != (wchar_t *)0x0 && (!bVar2))) {
        pwVar5 = pwVar3;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        iVar6 = (int)pwVar5 - (int)(pwVar3 + 1) >> 1;
        if (pwVar3[iVar6 + -1] == L']') {
          bVar2 = true;
          pwVar3[iVar6 + -1] = L'\0';
        }
        iVar6 = _wcsicmp(pwVar3,L"nmake");
        if (iVar6 == 0) {
          return 1;
        }
        pwVar3 = (wchar_t *)0x0;
      }
    }
    DAT_004226a4 = DAT_004226a4 + 1;
  } while( true );
}



wchar_t * __fastcall FUN_00408988(wchar_t *param_1,int param_2)

{
  wchar_t *pwVar1;
  FILE *_File;
  wchar_t _Ch;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar1 = param_1 + param_2;
  pwVar3 = param_1;
  while( true ) {
    _Ch = FUN_00407ec9(param_1);
    if (_Ch == L'\0') {
      return pwVar3;
    }
    param_1 = (wchar_t *)0xffff;
    if (_Ch == L'\xffff') {
      *pwVar3 = L'\0';
      return (wchar_t *)0x0;
    }
    *pwVar3 = _Ch;
    _File = DAT_00422edc;
    pwVar2 = pwVar3 + 1;
    if (pwVar2 == pwVar1) {
      *pwVar3 = L'\0';
      ungetwc(_Ch,_File);
      return pwVar2;
    }
    if (_Ch == L'\n') break;
    DAT_00412021 = 0;
    pwVar3 = pwVar2;
  }
  DAT_004226a4 = DAT_004226a4 + 1;
  DAT_00412021 = 1;
  *pwVar2 = L'\0';
  return pwVar2;
}



void __fastcall FUN_004089f6(wchar_t *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1;
  while( true ) {
    pwVar3 = wcschr(pwVar3,L'\n');
    if ((pwVar3 == (wchar_t *)0x0) || ((param_1 < pwVar3 && (pwVar3[-1] != L'^')))) break;
    pwVar3 = pwVar3 + 1;
    pwVar1 = fgetws(pwVar3,0x400 - ((int)pwVar3 - (int)param_1 >> 1),DAT_00422edc);
    if (pwVar1 == (wchar_t *)0x0) {
      iVar2 = feof(DAT_00422edc);
      if (iVar2 != 0) {
        FUN_004053c9(DAT_004226a4,0x409);
      }
      FUN_004053c9(DAT_004226a4,0x41d);
    }
    DAT_004226a4 = DAT_004226a4 + 1;
  }
  return;
}



undefined2 * __fastcall FUN_00408a8a(wchar_t **param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  
  bVar2 = false;
  pwVar5 = &DAT_00433400;
  bVar3 = false;
  _Str = *param_1;
  do {
    pwVar4 = wcschr(_Str,L'<');
    if (pwVar4 == (wchar_t *)0x0) {
      return (undefined2 *)0x0;
    }
    _Str = pwVar4 + 1;
    if (*_Str == L'<') {
      bVar2 = true;
    }
  } while (!bVar2);
  pwVar4 = pwVar4 + 2;
  wVar1 = *pwVar4;
  do {
    while( true ) {
      if (((((wVar1 == L'\0') || (wVar1 == L'>')) || (wVar1 == L'<')) ||
          ((wVar1 == L'^' || (wVar1 == L',')))) || ((wVar1 == L'\t' || (wVar1 == L'\n'))))
      goto LAB_00408bb8;
      if (wVar1 == L'\"') {
        bVar3 = !bVar3;
      }
      if ((wVar1 == L' ') && (!bVar3)) goto LAB_00408bb8;
      if ((wVar1 == L'$') && (pwVar4[1] == L'(')) break;
      *pwVar5 = wVar1;
      pwVar5 = pwVar5 + 1;
      pwVar4 = pwVar4 + 1;
      wVar1 = *pwVar4;
    }
    pwVar4 = pwVar4 + 1;
    *pwVar5 = L'$';
    pwVar5 = pwVar5 + 1;
    *pwVar5 = L'(';
    wVar1 = *pwVar4;
    while ((wVar1 != L'\n' && (wVar1 != L')'))) {
      pwVar4 = pwVar4 + 1;
      *pwVar5 = wVar1;
      pwVar5 = pwVar5 + 1;
      wVar1 = *pwVar4;
    }
  } while (wVar1 != L'\n');
LAB_00408bb8:
  *pwVar5 = L'\0';
  *param_1 = pwVar4;
  return &DAT_00433400;
}



void __fastcall FUN_00408bcd(wchar_t *param_1,void **param_2,wchar_t **param_3)

{
  uint uVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  wchar_t *pwVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  short *psVar8;
  void *pvVar9;
  wchar_t *pwVar10;
  wchar_t wVar11;
  void *local_824;
  uint local_820;
  wchar_t *local_81c;
  void *local_818;
  char local_811;
  wchar_t local_810;
  wchar_t local_80e [1025];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_824 = (void *)0x0;
  local_820 = 0;
  local_811 = '\0';
  local_818 = (void *)0x0;
  wcscpy_s(&local_810,0x400,L"<<");
  pwVar4 = FUN_00408988(local_80e + 1,0x3fe);
  if (pwVar4 == (wchar_t *)0x0) {
    iVar5 = feof(DAT_00422edc);
    if (iVar5 != 0) {
      FUN_004053c9(DAT_004226a4,0x409);
    }
    FUN_004053c9(DAT_004226a4,0x41d);
  }
  local_81c = &local_810;
  FUN_004089f6(local_81c);
  while (psVar8 = FUN_00408a8a(&local_81c), psVar8 != (short *)0x0) {
    ppiVar6 = (int **)FUN_0040aba8(0xc);
    piVar7 = (int *)FUN_0040e8fe(psVar8);
    ppiVar6[1] = piVar7;
    pppiVar2 = &DAT_00433320;
    for (pppiVar3 = (int ***)DAT_00433320; pppiVar3 != (int ***)0x0; pppiVar3 = (int ***)*pppiVar3)
    {
      pppiVar2 = pppiVar3;
    }
    *pppiVar2 = ppiVar6;
  }
  if (DAT_00433320 != (int **)0x0) {
    local_81c = (wchar_t *)wcsncpy_s_exref;
    do {
      while( true ) {
        pwVar4 = &local_810;
        wVar11 = local_810;
        do {
          pwVar4 = pwVar4 + 1;
          *param_1 = wVar11;
          param_1 = param_1 + 1;
          if (param_1 == *param_3) {
            if (local_818 == (void *)0x0) {
              pvVar9 = FUN_0040ab83(0x1000);
              local_818 = pvVar9;
              (*(code *)local_81c)(pvVar9,0x800,*param_2,0x400);
              param_1 = (wchar_t *)((int)pvVar9 + 0x800);
              local_820 = 0x800;
              pwVar10 = (wchar_t *)((int)pvVar9 + 0x1000);
            }
            else {
              uVar1 = local_820 + 0x400;
              if ((uVar1 < local_820) ||
                 (local_824 = FUN_0040abc6(local_818,local_820 * 2 + 0x800),
                 local_824 == (void *)0x0)) {
                FUN_004053c9(DAT_004226a4,0x419);
              }
              param_1 = (wchar_t *)((int)local_824 + local_820 * 2);
              pwVar10 = (wchar_t *)((int)local_824 + uVar1 * 2);
              pvVar9 = local_824;
              local_820 = uVar1;
              local_818 = local_824;
            }
            *param_3 = pwVar10;
            *param_2 = pvVar9;
          }
          wVar11 = *pwVar4;
        } while (wVar11 != L'\0');
        if (((local_811 != '\0') && (local_810 == L'<')) && (local_80e[0] == L'<')) break;
        local_811 = '\x01';
        pwVar4 = FUN_00408988(&local_810,0x400);
        if (pwVar4 == (wchar_t *)0x0) {
          iVar5 = feof(DAT_00422edc);
          if (iVar5 != 0) {
            FUN_004053c9(DAT_004226a4,0x409);
          }
          FUN_004053c9(DAT_004226a4,0x41d);
        }
      }
      if ((*DAT_00433320 != (int *)0x0) &&
         (pwVar4 = FUN_00408988(&local_810,0x400), pwVar4 == (wchar_t *)0x0)) {
        iVar5 = feof(DAT_00422edc);
        if (iVar5 != 0) {
          FUN_004053c9(DAT_004226a4,0x409);
        }
        FUN_004053c9(DAT_004226a4,0x41d);
      }
      DAT_00433320 = (int **)*DAT_00433320;
    } while (DAT_00433320 != (int **)0x0);
  }
  *param_1 = L'\0';
  ___security_check_cookie_4(local_c ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __fastcall FUN_00408ee4(short **param_1,short *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_34;
  wchar_t *pwStack_30;
  rsize_t rStack_2c;
  wchar_t *pwStack_28;
  short **local_14;
  int local_10;
  short *local_c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  psVar3 = *param_1;
  psVar2 = psVar3;
  do {
    sVar4 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar4 != 0);
  psVar5 = param_2;
  do {
    sVar4 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar4 != 0);
  iVar8 = ((int)psVar2 - (int)(psVar3 + 1) >> 1) + ((int)psVar5 - (int)(param_2 + 1) >> 1) + -1;
  pwStack_28 = (wchar_t *)0x408f39;
  iVar1 = iVar8 * -2;
  psVar2 = (short *)(&stack0xffffffdc + iVar1);
  psVar5 = (short *)(&stack0xffffffdc + iVar1);
  local_14 = param_1;
  local_10 = iVar8;
  local_c = param_2;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x3c;
  uVar7 = *(undefined4 *)((int)&pwStack_28 + iVar1);
  while( true ) {
    sVar6 = (short)uVar7;
    sVar4 = *psVar3;
    if ((*psVar3 == sVar6) && (sVar4 = sVar6, psVar3[1] == sVar6)) break;
    *psVar2 = sVar4;
    psVar3 = psVar3 + 1;
    psVar2 = psVar2 + 1;
  }
  *(short **)((int)&pwStack_28 + iVar1) = local_c;
  *(int *)((int)&rStack_2c + iVar1) = iVar8;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *psVar2 = 0;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x408f6d;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  *(short **)((int)&pwStack_28 + iVar1) = psVar3 + 2;
  *(int *)((int)&rStack_2c + iVar1) = local_10;
  *(undefined **)((int)&pwStack_30 + iVar1) = &stack0xffffffdc + iVar1;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x408f7a;
  wcscat_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  do {
    sVar4 = *psVar5;
    psVar5 = psVar5 + 1;
  } while (sVar4 != 0);
  iVar8 = ((int)psVar5 - (int)(&stack0xffffffde + iVar1) >> 1) + 1;
  psVar3 = *local_14;
  *(undefined4 *)((int)&pwStack_28 + iVar1) = 0x408fa1;
  psVar3 = (short *)FUN_0040abc6(psVar3,iVar8 * 2);
  *(undefined **)((int)&pwStack_28 + iVar1) = &stack0xffffffdc + iVar1;
  *(int *)((int)&rStack_2c + iVar1) = iVar8;
  *(short **)((int)&pwStack_30 + iVar1) = psVar3;
  *local_14 = psVar3;
  *(undefined4 *)((int)&uStack_34 + iVar1) = 0x408fac;
  wcscpy_s(*(wchar_t **)((int)&pwStack_30 + iVar1),*(rsize_t *)((int)&rStack_2c + iVar1),
           *(wchar_t **)((int)&pwStack_28 + iVar1));
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall
FUN_00408fc3(wchar_t *param_1,short *param_2,char param_3,undefined param_4,undefined param_5,
            undefined param_6,undefined param_7,undefined param_8,undefined param_9,
            undefined param_10,undefined1 param_11)

{
  short sVar1;
  wchar_t wVar2;
  wint_t _C;
  code *pcVar3;
  short *psVar4;
  undefined uVar5;
  int iVar6;
  uint _MaxCount;
  int iVar7;
  wchar_t *pwVar8;
  short *psVar9;
  int iVar10;
  short *local_c;
  
  wVar2 = *param_1;
  pwVar8 = param_1;
  while( true ) {
    if (wVar2 == L'\0') {
      uVar5 = 0xc0;
      if (param_3 == '\0') {
        uVar5 = 0x6c;
      }
      FUN_0040ce63(L"\techo. %s %s\n",uVar5);
      return;
    }
    iVar6 = iswspace(wVar2);
    if (iVar6 == 0) break;
    pwVar8 = pwVar8 + 1;
    wVar2 = *pwVar8;
  }
  psVar4 = param_2 + 1;
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  _MaxCount = 0x3f4 - ((int)param_2 - (int)psVar4 >> 1);
  wVar2 = *param_1;
  while( true ) {
    if (wVar2 == L'\0') {
      return;
    }
    wcsncpy_s(&DAT_00436670,0x400,param_1,_MaxCount);
    psVar4 = &DAT_00436670;
    do {
      psVar9 = psVar4;
      psVar4 = psVar9 + 1;
    } while (*psVar9 != 0);
    iVar6 = (int)(psVar9 + -0x21b338) >> 1;
    pwVar8 = param_1;
    do {
      wVar2 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (wVar2 != L'\0');
    if ((_MaxCount < (uint)((int)pwVar8 - (int)(param_1 + 1) >> 1)) &&
       (local_c = &DAT_00436670, DAT_00436670 != 0)) {
      iVar10 = 0;
      _C = DAT_00436670;
      do {
        iVar7 = iswspace(_C);
        if (iVar7 != 0) {
          iVar6 = (iVar10 >> 1) + 1;
        }
        iVar10 = iVar10 + 2;
        local_c = local_c + 1;
        _C = *local_c;
      } while (_C != 0);
    }
    if (0x7ff < (uint)(iVar6 * 2)) break;
    (&DAT_00436670)[iVar6] = 0;
    FUN_0040ce63(L"\techo %s %s %s\n",0x70);
    param_1 = param_1 + iVar6;
    wVar2 = *param_1;
  }
  ___report_rangecheckfailure();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



void __fastcall
FUN_00409134(FILE *param_1,short *param_2,wchar_t **param_3,char param_4,undefined *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  size_t _Size;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  LPCWSTR lpWideCharStr;
  undefined4 unaff_EDI;
  undefined in_stack_ffffffe4;
  wchar_t *in_stack_ffffffe8;
  wchar_t *in_stack_ffffffec;
  short *psVar5;
  
  psVar5 = param_2;
  pwVar2 = wcsstr(*param_3,L"<<");
  bVar1 = false;
  if ((pwVar2 != (wchar_t *)0x0) && ((pwVar2 == *param_3 || (pwVar2[-1] == L'\n')))) {
    pwVar3 = wcschr(pwVar2 + 2,L'\n');
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\0';
    }
    in_stack_ffffffe8 = (wchar_t *)FUN_0040e8fe(pwVar2 + 2);
    if (pwVar3 != (wchar_t *)0x0) {
      *pwVar3 = L'\n';
    }
    in_stack_ffffffec = (wchar_t *)0x0;
    pwVar2 = wcstok_s(in_stack_ffffffe8,L", \t",(wchar_t **)&stack0xffffffec);
    param_2 = psVar5;
    while (pwVar2 != (wchar_t *)0x0) {
      iVar4 = _wcsicmp(pwVar2,L"keep");
      if (iVar4 == 0) {
        *param_5 = 1;
      }
      else {
        iVar4 = _wcsicmp(pwVar2,L"nokeep");
        if (iVar4 == 0) {
          *param_5 = 0;
        }
        else {
          iVar4 = _wcsicmp(pwVar2,L"unicode");
          if (iVar4 == 0) {
            bVar1 = true;
          }
          else {
            FUN_004053c9(DAT_004226a4,0x446);
          }
        }
      }
      pwVar2 = wcstok_s((wchar_t *)0x0,L", \t",(wchar_t **)&stack0xffffffec);
    }
    free(in_stack_ffffffe8);
    psVar5 = param_2;
    if (bVar1) {
      fwrite(&DAT_00401938,2,1,param_1);
      psVar5 = param_2;
    }
  }
  iVar4 = wcsncmp(*param_3,L"<<",2);
  if (iVar4 != 0) {
    param_5 = (undefined *)((uint)param_5 & 0xffffff00);
    do {
      pwVar2 = wcschr(*param_3,L'\n');
      if (pwVar2 == (wchar_t *)0x0) {
        return;
      }
      if (param_4 != '\0') {
        pwVar3 = *param_3;
        *pwVar2 = L'\0';
        FUN_00408fc3(pwVar3,param_2,(char)param_5,(char)unaff_EDI,(char)unaff_ESI,(char)unaff_EBX,
                     in_stack_ffffffe4,(CHAR)in_stack_ffffffe8,(char)in_stack_ffffffec,(char)psVar5,
                     (char)((uint)param_5 >> 0x18));
        *pwVar2 = L'\n';
      }
      param_2 = psVar5;
      lpWideCharStr = *param_3;
      if (bVar1) {
        fwrite(lpWideCharStr,(int)pwVar2 - (int)lpWideCharStr >> 1,2,param_1);
        fwrite(&DAT_00401934,4,1,param_1);
      }
      else {
        for (; lpWideCharStr < pwVar2; lpWideCharStr = lpWideCharStr + 1) {
          _Size = WideCharToMultiByte(0,0,lpWideCharStr,1,&stack0xffffffe8,4,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
          if (_Size != 0) {
            fwrite(&stack0xffffffe8,_Size,1,param_1);
          }
        }
        fwrite(&DAT_00401930,2,1,param_1);
      }
      param_5 = (undefined *)CONCAT31(param_5._1_3_,1);
      *param_3 = pwVar2 + 1;
      iVar4 = wcsncmp(pwVar2 + 1,L"<<",2);
      psVar5 = param_2;
    } while (iVar4 != 0);
  }
  *param_3 = *param_3 + 2;
  return;
}



void __fastcall FUN_00409358(wchar_t *param_1,wchar_t **param_2,int **param_3,char param_4)

{
  wchar_t wVar1;
  short sVar2;
  code *pcVar3;
  int **ppiVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int **_Memory;
  short *psVar7;
  errno_t eVar8;
  UINT UVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int **ppiVar13;
  int iVar14;
  size_t local_434;
  wchar_t *local_430;
  wchar_t *local_42c;
  FILE *local_428;
  int **local_424;
  char local_41d;
  WCHAR local_41c [260];
  wchar_t local_214 [262];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_424 = param_3;
  pwVar5 = wcschr(param_1,L'\n');
  if (pwVar5 == (wchar_t *)0x0) {
    pwVar5 = (wchar_t *)FUN_0040e8fe(param_1);
    *param_2 = pwVar5;
  }
  else {
    *pwVar5 = L'\0';
    pwVar6 = (wchar_t *)FUN_0040f2f6(param_1,-1,local_424);
    *param_2 = pwVar6;
    *pwVar5 = L'\n';
    local_430 = *param_2;
    if (local_430 == param_1) {
      local_430 = (wchar_t *)FUN_0040e8fe(param_1);
      *param_2 = local_430;
    }
    _Memory = (int **)FUN_0040f2f6(pwVar5 + 1,-1,local_424);
    local_424 = _Memory;
    psVar7 = FUN_00408a8a(&local_430);
    while (psVar7 != (short *)0x0) {
      local_41d = '\0';
      pwVar6 = (wchar_t *)FUN_0040e8fe(psVar7);
      local_42c = pwVar6;
      if (*pwVar6 == L'\0') {
        local_434 = 0;
        eVar8 = _wgetenv_s(&local_434,local_214,0x103,L"TMP");
        if ((eVar8 != 0) || (local_434 == 0)) {
          wcscpy_s(local_214,0x103,L".");
        }
        local_428 = (FILE *)0x0;
        UVar9 = GetTempFileNameW(local_214,L"nm",0,local_41c);
        if (UVar9 != 0) {
          wcscpy_s(local_214,0x103,local_41c);
          local_428 = _wfsopen(local_214,L"wb",0x20);
        }
        if (local_428 == (FILE *)0x0) {
          FUN_004053c9(DAT_004226a4,0x41e);
        }
        pwVar10 = wcschr(local_214,L' ');
        if ((pwVar10 != (wchar_t *)0x0) &&
           (pwVar10 = wcschr(local_214,L'\"'), pwVar10 == (wchar_t *)0x0)) {
          pwVar6 = local_214;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          iVar14 = (int)pwVar6 - (int)(local_214 + 1) >> 1;
          memmove(local_214 + 1,local_214,iVar14 * 2);
          local_214[0] = L'\"';
          local_214[iVar14 + 1] = L'\"';
          if (0x205 < iVar14 * 2 + 4U) {
            ___report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_214[iVar14 + 2] = L'\0';
          pwVar6 = local_42c;
        }
        FUN_00408ee4(param_2,local_214);
        free(pwVar6);
        local_42c = (wchar_t *)FUN_0040e8fe(local_214);
        pwVar6 = local_42c;
      }
      else {
        local_428 = (FILE *)FUN_0041063a(pwVar6,L"wb");
        if (local_428 == (FILE *)0x0) {
          FUN_004053c9(DAT_004226a4,0x41e);
        }
        else {
          pwVar10 = wcschr(*param_2,L'<');
          pwVar6 = pwVar10 + 1;
          wVar1 = *pwVar6;
          while (wVar1 != L'<') {
            pwVar10 = wcschr(pwVar6,L'<');
            pwVar6 = pwVar10 + 1;
            wVar1 = *pwVar6;
          }
          local_430 = pwVar10 + 3;
          pwVar6 = pwVar10 + 2;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          memmove(pwVar10,pwVar10 + 2,((int)pwVar6 - (int)local_430 >> 1) * 2 + 2);
          pwVar6 = local_42c;
        }
      }
      local_430 = *param_2;
      FUN_00409134(local_428,pwVar6,(wchar_t **)&local_424,param_4,&local_41d);
      ppiVar4 = local_424;
      pwVar6 = wcschr((wchar_t *)local_424,L'\n');
      if (pwVar6 == (wchar_t *)0x0) {
        ppiVar13 = ppiVar4;
        do {
          sVar2 = *(short *)ppiVar13;
          ppiVar13 = (int **)((int)ppiVar13 + 2);
        } while (sVar2 != 0);
        local_424 = (int **)((int)ppiVar4 + ((int)ppiVar13 - ((int)ppiVar4 + 2) >> 1) * 2);
      }
      else {
        local_424 = (int **)(pwVar6 + 1);
      }
      fclose(local_428);
      if (local_41d == '\0') {
        puVar11 = FUN_0040e8ac();
        pvVar12 = FUN_0040e8fe(local_42c);
        puVar11[1] = pvVar12;
        FUN_0040ea03(&DAT_004333f4,puVar11);
      }
      free(local_42c);
      psVar7 = FUN_00408a8a(&local_430);
    }
    if (_Memory != (int **)(pwVar5 + 1)) {
      free(_Memory);
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_00409751(void)

{
  int iVar1;
  
  iVar1 = fclose(DAT_00422edc);
  if (iVar1 == 0xffff) {
    FUN_004053c9(0,0x424);
  }
  free(DAT_00422ee4);
  DAT_00433324 = DAT_00433324 + -1;
  DAT_00422edc = (FILE *)*(undefined4 *)(&DAT_00433338 + DAT_00433324 * 0xc);
  DAT_00422ee4 = (void *)(&DAT_00433334)[DAT_00433324 * 3];
  DAT_004226a4 = *(undefined4 *)(&DAT_00433330 + DAT_00433324 * 0xc);
  return;
}



void __fastcall FUN_004097b9(char param_1)

{
  wint_t wVar1;
  undefined3 in_register_00000005;
  wchar_t *pwVar2;
  wchar_t *extraout_ECX;
  
  pwVar2 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  while( true ) {
    DAT_00412021 = 0;
    do {
      if (param_1 == '\0') {
        wVar1 = FUN_00407ec9(pwVar2);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00422edc);
      }
      pwVar2 = (wchar_t *)0xffff;
      if (wVar1 == 0xffff) {
        return;
      }
    } while (wVar1 != 10);
    DAT_00412021 = 1;
    if (param_1 == '\0') {
      wVar1 = FUN_00407ec9((wchar_t *)0xffff);
      pwVar2 = extraout_ECX;
    }
    else {
      pwVar2 = DAT_00422edc;
      wVar1 = getwc((FILE *)DAT_00422edc);
    }
    if (((wVar1 != 0x3b) || (DAT_00422ee1 == '\0')) && (wVar1 != 0x23)) break;
    DAT_004226a4 = DAT_004226a4 + 1;
  }
  ungetwc(wVar1,(FILE *)DAT_00422edc);
  return;
}



void __fastcall FUN_0040983e(short param_1)

{
  code *pcVar1;
  short *psVar2;
  wchar_t *pwVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  
  if ((param_1 == 10) || (param_1 == -1)) {
    FUN_004053c9(DAT_004226a4,0x407);
  }
  DAT_004226c0 = param_1;
  pwVar3 = fgetws(&DAT_004226c2,0x3ff,DAT_00422edc);
  if (pwVar3 == (wchar_t *)0x0) {
    iVar4 = feof(DAT_00422edc);
    if (iVar4 != 0) {
      FUN_004053c9(DAT_004226a4,0x409);
    }
    FUN_004053c9(DAT_004226a4,0x41d);
  }
  psVar5 = &DAT_004226c0;
  psVar2 = &DAT_004226c0;
  do {
    psVar6 = psVar2;
    psVar2 = psVar6 + 1;
  } while (*psVar6 != 0);
  iVar4 = (int)(psVar6 + -0x211360) >> 1;
  if ((&DAT_004226be)[iVar4] == 10) {
    if (0x7ff < iVar4 * 2 - 2U) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (&DAT_004226be)[iVar4] = 0;
  }
  for (; (*psVar5 == L' ' || (*psVar5 == L'\t')); psVar5 = psVar5 + 1) {
  }
  FUN_0040a572(psVar5);
  return;
}



undefined __fastcall FUN_00409922(wchar_t *param_1,undefined2 *param_2,wchar_t *param_3)

{
  undefined uVar1;
  wint_t wVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  
  do {
    uVar3 = (uint)param_1 & 0xffff;
    if (uVar3 != 10) {
      if (uVar3 != 0x3a) {
        if (uVar3 == 0x3b) {
          DAT_00412021 = '\0';
          return 0x13;
        }
        if (uVar3 == 0x3d) {
          DAT_00412021 = '\0';
          return 0x16;
        }
        if (uVar3 == 0x5b) {
          if ((DAT_00422ee1 != '\0') && (DAT_00412021 != '\0')) {
            return 0x17;
          }
        }
        else if (uVar3 != 0x5e) {
          if (uVar3 != 0xffff) goto LAB_00409a79;
          iVar4 = feof(DAT_00422edc);
          if (iVar4 == 0) {
            FUN_004053c9(DAT_004226a4,0x40e);
          }
          if (DAT_00433324 == 0) {
            if (DAT_00412024 < 0) {
              return 0x17;
            }
            param_1 = (wchar_t *)0x3fc;
            FUN_004053c9(DAT_004226a4,0x3fc);
          }
          else {
            FUN_00409751();
            param_1 = extraout_ECX;
          }
          goto LAB_004099d1;
        }
        ungetwc((wint_t)param_1,DAT_00422edc);
        param_2 = param_2 + -1;
LAB_00409a79:
        FUN_0040a2d0(param_2 + -1,param_3);
        if ((DAT_00412021 == '\0') || (iVar4 = _wcsicmp(&DAT_004226c0,L"include"), iVar4 != 0)) {
          DAT_00412021 = '\0';
        }
        else {
          DAT_00412021 = '\0';
          uVar3 = FUN_00409be4('\0');
          uVar3 = uVar3 & 0xffff;
          if ((uVar3 != 0x3a) && (uVar3 != 0x3d)) {
            if (DAT_00422ee1 != '\0') {
              FUN_004053c9(DAT_004226a4,0x409);
            }
            uVar1 = FUN_0040983e((wint_t)uVar3);
            return uVar1;
          }
          ungetwc((wint_t)uVar3,DAT_00422edc);
        }
        return 0x10;
      }
      DAT_00412021 = '\0';
      wVar2 = FUN_00407ec9(param_1);
      param_1 = (wchar_t *)(uint)wVar2;
      if (wVar2 == 0x3a) {
        *param_2 = 0x3a;
        param_2[1] = 0;
        return 0x15;
      }
      uVar1 = 0x14;
      goto LAB_00409a41;
    }
LAB_004099d1:
    DAT_004226a4 = DAT_004226a4 + 1;
    DAT_00412021 = '\x01';
    wVar2 = FUN_00407ec9(param_1);
    param_1 = (wchar_t *)(uint)wVar2;
    if (((param_1 == (wchar_t *)0x3b) && (DAT_00422ee1 != '\0')) || (param_1 == (wchar_t *)0x23)) {
      FUN_004097b9('\0');
      DAT_004226a4 = DAT_004226a4 + 1;
      DAT_00412021 = '\x01';
      wVar2 = FUN_00407ec9(extraout_ECX_00);
      param_1 = (wchar_t *)(uint)wVar2;
    }
    sVar5 = (short)param_1;
    if ((sVar5 == 0x20) || (sVar5 == 9)) {
      DAT_00412021 = '\0';
      return 0x12;
    }
    DAT_00412021 = '\x01';
  } while (sVar5 == -1);
  uVar1 = 0x11;
LAB_00409a41:
  ungetwc((wint_t)param_1,DAT_00422edc);
  return uVar1;
}



char __fastcall FUN_00409b3f(wchar_t *param_1,char param_2)

{
  char cVar1;
  wint_t _Ch;
  uint uVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  
  if (DAT_00422ee2 == '\0') {
    if ((param_2 == '\x18') || (param_2 == '\x19')) {
      FUN_00409d72((void *)CONCAT31((int3)((uint)param_1 >> 8),param_2),(wchar_t *)&DAT_00422ec0);
      return param_2;
    }
    uVar2 = FUN_00409be4('\0');
    pwVar3 = (wchar_t *)(uVar2 & 0xffff);
    puVar4 = &DAT_004226c2;
    DAT_004226c0 = SUB42(pwVar3,0);
    DAT_004226c2 = 0;
  }
  else {
    DAT_004226a4 = DAT_004226a4 + 1;
    DAT_00422ee2 = '\0';
    _Ch = FUN_00407ec9(param_1);
    if ((_Ch == 0x20) || (_Ch == 9)) {
      DAT_00412021 = 0;
      return '\x12';
    }
    pwVar3 = (wchar_t *)0xffff;
    DAT_00412021 = 1;
    if (_Ch != 0xffff) {
      ungetwc(_Ch,DAT_00422edc);
      return '\x11';
    }
    puVar4 = &DAT_004226c0;
  }
  cVar1 = FUN_00409922(pwVar3,puVar4,(wchar_t *)&DAT_00422ec0);
  return cVar1;
}



uint __fastcall FUN_00409be4(char param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined3 in_register_00000005;
  wchar_t *pwVar3;
  
  pwVar3 = (wchar_t *)CONCAT31(in_register_00000005,param_1);
  do {
    if (param_1 == '\0') {
      uVar1 = FUN_00407ec9(pwVar3);
    }
    else {
      uVar1 = getwc(DAT_00422edc);
    }
    uVar2 = (uint)uVar1;
    pwVar3 = (wchar_t *)0x20;
    if (((uVar1 == 0x20) || (pwVar3 = (wchar_t *)0x9, uVar1 == 9)) || (uVar1 == 0x5e)) {
      if (uVar1 == 0x5e) {
        if (param_1 == '\0') {
          uVar1 = FUN_00407ec9(pwVar3);
        }
        else {
          uVar1 = getwc(DAT_00422edc);
        }
        uVar2 = (uint)uVar1;
        if ((uVar1 != 0x20) && (uVar1 != 9)) {
          ungetwc(uVar1,DAT_00422edc);
          uVar2 = 0x5e;
          break;
        }
      }
      DAT_00412021 = '\0';
    }
    if ((short)uVar2 == 0x5c) {
      uVar2 = FUN_00409cc1(0x5c,param_1);
      uVar2 = uVar2 & 0xffff;
    }
    pwVar3 = (wchar_t *)0x20;
  } while (((short)uVar2 == 0x20) || (pwVar3 = (wchar_t *)0x9, (short)uVar2 == 9));
  if ((short)uVar2 == 0x3b) {
    if (DAT_00412021 == '\0') {
      return uVar2;
    }
    if (DAT_00422ee1 != '\0') goto LAB_00409cad;
  }
  if ((short)uVar2 != 0x23) {
    return uVar2;
  }
LAB_00409cad:
  FUN_004097b9(param_1);
  DAT_00412021 = '\x01';
  return 10;
}



undefined4 __fastcall FUN_00409cc1(short param_1,char param_2)

{
  wint_t wVar1;
  undefined4 in_EAX;
  undefined2 uVar3;
  uint uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 in_register_00000006;
  wchar_t *extraout_ECX;
  wchar_t *pwVar4;
  wchar_t *extraout_ECX_00;
  undefined2 extraout_var;
  
  uVar3 = (undefined2)((uint)in_EAX >> 0x10);
  pwVar4 = (wchar_t *)CONCAT22(in_register_00000006,param_1);
  if (param_1 == 0x5c) {
    do {
      if (param_2 == '\0') {
        wVar1 = FUN_00407ec9(pwVar4);
        pwVar4 = extraout_ECX;
      }
      else {
        pwVar4 = DAT_00422edc;
        wVar1 = getwc((FILE *)DAT_00422edc);
      }
      if (wVar1 != 10) {
        ungetwc(wVar1,(FILE *)DAT_00422edc);
        return CONCAT22(extraout_var_03,0x5c);
      }
      DAT_004226a4 = DAT_004226a4 + 1;
      DAT_00412021 = 1;
      if (param_2 == '\0') {
        wVar1 = FUN_00407ec9(pwVar4);
        uVar2 = CONCAT22(extraout_var_00,wVar1);
      }
      else {
        wVar1 = getwc((FILE *)DAT_00422edc);
        uVar2 = CONCAT22(extraout_var,wVar1);
      }
      pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      if ((((short)pwVar4 == 0x3b) && (DAT_00422ee1 != '\0')) || ((short)pwVar4 == 0x23)) {
        FUN_004097b9(param_2);
        DAT_004226a4 = DAT_004226a4 + 1;
        if (param_2 == '\0') {
          wVar1 = FUN_00407ec9(extraout_ECX_00);
          uVar2 = CONCAT22(extraout_var_02,wVar1);
        }
        else {
          wVar1 = getwc((FILE *)DAT_00422edc);
          uVar2 = CONCAT22(extraout_var_01,wVar1);
        }
        pwVar4 = (wchar_t *)(uVar2 & 0xffff);
      }
      uVar3 = (undefined2)(uVar2 >> 0x10);
    } while ((short)pwVar4 == 0x5c);
  }
  return CONCAT22(uVar3,(short)pwVar4);
}



void __thiscall FUN_00409d72(void *this,wchar_t *param_1)

{
  char cVar1;
  wint_t wVar2;
  uint uVar3;
  int iVar4;
  wchar_t *extraout_ECX;
  wchar_t *pwVar5;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  wchar_t *extraout_ECX_04;
  byte bVar7;
  uint uVar6;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  char local_6;
  char local_5;
  undefined3 uVar8;
  
  local_18 = (wchar_t *)0x0;
  cVar1 = (char)this;
  local_10 = (wchar_t *)0x0;
  pwVar9 = &DAT_004226c0;
  local_6 = '\0';
  local_14 = &DAT_004226c0;
  local_5 = cVar1;
  wVar2 = FUN_00407ec9((wchar_t *)this);
  pwVar11 = (wchar_t *)(uint)wVar2;
  if (cVar1 == '\x18') {
    uVar6 = 0x218;
    goto LAB_00409dfc;
  }
  if ((wVar2 == 0x20) || (wVar2 == 9)) {
LAB_00409ded:
    uVar6 = (uint)CONCAT11(2,cVar1);
    uVar3 = FUN_00409be4('\0');
    pwVar11 = (wchar_t *)(uVar3 & 0xffff);
  }
  else {
    if (wVar2 == 0x5e) {
      wVar2 = FUN_00407ec9((wchar_t *)0x5e);
      if ((wVar2 == 0x20) || (wVar2 == 9)) goto LAB_00409ded;
      ungetwc(wVar2,(FILE *)DAT_00422edc);
      pwVar11 = (wchar_t *)0x5e;
    }
    uVar6 = (uint)CONCAT11(1,cVar1);
  }
LAB_00409dfc:
  local_c = param_1;
  do {
    pwVar5 = (wchar_t *)0x5e;
    if ((short)pwVar11 == 0x22) {
      local_6 = local_6 == '\0';
    }
    if ((short)pwVar11 == 0x5e) {
      if ((local_6 != '\0') || ((char)uVar6 != '\x19')) {
        wVar2 = FUN_00407ec9((wchar_t *)0x5e);
        pwVar5 = DAT_00422edc;
        ungetwc(wVar2,(FILE *)DAT_00422edc);
        pwVar11 = (wchar_t *)0x5e;
        goto LAB_00409f75;
      }
      wVar2 = FUN_00407ec9((wchar_t *)0x5e);
      pwVar10 = local_10;
      pwVar11 = (wchar_t *)(uint)wVar2;
      pwVar5 = extraout_ECX;
      if (pwVar11 < (wchar_t *)0x2e) {
        if (pwVar11 == (wchar_t *)0x2d) goto LAB_00409ea1;
        if (pwVar11 != (wchar_t *)0xa) {
          if (pwVar11 != (wchar_t *)0x21) {
            if ((wchar_t *)0x21 < pwVar11) {
              if (pwVar11 < (wchar_t *)0x24) goto LAB_00409f4f;
              if ((pwVar11 == (wchar_t *)0x24) ||
                 (((wchar_t *)0x27 < pwVar11 && (pwVar11 < (wchar_t *)0x2a)))) goto LAB_00409ea1;
            }
            goto LAB_00409f75;
          }
          goto LAB_00409ea1;
        }
      }
      else {
        if (pwVar11 != (wchar_t *)0x40) {
          if (pwVar11 == (wchar_t *)0x5c) goto LAB_00409f4f;
          if (((pwVar11 != (wchar_t *)0x5e) && (pwVar11 != (wchar_t *)0x7b)) &&
             (pwVar11 != (wchar_t *)0x7d)) goto LAB_00409f75;
        }
LAB_00409ea1:
        *pwVar9 = L'^';
        pwVar9 = pwVar9 + 1;
        if (pwVar9 == local_c) {
          if (DAT_004226ac == (wchar_t *)0x0) {
            DAT_004226ac = (wchar_t *)FUN_0040ab83(0x1000);
            wcsncpy_s(DAT_004226ac,0x800,local_14,0x400);
            local_10 = (wchar_t *)0x800;
            pwVar9 = DAT_004226ac + 0x400;
            param_1 = DAT_004226ac + 0x800;
          }
          else {
            pwVar5 = local_10 + 0x200;
            if ((pwVar5 < local_10) ||
               (local_18 = (wchar_t *)FUN_0040abc6(DAT_004226ac,(int)pwVar5 * 2),
               local_18 == (wchar_t *)0x0)) {
              FUN_004053c9(DAT_004226a4,0x419);
            }
            pwVar9 = local_18 + (int)pwVar10;
            param_1 = local_18 + (int)pwVar5;
            DAT_004226ac = local_18;
            local_10 = pwVar5;
          }
          local_14 = DAT_004226ac;
          local_c = param_1;
        }
      }
LAB_00409f4f:
      uVar3 = 0;
LAB_0040a06b:
      pwVar5 = (wchar_t *)((uVar6 >> 8) * 0xe);
      bVar7 = *(byte *)((int)pwVar5 + (int)(&UNK_004013a0 + uVar3));
LAB_0040a072:
      uVar6 = (uint)bVar7 << 8;
      pwVar10 = pwVar9;
      if (bVar7 == 0x40) goto LAB_0040a26d;
      if ((uVar6 & 0x2000) != 0) {
        FUN_004053c9(DAT_004226a4,(bVar7 & 0xdf) + 1000);
        pwVar5 = extraout_ECX_01;
      }
      pwVar10 = local_10;
      if (bVar7 == 0) {
        DAT_004226a4 = DAT_004226a4 + 1;
        pwVar9[-1] = L' ';
        DAT_00412021 = 1;
        wVar2 = FUN_00407ec9(pwVar5);
        DAT_00412021 = 0;
        if ((wVar2 == 0x20) || (wVar2 == 9)) {
          uVar6 = 0x200;
          pwVar11 = extraout_ECX_02;
          do {
            do {
              wVar2 = FUN_00407ec9(pwVar11);
              pwVar11 = extraout_ECX_03;
            } while (wVar2 == 0x20);
          } while (wVar2 == 9);
        }
        pwVar5 = DAT_00422edc;
        ungetwc(wVar2,(FILE *)DAT_00422edc);
      }
      else {
        *pwVar9 = (wchar_t)pwVar11;
        pwVar9 = pwVar9 + 1;
        if (pwVar9 == local_c) {
          if (DAT_004226ac == (wchar_t *)0x0) {
            DAT_004226ac = (wchar_t *)FUN_0040ab83(0x1000);
            wcsncpy_s(DAT_004226ac,0x800,local_14,0x400);
            local_10 = (wchar_t *)0x800;
            pwVar9 = DAT_004226ac + 0x400;
            param_1 = DAT_004226ac + 0x800;
            pwVar5 = extraout_ECX_04;
            local_c = param_1;
          }
          else {
            pwVar11 = local_10 + 0x200;
            if ((pwVar11 < local_10) ||
               (pwVar5 = (wchar_t *)FUN_0040abc6(DAT_004226ac,(int)pwVar11 * 2),
               pwVar5 == (wchar_t *)0x0)) {
              FUN_004053c9(DAT_004226a4,0x419);
LAB_0040a26d:
              ungetwc((wint_t)pwVar11,(FILE *)DAT_00422edc);
              pwVar9 = local_14;
              while ((pwVar9 < pwVar10 && (iVar4 = iswspace(pwVar10[-1]), iVar4 != 0))) {
                pwVar10 = pwVar10 + -1;
              }
              pwVar11 = DAT_004226ac;
              *pwVar10 = L'\0';
              if (pwVar11 == (wchar_t *)0x0) {
                pwVar9 = (wchar_t *)FUN_0040e8fe(pwVar9);
              }
              else {
                pwVar9 = (wchar_t *)FUN_0040abc6(pwVar11,((int)pwVar10 - (int)pwVar11 >> 1) * 2 + 2)
                ;
                if (pwVar9 == (wchar_t *)0x0) {
                  return;
                }
              }
              DAT_004226ac = pwVar9;
              return;
            }
            pwVar9 = pwVar5 + (int)pwVar10;
            param_1 = pwVar5 + (int)pwVar11;
            DAT_004226ac = pwVar5;
            local_18 = pwVar5;
            local_10 = pwVar11;
            local_c = param_1;
          }
        }
      }
      uVar6 = CONCAT31((int3)(uVar6 >> 8),local_5);
    }
    else {
LAB_00409f75:
      if ((wchar_t *)0x3b < pwVar11) {
        if (pwVar11 < (wchar_t *)0x45) {
          if (pwVar11 != (wchar_t *)0x44) {
            if (pwVar11 == (wchar_t *)0x3c) {
LAB_0040a10d:
              uVar8 = (undefined3)(uVar6 >> 8);
              uVar6 = CONCAT31(uVar8,0xc);
              uVar3 = 0xc;
              if ((local_5 == '\x18') && ((ushort)pwVar11 == 0x3c)) {
                wVar2 = FUN_00407ec9(pwVar5);
                if (wVar2 == 0x3c) {
                  pwVar9 = (wchar_t *)FUN_00408bcd(pwVar9,&local_14,&param_1);
                  uVar6 = CONCAT31(uVar8,6);
                  DAT_004226a4 = DAT_004226a4 + -1;
                  pwVar11 = (wchar_t *)0xa;
                  local_c = param_1;
                }
                else {
                  ungetwc(wVar2,(FILE *)DAT_00422edc);
                }
                uVar3 = uVar6 & 0xff;
              }
            }
            else {
              if (pwVar11 == (wchar_t *)0x3d) {
                uVar3 = 2;
                goto LAB_0040a06b;
              }
              if ((wchar_t *)0x3e < pwVar11) {
                if (pwVar11 < (wchar_t *)0x41) goto LAB_0040a10d;
                if (pwVar11 == (wchar_t *)0x42) goto LAB_0040a060;
              }
LAB_0040a196:
              uVar3 = FUN_004038ca((ushort)pwVar11);
              uVar3 = (uint)(-((char)uVar3 != '\0') & 10);
            }
            goto LAB_0040a06b;
          }
        }
        else if ((pwVar11 != (wchar_t *)0x46) && (pwVar11 != (wchar_t *)0x52)) {
          if (pwVar11 == (wchar_t *)0x5c) {
            uVar3 = 3;
          }
          else {
            if (pwVar11 != (wchar_t *)0xffff) goto LAB_0040a196;
LAB_0040a1ab:
            uVar3 = 6;
          }
          goto LAB_0040a06b;
        }
LAB_0040a060:
        uVar3 = 0xd;
        goto LAB_0040a06b;
      }
      bVar7 = (byte)(uVar6 >> 8);
      if (pwVar11 != (wchar_t *)0x3b) {
        if ((wchar_t *)0x24 < pwVar11) {
          if (pwVar11 == (wchar_t *)0x28) {
            uVar3 = 8;
          }
          else if (pwVar11 == (wchar_t *)0x29) {
            uVar3 = 9;
          }
          else if (pwVar11 == (wchar_t *)0x2a) {
            uVar3 = 0xb;
          }
          else {
            if (pwVar11 != (wchar_t *)0x3a) goto LAB_0040a196;
            uVar3 = 4;
          }
          goto LAB_0040a06b;
        }
        if (pwVar11 == (wchar_t *)0x24) {
          uVar3 = 7;
          goto LAB_0040a06b;
        }
        pwVar5 = (wchar_t *)0x9;
        if (pwVar11 == (wchar_t *)0x9) {
LAB_00409fc6:
          uVar3 = 5;
          goto LAB_0040a06b;
        }
        if (pwVar11 == (wchar_t *)0xa) goto LAB_0040a1ab;
        if (pwVar11 == (wchar_t *)0x20) goto LAB_00409fc6;
        if (pwVar11 != (wchar_t *)0x23) goto LAB_0040a196;
        if (bVar7 == 0) goto LAB_0040a013;
        pwVar10 = pwVar9;
        if ((char)uVar6 != '\x19') {
          bVar7 = (&UNK_004013a1)[(uint)bVar7 * 0xe];
          goto LAB_0040a072;
        }
        goto LAB_0040a26d;
      }
      if ((bVar7 != 0) || (DAT_00422ee1 == '\0')) goto LAB_00409f4f;
LAB_0040a013:
      local_6 = '\0';
      FUN_004097b9('\0');
      DAT_004226a4 = DAT_004226a4 + 1;
      pwVar5 = extraout_ECX_00;
    }
    wVar2 = FUN_00407ec9(pwVar5);
    pwVar11 = (wchar_t *)(uint)wVar2;
  } while( true );
}



void __fastcall FUN_0040a2d0(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  wchar_t *extraout_ECX;
  wchar_t *pwVar5;
  wchar_t *extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  byte bVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *local_c;
  
  pwVar8 = param_1 + 1;
  bVar2 = false;
  wVar3 = *param_1;
  pwVar5 = param_1;
  local_c = pwVar8;
  if (wVar3 == L'\"') {
    bVar2 = true;
    uVar7 = 0x10;
    bVar1 = false;
  }
  else if (wVar3 == L'$') {
    uVar7 = 2;
    bVar1 = false;
  }
  else if (wVar3 == L'{') {
    uVar7 = 8;
    bVar1 = false;
  }
  else {
    uVar7 = 0;
    bVar1 = false;
  }
  do {
    wVar3 = FUN_00407ec9(pwVar5);
    if (wVar3 == L'^') {
      wVar3 = FUN_00407ec9(extraout_ECX);
      if ((ushort)wVar3 < 0x5d) {
        if (((wVar3 != L'\\') && (wVar3 != L'\n')) && (wVar3 != L'#')) {
          if ((wVar3 == L'$') || ((0x27 < (ushort)wVar3 && ((ushort)wVar3 < 0x2a))))
          goto LAB_0040a3a4;
          goto LAB_0040a34d;
        }
      }
      else {
        if (((wVar3 != L'^') && (wVar3 != L'{')) && (wVar3 != L'}')) goto LAB_0040a34d;
LAB_0040a3a4:
        *pwVar8 = L'^';
        pwVar8 = pwVar8 + 1;
        local_c = pwVar8;
      }
LAB_0040a3b0:
      bVar6 = 0;
    }
    else {
LAB_0040a34d:
      if ((ushort)wVar3 < 0x2a) {
        if (wVar3 == L')') {
          bVar6 = 9;
        }
        else if (wVar3 == L'\t') {
LAB_0040a3d9:
          bVar6 = bVar2 - 1U & 5;
        }
        else if (wVar3 == L'\n') {
LAB_0040a450:
          bVar6 = 6;
        }
        else {
          if (wVar3 == L' ') goto LAB_0040a3d9;
          if (wVar3 == L'\"') {
            bVar6 = 0xe;
            if ((char)uVar7 == '\x12') {
              bVar2 = true;
            }
          }
          else if (wVar3 == L'#') {
            bVar6 = 1;
          }
          else if (wVar3 == L'$') {
            bVar6 = 7;
          }
          else {
            if (wVar3 != L'(') goto LAB_0040a416;
            bVar6 = 8;
          }
        }
      }
      else if (wVar3 == L':') {
        bVar6 = 4;
      }
      else if (wVar3 == L';') {
        bVar6 = 3;
      }
      else if (wVar3 == L'=') {
        bVar6 = 2;
      }
      else if (wVar3 == L'\\') {
        bVar6 = 0xd;
      }
      else if (wVar3 == L'{') {
        bVar6 = 0xb;
      }
      else if (wVar3 == L'}') {
        bVar6 = 0xc;
      }
      else {
        if (wVar3 == L'\xffff') goto LAB_0040a450;
LAB_0040a416:
        if ((DAT_004226b4 & 0x80) == 0) {
          uVar4 = FUN_004038ca(wVar3);
          bVar6 = -((char)uVar4 != '\0') & 10;
        }
        else {
          uVar4 = FUN_004038ca(wVar3);
          if ((((char)uVar4 == '\0') && (wVar3 != L'*')) && (wVar3 != L'@')) goto LAB_0040a3b0;
          bVar6 = 10;
        }
      }
    }
    pwVar5 = (wchar_t *)((uVar7 & 0xff) * 0xf);
    uVar7 = (uint)*(byte *)((int)pwVar5 + (int)(&DAT_00401280 + bVar6));
    if ((bVar2) && (*(byte *)((int)pwVar5 + (int)(&DAT_00401280 + bVar6)) == 1)) {
      uVar7 = 0x10;
    }
    if (bVar1) {
      if (bVar6 == 6) {
        DAT_004226a4 = DAT_004226a4 + 1;
        DAT_00412021 = 1;
        wVar3 = FUN_00407ec9(pwVar5);
        DAT_00412021 = 0;
        if ((wVar3 == L' ') || (wVar3 == L'\t')) {
          uVar7 = 0x40;
          pwVar5 = extraout_ECX_00;
          do {
            do {
              wVar3 = FUN_00407ec9(pwVar5);
              pwVar5 = extraout_ECX_01;
            } while (wVar3 == L' ');
            pwVar8 = local_c;
          } while (wVar3 == L'\t');
        }
        else {
          uVar7 = (uint)(pwVar8 != &DAT_004226c2);
          pwVar5 = extraout_ECX_00;
        }
      }
      else {
        *pwVar8 = L'\\';
        local_c = pwVar8 + 1;
        pwVar8 = local_c;
      }
    }
    bVar1 = false;
    if (param_2 <= pwVar8) {
      pwVar5 = (wchar_t *)0x434;
      FUN_004053c9(DAT_004226a4,0x434);
    }
    if ((char)uVar7 == '@') {
      ungetwc(wVar3,DAT_00422edc);
      *pwVar8 = L'\0';
      FUN_0040cad0(param_1);
      return;
    }
    if ((uVar7 & 0x20) != 0) {
      FUN_004053c9(DAT_004226a4,(uVar7 & 0xdf) + 1000);
      pwVar5 = extraout_ECX_02;
    }
    if ((char)uVar7 == '\x0f') {
      uVar7 = 0x10f;
      bVar1 = true;
    }
    else {
      *pwVar8 = wVar3;
      pwVar8 = pwVar8 + 1;
      local_c = pwVar8;
    }
  } while( true );
}



void __fastcall FUN_0040a572(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wint_t _Ch;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  int iVar7;
  short *psVar8;
  wchar_t *extraout_ECX;
  undefined4 *puVar9;
  short sVar10;
  wchar_t **ppwVar11;
  int iVar12;
  uint _SIZE;
  wchar_t *pwVar13;
  bool bVar14;
  wchar_t wStack_498;
  undefined auStack_496 [514];
  undefined4 uStack_294;
  HANDLE local_26c;
  wchar_t *local_268;
  int local_264;
  wchar_t *local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  if ((*param_1 == L'\0') || (*param_1 == L'#')) {
    pwVar3 = (wchar_t *)0x407;
    FUN_004053c9(DAT_004226a4,0x407);
    uVar4 = DAT_00412014 ^ (uint)&stack0xfffffd78;
    _wsplitpath_s(pwVar3,(wchar_t *)&uStack_294,3,&wStack_498,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,
                  0);
    puVar9 = &uStack_294;
    do {
      sVar10 = *(short *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
    } while (sVar10 != 0);
    pwVar3 = &wStack_498;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    _SIZE = ((int)puVar9 - ((int)&uStack_294 + 2) >> 1) + 1 + ((int)pwVar3 - (int)auStack_496 >> 1);
    lVar2 = (ulonglong)_SIZE * 2;
    pwVar6 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
    _wmakepath_s(pwVar6,_SIZE,(wchar_t *)&uStack_294,&wStack_498,(wchar_t *)0x0,(wchar_t *)0x0);
    pwVar3 = pwVar6;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    iVar7 = (int)pwVar3 - (int)(pwVar6 + 1) >> 1;
    if ((pwVar6[iVar7 + -1] == L'\\') || (pwVar6[iVar7 + -1] == L'/')) {
      pwVar6[iVar7 + -1] = L'\0';
    }
    ___security_check_cookie_4(uVar4 ^ (uint)&stack0xfffffd78);
    return;
  }
  pwVar3 = wcspbrk(param_1,L"\t#");
  local_264 = 0x20;
  local_260 = (wchar_t *)0x9;
  if (pwVar3 == (wchar_t *)0x0) {
    pwVar3 = param_1;
    do {
      wVar1 = *pwVar3;
      pwVar3 = pwVar3 + 1;
    } while (wVar1 != L'\0');
    pwVar3 = param_1 + ((int)pwVar3 - (int)(param_1 + 1) >> 1);
  }
  else {
    sVar10 = 0;
    if (*pwVar3 == L'#') {
      sVar10 = 0x23;
    }
    *pwVar3 = L'\0';
    pwVar6 = pwVar3;
    if (sVar10 == 0) {
      while( true ) {
        pwVar6 = pwVar6 + 1;
        wVar1 = *pwVar6;
        if ((wVar1 == L'\0') || (wVar1 == L'#')) break;
        if ((wVar1 != (wchar_t)local_264) && (wVar1 != (wchar_t)local_260)) {
          uStack_294 = 0x40a61c;
          FUN_004053c9(DAT_004226a4,0x409);
        }
      }
    }
  }
  pwVar6 = (wchar_t *)0x0;
  do {
    pwVar5 = pwVar3;
    if (pwVar5 <= param_1) break;
    pwVar3 = pwVar5 + -1;
  } while ((*pwVar3 == (wchar_t)local_264) || (*pwVar3 == (wchar_t)local_260));
  *pwVar5 = L'\0';
  if ((*param_1 == L'<') && (pwVar5[-1] == L'>')) {
    pwVar13 = param_1 + 1;
    pwVar5[-1] = L'\0';
    pwVar3 = FUN_0040f28e(pwVar13);
    if (pwVar3 == pwVar13) {
      pwVar3 = (wchar_t *)FUN_0040e8fe(pwVar13);
    }
    uVar4 = FUN_0040aaef((ushort *)L"INCLUDE");
    if (uVar4 == 0) {
      psVar8 = (short *)0x0;
    }
    else {
      psVar8 = *(short **)(*(int *)(uVar4 + 8) + 4);
    }
    if (psVar8 != (short *)0x0) {
      pwVar5 = (wchar_t *)FUN_0040e8fe(psVar8);
      pwVar6 = FUN_0040f28e(pwVar5);
      if (pwVar6 != pwVar5) {
        free(pwVar5);
      }
    }
    pwVar5 = (wchar_t *)FUN_00407bca(pwVar6,pwVar3,&local_25c,&local_26c);
    if (pwVar5 == (wchar_t *)0x0) {
      uStack_294 = 0x40a714;
      FUN_004053c9(DAT_004226a4,0x41c);
    }
    if (pwVar6 != (wchar_t *)0x0) {
      free(pwVar6);
    }
    free(pwVar3);
  }
  else {
    if ((*param_1 == L'\"') && (pwVar5[-1] == L'\"')) {
      param_1 = param_1 + 1;
      pwVar5[-1] = L'\0';
    }
    pwVar3 = FUN_0040f28e(param_1);
    if (pwVar3 == param_1) {
      pwVar3 = (wchar_t *)FUN_0040e8fe(param_1);
    }
    iVar7 = FUN_00407a1b(pwVar3,&local_25c,&local_26c);
    pwVar5 = param_1;
    if (iVar7 == 0) {
      pwVar6 = wcspbrk(pwVar3,L"\\/:");
      if (pwVar6 == (wchar_t *)0x0) {
        local_264 = DAT_00433324;
        if (-1 < DAT_00433324) {
          ppwVar11 = (wchar_t **)(&DAT_00433334 + DAT_00433324 * 3);
          do {
            pwVar6 = DAT_00422ee4;
            if (local_264 != DAT_00433324) {
              pwVar6 = *ppwVar11;
            }
            local_260 = (wchar_t *)FUN_0040aa17(pwVar6);
            if (local_260 != (wchar_t *)0x0) {
              pwVar6 = local_260;
              do {
                wVar1 = *pwVar6;
                pwVar6 = pwVar6 + 1;
              } while (wVar1 != L'\0');
              pwVar5 = pwVar3;
              do {
                wVar1 = *pwVar5;
                pwVar5 = pwVar5 + 1;
              } while (wVar1 != L'\0');
              uVar4 = ((int)pwVar6 - (int)(local_260 + 1) >> 1) + 2 +
                      ((int)pwVar5 - (int)(pwVar3 + 1) >> 1);
              local_268 = (wchar_t *)
                          FUN_0040ab83(-(uint)((int)((ulonglong)uVar4 * 2 >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar4 * 2));
              uStack_294 = 0x40a830;
              wcscpy_s(local_268,uVar4,local_260);
              uStack_294 = 0x40a845;
              wcscat_s(local_268,uVar4,L"\\");
              pwVar5 = local_268;
              uStack_294 = 0x40a857;
              wcscat_s(local_268,uVar4,pwVar3);
              iVar7 = FUN_00407a1b(pwVar5,&local_25c,&local_26c);
              if (iVar7 != 0) {
                free(local_260);
                break;
              }
              free(local_260);
              free(pwVar5);
            }
            local_264 = local_264 + -1;
            ppwVar11 = ppwVar11 + -3;
            pwVar5 = param_1;
          } while (-1 < local_264);
        }
        free(pwVar3);
        if (-1 < local_264) goto LAB_0040a8e3;
      }
      uStack_294 = 0x40a8e0;
      FUN_004053c9(DAT_004226a4,0x41c);
    }
  }
LAB_0040a8e3:
  iVar12 = 0;
  iVar7 = DAT_00433324;
  if (0 < DAT_00433324) {
    ppwVar11 = (wchar_t **)&DAT_00433334;
    do {
      iVar7 = _wcsicmp(pwVar5,*ppwVar11);
      if (iVar7 == 0) {
        uStack_294 = 0x40a916;
        FUN_004053c9(DAT_004226a4,0x430);
      }
      iVar12 = iVar12 + 1;
      ppwVar11 = ppwVar11 + 3;
      iVar7 = DAT_00433324;
    } while (iVar12 < DAT_00433324);
  }
  DAT_00433324 = iVar7 + 1;
  bVar14 = DAT_00422ee3 != '\0';
  DAT_004226b0 = 0;
  *(int *)(&DAT_00433338 + iVar7 * 0xc) = DAT_00422edc;
  *(int *)(&DAT_00433330 + iVar7 * 0xc) = DAT_004226a4;
  (&DAT_00433334)[iVar7 * 3] = DAT_00422ee4;
  if (bVar14) {
    FUN_0040ce63(L"Included: %s\n",(char)pwVar5);
  }
  DAT_00422edc = FUN_0041063a(pwVar5,L"rt,ccs=unicode");
  if (DAT_00422edc == 0) {
    FUN_004053c9(DAT_004226a4,0x41c);
  }
  DAT_00422ee4 = (wchar_t *)FUN_0040e8fe(pwVar5);
  DAT_004226a4 = 1;
  DAT_00412021 = 1;
  _Ch = FUN_00407ec9(extraout_ECX);
  if ((_Ch == 0x20) || (_Ch == 9)) {
    DAT_00412021 = 0;
  }
  else {
    DAT_00412021 = 1;
    ungetwc(_Ch,(FILE *)DAT_00422edc);
    DAT_004226a4 = DAT_004226a4 + -1;
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040aa17(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint _SIZE;
  wchar_t local_214;
  undefined local_212 [514];
  wchar_t local_10;
  undefined local_e [6];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  _wsplitpath_s(param_1,&local_10,3,&local_214,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  pwVar4 = &local_10;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  pwVar3 = &local_214;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _SIZE = ((int)pwVar4 - (int)local_e >> 1) + 1 + ((int)pwVar3 - (int)local_212 >> 1);
  lVar2 = (ulonglong)_SIZE * 2;
  pwVar3 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  _wmakepath_s(pwVar3,_SIZE,&local_10,&local_214,(wchar_t *)0x0,(wchar_t *)0x0);
  pwVar4 = pwVar3;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  iVar5 = (int)pwVar4 - (int)(pwVar3 + 1) >> 1;
  if ((pwVar3[iVar5 + -1] == L'\\') || (pwVar3[iVar5 + -1] == L'/')) {
    pwVar3[iVar5 + -1] = L'\0';
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



uint __fastcall FUN_0040aaef(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    DAT_00436624 = &DAT_00432f10;
  }
  else {
    uVar3 = 0;
    puVar2 = param_1;
    do {
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + uVar1;
      uVar1 = *puVar2;
    } while (uVar1 != 0);
    DAT_00436624 = &DAT_00432f10 + (uVar3 & 0xff);
    for (puVar4 = (undefined4 *)*DAT_00436624; puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      puVar2 = (ushort *)puVar4[1];
      puVar5 = param_1;
      do {
        uVar1 = *puVar2;
        bVar6 = uVar1 < *puVar5;
        if (uVar1 != *puVar5) {
LAB_0040ab51:
          uVar3 = -(uint)bVar6 | 1;
          goto LAB_0040ab56;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar2[1];
        bVar6 = uVar1 < puVar5[1];
        if (uVar1 != puVar5[1]) goto LAB_0040ab51;
        puVar2 = puVar2 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar3 = 0;
LAB_0040ab56:
      if (uVar3 == 0) {
        return ~-(uint)((*(byte *)(puVar4 + 3) & 0x10) != 0) & (uint)puVar4;
      }
    }
  }
  return 0;
}



void * __fastcall FUN_0040ab83(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_004053c9(DAT_004226b0,0x41b);
  }
  return pvVar1;
}



void * __fastcall FUN_0040aba8(size_t param_1)

{
  void *_Dst;
  
  _Dst = FUN_0040ab83(param_1);
  memset(_Dst,0,param_1);
  return _Dst;
}



void * __fastcall FUN_0040abc6(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = FUN_0040ab83(param_2);
  }
  else {
    pvVar1 = realloc(param_1,param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_004053c9(DAT_004226b0,0x41b);
    }
  }
  return pvVar1;
}



void __fastcall FUN_0040abfc(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  errno_t eVar3;
  DWORD DVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  int iVar7;
  HANDLE pvVar8;
  wchar_t *pwVar9;
  uint uVar10;
  int iVar11;
  BOOL BVar12;
  wchar_t *pwVar13;
  bool bVar14;
  DWORD dwFlags;
  SIZE_T dwBytes;
  undefined auStack_6dc [4];
  DWORD DStack_6d8;
  undefined2 auStack_6d4 [2];
  int iStack_6d0;
  wchar_t *local_6cc;
  undefined4 uStack_6c8;
  wchar_t *local_6c4;
  DWORD local_6c0;
  HMODULE *local_6bc;
  undefined2 *local_6b8;
  rsize_t local_6b4 [2];
  wchar_t *pwStack_6ac;
  wchar_t **ppwStack_6a8;
  DWORD *pDStack_6a4;
  HMODULE **pppHStack_6a0;
  undefined2 **ppuStack_69c;
  wchar_t **ppwStack_698;
  rsize_t *prStack_694;
  byte bStack_690;
  wchar_t awStack_664 [274];
  ushort auStack_440 [4];
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  wchar_t awStack_42c [6];
  wchar_t awStack_420 [259];
  short sStack_21a;
  wchar_t local_218;
  undefined auStack_216 [522];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)auStack_6dc;
  local_6b8 = &DAT_004372dc;
  local_6b4[0] = 0;
  local_6cc = (wchar_t *)0x0;
  local_6bc = (HMODULE *)&DAT_004372d8;
  local_6c0 = 0x60;
  local_6c4 = param_2;
  if ((((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) || (param_2 == (wchar_t *)0x0)) ||
     (*param_2 == L'\0')) goto LAB_0040b1c8;
  DAT_004372d8 = 0;
  eVar3 = wcsncpy_s(&local_218,0x104,param_1,0xffffffff);
  if (eVar3 != 0) goto LAB_0040b1c8;
  pwVar9 = &local_218;
  do {
    wVar1 = *pwVar9;
    pwVar9 = pwVar9 + 1;
  } while (wVar1 != L'\0');
  if (((&sStack_21a)[(int)pwVar9 - (int)auStack_216 >> 1] != 0x5c) &&
     (eVar3 = wcsncat_s(&local_218,0x104,L"\\",0xffffffff), eVar3 != 0)) goto LAB_0040b1c8;
  pwStack_6ac = &local_218;
  DStack_6d8 = 0x80070002;
  ppwStack_6a8 = &local_6c4;
  pDStack_6a4 = &local_6c0;
  pppHStack_6a0 = &local_6bc;
  ppuStack_69c = &local_6b8;
  ppwStack_698 = &local_6cc;
  prStack_694 = local_6b4;
  uStack_438 = 0;
  uStack_434 = 0;
  uStack_430 = 0;
  DVar4 = GetEnvironmentVariableW(L"VSLANG",(LPWSTR)&uStack_438,6);
  if ((DVar4 != 0) &&
     ((DVar4 < 6 &&
      (FID_conflict_operator__(&pwStack_6ac,(wchar_t *)&uStack_438,10,&DStack_6d8), DStack_6d8 == 0)
      ))) goto LAB_0040b1c8;
  if (DAT_00436664 == (PVOID)0x0) {
    pHVar5 = GetModuleHandleW(L"kernel32.dll");
    if (pHVar5 != (HMODULE)0x0) {
      pFVar6 = GetProcAddress(pHVar5,"SetThreadPreferredUILanguages");
      DAT_00436664 = EncodePointer(pFVar6);
      goto LAB_0040ada2;
    }
LAB_0040aec0:
    uVar10 = 0;
    auStack_440[0] = GetUserDefaultUILanguage();
    if (((auStack_440[0] & 0x3ff) == 1) || ((auStack_440[0] & 0x3ff) == 0xd)) {
      auStack_440[0] = 0x409;
    }
    auStack_440[2] = 0x409;
    auStack_440[1] = auStack_440[0] & 0x3ff | 0x400;
    do {
      _itow_s((uint)auStack_440[uVar10],awStack_42c,6,10);
      FID_conflict_operator__(&pwStack_6ac,awStack_42c,10,&DStack_6d8);
      if (DStack_6d8 == 0) goto LAB_0040b1c8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
  }
  else {
    pFVar6 = (FARPROC)DecodePointer(DAT_00436664);
LAB_0040ada2:
    if (pFVar6 == (FARPROC)0x0) goto LAB_0040aec0;
    DVar4 = GetEnvironmentVariableW(L"VS_UNICODE_OUTPUT",(LPWSTR)0x0,0);
    if ((DVar4 == 0) && (iVar7 = (*pFVar6)(0x100,0,0), iVar7 == 0)) goto LAB_0040b1c8;
    iStack_6d0 = 0;
    uStack_6c8 = 0;
    if (DAT_00436660 == (PVOID)0x0) {
      pHVar5 = GetModuleHandleW(L"kernel32.dll");
      if (pHVar5 != (HMODULE)0x0) {
        pFVar6 = GetProcAddress(pHVar5,"GetThreadPreferredUILanguages");
        DAT_00436660 = EncodePointer(pFVar6);
        goto LAB_0040ae11;
      }
    }
    else {
      pFVar6 = (FARPROC)DecodePointer(DAT_00436660);
LAB_0040ae11:
      if (pFVar6 != (FARPROC)0x0) {
        iVar7 = (*pFVar6)(0x34,&uStack_6c8,0,&iStack_6d0);
        if (iVar7 == 0) goto LAB_0040b1c8;
        dwBytes = iStack_6d0 * 2;
        DVar4 = 0;
        pvVar8 = GetProcessHeap();
        pwVar9 = (wchar_t *)HeapAlloc(pvVar8,DVar4,dwBytes);
        if ((pwVar9 == (wchar_t *)0x0) ||
           (iVar7 = (*pFVar6)(0x34,&uStack_6c8,pwVar9,&iStack_6d0), iVar7 == 0)) goto LAB_0040b1c8;
        wVar1 = *pwVar9;
        pwVar13 = pwVar9;
        while ((wVar1 != L'\0' &&
               (FID_conflict_operator__(&pwStack_6ac,pwVar13,0x10,&DStack_6d8), DStack_6d8 != 0))) {
          pwVar13 = pwVar13 + 5;
          wVar1 = *pwVar13;
        }
        DVar4 = DStack_6d8;
        dwFlags = 0;
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,dwFlags,pwVar9);
        if (DVar4 == 0) goto LAB_0040b1c8;
      }
    }
  }
  FID_conflict_operator__(&pwStack_6ac,L"1033",10,&DStack_6d8);
  if (((DStack_6d8 != 0) && (eVar3 = wcsncpy_s(awStack_420,0x104,&local_218,0xffffffff), eVar3 == 0)
      ) && (eVar3 = wcsncat_s(awStack_420,0x104,L"*",0xffffffff), eVar3 == 0)) {
    pvVar8 = FindFirstFileW(awStack_420,(LPWIN32_FIND_DATAW)&bStack_690);
    if (pvVar8 == (HANDLE)0xffffffff) {
      GetLastError();
    }
    else {
      pwVar9 = &local_218;
      do {
        wVar1 = *pwVar9;
        pwVar9 = pwVar9 + 1;
      } while (wVar1 != L'\0');
      iVar7 = (int)pwVar9 - (int)auStack_216 >> 1;
      do {
        do {
          do {
            do {
              BVar12 = FindNextFileW(pvVar8,(LPWIN32_FIND_DATAW)&bStack_690);
              if (BVar12 == 0) goto LAB_0040b16e;
            } while ((bStack_690 & 0x10) == 0);
            pwVar13 = L".";
            pwVar9 = awStack_664;
            do {
              wVar1 = *pwVar9;
              bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
              if (wVar1 != *pwVar13) {
LAB_0040b048:
                uVar10 = -(uint)bVar14 | 1;
                goto LAB_0040b04f;
              }
              if (wVar1 == L'\0') break;
              wVar1 = pwVar9[1];
              bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
              if (wVar1 != pwVar13[1]) goto LAB_0040b048;
              pwVar9 = pwVar9 + 2;
              pwVar13 = pwVar13 + 2;
            } while (wVar1 != L'\0');
            uVar10 = 0;
LAB_0040b04f:
          } while (uVar10 == 0);
          pwVar13 = L"..";
          pwVar9 = awStack_664;
          do {
            wVar1 = *pwVar9;
            bVar14 = (ushort)wVar1 < (ushort)*pwVar13;
            if (wVar1 != *pwVar13) {
LAB_0040b08c:
              uVar10 = -(uint)bVar14 | 1;
              goto LAB_0040b093;
            }
            if (wVar1 == L'\0') break;
            wVar1 = pwVar9[1];
            bVar14 = (ushort)wVar1 < (ushort)pwVar13[1];
            if (wVar1 != pwVar13[1]) goto LAB_0040b08c;
            pwVar9 = pwVar9 + 2;
            pwVar13 = pwVar13 + 2;
          } while (wVar1 != L'\0');
          uVar10 = 0;
LAB_0040b093:
        } while ((uVar10 == 0) ||
                (iVar11 = FUN_0040ccfb(awStack_664,L"%hu%c",(char)auStack_6d4), iVar11 == -1));
        if (0x207 < (uint)(iVar7 * 2)) {
          ___report_rangecheckfailure();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        awStack_420[iVar7] = L'\0';
        eVar3 = wcsncat_s(awStack_420,0x104,awStack_664,0xffffffff);
      } while (((eVar3 != 0) || (eVar3 = wcsncat_s(awStack_420,0x104,L"\\",0xffffffff), eVar3 != 0))
              || ((eVar3 = wcsncat_s(awStack_420,0x104,local_6c4,0xffffffff), eVar3 != 0 ||
                  (pHVar5 = LoadLibraryExW(awStack_420,(HANDLE)0x0,local_6c0),
                  pHVar5 == (HMODULE)0x0))));
      *local_6bc = pHVar5;
      if (local_6b8 != (undefined2 *)0x0) {
        *local_6b8 = auStack_6d4[0];
      }
      if (local_6cc != (wchar_t *)0x0) {
        wcscpy_s(local_6cc,local_6b4[0],awStack_420);
      }
LAB_0040b16e:
      FindClose(pvVar8);
    }
  }
LAB_0040b1c8:
  ___security_check_cookie_4(local_c ^ (uint)auStack_6dc);
  return;
}



// Library Function - Multiple Matches With Different Base Names
//  public: void __thiscall <lambda_1c5f2f604cc1903336e60e6dafa03c8f>::operator()(unsigned short
// const *,int,long &)const 
//  public: void __thiscall <lambda_8a3be6d0309dc3c8972644d881f5a7c5>::operator()(unsigned short
// const *,int,long &)const 
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __thiscall FID_conflict_operator__(void *this,wchar_t *param_1,int param_2,DWORD *param_3)

{
  ulong uVar1;
  errno_t eVar2;
  HMODULE pHVar3;
  DWORD DVar4;
  wchar_t *local_220;
  wchar_t local_21c [260];
  wchar_t local_14 [6];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  if (*param_1 != L'\0') {
    uVar1 = wcstoul(param_1,&local_220,param_2);
    if (*local_220 == L'\0') {
      _itow_s(uVar1 & 0xffff,local_14,6,10);
                    // WARNING: Load size is inaccurate
      eVar2 = wcsncpy_s(local_21c,0x104,*this,0xffffffff);
      if (eVar2 == 0) {
        eVar2 = wcsncat_s(local_21c,0x104,local_14,0xffffffff);
        if (eVar2 == 0) {
          eVar2 = wcsncat_s(local_21c,0x104,L"\\",0xffffffff);
          if (eVar2 == 0) {
            eVar2 = wcsncat_s(local_21c,0x104,**(wchar_t ***)((int)this + 4),0xffffffff);
            if (eVar2 == 0) {
              pHVar3 = LoadLibraryExW(local_21c,(HANDLE)0x0,**(DWORD **)((int)this + 8));
              if (pHVar3 == (HMODULE)0x0) {
                if (*param_3 == 0x80070002) {
                  DVar4 = GetLastError();
                  if (0 < (int)DVar4) {
                    DVar4 = DVar4 & 0xffff | 0x80070000;
                  }
                  *param_3 = DVar4;
                }
              }
              else {
                *(HMODULE *)**(undefined4 **)((int)this + 0xc) = pHVar3;
                if ((undefined2 *)**(int **)((int)this + 0x10) != (undefined2 *)0x0) {
                  *(undefined2 *)**(int **)((int)this + 0x10) = (short)uVar1;
                }
                if (**(wchar_t ***)((int)this + 0x14) != (wchar_t *)0x0) {
                  wcscpy_s(**(wchar_t ***)((int)this + 0x14),**(rsize_t **)((int)this + 0x18),
                           local_21c);
                }
                *param_3 = 0;
              }
            }
          }
        }
      }
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void _guard_check_icall(void)

{
  return;
}



// Library Function - Single Match
//  bool __stdcall ErrorReportingDisabled(void)
// 
// Library: Visual Studio 2017 Release

bool ErrorReportingDisabled(void)

{
  bool bVar1;
  
  if (0 < DAT_00436628) {
    if (DAT_00436628 < 3) {
      return false;
    }
    if (DAT_00436628 == 3) {
      bVar1 = ErrorReportingCheckOptIn();
      return (bool)('\x01' - bVar1);
    }
  }
  return true;
}



// Library Function - Single Match
//  bool __stdcall ErrorReportingCheckOptIn(void)
// 
// Library: Visual Studio 2017 Release

bool ErrorReportingCheckOptIn(void)

{
  DWORD DVar1;
  LSTATUS LVar2;
  int local_14;
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  DVar1 = GetVersion();
  if (5 < (byte)DVar1) {
    return true;
  }
  LVar2 = RegOpenKeyExW((HKEY)0x80000001,L"Software\\Microsoft\\VisualStudio\\9.0\\General",0,
                        0x20019,&local_8);
  if (LVar2 == 0) {
    local_c = 4;
    LVar2 = RegQueryValueExW(local_8,L"UserCanAutoSendErrorReport",(LPDWORD)0x0,&local_10,
                             (LPBYTE)&local_14,&local_c);
    RegCloseKey(local_8);
    if (((LVar2 == 0) && (local_10 == 4)) && (local_c == 4)) {
      return local_14 == 1;
    }
  }
  return false;
}



uint __fastcall FUN_0040b3f2(LPCWSTR param_1)

{
  DWORD DVar1;
  LSTATUS LVar2;
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  DVar1 = RegOpenKeyExW((HKEY)0x80000002,
                        L"Software\\Microsoft\\PCHealth\\ErrorReporting\\DW\\Installed",0,0x20019,
                        &local_8);
  if (DVar1 == 0) {
    local_10 = 0x208;
    LVar2 = RegQueryValueExW(local_8,L"DW0200",(LPDWORD)0x0,&local_c,(LPBYTE)param_1,&local_10);
    RegCloseKey(local_8);
    DVar1 = 0;
    param_1[0x103] = L'\0';
    if (LVar2 == 0) {
      if (local_c == 2) {
        DVar1 = ExpandEnvironmentStringsW(param_1,param_1,0x104);
        if ((DVar1 < 0x105) && (DVar1 != 0)) {
LAB_0040b47b:
          return CONCAT31((int3)(DVar1 >> 8),1);
        }
      }
      else if (local_c == 1) goto LAB_0040b47b;
    }
  }
  return DVar1 & 0xffffff00;
}



// Library Function - Single Match
//  bool __stdcall InitializeWatsonSharedMem(void)
// 
// Library: Visual Studio 2017 Release

bool InitializeWatsonSharedMem(void)

{
  DAT_0043663c = CreateFileMappingW((HANDLE)0xffffffff,(LPSECURITY_ATTRIBUTES)&DAT_00436630,4,0,
                                    0x9c9c,(LPCWSTR)0x0);
  if (DAT_0043663c != (HANDLE)0x0) {
    DAT_0043662c = MapViewOfFileEx(DAT_0043663c,6,0,0,0,(LPVOID)0x0);
    if (DAT_0043662c != (LPVOID)0x0) {
      return true;
    }
    CloseHandle(DAT_0043663c);
    DAT_0043663c = (HANDLE)0x0;
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_0040b4d3(void)

{
  undefined *_Src;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  HANDLE hEvent;
  HANDLE hHandle;
  HANDLE hSourceProcessHandle;
  BOOL BVar4;
  DWORD DVar5;
  wchar_t **ppwVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined4 local_60 [18];
  int *local_18;
  HANDLE local_14;
  HANDLE local_10;
  uint local_c;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  local_c = 1;
  if ((DAT_00436650 != (HANDLE)0x0) || (bVar2 = ErrorReportingDisabled(), bVar2)) {
    return 1;
  }
  _DAT_00436630 = 0xc;
  _DAT_00436634 = 0;
  _DAT_00436638 = 1;
  if ((DAT_0043662c == (undefined4 *)0x0) && (bVar2 = InitializeWatsonSharedMem(), !bVar2)) {
    return 1;
  }
  uVar3 = FUN_0040b3f2((LPCWSTR)&DAT_00436e70);
  if ((char)uVar3 == '\0') {
    return 1;
  }
  DAT_00436650 = CreateEventW((LPSECURITY_ATTRIBUTES)&DAT_00436630,0,0,(LPCWSTR)0x0);
  hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)&DAT_00436630,0,0,(LPCWSTR)0x0);
  local_14 = hEvent;
  hHandle = CreateMutexW((LPSECURITY_ATTRIBUTES)&DAT_00436630,0,(LPCWSTR)0x0);
  local_10 = hHandle;
  hSourceProcessHandle = GetCurrentProcess();
  BVar4 = DuplicateHandle(hSourceProcessHandle,hSourceProcessHandle,hSourceProcessHandle,&local_8,
                          0x1fffff,1,0);
  puVar8 = DAT_0043662c;
  pcVar9 = CloseHandle_exref;
  if ((BVar4 != 0) && (DAT_00436650 != (HANDLE)0x0)) {
    if (hEvent == (HANDLE)0x0) goto LAB_0040b839;
    if ((hHandle != (HANDLE)0x0) && (local_8 != (HANDLE)0x0)) {
      memset(DAT_0043662c,0,0x9c9c);
      puVar8[10] = local_8;
      DVar5 = GetCurrentProcessId();
      DAT_0043662c[2] = DVar5;
      DVar5 = GetCurrentThreadId();
      puVar8 = DAT_0043662c;
      DAT_0043662c[3] = DVar5;
      puVar8[8] = DAT_00436650;
      puVar8[6] = hEvent;
      puVar8[9] = hHandle;
      *puVar8 = 0x9c9c;
      puVar8[1] = 0x20000;
      puVar8[5] = local_18;
      puVar8[4] = *(undefined4 *)(*local_18 + 0xc);
      DVar5 = GetVersion();
      puVar8 = DAT_0043662c;
      if (DAT_00436628 == 1) {
        DAT_0043662c[0xb] = 0;
        puVar8[0xc] = 0;
      }
      else {
        if (DAT_00436628 == 2) {
          DAT_0043662c[0xb] = 8;
        }
        else {
          pcVar9 = CloseHandle_exref;
          if (DAT_00436628 != 3) goto LAB_0040b832;
          DAT_0043662c[0xb] = 0;
        }
        puVar8[0xc] = (uint)((byte)DVar5 < 6);
      }
      puVar8[0xd] = 0;
      cVar1 = DAT_004333fb;
      _Src = PTR_DAT_0041206c;
      bVar2 = DAT_004333fb == '\0';
      puVar8[0x11] = 1;
      puVar8[0xf] = 0;
      puVar8[0xe] = (bVar2 - 1 & 0xfffffff0) + 0x14;
      puVar8[0x13] = ((cVar1 == '\0') - 1 & 0x10) + 1;
      wcsncpy_s((wchar_t *)(puVar8 + 0x86b),0x38,(wchar_t *)_Src,0xffffffff);
      ppwVar6 = (wchar_t **)__p__wpgmptr();
      wcsncpy_s((wchar_t *)(DAT_0043662c + 0x96),0x104,*ppwVar6,0xffffffff);
      puVar8 = (undefined4 *)
               "HKLM\\Software\\Microsoft\\Internet Explorer\\Registration\\DigitalProductID";
      puVar10 = local_60;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      FUN_0040cc7b(DAT_0043662c + 0x118,local_60,0x48);
      wcsncpy_s((wchar_t *)(DAT_0043662c + 0x1e9),0x104,(wchar_t *)PTR_DAT_00412068,0xffffffff);
      FUN_0040cc4d(&DAT_00437078,0x104,L"dw20.exe -x -s %u",(char)DAT_0043663c);
      memset(&DAT_00437280,0,0x44);
      _DAT_00437280 = 0x44;
      BVar4 = CreateProcessW((LPCWSTR)&DAT_00436e70,(LPWSTR)&DAT_00437078,(LPSECURITY_ATTRIBUTES)0x0
                             ,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000020,(LPVOID)0x0,(LPCWSTR)0x0,
                             (LPSTARTUPINFOW)&DAT_00437280,(LPPROCESS_INFORMATION)&DAT_004372c4);
      pcVar9 = CloseHandle_exref;
      hHandle = local_10;
      hEvent = local_14;
      if (BVar4 != 0) {
        CloseHandle(DAT_004372c4);
        CloseHandle(DAT_004372c8);
        hHandle = local_10;
        hEvent = local_14;
LAB_0040b795:
        do {
          DVar5 = WaitForSingleObject(DAT_00436650,20000);
          if (DVar5 != 0) {
            DVar5 = WaitForSingleObject(hHandle,20000);
            if (DVar5 == 0x102) break;
            if (DVar5 != 0x80) {
              DVar5 = WaitForSingleObject(DAT_00436650,1);
              if (DVar5 == 0) {
                DVar5 = WaitForSingleObject(hEvent,1);
                if (DVar5 != 0) {
                  ReleaseMutex(hHandle);
                  goto LAB_0040b795;
                }
              }
              else {
                SetEvent(hEvent);
              }
            }
            ReleaseMutex(hHandle);
            break;
          }
          DVar5 = WaitForSingleObject(hEvent,1);
        } while (DVar5 != 0);
        local_c = local_c & ~-(uint)((*(byte *)(DAT_0043662c + 0x26a1) & 0x10) != 0);
      }
    }
  }
LAB_0040b832:
  if (hEvent != (HANDLE)0x0) {
    (*pcVar9)(hEvent);
  }
LAB_0040b839:
  if (hHandle != (HANDLE)0x0) {
    (*pcVar9)(hHandle);
  }
  if (local_8 != (HANDLE)0x0) {
    (*pcVar9)(local_8);
  }
  if (DAT_00436650 != (HANDLE)0x0) {
    (*pcVar9)(DAT_00436650);
    DAT_00436650 = (HANDLE)0x0;
  }
  if (DAT_0043662c != (undefined4 *)0x0) {
    UnmapViewOfFile(DAT_0043662c);
    DAT_0043662c = (undefined4 *)0x0;
  }
  if (DAT_0043663c != 0) {
    (*pcVar9)(DAT_0043663c);
    DAT_0043663c = 0;
  }
  if (DAT_00412066 != '\0') {
                    // WARNING: Subroutine does not return
    exit(1);
  }
  return local_c;
}



uint FUN_0040b8a5(int **param_1)

{
  uint uVar1;
  
  if ((**param_1 == -0x7ffffffd) || (DAT_004333fc != '\0')) {
    uVar1 = 0;
  }
  else {
    DAT_004333fc = '\x01';
    PTR_DAT_00412068 = (undefined *)u_msvcr140_dll_004025a8;
    PTR_DAT_0041206c = &DAT_00402558;
    DAT_00412066 = 0;
    uVar1 = FUN_0040b4d3();
  }
  return uVar1;
}



uint __fastcall FUN_0040b8ed(int **param_1,int *param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 unaff_SI;
  int *piVar4;
  
  if (DAT_00422ee0 == '\0') {
    FUN_00405532();
  }
  FUN_0040ce63(L"\nNMAKE : fatal error U1038: Internal error\n",unaff_SI);
  FUN_0040ce45();
  piVar4 = *param_1;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_2 = *piVar4;
    piVar4 = piVar4 + 1;
    param_2 = param_2 + 1;
  }
  if (param_3 != (int *)0x0) {
    piVar4 = param_1[1];
    for (iVar3 = 0xb3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *piVar4;
      piVar4 = piVar4 + 1;
      param_3 = param_3 + 1;
    }
  }
  bVar1 = ErrorReportingDisabled();
  if (bVar1) {
    uVar2 = (uint)(DAT_004333fc == '\0');
  }
  else {
    uVar2 = FUN_0040b8a5(param_1);
  }
  return uVar2;
}



// WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_0040b950(int param_1,int param_2)

{
  int *_Dst;
  wchar_t wVar1;
  short sVar2;
  short *psVar3;
  wchar_t *_Str;
  bool bVar4;
  FILE *pFVar5;
  undefined4 uVar6;
  int iVar7;
  wchar_t **ppwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  int *_Dst_00;
  int iVar11;
  int iVar12;
  uint _SizeInWords;
  undefined local_56c [744];
  uint local_284;
  int local_280;
  int local_27c;
  undefined local_278 [620];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00411560;
  uStack_c = 0x40b95f;
  local_27c = param_2;
  SetErrorMode(1);
  memset(local_278,0,0x50);
  memset(local_56c,0,0x2cc);
  local_8 = (undefined *)0x0;
  setlocale(2,".ACP");
  pFVar5 = (FILE *)__acrt_iob_func(1);
  uVar6 = FUN_0040cd25(pFVar5);
  DAT_004333fe = (undefined)uVar6;
  pFVar5 = (FILE *)__acrt_iob_func(2);
  uVar6 = FUN_0040cd25(pFVar5);
  DAT_004333fd = (undefined)uVar6;
  _set_invalid_parameter_handler(_guard_check_icall);
  _DAT_00436630 = 0xc;
  _DAT_00436634 = 0;
  iVar11 = 1;
  _DAT_00436638 = 1;
  InitializeWatsonSharedMem();
  DAT_00436628 = 2;
  iVar12 = param_1;
  do {
    local_280 = iVar11;
    if (iVar12 <= iVar11) {
      if ((DAT_00436628 == 3) && (bVar4 = ErrorReportingCheckOptIn(), !bVar4)) {
        FUN_004053c9(0,0xfae);
      }
      bVar4 = ErrorReportingDisabled();
      if (!bVar4) {
        SetUnhandledExceptionFilter(FUN_0040b8a5);
      }
      if (DAT_004333fa != '\0') {
        _DAT_00000000 = 0;
      }
      for (local_284 = 0; local_284 < 0x100; local_284 = local_284 + 1) {
        (&DAT_00432f10)[local_284] = 0;
      }
      if (DAT_00422ee8 == (void *)0x0) {
        ppwVar8 = (wchar_t **)__p__wpgmptr();
        _Str = *ppwVar8;
        pwVar9 = wcschr(_Str,L' ');
        pwVar10 = _Str;
        if (pwVar9 != (wchar_t *)0x0) {
          do {
            wVar1 = *pwVar10;
            pwVar10 = pwVar10 + 1;
          } while (wVar1 != L'\0');
          _SizeInWords = ((int)pwVar10 - (int)(_Str + 1) >> 1) + 3;
          pwVar10 = (wchar_t *)
                    FUN_0040ab83(-(uint)((int)((ulonglong)_SizeInWords * 2 >> 0x20) != 0) |
                                 (uint)((ulonglong)_SizeInWords * 2));
          wcscpy_s(pwVar10,_SizeInWords,L"\"");
          wcscat_s(pwVar10,_SizeInWords,_Str);
          wcscat_s(pwVar10,_SizeInWords,L"\"");
          iVar12 = param_1;
          param_2 = local_27c;
        }
        DAT_00422ee8 = FUN_0040e8fe(pwVar10);
      }
      signal(2);
      signal(0xf);
      iVar12 = FUN_0040bf4d(iVar12,param_2);
      FUN_0040ca92();
      if (DAT_00412020 == '\0') {
        iVar12 = 1;
      }
                    // WARNING: Subroutine does not return
      exit(iVar12);
    }
    psVar3 = *(short **)(param_2 + iVar11 * 4);
    sVar2 = *psVar3;
    if ((sVar2 == 0x2d) || (sVar2 == 0x2f)) {
      _Dst = (int *)(param_2 + iVar11 * 4);
      iVar7 = _wcsicmp(psVar3 + 1,L"errorreport:none");
      if (iVar7 == 0) {
        DAT_00436628 = 0;
      }
      else {
        iVar7 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:prompt");
        if (iVar7 == 0) {
          DAT_00436628 = 1;
        }
        else {
          iVar7 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:queue");
          if (iVar7 != 0) {
            iVar7 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:send");
            if (iVar7 == 0) {
              DAT_00436628 = 3;
              _Dst_00 = (int *)(local_27c + iVar11 * 4);
            }
            else {
              iVar7 = _wcsicmp((wchar_t *)(*_Dst + 2),L"errorreport:test");
              param_2 = local_27c;
              if (iVar7 != 0) goto LAB_0040ba70;
              DAT_004333fa = '\x01';
              _Dst_00 = (int *)(local_27c + iVar11 * 4);
              _Dst = _Dst_00;
            }
            param_2 = local_27c;
            memmove(_Dst_00,_Dst + 1,(iVar12 - iVar11) * 4 - 4);
            iVar12 = iVar12 + -1;
            iVar11 = iVar11 + -1;
            param_1 = iVar12;
            goto LAB_0040ba70;
          }
          DAT_00436628 = 2;
        }
      }
      memmove(_Dst,_Dst + 1,(iVar12 - iVar11) * 4 - 4);
      iVar12 = iVar12 + -1;
      iVar11 = iVar11 + -1;
      param_2 = local_27c;
      param_1 = iVar12;
    }
LAB_0040ba70:
    iVar11 = iVar11 + 1;
  } while( true );
}



void FUN_0040bdeb(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined4 *extraout_ECX;
  int iVar3;
  wchar_t **ppwVar4;
  int iVar5;
  
  pwVar1 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402428);
  pwVar2 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402430);
  iVar5 = 0;
  FUN_00403430(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402438);
  pwVar2 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402430);
  FUN_00403430(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402440);
  pwVar2 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402430);
  FUN_00403430(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402448);
  pwVar2 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402450);
  FUN_00403430(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402458);
  pwVar2 = (wchar_t *)FUN_0040e8fe((short *)&DAT_00402460);
  FUN_00403430(pwVar1,pwVar2,0);
  pwVar1 = (wchar_t *)FUN_0040e8fe(L"_NMAKE_VER");
  pwVar2 = (wchar_t *)FUN_0040e8fe(L"14.22.27905.0");
  FUN_00403430(pwVar1,pwVar2,2);
  pwVar1 = (wchar_t *)FUN_0040e8fe(L"MAKE");
  pwVar2 = (wchar_t *)FUN_0040e8fe(DAT_00422ee8);
  FUN_00403430(pwVar1,pwVar2,0x4c);
  pwVar1 = L".SUFFIXES";
  iVar3 = 0;
  do {
    DAT_004226b8 = FUN_0040e8fe(pwVar1);
    ppwVar4 = *(wchar_t ***)((int)&PTR_PTR_DAT_00401170 + iVar3);
    wcscpy_s(&DAT_004226c0,0x400,*ppwVar4);
    FUN_00402ce6();
    while( true ) {
      ppwVar4 = ppwVar4 + 1;
      if (*ppwVar4 == (wchar_t *)0x0) break;
      wcscpy_s(&DAT_004226c0,0x400,*ppwVar4);
      FUN_00402b07(extraout_ECX);
    }
    if (iVar5 == 0) {
      FUN_004030d2();
    }
    FUN_004031ec();
    iVar5 = iVar5 + 1;
    iVar3 = iVar5 * 4;
    pwVar1 = (wchar_t *)(&PTR_u__SUFFIXES_00401240)[iVar5];
  } while (pwVar1 != (wchar_t *)0x0);
  return;
}



void __fastcall FUN_0040bf4d(int param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t *_Path;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  errno_t eVar4;
  undefined4 uVar5;
  int iVar6;
  wchar_t *extraout_ECX;
  uint extraout_ECX_00;
  uint uVar7;
  size_t local_218;
  wchar_t *local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_214 = (wchar_t *)0x0;
  pwVar1 = (wchar_t *)FUN_0040e8fe(L"MAKEDIR");
  _Path = _wgetcwd((wchar_t *)0x0,0);
  FUN_00403430(pwVar1,_Path,0x42);
  _wdupenv_s(&local_214,(size_t *)0x0,L"MAKEFLAGS");
  pwVar1 = local_214;
  if (local_214 != (wchar_t *)0x0) {
    pwVar2 = u_MAKEFLAGS__0041202c;
    do {
      pwVar3 = pwVar2;
      pwVar2 = pwVar3 + 1;
    } while (*pwVar3 != L'\0');
    wcsncpy_s(u_MAKEFLAGS__0041202c + 10,((int)(pwVar3 + -0x209016) >> 1) - 9,local_214,0xffffffff);
  }
  uVar7 = 6;
  DAT_0041248d = 1;
  pwVar2 = (wchar_t *)FUN_0040e8fe(u_MAKEFLAGS__0041202c + 10);
  pwVar3 = (wchar_t *)FUN_0040e8fe(L"MAKEFLAGS");
  FUN_00403430(pwVar3,pwVar2,uVar7);
  for (; (pwVar1 != (wchar_t *)0x0 && (*pwVar1 != L'\0')); pwVar1 = pwVar1 + 1) {
    FUN_0040c7e6(*pwVar1,'\x01');
  }
  free(local_214);
  local_214 = (wchar_t *)0x0;
  eVar4 = _wgetenv_s(&local_218,(wchar_t *)0x0,0,L"NTMAKEENV");
  if ((eVar4 == 0) && (local_218 != 0)) {
    DAT_004333f9 = 1;
  }
  FUN_0040c408(param_1 - 1,param_2 + 4);
  if (DAT_00422ee0 == '\0') {
    FUN_00405532();
  }
  if ((DAT_0041248c & 2) == 0) {
    FUN_0040bdeb();
    DAT_00422ee4 = L"tools.ini";
    _wsearchenv(L"tools.ini",L"INIT",local_210);
    if (local_210[0] != L'\0') {
      DAT_00422edc = (int)_wfsopen(local_210,L"rt,ccs=unicode",0x20);
      if ((FILE *)DAT_00422edc == (FILE *)0x0) {
        FUN_004053c9(0,0x41d);
      }
      uVar5 = FUN_0040889f();
      if ((char)uVar5 == '\0') {
        iVar6 = fclose((FILE *)DAT_00422edc);
      }
      else {
        DAT_004226a4 = DAT_004226a4 + 1;
        DAT_00422ee1 = 1;
        FUN_0040ceeb(extraout_ECX);
        iVar6 = fclose((FILE *)DAT_00422edc);
      }
      if (iVar6 == -1) {
        FUN_004053c9(0,0x424);
      }
    }
  }
  pwVar1 = (wchar_t *)FUN_0040e8fe(u_MAKEFLAGS__0041202c + 10);
  eVar4 = _wputenv_s(L"MAKEFLAGS",pwVar1);
  if (eVar4 != 0) {
    FUN_004053c9(0,0x41f);
  }
  if (DAT_004333f0 == 0) {
    FUN_0040c716();
  }
  FUN_0040c33c();
  FUN_0040c1f2(extraout_ECX_00);
  DAT_004226b0 = 0;
  FUN_0040e513();
  if ((DAT_0041248c & 1) != 0) {
    FUN_0040d3c6();
    FUN_0040d437();
    FUN_0040d4d7();
  }
  if (DAT_00432efc != 0) {
    free((void *)DAT_00432efc);
  }
  FUN_004038ef();
  _wchdir(_Path);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040c1f2(uint param_1)

{
  short *psVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  wchar_t *extraout_ECX;
  wchar_t *extraout_ECX_00;
  int *piVar4;
  wchar_t *_Size;
  LARGE_INTEGER LStack_10;
  
  piVar4 = DAT_004333f0;
  LStack_10.s.LowPart = param_1;
  LStack_10.s.HighPart = param_1;
  if (DAT_004333f0 != (int *)0x0) {
    do {
      psVar1 = (short *)piVar4[1];
      if ((*psVar1 == 0x2d) && (psVar1[1] == 0)) {
        DAT_00422ee4 = FUN_0040e8fe(L"STDIN");
        _Size = (wchar_t *)0x0;
        DAT_00422edc = __acrt_iob_func();
      }
      else {
        DAT_00422ee4 = FUN_0040e8fe(psVar1);
        DAT_00422edc = (int)_wfsopen((wchar_t *)DAT_00422ee4,L"rt,ccs=unicode",0x20);
        if ((FILE *)DAT_00422edc == (FILE *)0x0) {
          FUN_004053c9(0,0x41c);
        }
        LStack_10.s.LowPart = 0;
        LStack_10.s.HighPart = 0;
        _Size = (wchar_t *)_fileno((FILE *)DAT_00422edc);
        hFile = (HANDLE)_get_osfhandle((int)_Size);
        if ((hFile != (HANDLE)0xffffffff) &&
           (BVar2 = GetFileSizeEx(hFile,&LStack_10), _Size = extraout_ECX, BVar2 != 0)) {
          _Size = (wchar_t *)(LStack_10.s.LowPart + 1);
          if ((LStack_10.s.HighPart + (uint)(0xfffffffe < LStack_10.s.LowPart) + -1 +
               (uint)((wchar_t *)0x1 < _Size) == 0) && (LStack_10.s.LowPart - 1 < 0x7ffffffe)) {
            setvbuf((FILE *)DAT_00422edc,(char *)0x0,0,(size_t)_Size);
            _Size = extraout_ECX_00;
          }
        }
      }
      DAT_004226a4 = 0;
      DAT_00422ee1 = 0;
      FUN_0040ceeb(_Size);
      iVar3 = __acrt_iob_func(0);
      if ((DAT_00422edc != iVar3) && (iVar3 = fclose((FILE *)DAT_00422edc), iVar3 == -1)) {
        FUN_004053c9(0,0x424);
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  FUN_00404b9e(DAT_004333f0);
  return;
}



void FUN_0040c33c(void)

{
  wchar_t wVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *_Str;
  wchar_t *pwVar5;
  wchar_t **ppwVar6;
  
  puVar2 = (undefined4 *)__p__wenviron();
  ppwVar6 = (wchar_t **)*puVar2;
  pwVar3 = *ppwVar6;
  while (pwVar3 != (wchar_t *)0x0) {
    pwVar3 = wcschr(pwVar3,L'=');
    if ((pwVar3 != (wchar_t *)0x0) && (iVar4 = _wcsnicmp(*ppwVar6,L"MAKEFLAGS",8), iVar4 != 0)) {
      *pwVar3 = L'\0';
      if (**ppwVar6 != L'\0') {
        _Str = (wchar_t *)FUN_0040e8fe(*ppwVar6);
        pwVar5 = _Str;
        do {
          wVar1 = *pwVar5;
          pwVar5 = pwVar5 + 1;
        } while (wVar1 != L'\0');
        _wcsupr_s(_Str,((int)pwVar5 - (int)(_Str + 1) >> 1) + 1);
        pwVar5 = (wchar_t *)FUN_0040e8fe(pwVar3 + 1);
        *pwVar3 = L'=';
        DAT_0041248d = 0;
        iVar4 = FUN_00403430(_Str,pwVar5,4);
        if ((char)iVar4 == '\0') {
          free(_Str);
          free(pwVar5);
        }
      }
    }
    ppwVar6 = ppwVar6 + 1;
    pwVar3 = *ppwVar6;
  }
  return;
}



void __fastcall FUN_0040c408(uint param_1,int param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  FILE *pFVar10;
  void *pvVar11;
  wchar_t wVar12;
  uint uVar13;
  uint uVar14;
  FILE *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  
  bVar1 = false;
  uVar13 = 0;
  if (param_1 != 0) {
    local_14 = __acrt_iob_func_exref;
    local_10 = _wfopen_s_exref;
    local_c = fclose_exref;
    do {
      pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4);
      wVar12 = *pwVar6;
      if (wVar12 == L'@') {
        FUN_004051e1(pwVar6 + 1);
      }
      else if ((wVar12 == L'-') || (wVar12 == L'/')) {
        pwVar6 = pwVar6 + 1;
        iVar9 = _wcsicmp(pwVar6,L"help");
        if (iVar9 == 0) {
          bVar1 = true;
          break;
        }
        wVar12 = *pwVar6;
        while (wVar12 != L'\0') {
          iVar9 = _wcsicmp(pwVar6,L"nologo");
          if (iVar9 == 0) {
            FUN_0040c7e6(pwVar6[2],'\x01');
            break;
          }
          wVar12 = *pwVar6;
          if (wVar12 == L'?') {
            bVar1 = true;
            break;
          }
          if ((wVar12 == L'f') || (wVar12 == L'F')) {
            pwVar6 = pwVar6 + 1;
            if ((*pwVar6 == L'\0') &&
               ((uVar13 = uVar13 + 1, param_1 <= uVar13 ||
                (pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4), *pwVar6 == L'\0')))) {
              FUN_004053c9(0,0x425);
            }
            puVar7 = FUN_0040e8ac();
            pvVar11 = FUN_0040e8fe(pwVar6);
            puVar7[1] = pvVar11;
            FUN_0040ea03(&DAT_004333f0,puVar7);
            break;
          }
          if ((wVar12 == L'x') || (wVar12 == L'X')) {
            pwVar6 = pwVar6 + 1;
            wVar12 = *pwVar6;
            if (wVar12 == L'\0') {
              uVar13 = uVar13 + 1;
              if (uVar13 < param_1) {
                pwVar6 = *(wchar_t **)(param_2 + uVar13 * 4);
                wVar12 = *pwVar6;
                if (wVar12 != L'\0') goto LAB_0040c624;
              }
              FUN_004053c9(0,0x426);
              wVar12 = *pwVar6;
            }
LAB_0040c624:
            if ((wVar12 == L'-') && (pwVar6[1] == L'\0')) {
              pFVar10 = (FILE *)(*local_14)(1);
              FUN_0040cdbe(pFVar10);
            }
            else {
              iVar9 = (*local_10)(&local_18,pwVar6,&DAT_00402518);
              if (iVar9 != 0) {
                FUN_004053c9(0,0x418);
              }
              FUN_0040cdbe(local_18);
              (*local_c)(local_18);
            }
            break;
          }
          FUN_0040c7e6(wVar12,'\x01');
          pwVar6 = pwVar6 + 1;
          wVar12 = *pwVar6;
        }
      }
      else {
        pwVar2 = wcschr(pwVar6,L'=');
        if (pwVar2 == (wchar_t *)0x0) {
          FUN_0040cad0(pwVar6);
          if (*pwVar6 != L'\0') {
            puVar7 = FUN_0040e8ac();
            pwVar2 = wcschr(pwVar6,L' ');
            if (pwVar2 == (wchar_t *)0x0) {
              puVar8 = (undefined2 *)FUN_0040e8fe(pwVar6);
            }
            else {
              puVar8 = FUN_0040e942(pwVar6);
            }
            puVar7[1] = puVar8;
            FUN_0040ea03(&DAT_00422690,puVar7);
          }
        }
        else {
          if (pwVar2 == pwVar6) {
            FUN_004053c9(0,0x427);
          }
          *pwVar2 = L'\0';
          pwVar3 = pwVar2;
          do {
            do {
              pwVar4 = pwVar3;
              pwVar3 = pwVar4 + -1;
            } while (*pwVar3 == L' ');
          } while (*pwVar3 == L'\t');
          uVar14 = 2;
          DAT_0041248d = 1;
          *pwVar4 = L'\0';
          sVar5 = wcsspn(pwVar2 + 1,L" \t");
          pwVar2 = (wchar_t *)FUN_0040e8fe(pwVar2 + 1 + sVar5);
          sVar5 = wcsspn(pwVar6,L" \t");
          pwVar6 = (wchar_t *)FUN_0040e8fe(pwVar6 + sVar5);
          FUN_00403430(pwVar6,pwVar2,uVar14);
        }
        *(undefined4 *)(param_2 + uVar13 * 4) = 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_1);
    if (bVar1) {
      FUN_0040555e();
                    // WARNING: Subroutine does not return
      exit(0);
    }
  }
  return;
}



void FUN_0040c716(void)

{
  wchar_t *_Filename;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  int *piVar5;
  _WIN32_FIND_DATAW _Stack_468;
  wchar_t awStack_218 [262];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)&_Stack_468;
  iVar1 = _waccess(L"makefile",4);
  if (iVar1 == 0) {
    puVar2 = FUN_0040e8ac();
    pvVar3 = FUN_0040e8fe(L"makefile");
    puVar2[1] = pvVar3;
    DAT_004333f0 = puVar2;
  }
  else if (DAT_00422690 == (undefined4 *)0x0) {
    if ((DAT_0041248c & 1) == 0) {
      FUN_004053c9(0,0x428);
    }
  }
  else {
    _Filename = (wchar_t *)DAT_00422690[1];
    iVar1 = _waccess(_Filename,4);
    if (iVar1 == 0) {
      pwVar4 = wcsrchr(_Filename,L'.');
      if (pwVar4 != (wchar_t *)0x0) {
        piVar5 = FUN_0040e0a2(awStack_218,0x101,_Filename,pwVar4,&_Stack_468);
        if (piVar5 != (int *)0x0) goto LAB_0040c7d2;
      }
      DAT_004333f0 = DAT_00422690;
      DAT_00422690 = (undefined4 *)*DAT_00422690;
    }
  }
LAB_0040c7d2:
  ___security_check_cookie_4(local_c ^ (uint)&_Stack_468);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_0040c7e6(wint_t param_1,char param_2)

{
  wchar_t *pwVar1;
  byte bVar2;
  int iVar3;
  wchar_t _Ch;
  wchar_t *pwVar4;
  errno_t eVar5;
  byte bVar6;
  byte *pbVar7;
  
  bVar6 = 0;
  pbVar7 = &DAT_0041248e;
  _Ch = towupper(param_1);
  if ((ushort)_Ch < 0x4d) {
    if (_Ch == L'L') {
      bVar6 = 0x80;
LAB_0040c840:
      pbVar7 = &DAT_0041248c;
      DAT_00422ee0 = 1;
    }
    else {
      if ((ushort)_Ch < 0x45) {
        if (_Ch == L'D') {
          bVar6 = 1;
          goto LAB_0040c8c8;
        }
        if (_Ch == L' ') {
          return;
        }
        if (_Ch == L'A') {
          bVar6 = 0x10;
          goto LAB_0040c8c8;
        }
        if (_Ch == L'B') {
          DAT_004226b6 = 1;
          return;
        }
        if (_Ch == L'C') {
          bVar6 = 0x20;
          goto LAB_0040c840;
        }
      }
      else {
        if (_Ch == L'E') {
          bVar6 = 4;
          goto LAB_0040c89b;
        }
        if (_Ch == L'G') {
          DAT_00422ee3 = 1;
          return;
        }
        if (_Ch == L'I') {
          bVar6 = 2;
          goto LAB_0040c8c8;
        }
        if (_Ch == L'K') {
          DAT_004226b7 = 1;
          return;
        }
      }
LAB_0040c917:
      FUN_004053c9(0,0x429);
    }
    goto LAB_0040c8c8;
  }
  if ((ushort)_Ch < 0x53) {
    if (_Ch == L'R') {
      bVar6 = 2;
    }
    else {
      if (_Ch == L'N') {
        bVar6 = 4;
        goto LAB_0040c8c8;
      }
      if (_Ch == L'O') {
        DAT_004226b5 = 1;
        return;
      }
      if (_Ch != L'P') {
        if (_Ch != L'Q') goto LAB_0040c917;
        pbVar7 = &DAT_0041248c;
        goto LAB_0040c8c6;
      }
      bVar6 = 1;
    }
  }
  else {
    if (_Ch == L'S') {
LAB_0040c8c6:
      bVar6 = 8;
      goto LAB_0040c8c8;
    }
    if (_Ch == L'T') {
      bVar6 = 0x10;
    }
    else {
      if (_Ch == L'U') {
        bVar6 = 0x40;
        goto LAB_0040c8c8;
      }
      if (_Ch != L'Y') goto LAB_0040c917;
      bVar6 = 0x40;
    }
  }
LAB_0040c89b:
  pbVar7 = &DAT_0041248c;
LAB_0040c8c8:
  if (_DAT_0043332c == 0) {
    _DAT_0043332c = FUN_0040aaef((ushort *)L"MAKEFLAGS");
    DAT_00433328 = *(int *)(_DAT_0043332c + 8);
  }
  iVar3 = DAT_00433328;
  if (param_2 == '\0') {
    if (pbVar7 != &DAT_0041248e) {
      return;
    }
    DAT_0041248e = DAT_0041248e & ~bVar6;
    pwVar4 = wcschr(*(wchar_t **)(DAT_00433328 + 4),_Ch);
    if (pwVar4 != (wchar_t *)0x0) {
      do {
        pwVar1 = pwVar4 + 1;
        *pwVar4 = *pwVar1;
        pwVar4 = pwVar4 + 1;
      } while (*pwVar1 != L'\0');
    }
  }
  else {
    bVar2 = *pbVar7;
    *pbVar7 = bVar2 | bVar6;
    if (_Ch == L'Q') {
      *pbVar7 = bVar2 | bVar6 | 0x20;
    }
    pwVar4 = wcschr(*(wchar_t **)(iVar3 + 4),_Ch);
    if ((pwVar4 == (wchar_t *)0x0) &&
       (pwVar4 = wcschr(*(wchar_t **)(DAT_00433328 + 4),L' '), pwVar4 != (wchar_t *)0x0)) {
      *pwVar4 = _Ch;
    }
  }
  pwVar4 = (wchar_t *)FUN_0040e8fe(u_MAKEFLAGS__0041202c + 10);
  eVar5 = _wputenv_s(L"MAKEFLAGS",pwVar4);
  if (eVar5 != 0) {
    FUN_004053c9(DAT_004226a4,0x41f);
  }
  return;
}



void FUN_0040ca92(void)

{
  undefined4 *puVar1;
  
  _fcloseall();
  for (puVar1 = DAT_004333f4; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    _wunlink((wchar_t *)puVar1[1]);
    if ((DAT_0041248e & 4) != 0) {
      FUN_0040ce63(L"\tdel %s\n",(char)puVar1[1]);
      FUN_0040ce45();
    }
  }
  return;
}



void __fastcall FUN_0040cad0(short *param_1)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  
  bVar2 = false;
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  psVar3 = param_1 + ((int)psVar3 - (int)(param_1 + 1) >> 1) + -1;
  if (*param_1 != 0x22) goto LAB_0040cb0f;
  if (*psVar3 != 0x22) goto LAB_0040cb0f;
  bVar2 = true;
  do {
    psVar3 = psVar3 + -1;
LAB_0040cb0f:
  } while ((param_1 < psVar3) && ((*psVar3 == 0x20 || (*psVar3 == 0x2e))));
  if (bVar2) {
    psVar3 = psVar3 + 1;
    *psVar3 = 0x22;
  }
  psVar3[1] = 0;
  return;
}



void __fastcall FUN_0040cb26(uint param_1)

{
  HMODULE hModule;
  wchar_t **ppwVar1;
  errno_t eVar2;
  int iVar3;
  HRSRC hResInfo;
  HGLOBAL pvVar4;
  uint uVar5;
  wchar_t local_61c [260];
  wchar_t local_414 [256];
  wchar_t local_214 [258];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  if (DAT_004372d4 == '\0') {
    ppwVar1 = (wchar_t **)__p__wpgmptr();
    _wsplitpath_s(*ppwVar1,local_10,3,local_414,0x100,local_214,0x100,(wchar_t *)0x0,0);
    _wmakepath_s(local_61c,0x104,local_10,local_414,(wchar_t *)0x0,(wchar_t *)0x0);
    eVar2 = wcsncat_s(local_214,0x100,L"UI.DLL",0xffffffff);
    if ((eVar2 != 0) || (iVar3 = FUN_0040abfc(local_61c,local_214), iVar3 < 0)) {
      DAT_004372d8 = (HMODULE)0x0;
    }
    DAT_004372d4 = '\x01';
  }
  hModule = DAT_004372d8;
  hResInfo = FindResourceExW(DAT_004372d8,(LPCWSTR)0x6,(LPCWSTR)((param_1 >> 4) + 1 & 0xffff),
                             DAT_004372dc);
  if ((hResInfo != (HRSRC)0x0) && (pvVar4 = LoadResource(hModule,hResInfo), pvVar4 != (HGLOBAL)0x0))
  {
    for (uVar5 = param_1 & 0xf; uVar5 != 0; uVar5 = uVar5 - 1) {
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined * FUN_0040cc47(void)

{
  return &DAT_00436648;
}



int __cdecl FUN_0040cc4d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_4;
  uVar3 = 0;
  puVar1 = (undefined4 *)FUN_0040cc47();
  iVar2 = __stdio_common_vswprintf_s(*puVar1,puVar1[1],param_1,param_2,param_3,uVar3,puVar4);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



int __fastcall FUN_0040cc7b(void *param_1,void *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    piVar1 = _errno();
    iVar2 = 0x16;
    *piVar1 = 0x16;
    _invalid_parameter_noinfo();
  }
  else if ((param_2 == (void *)0x0) || (0x104 < param_3)) {
    memset(param_1,0,0x104);
    if (param_2 == (void *)0x0) {
      piVar1 = _errno();
      iVar2 = 0x16;
    }
    else {
      if (param_3 < 0x105) {
        return 0x16;
      }
      piVar1 = _errno();
      iVar2 = 0x22;
    }
    *piVar1 = iVar2;
    _invalid_parameter_noinfo();
  }
  else {
    memcpy(param_1,param_2,param_3);
    iVar2 = 0;
  }
  return iVar2;
}



undefined * FUN_0040ccf5(void)

{
  return &DAT_00436658;
}



void __cdecl FUN_0040ccfb(undefined4 param_1,undefined4 param_2,undefined param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar4 = &param_3;
  uVar3 = 0;
  uVar2 = 0xffffffff;
  puVar1 = (uint *)FUN_0040ccf5();
  __stdio_common_vswscanf(*puVar1 | 1,puVar1[1],param_1,uVar2,param_2,uVar3,puVar4);
  return;
}



uint __fastcall FUN_0040cd25(FILE *param_1)

{
  int _FileHandle;
  HANDLE hFile;
  DWORD DVar1;
  uint uVar2;
  FILE *local_8;
  
  local_8 = param_1;
  _FileHandle = _fileno(param_1);
  hFile = (HANDLE)_get_osfhandle(_FileHandle);
  DVar1 = GetFileType(hFile);
  uVar2 = DVar1 & 0xffff7fff;
  if ((uVar2 == 2) && (uVar2 = GetConsoleMode(hFile,(LPDWORD)&local_8), uVar2 != 0)) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}



int FUN_0040cd65(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_004333fd != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(2);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040cd83(undefined4 param_1,undefined param_2)

{
  FUN_0040cdfb(param_1,&param_2);
  return;
}



wint_t FUN_0040cd92(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_004333fd == '\0') {
    _File = (FILE *)__acrt_iob_func(2);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040cdbe(FILE *param_1)

{
  FILE *pFVar1;
  int _FileHandleDst;
  int _FileHandleSrc;
  undefined4 uVar2;
  
  pFVar1 = (FILE *)__acrt_iob_func(2);
  _FileHandleDst = _fileno(pFVar1);
  _FileHandleSrc = _fileno(param_1);
  _dup2(_FileHandleSrc,_FileHandleDst);
  pFVar1 = (FILE *)__acrt_iob_func(2);
  uVar2 = FUN_0040cd25(pFVar1);
  DAT_004333fd = (char)uVar2;
  return;
}



void __fastcall FUN_0040cdfb(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040cc47();
  if (DAT_004333fd == '\0') {
    uVar2 = __acrt_iob_func(2);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



int FUN_0040ce45(void)

{
  FILE *_File;
  int iVar1;
  
  if (DAT_004333fe != '\0') {
    return 0;
  }
  _File = (FILE *)__acrt_iob_func(1);
  iVar1 = fflush(_File);
  return iVar1;
}



void FUN_0040ce63(undefined4 param_1,undefined param_2)

{
  FUN_0040ce9e(param_1,&param_2);
  return;
}



wint_t FUN_0040ce72(void)

{
  wint_t wVar1;
  FILE *_File;
  
  if (DAT_004333fe == '\0') {
    _File = (FILE *)__acrt_iob_func(1);
    wVar1 = fputwc(L'\n',_File);
  }
  else {
    wVar1 = _putwch(L'\n');
  }
  return wVar1;
}



void __fastcall FUN_0040ce9e(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0040cc47();
  if (DAT_004333fe == '\0') {
    uVar2 = __acrt_iob_func(1);
    __stdio_common_vfwprintf(*puVar1,puVar1[1],uVar2,param_1,0,param_2);
  }
  else {
    __conio_common_vcwprintf(*puVar1,puVar1[1],param_1,0,param_2);
  }
  return;
}



void __fastcall FUN_0040ceeb(wchar_t *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 extraout_var;
  wchar_t *pwVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  undefined2 extraout_var_00;
  wchar_t *extraout_ECX_02;
  undefined3 uVar9;
  uint uVar10;
  char local_5;
  
  DAT_00422ee2 = 1;
  (&DAT_00433311)[DAT_00412028] = 0x17;
  uVar6 = DAT_00412028 + 2;
  if (0xf < uVar6) {
    DAT_00412028 = uVar6;
    ___report_rangecheckfailure();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = &DAT_00433312 + DAT_00412028;
  DAT_00412028 = uVar6;
  *puVar1 = 0;
  DAT_004226b0 = DAT_004226a4;
  cVar4 = FUN_00409b3f(param_1,'\0');
  bVar5 = (&DAT_00433310)[DAT_00412028];
  pwVar8 = (wchar_t *)CONCAT31(CONCAT21(extraout_var,cVar4),bVar5);
  uVar6 = (uint)bVar5;
  do {
    if (bVar5 == 0x17) {
      DAT_00412028 = DAT_00412028 - 1;
      return;
    }
    if ((uVar6 & 0x40) == 0) {
      bVar5 = (byte)((uint)pwVar8 >> 8);
      local_5 = (char)(uVar6 >> 8);
      if ((uVar6 & 0x10) == 0) {
        uVar10 = uVar6 & 0xff;
        bVar5 = (&DAT_004014a0)[uVar10 * 8 + (bVar5 & 0xf)];
        uVar7 = (uint)bVar5;
        if ((bVar5 & 0x20) != 0) {
          FUN_004053c9(DAT_004226b0,uVar7 + 1000);
          pwVar8 = extraout_ECX_02;
        }
        DAT_00412028 = DAT_00412028 - 1;
        if ((char)bVar5 < '\0') {
          if (local_5 == '\0') {
            bVar5 = FUN_00409b3f(pwVar8,(byte)uVar6);
            uVar6 = (uint)bVar5 << 8;
          }
          uVar7 = (uVar7 & 0xf) + (uint)(byte)(&DAT_00401480)[uVar10 * 8 + (uVar6 >> 8 & 0xf)];
        }
        pbVar2 = (&PTR_DAT_004014e0)[uVar7];
        uVar7 = (uint)*pbVar2;
        uVar10 = DAT_00412028;
        if (uVar7 != 0) {
          do {
            DAT_00412028 = uVar10 + 1;
            (&DAT_00433311)[uVar10] = pbVar2[uVar7];
            uVar7 = uVar7 - 1;
            uVar10 = DAT_00412028;
          } while (uVar7 != 0);
          uVar7 = 0;
        }
        goto LAB_0040d0a9;
      }
      if ((byte)uVar6 != bVar5) {
        FUN_004053c9(DAT_004226b0,0x409);
        uVar7 = extraout_ECX_00;
        goto LAB_0040d0a9;
      }
      bVar5 = (&DAT_0043330f)[DAT_00412028];
      pwVar8 = (wchar_t *)CONCAT31((int3)((uint)pwVar8 >> 8),bVar5);
      uVar7 = DAT_00412028 - 1;
      if ((bVar5 & 0x40) != 0) {
        DAT_00412028 = DAT_00412028 - 2;
        (*(code *)(&PTR_FUN_00401460)[bVar5 & 0xf])();
        pwVar8 = extraout_ECX_01;
        uVar7 = DAT_00412028;
      }
      DAT_00412028 = uVar7;
      DAT_004226b0 = DAT_004226a4;
      if (local_5 == '\0') {
        local_5 = FUN_00409b3f(pwVar8,(&DAT_00433310)[DAT_00412028]);
        uVar9 = CONCAT21(extraout_var_00,local_5);
        DAT_004226b0 = DAT_004226a4;
      }
      else {
        if (DAT_004226c0 == 10) {
          DAT_004226b0 = DAT_004226a4 + -1;
        }
        uVar9 = CONCAT21((short)((uint)pwVar8 >> 0x10),local_5);
        uVar6 = 0;
      }
    }
    else {
      DAT_00412028 = DAT_00412028 - 1;
      (*(code *)(&PTR_FUN_00401460)[(uint)pwVar8 & 0xf])();
      uVar7 = extraout_ECX;
LAB_0040d0a9:
      uVar9 = CONCAT21((short)(uVar7 >> 0x10),cVar4);
      local_5 = cVar4;
    }
    bVar5 = (&DAT_00433310)[DAT_00412028];
    pwVar8 = (wchar_t *)CONCAT31(uVar9,bVar5);
    uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
    cVar4 = local_5;
  } while( true );
}



uint __fastcall FUN_0040d0cf(int param_1,short *param_2)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  undefined1 unaff_DI;
  
  psVar1 = param_2 + 1;
  do {
    sVar3 = *param_2;
    param_2 = param_2 + 1;
  } while (sVar3 != 0);
  uVar2 = ((int)param_2 - (int)psVar1 >> 1) + param_1;
  if (0x28 < uVar2) {
    FUN_0040ce63(L"\n\t\t\t",unaff_DI);
  }
  return ~-(uint)(0x28 < uVar2) & uVar2;
}



void FUN_0040d103(uint param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  _FILETIME local_60;
  _SYSTEMTIME local_58;
  WCHAR local_48 [20];
  WCHAR local_20 [12];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  if ((param_1 | param_2) == 0) {
    FUN_004054a3(6);
  }
  else {
    BVar1 = FileTimeToLocalFileTime((FILETIME *)&param_1,&local_60);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_60,&local_58);
      if (BVar1 != 0) {
        iVar2 = GetDateFormatW(0x400,0,&local_58,L"ddd, MMM dd yyyy",local_48,0x14);
        if (iVar2 != 0) {
          iVar2 = GetTimeFormatW(0x400,0,&local_58,L"HH:mm:ss",local_20,0xc);
          if (iVar2 != 0) {
            FUN_004054a3(4);
          }
        }
      }
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void __fastcall FUN_0040d1bd(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  wchar_t *pwVar3;
  short *psVar4;
  uint uVar5;
  int *local_270;
  undefined4 *local_26c;
  wchar_t *local_268;
  HANDLE local_264;
  uint local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_270 = param_2;
  local_26c = param_1;
  FUN_004054a3(0xc);
  uVar5 = 0;
  local_260 = 0;
  while (param_1 != (undefined4 *)0x0) {
    pwVar2 = wcschr((wchar_t *)param_1[1],L'$');
    if (pwVar2 == (wchar_t *)0x0) {
      pwVar2 = wcspbrk((wchar_t *)param_1[1],L"*?");
      if (pwVar2 == (wchar_t *)0x0) {
        FUN_0040ce63(&DAT_00402608,(char)param_1[1]);
        uVar5 = FUN_0040d0cf(uVar5,(short *)param_1[1]);
        uVar1 = uVar5;
      }
      else {
        pwVar2 = (wchar_t *)FUN_00407a1b((wchar_t *)param_1[1],&local_25c,&local_264);
        uVar1 = local_260;
        while (pwVar2 != (wchar_t *)0x0) {
          psVar4 = (short *)FUN_0040ff18((wchar_t *)param_1[1],pwVar2);
          FUN_0040ce63(&DAT_00402608,(char)psVar4);
          uVar5 = FUN_0040d0cf(uVar5,psVar4);
          free(psVar4);
          pwVar2 = FUN_00407ba7(&local_25c,local_264);
          uVar1 = uVar5;
        }
      }
    }
    else {
      local_268 = (wchar_t *)0x0;
      _Str = (wchar_t *)FUN_0040f2f6((wchar_t *)param_1[1],'\x01',&local_270);
      pwVar2 = wcstok_s(_Str,L" \t",&local_268);
      uVar5 = local_260;
      while (pwVar2 != (wchar_t *)0x0) {
        pwVar3 = wcspbrk(pwVar2,L"*?");
        if (pwVar3 == (wchar_t *)0x0) {
          FUN_0040ce63(&DAT_00402608,(char)pwVar2);
          uVar5 = FUN_0040d0cf(uVar5,pwVar2);
        }
        else {
          pwVar3 = (wchar_t *)FUN_00407a1b(pwVar2,&local_25c,&local_264);
          while (pwVar3 != (wchar_t *)0x0) {
            psVar4 = (short *)FUN_0040ff18(pwVar2,pwVar3);
            FUN_0040ce63(&DAT_00402608,(char)psVar4);
            uVar5 = FUN_0040d0cf(uVar5,psVar4);
            free(psVar4);
            pwVar3 = FUN_00407ba7(&local_25c,local_264);
          }
        }
        pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_268);
        param_1 = local_26c;
      }
      local_260 = uVar5;
      free(_Str);
      uVar5 = local_260;
      uVar1 = local_260;
    }
    local_260 = uVar1;
    param_1 = (undefined4 *)*param_1;
    local_26c = param_1;
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



void FUN_0040d3c6(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_004054a3(8);
  puVar3 = &DAT_00432f10;
  do {
    for (puVar2 = (undefined4 *)*puVar3; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if ((puVar2[2] != 0) && (*(int *)(puVar2[2] + 4) != 0)) {
        FUN_004054a3(0xe);
        for (puVar1 = *(undefined4 **)puVar2[2]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[1] != 0) {
            FUN_0040ce63(L"\t\t%s\n",(char)puVar1[1]);
          }
        }
      }
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x433310);
  FUN_0040ce72();
  FUN_0040ce45();
  return;
}



void FUN_0040d437(void)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  FUN_004054a3(7);
  for (puVar2 = DAT_00422694; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    pwVar1 = L"%s::";
    if (*(char *)(puVar2 + 5) == '\0') {
      pwVar1 = L"%s:";
    }
    FUN_0040ce63(pwVar1,(char)puVar2[2]);
    FUN_004054a3(10);
    piVar3 = (int *)puVar2[3];
    if (piVar3 != (int *)0x0) {
      iVar4 = piVar3[1];
      pwVar1 = L"%s\n";
      while( true ) {
        FUN_0040ce63(pwVar1,(char)iVar4);
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) break;
        pwVar1 = L"\t\t\t%s\n";
      }
    }
    FUN_0040ce72();
  }
  FUN_0040ce63(L"%s: ",0x38);
  for (puVar2 = DAT_004226a0; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    FUN_0040ce63(&DAT_00402608,(char)puVar2[1]);
  }
  FUN_0040ce72();
  FUN_0040ce45();
  return;
}



void FUN_0040d4d7(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint unaff_EBP;
  wchar_t *pwVar3;
  int *piVar4;
  int iVar5;
  uint local_c;
  undefined4 *puStack_8;
  
  FUN_004054a3(9);
  local_c = 0;
  do {
    puVar1 = *(undefined4 **)((int)&DAT_00422490 + local_c);
    while (puVar1 != (undefined4 *)0x0) {
      FUN_0040ce63(L"%s:%c",(char)puVar1[1]);
      DAT_00422ec8 = puVar1[1];
      puVar2 = (undefined4 *)puVar1[6];
      DAT_00422ed4 = DAT_00422ec8;
      DAT_00422ed8 = DAT_00422ec8;
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        puVar1 = (undefined4 *)puVar2[1];
        FUN_004054a3(0xb);
        pwVar3 = L"dinsb";
        local_c = 1;
        do {
          if ((*(byte *)(puVar1 + 4) & (byte)local_c) != 0) {
            FUN_0040ce63(L"-%c ",(char)*pwVar3);
            local_c = unaff_EBP;
          }
          local_c = local_c * 2;
          pwVar3 = pwVar3 + 1;
        } while (local_c < 0x10);
        FUN_0040d1bd((undefined4 *)*puVar1,(int *)puVar1[1]);
        FUN_004054a3(10);
        piVar4 = (int *)puVar1[2];
        if (piVar4 != (int *)0x0) {
          if (piVar4[1] == 0) goto LAB_0040d5c5;
          iVar5 = piVar4[1];
          pwVar3 = L"%s\n";
          do {
            FUN_0040ce63(pwVar3,(char)iVar5);
LAB_0040d5c5:
            do {
              piVar4 = (int *)*piVar4;
              if (piVar4 == (int *)0x0) goto LAB_0040d5d2;
            } while (piVar4[1] == 0);
            iVar5 = piVar4[1];
            pwVar3 = L"\t\t\t%s\n";
          } while( true );
        }
        FUN_0040ce72();
LAB_0040d5d2:
        puVar1 = puStack_8;
      }
      puVar1 = (undefined4 *)*puVar1;
      FUN_0040ce72();
    }
    local_c = local_c + 4;
    if (0x1ff < local_c) {
      FUN_0040ce72();
      FUN_0040ce45();
      DAT_00422ec8 = 0;
      DAT_00422ed4 = 0;
      DAT_00422ed8 = 0;
      return;
    }
  } while( true );
}



uint FUN_0040d62c(byte param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  ushort uVar6;
  char *pcVar7;
  undefined4 in_EAX;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  bool bVar13;
  
  pcVar7 = DAT_00433610;
  cVar5 = *DAT_00433610;
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  pcVar1 = DAT_00433610 + -8;
  if (cVar5 != '\x16') {
    if ((cVar5 != '\x17') || (*pcVar1 != '\x17')) goto LAB_0040d828;
    puVar11 = *(ushort **)(DAT_00433610 + 4);
    puVar9 = *(ushort **)(DAT_00433610 + -4);
    do {
      uVar6 = *puVar9;
      bVar13 = uVar6 < *puVar11;
      if (uVar6 != *puVar11) {
LAB_0040d7ca:
        uVar12 = -(uint)bVar13 | 1;
        goto LAB_0040d7cf;
      }
      if (uVar6 == 0) break;
      uVar6 = puVar9[1];
      bVar13 = uVar6 < puVar11[1];
      if (uVar6 != puVar11[1]) goto LAB_0040d7ca;
      puVar9 = puVar9 + 2;
      puVar11 = puVar11 + 2;
    } while (uVar6 != 0);
    uVar12 = 0;
LAB_0040d7cf:
    uVar8 = (uint)param_1;
    if (uVar8 == 6) {
      uVar8 = (uint)(uVar12 != 0);
    }
    else if (uVar8 == 7) {
      uVar8 = (uint)(uVar12 == 0);
    }
    else if (uVar8 == 8) {
      uVar8 = (uint)(0 < (int)uVar12);
    }
    else {
      if (uVar8 != 9) {
        if (uVar8 != 10) {
          uVar8 = uVar8 - 0xb;
          if (uVar8 != 0) goto LAB_0040d828;
          uVar8 = (uint)((int)uVar12 < 1);
          goto LAB_0040d81e;
        }
        uVar12 = ~uVar12;
      }
      uVar8 = uVar12 >> 0x1f;
    }
LAB_0040d81e:
    puVar4 = (uint *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *puVar4 = uVar8;
    *pcVar1 = '\x16';
    goto LAB_0040d824;
  }
  if (*pcVar1 != '\x16') {
LAB_0040d828:
    DAT_00433610 = pcVar1;
    return uVar8 & 0xffffff00;
  }
  uVar8 = param_1 - 1;
  switch(uVar8) {
  case 0:
    if (*(int *)(DAT_00433610 + -4) == 0) {
LAB_0040d66f:
      uVar8 = 0;
      if (*(int *)(DAT_00433610 + 4) == 0) goto LAB_0040d786;
    }
    uVar8 = 1;
    goto LAB_0040d786;
  case 1:
    uVar8 = 0;
    if (*(int *)(DAT_00433610 + -4) != 0) goto LAB_0040d66f;
    goto LAB_0040d786;
  case 2:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    puVar4 = (uint *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *puVar4 = *puVar4 | uVar8;
    break;
  case 3:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    puVar4 = (uint *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *puVar4 = *puVar4 ^ uVar8;
    break;
  case 4:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    puVar4 = (uint *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *puVar4 = *puVar4 & uVar8;
    break;
  case 5:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    uVar12 = (uint)(uVar8 != *(uint *)(DAT_00433610 + -4));
    goto LAB_0040d6b9;
  case 6:
    uVar8 = (uint)(*(int *)(DAT_00433610 + 4) == *(int *)(DAT_00433610 + -4));
    goto LAB_0040d786;
  case 7:
    uVar8 = *(uint *)(DAT_00433610 + -4);
    uVar12 = (uint)(*(int *)(DAT_00433610 + 4) < (int)uVar8);
    goto LAB_0040d6b9;
  case 8:
    uVar8 = *(uint *)(DAT_00433610 + -4);
    uVar12 = (uint)((int)uVar8 < *(int *)(DAT_00433610 + 4));
    goto LAB_0040d6b9;
  case 9:
    uVar8 = *(uint *)(DAT_00433610 + -4);
    uVar12 = (uint)(*(int *)(DAT_00433610 + 4) <= (int)uVar8);
    goto LAB_0040d6b9;
  case 10:
    uVar8 = *(uint *)(DAT_00433610 + -4);
    uVar12 = (uint)((int)uVar8 <= *(int *)(DAT_00433610 + 4));
LAB_0040d6b9:
    puVar4 = (uint *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *puVar4 = uVar12;
    break;
  case 0xb:
    puVar2 = (undefined4 *)(DAT_00433610 + 4);
    piVar3 = (int *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *piVar3 = *piVar3 >> ((byte)*puVar2 & 0x1f);
    break;
  case 0xc:
    puVar2 = (undefined4 *)(DAT_00433610 + 4);
    piVar3 = (int *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *piVar3 = *piVar3 << ((byte)*puVar2 & 0x1f);
    break;
  case 0xd:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    piVar3 = (int *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *piVar3 = *piVar3 - uVar8;
    break;
  case 0xe:
    uVar8 = *(uint *)(DAT_00433610 + 4);
    piVar3 = (int *)(DAT_00433610 + -4);
    DAT_00433610 = pcVar1;
    *piVar3 = *piVar3 + uVar8;
    break;
  case 0xf:
    iVar10 = *(int *)(DAT_00433610 + 4);
    DAT_00433610 = pcVar1;
    if (iVar10 == 0) {
      FUN_004053c9(DAT_004226a4,0x437);
      iVar10 = *(int *)(pcVar7 + 4);
    }
    uVar8 = *(int *)(pcVar7 + -4) / iVar10;
    *(int *)(pcVar7 + -4) = *(int *)(pcVar7 + -4) % iVar10;
    break;
  case 0x10:
    iVar10 = *(int *)(DAT_00433610 + 4);
    DAT_00433610 = pcVar1;
    if (iVar10 == 0) {
      FUN_004053c9(DAT_004226a4,0x437);
      iVar10 = *(int *)(pcVar7 + 4);
    }
    uVar8 = *(int *)(pcVar7 + -4) / iVar10;
    pcVar1 = DAT_00433610;
    goto LAB_0040d786;
  case 0x11:
    uVar8 = *(int *)(DAT_00433610 + -4) * *(int *)(DAT_00433610 + 4);
LAB_0040d786:
    DAT_00433610 = pcVar1;
    *(uint *)(pcVar7 + -4) = uVar8;
    break;
  default:
    goto LAB_0040d828;
  }
LAB_0040d824:
  return CONCAT31((int3)(uVar8 >> 8),1);
}



uint FUN_0040d87c(byte param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*DAT_00433610 == '\x16') {
    uVar1 = (uint)param_1;
    if (uVar1 == 0x13) {
      *(int *)(DAT_00433610 + 4) = -*(int *)(DAT_00433610 + 4);
    }
    else if (uVar1 == 0x14) {
      *(uint *)(DAT_00433610 + 4) = ~*(uint *)(DAT_00433610 + 4);
    }
    else {
      in_EAX = uVar1 - 0x15;
      if (in_EAX != 0) goto LAB_0040d8b4;
      *(uint *)(DAT_00433610 + 4) = (uint)(*(int *)(DAT_00433610 + 4) == 0);
    }
    uVar1 = 1;
  }
  else {
LAB_0040d8b4:
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}



short * FUN_0040d8ba(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00433614 + 2);
  sVar1 = *psVar3;
  DAT_00433614 = psVar3;
  if (sVar1 != 0) {
    do {
      psVar2 = DAT_00433614;
      if ((sVar1 == 0x22) && (psVar2 = DAT_00433614 + 1, *psVar2 != 0x22)) break;
      DAT_00433614 = psVar2 + 1;
      sVar1 = *DAT_00433614;
    } while (sVar1 != 0);
    if (*DAT_00433614 != 0) goto LAB_0040d91f;
  }
  FUN_004053c9(DAT_004226a4,0x3fe);
LAB_0040d91f:
  *DAT_00433614 = 0;
  DAT_00433614 = DAT_00433614 + 1;
  return psVar3;
}



short * FUN_0040d931(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)DAT_00433614 + 2);
  sVar1 = *psVar3;
  DAT_00433614 = psVar3;
  if (sVar1 != 0) {
    do {
      if ((sVar1 == 0x5e) && (psVar2 = DAT_00433614 + 1, *psVar2 == 0x5d)) {
        do {
          sVar1 = *psVar2;
          psVar2 = psVar2 + 1;
        } while (sVar1 != 0);
        memmove(DAT_00433614,DAT_00433614 + 1,((int)psVar2 - (int)(DAT_00433614 + 2) >> 1) * 2 + 2);
      }
      else if (sVar1 == 0x5d) break;
      DAT_00433614 = DAT_00433614 + 1;
      sVar1 = *DAT_00433614;
    } while (sVar1 != 0);
    if (*DAT_00433614 != 0) goto LAB_0040d9d7;
  }
  FUN_004053c9(DAT_004226a4,0x3fe);
LAB_0040d9d7:
  *DAT_00433614 = 0;
  DAT_00433614 = DAT_00433614 + 1;
  return psVar3;
}



void __fastcall FUN_0040d9e9(byte param_1,undefined4 param_2)

{
  uint3 uVar2;
  uint uVar1;
  
  uVar2 = (uint3)param_1;
  if (param_1 == 0x19) {
    uVar1 = CONCAT31(uVar2,3);
  }
  else if (param_1 == 0) {
    uVar1 = CONCAT31(uVar2,4);
  }
  else if (param_1 < 0x16) {
    uVar1 = (uint)CONCAT11(param_1,(0x12 < param_1) + '\x01');
  }
  else {
    uVar1 = (uint)uVar2 << 8;
  }
  if ((&DAT_00401570)[(uVar1 & 0xff) + (uint)DAT_004333ff * 5] == '\0') {
    FUN_004053c9(DAT_004226a4,0x3ff);
  }
  DAT_00433608 = param_2;
  DAT_004333ff = (char)uVar1;
  DAT_00433603 = (undefined)(uVar1 >> 8);
  DAT_00433604._0_1_ = DAT_00433603;
  return;
}



short * FUN_0040da57(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  for (; (sVar1 = *DAT_00433614, sVar1 == 0x20 || (sVar1 == 9)); DAT_00433614 = DAT_00433614 + 1) {
  }
  psVar2 = DAT_00433614;
  if (sVar1 != 0x28) {
    FUN_004053c9(DAT_004226a4,0x3ff);
    psVar2 = DAT_00433614;
  }
  do {
    do {
      psVar2 = psVar2 + 1;
      sVar1 = *psVar2;
    } while (sVar1 == 0x20);
  } while (sVar1 == 9);
  DAT_00433614 = psVar2;
  psVar3 = psVar2;
  if (sVar1 == 0x22) {
    psVar2 = FUN_0040d8ba();
    for (; (sVar1 = *DAT_00433614, sVar1 == 0x20 || (sVar1 == 9)); DAT_00433614 = DAT_00433614 + 1)
    {
    }
    if (sVar1 != 0x29) {
      FUN_004053c9(DAT_004226a4,0x3ff);
    }
    DAT_00433614 = DAT_00433614 + 1;
  }
  else {
    while( true ) {
      sVar1 = *DAT_00433614;
      DAT_00433614 = DAT_00433614 + 1;
      if (sVar1 == 0) {
        FUN_004053c9(DAT_004226a4,0x3ff);
      }
      if (sVar1 == 0x29) break;
      if ((sVar1 != 0x20) && (sVar1 != 9)) {
        psVar3 = DAT_00433614;
      }
    }
    *psVar3 = 0;
  }
  return psVar2;
}



void FUN_0040db64(void)

{
  ushort _C;
  ushort uVar1;
  bool bVar2;
  wint_t wVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  byte bVar7;
  ushort *puVar8;
  short *psVar9;
  ushort *puVar10;
  undefined **ppuVar11;
  
  for (; (_C = *DAT_00433614, _C == 0x20 || (_C == 9)); DAT_00433614 = DAT_00433614 + 1) {
  }
  puVar10 = DAT_00433614;
  if ((_C < 0x80) && (((&DAT_00401060)[_C] & 2) != 0)) {
    ppuVar11 = &PTR_DAT_00412070;
    puVar8 = (ushort *)PTR_DAT_00412070;
    if (PTR_DAT_00412070 == (undefined *)0x0) goto LAB_0040dc21;
    do {
      uVar1 = *puVar8;
      for (puVar10 = DAT_00433614; (uVar1 != 0 && (*puVar10 == uVar1)); puVar10 = puVar10 + 1) {
        puVar8 = puVar8 + 1;
        uVar1 = *puVar8;
      }
      if (*puVar8 == 0) goto LAB_0040dc21;
      ppuVar11 = (undefined **)((ushort **)ppuVar11 + 2);
      puVar8 = (ushort *)*ppuVar11;
    } while (puVar8 != (ushort *)0x0);
  }
  else {
    ppuVar11 = (undefined **)&DAT_00412118;
LAB_0040dc21:
    DAT_00433614 = puVar10;
    if ((ushort *)*ppuVar11 != (ushort *)0x0) {
      bVar7 = *(byte *)((ushort **)ppuVar11 + 1);
      psVar9 = (short *)0x0;
      goto LAB_0040dc2a;
    }
  }
  if (_C == 0x2d) {
    DAT_00433614 = DAT_00433614 + 1;
    bVar7 = ((DAT_00433603 != '\x16') - 1U & 0xfb) + 0x13;
    psVar9 = (short *)0x0;
  }
  else if (_C == 0x22) {
    psVar9 = FUN_0040d8ba();
    bVar7 = 0x17;
  }
  else if (_C == 0x5b) {
    psVar9 = FUN_0040d931();
    bVar7 = 0x18;
  }
  else {
    iVar4 = iswdigit(_C);
    if (iVar4 == 0) {
      if (_C == 0) {
        psVar9 = (short *)0x0;
        DAT_00433602 = 1;
        bVar7 = 0;
        goto LAB_0040dc2a;
      }
      iVar4 = _wcsnicmp((wchar_t *)DAT_00433614,L"DEFINED",7);
      if (iVar4 == 0) {
        DAT_00433614 = DAT_00433614 + 7;
        pwVar6 = FUN_0040da57();
        bVar2 = FUN_0040dfd6(pwVar6);
        psVar9 = (short *)(uint)bVar2;
      }
      else {
        iVar4 = _wcsnicmp((wchar_t *)DAT_00433614,L"EXISTS",6);
        if (iVar4 == 0) {
          DAT_00433614 = DAT_00433614 + 6;
        }
        else {
          iVar4 = _wcsnicmp((wchar_t *)DAT_00433614,L"EXIST",5);
          if (iVar4 != 0) {
            FUN_004053c9(DAT_004226a4,0x3ff);
            return;
          }
          DAT_00433614 = DAT_00433614 + 5;
        }
        pwVar6 = FUN_0040da57();
        iVar4 = _waccess(pwVar6,0);
        psVar9 = (short *)(uint)(iVar4 == 0);
      }
    }
    else {
      piVar5 = _errno();
      *piVar5 = 0;
      psVar9 = (short *)wcstol((wchar_t *)DAT_00433614,(wchar_t **)&DAT_00433614,0);
      piVar5 = _errno();
      iVar4 = DAT_004226a4;
      if (*piVar5 == 0x22) {
        *DAT_00433614 = 0;
        FUN_004053c9(iVar4,0x436);
      }
      wVar3 = towupper(*DAT_00433614);
      if (wVar3 == 0x4c) {
        DAT_00433614 = DAT_00433614 + 1;
      }
    }
    bVar7 = 0x16;
  }
LAB_0040dc2a:
  FUN_0040d9e9(bVar7,psVar9);
  return;
}



void FUN_0040de42(void)

{
  if (DAT_00433610 < &DAT_00435620) {
    FUN_004053c9(DAT_004226a4,0x3ff);
  }
  if (&DAT_00435618 < DAT_0043360c) {
    FUN_004053c9(DAT_004226a4,0x412);
  }
  *DAT_0043360c = *DAT_00433610;
  DAT_0043360c[1] = DAT_00433610[1];
  DAT_0043360c = DAT_0043360c + 2;
  DAT_00433610 = DAT_00433610 + -2;
  return;
}



bool FUN_0040deb3(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 unaff_ESI;
  
  DAT_0043360c = &DAT_00433620;
  DAT_00433610 = (uint *)&DAT_00435620;
  DAT_00433602 = '\0';
  DAT_004333ff = 3;
  DAT_00433603 = 0x19;
  FUN_0040d9e9(0x19,0);
  puVar6 = DAT_00433610;
  *DAT_00433610 = DAT_00433604;
  do {
    puVar6[1] = DAT_00433608;
LAB_0040dfa9:
    while( true ) {
      if (DAT_00433602 != '\0') {
        if (puVar6 != (uint *)&DAT_00435618) {
          FUN_004053c9(DAT_004226a4,0x3ff);
        }
        puVar7 = &DAT_00433620;
        puVar6 = DAT_00433610;
        if (&DAT_00433620 < DAT_0043360c) {
          do {
            bVar1 = *(byte *)puVar7;
            if (bVar1 < 0x16) {
              pcVar5 = FUN_0040d87c;
              if (bVar1 < 0x13) {
                pcVar5 = FUN_0040d62c;
              }
              cVar2 = (*pcVar5)(bVar1,unaff_ESI);
              puVar6 = DAT_00433610;
              if (cVar2 == '\0') {
                FUN_004053c9(DAT_004226a4,0x438);
                puVar6 = DAT_00433610;
              }
            }
            else {
              puVar4 = puVar6 + 2;
              DAT_00433610 = puVar4;
              if (bVar1 == 0x18) {
                uVar3 = FUN_00406e64((wchar_t *)puVar7[1],0,'\x01','\0',(void **)0x0);
                puVar6 = DAT_00433610;
                DAT_00433610[1] = uVar3;
                *(byte *)puVar6 = 0x16;
              }
              else {
                *puVar4 = *puVar7;
                puVar6[3] = puVar7[1];
                puVar6 = puVar4;
              }
            }
            puVar7 = puVar7 + 2;
          } while (puVar7 < DAT_0043360c);
        }
        if ((puVar6 == (uint *)&DAT_00435620) && (DAT_00435620 == '\x16')) {
          return DAT_00435624 != 0;
        }
        FUN_004053c9(DAT_004226a4,0x3ff);
        return false;
      }
      FUN_0040db64();
      if ((char)DAT_00433604 != '\x19') {
        while( true ) {
          bVar1 = (&DAT_00401590)[DAT_00433604 & 0xff];
          if ((byte)(&DAT_00401590)[*(byte *)DAT_00433610] <= bVar1 &&
              bVar1 != (&DAT_00401590)[*(byte *)DAT_00433610]) break;
          if (bVar1 == 0) goto LAB_0040df6e;
          FUN_0040de42();
        }
      }
      if (DAT_00433610 != (uint *)&DAT_00436618) break;
      FUN_004053c9(DAT_004226a4,0x412);
      puVar6 = DAT_00433610;
    }
    puVar6 = DAT_00433610 + 2;
    DAT_00433610 = puVar6;
    *puVar6 = DAT_00433604;
  } while( true );
LAB_0040df6e:
  while (*(byte *)DAT_00433610 != 0x19) {
    FUN_0040de42();
  }
  if (DAT_00433610 < &DAT_00435620) {
    FUN_004053c9(DAT_004226a4,0x3ff);
  }
  puVar6 = DAT_00433610 + -2;
  DAT_00433610 = puVar6;
  goto LAB_0040dfa9;
}



bool __fastcall FUN_0040dfd6(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *local_8;
  
  local_8 = (wchar_t *)0x0;
  pwVar1 = wcstok_s(param_1,L" \t",&local_8);
  pwVar2 = wcstok_s((wchar_t *)0x0,L" \t",&local_8);
  if (pwVar2 != (wchar_t *)0x0) {
    FUN_004053c9(DAT_004226a4,0x409);
  }
  if (pwVar1 == (wchar_t *)0x0) {
    FUN_004053c9(DAT_004226a4,0x417);
  }
  uVar3 = FUN_0040aaef((ushort *)pwVar1);
  return uVar3 != 0;
}



char __fastcall FUN_0040e045(wchar_t *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  
  if (*param_1 == L'\0') {
    FUN_004053c9(DAT_004226a4,0x3fa);
  }
  if (param_2 == '\x04') {
LAB_0040e097:
    cVar2 = FUN_0040dfd6(param_1);
  }
  else {
    if (param_2 != '\x05') {
      if (param_2 == '\x06') goto LAB_0040e097;
      if (param_2 != '\a') {
        DAT_00433614 = param_1;
        bVar1 = FUN_0040deb3();
        return bVar1;
      }
    }
    bVar1 = FUN_0040dfd6(param_1);
    cVar2 = '\x01' - bVar1;
  }
  return cVar2;
}



int * __fastcall
FUN_0040e0a2(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,short *param_4,
            LPWIN32_FIND_DATAW param_5)

{
  wchar_t wVar1;
  short sVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  int iVar13;
  wchar_t *pwVar14;
  int iVar15;
  rsize_t rVar16;
  rsize_t _MaxCount;
  wchar_t *local_28;
  int *local_18;
  wchar_t *local_14;
  
  local_18 = DAT_00422694;
  if (DAT_00422694 != (int *)0x0) {
    do {
      local_14 = (wchar_t *)local_18[2];
      local_28 = wcsrchr(local_14,L'.');
      iVar5 = FUN_004104c1(local_28,param_4);
      if (iVar5 == 0) {
        pwVar8 = local_14 + 1;
        *param_1 = L'\0';
        wVar1 = *pwVar8;
        pwVar9 = pwVar8;
        while ((wVar1 != L'\0' && (wVar1 != L'{'))) {
          if (wVar1 == L'^') {
            pwVar9 = pwVar9 + 1;
          }
          else if (wVar1 == L'\"') {
            do {
              pwVar9 = pwVar9 + 1;
            } while (*pwVar9 != L'\"');
          }
          pwVar9 = pwVar9 + 1;
          wVar1 = *pwVar9;
        }
        pwVar14 = pwVar9;
        if (wVar1 != L'\0') {
          do {
            if (wVar1 == L'}') break;
            if (wVar1 == L'^') {
              pwVar14 = pwVar14 + 1;
            }
            pwVar14 = pwVar14 + 1;
            wVar1 = *pwVar14;
          } while (wVar1 != L'\0');
          iVar5 = (int)pwVar14 + (-2 - (int)pwVar9) >> 1;
          pwVar12 = param_3;
          if (*param_3 == L'\"') {
            pwVar12 = param_3 + 1;
          }
          pwVar7 = pwVar9 + 1;
          iVar15 = iVar5;
          if (iVar5 == 0) {
LAB_0040e1fc:
            if (iVar15 == -1) goto LAB_0040e4e0;
          }
          else {
            iVar13 = (int)pwVar12 - (int)pwVar7;
            do {
              if ((*pwVar7 == L'\\') || (*pwVar7 == L'/')) {
                sVar2 = *(short *)(iVar13 + (int)pwVar7);
                if ((sVar2 != 0x5c) && (sVar2 != 0x2f)) {
                  iVar15 = -1;
                  goto LAB_0040e1fc;
                }
              }
              else {
                iVar6 = _wcsnicmp(pwVar7,(wchar_t *)(iVar13 + (int)pwVar7),1);
                if (iVar6 != 0) goto LAB_0040e4e0;
              }
              pwVar7 = pwVar7 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          pwVar12 = param_3 + iVar5 + 1;
          pwVar7 = wcschr(pwVar12,L'\\');
          local_28 = pwVar9;
          if (((pwVar7 != (wchar_t *)0x0) ||
              (pwVar7 = wcschr(pwVar12,L'/'), pwVar7 != (wchar_t *)0x0)) &&
             ((pwVar7 != pwVar12 || ((pwVar14[-1] == L'\\' || (pwVar14[-1] == L'/'))))))
          goto LAB_0040e4e0;
        }
        if (*local_14 == L'{') {
          wVar1 = *pwVar8;
          pwVar9 = pwVar8;
          while ((wVar1 != L'\0' && (wVar1 != L'}'))) {
            if (wVar1 == L'^') {
              pwVar9 = pwVar9 + 1;
            }
            pwVar9 = pwVar9 + 1;
            wVar1 = *pwVar9;
          }
          rVar16 = (int)pwVar9 - (int)pwVar8 >> 1;
          if (rVar16 == 0) {
            if (*param_3 == L'\"') {
              rVar16 = 3;
              _MaxCount = 3;
              pwVar9 = L"\".\\";
            }
            else {
              rVar16 = 2;
              _MaxCount = 2;
              pwVar9 = L".\\";
            }
            wcsncpy_s(param_1,param_2,pwVar9,_MaxCount);
          }
          else {
            wcsncpy_s(param_1,param_2,pwVar8,rVar16);
            pwVar8 = pwVar8 + rVar16;
            if (pwVar8[-1] != L'\\') {
              param_1[rVar16] = L'\\';
              rVar16 = rVar16 + 1;
            }
          }
          local_14 = pwVar8 + 1;
          pwVar8 = wcsrchr(param_3,L'\\');
          pwVar9 = wcsrchr(param_3,L'/');
          if (pwVar8 < pwVar9) {
            pwVar8 = pwVar9;
          }
          if (pwVar8 == (wchar_t *)0x0) {
            pwVar8 = param_3 + 1;
            if (*param_3 != L'\"') {
              pwVar8 = param_3;
            }
            wcscpy_s(param_1 + rVar16,param_2 - rVar16,pwVar8);
            iVar5 = -(int)pwVar8;
          }
          else {
            wcscpy_s(param_1 + rVar16,param_2 - rVar16,pwVar8 + 1);
            iVar5 = -2 - (int)pwVar8;
          }
          iVar5 = rVar16 + ((int)param_4 + iVar5 >> 1);
        }
        else {
          pwVar8 = param_3;
          if (*pwVar9 != L'\0') {
            pwVar8 = wcsrchr(param_3,L'.');
            wVar1 = *pwVar8;
            while ((((wVar1 != L':' && (wVar1 != L'\\')) && (wVar1 != L'/')) && (param_3 < pwVar8)))
            {
              pwVar8 = pwVar8 + -1;
              wVar1 = *pwVar8;
            }
            if (((wVar1 == L':') || (wVar1 == L'\\')) || (wVar1 == L'/')) {
              pwVar8 = pwVar8 + 1;
            }
          }
          iVar5 = 0;
          rVar16 = (int)param_4 - (int)pwVar8 >> 1;
          if ((pwVar8 != param_3) && (*param_3 == L'\"')) {
            iVar5 = 1;
            *param_1 = L'\"';
          }
          if ((int)(param_2 - iVar5) <= (int)rVar16) {
            FUN_004053c9(0,0x434);
          }
          wcsncpy_s(param_1 + iVar5,param_2 - iVar5,pwVar8,rVar16);
          iVar5 = rVar16 + iVar5;
        }
        rVar16 = (int)local_28 - (int)local_14 >> 1;
        if ((int)(param_2 - iVar5) <= (int)rVar16) {
          FUN_004053c9(0,0x434);
        }
        wcsncpy_s(param_1 + iVar5,param_2 - iVar5,local_14,rVar16);
        if ((*param_1 == L'\"') && (iVar15 = rVar16 + iVar5, param_1[iVar15 + -1] != L'\"')) {
          if ((int)((param_2 - rVar16) - iVar5) < 2) {
            FUN_004053c9(0,0x434);
          }
          rVar16 = rVar16 + 1;
          param_1[iVar15] = L'\"';
        }
        param_1[rVar16 + iVar5] = L'\0';
        puVar10 = FUN_0040ea50(param_1);
        if (puVar10 != (undefined4 *)0x0) {
          DVar3 = puVar10[4];
          DVar4 = puVar10[5];
          (param_5->ftCreationTime).dwLowDateTime = DVar3;
          (param_5->ftCreationTime).dwHighDateTime = DVar4;
          (param_5->ftLastWriteTime).dwLowDateTime = DVar3;
          (param_5->ftLastWriteTime).dwHighDateTime = DVar4;
          return local_18;
        }
        uVar11 = FUN_00407cc4(param_1,param_5);
        if ((char)uVar11 != '\0') {
          return local_18;
        }
      }
LAB_0040e4e0:
      local_18 = (int *)*local_18;
    } while (local_18 != (int *)0x0);
  }
  return (int *)0x0;
}



void FUN_0040e513(void)

{
  wchar_t *_Str1;
  int **ppiVar1;
  int iVar2;
  wchar_t wVar3;
  int **ppiVar4;
  wchar_t *pwVar5;
  size_t _MaxCount;
  int *piVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  int **ppiVar9;
  wchar_t *pwVar10;
  int *local_14;
  int *local_8;
  
  ppiVar8 = (int **)DAT_00422694;
  local_14 = DAT_004226a0;
  local_8 = (int *)0x0;
  DAT_00422694 = (int *)0x0;
  if (DAT_004226a0 != (int *)0x0) {
    do {
      _Str1 = (wchar_t *)local_14[1];
      pwVar5 = _Str1;
      do {
        wVar3 = *pwVar5;
        pwVar5 = pwVar5 + 1;
      } while (wVar3 != L'\0');
      _MaxCount = (int)pwVar5 - (int)(_Str1 + 1) >> 1;
      ppiVar1 = ppiVar8;
      while (ppiVar1 != (int **)0x0) {
        pwVar5 = (wchar_t *)ppiVar1[2];
        wVar3 = L'{';
        if (*pwVar5 == L'{') {
          do {
            pwVar10 = pwVar5;
            if (wVar3 == L'^') {
              pwVar10 = pwVar5 + 1;
            }
            pwVar5 = pwVar10 + 1;
            wVar3 = *pwVar5;
          } while (wVar3 != L'}');
          pwVar5 = pwVar10 + 2;
        }
        iVar2 = _wcsnicmp(_Str1,pwVar5,_MaxCount);
        if ((iVar2 == 0) && ((pwVar5[_MaxCount] == L'.' || (pwVar5[_MaxCount] == L'{')))) {
          ppiVar4 = (int **)*ppiVar1;
          ppiVar9 = ppiVar4;
          if (ppiVar1[1] != (undefined4 *)0x0) {
            *ppiVar1[1] = (int)ppiVar4;
            ppiVar4 = (int **)*ppiVar1;
            ppiVar9 = ppiVar8;
          }
          if (ppiVar4 != (int **)0x0) {
            ppiVar4[1] = ppiVar1[1];
            ppiVar4 = (int **)*ppiVar1;
          }
          *ppiVar1 = (int *)0x0;
          piVar6 = DAT_00422694;
          ppiVar8 = ppiVar9;
          if (DAT_00422694 == (int *)0x0) {
LAB_0040e602:
            puVar7 = ppiVar1[3];
            while (puVar7 != (undefined4 *)0x0) {
              DAT_00436640 = *(char *)(ppiVar1 + 5);
              if (DAT_00436640 != '\0') {
                DAT_00436644 = (int)ppiVar1[2];
              }
              FUN_0040ebe0((wchar_t *)puVar7[1],&local_8,(int **)0x0,(ushort *)0x0,0,0,0);
              puVar7 = (undefined4 *)*puVar7;
              DAT_00436640 = '\0';
            }
            ppiVar1[4] = local_8;
            local_8 = (int *)0x0;
            FUN_0040ea03(&DAT_00422694,ppiVar1);
            ppiVar1 = ppiVar4;
          }
          else {
            while (iVar2 = _wcsicmp((wchar_t *)piVar6[2],(wchar_t *)ppiVar1[2]), iVar2 != 0) {
              piVar6 = (int *)*piVar6;
              if (piVar6 == (int *)0x0) goto LAB_0040e602;
            }
            free(ppiVar1[2]);
            while (piVar6 = ppiVar1[3], piVar6 != (int *)0x0) {
              ppiVar1[3] = (int *)*piVar6;
              free((void *)piVar6[1]);
              *piVar6 = (int)DAT_00433618;
              DAT_00433618 = piVar6;
            }
            free(ppiVar1);
            ppiVar1 = ppiVar4;
          }
        }
        else {
          ppiVar1 = (int **)*ppiVar1;
        }
      }
      local_14 = (int *)*local_14;
    } while (local_14 != (int *)0x0);
  }
  while (ppiVar8 != (int **)0x0) {
    if ((DAT_0041248c & 1) != 0) {
      FUN_004053c9(0,0xfa5);
    }
    free(ppiVar8[2]);
    FUN_00404b9e(ppiVar8[3]);
    FUN_00404b9e(ppiVar8[4]);
    ppiVar1 = (int **)*ppiVar8;
    free(ppiVar8);
    ppiVar8 = ppiVar1;
  }
  return;
}



void __fastcall
FUN_0040e6fa(int param_1,wchar_t *param_2,undefined4 param_3,uint param_4,uint param_5,int **param_6
            ,int **param_7,int *param_8,uint *param_9,wchar_t **param_10)

{
  int **ppiVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined auStack_28c [4];
  undefined8 uStack_288;
  int *piStack_27c;
  int iStack_278;
  int **local_274;
  int *local_270;
  int **local_26c;
  uint *local_268;
  int *piStack_264;
  _WIN32_FIND_DATAW _Stack_260;
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)auStack_28c;
  local_26c = param_6;
  local_274 = param_7;
  local_270 = param_8;
  local_268 = param_9;
  pwVar2 = wcsrchr(*(wchar_t **)(param_1 + 4),L'.');
  if ((pwVar2 != (wchar_t *)0x0) &&
     (piStack_264 = FUN_0040e0a2(param_2,0x101,*(wchar_t **)(param_1 + 4),pwVar2,&_Stack_260),
     piStack_264 != (int *)0x0)) {
    uStack_288 = FUN_00407a01((byte *)&_Stack_260);
    *param_10 = param_2;
    piVar9 = *local_274;
    if (piVar9 != (int *)0x0) {
      do {
        iVar3 = _wcsicmp((wchar_t *)piVar9[1],param_2);
        if (iVar3 == 0) break;
        piVar9 = (int *)*piVar9;
      } while (piVar9 != (int *)0x0);
      if (piVar9 != (int *)0x0) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
      }
    }
    piStack_27c = (int *)0x0;
    iStack_278 = FUN_00403a7c(param_2,*(byte *)(param_1 + 8),&uStack_288,(wchar_t *)0x0,&piStack_27c
                             );
    if (piStack_27c != (int *)0x0) {
      iVar3 = FUN_00404e10(piStack_27c);
      iStack_278 = iStack_278 + iVar3;
      FUN_00404e2e(&piStack_27c);
    }
    *local_270 = *local_270 + iStack_278;
    if (((((*(byte *)(param_1 + 8) & 0x10) != 0) || (param_5 < uStack_288._4_4_)) ||
        ((param_5 <= uStack_288._4_4_ && (param_4 < (uint)uStack_288)))) ||
       (((uVar7 = uStack_288._4_4_, uVar8 = (uint)uStack_288, DAT_004226b6 != '\0' &&
         (param_4 == (uint)uStack_288)) && (param_5 == uStack_288._4_4_)))) {
      if (piVar9 == (int *)0x0) {
        puVar4 = FUN_0040e8ac();
        pvVar5 = FUN_0040e8fe(param_2);
        ppiVar1 = local_26c;
        puVar4[1] = pvVar5;
        FUN_0040ea03(local_26c,puVar4);
        if (*local_274 == (int *)0x0) {
          *local_274 = *ppiVar1;
        }
      }
      uVar7 = uStack_288._4_4_;
      uVar8 = (uint)uStack_288;
      if ((*(byte *)(param_1 + 8) & 0x11) == 1) {
        FUN_004054a3(3);
        uVar7 = uStack_288._4_4_;
        uVar8 = (uint)uStack_288;
      }
    }
    uVar10 = local_268[1];
    uVar6 = *local_268;
    if ((uVar10 < uVar7) || ((uVar10 <= uVar7 && (uVar6 <= uVar8)))) {
      uVar6 = uVar8;
      uVar10 = uVar7;
    }
    *local_268 = uVar6;
    local_268[1] = uVar10;
  }
  ___security_check_cookie_4(local_c ^ (uint)auStack_28c);
  return;
}



undefined4 * FUN_0040e8ac(void)

{
  undefined4 *puVar1;
  
  if (DAT_00433618 == (undefined4 *)0x0) {
    if (DAT_00436620 < 8) {
      DAT_0043361c = (undefined4 *)FUN_0040ab83(0x8000);
      DAT_00436620 = 0x8000;
    }
    DAT_00436620 = DAT_00436620 - 8;
    puVar1 = DAT_0043361c;
    DAT_0043361c = DAT_0043361c + 2;
  }
  else {
    puVar1 = DAT_00433618;
    DAT_00433618 = (undefined4 *)*DAT_00433618;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  return puVar1;
}



void * __fastcall FUN_0040e8fe(short *param_1)

{
  short sVar1;
  longlong lVar2;
  void *_Dst;
  short *psVar3;
  uint uVar4;
  
  psVar3 = param_1;
  do {
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar1 != 0);
  uVar4 = ((int)psVar3 - (int)(param_1 + 1) >> 1) + 1;
  lVar2 = (ulonglong)uVar4 * 2;
  _Dst = FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  memcpy(_Dst,param_1,uVar4 * 2);
  return _Dst;
}



undefined2 * __fastcall FUN_0040e942(short *param_1)

{
  short sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  iVar5 = (int)psVar4 - (int)(param_1 + 1) >> 1;
  lVar2 = (ulonglong)(iVar5 + 3) * 2;
  puVar3 = (undefined2 *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  *puVar3 = 0x22;
  memcpy(puVar3 + 1,param_1,iVar5 * 2);
  puVar3[iVar5 + 1] = 0x22;
  puVar3[iVar5 + 2] = 0;
  return puVar3;
}



wchar_t * __fastcall FUN_0040e9a8(short *param_1,wchar_t *param_2)

{
  short sVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  short *psVar4;
  uint _SizeInWords;
  
  psVar4 = param_1;
  do {
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
  } while (sVar1 != 0);
  pwVar3 = param_2;
  do {
    wVar2 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar2 != L'\0');
  _SizeInWords = ((int)psVar4 - (int)(param_1 + 1) >> 1) + 1 +
                 ((int)pwVar3 - (int)(param_2 + 1) >> 1);
  pwVar3 = (wchar_t *)FUN_00410682(param_1,_SizeInWords);
  wcscat_s(pwVar3,_SizeInWords,param_2);
  return pwVar3;
}



void __fastcall FUN_0040ea03(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    param_1 = puVar1;
    puVar2 = (undefined4 *)*puVar1;
  }
  *param_1 = param_2;
  return;
}



ushort __fastcall FUN_0040ea18(wint_t *param_1)

{
  wint_t wVar1;
  ushort uVar2;
  
  uVar2 = 0;
  while( true ) {
    wVar1 = *param_1;
    if (wVar1 == 0) break;
    if (wVar1 == 0x2f) {
      wVar1 = 0x5c;
    }
    else {
      wVar1 = towupper(wVar1);
    }
    uVar2 = uVar2 + wVar1;
    param_1 = param_1 + 1;
  }
  return uVar2 & 0x7f;
}



undefined4 * __fastcall FUN_0040ea50(wchar_t *param_1)

{
  wchar_t wVar1;
  bool bVar2;
  ushort uVar3;
  undefined2 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  uint uVar7;
  
  bVar2 = false;
  if (*param_1 == L'\0') {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar3 = FUN_0040ea18((wint_t *)param_1);
    puVar4 = FUN_00410409(param_1,CONCAT22(extraout_var,uVar3));
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = wcsncmp(param_1,L".\\",2);
      if ((iVar5 == 0) || (iVar5 = wcsncmp(param_1,L"./",2), iVar5 == 0)) {
        pwVar6 = param_1 + 2;
      }
      else {
        pwVar6 = param_1;
        do {
          wVar1 = *pwVar6;
          pwVar6 = pwVar6 + 1;
        } while (wVar1 != L'\0');
        uVar7 = ((int)pwVar6 - (int)(param_1 + 1) >> 1) + 3;
        pwVar6 = (wchar_t *)
                 FUN_0040ab83(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar7 * 2));
        wcscpy_s(pwVar6,uVar7,L".\\");
        wcscat_s(pwVar6,uVar7,param_1);
        bVar2 = true;
      }
      uVar3 = FUN_0040ea18((wint_t *)pwVar6);
      puVar4 = FUN_00410409(pwVar6,CONCAT22(extraout_var_00,uVar3));
      if (puVar4 == (undefined4 *)0x0) {
        if (pwVar6 != param_1 + 2) {
          pwVar6[1] = L'/';
        }
        uVar3 = FUN_0040ea18((wint_t *)pwVar6);
        puVar4 = FUN_00410409(pwVar6,CONCAT22(extraout_var_01,uVar3));
        if (bVar2) {
          free(pwVar6);
        }
        if (puVar4 != (undefined4 *)0x0) {
          return puVar4;
        }
        if (*param_1 == L'\"') {
          pwVar6 = FUN_004105c5(param_1);
        }
        else {
          pwVar6 = param_1;
          do {
            wVar1 = *pwVar6;
            pwVar6 = pwVar6 + 1;
          } while (wVar1 != L'\0');
          uVar7 = ((int)pwVar6 - (int)(param_1 + 1) >> 1) + 3;
          pwVar6 = (wchar_t *)
                   FUN_0040ab83(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar7 * 2));
          wcscpy_s(pwVar6,uVar7,L"\"");
          wcscat_s(pwVar6,uVar7,param_1);
          wcscat_s(pwVar6,uVar7,L"\"");
        }
        uVar3 = FUN_0040ea18((wint_t *)pwVar6);
        puVar4 = FUN_00410409(pwVar6,CONCAT22(extraout_var_02,uVar3));
      }
      else if (!bVar2) {
        return puVar4;
      }
      free(pwVar6);
    }
  }
  return puVar4;
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe

void __fastcall
FUN_0040ebe0(wchar_t *param_1,int **param_2,int **param_3,ushort *param_4,int param_5,int param_6,
            uint param_7)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int **ppiVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  int **ppiVar10;
  wchar_t wVar11;
  int **ppiVar12;
  undefined4 *puVar13;
  bool bVar14;
  int *local_234;
  void *local_230;
  int **local_22c;
  int **local_228;
  int **local_224;
  wchar_t *local_220;
  int **local_21c;
  byte local_216;
  char local_215;
  undefined4 local_214;
  undefined2 local_10;
  wchar_t local_e;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  local_22c = param_3;
  local_215 = '\0';
  if (param_2 == (int **)0x0) {
    local_21c = (int **)0x0;
  }
  else if (param_3 == (int **)0x0) {
    local_21c = (int **)*param_2;
    if (local_21c != (int **)0x0) {
      piVar7 = *local_21c;
      while (piVar7 != (int *)0x0) {
        local_21c = (int **)*local_21c;
        piVar7 = *local_21c;
      }
    }
  }
  else {
    local_21c = (int **)*param_3;
  }
  wVar11 = *param_1;
  local_228 = param_2;
  if (wVar11 != L'\0') {
    while (local_224 = local_21c, ppiVar12 = local_22c, wVar11 != L'\0') {
      do {
        if (wVar11 == L'$') break;
        if (wVar11 == L'\"') {
          local_215 = local_215 == '\0';
        }
        if (((local_215 == '\0') && (wVar11 == L'^')) && (param_1 = param_1 + 1, *param_1 == L'\"'))
        {
          local_215 = '\x01';
        }
        param_1 = param_1 + 1;
        wVar11 = *param_1;
      } while (wVar11 != L'\0');
      param_3 = local_22c;
      if (wVar11 == L'\0') break;
      pwVar4 = param_1 + 1;
      local_216 = (byte)param_7 & 4;
      if (*pwVar4 == L'\0') {
        if ((param_7 & 4) != 0) {
          if (local_22c != (int **)0x0) {
            *local_22c = (int *)local_21c;
          }
          goto LAB_0040f0c3;
        }
        FUN_004053c9(DAT_004226b0,0x3ea);
        local_216 = 0;
      }
      if ((local_215 == '\0') && (*pwVar4 == L'^')) {
        pwVar4 = param_1 + 2;
        uVar3 = FUN_004038ca(*pwVar4);
        if (((char)uVar3 != '\0') || (local_216 == 0)) {
          FUN_004053c9(DAT_004226b0,0x3e9);
          goto LAB_0040ed41;
        }
LAB_0040f0e2:
        if (ppiVar12 != (int **)0x0) {
          *ppiVar12 = (int *)local_21c;
        }
        goto LAB_0040f0c3;
      }
LAB_0040ed41:
      wVar11 = *pwVar4;
      if (wVar11 == L'$') {
        pwVar4 = FUN_0040f1f4(pwVar4);
      }
      else {
        if (wVar11 == L'(') {
          pwVar4 = (wchar_t *)FUN_0040f0f2((ushort *)(pwVar4 + 1),(ushort *)&local_214);
          local_220 = pwVar4;
          pwVar5 = wcschr(L"*@<?",(wchar_t)local_214);
          if (pwVar5 != (wchar_t *)0x0) {
            if ((DAT_00436640 == '\0') || ((DAT_0041248c & 0x40) != 0)) goto LAB_0040f0aa;
            puVar13 = &local_214;
            do {
              sVar1 = *(short *)puVar13;
              puVar13 = (undefined4 *)((int)puVar13 + 2);
            } while (sVar1 != 0);
            FUN_0040cc4d(&stack0xfffffdc0,((int)puVar13 - ((int)&local_214 + 2) >> 1) + 4,L"$(%s)",
                         (char)&local_214);
            FUN_004053c9(0,0x44c);
            pwVar4 = local_220;
          }
        }
        else {
          pwVar5 = wcschr(L"*@<?",wVar11);
          if (pwVar5 != (wchar_t *)0x0) {
            if (((DAT_00436640 == '\0') || ((DAT_0041248c & 0x40) != 0)) || (*pwVar4 == L'<'))
            goto LAB_0040f0aa;
            local_c = 0;
            local_10 = 0x24;
            local_e = *pwVar4;
            FUN_004053c9(0,0x44c);
          }
          uVar3 = FUN_004038ca(*pwVar4);
          if ((char)uVar3 == '\0') {
            if (local_216 != 0) goto LAB_0040f0e2;
            FUN_004053c9(DAT_004226b0,0x3ea);
          }
          local_214 = (uint)(ushort)*pwVar4;
        }
        if (local_228 == (int **)0x0) {
          local_234 = (int *)0x0;
          local_230 = FUN_0040e8fe((short *)&DAT_00401058);
          ppiVar6 = &local_234;
        }
        else {
          ppiVar6 = (int **)FUN_0040e8ac();
        }
        local_220 = (wchar_t *)FUN_0040aaef((ushort *)&local_214);
        pwVar5 = local_220;
        if (local_220 != (wchar_t *)0x0) {
          if (param_4 == (ushort *)0x0) {
LAB_0040ef6c:
            if ((*(byte *)(local_220 + 6) & 1) != 0) {
              if (local_216 != 0) goto LAB_0040f0e2;
              FUN_004053c9(DAT_004226b0,0x42e);
              pwVar5 = local_220;
              goto LAB_0040efaf;
            }
            if ((*(byte *)(local_220 + 6) & 0x10) == 0) {
              puVar13 = *(undefined4 **)(local_220 + 4);
              goto LAB_0040efa9;
            }
LAB_0040ef5a:
            piVar7 = (int *)FUN_0040e8fe((short *)&DAT_00401690);
          }
          else {
            puVar13 = &local_214;
            puVar8 = param_4;
            do {
              uVar2 = *puVar8;
              bVar14 = uVar2 < *(ushort *)puVar13;
              if (uVar2 != *(ushort *)puVar13) {
LAB_0040ef28:
                uVar3 = -(uint)bVar14 | 1;
                goto LAB_0040ef2d;
              }
              if (uVar2 == 0) break;
              uVar2 = puVar8[1];
              bVar14 = uVar2 < *(ushort *)((int)puVar13 + 2);
              if (uVar2 != *(ushort *)((int)puVar13 + 2)) goto LAB_0040ef28;
              puVar8 = puVar8 + 2;
              puVar13 = puVar13 + 1;
            } while (uVar2 != 0);
            uVar3 = 0;
LAB_0040ef2d:
            if (uVar3 != 0) goto LAB_0040ef6c;
            puVar13 = *(undefined4 **)(local_220 + 4);
            iVar9 = param_5;
            ppiVar12 = local_22c;
            if (param_5 != param_6) {
              do {
                if (puVar13 == (undefined4 *)0x0) goto LAB_0040ef5a;
                puVar13 = (undefined4 *)*puVar13;
                iVar9 = iVar9 + -1;
              } while (iVar9 != param_6);
            }
            if (puVar13 == (undefined4 *)0x0) goto LAB_0040ef5a;
LAB_0040efa9:
            piVar7 = (int *)puVar13[1];
          }
          pwVar5 = local_220;
          ppiVar6[1] = piVar7;
        }
LAB_0040efaf:
        if (local_228 != (int **)0x0) {
          if ((pwVar5 == (wchar_t *)0x0) ||
             (ppiVar10 = local_228, (*(byte *)(pwVar5 + 6) & 0x10) != 0)) {
            piVar7 = (int *)FUN_0040e8fe((short *)&DAT_00401690);
            pwVar5 = local_220;
            ppiVar10 = local_228;
            ppiVar6[1] = piVar7;
          }
          *ppiVar6 = (int *)0x0;
          if (local_21c == (int **)0x0) {
            *ppiVar10 = (int *)ppiVar6;
          }
          else {
            *local_21c = (int *)ppiVar6;
          }
          local_21c = ppiVar6;
        }
        local_224 = local_21c;
        if ((pwVar5 != (wchar_t *)0x0) &&
           (pwVar5 = wcschr((wchar_t *)ppiVar6[1],L'$'), pwVar5 != (wchar_t *)0x0)) {
          *(byte *)(local_220 + 6) = *(byte *)(local_220 + 6) | 1;
          if (param_4 == (ushort *)0x0) {
LAB_0040f06c:
            iVar9 = param_6;
          }
          else {
            puVar13 = &local_214;
            puVar8 = param_4;
            do {
              uVar2 = *puVar8;
              bVar14 = uVar2 < *(ushort *)puVar13;
              if (uVar2 != *(ushort *)puVar13) {
LAB_0040f060:
                uVar3 = -(uint)bVar14 | 1;
                goto LAB_0040f065;
              }
              if (uVar2 == 0) break;
              uVar2 = puVar8[1];
              bVar14 = uVar2 < *(ushort *)((int)puVar13 + 2);
              if (uVar2 != *(ushort *)((int)puVar13 + 2)) goto LAB_0040f060;
              puVar8 = puVar8 + 2;
              puVar13 = puVar13 + 1;
            } while (uVar2 != 0);
            uVar3 = 0;
LAB_0040f065:
            iVar9 = param_5;
            if (uVar3 == 0) goto LAB_0040f06c;
          }
          FUN_0040ebe0((wchar_t *)ppiVar6[1],local_228,(int **)&local_21c,(ushort *)&local_214,
                       param_5 + 1,iVar9,param_7);
          *(byte *)(local_220 + 6) = *(byte *)(local_220 + 6) & 0xfe;
        }
      }
LAB_0040f0aa:
      param_1 = pwVar4 + 1;
      wVar11 = *param_1;
      param_3 = ppiVar12;
      if (wVar11 == L'\0') break;
    }
  }
  local_224 = local_21c;
  if (param_3 != (int **)0x0) {
    *param_3 = (int *)local_21c;
  }
LAB_0040f0c3:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



ushort * __fastcall FUN_0040f0f2(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  uVar2 = *param_1;
  puVar3 = param_2;
  while (((uVar2 != 0 && (uVar2 != 0x29)) && (uVar2 != 0x3a))) {
    if (uVar2 == 0x5e) {
      param_1 = param_1 + 1;
      uVar1 = FUN_004038ca(*param_1);
      if ((char)uVar1 == '\0') {
        FUN_004053c9(DAT_004226b0,0x3e9);
      }
    }
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
    uVar2 = *param_1;
  }
  if (uVar2 != 0x29) {
    do {
      if (uVar2 == 0x5e) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
      }
      if (uVar2 == 0) break;
      param_1 = param_1 + 1;
      uVar2 = *param_1;
    } while (uVar2 != 0x29);
    if (uVar2 != 0x29) {
      FUN_004053c9(DAT_004226b0,1000);
    }
  }
  *puVar3 = 0;
  if (0x202 < (int)((int)puVar3 - (int)param_2 & 0xfffffffeU)) {
    FUN_004053c9(DAT_004226b0,0x434);
  }
  return param_1;
}



short * __fastcall FUN_0040f1f4(short *param_1)

{
  wchar_t _Ch;
  wchar_t *pwVar1;
  
  if (*param_1 != 0) {
    if (param_1[1] == 0x5e) {
      return param_1 + 1;
    }
    if (param_1[1] == 0x28) {
      if ((param_1[2] == 0x5e) || (param_1[2] != 0x40)) {
        return param_1 + 2;
      }
      _Ch = param_1[3];
      if (_Ch != L'^') {
        if (_Ch == L')') {
          return param_1 + 3;
        }
        pwVar1 = wcschr(L"DFBR",_Ch);
        if (pwVar1 == (wchar_t *)0x0) {
          return param_1;
        }
        if (param_1[4] != 0x5e) {
          if (param_1[4] != 0x29) {
            return param_1;
          }
          return param_1 + 4;
        }
      }
      FUN_004053c9(DAT_004226b0,0x3e9);
    }
  }
  return param_1;
}



wchar_t * __fastcall FUN_0040f28e(wchar_t *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  wchar_t *pwVar3;
  int **local_8;
  
  local_8 = (int **)0x0;
  pwVar3 = wcschr(param_1,L'$');
  if (pwVar3 != (wchar_t *)0x0) {
    FUN_0040ebe0(param_1,(int **)&local_8,(int **)0x0,(ushort *)0x0,0,0,0);
    ppiVar2 = local_8;
    param_1 = (wchar_t *)FUN_0040f2f6(param_1,-1,(int **)&local_8);
    while (ppiVar2 != (int **)0x0) {
      ppiVar1 = (int **)*ppiVar2;
      *ppiVar2 = (int *)DAT_00433618;
      DAT_00433618 = ppiVar2;
      ppiVar2 = ppiVar1;
    }
  }
  return param_1;
}



void __fastcall FUN_0040f2f6(wchar_t *param_1,char param_2,int **param_3)

{
  int **ppiVar1;
  longlong lVar2;
  wchar_t wVar3;
  int iVar4;
  int *piVar5;
  void *_Dst;
  wchar_t *pwVar6;
  uint uVar7;
  code *pcVar8;
  char cVar9;
  int **ppiVar10;
  undefined auStack_83c [7];
  char local_835;
  wchar_t *local_834;
  char local_82d;
  wchar_t *local_82c;
  char local_825;
  wchar_t *local_824;
  uint local_820;
  wchar_t *local_81c;
  undefined4 local_818;
  int **local_814;
  wchar_t local_810 [1024];
  wchar_t local_10 [2];
  uint local_c;
  
  local_c = DAT_00412014 ^ (uint)auStack_83c;
  local_814 = param_3;
  local_82d = '\0';
  local_82c = local_10;
  local_834 = local_810;
  wVar3 = *param_1;
  local_835 = '\0';
  local_820 = 0x400;
  local_825 = param_2;
  local_824 = local_834;
  local_81c = param_1;
  if (wVar3 != L'\0') {
    local_818 = 0x22;
    pcVar8 = wcschr_exref;
    cVar9 = local_835;
    do {
      while ((local_81c = param_1, wVar3 != L'\0' && (pcVar8 = wcschr_exref, wVar3 != L'$'))) {
        if (local_834 == local_82c) {
          FUN_0040f658(&local_824,&local_834,&local_82c,&local_820,local_810);
          cVar9 = local_835;
        }
        wVar3 = *param_1;
        if (wVar3 == L'\"') {
          cVar9 = cVar9 == '\0';
          local_835 = cVar9;
        }
        if ((cVar9 == '\0') && (wVar3 == L'^')) {
          *local_834 = L'^';
          local_834 = local_834 + 1;
          if (local_834 == local_82c) {
            FUN_0040f658(&local_824,&local_834,&local_82c,&local_820,local_810);
            cVar9 = local_835;
          }
          param_1 = param_1 + 1;
          wVar3 = *param_1;
          if (wVar3 == (wchar_t)local_818) {
            cVar9 = '\x01';
            local_835 = '\x01';
          }
        }
        param_1 = param_1 + 1;
        *local_834 = wVar3;
        local_834 = local_834 + 1;
        pcVar8 = wcschr_exref;
        wVar3 = *param_1;
      }
      if (local_834 == local_82c) {
        FUN_0040f658(&local_824,&local_834,&local_82c,&local_820,local_810);
      }
      if (*param_1 == L'\0') break;
      pwVar6 = param_1 + 2;
      if ((param_1[1] == L'(') && (iVar4 = (*pcVar8)(L"*@<?",*pwVar6), iVar4 != 0)) {
        ppiVar10 = (int **)0x3;
LAB_0040f48e:
        FUN_0040f6cc(&local_824,&local_81c,&local_834,&local_82c,&local_820,ppiVar10,local_810);
      }
      else {
        if (param_1[1] == L'$') {
          wVar3 = *pwVar6;
          if ((wVar3 == L'^') || (local_825 != '\x01')) {
LAB_0040f509:
            ppiVar10 = (int **)0x5;
          }
          else if (wVar3 == L'@') {
            ppiVar10 = (int **)0x2;
          }
          else {
            if (wVar3 == L'(') {
              pwVar6 = param_1 + 3;
            }
            wVar3 = pwVar6[1];
            if (((((wVar3 != L'F') && (wVar3 != L'D')) && (wVar3 != L'B')) && (wVar3 != L'R')) ||
               (pwVar6[2] != L')')) goto LAB_0040f509;
            ppiVar10 = (int **)0x4;
          }
          goto LAB_0040f48e;
        }
        iVar4 = (*pcVar8)(L"*@<?",param_1[1]);
        ppiVar10 = local_814;
        if (iVar4 != 0) {
          ppiVar10 = (int **)0x1;
          goto LAB_0040f48e;
        }
        piVar5 = *local_814;
        if (piVar5 == (int *)0x0) {
          FUN_004053c9(DAT_004226b0,0x410);
          piVar5 = *ppiVar10;
        }
        iVar4 = (*pcVar8)(piVar5[1],0x24);
        ppiVar1 = (int **)*ppiVar10;
        if (iVar4 == 0) {
          piVar5 = ppiVar1[1];
          *ppiVar10 = *ppiVar1;
        }
        else {
          *ppiVar10 = *ppiVar1;
          piVar5 = (int *)FUN_0040f2f6((wchar_t *)ppiVar1[1],local_825,ppiVar10);
          local_82d = '\x01';
        }
        FUN_0040fb90(&local_824,&local_81c,&local_834,&local_82c,(wchar_t *)piVar5,&local_820,
                     local_810);
        if (local_82d != '\0') {
          free(piVar5);
          local_82d = '\0';
        }
      }
      wVar3 = *local_81c;
      cVar9 = local_835;
      param_1 = local_81c;
    } while (wVar3 != L'\0');
    if (local_834 == local_82c) {
      FUN_0040f658(&local_824,&local_834,&local_82c,&local_820,local_810);
    }
  }
  pwVar6 = local_824;
  *local_834 = L'\0';
  uVar7 = (int)local_834 + (2 - (int)local_824) >> 1;
  lVar2 = (ulonglong)uVar7 * 2;
  _Dst = FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  if (_Dst == (void *)0x0) {
    FUN_004053c9(DAT_004226b0,0x419);
  }
  memcpy(_Dst,pwVar6,uVar7 * 2);
  ___security_check_cookie_4(local_c ^ (uint)auStack_83c);
  return;
}



void __fastcall
FUN_0040f658(void **param_1,void **param_2,void **param_3,uint *param_4,void *param_5)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  
  uVar3 = *param_4;
  pvVar2 = *param_1;
  if (pvVar2 == param_5) {
    pvVar2 = FUN_0040ab83(-(uint)((int)((ulonglong)uVar3 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar3 * 2));
    memcpy(pvVar2,*param_1,*param_4 * 2);
    uVar3 = *param_4;
    *param_1 = pvVar2;
  }
  uVar3 = uVar3 + 0x400;
  pvVar2 = FUN_00410682(pvVar2,uVar3);
  *param_1 = pvVar2;
  uVar1 = *param_4;
  *param_4 = uVar3;
  *param_2 = (void *)((int)pvVar2 + uVar1 * 2);
  *param_3 = (void *)((int)pvVar2 + uVar3 * 2);
  return;
}



void __fastcall
FUN_0040f6cc(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,uint *param_5,
            int **param_6,void *param_7)

{
  short sVar1;
  wchar_t wVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int **ppiVar10;
  int iVar11;
  int **ppiVar12;
  bool bVar13;
  int **local_28;
  uint local_24;
  uint local_20;
  wchar_t **local_1c;
  int local_18;
  wchar_t *local_14;
  int **local_10;
  int **local_c;
  char local_6;
  char local_5;
  
  local_28 = (int **)0x0;
  local_5 = '\0';
  bVar13 = false;
  local_6 = '\0';
  local_14 = (wchar_t *)0x0;
  local_20 = 0;
  local_18 = 1;
  iVar11 = 1;
  local_1c = param_2;
  if (param_6 != (int **)0x1) {
    ppiVar5 = DAT_00422ec8;
    if (param_6 == (int **)0x2) goto LAB_0040f7b9;
    if (param_6 != (int **)0x3) {
      if (param_6 != (int **)0x4) {
        if (param_6 != (int **)0x5) {
          return;
        }
        pwVar8 = *param_3;
        if (pwVar8 == *param_4) {
          FUN_0040f658(param_1,param_3,param_4,param_5,param_7);
          pwVar8 = *param_3;
        }
        *pwVar8 = L'$';
        *param_2 = *param_2 + 2;
        *param_3 = pwVar8 + 1;
        return;
      }
      local_18 = 4;
      local_5 = '\x01';
      goto LAB_0040f7b9;
    }
    local_5 = '\x01';
    iVar11 = 2;
  }
  wVar2 = (*param_2)[iVar11];
  if (wVar2 == L'*') {
    if ((*param_2)[iVar11 + 1] == L'*') {
      iVar11 = iVar11 + 1;
      ppiVar5 = DAT_00422ec4;
LAB_0040f7b3:
      bVar13 = true;
    }
    else {
      local_6 = '\x01';
      ppiVar5 = DAT_00422ed8;
    }
  }
  else {
    ppiVar5 = DAT_00422ecc;
    if (wVar2 != L'<') {
      ppiVar5 = DAT_00422ed0;
      if (wVar2 == L'?') goto LAB_0040f7b3;
      ppiVar5 = (int **)0x0;
      if (wVar2 == L'@') {
        ppiVar5 = DAT_00422ed4;
      }
    }
  }
  local_18 = iVar11 + 1;
LAB_0040f7b9:
  if (ppiVar5 == (int **)0x0) {
    pwVar8 = *param_2;
    wVar2 = *pwVar8;
    while (((wVar2 != L'\0' && (wVar2 != L' ')) && (wVar2 != L'\t'))) {
      pwVar8 = pwVar8 + 1;
      wVar2 = *pwVar8;
    }
    *pwVar8 = L'\0';
    FUN_004053c9(DAT_004226b0,0xfa6);
    *pwVar8 = wVar2;
    bVar13 = false;
    ppiVar5 = (int **)FUN_0040e8fe((short *)&DAT_00401690);
    local_28 = ppiVar5;
  }
  if (bVar13) {
    local_24 = 0x400;
    param_6 = (int **)FUN_0040ab83(0x800);
    ppiVar10 = param_6 + 0x200;
    local_c = ppiVar10;
    ppiVar12 = param_6;
    ppiVar4 = param_6;
    pwVar8 = local_14;
    while (ppiVar3 = ppiVar5, ppiVar5 = ppiVar4, local_28 = ppiVar5, local_14 = pwVar8,
          local_10 = ppiVar5, ppiVar3 != (int **)0x0) {
      piVar6 = ppiVar3[1];
      if (local_5 != '\0') {
        piVar9 = piVar6;
        do {
          wVar2 = *(wchar_t *)piVar9;
          piVar9 = (int *)((int)piVar9 + 2);
        } while (wVar2 != L'\0');
        uVar7 = ((int)piVar9 - (int)((int)piVar6 + 2) >> 1) + 1;
        if (local_20 < uVar7) {
          if (pwVar8 != (wchar_t *)0x0) {
            free(pwVar8);
          }
          local_20 = uVar7;
          local_14 = (wchar_t *)
                     FUN_0040ab83(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                                  (uint)((ulonglong)uVar7 * 2));
        }
        piVar6 = (int *)FUN_0040fa38((*local_1c)[local_18],local_14,local_20,(wchar_t *)piVar6);
        ppiVar10 = local_c;
      }
      wVar2 = *(wchar_t *)piVar6;
      ppiVar5 = param_6;
      while (param_6 = ppiVar12, wVar2 != L'\0') {
        if (param_6 == ppiVar10) {
          param_6 = ppiVar5;
          FUN_0040f658(&local_10,&param_6,&local_c,&local_24,(void *)0x0);
          ppiVar10 = local_c;
        }
        *(wchar_t *)param_6 = *(wchar_t *)piVar6;
        piVar6 = (int *)((int)piVar6 + 2);
        ppiVar5 = (int **)((int)param_6 + 2);
        ppiVar12 = ppiVar5;
        wVar2 = *(wchar_t *)piVar6;
      }
      bVar13 = param_6 == ppiVar10;
      ppiVar12 = param_6;
      param_6 = ppiVar5;
      if (bVar13) {
        FUN_0040f658(&local_10,&param_6,&local_c,&local_24,(void *)0x0);
        ppiVar10 = local_c;
        ppiVar12 = param_6;
      }
      *(wchar_t *)ppiVar12 = L'\0';
      ppiVar4 = local_10;
      ppiVar5 = (int **)*ppiVar3;
      pwVar8 = local_14;
      if ((int **)*ppiVar3 != (int **)0x0) {
        *(wchar_t *)ppiVar12 = L' ';
        param_6 = (int **)((int)ppiVar12 + 2);
        if (param_6 == ppiVar10) {
          FUN_0040f658(&local_10,&param_6,&local_c,&local_24,(void *)0x0);
          ppiVar10 = local_c;
        }
        *(undefined2 *)param_6 = 0;
        ppiVar12 = param_6;
        ppiVar4 = local_10;
        ppiVar5 = (int **)*ppiVar3;
        pwVar8 = local_14;
      }
    }
  }
  else {
    ppiVar10 = ppiVar5;
    do {
      sVar1 = *(short *)ppiVar10;
      ppiVar10 = (int **)((int)ppiVar10 + 2);
    } while (sVar1 != 0);
    uVar7 = ((int)ppiVar10 - ((int)ppiVar5 + 2) >> 1) + 1;
    if (uVar7 == 1) {
      uVar7 = 2;
    }
    pwVar8 = (wchar_t *)
             FUN_0040ab83(-(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar7 * 2));
    if (local_6 != '\0') {
      ppiVar5 = (int **)FUN_0040fa38(0x52,pwVar8,uVar7,(wchar_t *)ppiVar5);
    }
    if (local_5 != '\0') {
      ppiVar5 = (int **)FUN_0040fa38((*local_1c)[local_18],pwVar8,uVar7,(wchar_t *)ppiVar5);
    }
  }
  FUN_0040fb90(param_1,local_1c,param_3,param_4,(wchar_t *)ppiVar5,param_5,param_7);
  if (local_28 != (int **)0x0) {
    free(local_28);
  }
  if (pwVar8 != (wchar_t *)0x0) {
    free(pwVar8);
  }
  return;
}



wchar_t * __fastcall FUN_0040fa38(short param_1,wchar_t *param_2,rsize_t param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  errno_t eVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pwVar5 = (wchar_t *)0x0;
  eVar3 = wcscpy_s(param_2,param_3,param_4);
  if (eVar3 != 0) {
    FUN_004053c9(DAT_004226b0,0x410);
  }
  wVar2 = *param_2;
  pwVar4 = param_2;
  do {
    wVar1 = *pwVar4;
    pwVar4 = pwVar4 + 1;
  } while (wVar1 != L'\0');
  for (pwVar4 = param_2 + ((int)pwVar4 - (int)(param_2 + 1) >> 1) + -1;
      ((pwVar6 = (wchar_t *)0x0, param_2 <= pwVar4 &&
       (wVar1 = *pwVar4, pwVar6 = pwVar4, wVar1 != L'\\')) && (wVar1 != L'/')); pwVar4 = pwVar4 + -1
      ) {
    if ((wVar1 == L'.') && (pwVar5 == (wchar_t *)0x0)) {
      pwVar5 = pwVar4;
    }
  }
  pwVar4 = param_2;
  if (param_1 == 0x42) {
    if (pwVar5 != (wchar_t *)0x0) {
      *pwVar5 = L'\0';
    }
  }
  else {
    if (param_1 == 0x44) {
      if (pwVar6 == (wchar_t *)0x0) {
        if (param_2[1] == L':') {
          param_2[2] = L'\0';
        }
        else {
          eVar3 = wcscpy_s(param_2,param_3,L".");
          if (eVar3 != 0) {
            FUN_004053c9(DAT_004226b0,0x410);
          }
        }
      }
      else {
        if ((param_2[1] == L':') && (pwVar6 == param_2 + 2)) {
          pwVar6 = pwVar6 + 1;
        }
        *pwVar6 = L'\0';
      }
      goto LAB_0040fb53;
    }
    if (param_1 != 0x46) {
      if ((param_1 == 0x52) && (pwVar5 != (wchar_t *)0x0)) {
        *pwVar5 = L'\0';
      }
      goto LAB_0040fb53;
    }
  }
  if (pwVar6 == (wchar_t *)0x0) {
    if (param_2[1] == L':') {
      pwVar4 = param_2 + 2;
    }
  }
  else {
    pwVar4 = pwVar6 + 1;
  }
LAB_0040fb53:
  if (wVar2 == L'\"') {
    if ((*pwVar4 != L'\"') && (param_2 < pwVar4)) {
      pwVar4 = pwVar4 + -1;
      *pwVar4 = L'\"';
    }
    pwVar5 = wcschr(pwVar4,L'\0');
    if (pwVar5[-1] != L'\"') {
      *pwVar5 = L'\"';
      pwVar5[1] = L'\0';
    }
  }
  return pwVar4;
}



void __fastcall
FUN_0040fb90(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,wchar_t *param_5,
            uint *param_6,void *param_7)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *local_8;
  
  *param_2 = *param_2 + 1;
  pwVar2 = *param_2;
  if (*pwVar2 == L'^') {
    pwVar2 = pwVar2 + 1;
    *param_2 = pwVar2;
  }
  local_8 = wcschr(pwVar2,L':');
  pwVar2 = *param_2;
  wVar1 = *pwVar2;
  pwVar3 = pwVar2;
  while ((wVar1 != L'\0' && (wVar1 != L')'))) {
    if (wVar1 == L'^') {
      pwVar3 = pwVar3 + 1;
    }
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar3;
  }
  wVar1 = *pwVar2;
  if (((wVar1 == L'(') && (local_8 != (wchar_t *)0x0)) && (local_8 < pwVar3)) {
    FUN_0040fcc0(param_1,&local_8,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (*param_5 != L'\0') {
      pwVar2 = *param_3;
      do {
        if (pwVar2 == *param_4) {
          FUN_0040f658(param_1,param_3,param_4,param_6,param_7);
          pwVar2 = *param_3;
        }
        wVar1 = *param_5;
        param_5 = param_5 + 1;
        *pwVar2 = wVar1;
        pwVar2 = pwVar2 + 1;
        *param_3 = pwVar2;
      } while (*param_5 != L'\0');
      pwVar2 = *param_2;
      wVar1 = *pwVar2;
    }
    if (wVar1 == L'$') {
      pwVar2 = pwVar2 + 1;
      *param_2 = pwVar2;
      wVar1 = *pwVar2;
    }
    if (wVar1 == L'(') {
      do {
        *param_2 = *param_2 + 1;
        pwVar2 = *param_2;
      } while (*pwVar2 != L')');
    }
    else if ((wVar1 == L'*') && (pwVar2[1] == L'*')) {
      pwVar2 = pwVar2 + 1;
    }
    local_8 = pwVar2 + 1;
  }
  *param_2 = local_8;
  return;
}



void __fastcall
FUN_0040fcc0(void **param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,wchar_t *param_5,
            uint *param_6,void *param_7)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *_Str2;
  wchar_t *pwVar3;
  int iVar4;
  size_t _MaxCount;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  
  *param_2 = *param_2 + 1;
  for (pwVar5 = *param_2; wVar1 = *pwVar5, wVar1 != L'\0'; pwVar5 = pwVar5 + 1) {
    if (wVar1 == L'=') goto LAB_0040fd17;
    if (wVar1 == L'^') {
      pwVar5 = pwVar5 + 1;
    }
  }
  FUN_004053c9(DAT_004226a4,0x3eb);
LAB_0040fd17:
  if (pwVar5 == *param_2) {
    FUN_004053c9(DAT_004226a4,0x3ed);
  }
  wVar1 = *pwVar5;
  pwVar6 = pwVar5;
  while (wVar1 != L'\0') {
    if (wVar1 == L')') goto LAB_0040fd85;
    if (wVar1 == L'^') {
      pwVar6 = pwVar6 + 1;
    }
    pwVar6 = pwVar6 + 1;
    wVar1 = *pwVar6;
  }
  FUN_004053c9(DAT_004226a4,1000);
LAB_0040fd85:
  lVar2 = (ulonglong)(((int)pwVar5 - (int)*param_2 >> 1) + 1) * 2;
  _Str2 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  pwVar7 = *param_2;
  wVar1 = *pwVar7;
  pwVar3 = _Str2;
  while (wVar1 != L'=') {
    if (wVar1 == L'^') {
      pwVar7 = pwVar7 + 1;
    }
    *pwVar3 = *pwVar7;
    pwVar7 = pwVar7 + 1;
    pwVar3 = pwVar3 + 1;
    wVar1 = *pwVar7;
  }
  *pwVar3 = L'\0';
  pwVar3 = _Str2;
  do {
    wVar1 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar1 != L'\0');
  _MaxCount = (int)pwVar3 - (int)(_Str2 + 1) >> 1;
  lVar2 = (ulonglong)(uint)((int)pwVar6 - (int)pwVar5 >> 1) * 2;
  pwVar3 = (wchar_t *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  pwVar7 = pwVar7 + 1;
  wVar1 = *pwVar7;
  pwVar5 = pwVar3;
  while (wVar1 != L')') {
    if (wVar1 == L'^') {
      pwVar7 = pwVar7 + 1;
    }
    wVar1 = *pwVar7;
    pwVar7 = pwVar7 + 1;
    *pwVar5 = wVar1;
    pwVar5 = pwVar5 + 1;
    wVar1 = *pwVar7;
  }
  *pwVar5 = L'\0';
  *param_2 = pwVar6 + 1;
  wVar1 = *param_5;
  while (wVar1 != L'\0') {
    if ((wVar1 == *_Str2) && (iVar4 = wcsncmp(param_5,_Str2,_MaxCount), iVar4 == 0)) {
      if (*pwVar3 != L'\0') {
        pwVar5 = *param_3;
        pwVar6 = pwVar3;
        do {
          if (pwVar5 == *param_4) {
            FUN_0040f658(param_1,param_3,param_4,param_6,param_7);
            pwVar5 = *param_3;
          }
          *pwVar5 = *pwVar6;
          pwVar5 = pwVar5 + 1;
          pwVar6 = pwVar6 + 1;
          *param_3 = pwVar5;
        } while (*pwVar6 != L'\0');
      }
      iVar4 = _MaxCount * 2;
    }
    else {
      pwVar5 = *param_3;
      if (pwVar5 == *param_4) {
        FUN_0040f658(param_1,param_3,param_4,param_6,param_7);
        pwVar5 = *param_3;
      }
      *pwVar5 = *param_5;
      *param_3 = pwVar5 + 1;
      iVar4 = 2;
    }
    param_5 = (wchar_t *)((int)param_5 + iVar4);
    wVar1 = *param_5;
  }
  free(_Str2);
  free(pwVar3);
  return;
}



void __fastcall FUN_0040ff18(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t local_41c [260];
  wchar_t local_214 [258];
  wchar_t local_10 [4];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  _wsplitpath_s(param_1,local_10,3,local_214,0x100,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
  _wmakepath_s(local_41c,0x104,local_10,local_214,param_2,(wchar_t *)0x0);
  FUN_0040e8fe(local_41c);
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __fastcall FUN_0040ff8c(short *param_1)

{
  wchar_t *pwVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined uVar5;
  wchar_t *_Str;
  ushort *local_8;
  
  uVar2 = *param_1;
  local_8 = (ushort *)param_1;
  if (uVar2 == 0x7b) {
    local_8 = (ushort *)(param_1 + 1);
    uVar2 = *local_8;
    while ((uVar2 != 0 && (uVar2 != 0x7d))) {
      if (uVar2 == 0x5e) {
        local_8 = local_8 + 1;
      }
      local_8 = local_8 + 1;
      uVar2 = *local_8;
    }
    if (uVar2 != 0) {
      local_8 = local_8 + 1;
      uVar2 = *local_8;
    }
  }
  uVar5 = 0;
  pwVar1 = (wchar_t *)0x2e;
  puVar3 = local_8;
  if (uVar2 == 0x2e) {
    do {
      if ((short)pwVar1 == 0x7b) break;
      if ((short)pwVar1 == 0x5e) {
        puVar3 = puVar3 + 1;
      }
      puVar3 = puVar3 + 1;
      pwVar1 = (wchar_t *)(uint)*puVar3;
    } while (*puVar3 != 0);
    uVar5 = 0;
    for (puVar4 = local_8; ((puVar4 < puVar3 && (*puVar4 != 0x5c)) && (*puVar4 != 0x2f));
        puVar4 = puVar4 + 1) {
    }
    if ((*puVar3 == 0) || (puVar4 != puVar3)) {
      pwVar1 = wcspbrk((wchar_t *)(local_8 + 1),L"./\\");
      if ((pwVar1 == (wchar_t *)0x0) || (*pwVar1 != L'.')) goto LAB_00410104;
      _Str = pwVar1 + 1;
    }
    else {
      puVar3 = puVar3 + 1;
      uVar2 = *puVar3;
      while ((pwVar1 = (wchar_t *)(uint)uVar2, uVar2 != 0 &&
             (pwVar1 = (wchar_t *)0x0, uVar2 != 0x7d))) {
        if (uVar2 == 0x5e) {
          puVar3 = puVar3 + 1;
        }
        puVar3 = puVar3 + 1;
        uVar2 = *puVar3;
      }
      uVar5 = 0;
      if ((uVar2 == 0) || (puVar3[1] != 0x2e)) goto LAB_00410104;
      _Str = (wchar_t *)(puVar3 + 2);
    }
    uVar5 = 0;
    pwVar1 = wcschr(_Str,L'/');
    if ((pwVar1 == (wchar_t *)0x0) && (pwVar1 = wcschr(_Str,L'\\'), pwVar1 == (wchar_t *)0x0)) {
      pwVar1 = wcschr(_Str,L'.');
      if (pwVar1 == (wchar_t *)0x0) {
        uVar5 = 1;
        pwVar1 = (wchar_t *)0x0;
      }
      else {
        pwVar1 = (wchar_t *)FUN_004053c9(DAT_004226b0,0x444);
      }
    }
  }
LAB_00410104:
  return CONCAT31((int3)((uint)pwVar1 >> 8),uVar5);
}



void __fastcall FUN_0041010b(wchar_t *param_1,int param_2,wchar_t *param_3,wchar_t *param_4)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t local_214;
  undefined local_212 [522];
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  wVar6 = *param_3;
  pwVar1 = param_1 + param_2;
joined_r0x0041013e:
  if (wVar6 == L'\0') {
    if (param_1 < pwVar1) {
      *param_1 = L'\0';
    }
LAB_004103f8:
    ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (pwVar1 <= param_1) goto LAB_004103f8;
  pwVar9 = param_3;
  if (wVar6 == L'%') {
    pwVar9 = param_3 + 1;
    wVar6 = *pwVar9;
    pwVar10 = param_3;
    if (wVar6 == L'\0') goto LAB_004103da;
    if (wVar6 == L'%') {
      *param_1 = L'%';
      goto LAB_004101a9;
    }
    if (wVar6 == L's') {
      pwVar7 = param_4;
      pwVar10 = pwVar9;
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
          wVar6 = *pwVar9;
          goto LAB_004101a6;
        }
        goto LAB_004103f8;
      }
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      local_214 = L'\0';
      do {
        pwVar10 = pwVar9 + 1;
        wVar6 = *pwVar10;
        if (wVar6 == L'\0') goto LAB_004103a0;
        if (wVar6 == L'F') {
          if (*pwVar9 == L'|') {
            bVar3 = true;
            bVar2 = true;
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
          pwVar9 = pwVar10;
          if (wVar6 != L'p') goto LAB_004103a0;
          bVar3 = true;
        }
        pwVar9 = pwVar10;
      } while (*pwVar10 != L'F');
      if (param_4 == (wchar_t *)0x0) {
        FUN_004053c9(0,0x449);
      }
      if (bVar2) {
        _wsplitpath_s(param_4,&local_214,0x104,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      }
      if (bVar3) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8
                      ,(wchar_t *)0x0,0,(wchar_t *)0x0,0);
      }
      if (bVar4) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,
                      (wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8,(wchar_t *)0x0,0);
      }
      if (bVar5) {
        pwVar9 = &local_214;
        do {
          wVar6 = *pwVar9;
          pwVar9 = pwVar9 + 1;
        } while (wVar6 != L'\0');
        iVar8 = (int)pwVar9 - (int)local_212 >> 1;
        _wsplitpath_s(param_4,(wchar_t *)0x0,0,(wchar_t *)0x0,0,(wchar_t *)0x0,0,
                      (wchar_t *)(local_212 + iVar8 * 2 + -2),0x104 - iVar8);
      }
      if (local_214 != L'\0') {
        iVar8 = -2 - (int)param_1;
        do {
          if (pwVar1 <= param_1) break;
          *param_1 = *(wchar_t *)(local_212 + iVar8 + (int)param_1);
          param_1 = param_1 + 1;
        } while (*(short *)(local_212 + iVar8 + (int)param_1) != 0);
      }
    }
  }
  else {
LAB_004101a6:
    *param_1 = wVar6;
LAB_004101a9:
    param_1 = param_1 + 1;
    pwVar10 = pwVar9;
  }
LAB_004103da:
  param_3 = pwVar10 + 1;
  wVar6 = *param_3;
  goto joined_r0x0041013e;
LAB_004103a0:
  for (; (pwVar10 = pwVar9, param_3 <= pwVar9 && (param_1 < pwVar1)); param_1 = param_1 + 1) {
    *param_1 = *param_3;
    param_3 = param_3 + 1;
  }
  goto LAB_004103da;
}



undefined4 * __thiscall FUN_00410409(void *this,int param_1)

{
  undefined4 *puVar1;
  wint_t wVar2;
  wint_t wVar3;
  wint_t *pwVar4;
  wint_t *pwVar5;
  
  puVar1 = (undefined4 *)(&DAT_00422490)[param_1];
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
                    // WARNING: Load size is inaccurate
    wVar2 = *this;
    pwVar5 = (wint_t *)this;
    for (pwVar4 = (wint_t *)puVar1[1]; (wVar2 != 0 && (wVar2 = *pwVar4, wVar2 != 0));
        pwVar4 = pwVar4 + 1) {
      if ((*pwVar5 == 0x5c) || (*pwVar5 == 0x2f)) {
        if ((wVar2 != 0x5c) && (wVar2 != 0x2f)) break;
      }
      else {
        wVar2 = towupper(wVar2);
        wVar3 = towupper(*pwVar5);
        if (wVar3 != wVar2) break;
      }
      pwVar5 = pwVar5 + 1;
      wVar2 = *pwVar5;
    }
    if ((*pwVar5 == 0) && (*pwVar4 == 0)) {
      return puVar1;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



// WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe
// WARNING: Unable to track spacebase fully for stack

void __fastcall FUN_004104c1(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  undefined4 uStack_24;
  wchar_t *pwStack_20;
  wchar_t *local_1c;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  psVar3 = param_1;
  do {
    sVar4 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar4 != 0);
  local_1c = (wchar_t *)0x4104fa;
  iVar1 = -(((int)psVar3 - (int)(param_1 + 1) >> 1) * 2 + 2);
  psVar3 = (short *)(&stack0xffffffe8 + iVar1);
  psVar6 = param_2;
  do {
    sVar4 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar4 != 0);
  *(undefined4 *)((int)&local_1c + iVar1) = 0x41051d;
  iVar2 = -(((int)psVar6 - (int)(param_2 + 1) >> 1) * 2 + 2);
  sVar4 = *param_1;
  local_c = 0x22;
  if (sVar4 == 0x22) {
    param_1 = param_1 + 1;
    sVar4 = *param_1;
  }
  if (sVar4 == 0) {
    sVar4 = 0x22;
  }
  else {
    psVar3 = (short *)(&stack0xffffffe8 + iVar1);
    do {
      psVar6 = psVar3;
      *psVar6 = sVar4;
      psVar3 = psVar6 + 1;
      sVar4 = *(short *)(((int)param_1 - (int)(&stack0xffffffe8 + iVar1)) + (int)psVar3);
    } while (sVar4 != 0);
    sVar4 = (short)local_c;
    if ((psVar3 != (short *)(&stack0xffffffe8 + iVar1)) && (*psVar6 == sVar4)) {
      psVar3 = psVar6;
    }
  }
  *psVar3 = 0;
  sVar5 = *param_2;
  if (sVar5 == sVar4) {
    param_2 = param_2 + 1;
    sVar5 = *param_2;
  }
  psVar3 = (short *)(&stack0xffffffe8 + iVar2 + iVar1);
  if (sVar5 != 0) {
    psVar3 = (short *)(&stack0xffffffe8 + iVar2 + iVar1);
    do {
      psVar6 = psVar3;
      *psVar6 = sVar5;
      psVar3 = psVar6 + 1;
      sVar5 = *(short *)(((int)param_2 - (int)(&stack0xffffffe8 + iVar2 + iVar1)) + (int)psVar3);
    } while (sVar5 != 0);
    if ((psVar3 != (short *)(&stack0xffffffe8 + iVar2 + iVar1)) && (*psVar6 == sVar4)) {
      psVar3 = psVar6;
    }
  }
  *(undefined **)((int)&local_1c + iVar2 + iVar1) = &stack0xffffffe8 + iVar2 + iVar1;
  *(undefined **)((int)&pwStack_20 + iVar2 + iVar1) = &stack0xffffffe8 + iVar1;
  *psVar3 = 0;
  *(undefined4 *)((int)&uStack_24 + iVar2 + iVar1) = 0x4105b1;
  _wcsicmp(*(wchar_t **)((int)&pwStack_20 + iVar2 + iVar1),
           *(wchar_t **)((int)&local_1c + iVar2 + iVar1));
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



short * __fastcall FUN_004105c5(short *param_1)

{
  longlong lVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  
  psVar3 = param_1;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  lVar1 = (ulonglong)(((int)psVar3 - (int)(param_1 + 1) >> 1) + 1) * 2;
  psVar3 = (short *)FUN_0040ab83(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  sVar2 = *param_1;
  if (sVar2 == 0x22) {
    param_1 = param_1 + 1;
    sVar2 = *param_1;
  }
  psVar4 = psVar3;
  if (sVar2 != 0) {
    do {
      *psVar4 = sVar2;
      psVar4 = psVar4 + 1;
      sVar2 = *(short *)(((int)param_1 - (int)psVar3) + (int)psVar4);
    } while (sVar2 != 0);
  }
  if (psVar4[-1] == 0x22) {
    psVar4 = psVar4 + -1;
  }
  *psVar4 = 0;
  return psVar3;
}



void __fastcall FUN_0041063a(wchar_t *param_1,wchar_t *param_2)

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
  _wfsopen(param_1,param_2,0x20);
  return;
}



void * __fastcall FUN_00410682(void *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 == (void *)0x0) {
    if (0x7ffffffc < param_2) goto LAB_004106b8;
    pvVar1 = malloc(param_2 * 2);
  }
  else {
    if (0x7ffffffc < param_2) goto LAB_004106b8;
    pvVar1 = realloc(param_1,param_2 * 2);
  }
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
LAB_004106b8:
  FUN_004053c9(DAT_004226b0,0x41b);
  return pvVar1;
}



void __fastcall FUN_004106ce(wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  WCHAR *pWVar5;
  HANDLE local_260;
  _WIN32_FIND_DATAW local_25c;
  uint local_8;
  
  local_8 = DAT_00412014 ^ (uint)&stack0xfffffffc;
  pwVar1 = (wchar_t *)FUN_00407a1b(param_1,&local_25c,&local_260);
  if (pwVar1 != (wchar_t *)0x0) {
    puVar2 = FUN_0040e8ac();
    uVar3 = FUN_0040ff18(param_1,pwVar1);
    puVar2[1] = uVar3;
    while (pWVar5 = FUN_00407ba7(&local_25c,local_260), pWVar5 != (WCHAR *)0x0) {
      puVar4 = FUN_0040e8ac();
      uVar3 = FUN_0040ff18(param_1,pWVar5);
      *puVar4 = puVar2;
      puVar4[1] = uVar3;
      puVar2 = puVar4;
    }
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int FUN_0041081f(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  code **ppcVar5;
  int *piVar6;
  uint uVar7;
  int unaff_ESI;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_0041243c != 1) {
      if (DAT_0041243c == 0) {
        DAT_0041243c = 1;
        iVar4 = _initterm_e(&DAT_0040100c,&DAT_0040101c);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        _initterm(&DAT_00401000,&DAT_00401008);
        DAT_0041243c = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      ppcVar5 = (code **)FUN_00410f35();
      if ((*ppcVar5 != (code *)0x0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)ppcVar5), (char)uVar3 != '\0')) {
        pcVar1 = *ppcVar5;
        uVar9 = 0;
        uVar8 = 2;
        uVar3 = 0;
        _guard_check_icall();
        (*pcVar1)(uVar3,uVar8,uVar9);
      }
      piVar6 = (int *)FUN_00410f3b();
      if ((*piVar6 != 0) &&
         (uVar3 = ___scrt_is_nonwritable_in_current_image((int)piVar6), (char)uVar3 != '\0')) {
        _register_thread_local_exe_atexit_callback(*piVar6);
      }
      _get_initial_wide_environment();
      piVar6 = (int *)__p___wargv();
      iVar4 = *piVar6;
      piVar6 = (int *)__p___argc();
      unaff_ESI = FUN_0040b950(*piVar6,iVar4);
      uVar7 = FUN_00411060();
      if ((char)uVar7 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00410992;
    }
  }
  ___scrt_fastfail(7);
LAB_00410992:
                    // WARNING: Subroutine does not return
  exit(unaff_ESI);
}



void entry(void)

{
  ___security_init_cookie();
  FUN_0041081f();
  return;
}



// Library Function - Single Match
//  @__security_check_cookie@4
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_00412014) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___report_gsfailure();
}



// Library Function - Single Match
//  ___raise_securityfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_gsfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___report_gsfailure(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_00412218 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00412220 = (undefined4)uVar9;
  _DAT_00412230 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00412234 = &stack0x00000004;
  _DAT_00412170 = 0x10001;
  _DAT_00412120 = 0xc0000409;
  _DAT_00412124 = 1;
  _DAT_00412130 = 1;
  DAT_00412134 = 2;
  _DAT_0041212c = unaff_retaddr;
  _DAT_004121fc = in_GS;
  _DAT_00412200 = in_FS;
  _DAT_00412204 = in_ES;
  _DAT_00412208 = in_DS;
  _DAT_0041220c = unaff_EDI;
  _DAT_00412210 = unaff_ESI;
  _DAT_00412214 = unaff_EBX;
  _DAT_0041221c = uVar3;
  _DAT_00412224 = unaff_EBP;
  DAT_00412228 = unaff_retaddr;
  _DAT_0041222c = in_CS;
  _DAT_00412238 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
  return;
}



// Library Function - Single Match
//  ___report_rangecheckfailure
// 
// Libraries: Visual Studio 2012 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

void ___report_rangecheckfailure(void)

{
  ___report_securityfailure(8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___report_securityfailure
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined8 uVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  uVar9 = CONCAT44(extraout_EDX,uVar2);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    uVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_00412218 = (undefined4)((ulonglong)uVar9 >> 0x20);
  _DAT_00412220 = (undefined4)uVar9;
  _DAT_00412230 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_00412234 = &param_1;
  _DAT_00412120 = 0xc0000409;
  _DAT_00412124 = 1;
  _DAT_00412130 = 1;
  DAT_00412134 = param_1;
  _DAT_0041212c = unaff_retaddr;
  _DAT_004121fc = in_GS;
  _DAT_00412200 = in_FS;
  _DAT_00412204 = in_ES;
  _DAT_00412208 = in_DS;
  _DAT_0041220c = unaff_EDI;
  _DAT_00412210 = unaff_ESI;
  _DAT_00412214 = unaff_EBX;
  _DAT_0041221c = uVar3;
  _DAT_00412224 = unaff_EBP;
  DAT_00412228 = unaff_retaddr;
  _DAT_0041222c = in_CS;
  _DAT_00412238 = in_SS;
  ___raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_00401030);
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio 2019 Release

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = __filter_x86_sse2_floating_point_exception_default(*param_1);
  *param_1 = iVar1;
  _except_handler4_common(&DAT_00412014,___security_check_cookie_4,param_1,param_2,param_3,param_4);
  return;
}



// Library Function - Single Match
//  struct _IMAGE_SECTION_HEADER * __cdecl find_pe_section(unsigned char * const,unsigned int)
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

_IMAGE_SECTION_HEADER * __cdecl find_pe_section(uchar *param_1,uint param_2)

{
  int iVar1;
  _IMAGE_SECTION_HEADER *p_Var2;
  _IMAGE_SECTION_HEADER *p_Var3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  p_Var2 = (_IMAGE_SECTION_HEADER *)
           (param_1 + (uint)*(ushort *)(param_1 + iVar1 + 0x14) + iVar1 + 0x18);
  p_Var3 = p_Var2 + (uint)*(ushort *)(param_1 + iVar1 + 6) * 0x28;
  while( true ) {
    if (p_Var2 == p_Var3) {
      return (_IMAGE_SECTION_HEADER *)0x0;
    }
    if ((*(uint *)(p_Var2 + 0xc) <= param_2) &&
       (param_2 < (uint)(*(int *)(p_Var2 + 8) + *(int *)(p_Var2 + 0xc)))) break;
    p_Var2 = p_Var2 + 0x28;
  }
  return p_Var2;
}



// Library Function - Single Match
//  ___scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  pvVar3 = (void *)CONCAT31(extraout_var,bVar2);
  if (pvVar3 != (void *)0x0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_00412440 != (void *)0x0) {
        pvVar3 = DAT_00412440;
        pvVar1 = DAT_00412440;
      }
      DAT_00412440 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return (uint)pvVar3 & 0xffffff00;
}



// Library Function - Single Match
//  ___scrt_initialize_crt
// 
// Library: Visual Studio 2017 Release

uint __cdecl ___scrt_initialize_crt(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    DAT_00412444 = 1;
  }
  ___isa_available_init();
  uVar1 = FUN_00410ee8();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00410ee8();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    uVar1 = FUN_00410ee8();
  }
  return uVar1 & 0xffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar3;
  undefined4 uVar4;
  
  if (DAT_00412445 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    ___scrt_fastfail(5);
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT31(extraout_var,bVar2);
  if ((uVar3 == 0) || (param_1 != 0)) {
    _DAT_00412448 = 0xffffffff;
    _DAT_0041244c = 0xffffffff;
    _DAT_00412450 = 0xffffffff;
    _DAT_00412454 = 0xffffffff;
    _DAT_00412458 = 0xffffffff;
    _DAT_0041245c = 0xffffffff;
LAB_00410d08:
    DAT_00412445 = '\x01';
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  else {
    uVar3 = _initialize_onexit_table(&DAT_00412448);
    if (uVar3 == 0) {
      uVar3 = _initialize_onexit_table(&DAT_00412454);
      if (uVar3 == 0) goto LAB_00410d08;
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4
// Library Function - Single Match
//  ___scrt_is_nonwritable_in_current_image
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint __cdecl ___scrt_is_nonwritable_in_current_image(int param_1)

{
  _IMAGE_SECTION_HEADER *p_Var1;
  uint uVar2;
  void *local_14;
  
  p_Var1 = find_pe_section((uchar *)&IMAGE_DOS_HEADER_00400000,param_1 - 0x400000);
  if ((p_Var1 == (_IMAGE_SECTION_HEADER *)0x0) || (*(int *)(p_Var1 + 0x24) < 0)) {
    uVar2 = (uint)p_Var1 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)p_Var1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar2;
}



// Library Function - Single Match
//  ___scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_00412440;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00412440 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}



// Library Function - Single Match
//  ___scrt_uninitialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_00412444 == '\0') || (param_2 == '\0')) {
    FUN_00410ee8();
    FUN_00410ee8();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __onexit
// 
// Library: Visual Studio 2019 Release

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  int iVar1;
  
  if (_DAT_00412448 == -1) {
    iVar1 = _crt_atexit();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_00412448,_Func);
  }
  return (_onexit_t)(~-(uint)(iVar1 != 0) & (uint)_Func);
}



// Library Function - Single Match
//  _atexit
// 
// Library: Visual Studio 2019 Release

int __cdecl _atexit(_func_4879 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = __onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// Library Function - Single Match
//  ___get_entropy
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

uint ___get_entropy(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_00412014 == 0xbb40e64e) || ((DAT_00412014 & 0xffff0000) == 0)) {
    DAT_00412014 = ___get_entropy();
    if (DAT_00412014 == 0xbb40e64e) {
      DAT_00412014 = 0xbb40e64f;
    }
    else if ((DAT_00412014 & 0xffff0000) == 0) {
      DAT_00412014 = DAT_00412014 | (DAT_00412014 | 0x4711) << 0x10;
    }
  }
  DAT_00412010 = ~DAT_00412014;
  return;
}



undefined4 FUN_00410ecf(void)

{
  return 0;
}



undefined4 FUN_00410ed2(void)

{
  return 1;
}



undefined4 FUN_00410ed6(void)

{
  return 0x4000;
}



void FUN_00410edc(void)

{
  InitializeSListHead((PSLIST_HEADER)&DAT_00412460);
  return;
}



undefined FUN_00410ee8(void)

{
  return 1;
}



void FUN_00410eeb(void)

{
  code *pcVar1;
  errno_t eVar2;
  
  eVar2 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar2 == 0) {
    return;
  }
  ___scrt_fastfail(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



void FUN_00410f0c(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0040cc47();
  *puVar1 = *puVar1 | 0x24;
  puVar1[1] = puVar1[1];
  puVar1 = (uint *)FUN_0040ccf5();
  *puVar1 = *puVar1 | 2;
  puVar1[1] = puVar1[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_00410f29(void)

{
  return _DAT_00412004 == 0;
}



undefined * FUN_00410f35(void)

{
  return &DAT_004372e4;
}



undefined * FUN_00410f3b(void)

{
  return &DAT_004372e0;
}



// Library Function - Single Match
//  ___scrt_fastfail
// 
// Library: Visual Studio 2019 Release

void ___scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_004110f0();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_004110f0();
  }
  return;
}



undefined4 thunk_FUN_00410ecf(void)

{
  return 0;
}



uint FUN_00411060(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && (*(short *)&pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     (((pHVar1 = (HMODULE)0x10b, *(short *)(piVar2 + 6) == 0x10b && (0xe < (uint)piVar2[0x1d])) &&
      (piVar2[0x3a] != 0)))) {
    return 0x101;
  }
  return (uint)pHVar1 & 0xffffff00;
}



undefined4 FUN_004110af(int **param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004110f0(void)

{
  _DAT_00412468 = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x00411108)
// WARNING: Removing unreachable block (ram,0x00411109)
// WARNING: Removing unreachable block (ram,0x0041110f)
// WARNING: Removing unreachable block (ram,0x00411119)
// WARNING: Removing unreachable block (ram,0x00411120)

void FUN_004110f8(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00411134)
// WARNING: Removing unreachable block (ram,0x00411135)
// WARNING: Removing unreachable block (ram,0x0041113b)
// WARNING: Removing unreachable block (ram,0x00411145)
// WARNING: Removing unreachable block (ram,0x0041114c)

void FUN_00411124(void)

{
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00412014 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: Removing unreachable block (ram,0x00411227)
// WARNING: Removing unreachable block (ram,0x004111ec)
// WARNING: Removing unreachable block (ram,0x0041129f)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___isa_available_init
// 
// Library: Visual Studio 2017 Release

undefined4 ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint in_XCR0;
  
  _DAT_0041246c = 0;
  DAT_00412018 = DAT_00412018 | 1;
  BVar5 = IsProcessorFeaturePresent(10);
  uVar4 = DAT_00412018;
  if (BVar5 != 0) {
    DAT_00412018 = DAT_00412018 | 2;
    _DAT_0041246c = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar7 = puVar2[3];
    if (((piVar1[3] ^ 0x6c65746eU | piVar1[2] ^ 0x49656e69U | piVar1[1] ^ 0x756e6547U) == 0) &&
       (((((uVar6 = *puVar2 & 0xfff3ff0, uVar6 == 0x106c0 || (uVar6 == 0x20660)) ||
          (uVar6 == 0x20670)) || ((uVar6 == 0x30650 || (uVar6 == 0x30660)))) || (uVar6 == 0x30670)))
       ) {
      DAT_00412470 = DAT_00412470 | 1;
    }
    if (*piVar1 < 7) {
      uVar6 = 0;
    }
    else {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(iVar3 + 4);
      if ((uVar6 & 0x200) != 0) {
        DAT_00412470 = DAT_00412470 | 2;
      }
    }
    if ((uVar7 & 0x100000) != 0) {
      DAT_00412018 = uVar4 | 6;
      _DAT_0041246c = 2;
      if ((((uVar7 & 0x8000000) != 0) && ((uVar7 & 0x10000000) != 0)) && ((in_XCR0 & 6) == 6)) {
        DAT_00412018 = uVar4 | 0xe;
        _DAT_0041246c = 3;
        if ((uVar6 & 0x20) != 0) {
          DAT_00412018 = uVar4 | 0x2e;
          _DAT_0041246c = 5;
        }
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return _DAT_0041201c != 0;
}



void _except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x0041134e. Too many branches
                    // WARNING: Treating indirect jump as call
  _except_handler4_common();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411354. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x0041135a. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void _set_app_type(void)

{
                    // WARNING: Could not recover jumptable at 0x00411366. Too many branches
                    // WARNING: Treating indirect jump as call
  _set_app_type();
  return;
}



void __setusermatherr(void)

{
                    // WARNING: Could not recover jumptable at 0x0041136c. Too many branches
                    // WARNING: Treating indirect jump as call
  __setusermatherr();
  return;
}



void _configure_wide_argv(void)

{
                    // WARNING: Could not recover jumptable at 0x00411372. Too many branches
                    // WARNING: Treating indirect jump as call
  _configure_wide_argv();
  return;
}



void _initialize_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x00411378. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_wide_environment();
  return;
}



void _get_initial_wide_environment(void)

{
                    // WARNING: Could not recover jumptable at 0x0041137e. Too many branches
                    // WARNING: Treating indirect jump as call
  _get_initial_wide_environment();
  return;
}



void _initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x00411384. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm();
  return;
}



void _initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x0041138a. Too many branches
                    // WARNING: Treating indirect jump as call
  _initterm_e();
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x00411390. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



errno_t __cdecl _set_fmode(int _Mode)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411396. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _set_fmode(_Mode);
  return eVar1;
}



void __p___argc(void)

{
                    // WARNING: Could not recover jumptable at 0x0041139c. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___argc();
  return;
}



void __p___wargv(void)

{
                    // WARNING: Could not recover jumptable at 0x004113a2. Too many branches
                    // WARNING: Treating indirect jump as call
  __p___wargv();
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004113a8. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void _register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x004113b4. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_thread_local_exe_atexit_callback();
  return;
}



int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x004113ba. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = _configthreadlocale(_Flag);
  return iVar1;
}



void __p__commode(void)

{
                    // WARNING: Could not recover jumptable at 0x004113c6. Too many branches
                    // WARNING: Treating indirect jump as call
  __p__commode();
  return;
}



void _initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x004113cc. Too many branches
                    // WARNING: Treating indirect jump as call
  _initialize_onexit_table();
  return;
}



void _register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x004113d2. Too many branches
                    // WARNING: Treating indirect jump as call
  _register_onexit_function();
  return;
}



void _crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x004113d8. Too many branches
                    // WARNING: Treating indirect jump as call
  _crt_atexit();
  return;
}



errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    // WARNING: Could not recover jumptable at 0x004113de. Too many branches
                    // WARNING: Treating indirect jump as call
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x004113e4. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411409. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __filter_x86_sse2_floating_point_exception_default
// 
// Library: Visual Studio 2019 Release

int __cdecl __filter_x86_sse2_floating_point_exception_default(int param_1)

{
  uint uVar1;
  uint in_MXCSR;
  
  if ((_DAT_0041246c < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = in_MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4_GS
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __cdecl __SEH_prolog4_GS(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00412014 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

uint __alloca_probe_16(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 0xf;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// WARNING: Function: __alloca_probe replaced with injection: alloca_probe

uint __alloca_probe_8(undefined1 param_1)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = 4 - in_EAX & 7;
  return in_EAX + uVar1 | -(uint)CARRY4(in_EAX,uVar1);
}



// WARNING: This is an inlined function
// Library Function - Single Match
//  __alloca_probe
// 
// Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019

void __alloca_probe(void)

{
  undefined *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0041154d. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}



void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00411553. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}


