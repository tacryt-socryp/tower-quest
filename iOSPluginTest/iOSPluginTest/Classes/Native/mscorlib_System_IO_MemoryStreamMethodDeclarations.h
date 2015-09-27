#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.MemoryStream
struct MemoryStream_t633;
// System.Byte[]
struct ByteU5BU5D_t368;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.IO.MemoryStream::.ctor()
extern "C" void MemoryStream__ctor_m3205 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" void MemoryStream__ctor_m3210 (MemoryStream_t633 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C" void MemoryStream__ctor_m3211 (MemoryStream_t633 * __this, ByteU5BU5D_t368* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::InternalConstructor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" void MemoryStream_InternalConstructor_m5233 (MemoryStream_t633 * __this, ByteU5BU5D_t368* ___buffer, int32_t ___index, int32_t ___count, bool ___writable, bool ___publicallyVisible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::CheckIfClosedThrowDisposed()
extern "C" void MemoryStream_CheckIfClosedThrowDisposed_m5234 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanRead()
extern "C" bool MemoryStream_get_CanRead_m5235 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanSeek()
extern "C" bool MemoryStream_get_CanSeek_m5236 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MemoryStream::get_CanWrite()
extern "C" bool MemoryStream_get_CanWrite_m5237 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Capacity(System.Int32)
extern "C" void MemoryStream_set_Capacity_m5238 (MemoryStream_t633 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Length()
extern "C" int64_t MemoryStream_get_Length_m5239 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::get_Position()
extern "C" int64_t MemoryStream_get_Position_m5240 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::set_Position(System.Int64)
extern "C" void MemoryStream_set_Position_m5241 (MemoryStream_t633 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Dispose(System.Boolean)
extern "C" void MemoryStream_Dispose_m5242 (MemoryStream_t633 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Flush()
extern "C" void MemoryStream_Flush_m5243 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t MemoryStream_Read_m5244 (MemoryStream_t633 * __this, ByteU5BU5D_t368* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::ReadByte()
extern "C" int32_t MemoryStream_ReadByte_m5245 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t MemoryStream_Seek_m5246 (MemoryStream_t633 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MemoryStream::CalculateNewCapacity(System.Int32)
extern "C" int32_t MemoryStream_CalculateNewCapacity_m5247 (MemoryStream_t633 * __this, int32_t ___minimum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Expand(System.Int32)
extern "C" void MemoryStream_Expand_m5248 (MemoryStream_t633 * __this, int32_t ___newSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::SetLength(System.Int64)
extern "C" void MemoryStream_SetLength_m5249 (MemoryStream_t633 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.MemoryStream::ToArray()
extern "C" ByteU5BU5D_t368* MemoryStream_ToArray_m5250 (MemoryStream_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void MemoryStream_Write_m5251 (MemoryStream_t633 * __this, ByteU5BU5D_t368* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::WriteByte(System.Byte)
extern "C" void MemoryStream_WriteByte_m5252 (MemoryStream_t633 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
