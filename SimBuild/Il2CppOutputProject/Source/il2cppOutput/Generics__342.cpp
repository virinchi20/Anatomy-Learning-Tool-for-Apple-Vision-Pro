#include "pch-cpp.hpp"





template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tDDCA7E9A7975274C22334457EE4CE8164EAFED24;
struct IEnumerator_1_tFD9FF8F104BF34B490712D29E62FD9BD0D309128;
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5;
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4;
struct Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5  : public RuntimeObject
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF 
{
	uint64_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
typedef Il2CppFullySharedGenericStruct Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6;
typedef Il2CppFullySharedGenericStruct Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6;
struct ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_ThreadIndex;
};
struct ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_ThreadIndex;
};
struct UnsafeParallelHashMapBase_2_t534227280CBDA54109536E45542DE407D5E22A2C 
{
};
struct UnsafeParallelHashMapBase_2_t7C4F12F07CF1ADD13346E702547584E2A01A318A 
{
};
struct UnsafeParallelHashMapBase_2_tFFA96C6358793E339B408DF1C579432254274BAF 
{
};
struct UnsafeParallelHashMapBase_2_tB5E97D275338A63802436C4B39D1CCA6B1ABE38E 
{
};
struct UnsafeParallelHashMapBase_2_tE1972978836775FEF6773510F242213E74BB109B 
{
};
struct UnsafeParallelHashMapBase_2_t4FB24DF7B8BD8AF640B6F98964EEB879CCA114D5 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct UnsafeParallelHashMapBase_2_t6BA67CB076A982AD559CA34920F7C94094E912CE 
{
};
struct UnsafeParallelHashMapBase_2_tAAE08D929C0FA1FD4A848B64A79E086691DDF1AB 
{
};
struct UnsafeParallelHashMapBase_2_t76BA22EE61ABEC568B9E2007939459B7CE9C23D9 
{
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___Header;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 
{
	int32_t ___BatchIndex;
	int32_t ___MeshVertexIndex;
	int32_t ___BlendShapeIndex;
	int32_t ___SkinMatrixIndex;
	int32_t ___InstanceCount;
};
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 
{
	int32_t ___Id;
	uint64_t ___Target;
};
struct Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
struct Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
struct NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___IndexInBakerArray;
};
struct EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___componentTypeIndex;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C 
{
	int32_t ___Id;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___TargetEntity;
};
struct NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 
{
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C 
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1 ___m_HashMapData;
};
struct ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026 ___m_HashMapData;
};
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4  : public RuntimeObject
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_Target;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF 
{
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 ___Keys;
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 ___Values;
};
struct NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___Keys;
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Component;
};
struct NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 
{
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5_StaticFields
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8EFAE53DC3429319533DD3A4811D622B655DEB95_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m18667BAFA24270C1DABBBC91138867DAC4F46C52_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF39D111F74FED35C3D6A679BE4BC1835D95CA9D8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6* __this, Il2CppFullySharedGenericAny ___0_k, Il2CppFullySharedGenericAny ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mF3CA94EA25D4915222AF97C48632B1EBA94FB8CB_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m3FAFDB6E81B286257F4C66C1994370D1BD868C26_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m7D30760608C754177A920AB7DCECA77F6E184C77_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mA392F7F773727B1E021B9C789372C2EFAF4AA13B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___2_item, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBC18C7011827D88295DED84B1726AD4466BB120F_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624* ___1_it, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mB6F970D649AF412FDC59C8BB56C020E3AB8E5A54_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 CollectionHelper_CreateNativeArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m2A01DCDC2D6353A9DDD74CDFF0A9908BB96E6A04_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD726977F6E8B5502D1AED57AAADDDB7D85557BDE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m72A0F9653E0BC4652F78F93FE8FDEB2647F2E172_gshared (NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mAA74B2488D1B1A7477FEEEA971506A1D16CC0447_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnly__ctor_mAFEC09ABB74D7DCF6467DA5123E5134A7690563A_gshared (ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C* __this, UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1 ___0_hashMapData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE54DD5C2CBA8FCBC9A566B3974CF6E647FC9E17A_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA570A0B094BE59896697D14CD2A80B0AA68D3F58_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mB7B85621D35EE959C55FB505035D7B25007B415A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mBCADF7E8C529A74DD583D12B668E2C2B9375AAC8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___2_item, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m54AB539F65B85ABE79F37AD2CE50A099488B995D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915* ___1_it, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 CollectionHelper_CreateNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mD989AA72296BF2E4B3343D2970C945B4E56B37DA_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE4D021AEA5F6DA3E518498C925ACD4730FC2FDE2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_mF2C81ACC06F062F8629A60F4C0307990B4CEB3AA_gshared (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m202FA5F5FFDE5A0DCD7E0B472C02513534DE0833_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnly__ctor_m9702EDFF00C6AA81D25FA31361E8BF2F768D95B5_gshared (ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9* __this, UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026 ___0_hashMapData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, bool*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint64_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, bool, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8EFAE53DC3429319533DD3A4811D622B655DEB95 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8EFAE53DC3429319533DD3A4811D622B655DEB95_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3 (int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m18667BAFA24270C1DABBBC91138867DAC4F46C52 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m18667BAFA24270C1DABBBC91138867DAC4F46C52_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81 (uint64_t* __this, uint64_t ___0_obj, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF39D111F74FED35C3D6A679BE4BC1835D95CA9D8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF39D111F74FED35C3D6A679BE4BC1835D95CA9D8_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  bool (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, uint8_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, uint8_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint8_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, int32_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t, uint64_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, uint64_t*, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, bool*, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21 (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* __this, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, bool*, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8 (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1 (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* __this, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___0_rhs, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* __this, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___0_other, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline)(___0_source, ___1_index, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared)(___0_data, ___1_item, ___2_it, method);
}
inline ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37 (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_gshared)(__this, method);
}
inline void Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A (Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6* __this, Il2CppFullySharedGenericStruct ___0_k, Il2CppFullySharedGenericStruct ___1_v, const RuntimeMethod* method)
{
	((  void (*) (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_gshared)((Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*)__this, (Il2CppFullySharedGenericAny)___0_k, (Il2CppFullySharedGenericAny)___1_v, method);
}
inline void UnsafeParallelHashMapData_AllocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mF3CA94EA25D4915222AF97C48632B1EBA94FB8CB (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**, const RuntimeMethod*))UnsafeParallelHashMapData_AllocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mF3CA94EA25D4915222AF97C48632B1EBA94FB8CB_gshared)(___0_length, ___1_bucketLength, ___2_label, ___3_outBuf, method);
}
inline void UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2_gshared)(__this, method);
}
inline void UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline bool UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A_gshared)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_gshared_inline)(__this, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m3FAFDB6E81B286257F4C66C1994370D1BD868C26 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m3FAFDB6E81B286257F4C66C1994370D1BD868C26_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline void UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB_gshared)(__this, ___0_value, method);
}
inline void UnsafeParallelHashMapBase_2_Clear_m7D30760608C754177A920AB7DCECA77F6E184C77 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m7D30760608C754177A920AB7DCECA77F6E184C77_gshared)(___0_data, method);
}
inline bool UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412, bool, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17_gshared)(___0_data, ___1_key, ___2_item, ___3_isMultiHashMap, ___4_allocation, method);
}
inline bool UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412, const RuntimeMethod*))UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273_gshared)(__this, ___0_key, ___1_item, method);
}
inline void UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412, const RuntimeMethod*))UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95_gshared)(__this, ___0_key, ___1_item, method);
}
inline int32_t UnsafeParallelHashMapBase_2_Remove_mA392F7F773727B1E021B9C789372C2EFAF4AA13B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, bool, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Remove_mA392F7F773727B1E021B9C789372C2EFAF4AA13B_gshared)(___0_data, ___1_key, ___2_isMultiHashMap, method);
}
inline bool UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, const RuntimeMethod*))UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___1_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___2_item, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412*, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline bool UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412*, const RuntimeMethod*))UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415_gshared)(__this, ___0_key, ___1_item, method);
}
inline bool UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, const RuntimeMethod*))UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA_gshared)(__this, ___0_key, method);
}
inline MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	return ((  MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_SetValue_mBC18C7011827D88295DED84B1726AD4466BB120F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624* ___1_it, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___2_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624*, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_SetValue_mBC18C7011827D88295DED84B1726AD4466BB120F_gshared)(___0_data, ___1_it, ___2_item, method);
}
inline void UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_gshared)(___0_jobData, ___1_dependsOn, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00_gshared)(__this, ___0_inputDeps, method);
}
inline NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mB6F970D649AF412FDC59C8BB56C020E3AB8E5A54 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mB6F970D649AF412FDC59C8BB56C020E3AB8E5A54_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14_gshared)(__this, ___0_allocator, method);
}
inline NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 CollectionHelper_CreateNativeArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m2A01DCDC2D6353A9DDD74CDFF0A9908BB96E6A04 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m2A01DCDC2D6353A9DDD74CDFF0A9908BB96E6A04_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetValueArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD726977F6E8B5502D1AED57AAADDDB7D85557BDE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5, const RuntimeMethod*))UnsafeParallelHashMapData_GetValueArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD726977F6E8B5502D1AED57AAADDDB7D85557BDE_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346_gshared)(__this, ___0_allocator, method);
}
inline void NativeKeyValueArrays_2__ctor_m72A0F9653E0BC4652F78F93FE8FDEB2647F2E172 (NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeKeyValueArrays_2__ctor_m72A0F9653E0BC4652F78F93FE8FDEB2647F2E172_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyValueArrays_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mAA74B2488D1B1A7477FEEEA971506A1D16CC0447 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyValueArrays_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mAA74B2488D1B1A7477FEEEA971506A1D16CC0447_gshared)(___0_data, ___1_result, method);
}
inline NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA_gshared)(__this, ___0_allocator, method);
}
inline ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE_gshared)(__this, method);
}
inline void ReadOnly__ctor_mAFEC09ABB74D7DCF6467DA5123E5134A7690563A (ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C* __this, UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1 ___0_hashMapData, const RuntimeMethod* method)
{
	((  void (*) (ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C*, UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1, const RuntimeMethod*))ReadOnly__ctor_mAFEC09ABB74D7DCF6467DA5123E5134A7690563A_gshared)(__this, ___0_hashMapData, method);
}
inline ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736 (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
inline Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8 (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8_gshared)(__this, method);
}
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C_gshared)(__this, method);
}
inline void UnsafeParallelHashMapData_AllocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE54DD5C2CBA8FCBC9A566B3974CF6E647FC9E17A (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**, const RuntimeMethod*))UnsafeParallelHashMapData_AllocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE54DD5C2CBA8FCBC9A566B3974CF6E647FC9E17A_gshared)(___0_length, ___1_bucketLength, ___2_label, ___3_outBuf, method);
}
inline void UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A_gshared)(__this, method);
}
inline void UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD_gshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline bool UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_gshared_inline)(__this, method);
}
inline bool UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_gshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1_gshared)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_gshared_inline)(__this, method);
}
inline void UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA570A0B094BE59896697D14CD2A80B0AA68D3F58 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA570A0B094BE59896697D14CD2A80B0AA68D3F58_gshared)(___0_data, ___1_newCapacity, ___2_newBucketCapacity, ___3_label, method);
}
inline void UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, int32_t, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63_gshared)(__this, ___0_value, method);
}
inline void UnsafeParallelHashMapBase_2_Clear_mB7B85621D35EE959C55FB505035D7B25007B415A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_mB7B85621D35EE959C55FB505035D7B25007B415A_gshared)(___0_data, method);
}
inline bool UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, bool, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5_gshared)(___0_data, ___1_key, ___2_item, ___3_isMultiHashMap, ___4_allocation, method);
}
inline bool UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282_gshared)(__this, ___0_key, ___1_item, method);
}
inline void UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5_gshared)(__this, ___0_key, ___1_item, method);
}
inline int32_t UnsafeParallelHashMapBase_2_Remove_mBCADF7E8C529A74DD583D12B668E2C2B9375AAC8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, bool, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Remove_mBCADF7E8C529A74DD583D12B668E2C2B9375AAC8_gshared)(___0_data, ___1_key, ___2_isMultiHashMap, method);
}
inline bool UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___2_item, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915* ___3_it, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61*, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2_gshared)(___0_data, ___1_key, ___2_item, ___3_it, method);
}
inline bool UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61*, const RuntimeMethod*))UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236_gshared)(__this, ___0_key, ___1_item, method);
}
inline bool UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432_gshared)(__this, ___0_key, method);
}
inline BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	return ((  BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0_gshared)(__this, ___0_key, method);
}
inline bool UnsafeParallelHashMapBase_2_SetValue_m54AB539F65B85ABE79F37AD2CE50A099488B995D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915* ___1_it, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___2_item, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_SetValue_m54AB539F65B85ABE79F37AD2CE50A099488B995D_gshared)(___0_data, ___1_it, ___2_item, method);
}
inline void UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61, const RuntimeMethod*))UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03_gshared)(__this, ___0_key, ___1_value, method);
}
inline void UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9_gshared)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B_gshared)(__this, ___0_inputDeps, method);
}
inline NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 CollectionHelper_CreateNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mD989AA72296BF2E4B3343D2970C945B4E56B37DA (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mD989AA72296BF2E4B3343D2970C945B4E56B37DA_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE4D021AEA5F6DA3E518498C925ACD4730FC2FDE2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE4D021AEA5F6DA3E518498C925ACD4730FC2FDE2_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867_gshared)(__this, ___0_allocator, method);
}
inline void UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837, const RuntimeMethod*))UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8_gshared)(___0_data, ___1_result, method);
}
inline NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD_gshared)(__this, ___0_allocator, method);
}
inline void NativeKeyValueArrays_2__ctor_mF2C81ACC06F062F8629A60F4C0307990B4CEB3AA (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))NativeKeyValueArrays_2__ctor_mF2C81ACC06F062F8629A60F4C0307990B4CEB3AA_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m202FA5F5FFDE5A0DCD7E0B472C02513534DE0833 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 ___1_result, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7, const RuntimeMethod*))UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m202FA5F5FFDE5A0DCD7E0B472C02513534DE0833_gshared)(___0_data, ___1_result, method);
}
inline NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188_gshared)(__this, ___0_allocator, method);
}
inline ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8_gshared)(__this, method);
}
inline void ReadOnly__ctor_m9702EDFF00C6AA81D25FA31361E8BF2F768D95B5 (ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9* __this, UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026 ___0_hashMapData, const RuntimeMethod* method)
{
	((  void (*) (ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9*, UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026, const RuntimeMethod*))ReadOnly__ctor_m9702EDFF00C6AA81D25FA31361E8BF2F768D95B5_gshared)(__this, ___0_hashMapData, method);
}
inline ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C_gshared)(__this, method);
}
inline Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB_gshared)(__this, method);
}
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798_gshared)(__this, method);
}
inline RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3 (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*, const RuntimeMethod*))UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mA975E19F2D66CE9BBEA9EB17CC2BA81596AB2E94_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8EFAE53DC3429319533DD3A4811D622B655DEB95_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mC3E36DABA9FB741FA34631833E7711ADA48D0A7C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		bool L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		uint64_t L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8EFAE53DC3429319533DD3A4811D622B655DEB95(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m04A45248C035178C9B362AAB9F9788D8FC2A67B0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mD70446F96D5217FE20F0C6BE19F3CBF724BCBD96(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7A7A6A0898B6D1F3A51DC3581D202274EEC4E0D7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m18667BAFA24270C1DABBBC91138867DAC4F46C52(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		uint64_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		bool L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m3286959AC7DC7500B239139D5C9AF27F085E613D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint64_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		uint64_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mB5018DA00BC06E120447723805056D960BDBC196_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6295A4648FBF65BAC0EF3DDB2E617B6F90A5F633_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		bool* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(bool));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		bool* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF39D111F74FED35C3D6A679BE4BC1835D95CA9D8(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF39D111F74FED35C3D6A679BE4BC1835D95CA9D8_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		uint64_t L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___2_it;
		uint64_t L_25 = L_24->___key;
		bool L_26;
		L_26 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		bool* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		bool L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m865179382CF4490729143658868D7B8808A0CAE2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool* L_10 = ___2_item;
		bool L_11 = (*(bool*)L_10);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mC57EA4C48941B03D3B9EE520B3B6C2A83633253A_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m20FB7884EC1279CFD44F916164173D5AB02FF103_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mB7782F93185E27E06D6AAFD3329DA15DA0154164_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mF7F07D3F579865774374D292FFDF977DD9A53D57_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m446C930A4ECCE73D5EB3D9D141FEC0D9FD97E38B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mC22789FFEA55F030DF18C9B098578731C8C09AD2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		uint8_t L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		uint64_t L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m958E6A13CCA1BFAACFA0270C3667498278663F15(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD4516577672163E127FCFE4BCD92A7BDD01151AB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m05BB0BC376D1BEDF61C4EEEE0C870D5CD38952B2(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint8_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m0871CFFF53688FC3F8E77997FA358C62F3AB074B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BD3C4A045ADF5381D44D369C5A69A8B2DD32D4E(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		uint64_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		uint8_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6F2C8253913DF1F9AB9FE0253C8A0D595BA67298_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint64_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		uint64_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m58671616C021782650B094DBCA7778C65783EDFD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m9C4A3503BF7A23FCC6FC6F6E1CBE3C045848B261_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint8_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		uint8_t* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(uint8_t));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		uint8_t* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mF04B0DE54C94A3CAFEB53CDE7E179F0AA4DA4AFF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint8_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint8_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint8_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		uint64_t L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___2_it;
		uint64_t L_25 = L_24->___key;
		bool L_26;
		L_26 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		uint8_t* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		uint8_t L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint8_t*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m9ADBB8E3E823D0A293BDE6B5C2412619A0990F8C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, uint8_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint8_t* L_10 = ___2_item;
		uint8_t L_11 = (*(uint8_t*)L_10);
		UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m1BB7DF4615FA65384A29B37299C9EC20DF0C9B81_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mD45F6095913CCAF5B55FB3B698F70D2D7BD6F0AD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m54A1B24AFB1F4D0FC8FD5716D7FE548D0889523F_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m0C82DF6CBF9B1393CF77F78951EF55E972594EE7_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mC6D3C8A7706E07DEB15F18070D3DE957703F334C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mD4A0FF023252BE72C67146C73BCD440F3A963BE4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		int32_t L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		uint64_t L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE3E016711217BA41741526567E1A4EF3C3F0BD64(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m7082A5BC616C87E0338E86895AB5A891E5ADFB14_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mD384B691775EB43BD293995F87B72DE195B5A304(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF8D766493619C99FF0598ED9106B99D68F4403CE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB3E0584E5CCB62AC4F42664FF465C46D77D36857(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		uint64_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		int32_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m2F4E47E9EB36DC1FC357386612479DD4161C2ACA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint64_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		uint64_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mB342AB1911603B5537FDC45083C0CC93DB7C87DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m761D5BF9BC112C273EFE30FBFE49ABAED8D3E016_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		int32_t* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(int32_t));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		int32_t* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mEB1F3632A9B03E1298DAF055B45A0E9FC9210A42_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		uint64_t L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___2_it;
		uint64_t L_25 = L_24->___key;
		bool L_26;
		L_26 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		int32_t* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		int32_t L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(int32_t*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mC50969BC07CC83C75E315AC941D64E82E3BE7333_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t* L_10 = ___2_item;
		int32_t L_11 = (*(int32_t*)L_10);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m96C33A42D6EB53D37F53255A2B2859DF99FBF9E9_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m36C6680627CA47EA32E80AD49DE395681C23F938_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m90DE2213345741059E818432CC334A363F447187_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m496648C2CE11B4C18C8516AC515F16B0FFB638F9_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m5C4DFB0EC72855C4BC8D2E34F65B7EC35110733B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m991BE37AF523008FD144AE341C23CA87A63D835B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		uint64_t L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m7F666C8F3C619ECFAADC73E6B3B025970273EBCA(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m0A2CE040A44EB65318CBF33C61D6D3FB637B2A00_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m2F659B6676B9FC559C85FE51A1C1B770DB284F51(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mC408F045C28A4984D27A1BF967A117F83FFD11C0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m5577C19D6C0DC4974E2C4ABEC6B344532003A83B(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		uint64_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD41D1447F5366E7D1F255C290EA99805AD6286DD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint64_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		uint64_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m62DE6F3B682E9525DEF2037FC69C31557404677D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m0136C4D1D299836BFE917C5EC64E2C5A46A40C93_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m104FA84C8A870F9B764C5AEB8FD4FC6F83DA388E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		uint64_t L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___2_it;
		uint64_t L_25 = L_24->___key;
		bool L_26;
		L_26 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m10990DF802A43795FD7003177DCEE8F8BBD8573E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_10 = ___2_item;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_11 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)L_10);
		UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m07344D6C16DE878FE07C5AA2E760FDE41F977D5F_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mAFE7B6EE5EC9D26B5DC6B34E9A16ED3C1C952874_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m0C84486403546B2ACF81457A79E08C222AB1BA42_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mC0997908D4E88D3A05D29AF775E4014FFD020B59_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m70A5124DEDCA3AF09DCBFFE25EB0F4ABB6EF86A2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mB17F9D3FF2A247BF16BFDC72E3DD81069633AA08_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint64_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		uint64_t L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		uint64_t L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m95DFBA1F47DB93C0EFFAD9D02DC937AE5A24A76D(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m047B77555AE6827AF669391B3DC2178AC5642933_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m9CB1A25372121940326DAC3F84C5A6824286A5BC(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint64_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint64_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mBA1C6FE4204916DBA24B80D68EF0C606DD0BF29D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint64_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m46880A0EFDF4ED537C59F10305595122C0D496DA(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		uint64_t L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		uint64_t L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m7D980F2236420F5DB654E315C859803AC03DD9D2_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint64_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		uint64_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mDDAC4320F71ADB4B8D45D4C908C1F243586352F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint64_t* L_4 = (uint64_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m49EB9E2A61FA476F4C277489FAF93CB3D4B1BC83_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t ___1_key, uint64_t* ___2_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___3_it;
		uint64_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		uint64_t* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(uint64_t));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		uint64_t* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mB82A18FF59F11A0B8C576E2DD4ECEC0CE4742C0B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint64_t* ___1_item, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	uint64_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		uint64_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(uint64_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		uint64_t L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_24 = ___2_it;
		uint64_t L_25 = L_24->___key;
		bool L_26;
		L_26 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		uint64_t* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		uint64_t L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(uint64_t*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m702F35110FC690ACAD8D2484D77BCA6B3F35009B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* ___1_it, uint64_t* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t73BFD584DAC759A166CFDD8085E34DBC60AE09AF* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		uint64_t* L_10 = ___2_item;
		uint64_t L_11 = (*(uint64_t*)L_10);
		UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mE2459A2B6935138D77FDB9582B9002F8700AEADC_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m0735BF2A69B32D38D3AD1A9B9EC95F1F17FEC820_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m71CF55252AC54DC72A57EC1CBAE0B7C22587F9E4_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mA639B425BA670F077E3DF821B91B80F67A245A74_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mACD75E1D7C20A4E9927A3C63A86F835AAA754831_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m6B56A71C832D5DCF172F938A10F4299C836340BC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		bool L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m4582C3548DA0BE3BD573511120260F7583CCF449(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m9ADFDBB1EE2C6F14AD8F19FF3B9436AD4628C410_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m7E3E9FAA33BE7D1B3737A0D1B0C0E41E1C34411E(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m12EFA2199A30049C78986E9167F8AE28DAF6E423_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m46CE22D4650E9A42E776A9B11BBE0B4C87B5ED74(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		bool L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m0F59DC00B16406D572B626979D670DE94DD4E992_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_17 = ___1_key;
		bool L_18;
		L_18 = UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m15891C4F3A6CE84AE7EBF09CA105477981F54446_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_4 = (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708 L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mD1EFA4C91F560ACD91D2504A2BC1314C3B14BBE9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___3_it;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		bool* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(bool));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = UntypedWeakReferenceId_GetHashCode_m2399550B930BBD1AA879E464AF9F2FB7D90BCE6A((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		bool* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mA1C6EAAE5D8534C85CA4DA64688658C6099CB359_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, bool* ___1_item, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		bool* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(bool));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_24 = ___2_it;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_25 = L_24->___key;
		bool L_26;
		L_26 = UntypedWeakReferenceId_Equals_m8822E534760FE8F7765B70862B2ADD4987C1EC21((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		bool* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		bool L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(bool*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4CC512F5AC710FACD9DB33D8823B6283B96A7CAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* ___1_it, bool* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t2F3FF0B2F940EB8CFD9F8CD8842FA8437A4A7708* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		bool* L_10 = ___2_item;
		bool L_11 = (*(bool*)L_10);
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m82AF0F877910C1FD93F6270BFE50D43664A94D32_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m977D7AF65AD10BEF391959613C0A7D37FC39CA00_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m0387669D654BE4625B4EAEF656B8CA8EC37DA24A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mDCE300C0D59DD8AF6B64906B8909053E6D6B6D73_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = L_1;
	const Il2CppFullySharedGenericStruct L_35 = L_1;
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_2;
		L_2 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		il2cpp_codegen_memcpy(L_10, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_8, L_9, L_10);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		il2cpp_codegen_memcpy(L_14, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_12, L_13, L_14);
		int32_t L_16;
		L_16 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_15, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___bucketCapacityMask;
		V_3 = ((int32_t)(L_16&L_18));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___buckets;
		V_4 = (int32_t*)L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		int32_t L_24;
		L_24 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4)))), L_23, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___next;
		V_8 = (int32_t*)L_27;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		V_9 = L_30;
		int32_t* L_31 = V_8;
		int32_t L_32 = V_2;
		int32_t L_33 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)L_33;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		il2cpp_codegen_memcpy(L_35, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_36;
		L_36 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_34, L_35, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t L_39 = V_2;
		int32_t L_40 = ___3_threadIndex;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_38, L_39, L_40, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_41 = V_4;
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		int32_t L_44 = V_9;
		int32_t L_45;
		L_45 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 4)))), L_43, L_44, NULL);
		int32_t L_46 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_48 = V_6;
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_4, L_5, L_6);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_8, L_9, L_10);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_11, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0049:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_77 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_72 = L_2;
	const Il2CppFullySharedGenericStruct L_76 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_3;
		L_3 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), NULL, L_1, L_2, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)))(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		il2cpp_codegen_memcpy(L_72, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), NULL, (void*)L_70, L_71, L_72);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		il2cpp_codegen_memcpy(L_76, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_74, L_75, L_76);
		int32_t L_78;
		L_78 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_77, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		V_5 = ((int32_t)(L_78&L_80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___buckets;
		V_6 = (int32_t*)L_82;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_83 = ___0_data;
		NullCheck(L_83);
		uint8_t* L_84 = L_83->___next;
		V_4 = (int32_t*)L_84;
		int32_t* L_85 = V_4;
		int32_t L_86 = V_3;
		int32_t* L_87 = V_6;
		int32_t L_88 = V_5;
		int32_t L_89 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 4))))) = (int32_t)L_89;
		int32_t* L_90 = V_6;
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_91), 4))))) = (int32_t)L_92;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_93 = V_16;
		return L_93;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_18 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_9, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_8;
		L_8 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_7, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___bucketCapacityMask;
		V_3 = ((int32_t)(L_8&L_10));
		V_4 = (-1);
		int32_t* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_5 = L_13;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___keys;
		int32_t L_16 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_15, L_16, (Il2CppFullySharedGenericStruct*)L_17);
		il2cpp_codegen_memcpy(V_9, L_17, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_18, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_20;
		L_20 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_19, (void*)(Il2CppFullySharedGenericStruct*)V_9, L_18);
		V_8 = L_20;
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_4;
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)0))? 1 : 0);
		bool L_24 = V_11;
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_25 = V_1;
		int32_t L_26 = V_3;
		int32_t* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))) = (int32_t)L_29;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_30 = V_2;
		int32_t L_31 = V_4;
		int32_t* L_32 = V_2;
		int32_t L_33 = V_5;
		int32_t L_34 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_34;
	}

