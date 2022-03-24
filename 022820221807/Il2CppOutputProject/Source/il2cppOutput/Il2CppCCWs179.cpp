#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<System.UInt64,Microsoft.Azure.RemoteRendering.RemoteRenderingClient>
struct Func_2_t26ECC14B62F016A67A792F2F3D7E306B9B421BF1;
// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.RTHandle>
struct HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass>
struct List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0;
// UnityEngine.Rendering.RenderTargetIdentifier[][]
struct RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Rendering.GraphicsDeviceType[]
struct GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// UnityEngine.Rendering.RTHandle[]
struct RTHandleU5BU5D_tD90C5A7DBC9125D6BD226EB018B294CA604E8DA3;
// UnityEngine.Rendering.RenderBufferStoreAction[]
struct RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Mono.Math.BigInteger
struct BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D;
// Mono.Math.BigInteger
struct BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00;
// UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
struct ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B;
// UnityEngine.Rendering.Universal.Internal.FinalBlitPass
struct FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t3B05FA1782C2EFEE5A2A5251BB4CE24F61272463;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// UnityEngine.Experimental.Rendering.Universal.Light2DCullResult
struct Light2DCullResult_t4A7768B3D2E997DBCC1479AD9344DCE80CB8F90A;
// Microsoft.Azure.RemoteRendering.LogEventHandlerNative
struct LogEventHandlerNative_tC49AEDE86FD762A4079BB6E15F6F614129E9ED26;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Experimental.Rendering.Universal.PixelPerfectBackgroundPass
struct PixelPerfectBackgroundPass_tF2AC14F08D1E822A1A52FA883ED7C6DCAD9D862B;
// UnityEngine.Rendering.Universal.Internal.PostProcessPass
struct PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D;
// UnityEngine.Rendering.ProfilingSampler
struct ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Experimental.Rendering.Universal.Render2DLightingPass
struct Render2DLightingPass_tF3581BC27E75CC1524BBF6179F0BAE6C23CA9B45;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph
struct RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger
struct RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass
struct RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry
struct RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66;
// UnityEngine.Experimental.Rendering.Universal.RenderObjectsPass
struct RenderObjectsPass_t6E5BE77329470D49DB11AE0353E977A7DFA0BFC7;
// UnityEngine.Experimental.Rendering.Universal.Renderer2DData
struct Renderer2DData_tC3A48CA3622A4C1F56B5C834792F547B5E823464;
// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545;
// System.String
struct String_t;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754;
// Microsoft.Azure.RemoteRendering.TokenRequiredEventHandlerNative
struct TokenRequiredEventHandlerNative_tB58F8177AB1DAD86F185EB03D3354154BED17A6B;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_tC3692E7FD32FEA702B9BD6F4B445543E217B6B22;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.Experimental.Rendering.Universal.RenderObjects/RenderObjectsSettings
struct RenderObjectsSettings_t369ECAF699FFAC3ED4A1EA64D2C5B49646255124;
// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
struct RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404;

IL2CPP_EXTERN_C RuntimeClass* Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
{
public:

public:
};


// Microsoft.Azure.RemoteRendering.RemoteRenderingClient
struct RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109  : public RuntimeObject
{
public:
	// System.UInt64 Microsoft.Azure.RemoteRendering.RemoteRenderingClient::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};

struct RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_StaticFields
{
public:
	// Microsoft.Azure.RemoteRendering.LogEventHandlerNative Microsoft.Azure.RemoteRendering.RemoteRenderingClient::MessageLoggedStaticHandlerDelegate
	LogEventHandlerNative_tC49AEDE86FD762A4079BB6E15F6F614129E9ED26 * ___MessageLoggedStaticHandlerDelegate_1;
	// Microsoft.Azure.RemoteRendering.TokenRequiredEventHandlerNative Microsoft.Azure.RemoteRendering.RemoteRenderingClient::TokenRequiredStaticHandlerDelegate
	TokenRequiredEventHandlerNative_tB58F8177AB1DAD86F185EB03D3354154BED17A6B * ___TokenRequiredStaticHandlerDelegate_2;
	// System.Func`2<System.UInt64,Microsoft.Azure.RemoteRendering.RemoteRenderingClient> Microsoft.Azure.RemoteRendering.RemoteRenderingClient::createFromCookieFactoryFunction
	Func_2_t26ECC14B62F016A67A792F2F3D7E306B9B421BF1 * ___createFromCookieFactoryFunction_3;

public:
	inline static int32_t get_offset_of_MessageLoggedStaticHandlerDelegate_1() { return static_cast<int32_t>(offsetof(RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_StaticFields, ___MessageLoggedStaticHandlerDelegate_1)); }
	inline LogEventHandlerNative_tC49AEDE86FD762A4079BB6E15F6F614129E9ED26 * get_MessageLoggedStaticHandlerDelegate_1() const { return ___MessageLoggedStaticHandlerDelegate_1; }
	inline LogEventHandlerNative_tC49AEDE86FD762A4079BB6E15F6F614129E9ED26 ** get_address_of_MessageLoggedStaticHandlerDelegate_1() { return &___MessageLoggedStaticHandlerDelegate_1; }
	inline void set_MessageLoggedStaticHandlerDelegate_1(LogEventHandlerNative_tC49AEDE86FD762A4079BB6E15F6F614129E9ED26 * value)
	{
		___MessageLoggedStaticHandlerDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageLoggedStaticHandlerDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_TokenRequiredStaticHandlerDelegate_2() { return static_cast<int32_t>(offsetof(RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_StaticFields, ___TokenRequiredStaticHandlerDelegate_2)); }
	inline TokenRequiredEventHandlerNative_tB58F8177AB1DAD86F185EB03D3354154BED17A6B * get_TokenRequiredStaticHandlerDelegate_2() const { return ___TokenRequiredStaticHandlerDelegate_2; }
	inline TokenRequiredEventHandlerNative_tB58F8177AB1DAD86F185EB03D3354154BED17A6B ** get_address_of_TokenRequiredStaticHandlerDelegate_2() { return &___TokenRequiredStaticHandlerDelegate_2; }
	inline void set_TokenRequiredStaticHandlerDelegate_2(TokenRequiredEventHandlerNative_tB58F8177AB1DAD86F185EB03D3354154BED17A6B * value)
	{
		___TokenRequiredStaticHandlerDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenRequiredStaticHandlerDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_createFromCookieFactoryFunction_3() { return static_cast<int32_t>(offsetof(RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_StaticFields, ___createFromCookieFactoryFunction_3)); }
	inline Func_2_t26ECC14B62F016A67A792F2F3D7E306B9B421BF1 * get_createFromCookieFactoryFunction_3() const { return ___createFromCookieFactoryFunction_3; }
	inline Func_2_t26ECC14B62F016A67A792F2F3D7E306B9B421BF1 ** get_address_of_createFromCookieFactoryFunction_3() { return &___createFromCookieFactoryFunction_3; }
	inline void set_createFromCookieFactoryFunction_3(Func_2_t26ECC14B62F016A67A792F2F3D7E306B9B421BF1 * value)
	{
		___createFromCookieFactoryFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createFromCookieFactoryFunction_3), (void*)value);
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


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// System.Security.Cryptography.RIPEMD160
struct RIPEMD160_tC46FCE0C691B3F2E543969F484A39F7B3B6600C0  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
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


// Windows.Foundation.Rect
struct Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};


// Microsoft.Win32.RegistryKey
struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// Microsoft.Win32.SafeHandles.SafeRegistryHandle Microsoft.Win32.RegistryKey::safe_handle
	SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * ___safe_handle_2;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_3;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_5;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_6;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_1), (void*)value);
	}

	inline static int32_t get_offset_of_safe_handle_2() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___safe_handle_2)); }
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * get_safe_handle_2() const { return ___safe_handle_2; }
	inline SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 ** get_address_of_safe_handle_2() { return &___safe_handle_2; }
	inline void set_safe_handle_2(SafeRegistryHandle_tE132711AC8880C0D375E49B50419BCE4935CC545 * value)
	{
		___safe_handle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safe_handle_2), (void*)value);
	}

	inline static int32_t get_offset_of_hive_3() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___hive_3)); }
	inline RuntimeObject * get_hive_3() const { return ___hive_3; }
	inline RuntimeObject ** get_address_of_hive_3() { return &___hive_3; }
	inline void set_hive_3(RuntimeObject * value)
	{
		___hive_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hive_3), (void*)value);
	}

	inline static int32_t get_offset_of_qname_4() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___qname_4)); }
	inline String_t* get_qname_4() const { return ___qname_4; }
	inline String_t** get_address_of_qname_4() { return &___qname_4; }
	inline void set_qname_4(String_t* value)
	{
		___qname_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qname_4), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_5() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___isRemoteRoot_5)); }
	inline bool get_isRemoteRoot_5() const { return ___isRemoteRoot_5; }
	inline bool* get_address_of_isRemoteRoot_5() { return &___isRemoteRoot_5; }
	inline void set_isRemoteRoot_5(bool value)
	{
		___isRemoteRoot_5 = value;
	}

	inline static int32_t get_offset_of_isWritable_6() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268, ___isWritable_6)); }
	inline bool get_isWritable_6() const { return ___isWritable_6; }
	inline bool* get_address_of_isWritable_6() { return &___isWritable_6; }
	inline void set_isWritable_6(bool value)
	{
		___isWritable_6 = value;
	}
};

struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_7;

public:
	inline static int32_t get_offset_of_RegistryApi_7() { return static_cast<int32_t>(offsetof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_StaticFields, ___RegistryApi_7)); }
	inline RuntimeObject* get_RegistryApi_7() const { return ___RegistryApi_7; }
	inline RuntimeObject** get_address_of_RegistryApi_7() { return &___RegistryApi_7; }
	inline void set_RegistryApi_7(RuntimeObject* value)
	{
		___RegistryApi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegistryApi_7), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056 
{
public:
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphPass UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderPass
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Resources
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_RenderGraph
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder::m_Disposed
	bool ___m_Disposed_3;

public:
	inline static int32_t get_offset_of_m_RenderPass_0() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_RenderPass_0)); }
	inline RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * get_m_RenderPass_0() const { return ___m_RenderPass_0; }
	inline RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 ** get_address_of_m_RenderPass_0() { return &___m_RenderPass_0; }
	inline void set_m_RenderPass_0(RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * value)
	{
		___m_RenderPass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderPass_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Resources_1() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_Resources_1)); }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * get_m_Resources_1() const { return ___m_Resources_1; }
	inline RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 ** get_address_of_m_Resources_1() { return &___m_Resources_1; }
	inline void set_m_Resources_1(RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * value)
	{
		___m_Resources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resources_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraph_2() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_RenderGraph_2)); }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * get_m_RenderGraph_2() const { return ___m_RenderGraph_2; }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 ** get_address_of_m_RenderGraph_2() { return &___m_RenderGraph_2; }
	inline void set_m_RenderGraph_2(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * value)
	{
		___m_RenderGraph_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraph_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_3() { return static_cast<int32_t>(offsetof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056, ___m_Disposed_3)); }
	inline bool get_m_Disposed_3() const { return ___m_Disposed_3; }
	inline bool* get_address_of_m_Disposed_3() { return &___m_Disposed_3; }
	inline void set_m_Disposed_3(bool value)
	{
		___m_Disposed_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshaled_pinvoke
{
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	int32_t ___m_Disposed_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_marshaled_com
{
	RenderGraphPass_t74E069EBD82C699F2D70EC8C0D5D16A8AF5EB520 * ___m_RenderPass_0;
	RenderGraphResourceRegistry_t25B71B4D5C2C9AE9DC7ED50F3D95AE125668EF66 * ___m_Resources_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
	int32_t ___m_Disposed_3;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent
struct RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent::m_Indentation
	int32_t ___m_Indentation_0;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogger UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent::m_Logger
	RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * ___m_Logger_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent::m_Disposed
	bool ___m_Disposed_2;

public:
	inline static int32_t get_offset_of_m_Indentation_0() { return static_cast<int32_t>(offsetof(RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27, ___m_Indentation_0)); }
	inline int32_t get_m_Indentation_0() const { return ___m_Indentation_0; }
	inline int32_t* get_address_of_m_Indentation_0() { return &___m_Indentation_0; }
	inline void set_m_Indentation_0(int32_t value)
	{
		___m_Indentation_0 = value;
	}

	inline static int32_t get_offset_of_m_Logger_1() { return static_cast<int32_t>(offsetof(RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27, ___m_Logger_1)); }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * get_m_Logger_1() const { return ___m_Logger_1; }
	inline RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 ** get_address_of_m_Logger_1() { return &___m_Logger_1; }
	inline void set_m_Logger_1(RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * value)
	{
		___m_Logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Disposed_2() { return static_cast<int32_t>(offsetof(RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27, ___m_Disposed_2)); }
	inline bool get_m_Disposed_2() const { return ___m_Disposed_2; }
	inline bool* get_address_of_m_Disposed_2() { return &___m_Disposed_2; }
	inline void set_m_Disposed_2(bool value)
	{
		___m_Disposed_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent
struct RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshaled_pinvoke
{
	int32_t ___m_Indentation_0;
	RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * ___m_Logger_1;
	int32_t ___m_Disposed_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent
struct RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_marshaled_com
{
	int32_t ___m_Indentation_0;
	RenderGraphLogger_t5D35C0198A0D27368C971A2B67DD680988E32B12 * ___m_Logger_1;
	int32_t ___m_Disposed_2;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope
struct RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65 
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope::m_Disposed
	bool ___m_Disposed_0;
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope::m_Sampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___m_Sampler_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraph UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope::m_RenderGraph
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;

public:
	inline static int32_t get_offset_of_m_Disposed_0() { return static_cast<int32_t>(offsetof(RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65, ___m_Disposed_0)); }
	inline bool get_m_Disposed_0() const { return ___m_Disposed_0; }
	inline bool* get_address_of_m_Disposed_0() { return &___m_Disposed_0; }
	inline void set_m_Disposed_0(bool value)
	{
		___m_Disposed_0 = value;
	}

	inline static int32_t get_offset_of_m_Sampler_1() { return static_cast<int32_t>(offsetof(RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65, ___m_Sampler_1)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_m_Sampler_1() const { return ___m_Sampler_1; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_m_Sampler_1() { return &___m_Sampler_1; }
	inline void set_m_Sampler_1(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___m_Sampler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sampler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_RenderGraph_2() { return static_cast<int32_t>(offsetof(RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65, ___m_RenderGraph_2)); }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * get_m_RenderGraph_2() const { return ___m_RenderGraph_2; }
	inline RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 ** get_address_of_m_RenderGraph_2() { return &___m_RenderGraph_2; }
	inline void set_m_RenderGraph_2(RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * value)
	{
		___m_RenderGraph_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RenderGraph_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope
struct RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshaled_pinvoke
{
	int32_t ___m_Disposed_0;
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___m_Sampler_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope
struct RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_marshaled_com
{
	int32_t ___m_Disposed_0;
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___m_Sampler_1;
	RenderGraph_t739020B1113ED6E3169705DA4FC71EA5CB2E32B3 * ___m_RenderGraph_2;
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


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m64387D2D55E86DABEC832FDADDA12CBF1C7C1D5E(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m96AACCD499BB14F3DBACD6CA120C283ABCE73263(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 * comReturnValue) = 0;
};

// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CipherMode
struct CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CspProviderFlags
struct CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.MSAASamples
struct MSAASamples_tDB324C13B7E64F38126D3AF67CB19A7A1A0C613A 
{
public:
	// System.Int32 UnityEngine.Rendering.MSAASamples::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MSAASamples_tDB324C13B7E64F38126D3AF67CB19A7A1A0C613A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Security.Cryptography.PaddingMode
struct PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28  : public RIPEMD160_tC46FCE0C691B3F2E543969F484A39F7B3B6600C0
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int64 System.Security.Cryptography.RIPEMD160Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_stateMD160
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____stateMD160_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_blockDWords
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____blockDWords_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateMD160_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____stateMD160_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__stateMD160_6() const { return ____stateMD160_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__stateMD160_6() { return &____stateMD160_6; }
	inline void set__stateMD160_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____stateMD160_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateMD160_6), (void*)value);
	}

	inline static int32_t get_offset_of__blockDWords_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____blockDWords_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__blockDWords_7() const { return ____blockDWords_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__blockDWords_7() { return &____blockDWords_7; }
	inline void set__blockDWords_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____blockDWords_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____blockDWords_7), (void*)value);
	}
};


// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1  : public RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_0), (void*)value);
	}
};


// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___d_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___p_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___q_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___dp_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___dq_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___qInv_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___n_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * ___e_12;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * ___KeyGenerated_13;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_3() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___keypairGenerated_3)); }
	inline bool get_keypairGenerated_3() const { return ___keypairGenerated_3; }
	inline bool* get_address_of_keypairGenerated_3() { return &___keypairGenerated_3; }
	inline void set_keypairGenerated_3(bool value)
	{
		___keypairGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_d_5() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___d_5)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_d_5() const { return ___d_5; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_d_5() { return &___d_5; }
	inline void set_d_5(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___d_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_5), (void*)value);
	}

	inline static int32_t get_offset_of_p_6() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___p_6)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_p_6() const { return ___p_6; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_p_6() { return &___p_6; }
	inline void set_p_6(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___p_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p_6), (void*)value);
	}

	inline static int32_t get_offset_of_q_7() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___q_7)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_q_7() const { return ___q_7; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_q_7() { return &___q_7; }
	inline void set_q_7(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___q_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q_7), (void*)value);
	}

	inline static int32_t get_offset_of_dp_8() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___dp_8)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_dp_8() const { return ___dp_8; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_dp_8() { return &___dp_8; }
	inline void set_dp_8(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___dp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dp_8), (void*)value);
	}

	inline static int32_t get_offset_of_dq_9() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___dq_9)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_dq_9() const { return ___dq_9; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_dq_9() { return &___dq_9; }
	inline void set_dq_9(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___dq_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dq_9), (void*)value);
	}

	inline static int32_t get_offset_of_qInv_10() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___qInv_10)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_qInv_10() const { return ___qInv_10; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_qInv_10() { return &___qInv_10; }
	inline void set_qInv_10(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___qInv_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qInv_10), (void*)value);
	}

	inline static int32_t get_offset_of_n_11() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___n_11)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_n_11() const { return ___n_11; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_n_11() { return &___n_11; }
	inline void set_n_11(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___n_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___n_11), (void*)value);
	}

	inline static int32_t get_offset_of_e_12() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___e_12)); }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * get_e_12() const { return ___e_12; }
	inline BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D ** get_address_of_e_12() { return &___e_12; }
	inline void set_e_12(BigInteger_t3E22C5D54A28436FF4292EC337AF146B2F38379D * value)
	{
		___e_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_12), (void*)value);
	}

	inline static int32_t get_offset_of_KeyGenerated_13() { return static_cast<int32_t>(offsetof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741, ___KeyGenerated_13)); }
	inline KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * get_KeyGenerated_13() const { return ___KeyGenerated_13; }
	inline KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA ** get_address_of_KeyGenerated_13() { return &___KeyGenerated_13; }
	inline void set_KeyGenerated_13(KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * value)
	{
		___KeyGenerated_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyGenerated_13), (void*)value);
	}
};


// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_tC3692E7FD32FEA702B9BD6F4B445543E217B6B22 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___d_6)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_d_6() const { return ___d_6; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_6), (void*)value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___p_7)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_p_7() const { return ___p_7; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p_7), (void*)value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___q_8)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_q_8() const { return ___q_8; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q_8), (void*)value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___dp_9)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dp_9), (void*)value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___dq_10)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dq_10), (void*)value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___qInv_11)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qInv_11), (void*)value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___n_12)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_n_12() const { return ___n_12; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___n_12), (void*)value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___e_13)); }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * get_e_13() const { return ___e_13; }
	inline BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_tEBE1926757E30C0CDC1375751529943D3441FF00 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___e_13), (void*)value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_tC3692E7FD32FEA702B9BD6F4B445543E217B6B22 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_tC3692E7FD32FEA702B9BD6F4B445543E217B6B22 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_tC3692E7FD32FEA702B9BD6F4B445543E217B6B22 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyGenerated_14), (void*)value);
	}
};


// UnityEngine.Rendering.RTHandleProperties
struct RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247 
{
public:
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::previousViewportSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___previousViewportSize_0;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::previousRenderTargetSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___previousRenderTargetSize_1;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::currentViewportSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___currentViewportSize_2;
	// UnityEngine.Vector2Int UnityEngine.Rendering.RTHandleProperties::currentRenderTargetSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___currentRenderTargetSize_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.RTHandleProperties::rtHandleScale
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rtHandleScale_4;

public:
	inline static int32_t get_offset_of_previousViewportSize_0() { return static_cast<int32_t>(offsetof(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247, ___previousViewportSize_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_previousViewportSize_0() const { return ___previousViewportSize_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_previousViewportSize_0() { return &___previousViewportSize_0; }
	inline void set_previousViewportSize_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___previousViewportSize_0 = value;
	}

	inline static int32_t get_offset_of_previousRenderTargetSize_1() { return static_cast<int32_t>(offsetof(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247, ___previousRenderTargetSize_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_previousRenderTargetSize_1() const { return ___previousRenderTargetSize_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_previousRenderTargetSize_1() { return &___previousRenderTargetSize_1; }
	inline void set_previousRenderTargetSize_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___previousRenderTargetSize_1 = value;
	}

	inline static int32_t get_offset_of_currentViewportSize_2() { return static_cast<int32_t>(offsetof(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247, ___currentViewportSize_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_currentViewportSize_2() const { return ___currentViewportSize_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_currentViewportSize_2() { return &___currentViewportSize_2; }
	inline void set_currentViewportSize_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___currentViewportSize_2 = value;
	}

	inline static int32_t get_offset_of_currentRenderTargetSize_3() { return static_cast<int32_t>(offsetof(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247, ___currentRenderTargetSize_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_currentRenderTargetSize_3() const { return ___currentRenderTargetSize_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_currentRenderTargetSize_3() { return &___currentRenderTargetSize_3; }
	inline void set_currentRenderTargetSize_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___currentRenderTargetSize_3 = value;
	}

	inline static int32_t get_offset_of_rtHandleScale_4() { return static_cast<int32_t>(offsetof(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247, ___rtHandleScale_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_rtHandleScale_4() const { return ___rtHandleScale_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_rtHandleScale_4() { return &___rtHandleScale_4; }
	inline void set_rtHandleScale_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___rtHandleScale_4 = value;
	}
};


// UnityEngine.Rendering.RenderBufferStoreAction
struct RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderBufferStoreAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderBufferStoreAction_t6C9B7C07638B3B226C3F19899A810CE32595D454, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.StoreActionsOptimization
struct StoreActionsOptimization_t7FA48A3E2A61B553D3F665D22810BC18DC470095 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.StoreActionsOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreActionsOptimization_t7FA48A3E2A61B553D3F665D22810BC18DC470095, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_3)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_3), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_8)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_8), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.RTHandleSystem::m_HardwareDynamicResRequested
	bool ___m_HardwareDynamicResRequested_0;
	// System.Boolean UnityEngine.Rendering.RTHandleSystem::m_ScaledRTSupportsMSAA
	bool ___m_ScaledRTSupportsMSAA_1;
	// UnityEngine.Rendering.MSAASamples UnityEngine.Rendering.RTHandleSystem::m_ScaledRTCurrentMSAASamples
	int32_t ___m_ScaledRTCurrentMSAASamples_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.RTHandle> UnityEngine.Rendering.RTHandleSystem::m_AutoSizedRTs
	HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * ___m_AutoSizedRTs_3;
	// UnityEngine.Rendering.RTHandle[] UnityEngine.Rendering.RTHandleSystem::m_AutoSizedRTsArray
	RTHandleU5BU5D_tD90C5A7DBC9125D6BD226EB018B294CA604E8DA3* ___m_AutoSizedRTsArray_4;
	// System.Collections.Generic.HashSet`1<UnityEngine.Rendering.RTHandle> UnityEngine.Rendering.RTHandleSystem::m_ResizeOnDemandRTs
	HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * ___m_ResizeOnDemandRTs_5;
	// UnityEngine.Rendering.RTHandleProperties UnityEngine.Rendering.RTHandleSystem::m_RTHandleProperties
	RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247  ___m_RTHandleProperties_6;
	// System.Int32 UnityEngine.Rendering.RTHandleSystem::m_MaxWidths
	int32_t ___m_MaxWidths_7;
	// System.Int32 UnityEngine.Rendering.RTHandleSystem::m_MaxHeights
	int32_t ___m_MaxHeights_8;

public:
	inline static int32_t get_offset_of_m_HardwareDynamicResRequested_0() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_HardwareDynamicResRequested_0)); }
	inline bool get_m_HardwareDynamicResRequested_0() const { return ___m_HardwareDynamicResRequested_0; }
	inline bool* get_address_of_m_HardwareDynamicResRequested_0() { return &___m_HardwareDynamicResRequested_0; }
	inline void set_m_HardwareDynamicResRequested_0(bool value)
	{
		___m_HardwareDynamicResRequested_0 = value;
	}

	inline static int32_t get_offset_of_m_ScaledRTSupportsMSAA_1() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_ScaledRTSupportsMSAA_1)); }
	inline bool get_m_ScaledRTSupportsMSAA_1() const { return ___m_ScaledRTSupportsMSAA_1; }
	inline bool* get_address_of_m_ScaledRTSupportsMSAA_1() { return &___m_ScaledRTSupportsMSAA_1; }
	inline void set_m_ScaledRTSupportsMSAA_1(bool value)
	{
		___m_ScaledRTSupportsMSAA_1 = value;
	}

	inline static int32_t get_offset_of_m_ScaledRTCurrentMSAASamples_2() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_ScaledRTCurrentMSAASamples_2)); }
	inline int32_t get_m_ScaledRTCurrentMSAASamples_2() const { return ___m_ScaledRTCurrentMSAASamples_2; }
	inline int32_t* get_address_of_m_ScaledRTCurrentMSAASamples_2() { return &___m_ScaledRTCurrentMSAASamples_2; }
	inline void set_m_ScaledRTCurrentMSAASamples_2(int32_t value)
	{
		___m_ScaledRTCurrentMSAASamples_2 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizedRTs_3() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_AutoSizedRTs_3)); }
	inline HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * get_m_AutoSizedRTs_3() const { return ___m_AutoSizedRTs_3; }
	inline HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 ** get_address_of_m_AutoSizedRTs_3() { return &___m_AutoSizedRTs_3; }
	inline void set_m_AutoSizedRTs_3(HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * value)
	{
		___m_AutoSizedRTs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AutoSizedRTs_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_AutoSizedRTsArray_4() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_AutoSizedRTsArray_4)); }
	inline RTHandleU5BU5D_tD90C5A7DBC9125D6BD226EB018B294CA604E8DA3* get_m_AutoSizedRTsArray_4() const { return ___m_AutoSizedRTsArray_4; }
	inline RTHandleU5BU5D_tD90C5A7DBC9125D6BD226EB018B294CA604E8DA3** get_address_of_m_AutoSizedRTsArray_4() { return &___m_AutoSizedRTsArray_4; }
	inline void set_m_AutoSizedRTsArray_4(RTHandleU5BU5D_tD90C5A7DBC9125D6BD226EB018B294CA604E8DA3* value)
	{
		___m_AutoSizedRTsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AutoSizedRTsArray_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ResizeOnDemandRTs_5() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_ResizeOnDemandRTs_5)); }
	inline HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * get_m_ResizeOnDemandRTs_5() const { return ___m_ResizeOnDemandRTs_5; }
	inline HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 ** get_address_of_m_ResizeOnDemandRTs_5() { return &___m_ResizeOnDemandRTs_5; }
	inline void set_m_ResizeOnDemandRTs_5(HashSet_1_t48D3F752B2503EE77A70BAFE6AE524ECB7CAA169 * value)
	{
		___m_ResizeOnDemandRTs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResizeOnDemandRTs_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RTHandleProperties_6() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_RTHandleProperties_6)); }
	inline RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247  get_m_RTHandleProperties_6() const { return ___m_RTHandleProperties_6; }
	inline RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247 * get_address_of_m_RTHandleProperties_6() { return &___m_RTHandleProperties_6; }
	inline void set_m_RTHandleProperties_6(RTHandleProperties_t7477DA0FC22B89836C6D4C268782BDAB4E4B9247  value)
	{
		___m_RTHandleProperties_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxWidths_7() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_MaxWidths_7)); }
	inline int32_t get_m_MaxWidths_7() const { return ___m_MaxWidths_7; }
	inline int32_t* get_address_of_m_MaxWidths_7() { return &___m_MaxWidths_7; }
	inline void set_m_MaxWidths_7(int32_t value)
	{
		___m_MaxWidths_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxHeights_8() { return static_cast<int32_t>(offsetof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952, ___m_MaxHeights_8)); }
	inline int32_t get_m_MaxHeights_8() const { return ___m_MaxHeights_8; }
	inline int32_t* get_address_of_m_MaxHeights_8() { return &___m_MaxHeights_8; }
	inline void set_m_MaxHeights_8(int32_t value)
	{
		___m_MaxHeights_8 = value;
	}
};


// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___algo_0)); }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___algo_0), (void*)value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_3), (void*)value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp2_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp2_4), (void*)value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workBuff_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workBuff_5), (void*)value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workout_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workout_6), (void*)value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ____rng_11)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_11), (void*)value);
	}
};


// System.Security.Cryptography.RC2
struct RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_9;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_9() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9, ___EffectiveKeySizeValue_9)); }
	inline int32_t get_EffectiveKeySizeValue_9() const { return ___EffectiveKeySizeValue_9; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_9() { return &___EffectiveKeySizeValue_9; }
	inline void set_EffectiveKeySizeValue_9(int32_t value)
	{
		___EffectiveKeySizeValue_9 = value;
	}
};

struct RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_11), (void*)value);
	}
};


// System.Security.Cryptography.RC2Transform
struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1  : public SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___K_16)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_16), (void*)value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pitable_18), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.RenderTargetHandle
struct RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.RenderTargetHandle::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_0;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.RenderTargetHandle::<rtid>k__BackingField
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___U3CrtidU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C, ___U3CidU3Ek__BackingField_0)); }
	inline int32_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int32_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CrtidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C, ___U3CrtidU3Ek__BackingField_1)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_U3CrtidU3Ek__BackingField_1() const { return ___U3CrtidU3Ek__BackingField_1; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_U3CrtidU3Ek__BackingField_1() { return &___U3CrtidU3Ek__BackingField_1; }
	inline void set_U3CrtidU3Ek__BackingField_1(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___U3CrtidU3Ek__BackingField_1 = value;
	}
};

