#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4;
// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>>
struct Func_2_tC48627AFF2320140544F5F9438776637B301E0AD;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD;
// System.Threading.Tasks.TaskFactory`1<System.VoidValueTypeParameter>
struct TaskFactory_1_t8B6EB2C52CA012EDA9B6B28E63530A7ABC52CA1F;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086;
// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9;
IL2CPP_EXTERN_C String_t* _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m7FD91FDDC9722B3AB34C76F4E8B8C524C93C720D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_mC8A829D5F417D33D50D5D3119D3C56AD9F1752DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m75727BD77313071553A264AF02ED077E4E54B0D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_m7C1B52FAE42FA15BD90A0507E5E116117DD2ECE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_m90E8CBD429C9F6E44950602FCA88421E725F7F50_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2CE77F518739165827EE877B1C5F077D546E7CA1 
{
public:

public:
};

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_mE1223109A7CBD5DA29413156BA2C75157F169C87(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};

// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD, ___m_task_0)); }
	inline Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields, ___s_idGenerator_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_idGenerator_0), (void*)value);
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Windows.Foundation.TokenizerHelper
struct TokenizerHelper_tF253F84A7B764F03B22DAD1E2F830BC159292C85  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions
struct WindowsRuntimeSystemExtensions_tF05B5F933CDB48DE7C5AF213EDECD001BAE9BF94  : public RuntimeObject
{
public:

public:
};


// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.VoidValueTypeParameter
struct VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC__padding[1];
	};

public:
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____completedHandler_5)); }
	inline AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	RuntimeObject * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	RuntimeObject * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____completedHandler_5)); }
	inline RuntimeObject * get__completedHandler_5() const { return ____completedHandler_5; }
	inline RuntimeObject ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(RuntimeObject * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____progressHandler_6)); }
	inline RuntimeObject * get__progressHandler_6() const { return ____progressHandler_6; }
	inline RuntimeObject ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(RuntimeObject * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9  : public TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ct
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____ct_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ctr
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ____ctr_2;
	// System.Boolean System.Threading.Tasks.AsyncInfoToTaskBridge`1::_completing
	bool ____completing_3;

public:
	inline static int32_t get_offset_of__ct_1() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9, ____ct_1)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__ct_1() const { return ____ct_1; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__ct_1() { return &____ct_1; }
	inline void set__ct_1(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____ct_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____ct_1))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__ctr_2() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9, ____ctr_2)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get__ctr_2() const { return ____ctr_2; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of__ctr_2() { return &____ctr_2; }
	inline void set__ctr_2(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		____ctr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____ctr_2))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____ctr_2))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__completing_3() { return static_cast<int32_t>(offsetof(AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9, ____completing_3)); }
	inline bool get__completing_3() const { return ____completing_3; }
	inline bool* get_address_of__completing_3() { return &____completing_3; }
	inline void set__completing_3(bool value)
	{
		____completing_3 = value;
	}
};


// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6, ___m_result_22)); }
	inline VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  get_m_result_22() const { return ___m_result_22; }
	inline VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t8B6EB2C52CA012EDA9B6B28E63530A7ABC52CA1F * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC48627AFF2320140544F5F9438776637B301E0AD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t8B6EB2C52CA012EDA9B6B28E63530A7ABC52CA1F * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t8B6EB2C52CA012EDA9B6B28E63530A7ABC52CA1F ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t8B6EB2C52CA012EDA9B6B28E63530A7ABC52CA1F * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tC48627AFF2320140544F5F9438776637B301E0AD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tC48627AFF2320140544F5F9438776637B301E0AD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tC48627AFF2320140544F5F9438776637B301E0AD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};

// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m9393658D0FD28BE7960FBB531A31A1E1CB106F80(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m0C4F0079B788C88A5A572A827AAACA0B3BB233C5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m55A00D21BF943DA94D606044A66295FEF77139EE() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5  : public TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  TaskToAsyncInfoAdapter_4_GetResultsInternal_m837B25C2E7D579309CD59F99E2F9614AE817AAB1_gshared (TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mB20314FCFA433642743E4F39A2EF381CEBA15F5B_gshared (TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskToAsyncInfoAdapter_4_get_Task_mA456DB7C5FF19C9F107E66D37ECC2A21868A498D_gshared (TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086 * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mDB62DB32E21CAAEBBC7328885EC9DF4899563F40_gshared_inline (TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697_gshared (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD_gshared (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * __this, RuntimeObject* ___asyncInfo0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_gshared_inline (TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD * __this, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m64A992907A056F364EC61E6FD81AF8825172C572 (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m1035863138476250B306E9EC982393F3A646DD50 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point10, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mEF8B449E69F7380D4FDB266C4410283D89EAB0D8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect10, Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mD2F767928BA17ECC1C3DADE2C944E8E8C304AEE7 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size10, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
inline VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  TaskToAsyncInfoAdapter_4_GetResultsInternal_mC8A829D5F417D33D50D5D3119D3C56AD9F1752DC (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 * __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  (*) (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_m837B25C2E7D579309CD59F99E2F9614AE817AAB1_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_m351D4D540D59485AB4607AD62FDB182A704C4239 (AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_GetInstance_mE5108A48B8BFDB2158C05951FACC08AFB09FDDBB (RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772 (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m677069D586E45200AD48EA1913196665025B0866 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * ___continuationAction0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler4, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsRuntimeSystemExtensions_AsTask_m2E55F03056523634B739716B7B550896E84A4EA7 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsRuntimeSystemExtensions_AsTask_m90E8CBD429C9F6E44950602FCA88421E725F7F50 (RuntimeObject* ___source0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m75727BD77313071553A264AF02ED077E4E54B0D3 (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_mB20314FCFA433642743E4F39A2EF381CEBA15F5B_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskToAsyncInfoAdapter_4_get_Task_m7C1B52FAE42FA15BD90A0507E5E116117DD2ECE9 (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_mA456DB7C5FF19C9F107E66D37ECC2A21868A498D_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_m6E3578EE53E9E051760D798F120A1EB4357B4E09 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_inline (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 * __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * (*) (TaskToAsyncInfoAdapter_4_t8CD66F3EEA6854489B617383D786293AEFC44AB9 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mDB62DB32E21CAAEBBC7328885EC9DF4899563F40_gshared_inline)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m374A4B9A291FCA8E231E671382BE9475DE4E9420 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___source0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___sink1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___concatenationLifetime2, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mCB42F984443F85FD8ACB988808BA1FA7D09C83E8 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m769EFF18848E3A442C63D21A4B15D2C2E4C623B7 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, bool ___canceled0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_FromCanceled_m41BA8654C4B3943E3970EA11F11A620379978318 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
inline void AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697 (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697_gshared)(__this, ___cancellationToken0, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_mFB087F426B85A21CFD3EC42705296735802E4C6E (AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * __this, RuntimeObject* ___asyncInfo0, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 *, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD_gshared)(__this, ___asyncInfo0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
inline Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_inline (TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * (*) (TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_gshared_inline)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F (CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m64A992907A056F364EC61E6FD81AF8825172C572 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_mDD6A11ACF3C28AE5704799980E65445BF3CED61B (uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = AsyncInfoIdGenerator_CreateNext_m64A992907A056F364EC61E6FD81AF8825172C572(/*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)((uintptr_t)L_6), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_mA2B1D5EA3A4BA759B7968AE9EC61983455404889 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
		return;
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
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1;
		L_1 = TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_11;
		L_11 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_13);
		double L_15;
		L_15 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_16);
		double L_18;
		L_18 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mC888813A47B8AC105F0CA58D45D5B7B748E1A68B(L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m1035863138476250B306E9EC982393F3A646DD50 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point10, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point21, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point10), /*hidden argument*/NULL);
		double L_1;
		L_1 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2;
		L_2 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point10), /*hidden argument*/NULL);
		double L_3;
		L_3 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  L_1 = (*(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Point_op_Equality_m1035863138476250B306E9EC982393F3A646DD50(L_1, ((*(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)UnBox(L_2, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_2;
		L_2 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A(_thisAdjusted, method);
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
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2;
		L_2 = TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40;
		L_40 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mEF8B449E69F7380D4FDB266C4410283D89EAB0D8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect10, Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_1;
		L_1 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2;
		L_2 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_3;
		L_3 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4;
		L_4 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_5;
		L_5 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6;
		L_6 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_7;
		L_7 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  L_1 = (*(Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Rect_op_Equality_mEF8B449E69F7380D4FDB266C4410283D89EAB0D8(L_1, ((*(Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)UnBox(L_2, Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_2;
		L_2 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_4;
		L_4 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_6;
		L_6 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B(_thisAdjusted, method);
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
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  L_1 = (*(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Size_Equals_mD2F767928BA17ECC1C3DADE2C944E8E8C304AEE7(L_1, ((*(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)UnBox(L_2, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1;
		L_1 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_3;
		L_3 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mD2F767928BA17ECC1C3DADE2C944E8E8C304AEE7 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size10, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2;
		L_2 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3;
		L_3 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5;
		L_5 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6;
		L_6 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C(_thisAdjusted, method);
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
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m80C8CD1B77250D4E55F672EA38177E27E9DB6E79 (TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_GetResultsInternal_mC8A829D5F417D33D50D5D3119D3C56AD9F1752DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC  L_0;
		L_0 = TaskToAsyncInfoAdapter_4_GetResultsInternal_mC8A829D5F417D33D50D5D3119D3C56AD9F1752DC(__this, /*hidden argument*/TaskToAsyncInfoAdapter_4_GetResultsInternal_mC8A829D5F417D33D50D5D3119D3C56AD9F1752DC_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::OnCompleted(Windows.Foundation.AsyncActionCompletedHandler,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_mDF719A3367C053B57054D09785C3E0C348C137DD (TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * __this, AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * ___userCompletionHandler0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * L_0 = ___userCompletionHandler0;
		int32_t L_1 = ___asyncStatus1;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_m351D4D540D59485AB4607AD62FDB182A704C4239(L_0, __this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::Windows.Foundation.IAsyncAction.put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_mBB32249F4F0FA126B4CEAD879BD252977935CCA6 (TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * __this, AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * ___handler0, const RuntimeMethod* method)
{
	{
		AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * L_0 = ___handler0;
		VirtActionInvoker1< AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * >::Invoke(11 /* System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::set_Completed(TCompletedHandler) */, __this, L_0);
		return;
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
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = NumberFormatInfo_GetInstance_mE5108A48B8BFDB2158C05951FACC08AFB09FDDBB(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m374A4B9A291FCA8E231E671382BE9475DE4E9420 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___source0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___sink1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B2_0 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * G_B2_1 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B1_0 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * G_B1_1 = NULL;
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * G_B4_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B4_1 = NULL;
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * G_B3_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_2 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_4 = L_3;
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = ___sink1;
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_6;
		L_6 = CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_8 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_10 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_11 = (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *)il2cpp_codegen_object_new(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_12 = L_11;
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_13 = V_0;
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_14 = L_13;
		RuntimeObject * L_15 = Box(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_16;
		L_16 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_17;
		L_17 = TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline(/*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
		L_18 = Task_ContinueWith_m677069D586E45200AD48EA1913196665025B0866(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___source0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = WindowsRuntimeSystemExtensions_AsTask_m2E55F03056523634B739716B7B550896E84A4EA7(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_2;
		L_2 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsRuntimeSystemExtensions_AsTask_m2E55F03056523634B739716B7B550896E84A4EA7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1;
		L_1 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
		L_2 = WindowsRuntimeSystemExtensions_AsTask_m90E8CBD429C9F6E44950602FCA88421E725F7F50(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * WindowsRuntimeSystemExtensions_AsTask_m90E8CBD429C9F6E44950602FCA88421E725F7F50 (RuntimeObject* ___source0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m7FD91FDDC9722B3AB34C76F4E8B8C524C93C720D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m75727BD77313071553A264AF02ED077E4E54B0D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Task_m7C1B52FAE42FA15BD90A0507E5E116117DD2ECE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * V_0 = NULL;
	AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * V_1 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_m90E8CBD429C9F6E44950602FCA88421E725F7F50_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		V_0 = ((TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 *)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m75727BD77313071553A264AF02ED077E4E54B0D3(L_4, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m75727BD77313071553A264AF02ED077E4E54B0D3_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * L_6 = V_0;
		NullCheck(L_6);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = TaskToAsyncInfoAdapter_4_get_Task_m7C1B52FAE42FA15BD90A0507E5E116117DD2ECE9(L_6, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_Task_m7C1B52FAE42FA15BD90A0507E5E116117DD2ECE9_RuntimeMethod_var);
		V_2 = L_7;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_m6E3578EE53E9E051760D798F120A1EB4357B4E09((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_12;
		L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_inline(L_11, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_13 = ___cancellationToken1;
		TaskToAsyncActionAdapter_t608E0C4923EF929A385AB26A16D8F7922ED876B5 * L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_15;
		L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_inline(L_14, /*hidden argument*/TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m57C38EDB60D8554757B1B3DBC2A4958D0082E8B5_RuntimeMethod_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m374A4B9A291FCA8E231E671382BE9475DE4E9420(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___source0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_21;
		L_21 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___source0;
		NullCheck(L_22);
		Exception_t * L_23;
		L_23 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_22);
		Exception_t * L_24;
		L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mCB42F984443F85FD8ACB988808BA1FA7D09C83E8(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_25;
		L_25 = Task_FromException_m601DE8188AC96059BD00E85AB276E48F4EB9ABEE(L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_0083:
	{
		bool L_26;
		L_26 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken1), /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_27;
		memset((&L_27), 0, sizeof(L_27));
		CancellationToken__ctor_m769EFF18848E3A442C63D21A4B15D2C2E4C623B7((&L_27), (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_28 = ___cancellationToken1;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_29;
		L_29 = Task_FromCanceled_m41BA8654C4B3943E3970EA11F11A620379978318(G_B16_0, /*hidden argument*/NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_30 = ___cancellationToken1;
		AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * L_31 = (AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 *)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9_il2cpp_TypeInfo_var);
		AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697(L_31, L_30, /*hidden argument*/AsyncInfoToTaskBridge_1__ctor_m4132A29837E033BAEEBE9891DF3F6CFEFB3EB697_RuntimeMethod_var);
		V_1 = L_31;
	}

IL_00a2:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_32 = ___source0;
		AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * L_33 = V_1;
		AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * L_34 = (AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 *)il2cpp_codegen_object_new(AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_il2cpp_TypeInfo_var);
		AsyncActionCompletedHandler__ctor_mFB087F426B85A21CFD3EC42705296735802E4C6E(L_34, L_33, (intptr_t)((intptr_t)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m7FD91FDDC9722B3AB34C76F4E8B8C524C93C720D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1 * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler) */, IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06_il2cpp_TypeInfo_var, L_32, L_34);
		AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * L_35 = V_1;
		RuntimeObject* L_36 = ___source0;
		NullCheck(L_35);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD(L_35, L_36, /*hidden argument*/AsyncInfoToTaskBridge_1_RegisterForCancellation_m5AA8E8CFD410BBA5A6C8A3A31EA14DB2582733AD_RuntimeMethod_var);
		goto IL_00c0;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bd;
		}
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c0;
	} // end catch (depth: 1)

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_t8317C76D3C4E61A88E811478F381085F350791E9 * L_37 = V_1;
		NullCheck(L_37);
		Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * L_38;
		L_38 = TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_inline(L_37, /*hidden argument*/TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_RuntimeMethod_var);
		return L_38;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mCB42F984443F85FD8ACB988808BA1FA7D09C83E8 (Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
		return L_0;
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
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB724E43DB250CF978F83BC92234DD18315C37297 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_0 = (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA *)il2cpp_codegen_object_new(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9 (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677 (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)UnBox(L_0, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_numberDecimalSeparator_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ((TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * TaskToAsyncInfoAdapter_4_get_CancelTokenSource_mDB62DB32E21CAAEBBC7328885EC9DF4899563F40_gshared_inline (TaskToAsyncInfoAdapter_4_t11E1F3123F1D4A54053F8EC2493873DF6C37C086 * __this, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_0 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)__this->get__cancelTokenSource_0();
		return (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * TaskCompletionSource_1_get_Task_m2C2A2D06BEA67EB7BA18D8EE53CFEDBE3C1325EC_gshared_inline (TaskCompletionSource_1_tE986E2EF187DC1628D53E1A23718AF7F7391A9DD * __this, const RuntimeMethod* method)
{
	{
		Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 * L_0 = (Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 *)__this->get_m_task_0();
		return (Task_1_tCF1AD0B2584910DBBF6F53867EA22696A1A8A4E6 *)L_0;
	}
}