IL_00a8:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		V_10 = L_37;
		int32_t* L_38 = V_2;
		int32_t L_39 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4))))) = (int32_t)L_42;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_43 = ___0_data;
		int32_t* L_44;
		L_44 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_43, NULL);
		int32_t L_45 = V_5;
		*((int32_t*)L_44) = (int32_t)L_45;
		int32_t L_46 = V_10;
		V_5 = L_46;
		bool L_47 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		int32_t L_52 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_51), 4))))));
		V_5 = L_52;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_54 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_55 = ___0_data;
		NullCheck(L_55);
		int32_t L_56 = L_55->___keyCapacity;
		G_B15_0 = ((((int32_t)L_54) < ((int32_t)L_56))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_57 = V_13;
		if (L_57)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_58 = V_0;
		V_7 = L_58;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_59 = V_7;
		return L_59;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_12 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_27 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_35 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_39 = L_12;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_46 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t L_5;
		L_5 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_4, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)))));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		il2cpp_codegen_memcpy(L_12, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		il2cpp_codegen_memcpy(L_27, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_28 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		il2cpp_codegen_memcpy(L_35, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_35, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		il2cpp_codegen_memcpy(L_39, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_40 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_39, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		il2cpp_codegen_memcpy(L_46, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_46, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_instance_field_data(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_7);
		int32_t L_8 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_8);
		Il2CppFullySharedGenericStruct* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_12, (void*)(Il2CppFullySharedGenericStruct*)___1_key);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___bucketCapacityMask;
		V_1 = ((int32_t)(L_13&L_15));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_16 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_17 = ___3_it;
		int32_t* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		int32_t L_21 = L_20;
		V_3 = L_21;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_21);
		int32_t L_22 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_22);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		Il2CppFullySharedGenericStruct* L_24 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_25 = ___3_it;
		bool L_26;
		L_26 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_26;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_27 = V_4;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	void* L_26 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_25 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_39 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1));
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), (-1));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), (-1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (void*)L_21, L_22, (Il2CppFullySharedGenericStruct*)L_23);
		il2cpp_codegen_memcpy(V_6, L_23, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_24 = ___2_it;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),0)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_27;
		L_27 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), L_26, (void*)(Il2CppFullySharedGenericStruct*)V_6, L_25);
		V_5 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_29 = ___2_it;
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		il2cpp_codegen_write_instance_field_data<int32_t>(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),1), L_32);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_33 = ___2_it;
		int32_t L_34 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2), L_34);
		Il2CppFullySharedGenericStruct* L_35 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = ___0_data;
		NullCheck(L_36);
		uint8_t* L_37 = L_36->___values;
		int32_t L_38 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (void*)L_37, L_38, (Il2CppFullySharedGenericStruct*)L_39);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_35, L_39, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_35, (void*)L_39);
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_40 = V_3;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 11),2));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		Il2CppFullySharedGenericStruct* L_10 = ___2_item;
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), NULL, (void*)L_8, L_9, L_11);
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mD43D514B46250A8A918C363C0ABBE55F5FD86E05_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m06112A8C3C322DED4C227F12751FA67C00162280_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_15;
		L_15 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_3 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_4 = (int32_t*)L_19;
		int32_t* L_20 = V_4;
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4)))), L_22, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		NullCheck(L_25);
		uint8_t* L_26 = L_25->___next;
		V_8 = (int32_t*)L_26;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_27 = V_4;
		int32_t L_28 = V_3;
		int32_t L_29 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_28), 4))))));
		V_9 = L_29;
		int32_t* L_30 = V_8;
		int32_t L_31 = V_2;
		int32_t L_32 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_34 = ___1_key;
		bool L_35;
		L_35 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_33, L_34, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mFCEFA93CFC7A6B56000393ACBB8F6829EBFF59CF(L_37, L_38, L_39, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		int32_t L_42 = V_2;
		int32_t L_43 = V_9;
		int32_t L_44;
		L_44 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4)))), L_42, L_43, NULL);
		int32_t L_45 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_44) == ((int32_t)L_45))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_47 = V_6;
		return L_47;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m48DE3A5273F0D922F5D6F8586591FCD5E70E4882_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m5CB963FEABE6BF0DC8967F70095F65E86ADE3D92(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_11;
		L_11 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0049:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		V_3 = L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_0;
		int32_t L_23 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))) = (int32_t)L_23;
		int32_t* L_24 = V_2;
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4)))), L_26, L_27, NULL);
		int32_t L_29 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m569D27B59979D96094528CBBA6CE76C01F95744C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_mC77F5AB66A3F1112F9581CC2257BD11CFA332338(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_77;
		L_77 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		NullCheck(L_78);
		int32_t L_79 = L_78->___bucketCapacityMask;
		V_5 = ((int32_t)(L_77&L_79));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		uint8_t* L_81 = L_80->___buckets;
		V_6 = (int32_t*)L_81;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___next;
		V_4 = (int32_t*)L_83;
		int32_t* L_84 = V_4;
		int32_t L_85 = V_3;
		int32_t* L_86 = V_6;
		int32_t L_87 = V_5;
		int32_t L_88 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_87), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)L_88;
		int32_t* L_89 = V_6;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))) = (int32_t)L_91;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_92 = V_16;
		return L_92;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mDCACDB0FFAA08F6DEA8E2D66B4D7680011684E36_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		int32_t L_7;
		L_7 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bucketCapacityMask;
		V_3 = ((int32_t)(L_7&L_9));
		V_4 = (-1);
		int32_t* L_10 = V_1;
		int32_t L_11 = V_3;
		int32_t L_12 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 4))))));
		V_5 = L_12;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_14, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_16;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_17 = ___1_key;
		bool L_18;
		L_18 = EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1((&V_9), L_17, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_18;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_4;
		V_11 = (bool)((((int32_t)L_21) < ((int32_t)0))? 1 : 0);
		bool L_22 = V_11;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), 4))))) = (int32_t)L_27;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		int32_t* L_30 = V_2;
		int32_t L_31 = V_5;
		int32_t L_32 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))) = (int32_t)L_32;
	}