struct RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Rendering.Universal.RenderTargetHandle::CameraTarget
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___CameraTarget_2;

public:
	inline static int32_t get_offset_of_CameraTarget_2() { return static_cast<int32_t>(offsetof(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C_StaticFields, ___CameraTarget_2)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_CameraTarget_2() const { return ___CameraTarget_2; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_CameraTarget_2() { return &___CameraTarget_2; }
	inline void set_CameraTarget_2(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___CameraTarget_2 = value;
	}
};


// UnityEngine.Rendering.Universal.ScriptableRenderer
struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Rendering.Universal.ScriptableRenderer::<profilingExecute>k__BackingField
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___U3CprofilingExecuteU3Ek__BackingField_0;
	// UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures UnityEngine.Rendering.Universal.ScriptableRenderer::<supportedRenderingFeatures>k__BackingField
	RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2;
	// UnityEngine.Rendering.GraphicsDeviceType[] UnityEngine.Rendering.Universal.ScriptableRenderer::<unsupportedGraphicsDeviceTypes>k__BackingField
	GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.ScriptableRenderer::m_StoreActionsOptimizationSetting
	int32_t ___m_StoreActionsOptimizationSetting_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveRenderPassQueue
	List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * ___m_ActiveRenderPassQueue_7;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRenderer::m_RendererFeatures
	List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * ___m_RendererFeatures_8;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraColorTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraColorTarget_9;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_CameraDepthTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_CameraDepthTarget_10;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraColorTargetIsBound
	bool ___m_FirstTimeCameraColorTargetIsBound_11;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_FirstTimeCameraDepthTargetIsBound
	bool ___m_FirstTimeCameraDepthTargetIsBound_12;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_IsPipelineExecuting
	bool ___m_IsPipelineExecuting_13;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::isCameraColorTargetValid
	bool ___isCameraColorTargetValid_14;

public:
	inline static int32_t get_offset_of_U3CprofilingExecuteU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CprofilingExecuteU3Ek__BackingField_0)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_U3CprofilingExecuteU3Ek__BackingField_0() const { return ___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_U3CprofilingExecuteU3Ek__BackingField_0() { return &___U3CprofilingExecuteU3Ek__BackingField_0; }
	inline void set_U3CprofilingExecuteU3Ek__BackingField_0(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___U3CprofilingExecuteU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprofilingExecuteU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2)); }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * get_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() const { return ___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 ** get_address_of_U3CsupportedRenderingFeaturesU3Ek__BackingField_2() { return &___U3CsupportedRenderingFeaturesU3Ek__BackingField_2; }
	inline void set_U3CsupportedRenderingFeaturesU3Ek__BackingField_2(RenderingFeatures_t210769EB70FCD0D58F6DF9CA94EFB10D5D1E4404 * value)
	{
		___U3CsupportedRenderingFeaturesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsupportedRenderingFeaturesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3)); }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* get_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() const { return ___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A** get_address_of_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3() { return &___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3; }
	inline void set_U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3(GraphicsDeviceTypeU5BU5D_t5FA435C7B129ADED0D345FA0600A22693748900A* value)
	{
		___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunsupportedGraphicsDeviceTypesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_StoreActionsOptimizationSetting_4() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_StoreActionsOptimizationSetting_4)); }
	inline int32_t get_m_StoreActionsOptimizationSetting_4() const { return ___m_StoreActionsOptimizationSetting_4; }
	inline int32_t* get_address_of_m_StoreActionsOptimizationSetting_4() { return &___m_StoreActionsOptimizationSetting_4; }
	inline void set_m_StoreActionsOptimizationSetting_4(int32_t value)
	{
		___m_StoreActionsOptimizationSetting_4 = value;
	}

	inline static int32_t get_offset_of_m_ActiveRenderPassQueue_7() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_ActiveRenderPassQueue_7)); }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * get_m_ActiveRenderPassQueue_7() const { return ___m_ActiveRenderPassQueue_7; }
	inline List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F ** get_address_of_m_ActiveRenderPassQueue_7() { return &___m_ActiveRenderPassQueue_7; }
	inline void set_m_ActiveRenderPassQueue_7(List_1_tE77A7FBBB9C59E79C9FB1BF36AA369E6A3986C3F * value)
	{
		___m_ActiveRenderPassQueue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveRenderPassQueue_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_RendererFeatures_8() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_RendererFeatures_8)); }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * get_m_RendererFeatures_8() const { return ___m_RendererFeatures_8; }
	inline List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 ** get_address_of_m_RendererFeatures_8() { return &___m_RendererFeatures_8; }
	inline void set_m_RendererFeatures_8(List_1_tBCF0F141DE9E888F8E876CC61E2D1031229498E0 * value)
	{
		___m_RendererFeatures_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RendererFeatures_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraColorTarget_9() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraColorTarget_9)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraColorTarget_9() const { return ___m_CameraColorTarget_9; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraColorTarget_9() { return &___m_CameraColorTarget_9; }
	inline void set_m_CameraColorTarget_9(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraColorTarget_9 = value;
	}

	inline static int32_t get_offset_of_m_CameraDepthTarget_10() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_CameraDepthTarget_10)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_CameraDepthTarget_10() const { return ___m_CameraDepthTarget_10; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_CameraDepthTarget_10() { return &___m_CameraDepthTarget_10; }
	inline void set_m_CameraDepthTarget_10(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_CameraDepthTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraColorTargetIsBound_11() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraColorTargetIsBound_11)); }
	inline bool get_m_FirstTimeCameraColorTargetIsBound_11() const { return ___m_FirstTimeCameraColorTargetIsBound_11; }
	inline bool* get_address_of_m_FirstTimeCameraColorTargetIsBound_11() { return &___m_FirstTimeCameraColorTargetIsBound_11; }
	inline void set_m_FirstTimeCameraColorTargetIsBound_11(bool value)
	{
		___m_FirstTimeCameraColorTargetIsBound_11 = value;
	}

	inline static int32_t get_offset_of_m_FirstTimeCameraDepthTargetIsBound_12() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_FirstTimeCameraDepthTargetIsBound_12)); }
	inline bool get_m_FirstTimeCameraDepthTargetIsBound_12() const { return ___m_FirstTimeCameraDepthTargetIsBound_12; }
	inline bool* get_address_of_m_FirstTimeCameraDepthTargetIsBound_12() { return &___m_FirstTimeCameraDepthTargetIsBound_12; }
	inline void set_m_FirstTimeCameraDepthTargetIsBound_12(bool value)
	{
		___m_FirstTimeCameraDepthTargetIsBound_12 = value;
	}

	inline static int32_t get_offset_of_m_IsPipelineExecuting_13() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___m_IsPipelineExecuting_13)); }
	inline bool get_m_IsPipelineExecuting_13() const { return ___m_IsPipelineExecuting_13; }
	inline bool* get_address_of_m_IsPipelineExecuting_13() { return &___m_IsPipelineExecuting_13; }
	inline void set_m_IsPipelineExecuting_13(bool value)
	{
		___m_IsPipelineExecuting_13 = value;
	}

	inline static int32_t get_offset_of_isCameraColorTargetValid_14() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133, ___isCameraColorTargetValid_14)); }
	inline bool get_isCameraColorTargetValid_14() const { return ___isCameraColorTargetValid_14; }
	inline bool* get_address_of_isCameraColorTargetValid_14() { return &___isCameraColorTargetValid_14; }
	inline void set_isCameraColorTargetValid_14(bool value)
	{
		___isCameraColorTargetValid_14 = value;
	}
};

