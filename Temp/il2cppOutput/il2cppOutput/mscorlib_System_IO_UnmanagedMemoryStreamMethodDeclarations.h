﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1228;
// System.Byte[]
struct ByteU5BU5D_t658;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Boolean System.IO.UnmanagedMemoryStream::get_CanRead()
extern "C" bool UnmanagedMemoryStream_get_CanRead_m7625 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanSeek()
extern "C" bool UnmanagedMemoryStream_get_CanSeek_m7626 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.UnmanagedMemoryStream::get_CanWrite()
extern "C" bool UnmanagedMemoryStream_get_CanWrite_m7627 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Length()
extern "C" int64_t UnmanagedMemoryStream_get_Length_m7628 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::get_Position()
extern "C" int64_t UnmanagedMemoryStream_get_Position_m7629 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::set_Position(System.Int64)
extern "C" void UnmanagedMemoryStream_set_Position_m7630 (UnmanagedMemoryStream_t1228 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UnmanagedMemoryStream_Read_m7631 (UnmanagedMemoryStream_t1228 * __this, ByteU5BU5D_t658* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.UnmanagedMemoryStream::ReadByte()
extern "C" int32_t UnmanagedMemoryStream_ReadByte_m7632 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.UnmanagedMemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t UnmanagedMemoryStream_Seek_m7633 (UnmanagedMemoryStream_t1228 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::SetLength(System.Int64)
extern "C" void UnmanagedMemoryStream_SetLength_m7634 (UnmanagedMemoryStream_t1228 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Flush()
extern "C" void UnmanagedMemoryStream_Flush_m7635 (UnmanagedMemoryStream_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Dispose(System.Boolean)
extern "C" void UnmanagedMemoryStream_Dispose_m7636 (UnmanagedMemoryStream_t1228 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void UnmanagedMemoryStream_Write_m7637 (UnmanagedMemoryStream_t1228 * __this, ByteU5BU5D_t658* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnmanagedMemoryStream::WriteByte(System.Byte)
extern "C" void UnmanagedMemoryStream_WriteByte_m7638 (UnmanagedMemoryStream_t1228 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