IL_00a8:
	{
		int32_t* L_33 = V_2;
		int32_t L_34 = V_5;
		int32_t L_35 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))));
		V_10 = L_35;
		int32_t* L_36 = V_2;
		int32_t L_37 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t* L_39;
		L_39 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_38, NULL);
		int32_t L_40 = (*(L_39));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))) = (int32_t)L_40;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = V_5;
		*((int32_t*)L_42) = (int32_t)L_43;
		int32_t L_44 = V_10;
		V_5 = L_44;
		bool L_45 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_47 = V_5;
		V_4 = L_47;
		int32_t* L_48 = V_2;
		int32_t L_49 = V_5;
		int32_t L_50 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_49), 4))))));
		V_5 = L_50;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_52 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_53 = ___0_data;
		NullCheck(L_53);
		int32_t L_54 = L_53->___keyCapacity;
		G_B15_0 = ((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_55 = V_13;
		if (L_55)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_56 = V_0;
		V_7 = L_56;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_57 = V_7;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m0A460A55C5E8F908CC0A05FC0DC2074F37A71C73_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D* L_4 = (EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))));
		V_3 = L_10;
		int32_t L_11 = V_3;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_12 = ___1_it;
		int32_t L_13 = L_12.___EntryIndex;
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), 4))))) = (int32_t)L_19;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_20 = V_1;
		int32_t L_21 = V_3;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 4))))));
		V_3 = L_22;
	}

