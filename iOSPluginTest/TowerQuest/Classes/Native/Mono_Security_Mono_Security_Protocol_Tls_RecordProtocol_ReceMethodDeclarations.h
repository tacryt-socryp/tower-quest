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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t614;
// System.AsyncCallback
struct AsyncCallback_t52;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t368;
// System.IO.Stream
struct Stream_t616;
// System.Exception
struct Exception_t151;
// System.Threading.WaitHandle
struct WaitHandle_t662;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m2803 (ReceiveRecordAsyncResult_t614 * __this, AsyncCallback_t52 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t368* ___initialBuffer, Stream_t616 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t616 * ReceiveRecordAsyncResult_get_Record_m2804 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t368* ReceiveRecordAsyncResult_get_ResultingBuffer_m2805 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t368* ReceiveRecordAsyncResult_get_InitialBuffer_m2806 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2807 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t151 * ReceiveRecordAsyncResult_get_AsyncException_m2808 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m2809 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t662 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m2810 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m2811 (ReceiveRecordAsyncResult_t614 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2812 (ReceiveRecordAsyncResult_t614 * __this, Exception_t151 * ___ex, ByteU5BU5D_t368* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2813 (ReceiveRecordAsyncResult_t614 * __this, Exception_t151 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2814 (ReceiveRecordAsyncResult_t614 * __this, ByteU5BU5D_t368* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