struct ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields
{
public:
	// UnityEngine.Rendering.Universal.ScriptableRenderer UnityEngine.Rendering.Universal.ScriptableRenderer::current
	ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * ___current_1;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRenderer::m_UseOptimizedStoreActions
	bool ___m_UseOptimizedStoreActions_5;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorAttachments
	RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* ___m_ActiveColorAttachments_15;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthAttachment
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___m_ActiveDepthAttachment_16;
	// UnityEngine.Rendering.RenderBufferStoreAction[] UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveColorStoreActions
	RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* ___m_ActiveColorStoreActions_17;
	// UnityEngine.Rendering.RenderBufferStoreAction UnityEngine.Rendering.Universal.ScriptableRenderer::m_ActiveDepthStoreAction
	int32_t ___m_ActiveDepthStoreAction_18;
	// UnityEngine.Rendering.RenderTargetIdentifier[][] UnityEngine.Rendering.Universal.ScriptableRenderer::m_TrimmedColorAttachmentCopies
	RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* ___m_TrimmedColorAttachmentCopies_19;

public:
	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___current_1)); }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * get_current_1() const { return ___current_1; }
	inline ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseOptimizedStoreActions_5() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_UseOptimizedStoreActions_5)); }
	inline bool get_m_UseOptimizedStoreActions_5() const { return ___m_UseOptimizedStoreActions_5; }
	inline bool* get_address_of_m_UseOptimizedStoreActions_5() { return &___m_UseOptimizedStoreActions_5; }
	inline void set_m_UseOptimizedStoreActions_5(bool value)
	{
		___m_UseOptimizedStoreActions_5 = value;
	}

	inline static int32_t get_offset_of_m_ActiveColorAttachments_15() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorAttachments_15)); }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* get_m_ActiveColorAttachments_15() const { return ___m_ActiveColorAttachments_15; }
	inline RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17** get_address_of_m_ActiveColorAttachments_15() { return &___m_ActiveColorAttachments_15; }
	inline void set_m_ActiveColorAttachments_15(RenderTargetIdentifierU5BU5D_tBA2016AC6826F6ADBDB1A83D237BD6B08D857C17* value)
	{
		___m_ActiveColorAttachments_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorAttachments_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveDepthAttachment_16() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveDepthAttachment_16)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_m_ActiveDepthAttachment_16() const { return ___m_ActiveDepthAttachment_16; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_m_ActiveDepthAttachment_16() { return &___m_ActiveDepthAttachment_16; }
	inline void set_m_ActiveDepthAttachment_16(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___m_ActiveDepthAttachment_16 = value;
	}

	inline static int32_t get_offset_of_m_ActiveColorStoreActions_17() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveColorStoreActions_17)); }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* get_m_ActiveColorStoreActions_17() const { return ___m_ActiveColorStoreActions_17; }
	inline RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF** get_address_of_m_ActiveColorStoreActions_17() { return &___m_ActiveColorStoreActions_17; }
	inline void set_m_ActiveColorStoreActions_17(RenderBufferStoreActionU5BU5D_t705A51FC56751EAFDABE1033BBDEF052671F97CF* value)
	{
		___m_ActiveColorStoreActions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActiveColorStoreActions_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActiveDepthStoreAction_18() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_ActiveDepthStoreAction_18)); }
	inline int32_t get_m_ActiveDepthStoreAction_18() const { return ___m_ActiveDepthStoreAction_18; }
	inline int32_t* get_address_of_m_ActiveDepthStoreAction_18() { return &___m_ActiveDepthStoreAction_18; }
	inline void set_m_ActiveDepthStoreAction_18(int32_t value)
	{
		___m_ActiveDepthStoreAction_18 = value;
	}

	inline static int32_t get_offset_of_m_TrimmedColorAttachmentCopies_19() { return static_cast<int32_t>(offsetof(ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133_StaticFields, ___m_TrimmedColorAttachmentCopies_19)); }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* get_m_TrimmedColorAttachmentCopies_19() const { return ___m_TrimmedColorAttachmentCopies_19; }
	inline RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE** get_address_of_m_TrimmedColorAttachmentCopies_19() { return &___m_TrimmedColorAttachmentCopies_19; }
	inline void set_m_TrimmedColorAttachmentCopies_19(RenderTargetIdentifierU5BU5DU5BU5D_t1A562F1B3BD9E1D98622DD9E49BCFA03BB538DEE* value)
	{
		___m_TrimmedColorAttachmentCopies_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrimmedColorAttachmentCopies_19), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ScriptableRendererFeature
struct ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererFeature::m_Active
	bool ___m_Active_4;

public:
	inline static int32_t get_offset_of_m_Active_4() { return static_cast<int32_t>(offsetof(ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447, ___m_Active_4)); }
	inline bool get_m_Active_4() const { return ___m_Active_4; }
	inline bool* get_address_of_m_Active_4() { return &___m_Active_4; }
	inline void set_m_Active_4(bool value)
	{
		___m_Active_4 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009  : public RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::m_use40bitSalt
	bool ___m_use40bitSalt_12;

public:
	inline static int32_t get_offset_of_m_use40bitSalt_12() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009, ___m_use40bitSalt_12)); }
	inline bool get_m_use40bitSalt_12() const { return ___m_use40bitSalt_12; }
	inline bool* get_address_of_m_use40bitSalt_12() { return &___m_use40bitSalt_12; }
	inline void set_m_use40bitSalt_12(bool value)
	{
		___m_use40bitSalt_12 = value;
	}
};

struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2CryptoServiceProvider::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_13;

public:
	inline static int32_t get_offset_of_s_legalKeySizes_13() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_StaticFields, ___s_legalKeySizes_13)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_13() const { return ___s_legalKeySizes_13; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_13() { return &___s_legalKeySizes_13; }
	inline void set_s_legalKeySizes_13(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_13), (void*)value);
	}
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.RenderObjects
struct RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6  : public ScriptableRendererFeature_t8A47B318A156098C19A43328CF96F463C67F7447
{
public:
	// UnityEngine.Experimental.Rendering.Universal.RenderObjects/RenderObjectsSettings UnityEngine.Experimental.Rendering.Universal.RenderObjects::settings
	RenderObjectsSettings_t369ECAF699FFAC3ED4A1EA64D2C5B49646255124 * ___settings_5;
	// UnityEngine.Experimental.Rendering.Universal.RenderObjectsPass UnityEngine.Experimental.Rendering.Universal.RenderObjects::renderObjectsPass
	RenderObjectsPass_t6E5BE77329470D49DB11AE0353E977A7DFA0BFC7 * ___renderObjectsPass_6;

public:
	inline static int32_t get_offset_of_settings_5() { return static_cast<int32_t>(offsetof(RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6, ___settings_5)); }
	inline RenderObjectsSettings_t369ECAF699FFAC3ED4A1EA64D2C5B49646255124 * get_settings_5() const { return ___settings_5; }
	inline RenderObjectsSettings_t369ECAF699FFAC3ED4A1EA64D2C5B49646255124 ** get_address_of_settings_5() { return &___settings_5; }
	inline void set_settings_5(RenderObjectsSettings_t369ECAF699FFAC3ED4A1EA64D2C5B49646255124 * value)
	{
		___settings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_5), (void*)value);
	}

	inline static int32_t get_offset_of_renderObjectsPass_6() { return static_cast<int32_t>(offsetof(RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6, ___renderObjectsPass_6)); }
	inline RenderObjectsPass_t6E5BE77329470D49DB11AE0353E977A7DFA0BFC7 * get_renderObjectsPass_6() const { return ___renderObjectsPass_6; }
	inline RenderObjectsPass_t6E5BE77329470D49DB11AE0353E977A7DFA0BFC7 ** get_address_of_renderObjectsPass_6() { return &___renderObjectsPass_6; }
	inline void set_renderObjectsPass_6(RenderObjectsPass_t6E5BE77329470D49DB11AE0353E977A7DFA0BFC7 * value)
	{
		___renderObjectsPass_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderObjectsPass_6), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.Renderer2D