IL_005f:
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t L_26 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))));
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_27 = ___1_it;
		int32_t L_28 = L_27.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_26) == ((int32_t)L_28))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_30 = V_3;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_32 = V_1;
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_35 = ___1_it;
		int32_t L_36 = L_35.___EntryIndex;
		int32_t L_37 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), 4))))) = (int32_t)L_37;
	}

IL_009e:
	{
		int32_t* L_38 = V_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_39 = ___1_it;
		int32_t L_40 = L_39.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = (*(L_42));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)L_43;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318 L_46 = ___1_it;
		int32_t L_47 = L_46.___EntryIndex;
		*((int32_t*)L_45) = (int32_t)L_47;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1714C98FB0D974C559C66BFD659A85C17218E3C4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___1_key, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___3_it;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		int32_t L_12;
		L_12 = EntityComponentPair_GetHashCode_m11E39F5020342C6E22D19D5300064A4D4D81ADC8((&___1_key), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_15 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_16 = ___3_it;
		int32_t* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_17, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_18), 4))))));
		int32_t L_20 = L_19;
		V_3 = L_20;
		L_16->___NextEntryIndex = L_20;
		int32_t L_21 = V_3;
		L_15->___EntryIndex = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_23 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_24 = ___3_it;
		bool L_25;
		L_25 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014(L_22, L_23, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_25;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_26 = V_4;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m0E76F7007AEA80F0722963E9C3719859E7644014_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___1_item, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_24 = ___2_it;
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_25 = L_24->___key;
		bool L_26;
		L_26 = EntityComponentPair_Equals_mA1EEA429040690BDE4E8322F3BDC7D6C37BAEAE1((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mAE24DB0215C2EFE8FDD636D06C9F4B1F62F179FD_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* ___1_it, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t6A32E0DC29F77FC487E58FF48040AB724C8F5318* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F* L_10 = ___2_item;
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_11 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)L_10);
		UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m4AA4BA9E862D67350D871E5C0E3CF7227C69081D_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m3C75ECA674BC09CF86CED11D364566300E3D719A_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m2C3CFF1935D8C2BC6270722BC37178F1D0292440_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mE19FA445B7211CFB297AACF60DE3B5222CDA6290_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mD207B16B4B48F4E1F2A055D8AB56525DA3897CE4_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m87EC433A3C97B6C80AAC72E53CAC192701CDFDC9_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_15(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_16;
		L_16 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_15), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___bucketCapacityMask;
		V_3 = ((int32_t)(L_16&L_18));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___buckets;
		V_4 = (int32_t*)L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		int32_t L_24;
		L_24 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4)))), L_23, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___next;
		V_8 = (int32_t*)L_27;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		V_9 = L_30;
		int32_t* L_31 = V_8;
		int32_t L_32 = V_2;
		int32_t L_33 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)L_33;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_34, L_35, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t L_39 = V_2;
		int32_t L_40 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m9E8C7D6A61DDA169A38F57D4B75AC8B3C62F38A3(L_38, L_39, L_40, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_41 = V_4;
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		int32_t L_44 = V_9;
		int32_t L_45;
		L_45 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 4)))), L_43, L_44, NULL);
		int32_t L_46 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_48 = V_6;
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m17E2F0E7EF708A45A7F7AF07F6D193D6288BF1A6_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m3984E6A6697F8B7FD6E23A4B0CAB0DCE915D8459(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0049:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m421366715A6C94576C782D6F2026650C242FC77B_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m8172112F6FE3C6916DC996A4DB0BF4DA5FF112E9(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_77(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_78;
		L_78 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_77), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		V_5 = ((int32_t)(L_78&L_80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___buckets;
		V_6 = (int32_t*)L_82;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_83 = ___0_data;
		NullCheck(L_83);
		uint8_t* L_84 = L_83->___next;
		V_4 = (int32_t*)L_84;
		int32_t* L_85 = V_4;
		int32_t L_86 = V_3;
		int32_t* L_87 = V_6;
		int32_t L_88 = V_5;
		int32_t L_89 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 4))))) = (int32_t)L_89;
		int32_t* L_90 = V_6;
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_91), 4))))) = (int32_t)L_92;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_93 = V_16;
		return L_93;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m1D9BAAA2E8E2546666E964B6A2C9E667772343A7_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_7(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_8;
		L_8 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_7), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___bucketCapacityMask;
		V_3 = ((int32_t)(L_8&L_10));
		V_4 = (-1);
		int32_t* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_5 = L_13;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___keys;
		int32_t L_16 = V_5;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_15, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_17;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_18 = ___1_key;
		bool L_19;
		L_19 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_9), L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_4;
		V_11 = (bool)((((int32_t)L_22) < ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t* L_26 = V_2;
		int32_t L_27 = V_5;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))) = (int32_t)L_28;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_29 = V_2;
		int32_t L_30 = V_4;
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		int32_t L_33 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_33;
	}

IL_00a8:
	{
		int32_t* L_34 = V_2;
		int32_t L_35 = V_5;
		int32_t L_36 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_35), 4))))));
		V_10 = L_36;
		int32_t* L_37 = V_2;
		int32_t L_38 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = (*(L_40));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = V_5;
		*((int32_t*)L_43) = (int32_t)L_44;
		int32_t L_45 = V_10;
		V_5 = L_45;
		bool L_46 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_48 = V_5;
		V_4 = L_48;
		int32_t* L_49 = V_2;
		int32_t L_50 = V_5;
		int32_t L_51 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 4))))));
		V_5 = L_51;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_53 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		NullCheck(L_54);
		int32_t L_55 = L_54->___keyCapacity;
		G_B15_0 = ((((int32_t)L_53) < ((int32_t)L_55))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_56 = V_13;
		if (L_56)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_57 = V_0;
		V_7 = L_57;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_58 = V_7;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8ACBC5305CE72C024A0DEFBCE27386ABD8A697F0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* L_4 = (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)(&(&___1_it)->___key);
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_5(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		int32_t L_6;
		L_6 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_5), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_2 = ((int32_t)(L_6&L_8));
		int32_t* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))) = (int32_t)L_20;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t L_23 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))));
		V_3 = L_23;
	}

