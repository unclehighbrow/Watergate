#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.MemoryStream
struct MemoryStream_t749;
// System.Byte[]
struct ByteU5BU5D_t551;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C" void MemoryStream__ctor_m6029 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" void MemoryStream__ctor_m3553 (MemoryStream_t749 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C" void MemoryStream__ctor_m6034 (MemoryStream_t749 * __this, ByteU5BU5D_t551* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void MemoryStream_InternalConstructor_m7930 (MemoryStream_t749 * __this, ByteU5BU5D_t551* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C" void MemoryStream_CheckIfClosedThrowDisposed_m7931 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C" bool MemoryStream_get_CanRead_m7932 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C" bool MemoryStream_get_CanSeek_m7933 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C" bool MemoryStream_get_CanWrite_m7934 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C" void MemoryStream_set_Capacity_m7935 (MemoryStream_t749 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C" int64_t MemoryStream_get_Length_m7936 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C" int64_t MemoryStream_get_Position_m7937 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C" void MemoryStream_set_Position_m7938 (MemoryStream_t749 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C" void MemoryStream_Dispose_m7939 (MemoryStream_t749 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C" void MemoryStream_Flush_m7940 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t MemoryStream_Read_m7941 (MemoryStream_t749 * __this, ByteU5BU5D_t551* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C" int32_t MemoryStream_ReadByte_m7942 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t MemoryStream_Seek_m7943 (MemoryStream_t749 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C" int32_t MemoryStream_CalculateNewCapacity_m7944 (MemoryStream_t749 * __this, int32_t ___minimum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C" void MemoryStream_Expand_m7945 (MemoryStream_t749 * __this, int32_t ___newSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C" void MemoryStream_SetLength_m7946 (MemoryStream_t749 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C" ByteU5BU5D_t551* MemoryStream_ToArray_m7947 (MemoryStream_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void MemoryStream_Write_m7948 (MemoryStream_t749 * __this, ByteU5BU5D_t551* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C" void MemoryStream_WriteByte_m7949 (MemoryStream_t749 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