struct Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8  : public ScriptableRenderer_tB2B4CFA9589461C634B8837207547655ED6E2133
{
public:
	// UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_ColorGradingLutPass
	ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * ___m_ColorGradingLutPass_20;
	// UnityEngine.Experimental.Rendering.Universal.Render2DLightingPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_Render2DLightingPass
	Render2DLightingPass_tF3581BC27E75CC1524BBF6179F0BAE6C23CA9B45 * ___m_Render2DLightingPass_21;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_PostProcessPass
	PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * ___m_PostProcessPass_22;
	// UnityEngine.Experimental.Rendering.Universal.PixelPerfectBackgroundPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_PixelPerfectBackgroundPass
	PixelPerfectBackgroundPass_tF2AC14F08D1E822A1A52FA883ED7C6DCAD9D862B * ___m_PixelPerfectBackgroundPass_23;
	// UnityEngine.Rendering.Universal.Internal.FinalBlitPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_FinalBlitPass
	FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * ___m_FinalBlitPass_24;
	// UnityEngine.Rendering.Universal.Internal.PostProcessPass UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_FinalPostProcessPass
	PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * ___m_FinalPostProcessPass_25;
	// UnityEngine.Experimental.Rendering.Universal.Light2DCullResult UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_LightCullResult
	Light2DCullResult_t4A7768B3D2E997DBCC1479AD9344DCE80CB8F90A * ___m_LightCullResult_26;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_UseDepthStencilBuffer
	bool ___m_UseDepthStencilBuffer_28;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_CreateColorTexture
	bool ___m_CreateColorTexture_29;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_CreateDepthTexture
	bool ___m_CreateDepthTexture_30;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Experimental.Rendering.Universal.Renderer2D::k_ColorTextureHandle
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___k_ColorTextureHandle_31;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Experimental.Rendering.Universal.Renderer2D::k_DepthTextureHandle
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___k_DepthTextureHandle_32;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Experimental.Rendering.Universal.Renderer2D::k_AfterPostProcessColorHandle
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___k_AfterPostProcessColorHandle_33;
	// UnityEngine.Rendering.Universal.RenderTargetHandle UnityEngine.Experimental.Rendering.Universal.Renderer2D::k_ColorGradingLutHandle
	RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  ___k_ColorGradingLutHandle_34;
	// UnityEngine.Material UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_BlitMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_BlitMaterial_35;
	// UnityEngine.Experimental.Rendering.Universal.Renderer2DData UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_Renderer2DData
	Renderer2DData_tC3A48CA3622A4C1F56B5C834792F547B5E823464 * ___m_Renderer2DData_36;

public:
	inline static int32_t get_offset_of_m_ColorGradingLutPass_20() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_ColorGradingLutPass_20)); }
	inline ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * get_m_ColorGradingLutPass_20() const { return ___m_ColorGradingLutPass_20; }
	inline ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B ** get_address_of_m_ColorGradingLutPass_20() { return &___m_ColorGradingLutPass_20; }
	inline void set_m_ColorGradingLutPass_20(ColorGradingLutPass_tC58ADFC3B582B24D7BD68B4F71F6DA447319FD8B * value)
	{
		___m_ColorGradingLutPass_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorGradingLutPass_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Render2DLightingPass_21() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_Render2DLightingPass_21)); }
	inline Render2DLightingPass_tF3581BC27E75CC1524BBF6179F0BAE6C23CA9B45 * get_m_Render2DLightingPass_21() const { return ___m_Render2DLightingPass_21; }
	inline Render2DLightingPass_tF3581BC27E75CC1524BBF6179F0BAE6C23CA9B45 ** get_address_of_m_Render2DLightingPass_21() { return &___m_Render2DLightingPass_21; }
	inline void set_m_Render2DLightingPass_21(Render2DLightingPass_tF3581BC27E75CC1524BBF6179F0BAE6C23CA9B45 * value)
	{
		___m_Render2DLightingPass_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Render2DLightingPass_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_PostProcessPass_22() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_PostProcessPass_22)); }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * get_m_PostProcessPass_22() const { return ___m_PostProcessPass_22; }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D ** get_address_of_m_PostProcessPass_22() { return &___m_PostProcessPass_22; }
	inline void set_m_PostProcessPass_22(PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * value)
	{
		___m_PostProcessPass_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PostProcessPass_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_PixelPerfectBackgroundPass_23() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_PixelPerfectBackgroundPass_23)); }
	inline PixelPerfectBackgroundPass_tF2AC14F08D1E822A1A52FA883ED7C6DCAD9D862B * get_m_PixelPerfectBackgroundPass_23() const { return ___m_PixelPerfectBackgroundPass_23; }
	inline PixelPerfectBackgroundPass_tF2AC14F08D1E822A1A52FA883ED7C6DCAD9D862B ** get_address_of_m_PixelPerfectBackgroundPass_23() { return &___m_PixelPerfectBackgroundPass_23; }
	inline void set_m_PixelPerfectBackgroundPass_23(PixelPerfectBackgroundPass_tF2AC14F08D1E822A1A52FA883ED7C6DCAD9D862B * value)
	{
		___m_PixelPerfectBackgroundPass_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PixelPerfectBackgroundPass_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_FinalBlitPass_24() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_FinalBlitPass_24)); }
	inline FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * get_m_FinalBlitPass_24() const { return ___m_FinalBlitPass_24; }
	inline FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 ** get_address_of_m_FinalBlitPass_24() { return &___m_FinalBlitPass_24; }
	inline void set_m_FinalBlitPass_24(FinalBlitPass_t0C0C1712F120C550DFD86EF32D40C7B108D750B7 * value)
	{
		___m_FinalBlitPass_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FinalBlitPass_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_FinalPostProcessPass_25() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_FinalPostProcessPass_25)); }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * get_m_FinalPostProcessPass_25() const { return ___m_FinalPostProcessPass_25; }
	inline PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D ** get_address_of_m_FinalPostProcessPass_25() { return &___m_FinalPostProcessPass_25; }
	inline void set_m_FinalPostProcessPass_25(PostProcessPass_tE6BA88F39E0A623D1CE7DB7AF932E556CDD5745D * value)
	{
		___m_FinalPostProcessPass_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FinalPostProcessPass_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightCullResult_26() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_LightCullResult_26)); }
	inline Light2DCullResult_t4A7768B3D2E997DBCC1479AD9344DCE80CB8F90A * get_m_LightCullResult_26() const { return ___m_LightCullResult_26; }
	inline Light2DCullResult_t4A7768B3D2E997DBCC1479AD9344DCE80CB8F90A ** get_address_of_m_LightCullResult_26() { return &___m_LightCullResult_26; }
	inline void set_m_LightCullResult_26(Light2DCullResult_t4A7768B3D2E997DBCC1479AD9344DCE80CB8F90A * value)
	{
		___m_LightCullResult_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightCullResult_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseDepthStencilBuffer_28() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_UseDepthStencilBuffer_28)); }
	inline bool get_m_UseDepthStencilBuffer_28() const { return ___m_UseDepthStencilBuffer_28; }
	inline bool* get_address_of_m_UseDepthStencilBuffer_28() { return &___m_UseDepthStencilBuffer_28; }
	inline void set_m_UseDepthStencilBuffer_28(bool value)
	{
		___m_UseDepthStencilBuffer_28 = value;
	}

	inline static int32_t get_offset_of_m_CreateColorTexture_29() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_CreateColorTexture_29)); }
	inline bool get_m_CreateColorTexture_29() const { return ___m_CreateColorTexture_29; }
	inline bool* get_address_of_m_CreateColorTexture_29() { return &___m_CreateColorTexture_29; }
	inline void set_m_CreateColorTexture_29(bool value)
	{
		___m_CreateColorTexture_29 = value;
	}

	inline static int32_t get_offset_of_m_CreateDepthTexture_30() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_CreateDepthTexture_30)); }
	inline bool get_m_CreateDepthTexture_30() const { return ___m_CreateDepthTexture_30; }
	inline bool* get_address_of_m_CreateDepthTexture_30() { return &___m_CreateDepthTexture_30; }
	inline void set_m_CreateDepthTexture_30(bool value)
	{
		___m_CreateDepthTexture_30 = value;
	}

	inline static int32_t get_offset_of_k_ColorTextureHandle_31() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___k_ColorTextureHandle_31)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_k_ColorTextureHandle_31() const { return ___k_ColorTextureHandle_31; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_k_ColorTextureHandle_31() { return &___k_ColorTextureHandle_31; }
	inline void set_k_ColorTextureHandle_31(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___k_ColorTextureHandle_31 = value;
	}

	inline static int32_t get_offset_of_k_DepthTextureHandle_32() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___k_DepthTextureHandle_32)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_k_DepthTextureHandle_32() const { return ___k_DepthTextureHandle_32; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_k_DepthTextureHandle_32() { return &___k_DepthTextureHandle_32; }
	inline void set_k_DepthTextureHandle_32(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___k_DepthTextureHandle_32 = value;
	}

	inline static int32_t get_offset_of_k_AfterPostProcessColorHandle_33() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___k_AfterPostProcessColorHandle_33)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_k_AfterPostProcessColorHandle_33() const { return ___k_AfterPostProcessColorHandle_33; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_k_AfterPostProcessColorHandle_33() { return &___k_AfterPostProcessColorHandle_33; }
	inline void set_k_AfterPostProcessColorHandle_33(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___k_AfterPostProcessColorHandle_33 = value;
	}

	inline static int32_t get_offset_of_k_ColorGradingLutHandle_34() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___k_ColorGradingLutHandle_34)); }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  get_k_ColorGradingLutHandle_34() const { return ___k_ColorGradingLutHandle_34; }
	inline RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C * get_address_of_k_ColorGradingLutHandle_34() { return &___k_ColorGradingLutHandle_34; }
	inline void set_k_ColorGradingLutHandle_34(RenderTargetHandle_tF1A0604007691ECF29A9F58D2EB48A516B9A9E7C  value)
	{
		___k_ColorGradingLutHandle_34 = value;
	}

	inline static int32_t get_offset_of_m_BlitMaterial_35() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_BlitMaterial_35)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_BlitMaterial_35() const { return ___m_BlitMaterial_35; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_BlitMaterial_35() { return &___m_BlitMaterial_35; }
	inline void set_m_BlitMaterial_35(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_BlitMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlitMaterial_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Renderer2DData_36() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8, ___m_Renderer2DData_36)); }
	inline Renderer2DData_tC3A48CA3622A4C1F56B5C834792F547B5E823464 * get_m_Renderer2DData_36() const { return ___m_Renderer2DData_36; }
	inline Renderer2DData_tC3A48CA3622A4C1F56B5C834792F547B5E823464 ** get_address_of_m_Renderer2DData_36() { return &___m_Renderer2DData_36; }
	inline void set_m_Renderer2DData_36(Renderer2DData_tC3A48CA3622A4C1F56B5C834792F547B5E823464 * value)
	{
		___m_Renderer2DData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Renderer2DData_36), (void*)value);
	}
};