IL_005f:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_25 = V_1;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_28 = ___1_it;
		int32_t L_29 = L_28.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_31 = V_3;
		V_6 = (bool)((((int32_t)L_31) < ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_33 = V_1;
		int32_t L_34 = V_3;
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		int32_t L_38 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
	}

IL_009e:
	{
		int32_t* L_39 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_40 = ___1_it;
		int32_t L_41 = L_40.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = (*(L_43));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4))))) = (int32_t)L_44;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_47 = ___1_it;
		int32_t L_48 = L_47.___EntryIndex;
		*((int32_t*)L_46) = (int32_t)L_48;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6112F1DCFCC5FDE7F1D571ADA374C788C54CF489_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___3_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_12(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_13;
		L_13 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_12), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___bucketCapacityMask;
		V_1 = ((int32_t)(L_13&L_15));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_16 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_17 = ___3_it;
		int32_t* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		int32_t L_21 = L_20;
		V_3 = L_21;
		L_17->___NextEntryIndex = L_21;
		int32_t L_22 = V_3;
		L_16->___EntryIndex = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_24 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_25 = ___3_it;
		bool L_26;
		L_26 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0(L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_26;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_27 = V_4;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m5CB93761C795A2B5DE9F2DBEB0FF0BB071252BD0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_24 = ___2_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_25 = L_24->___key;
		bool L_26;
		L_26 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4862991FC465C30D83A4810008EF8EE7287C6A6C_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___1_it, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78* L_10 = ___2_item;
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_11 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)L_10);
		UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m0DFDAB7D5CB472DF01919ED2C08370EA18601032_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m2BE6D33C8E352065F18E32154E9C3100DAD48E77_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mF9759F0970CE44AF25C67E79C65A6614B581CF36_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m46CF29948F0ECEA28D7C8D7874D489E554553D0A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_mC83C8EF71F47A7E6DB3DC52B2C968021FB0AC151_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_3, 1)), 4))), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_5, (uint8_t)((int32_t)255), ((int64_t)((int32_t)il2cpp_codegen_multiply(L_7, 4))), NULL);
		int32_t L_8;
		L_8 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0057;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)))), 4))))) = (int32_t)(-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		L_16->___allocatedIndexLength = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0008:
	{
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_021e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		int32_t* L_11;
		L_11 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_10, NULL);
		int32_t L_12 = ___1_threadIndex;
		int32_t L_13;
		L_13 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16)))), 4)))), ((int32_t)-2), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0123;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t* L_20 = (int32_t*)(&L_19->___allocatedIndexLength);
		int32_t L_21;
		L_21 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_20, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_21, ((int32_t)16)));
		int32_t L_22 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		int32_t L_24 = L_23->___keyCapacity;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1))))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		int32_t L_27 = L_26->___keyCapacity;
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = math_min_m02D43DF516544C279AF660EA4731449C82991849_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_27, L_28)), NULL);
		V_8 = L_29;
		V_9 = 1;
		goto IL_00b3;
	}

IL_009b:
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		int32_t L_32 = V_9;
		int32_t L_33 = V_0;
		int32_t L_34 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_31, L_32))), 4))))) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_33, L_34)), 1));
		int32_t L_35 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b3:
	{
		int32_t L_36 = V_9;
		int32_t L_37 = V_8;
		V_10 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_10;
		if (L_38)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_39 = V_1;
		int32_t L_40 = V_0;
		int32_t L_41 = V_8;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1))), 4))))) = (int32_t)(-1);
		int32_t* L_42 = V_1;
		int32_t L_43 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_43), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		int32_t L_47 = V_0;
		int32_t L_48;
		L_48 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16)))), 4)))), ((int32_t)il2cpp_codegen_add(L_47, 1)), NULL);
		int32_t L_49 = V_0;
		V_11 = L_49;
		goto IL_026c;
	}

IL_00f3:
	{
		int32_t L_50 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_51 = ___0_data;
		NullCheck(L_51);
		int32_t L_52 = L_51->___keyCapacity;
		V_12 = (bool)((((int32_t)L_50) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1))))? 1 : 0);
		bool L_53 = V_12;
		if (!L_53)
		{
			goto IL_0122;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		int32_t L_57;
		L_57 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_58 = V_0;
		V_11 = L_58;
		goto IL_026c;
	}

IL_0122:
	{
	}

IL_0123:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		int32_t* L_60;
		L_60 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_59, NULL);
		int32_t L_61 = ___1_threadIndex;
		int32_t L_62;
		L_62 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_61, ((int32_t)16)))), 4)))), (-1), NULL);
		int32_t L_63;
		L_63 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_4 = L_63;
		V_5 = (bool)1;
		goto IL_0212;
	}

IL_0147:
	{
		V_5 = (bool)0;
		int32_t L_64 = ___1_threadIndex;
		int32_t L_65 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_64, 1))%L_65));
		goto IL_0200;
	}

IL_0158:
	{
	}

IL_0159:
	{
	}

IL_015a:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_66 = ___0_data;
		int32_t* L_67;
		L_67 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_66, NULL);
		int32_t L_68 = V_13;
		int32_t L_69;
		L_69 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_68, ((int32_t)16)))), 4)))));
		V_0 = L_69;
		int32_t L_70 = V_0;
		V_14 = (bool)((((int32_t)L_70) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_71 = V_14;
		if (L_71)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_72 = V_0;
		V_15 = (bool)((((int32_t)L_72) < ((int32_t)0))? 1 : 0);
		bool L_73 = V_15;
		if (!L_73)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01ad;
	}

IL_0189:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_74 = ___0_data;
		int32_t* L_75;
		L_75 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_74, NULL);
		int32_t L_76 = V_13;
		int32_t L_77 = V_0;
		int32_t L_78;
		L_78 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)16)))), 4)))), ((int32_t)-3), L_77, NULL);
		int32_t L_79 = V_0;
		V_16 = (bool)((((int32_t)((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_80 = V_16;
		if (L_80)
		{
			goto IL_0159;
		}
	}

IL_01ad:
	{
		int32_t L_81 = V_0;
		V_17 = (bool)((((int32_t)L_81) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_82 = V_17;
		if (!L_82)
		{
			goto IL_01bf;
		}
	}
	{
		V_5 = (bool)1;
		goto IL_01f6;
	}

IL_01bf:
	{
		int32_t L_83 = V_0;
		V_18 = (bool)((((int32_t)((((int32_t)L_83) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_01f6;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_85 = ___0_data;
		int32_t* L_86;
		L_86 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_85, NULL);
		int32_t L_87 = V_13;
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		int32_t L_90 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 4))))));
		int32_t L_91;
		L_91 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)16)))), 4)))), L_90, NULL);
		int32_t* L_92 = V_1;
		int32_t L_93 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_93), 4))))) = (int32_t)(-1);
		int32_t L_94 = V_0;
		V_11 = L_94;
		goto IL_026c;
	}

IL_01f6:
	{
		int32_t L_95 = V_13;
		int32_t L_96 = V_4;
		V_13 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_95, 1))%L_96));
	}

IL_0200:
	{
		int32_t L_97 = V_13;
		int32_t L_98 = ___1_threadIndex;
		V_19 = (bool)((((int32_t)((((int32_t)L_97) == ((int32_t)L_98))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_99 = V_19;
		if (L_99)
		{
			goto IL_0158;
		}
	}
	{
	}

IL_0212:
	{
		bool L_100 = V_5;
		V_20 = L_100;
		bool L_101 = V_20;
		if (L_101)
		{
			goto IL_0147;
		}
	}
	{
	}

IL_021e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		int32_t L_105 = V_0;
		int32_t L_106;
		L_106 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16)))), 4)))), ((int32_t)-3), L_105, NULL);
		int32_t L_107 = V_0;
		V_21 = (bool)((((int32_t)((((int32_t)L_106) == ((int32_t)L_107))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_21;
		if (L_108)
		{
			goto IL_0008;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		int32_t* L_112 = V_1;
		int32_t L_113 = V_0;
		int32_t L_114 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_113), 4))))));
		int32_t L_115;
		L_115 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16)))), 4)))), L_114, NULL);
		int32_t* L_116 = V_1;
		int32_t L_117 = V_0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), 4))))) = (int32_t)(-1);
		int32_t L_118 = V_0;
		V_11 = L_118;
		goto IL_026c;
	}

IL_026c:
	{
		int32_t L_119 = V_11;
		return L_119;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_000a:
	{
	}

IL_000b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		int32_t L_5;
		L_5 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16)))), 4)))));
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)-3)))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		int32_t L_10 = V_1;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4))))) = (int32_t)L_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		int32_t* L_12;
		L_12 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_11, NULL);
		int32_t L_13 = ___2_threadIndex;
		int32_t L_14 = ___1_idx;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)16)))), 4)))), L_14, L_15, NULL);
		int32_t L_17 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m7B6B56701B3E0B236C9376BA71FBD1EEC441F945_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_5 = L_2;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_001b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		int32_t L_5 = ___3_threadIndex;
		int32_t L_6;
		L_6 = UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_2 = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___keys;
		int32_t L_9 = V_2;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_10 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		uint8_t* L_12 = L_11->___values;
		int32_t L_13 = V_2;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_14 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_12, L_13, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_15(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_16;
		L_16 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_15), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___bucketCapacityMask;
		V_3 = ((int32_t)(L_16&L_18));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___buckets;
		V_4 = (int32_t*)L_20;
		int32_t* L_21 = V_4;
		int32_t L_22 = V_3;
		int32_t L_23 = V_2;
		int32_t L_24;
		L_24 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4)))), L_23, (-1), NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00d5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___next;
		V_8 = (int32_t*)L_27;
		V_9 = (-1);
	}

IL_0082:
	{
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		V_9 = L_30;
		int32_t* L_31 = V_8;
		int32_t L_32 = V_2;
		int32_t L_33 = V_9;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)L_33;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_34, L_35, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00b7;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		int32_t L_39 = V_2;
		int32_t L_40 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8392A915E723B72CC488BF8A78B90B0AFD7DA9F1(L_38, L_39, L_40, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_6 = (bool)0;
		goto IL_00da;
	}

IL_00b7:
	{
		int32_t* L_41 = V_4;
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		int32_t L_44 = V_9;
		int32_t L_45;
		L_45 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), 4)))), L_43, L_44, NULL);
		int32_t L_46 = V_9;
		V_11 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_0082;
		}
	}
	{
	}

IL_00d5:
	{
		V_6 = (bool)1;
		goto IL_00da;
	}

IL_00da:
	{
		bool L_48 = V_6;
		return L_48;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m0E9A74141EE1209F71ACA0B943D18E4735F62E14_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mB21896C8C9574331C8EFCAEDCBD382F0CD0C35EE(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_8, L_9, L_10, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_11(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_12;
		L_12 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_11), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = L_13->___bucketCapacityMask;
		V_1 = ((int32_t)(L_12&L_14));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		uint8_t* L_16 = L_15->___buckets;
		V_2 = (int32_t*)L_16;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___next;
		V_4 = (int32_t*)L_18;
	}

IL_0049:
	{
		int32_t* L_19 = V_2;
		int32_t L_20 = V_1;
		int32_t L_21 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 4))))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		int32_t L_24 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_23), 4))))) = (int32_t)L_24;
		int32_t* L_25 = V_2;
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_3;
		int32_t L_29;
		L_29 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4)))), L_27, L_28, NULL);
		int32_t L_30 = V_3;
		V_5 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0049;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7F0E80AB09716EB21900FEC164B48B31171679D1_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = (*(L_10));
		G_B7_0 = ((((int32_t)L_11) < ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B7_0 = 0;
	}

IL_0038:
	{
		V_7 = (bool)G_B7_0;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_8 = L_13;
		V_9 = 1;
		goto IL_00b7;
	}

IL_004e:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_9;
		int32_t L_17 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))), 4))))));
		V_10 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		int32_t* L_20;
		L_20 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_19, NULL);
		int32_t L_21 = V_9;
		int32_t L_22 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)16)))), 4))))));
		V_3 = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		NullCheck(L_23);
		uint8_t* L_24 = L_23->___next;
		V_4 = (int32_t*)L_24;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		int32_t* L_26;
		L_26 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_25, NULL);
		int32_t L_27 = V_9;
		int32_t* L_28 = V_4;
		int32_t L_29 = V_3;
		int32_t L_30 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_29), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)16)))), 4))))) = (int32_t)L_30;
		int32_t* L_31 = V_4;
		int32_t L_32 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))) = (int32_t)(-1);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_33 = ___0_data;
		int32_t* L_34;
		L_34 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_33, NULL);
		int32_t L_35 = V_3;
		*((int32_t*)L_34) = (int32_t)L_35;
		goto IL_00c3;
	}

IL_00b0:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b7:
	{
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_38))? 1 : 0);
		bool L_39 = V_11;
		if (L_39)
		{
			goto IL_004e;
		}
	}

IL_00c3:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		int32_t* L_41;
		L_41 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_40, NULL);
		int32_t L_42 = (*(L_41));
		V_12 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_00f4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		int32_t L_46;
		L_46 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_45, NULL);
		V_13 = L_46;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_47 = ___0_data;
		int32_t L_48 = V_13;
		int32_t L_49 = V_13;
		int32_t L_50;
		L_50 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_49, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_51 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_mF43DD5CEDDEF5A8B4F7346EA7F2F490060EA8744(L_47, L_48, L_50, L_51, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
	}

IL_00f4:
	{
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = (*(L_53));
		V_3 = L_54;
		int32_t L_55 = V_3;
		V_14 = (bool)((((int32_t)((((int32_t)L_55) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0121;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_57 = ___0_data;
		int32_t* L_58;
		L_58 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_57, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_59 = ___0_data;
		NullCheck(L_59);
		uint8_t* L_60 = L_59->___next;
		int32_t L_61 = V_3;
		int32_t L_62 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_61), 4)))));
		*((int32_t*)L_58) = (int32_t)L_62;
		goto IL_0135;
	}

IL_0121:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t* L_64 = (int32_t*)(&L_63->___allocatedIndexLength);
		int32_t* L_65 = L_64;
		int32_t L_66 = *((int32_t*)L_65);
		V_15 = L_66;
		int32_t L_67 = V_15;
		*((int32_t*)L_65) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_15;
		V_3 = L_68;
	}

IL_0135:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_69 = ___0_data;
		NullCheck(L_69);
		uint8_t* L_70 = L_69->___keys;
		int32_t L_71 = V_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_72 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_inline((void*)L_70, L_71, L_72, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_73 = ___0_data;
		NullCheck(L_73);
		uint8_t* L_74 = L_73->___values;
		int32_t L_75 = V_3;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_76 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_74, L_75, L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_77(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_78;
		L_78 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_77), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		V_5 = ((int32_t)(L_78&L_80));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___buckets;
		V_6 = (int32_t*)L_82;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_83 = ___0_data;
		NullCheck(L_83);
		uint8_t* L_84 = L_83->___next;
		V_4 = (int32_t*)L_84;
		int32_t* L_85 = V_4;
		int32_t L_86 = V_3;
		int32_t* L_87 = V_6;
		int32_t L_88 = V_5;
		int32_t L_89 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_86), 4))))) = (int32_t)L_89;
		int32_t* L_90 = V_6;
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_91), 4))))) = (int32_t)L_92;
		V_16 = (bool)1;
		goto IL_019c;
	}

IL_0197:
	{
		V_16 = (bool)0;
		goto IL_019c;
	}

IL_019c:
	{
		bool L_93 = V_16;
		return L_93;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mEE987B0D967786B5A28CD1ADCA60E581F68201D0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B15_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		V_6 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_7 = 0;
		goto IL_010f;
	}

IL_0019:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___buckets;
		V_1 = (int32_t*)L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		NullCheck(L_5);
		uint8_t* L_6 = L_5->___next;
		V_2 = (int32_t*)L_6;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_7(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_8;
		L_8 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_7), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___bucketCapacityMask;
		V_3 = ((int32_t)(L_8&L_10));
		V_4 = (-1);
		int32_t* L_11 = V_1;
		int32_t L_12 = V_3;
		int32_t L_13 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))));
		V_5 = L_13;
		goto IL_00ef;
	}

IL_004f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___keys;
		int32_t L_16 = V_5;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_17;
		L_17 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_15, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_9 = L_17;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_18 = ___1_key;
		bool L_19;
		L_19 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_9), L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_8 = L_19;
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_4;
		V_11 = (bool)((((int32_t)L_22) < ((int32_t)0))? 1 : 0);
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0096;
		}
	}
	{
		int32_t* L_24 = V_1;
		int32_t L_25 = V_3;
		int32_t* L_26 = V_2;
		int32_t L_27 = V_5;
		int32_t L_28 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 4))))) = (int32_t)L_28;
		goto IL_00a8;
	}

IL_0096:
	{
		int32_t* L_29 = V_2;
		int32_t L_30 = V_4;
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		int32_t L_33 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))) = (int32_t)L_33;
	}

IL_00a8:
	{
		int32_t* L_34 = V_2;
		int32_t L_35 = V_5;
		int32_t L_36 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_35), 4))))));
		V_10 = L_36;
		int32_t* L_37 = V_2;
		int32_t L_38 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_39 = ___0_data;
		int32_t* L_40;
		L_40 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_39, NULL);
		int32_t L_41 = (*(L_40));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_38), 4))))) = (int32_t)L_41;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = V_5;
		*((int32_t*)L_43) = (int32_t)L_44;
		int32_t L_45 = V_10;
		V_5 = L_45;
		bool L_46 = ___2_isMultiHashMap;
		V_12 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_00db;
		}
	}
	{
		goto IL_010a;
	}

IL_00db:
	{
		goto IL_00ee;
	}

IL_00de:
	{
		int32_t L_48 = V_5;
		V_4 = L_48;
		int32_t* L_49 = V_2;
		int32_t L_50 = V_5;
		int32_t L_51 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 4))))));
		V_5 = L_51;
	}

IL_00ee:
	{
	}

IL_00ef:
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) < ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_53 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		NullCheck(L_54);
		int32_t L_55 = L_54->___keyCapacity;
		G_B15_0 = ((((int32_t)L_53) < ((int32_t)L_55))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B15_0 = 0;
	}

IL_0101:
	{
		V_13 = (bool)G_B15_0;
		bool L_56 = V_13;
		if (L_56)
		{
			goto IL_004f;
		}
	}

IL_010a:
	{
		int32_t L_57 = V_0;
		V_7 = L_57;
		goto IL_010f;
	}

IL_010f:
	{
		int32_t L_58 = V_7;
		return L_58;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mCD2EC249D2087A12B6B603A9A21EC7E82C8A2BA0_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 ___1_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD* L_4 = (EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)(&(&___1_it)->___key);
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_5(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		int32_t L_6;
		L_6 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_5), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_2 = ((int32_t)(L_6&L_8));
		int32_t* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), 4))))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_16 = V_0;
		int32_t L_17 = V_2;
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_17), 4))))) = (int32_t)L_20;
		goto IL_009e;
	}

IL_0052:
	{
		goto IL_005f;
	}

IL_0055:
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t L_23 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 4))))));
		V_3 = L_23;
	}

IL_005f:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_25 = V_1;
		int32_t L_26 = V_3;
		int32_t L_27 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_26), 4))))));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_28 = ___1_it;
		int32_t L_29 = L_28.___EntryIndex;
		G_B7_0 = ((((int32_t)((((int32_t)L_27) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B7_0 = 0;
	}

IL_0078:
	{
		V_5 = (bool)G_B7_0;
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_31 = V_3;
		V_6 = (bool)((((int32_t)L_31) < ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_008a;
		}
	}
	{
	}

IL_008a:
	{
		int32_t* L_33 = V_1;
		int32_t L_34 = V_3;
		int32_t* L_35 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_36 = ___1_it;
		int32_t L_37 = L_36.___EntryIndex;
		int32_t L_38 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_34), 4))))) = (int32_t)L_38;
	}