struct Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_StaticFields
{
public:
	// UnityEngine.Rendering.ProfilingSampler UnityEngine.Experimental.Rendering.Universal.Renderer2D::m_ProfilingSampler
	ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * ___m_ProfilingSampler_27;

public:
	inline static int32_t get_offset_of_m_ProfilingSampler_27() { return static_cast<int32_t>(offsetof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_StaticFields, ___m_ProfilingSampler_27)); }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * get_m_ProfilingSampler_27() const { return ___m_ProfilingSampler_27; }
	inline ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 ** get_address_of_m_ProfilingSampler_27() { return &___m_ProfilingSampler_27; }
	inline void set_m_ProfilingSampler_27(ProfilingSampler_tD118E30126C252A7D5064D4AD84B497A9CAB6E92 * value)
	{
		___m_ProfilingSampler_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProfilingSampler_27), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);



// COM Callable Wrapper for System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RC2Transform
struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RNGCryptoServiceProvider_t696D1B0DFED446BE4718F7E18ABFFBB6E5A8A5A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.RSAManaged
struct RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSAManaged_tDA89FB107A6761632BB6515AE346594B0A932741_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.RTHandleSystem
struct RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RTHandleSystem_t9A48EEDF49287EA06D8D26A59162F6A2BD085952_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper>, IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tBCFA9924A47B56774AFEF690310BA37E1A800808::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m64387D2D55E86DABEC832FDADDA12CBF1C7C1D5E(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  returnValue;
		try
		{
			returnValue = *static_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(UnBox(GetManagedObjectInline(), Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  returnValue;
		try
		{
			returnValue = *static_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(UnBox(GetManagedObjectInline(), Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_tC45F1DDF39812623644DE296D8057A4958176627(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_tC45F1DDF39812623644DE296D8057A4958176627_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper>, IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6C2C9667B4A9B53CCB0776745CBB938B87C32F2E::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m96AACCD499BB14F3DBACD6CA120C283ABCE73263(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891  returnValue;
		try
		{
			returnValue = *static_cast<Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891 *>(UnBox(GetManagedObjectInline(), Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t612E465CB97C3834EF1EE6D46D56027E2BC19891_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.RegistryKey
struct RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RegistryKey_t1EF11DB6AC49AC065AF744487033109254215268_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Azure.RemoteRendering.RemoteRenderingClient
struct RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RemoteRenderingClient_t8918BFC9E5ADC3E58607A3D9A413F6F57AFD1109_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphBuilder
struct RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderGraphBuilder_t743FDC1FBE7B4B3ED0E76B4AF325D8BC48CE5056_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphLogIndent
struct RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderGraphLogIndent_tCFB6B5884E296334BD52965E6AD29548079F5F27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphProfilingScope
struct RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderGraphProfilingScope_t305DF2D7AEE349EF0783291CB01437C7A7B1CF65_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.Rendering.Universal.RenderObjects
struct RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderObjects_tBE3FDE745914FC993F1B806CE371DBB650DB81D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Experimental.Rendering.Universal.Renderer2D
struct Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Renderer2D_tB1142E471675869BCE85B21A63D328CAE66038F8_ComCallableWrapper(obj));
}