IL_009e:
	{
		int32_t* L_39 = V_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_40 = ___1_it;
		int32_t L_41 = L_40.___EntryIndex;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = (*(L_43));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_41), 4))))) = (int32_t)L_44;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445 L_47 = ___1_it;
		int32_t L_48 = L_47.___EntryIndex;
		*((int32_t*)L_46) = (int32_t)L_48;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m21A2EA9285486FB9A4DCD7F130A12C980BBB47DA_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___1_key, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___3_it, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___3_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_5 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_6 = ___3_it;
		int32_t L_7 = (-1);
		V_3 = L_7;
		L_6->___NextEntryIndex = L_7;
		int32_t L_8 = V_3;
		L_5->___EntryIndex = L_8;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_9 = ___2_item;
		il2cpp_codegen_initobj(L_9, sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C));
		V_4 = (bool)0;
		goto IL_0073;
	}

IL_0035:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___buckets;
		V_0 = (int32_t*)L_11;
		Il2CppFakeBox<EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD> L_12(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), (&___1_key));
		int32_t L_13;
		L_13 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_12), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___bucketCapacityMask;
		V_1 = ((int32_t)(L_13&L_15));
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_16 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_17 = ___3_it;
		int32_t* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 4))))));
		int32_t L_21 = L_20;
		V_3 = L_21;
		L_17->___NextEntryIndex = L_21;
		int32_t L_22 = V_3;
		L_16->___EntryIndex = L_22;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_24 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_25 = ___3_it;
		bool L_26;
		L_26 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D(L_23, L_24, L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		V_4 = L_26;
		goto IL_0073;
	}

IL_0073:
	{
		bool L_27 = V_4;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m20F200F60CB43991B3AD6DE6CD37DB7B918DEC1D_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___1_item, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___2_it, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_003c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___next;
		V_1 = (int32_t*)L_11;
		goto IL_006d;
	}

IL_0045:
	{
		int32_t* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 4))))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B9_0 = 1;
	}

IL_0061:
	{
		V_4 = (bool)G_B9_0;
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00c1;
	}

IL_006c:
	{
	}

IL_006d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___keys;
		int32_t L_22 = V_0;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_23;
		L_23 = UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_inline((void*)L_21, L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_6 = L_23;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_24 = ___2_it;
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_25 = L_24->___key;
		bool L_26;
		L_26 = EntityComponentPair_Equals_m3F057FDBD01F0C49FB07CED89CFDF1EC9F88F64D((&V_6), L_25, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_5 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0045;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_28 = ___2_it;
		int32_t* L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_30), 4))))));
		L_28->___NextEntryIndex = L_31;
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_32 = ___2_it;
		int32_t L_33 = V_0;
		L_32->___EntryIndex = L_33;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_34 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		NullCheck(L_35);
		uint8_t* L_36 = L_35->___values;
		int32_t L_37 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_38;
		L_38 = UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_inline((void*)L_36, L_37, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)L_34 = L_38;
		V_3 = (bool)1;
		goto IL_00c1;
	}

IL_00c1:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mCB0CBA290F72592422CF097DB9CF9D2F1B009728_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* ___1_it, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* ___2_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t612F3597FEFF8B44689656C1CEF5D57788BAB445* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_003b;
	}

IL_0024:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C* L_10 = ___2_item;
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_11 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)L_10);
		UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_inline((void*)L_8, L_9, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		V_2 = (bool)1;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mCFC53D7D76A39DFAA6C8736DA13CB1BA6947831A_gshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___0_idx;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.int32_class, &L_4);
		int32_t L_6 = ___1_keyCapacity;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.int32_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_5, L_8, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m5BA520D8A05048BAEFEDD23E4962C1FBF6D3FC04_gshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m956453DB455A93253C310181AB82E6776C366A0A_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mA64F015642DEB29F522CDD6C8CE448FC590D46EC_gshared (const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDebuggerTypeProxy_2__ctor_m987AD575BFED1AEAD92F5DABF40893738C0F47A0_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___0_target, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_0 = ___0_target;
		__this->___m_Target = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* UnsafeParallelHashMapDebuggerTypeProxy_2_get_Items_mFAF8210CCD89AD5741956F8C54BAA23928CF4408_gshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const uint32_t SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 L_15 = alloca(SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
	List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* V_0 = NULL;
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* V_6 = NULL;
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_0 = (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_0 = L_0;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* L_1 = (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*)(&__this->___m_Target);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D((int32_t)2, NULL);
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_3;
		L_3 = ((  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 (*) (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{
				NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
				return;
			}
		});
		try
		{
			{
				V_2 = 0;
				goto IL_004f_1;
			}

IL_001e_1:
			{
				List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_4 = V_0;
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_5 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = L_5.___Keys;
				V_3 = L_6;
				int32_t L_7 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (&V_3), L_7, (Il2CppFullySharedGenericStruct*)L_8);
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_9 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = L_9.___Values;
				V_4 = L_10;
				int32_t L_11 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (&V_4), L_11, (Il2CppFullySharedGenericStruct*)L_12);
				memset(L_15, 0, SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
				Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A((Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6*)L_15, il2cpp_codegen_memcpy(L_13, L_8, SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2), il2cpp_codegen_memcpy(L_14, L_12, SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				NullCheck(L_4);
				InvokerActionInvoker1< Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_4, L_15);
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_004f_1:
			{
				int32_t L_17 = V_2;
				int32_t L_18;
				L_18 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
				bool L_19 = V_5;
				if (L_19)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0071;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_20 = V_0;
		V_6 = L_20;
		goto IL_0076;
	}

IL_0076:
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_21 = V_6;
		return L_21;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_4 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mF3CA94EA25D4915222AF97C48632B1EBA94FB8CB(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2__ctor_mABCB6B1F178E675D2170202FCD14A936884666CA(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Count_mAD13774D7134EE18EC4540F522414ABD2C8B9A2A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___keyCapacity;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		int32_t L_2 = ___0_value;
		int32_t L_3 = ___0_value;
		int32_t L_4;
		L_4 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_3, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m3FAFDB6E81B286257F4C66C1994370D1BD868C26(L_1, L_2, L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Capacity_m29E8447F7F008A4D2080E8BF58B9B9E557E732CB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_m7D30760608C754177A920AB7DCECA77F6E184C77(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2_Clear_m9E8E9D232A08C22EF596F0A431031192936CCFD2(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryAdd_m646E5510058CA3885F7908048C8D9F802172C273(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2_Add_mAA499BB6D35787EDE162225B99B86549BCFE0D95(_thisAdjusted, ___0_key, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mA392F7F773727B1E021B9C789372C2EFAF4AA13B(L_0, L_1, (bool)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Remove_mC5933B3F726EC4E52B12B57DDB031C6E8B353A01(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___1_item, const RuntimeMethod* method) 
{
	NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) 
{
	MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_2;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_ContainsKey_m2C21996A3240174F0371FE6FF9900CCEC68FF6BA(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method) 
{
	MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_mEB98AFC71D8190594A9B4809C9F49782A5868415(__this, L_0, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_2 = V_0;
		V_1 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Item_mDEEF96CE49FCE11AF18A1D4ACCCDA1FB353FC6E1(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_value, const RuntimeMethod* method) 
{
	MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tE8C9D9A5227D02FA79E2A24D018E5191D1A60624 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mEE74EF26CF6D2347534D1C8F95D545636F0FA46F(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		bool L_5;
		L_5 = UnsafeParallelHashMapBase_2_SetValue_mBC18C7011827D88295DED84B1726AD4466BB120F(L_4, (&V_1), (&___1_value), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		goto IL_0040;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = __this->___m_Buffer;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_7 = ___0_key;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 L_8 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = __this->___m_AllocatorLabel;
		bool L_10;
		L_10 = UnsafeParallelHashMapBase_2_TryAdd_mCB85E78F13A860CF0178D6ECF6A5EE99464C1E17(L_6, L_7, L_8, (bool)0, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_key, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 ___1_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Item_m3D58B54F8D3C58B58799B59607EE0AFD5AC64057(_thisAdjusted, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_002b;
	}

IL_0011:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_2, L_3, NULL);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	UnsafeParallelHashMap_2_Dispose_m0FF62854F0FFD4667B34AE7674726EAE5729D3C6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_2 = ___0_inputDeps;
		V_2 = L_2;
		goto IL_0049;
	}

IL_0013:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		(&V_3)->___Data = L_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		(&V_3)->___Allocator = L_4;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_5 = V_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_5, L_6, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		V_0 = L_7;
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = V_0;
		V_2 = L_8;
		goto IL_0049;
	}

IL_0049:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mEDA47F29EA382202A8479BB4D49ADD042F1A1B00(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m545446B6CCCFA78F28D0BF324AAABD721468B8EC(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_mB6F970D649AF412FDC59C8BB56C020E3AB8E5A54(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_6 = V_0;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	NativeArray_1_t79AF901C035FC0E2DB95A6C857E2A6FE26138AF6 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyArray_m2BD36E12D9420B741CEE93E4D7B1B8DFDBCAFA14(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_m2A01DCDC2D6353A9DDD74CDFF0A9908BB96E6A04(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mD726977F6E8B5502D1AED57AAADDDB7D85557BDE(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_6 = V_0;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	NativeArray_1_t6B8101DA17D7B8195CE7A9BDC3D1A17A706AB9E5 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetValueArray_mEC80895BEEFF929ED073C7CA34B111998B56E346(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m72A0F9653E0BC4652F78F93FE8FDEB2647F2E172((&V_0), L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mAA74B2488D1B1A7477FEEEA971506A1D16CC0447(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF L_5 = V_0;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	NativeKeyValueArrays_2_t2ABEEFCEDF40D782252BA70CD636FF829C30F7DF _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyValueArrays_m08B3C518EBB4540E607B95EB46AEC35F045938AA(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___m_ThreadIndex = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 L_1 = V_0;
		V_1 = L_1;
		goto IL_001a;
	}

IL_001a:
	{
		ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	ParallelWriter_tE4F88E047E9C881C0A5561C88ADCBCBEE3691891 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsParallelWriter_m573A9780A0CA91967EC9995B40F27A968897E8CE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1 L_0 = (*(UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*)__this);
		ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnly__ctor_mAFEC09ABB74D7DCF6467DA5123E5134A7690563A((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	ReadOnly_t1EA07D663066F20D7FA16EB42CBC94851A26464C _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsReadOnly_m41E45B881717F268AA183E258F4CCEC7E5D04ECD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736((&L_1), L_0, NULL);
		(&V_0)->___m_Enumerator = L_1;
		Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C L_2 = V_0;
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	Enumerator_t9DDA534F92F0AEDB609D5F13BB3FE800CA955E8C _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetEnumerator_m162EC0749B6EE27353C7DF82CCE64E7FED8BB33A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m72EA8B0E23A7627AC9D8A1EF232B4CB9BA1CEFA8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C_gshared (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mDEBFDA7A900081B6BF565D9CF7B703D64EFD8D3C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_4 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE54DD5C2CBA8FCBC9A566B3974CF6E647FC9E17A(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2__ctor_m361483CA401F57CD94EBA6C9C69EC0D01F55C0CD(_thisAdjusted, ___0_capacity, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Count_m7CADBDE3F1022312321D8926CF6A69A34E89DBA1(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___keyCapacity;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		int32_t L_2 = ___0_value;
		int32_t L_3 = ___0_value;
		int32_t L_4;
		L_4 = UnsafeParallelHashMapData_GetBucketSize_mEF90FF75EFE70E4B59CD6AF9FDCB3D564A1986A3(L_3, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_5 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mA570A0B094BE59896697D14CD2A80B0AA68D3F58(L_1, L_2, L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Capacity_m86C7F13BF524D4025221BF5D0629CB5E93421F63(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mB7B85621D35EE959C55FB505035D7B25007B415A(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2_Clear_m219D6719A37B4ACDE9B383DCC7AFA0A765624B0A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryAdd_mA6CF47D0D999FB52117A81F2C693CF1627752282(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5(L_0, L_1, L_2, (bool)0, L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2_Add_m6B68E8E8712450348CCDCC9E74466731373E91D5(_thisAdjusted, ___0_key, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mBCADF7E8C529A74DD583D12B668E2C2B9375AAC8(L_0, L_1, (bool)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		V_0 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Remove_m8A523B7608C78DF664DA410FE6EF9E7F98C81810(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_item, const RuntimeMethod* method) 
{
	NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_1 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_item, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236(_thisAdjusted, ___0_key, ___1_item, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_2;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	bool _returnValue;
	_returnValue = UnsafeParallelHashMap_2_ContainsKey_m8FC7E5C321EF2536AF00B37417D22554DCB45432(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method) 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m3ACE458A6D8F7EA71E59B9CBE4827B68E9839236(__this, L_0, (&V_0), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_2 = V_0;
		V_1 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_get_Item_mCED5B6B55B4DE89FF7A2D1C134C0B49EF3E252B0(_thisAdjusted, ___0_key, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_value, const RuntimeMethod* method) 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t9BDA238EAFEC744BECA2798744239238A0F25915 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m8CFDB238C3F05E26822D51354DEAF99A117379A2(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		bool L_5;
		L_5 = UnsafeParallelHashMapBase_2_SetValue_m54AB539F65B85ABE79F37AD2CE50A099488B995D(L_4, (&V_1), (&___1_value), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		goto IL_0040;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = __this->___m_Buffer;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_7 = ___0_key;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 L_8 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_9 = __this->___m_AllocatorLabel;
		bool L_10;
		L_10 = UnsafeParallelHashMapBase_2_TryAdd_m9D35292221F2C720B6FB830D20F229CAC3D0B2E5(L_6, L_7, L_8, (bool)0, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03_AdjustorThunk (RuntimeObject* __this, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___0_key, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___1_value, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2_set_Item_mB3680468AE0A76EA1547423315623193AAB4DA03(_thisAdjusted, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_002b;
	}

IL_0011:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_2, L_3, NULL);
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	UnsafeParallelHashMap_2_Dispose_mE719C2B17B820B50A61A63EAFE938D37586711F9(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_2 = ___0_inputDeps;
		V_2 = L_2;
		goto IL_0049;
	}

IL_0013:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		(&V_3)->___Data = L_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		(&V_3)->___Allocator = L_4;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_5 = V_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_5, L_6, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		V_0 = L_7;
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)((uintptr_t)0);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_8 = V_0;
		V_2 = L_8;
		goto IL_0049;
	}

IL_0049:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = V_2;
		return L_9;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_m8D2E6516FBB027ED692143C3AE554BFB9F79317B(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mD989AA72296BF2E4B3343D2970C945B4E56B37DA(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mE4D021AEA5F6DA3E518498C925ACD4730FC2FDE2(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_6 = V_0;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyArray_m3AE9758F6F2983249302670BB7570880186B3867(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_mD989AA72296BF2E4B3343D2970C945B4E56B37DA(L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m4E5D2DC71802EC34903300385F65AE1A755332C8(L_4, L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_6 = V_0;
		V_1 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	NativeArray_1_tA5DC4FA4164E8BD8F672BA1E1D4357375EF4C837 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetValueArray_m355DE87742D1495E17240D1E6E4A799299F192BD(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_mF2C81ACC06F062F8629A60F4C0307990B4CEB3AA((&V_0), L_1, L_2, (int32_t)0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m202FA5F5FFDE5A0DCD7E0B472C02513534DE0833(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 L_5 = V_0;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	NativeKeyValueArrays_2_t86D5872EA22D11EA0F7F6720038C1D3C7B3626F7 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetKeyValueArrays_m4199C750DA9F5EFB073EA95FE852BC87F29B1188(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->___m_ThreadIndex = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA L_1 = V_0;
		V_1 = L_1;
		goto IL_001a;
	}

IL_001a:
	{
		ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	ParallelWriter_tE921425E58256C89C0639A3EFE83F30069708ABA _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsParallelWriter_m3AEDABC462BB6A8A16070654D0C95B8E13CB8CC8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026 L_0 = (*(UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*)__this);
		ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnly__ctor_m9702EDFF00C6AA81D25FA31361E8BF2F768D95B5((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	ReadOnly_t6255188980AB9004E2C23F48B5F16E60F615E7C9 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_AsReadOnly_mCF6A13931032A35C815874E7A5BB0709B82CF14C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		UnsafeParallelHashMapDataEnumerator__ctor_m4BD89848A9562869AB65E15D3D1D24A194187736((&L_1), L_0, NULL);
		(&V_0)->___m_Enumerator = L_1;
		Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 L_2 = V_0;
		V_1 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	Enumerator_tCB5E394B11726C552D3086CA81160A2C969DB239 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_GetEnumerator_m419EB9CDC1C085F8EBACB44CD2C0F85FF77A28FB(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m5127C5F5B59872D9912A33609BFEB131C5A07798(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3_gshared (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m747ECDF1228E253EA2BC4BFDADD249A841E678E3(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m02D43DF516544C279AF660EA4731449C82991849_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_y;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_x;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared_inline (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared_inline (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = ___2_value;
		*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared_inline (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_mA7207BDE72212F22323BD914FC6F11477A4B69B2_gshared_inline (void* ___0_destination, int32_t ___1_index, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = ___2_value;
		*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C UnsafeUtility_ReadArrayElement_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m055B0246613F21DF105592E21674EE77285875DC_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C);
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C L_3 = (*(TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m647B24B15C0E0761496504153AB78349AC9B8C8A_gshared_inline (void* ___0_destination, int32_t ___1_index, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = ___2_value;
		*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A UnsafeUtility_ReadArrayElement_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_m7ACC04D18A4EC85ECFB185A88B79EB26AD1DACB1_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A);
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A L_3 = (*(UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_m82C11B166482A692F9834B94BEC9F7FD6EF6EE59_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = ___2_value;
		*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m723A33EB205588C33A298CB35B7C482000A64871_gshared_inline (void* ___0_destination, int32_t ___1_index, DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = ___2_value;
		*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D UnsafeUtility_ReadArrayElement_TisEntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D_mC6063FB4A2E79E711911A585DB8C2A0F994A4923_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D);
		EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D L_3 = (*(EntityComponentPair_t12CD563FABC5EF97B4CBCB9235CF7A29EA152C9D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F UnsafeUtility_ReadArrayElement_TisDebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F_m5E3D83DD488346447A4245CE053A52BE724FC006_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F);
		DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F L_3 = (*(DebugState_tD31B71B396F8954B7CF8A55D7716DCCF74AF8C6F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_mC1E3D45729DB5FCE473C8190D2E52C1D3E8E84AB_gshared_inline (void* ___0_destination, int32_t ___1_index, EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = ___2_value;
		*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_mD78FDD8EE8BE2EF88ED42CC9B8974E5995E74721_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = ___2_value;
		*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD UnsafeUtility_ReadArrayElement_TisEntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD_m79A11EC661A750655C4DB523B26452DE76DBDAA8_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD);
		EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD L_3 = (*(EntityComponentPair_tBBE23DA40B93DACBF79EAEC5BBD21D35E287A7FD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 UnsafeUtility_ReadArrayElement_TisManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78_m6D870E4CECFBA90EF42A30D63C7DE033CB114308_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78);
		ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78 L_3 = (*(ManagedObjectBlobAssetReferencePatch_t35B2C96EA514CC918BD9975956C766350C6FEE78*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m9FEB46507E2F11F723397DE905749CCCDEB95E26_gshared_inline (void* ___0_destination, int32_t ___1_index, ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = ___2_value;
		*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C UnsafeUtility_ReadArrayElement_TisManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C_m816C993CFFAA9033A70BF90060F042E40FF9D30F_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C);
		ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C L_3 = (*(ManagedObjectEntityReferencePatch_t33F72D338231B8CEB2B82257E22435C2F239E73C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mB914B7839B3E042C5640A1A50CF30FB4B9DC0864_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m7DF1D1A1057707BE6DCDD12653405956F3D2EB93_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m1FFE6001B99A3DC4138F80E0BADDB72840E0EC8B_gshared_inline (UnsafeParallelHashMap_2_t609C8C84AE2BD03EFF1426511F6AD728F30E66D1* __this, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___keyCapacity;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m4C43D1F70BB7C1EDA7EAFF2A29BC21C1082C0BB5_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m6356CC4EDDE0D16C23B691F8812183B0C1DCD3F9_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_m90F888C0B8FA1292484DC43603545A16AFD31DCE_gshared_inline (UnsafeParallelHashMap_2_tCB773D9A0A5C14DC58BF0E1AF1AD3633B94CC026* __this, const RuntimeMethod* method) 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		V_0 = L_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___keyCapacity;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
