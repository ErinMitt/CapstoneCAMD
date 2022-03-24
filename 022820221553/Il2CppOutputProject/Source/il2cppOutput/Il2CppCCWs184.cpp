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

// System.Action`1<Vuforia.Internal.Observers.IObserver>
struct Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C;
// System.Action`1<Vuforia.Internal.Core.VirtualButtonState>
struct Action_1_tBE16CB395B8F38C4F158FE71C1E64FEE25097B54;
// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance>
struct Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0;
// System.Action`1<Vuforia.Internal.Observers.VuMarkObserver>
struct Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3;
// System.Action`1<Vuforia.VuforiaInitError>
struct Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Action`2<Vuforia.VuValidationAreaObservationStatusInfo,Vuforia.VuValidationAreaObservationValidationInfo>
struct Action_2_tB17F14CE32B1F6F15155DE483DF8ED92D6A892A9;
// Vuforia.VuGenericList`1/DeleteListDelegate<System.IntPtr>
struct DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraField>
struct DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraVideoMode>
struct DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuImagePixelFormat>
struct DeleteListDelegate_tBFD113BC234F306FC51CAD673C97B2D37E82F41B;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuMeshObservationBlock/Internal>
struct DeleteListDelegate_t800435C7DDBF8F55B47F9BBBFEA5DFD50DF7E6E6;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>
struct Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<UnityEngine.Camera>
struct Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1;
// Vuforia.VuGenericList`1/GetListElementDelegate<System.IntPtr>
struct GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraField>
struct GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraVideoMode>
struct GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuImagePixelFormat>
struct GetListElementDelegate_tAA87E74EC4E5CF12ECDCF6E13D3A779D2946B467;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuMeshObservationBlock/Internal>
struct GetListElementDelegate_tD2B92299F04E40A3366201713CAE5F2D721BC118;
// Vuforia.VuGenericList`1/GetListSizeDelegate<System.IntPtr>
struct GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraField>
struct GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraVideoMode>
struct GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuImagePixelFormat>
struct GetListSizeDelegate_tAAE331F70076DB7D39E53E591EC524FC6D2D519E;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuMeshObservationBlock/Internal>
struct GetListSizeDelegate_tCFA25AA5888F820B978D91306C3F23CFBD56FF2B;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.IVuObserver>
struct IDictionary_2_t1354F9352F99FD9070229DB2B28357ED0AADC00D;
// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.IVuEngineConfig>
struct IDictionary_2_t19B4314179009216B771365C8D8F7611D107D1FF;
// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController>
struct IDictionary_2_t062F17C2B757273B984462EA3640271CF74908EE;
// System.Collections.Generic.IList`1<Vuforia.Internal.Observers.IObserverComponent>
struct IList_1_tC28035A8F84F3F3658F495A42678C87699EE5406;
// System.Collections.Generic.IList`1<Vuforia.IVuGuideView>
struct IList_1_t884DA10BCC300645760B739C4CA1A932CB4DF8D6;
// System.Collections.Generic.IList`1<Vuforia.IVuHitTest>
struct IList_1_t3D1FD75F38247BAB2E5854CAF40F2A35D8ACA270;
// System.Collections.Generic.IList`1<Vuforia.IVuImage>
struct IList_1_t05C36AE1619811BA30F0B6E507DACD367EB014AB;
// System.Collections.Generic.IList`1<Vuforia.IVuModelTargetState>
struct IList_1_tEAE60AABFC4779C494FE3E8202340A4F09A98035;
// System.Collections.Generic.IList`1<Vuforia.IVuValidationAreaLabel>
struct IList_1_tA5C5C91A347303900AE44D9C320CDC51FE488889;
// System.Collections.Generic.IList`1<Vuforia.VuMeshObservationBlock>
struct IList_1_t25B5B183E87D32F9F8F6886C99041E71284375C4;
// System.Collections.Generic.IList`1<Vuforia.VuState>
struct IList_1_t1EDE326B57C46642763DAE35B0A7183C8C471C0C;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// Vuforia.ObservationList`1<Vuforia.IVuObservation>
struct ObservationList_1_t1E9A2383F3DE5879349EFAD8AB9EFC5E9D94AD66;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// Vuforia.Internal.Observers.ASingleTargetObserver
struct ASingleTargetObserver_t5E08B042671802BFB5420D1D40D3EBCA4270C2D1;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// Vuforia.Internal.Core.IEngine
struct IEngine_t708DCFFA8A0A96615D4AC23FF9621DA3A280AC3E;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Vuforia.Internal.Rendering.IVideoBackgroundBehaviour
struct IVideoBackgroundBehaviour_tD4ABD0C653293AC91ADAE8D59D5FC2AD657DAB13;
// Vuforia.Internal.Rendering.IVideoBackgroundBehaviourFactory
struct IVideoBackgroundBehaviourFactory_t5EED7F0C1A0B15948B7B91140E0D451BA25327FC;
// Vuforia.Internal.Rendering.IVideoBackgroundTextureUpdater
struct IVideoBackgroundTextureUpdater_t0FA76E2CBC1B0CE61702C2913002595A876E63FD;
// Vuforia.IVuImage
struct IVuImage_tFA1C441F8C8BC736670DB0167ED0D64A047A3146;
// Vuforia.IVuObserver
struct IVuObserver_tA47C2939BA13B9CB30EB6B2099B338683B2E4B46;
// Vuforia.IVuValidationAreaCapture
struct IVuValidationAreaCapture_tC91405AB2283685544341C3C32844617E4E9109E;
// Vuforia.IVuValidationAreaCaptureUpload
struct IVuValidationAreaCaptureUpload_tD34B237379BF13B670AAFC0E04702524733CD554;
// Vuforia.IVuValidationAreaObserver
struct IVuValidationAreaObserver_t0F55AFC5990880B71B157B603EDFCE160117C4A2;
// Vuforia.IVuVirtualButtonObserver
struct IVuVirtualButtonObserver_t8BF858709DF7E344D0AB8FE9B04E6E9BA9DC82A2;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F;
// Vuforia.Image
struct Image_tEA90BDBB0131379427A1282935D21313F94DFDB1;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Net.MonoChunkStream
struct MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7;
// Mono.Net.Security.MonoTlsStream
struct MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// System.Net.NetworkCredential
struct NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686;
// Vuforia.ObservationManager
struct ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Vuforia.Internal.Rendering.TextureRenderer
struct TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// UnityEngine.VFX.VisualEffectAsset
struct VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Vuforia.VuCameraFrame
struct VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2;
// Vuforia.VuCameraIntrinsics
struct VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7;
// Vuforia.VuCloudImageTargetObservationsHandler
struct VuCloudImageTargetObservationsHandler_t556F6230D7302C541895C5F94180B7B45103A152;
// Vuforia.VuCloudImageTargetQueryErrorHandler
struct VuCloudImageTargetQueryErrorHandler_tFB2BDDA24AA36054E5F4F0A471A5120CFB0C07E9;
// Vuforia.VuEngine
struct VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29;
// Vuforia.VuHitTestList
struct VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5;
// Vuforia.VuImage
struct VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C;
// Vuforia.VuMarkInstanceId
struct VuMarkInstanceId_t5C200552393A64E29B6A074B462E7E5B71EE5DF5;
// Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479;
// Vuforia.VuRenderState
struct VuRenderState_t7996AF386E68F6AF43118CCEA7CCBD2BD0712B03;
// Vuforia.VuState
struct VuState_tF67F3A9B352C644C40290BF377B126A71B14F344;
// Vuforia.Internal.Utility.VuforiaCoroutineUtility
struct VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88;
// System.Net.WebConnectionTunnel
struct WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var;
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
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// Vuforia.Internal.Observers.AObserver
struct AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Vuforia.Internal.Observers.IObserverComponent> Vuforia.Internal.Observers.AObserver::<Components>k__BackingField
	RuntimeObject* ___U3CComponentsU3Ek__BackingField_0;
	// System.Int32 Vuforia.Internal.Observers.AObserver::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_1;
	// Vuforia.Internal.Core.IEngine Vuforia.Internal.Observers.AObserver::<Engine>k__BackingField
	RuntimeObject* ___U3CEngineU3Ek__BackingField_2;
	// System.Action`1<Vuforia.Internal.Observers.IObserver> Vuforia.Internal.Observers.AObserver::OnObserverDestroyed
	Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * ___OnObserverDestroyed_3;
	// System.Boolean Vuforia.Internal.Observers.AObserver::mDisposed
	bool ___mDisposed_4;

public:
	inline static int32_t get_offset_of_U3CComponentsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CComponentsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CComponentsU3Ek__BackingField_0() const { return ___U3CComponentsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CComponentsU3Ek__BackingField_0() { return &___U3CComponentsU3Ek__BackingField_0; }
	inline void set_U3CComponentsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CComponentsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComponentsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEngineU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CEngineU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEngineU3Ek__BackingField_2() const { return ___U3CEngineU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEngineU3Ek__BackingField_2() { return &___U3CEngineU3Ek__BackingField_2; }
	inline void set_U3CEngineU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEngineU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEngineU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnObserverDestroyed_3() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___OnObserverDestroyed_3)); }
	inline Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * get_OnObserverDestroyed_3() const { return ___OnObserverDestroyed_3; }
	inline Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C ** get_address_of_OnObserverDestroyed_3() { return &___OnObserverDestroyed_3; }
	inline void set_OnObserverDestroyed_3(Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * value)
	{
		___OnObserverDestroyed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnObserverDestroyed_3), (void*)value);
	}

	inline static int32_t get_offset_of_mDisposed_4() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___mDisposed_4)); }
	inline bool get_mDisposed_4() const { return ___mDisposed_4; }
	inline bool* get_address_of_mDisposed_4() { return &___mDisposed_4; }
	inline void set_mDisposed_4(bool value)
	{
		___mDisposed_4 = value;
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
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


// Vuforia.Internal.ValidationAreaCapture
struct ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36  : public RuntimeObject
{
public:
	// Vuforia.IVuValidationAreaCapture Vuforia.Internal.ValidationAreaCapture::mVuCapture
	RuntimeObject* ___mVuCapture_0;
	// System.Boolean Vuforia.Internal.ValidationAreaCapture::<DeleteDataOnDispose>k__BackingField
	bool ___U3CDeleteDataOnDisposeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_mVuCapture_0() { return static_cast<int32_t>(offsetof(ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36, ___mVuCapture_0)); }
	inline RuntimeObject* get_mVuCapture_0() const { return ___mVuCapture_0; }
	inline RuntimeObject** get_address_of_mVuCapture_0() { return &___mVuCapture_0; }
	inline void set_mVuCapture_0(RuntimeObject* value)
	{
		___mVuCapture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuCapture_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeleteDataOnDisposeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36, ___U3CDeleteDataOnDisposeU3Ek__BackingField_1)); }
	inline bool get_U3CDeleteDataOnDisposeU3Ek__BackingField_1() const { return ___U3CDeleteDataOnDisposeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeleteDataOnDisposeU3Ek__BackingField_1() { return &___U3CDeleteDataOnDisposeU3Ek__BackingField_1; }
	inline void set_U3CDeleteDataOnDisposeU3Ek__BackingField_1(bool value)
	{
		___U3CDeleteDataOnDisposeU3Ek__BackingField_1 = value;
	}
};


// Vuforia.Internal.ValidationAreaCaptureUpload
struct ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047  : public RuntimeObject
{
public:
	// Vuforia.IVuValidationAreaCaptureUpload Vuforia.Internal.ValidationAreaCaptureUpload::mVuUpload
	RuntimeObject* ___mVuUpload_0;

public:
	inline static int32_t get_offset_of_mVuUpload_0() { return static_cast<int32_t>(offsetof(ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047, ___mVuUpload_0)); }
	inline RuntimeObject* get_mVuUpload_0() const { return ___mVuUpload_0; }
	inline RuntimeObject** get_address_of_mVuUpload_0() { return &___mVuUpload_0; }
	inline void set_mVuUpload_0(RuntimeObject* value)
	{
		___mVuUpload_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuUpload_0), (void*)value);
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

// Vuforia.Internal.Rendering.VideoBackgroundRenderer
struct VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7  : public RuntimeObject
{
public:
	// Vuforia.Internal.Rendering.IVideoBackgroundTextureUpdater Vuforia.Internal.Rendering.VideoBackgroundRenderer::mTextureUpdater
	RuntimeObject* ___mTextureUpdater_0;
	// Vuforia.Internal.Rendering.IVideoBackgroundBehaviourFactory Vuforia.Internal.Rendering.VideoBackgroundRenderer::mVbFactory
	RuntimeObject* ___mVbFactory_1;
	// Vuforia.Internal.Rendering.IVideoBackgroundTextureUpdater Vuforia.Internal.Rendering.VideoBackgroundRenderer::mCurrentTextureUpdater
	RuntimeObject* ___mCurrentTextureUpdater_2;
	// Vuforia.Internal.Rendering.IVideoBackgroundBehaviour Vuforia.Internal.Rendering.VideoBackgroundRenderer::mCurrentVbBehaviour
	RuntimeObject* ___mCurrentVbBehaviour_3;
	// UnityEngine.Material Vuforia.Internal.Rendering.VideoBackgroundRenderer::mMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mMaterial_4;
	// System.Func`1<UnityEngine.Camera> Vuforia.Internal.Rendering.VideoBackgroundRenderer::mCameraProvider
	Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * ___mCameraProvider_5;
	// System.Action Vuforia.Internal.Rendering.VideoBackgroundRenderer::OnVideoBackgroundChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnVideoBackgroundChanged_6;

public:
	inline static int32_t get_offset_of_mTextureUpdater_0() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mTextureUpdater_0)); }
	inline RuntimeObject* get_mTextureUpdater_0() const { return ___mTextureUpdater_0; }
	inline RuntimeObject** get_address_of_mTextureUpdater_0() { return &___mTextureUpdater_0; }
	inline void set_mTextureUpdater_0(RuntimeObject* value)
	{
		___mTextureUpdater_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextureUpdater_0), (void*)value);
	}

	inline static int32_t get_offset_of_mVbFactory_1() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mVbFactory_1)); }
	inline RuntimeObject* get_mVbFactory_1() const { return ___mVbFactory_1; }
	inline RuntimeObject** get_address_of_mVbFactory_1() { return &___mVbFactory_1; }
	inline void set_mVbFactory_1(RuntimeObject* value)
	{
		___mVbFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVbFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentTextureUpdater_2() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mCurrentTextureUpdater_2)); }
	inline RuntimeObject* get_mCurrentTextureUpdater_2() const { return ___mCurrentTextureUpdater_2; }
	inline RuntimeObject** get_address_of_mCurrentTextureUpdater_2() { return &___mCurrentTextureUpdater_2; }
	inline void set_mCurrentTextureUpdater_2(RuntimeObject* value)
	{
		___mCurrentTextureUpdater_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentTextureUpdater_2), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentVbBehaviour_3() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mCurrentVbBehaviour_3)); }
	inline RuntimeObject* get_mCurrentVbBehaviour_3() const { return ___mCurrentVbBehaviour_3; }
	inline RuntimeObject** get_address_of_mCurrentVbBehaviour_3() { return &___mCurrentVbBehaviour_3; }
	inline void set_mCurrentVbBehaviour_3(RuntimeObject* value)
	{
		___mCurrentVbBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentVbBehaviour_3), (void*)value);
	}

	inline static int32_t get_offset_of_mMaterial_4() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mMaterial_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mMaterial_4() const { return ___mMaterial_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mMaterial_4() { return &___mMaterial_4; }
	inline void set_mMaterial_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMaterial_4), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraProvider_5() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___mCameraProvider_5)); }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * get_mCameraProvider_5() const { return ___mCameraProvider_5; }
	inline Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 ** get_address_of_mCameraProvider_5() { return &___mCameraProvider_5; }
	inline void set_mCameraProvider_5(Func_1_tF4AA924C5C19984057C13BA02AD4CE096D91C4B1 * value)
	{
		___mCameraProvider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraProvider_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnVideoBackgroundChanged_6() { return static_cast<int32_t>(offsetof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7, ___OnVideoBackgroundChanged_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnVideoBackgroundChanged_6() const { return ___OnVideoBackgroundChanged_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnVideoBackgroundChanged_6() { return &___OnVideoBackgroundChanged_6; }
	inline void set_OnVideoBackgroundChanged_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnVideoBackgroundChanged_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVideoBackgroundChanged_6), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// Vuforia.VuHitTestResults
struct VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3  : public RuntimeObject
{
public:
	// Vuforia.VuHitTestList Vuforia.VuHitTestResults::mList
	VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5 * ___mList_0;
	// System.Collections.Generic.IList`1<Vuforia.IVuHitTest> Vuforia.VuHitTestResults::mHitTests
	RuntimeObject* ___mHitTests_1;

public:
	inline static int32_t get_offset_of_mList_0() { return static_cast<int32_t>(offsetof(VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3, ___mList_0)); }
	inline VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5 * get_mList_0() const { return ___mList_0; }
	inline VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5 ** get_address_of_mList_0() { return &___mList_0; }
	inline void set_mList_0(VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5 * value)
	{
		___mList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mList_0), (void*)value);
	}

	inline static int32_t get_offset_of_mHitTests_1() { return static_cast<int32_t>(offsetof(VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3, ___mHitTests_1)); }
	inline RuntimeObject* get_mHitTests_1() const { return ___mHitTests_1; }
	inline RuntimeObject** get_address_of_mHitTests_1() { return &___mHitTests_1; }
	inline void set_mHitTests_1(RuntimeObject* value)
	{
		___mHitTests_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHitTests_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Vuforia.Internal.Observers.ANativeObserver
struct ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3  : public AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C
{
public:
	// Vuforia.IVuObserver Vuforia.Internal.Observers.ANativeObserver::<VuObserver>k__BackingField
	RuntimeObject* ___U3CVuObserverU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CVuObserverU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3, ___U3CVuObserverU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVuObserverU3Ek__BackingField_5() const { return ___U3CVuObserverU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVuObserverU3Ek__BackingField_5() { return &___U3CVuObserverU3Ek__BackingField_5; }
	inline void set_U3CVuObserverU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVuObserverU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuObserverU3Ek__BackingField_5), (void*)value);
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Numerics.Vector2
struct Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B 
{
public:
	// System.Single System.Numerics.Vector2::X
	float ___X_0;
	// System.Single System.Numerics.Vector2::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// Windows.Foundation.Numerics.Vector2
struct Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector2::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector2::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
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


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// UnityEngine.Rendering.VolumeIsolationScope
struct VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E__padding[1];
	};

public:
};


// Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC 
{
public:
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::name
	String_t* ___name_1;
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::metadata
	String_t* ___metadata_2;
	// System.Byte Vuforia.VuCloudImageTargetObservationTargetInfo::trackingRating
	uint8_t ___trackingRating_3;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_2() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC, ___metadata_2)); }
	inline String_t* get_metadata_2() const { return ___metadata_2; }
	inline String_t** get_address_of_metadata_2() { return &___metadata_2; }
	inline void set_metadata_2(String_t* value)
	{
		___metadata_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_2), (void*)value);
	}

	inline static int32_t get_offset_of_trackingRating_3() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC, ___trackingRating_3)); }
	inline uint8_t get_trackingRating_3() const { return ___trackingRating_3; }
	inline uint8_t* get_address_of_trackingRating_3() { return &___trackingRating_3; }
	inline void set_trackingRating_3(uint8_t value)
	{
		___trackingRating_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	char* ___metadata_2;
	uint8_t ___trackingRating_3;
};
// Native definition for COM marshalling of Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___metadata_2;
	uint8_t ___trackingRating_3;
};

// Vuforia.Internal.Observers.VuMarkInstance
struct VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794  : public AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C
{
public:
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.Internal.Observers.VuMarkInstance::<VuMarkObserver>k__BackingField
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___U3CVuMarkObserverU3Ek__BackingField_5;
	// Vuforia.VuMarkInstanceId Vuforia.Internal.Observers.VuMarkInstance::<InstanceId>k__BackingField
	RuntimeObject* ___U3CInstanceIdU3Ek__BackingField_6;
	// Vuforia.Image Vuforia.Internal.Observers.VuMarkInstance::<InstanceImage>k__BackingField
	Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___U3CInstanceImageU3Ek__BackingField_7;
	// System.Boolean Vuforia.Internal.Observers.VuMarkInstance::mActivated
	bool ___mActivated_8;

public:
	inline static int32_t get_offset_of_U3CVuMarkObserverU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CVuMarkObserverU3Ek__BackingField_5)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_U3CVuMarkObserverU3Ek__BackingField_5() const { return ___U3CVuMarkObserverU3Ek__BackingField_5; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_U3CVuMarkObserverU3Ek__BackingField_5() { return &___U3CVuMarkObserverU3Ek__BackingField_5; }
	inline void set_U3CVuMarkObserverU3Ek__BackingField_5(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___U3CVuMarkObserverU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuMarkObserverU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CInstanceIdU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInstanceIdU3Ek__BackingField_6() const { return ___U3CInstanceIdU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInstanceIdU3Ek__BackingField_6() { return &___U3CInstanceIdU3Ek__BackingField_6; }
	inline void set_U3CInstanceIdU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInstanceIdU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceIdU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceImageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CInstanceImageU3Ek__BackingField_7)); }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * get_U3CInstanceImageU3Ek__BackingField_7() const { return ___U3CInstanceImageU3Ek__BackingField_7; }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 ** get_address_of_U3CInstanceImageU3Ek__BackingField_7() { return &___U3CInstanceImageU3Ek__BackingField_7; }
	inline void set_U3CInstanceImageU3Ek__BackingField_7(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * value)
	{
		___U3CInstanceImageU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceImageU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_mActivated_8() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___mActivated_8)); }
	inline bool get_mActivated_8() const { return ___mActivated_8; }
	inline bool* get_address_of_mActivated_8() { return &___mActivated_8; }
	inline void set_mActivated_8(bool value)
	{
		___mActivated_8 = value;
	}
};


// Vuforia.VuMatrix44F
struct VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 
{
public:
	// System.Single Vuforia.VuMatrix44F::m0
	float ___m0_0;
	// System.Single Vuforia.VuMatrix44F::m1
	float ___m1_1;
	// System.Single Vuforia.VuMatrix44F::m2
	float ___m2_2;
	// System.Single Vuforia.VuMatrix44F::m3
	float ___m3_3;
	// System.Single Vuforia.VuMatrix44F::m4
	float ___m4_4;
	// System.Single Vuforia.VuMatrix44F::m5
	float ___m5_5;
	// System.Single Vuforia.VuMatrix44F::m6
	float ___m6_6;
	// System.Single Vuforia.VuMatrix44F::m7
	float ___m7_7;
	// System.Single Vuforia.VuMatrix44F::m8
	float ___m8_8;
	// System.Single Vuforia.VuMatrix44F::m9
	float ___m9_9;
	// System.Single Vuforia.VuMatrix44F::m10
	float ___m10_10;
	// System.Single Vuforia.VuMatrix44F::m11
	float ___m11_11;
	// System.Single Vuforia.VuMatrix44F::m12
	float ___m12_12;
	// System.Single Vuforia.VuMatrix44F::m13
	float ___m13_13;
	// System.Single Vuforia.VuMatrix44F::m14
	float ___m14_14;
	// System.Single Vuforia.VuMatrix44F::m15
	float ___m15_15;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}

	inline static int32_t get_offset_of_m12_12() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m12_12)); }
	inline float get_m12_12() const { return ___m12_12; }
	inline float* get_address_of_m12_12() { return &___m12_12; }
	inline void set_m12_12(float value)
	{
		___m12_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m14_14() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m14_14)); }
	inline float get_m14_14() const { return ___m14_14; }
	inline float* get_address_of_m14_14() { return &___m14_14; }
	inline void set_m14_14(float value)
	{
		___m14_14 = value;
	}

	inline static int32_t get_offset_of_m15_15() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m15_15)); }
	inline float get_m15_15() const { return ___m15_15; }
	inline float* get_address_of_m15_15() { return &___m15_15; }
	inline void set_m15_15(float value)
	{
		___m15_15 = value;
	}
};


// Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE 
{
public:
	// System.String Vuforia.VuValidationAreaObservationValidationInfo::labelName
	String_t* ___labelName_0;
	// System.Single Vuforia.VuValidationAreaObservationValidationInfo::confidence
	float ___confidence_1;
	// System.Int64 Vuforia.VuValidationAreaObservationValidationInfo::timestamp
	int64_t ___timestamp_2;

public:
	inline static int32_t get_offset_of_labelName_0() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE, ___labelName_0)); }
	inline String_t* get_labelName_0() const { return ___labelName_0; }
	inline String_t** get_address_of_labelName_0() { return &___labelName_0; }
	inline void set_labelName_0(String_t* value)
	{
		___labelName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___labelName_0), (void*)value);
	}

	inline static int32_t get_offset_of_confidence_1() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE, ___confidence_1)); }
	inline float get_confidence_1() const { return ___confidence_1; }
	inline float* get_address_of_confidence_1() { return &___confidence_1; }
	inline void set_confidence_1(float value)
	{
		___confidence_1 = value;
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE, ___timestamp_2)); }
	inline int64_t get_timestamp_2() const { return ___timestamp_2; }
	inline int64_t* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(int64_t value)
	{
		___timestamp_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE_marshaled_pinvoke
{
	char* ___labelName_0;
	float ___confidence_1;
	int64_t ___timestamp_2;
};
// Native definition for COM marshalling of Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE_marshaled_com
{
	Il2CppChar* ___labelName_0;
	float ___confidence_1;
	int64_t ___timestamp_2;
};

// Vuforia.VuVector2F
struct VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841 
{
public:
	// System.Single Vuforia.VuVector2F::x
	float ___x_0;
	// System.Single Vuforia.VuVector2F::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// Vuforia.VuVector3F
struct VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B 
{
public:
	// System.Single Vuforia.VuVector3F::x
	float ___x_0;
	// System.Single Vuforia.VuVector3F::y
	float ___y_1;
	// System.Single Vuforia.VuVector3F::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};


// Vuforia.VuVector4F
struct VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683 
{
public:
	// System.Single Vuforia.VuVector4F::x
	float ___x_0;
	// System.Single Vuforia.VuVector4F::y
	float ___y_1;
	// System.Single Vuforia.VuVector4F::z
	float ___z_2;
	// System.Single Vuforia.VuVector4F::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ____uwr_0;

public:
	inline static int32_t get_offset_of__uwr_0() { return static_cast<int32_t>(offsetof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2, ____uwr_0)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get__uwr_0() const { return ____uwr_0; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of__uwr_0() { return &____uwr_0; }
	inline void set__uwr_0(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		____uwr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____uwr_0), (void*)value);
	}
};


// Vuforia.VuMarkObservation/VuMarkObservationInfo
struct VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B 
{
public:
	// System.Int32 Vuforia.VuMarkObservation/VuMarkObservationInfo::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

// Windows.Foundation.IReference`1<System.Numerics.Vector2>
struct NOVTABLE IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4255473F2FF2083F7A9A0B6E89C6B9532942FA5C(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector2>
struct NOVTABLE IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB9D7D66ED2B28C2740BAFD26B96ED89E73383B5F(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Vector3>
struct NOVTABLE IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) = 0;
};

// System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>
struct Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F 
{
public:
	// T System.Nullable`1::value
	VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F, ___value_0)); }
	inline VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC  get_value_0() const { return ___value_0; }
	inline VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuCloudImageTargetObservationTargetInfo_t3220C2D748381A6D4894D9FCC46DE1633F004DAC  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___metadata_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>
struct Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7 
{
public:
	// T System.Nullable`1::value
	VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7, ___value_0)); }
	inline VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE  get_value_0() const { return ___value_0; }
	inline VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuValidationAreaObservationValidationInfo_tA1F82EBFC1DA1EFFF8009D4DA343B796A15F32AE  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___labelName_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMarkObservation/VuMarkObservationInfo>
struct Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58 
{
public:
	// T System.Nullable`1::value
	VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58, ___value_0)); }
	inline VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B  get_value_0() const { return ___value_0; }
	inline VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuMarkObservationInfo_t473E1E57FBDB61541ED9069C210A91B846CEC53B  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Vuforia.VuGenericList`1<System.IntPtr>
struct VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mGetSize_1)); }
	inline GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mGetElement_2)); }
	inline GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mDeleteList_3)); }
	inline DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuCameraField>
struct VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mGetSize_1)); }
	inline GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mGetElement_2)); }
	inline GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mDeleteList_3)); }
	inline DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>
struct VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mGetSize_1)); }
	inline GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mGetElement_2)); }
	inline GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mDeleteList_3)); }
	inline DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuImagePixelFormat>
struct VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tAAE331F70076DB7D39E53E591EC524FC6D2D519E * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tAA87E74EC4E5CF12ECDCF6E13D3A779D2946B467 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tBFD113BC234F306FC51CAD673C97B2D37E82F41B * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44, ___mGetSize_1)); }
	inline GetListSizeDelegate_tAAE331F70076DB7D39E53E591EC524FC6D2D519E * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tAAE331F70076DB7D39E53E591EC524FC6D2D519E ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tAAE331F70076DB7D39E53E591EC524FC6D2D519E * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44, ___mGetElement_2)); }
	inline GetListElementDelegate_tAA87E74EC4E5CF12ECDCF6E13D3A779D2946B467 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tAA87E74EC4E5CF12ECDCF6E13D3A779D2946B467 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tAA87E74EC4E5CF12ECDCF6E13D3A779D2946B467 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44, ___mDeleteList_3)); }
	inline DeleteListDelegate_tBFD113BC234F306FC51CAD673C97B2D37E82F41B * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tBFD113BC234F306FC51CAD673C97B2D37E82F41B ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tBFD113BC234F306FC51CAD673C97B2D37E82F41B * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mGetSize_1)); }
	inline GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mGetElement_2)); }
	inline GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mDeleteList_3)); }
	inline DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuMeshObservationBlock/Internal>
struct VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tCFA25AA5888F820B978D91306C3F23CFBD56FF2B * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tD2B92299F04E40A3366201713CAE5F2D721BC118 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_t800435C7DDBF8F55B47F9BBBFEA5DFD50DF7E6E6 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079, ___mGetSize_1)); }
	inline GetListSizeDelegate_tCFA25AA5888F820B978D91306C3F23CFBD56FF2B * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tCFA25AA5888F820B978D91306C3F23CFBD56FF2B ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tCFA25AA5888F820B978D91306C3F23CFBD56FF2B * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079, ___mGetElement_2)); }
	inline GetListElementDelegate_tD2B92299F04E40A3366201713CAE5F2D721BC118 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tD2B92299F04E40A3366201713CAE5F2D721BC118 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tD2B92299F04E40A3366201713CAE5F2D721BC118 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079, ___mDeleteList_3)); }
	inline DeleteListDelegate_t800435C7DDBF8F55B47F9BBBFEA5DFD50DF7E6E6 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_t800435C7DDBF8F55B47F9BBBFEA5DFD50DF7E6E6 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_t800435C7DDBF8F55B47F9BBBFEA5DFD50DF7E6E6 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.Internal.VuforiaDriver.CameraIntrinsics
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 
{
public:
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthX
	float ___FocalLengthX_0;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthY
	float ___FocalLengthY_1;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointX
	float ___PrincipalPointX_2;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointY
	float ___PrincipalPointY_3;
	// System.Single[] Vuforia.Internal.VuforiaDriver.CameraIntrinsics::DistortionCoefficients
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___DistortionCoefficients_4;

public:
	inline static int32_t get_offset_of_FocalLengthX_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthX_0)); }
	inline float get_FocalLengthX_0() const { return ___FocalLengthX_0; }
	inline float* get_address_of_FocalLengthX_0() { return &___FocalLengthX_0; }
	inline void set_FocalLengthX_0(float value)
	{
		___FocalLengthX_0 = value;
	}

	inline static int32_t get_offset_of_FocalLengthY_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthY_1)); }
	inline float get_FocalLengthY_1() const { return ___FocalLengthY_1; }
	inline float* get_address_of_FocalLengthY_1() { return &___FocalLengthY_1; }
	inline void set_FocalLengthY_1(float value)
	{
		___FocalLengthY_1 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointX_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointX_2)); }
	inline float get_PrincipalPointX_2() const { return ___PrincipalPointX_2; }
	inline float* get_address_of_PrincipalPointX_2() { return &___PrincipalPointX_2; }
	inline void set_PrincipalPointX_2(float value)
	{
		___PrincipalPointX_2 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointY_3() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointY_3)); }
	inline float get_PrincipalPointY_3() const { return ___PrincipalPointY_3; }
	inline float* get_address_of_PrincipalPointY_3() { return &___PrincipalPointY_3; }
	inline void set_PrincipalPointY_3(float value)
	{
		___PrincipalPointY_3 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_4() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___DistortionCoefficients_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_DistortionCoefficients_4() const { return ___DistortionCoefficients_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_DistortionCoefficients_4() { return &___DistortionCoefficients_4; }
	inline void set_DistortionCoefficients_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___DistortionCoefficients_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistortionCoefficients_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)

// Vuforia.DriverPixelFormat
struct DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4 
{
public:
	// System.Int32 Vuforia.DriverPixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpStatusCode
struct HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
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


// UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;
	// UnityEngine.VFX.VisualEffectAsset UnityEngine.VFX.VFXEventAttribute::m_VfxAsset
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}

	inline static int32_t get_offset_of_m_VfxAsset_2() { return static_cast<int32_t>(offsetof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF, ___m_VfxAsset_2)); }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * get_m_VfxAsset_2() const { return ___m_VfxAsset_2; }
	inline VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 ** get_address_of_m_VfxAsset_2() { return &___m_VfxAsset_2; }
	inline void set_m_VfxAsset_2(VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * value)
	{
		___m_VfxAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VfxAsset_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
	VisualEffectAsset_tEFF95BDCD904AF7D5DEA8CF020C62E23A978EC50 * ___m_VfxAsset_2;
};

// UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};

// Vuforia.Internal.Observers.ValidationAreaObserver
struct ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081  : public ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3
{
public:
	// Vuforia.IVuValidationAreaObserver Vuforia.Internal.Observers.ValidationAreaObserver::mValidationAreaObserver
	RuntimeObject* ___mValidationAreaObserver_6;
	// Vuforia.Internal.Observers.ASingleTargetObserver Vuforia.Internal.Observers.ValidationAreaObserver::mAssociatedObserver
	ASingleTargetObserver_t5E08B042671802BFB5420D1D40D3EBCA4270C2D1 * ___mAssociatedObserver_7;
	// System.Action`2<Vuforia.VuValidationAreaObservationStatusInfo,Vuforia.VuValidationAreaObservationValidationInfo> Vuforia.Internal.Observers.ValidationAreaObserver::OnValidationUpdated
	Action_2_tB17F14CE32B1F6F15155DE483DF8ED92D6A892A9 * ___OnValidationUpdated_8;
	// System.Boolean Vuforia.Internal.Observers.ValidationAreaObserver::<IsCapturing>k__BackingField
	bool ___U3CIsCapturingU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_mValidationAreaObserver_6() { return static_cast<int32_t>(offsetof(ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081, ___mValidationAreaObserver_6)); }
	inline RuntimeObject* get_mValidationAreaObserver_6() const { return ___mValidationAreaObserver_6; }
	inline RuntimeObject** get_address_of_mValidationAreaObserver_6() { return &___mValidationAreaObserver_6; }
	inline void set_mValidationAreaObserver_6(RuntimeObject* value)
	{
		___mValidationAreaObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mValidationAreaObserver_6), (void*)value);
	}

	inline static int32_t get_offset_of_mAssociatedObserver_7() { return static_cast<int32_t>(offsetof(ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081, ___mAssociatedObserver_7)); }
	inline ASingleTargetObserver_t5E08B042671802BFB5420D1D40D3EBCA4270C2D1 * get_mAssociatedObserver_7() const { return ___mAssociatedObserver_7; }
	inline ASingleTargetObserver_t5E08B042671802BFB5420D1D40D3EBCA4270C2D1 ** get_address_of_mAssociatedObserver_7() { return &___mAssociatedObserver_7; }
	inline void set_mAssociatedObserver_7(ASingleTargetObserver_t5E08B042671802BFB5420D1D40D3EBCA4270C2D1 * value)
	{
		___mAssociatedObserver_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAssociatedObserver_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnValidationUpdated_8() { return static_cast<int32_t>(offsetof(ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081, ___OnValidationUpdated_8)); }
	inline Action_2_tB17F14CE32B1F6F15155DE483DF8ED92D6A892A9 * get_OnValidationUpdated_8() const { return ___OnValidationUpdated_8; }
	inline Action_2_tB17F14CE32B1F6F15155DE483DF8ED92D6A892A9 ** get_address_of_OnValidationUpdated_8() { return &___OnValidationUpdated_8; }
	inline void set_OnValidationUpdated_8(Action_2_tB17F14CE32B1F6F15155DE483DF8ED92D6A892A9 * value)
	{
		___OnValidationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValidationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCapturingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081, ___U3CIsCapturingU3Ek__BackingField_9)); }
	inline bool get_U3CIsCapturingU3Ek__BackingField_9() const { return ___U3CIsCapturingU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsCapturingU3Ek__BackingField_9() { return &___U3CIsCapturingU3Ek__BackingField_9; }
	inline void set_U3CIsCapturingU3Ek__BackingField_9(bool value)
	{
		___U3CIsCapturingU3Ek__BackingField_9 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.VideoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields
{
public:
	// System.Int64 UnityEngine.Windows.WebCam.VideoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_1;

public:
	inline static int32_t get_offset_of_HR_SUCCESS_1() { return static_cast<int32_t>(offsetof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_StaticFields, ___HR_SUCCESS_1)); }
	inline int64_t get_HR_SUCCESS_1() const { return ___HR_SUCCESS_1; }
	inline int64_t* get_address_of_HR_SUCCESS_1() { return &___HR_SUCCESS_1; }
	inline void set_HR_SUCCESS_1(int64_t value)
	{
		___HR_SUCCESS_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// Vuforia.Internal.Observers.VirtualButtonObserver
struct VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48  : public ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3
{
public:
	// Vuforia.IVuVirtualButtonObserver Vuforia.Internal.Observers.VirtualButtonObserver::mVirtualButtonObserver
	RuntimeObject* ___mVirtualButtonObserver_6;
	// System.Action`1<Vuforia.Internal.Core.VirtualButtonState> Vuforia.Internal.Observers.VirtualButtonObserver::OnVirtualButtonUpdated
	Action_1_tBE16CB395B8F38C4F158FE71C1E64FEE25097B54 * ___OnVirtualButtonUpdated_7;

public:
	inline static int32_t get_offset_of_mVirtualButtonObserver_6() { return static_cast<int32_t>(offsetof(VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48, ___mVirtualButtonObserver_6)); }
	inline RuntimeObject* get_mVirtualButtonObserver_6() const { return ___mVirtualButtonObserver_6; }
	inline RuntimeObject** get_address_of_mVirtualButtonObserver_6() { return &___mVirtualButtonObserver_6; }
	inline void set_mVirtualButtonObserver_6(RuntimeObject* value)
	{
		___mVirtualButtonObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVirtualButtonObserver_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnVirtualButtonUpdated_7() { return static_cast<int32_t>(offsetof(VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48, ___OnVirtualButtonUpdated_7)); }
	inline Action_1_tBE16CB395B8F38C4F158FE71C1E64FEE25097B54 * get_OnVirtualButtonUpdated_7() const { return ___OnVirtualButtonUpdated_7; }
	inline Action_1_tBE16CB395B8F38C4F158FE71C1E64FEE25097B54 ** get_address_of_OnVirtualButtonUpdated_7() { return &___OnVirtualButtonUpdated_7; }
	inline void set_OnVirtualButtonUpdated_7(Action_1_tBE16CB395B8F38C4F158FE71C1E64FEE25097B54 * value)
	{
		___OnVirtualButtonUpdated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVirtualButtonUpdated_7), (void*)value);
	}
};


// Vuforia.VuAABB
struct VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E 
{
public:
	// Vuforia.VuVector3F Vuforia.VuAABB::center
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___center_0;
	// Vuforia.VuVector3F Vuforia.VuAABB::extent
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___extent_1;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E, ___center_0)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_center_0() const { return ___center_0; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_extent_1() { return static_cast<int32_t>(offsetof(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E, ___extent_1)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_extent_1() const { return ___extent_1; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_extent_1() { return &___extent_1; }
	inline void set_extent_1(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___extent_1 = value;
	}
};


// Vuforia.VuAnchorObservationStatusInfo
struct VuAnchorObservationStatusInfo_t5DBC86CFDAC369EA7E5AB9A2736297538656073B 
{
public:
	// System.Int32 Vuforia.VuAnchorObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuAnchorObservationStatusInfo_t5DBC86CFDAC369EA7E5AB9A2736297538656073B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuAreaTargetObservationStatusInfo
struct VuAreaTargetObservationStatusInfo_t7A1E7AF835D96EE3D5CA2F7EED899E4F901EB867 
{
public:
	// System.Int32 Vuforia.VuAreaTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationStatusInfo_t7A1E7AF835D96EE3D5CA2F7EED899E4F901EB867, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuCameraFrame
struct VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2  : public RuntimeObject
{
public:
	// Vuforia.VuState Vuforia.VuCameraFrame::mState
	VuState_tF67F3A9B352C644C40290BF377B126A71B14F344 * ___mState_0;
	// System.IntPtr Vuforia.VuCameraFrame::mNativeHandle
	intptr_t ___mNativeHandle_1;
	// System.Collections.Generic.IList`1<Vuforia.IVuImage> Vuforia.VuCameraFrame::mImages
	RuntimeObject* ___mImages_2;

public:
	inline static int32_t get_offset_of_mState_0() { return static_cast<int32_t>(offsetof(VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2, ___mState_0)); }
	inline VuState_tF67F3A9B352C644C40290BF377B126A71B14F344 * get_mState_0() const { return ___mState_0; }
	inline VuState_tF67F3A9B352C644C40290BF377B126A71B14F344 ** get_address_of_mState_0() { return &___mState_0; }
	inline void set_mState_0(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344 * value)
	{
		___mState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mState_0), (void*)value);
	}

	inline static int32_t get_offset_of_mNativeHandle_1() { return static_cast<int32_t>(offsetof(VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2, ___mNativeHandle_1)); }
	inline intptr_t get_mNativeHandle_1() const { return ___mNativeHandle_1; }
	inline intptr_t* get_address_of_mNativeHandle_1() { return &___mNativeHandle_1; }
	inline void set_mNativeHandle_1(intptr_t value)
	{
		___mNativeHandle_1 = value;
	}

	inline static int32_t get_offset_of_mImages_2() { return static_cast<int32_t>(offsetof(VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2, ___mImages_2)); }
	inline RuntimeObject* get_mImages_2() const { return ___mImages_2; }
	inline RuntimeObject** get_address_of_mImages_2() { return &___mImages_2; }
	inline void set_mImages_2(RuntimeObject* value)
	{
		___mImages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImages_2), (void*)value);
	}
};


// Vuforia.VuCylinderTargetObservationStatusInfo
struct VuCylinderTargetObservationStatusInfo_t6668EEE0AAE89E3BC1A7BC3AD671898853C895A6 
{
public:
	// System.Int32 Vuforia.VuCylinderTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationStatusInfo_t6668EEE0AAE89E3BC1A7BC3AD671898853C895A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuDevicePoseObservationStatusInfo
struct VuDevicePoseObservationStatusInfo_tF149BB175428CD203D1C4BBB2456DB26CFFCEFA5 
{
public:
	// System.Int32 Vuforia.VuDevicePoseObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuDevicePoseObservationStatusInfo_tF149BB175428CD203D1C4BBB2456DB26CFFCEFA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuEngine
struct VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuEngine::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Collections.Generic.IList`1<Vuforia.VuState> Vuforia.VuEngine::mStates
	RuntimeObject* ___mStates_1;
	// Vuforia.ObservationManager Vuforia.VuEngine::mObservationManager
	ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * ___mObservationManager_2;
	// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController> Vuforia.VuEngine::mControllers
	RuntimeObject* ___mControllers_3;
	// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.IVuObserver> Vuforia.VuEngine::mObservers
	RuntimeObject* ___mObservers_4;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mStates_1() { return static_cast<int32_t>(offsetof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29, ___mStates_1)); }
	inline RuntimeObject* get_mStates_1() const { return ___mStates_1; }
	inline RuntimeObject** get_address_of_mStates_1() { return &___mStates_1; }
	inline void set_mStates_1(RuntimeObject* value)
	{
		___mStates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStates_1), (void*)value);
	}

	inline static int32_t get_offset_of_mObservationManager_2() { return static_cast<int32_t>(offsetof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29, ___mObservationManager_2)); }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * get_mObservationManager_2() const { return ___mObservationManager_2; }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 ** get_address_of_mObservationManager_2() { return &___mObservationManager_2; }
	inline void set_mObservationManager_2(ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * value)
	{
		___mObservationManager_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservationManager_2), (void*)value);
	}

	inline static int32_t get_offset_of_mControllers_3() { return static_cast<int32_t>(offsetof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29, ___mControllers_3)); }
	inline RuntimeObject* get_mControllers_3() const { return ___mControllers_3; }
	inline RuntimeObject** get_address_of_mControllers_3() { return &___mControllers_3; }
	inline void set_mControllers_3(RuntimeObject* value)
	{
		___mControllers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mControllers_3), (void*)value);
	}

	inline static int32_t get_offset_of_mObservers_4() { return static_cast<int32_t>(offsetof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29, ___mObservers_4)); }
	inline RuntimeObject* get_mObservers_4() const { return ___mObservers_4; }
	inline RuntimeObject** get_address_of_mObservers_4() { return &___mObservers_4; }
	inline void set_mObservers_4(RuntimeObject* value)
	{
		___mObservers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservers_4), (void*)value);
	}
};


// Vuforia.VuEngineConfigSet
struct VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuEngineConfigSet::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.IVuEngineConfig> Vuforia.VuEngineConfigSet::mConfigs
	RuntimeObject* ___mConfigs_1;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mConfigs_1() { return static_cast<int32_t>(offsetof(VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35, ___mConfigs_1)); }
	inline RuntimeObject* get_mConfigs_1() const { return ___mConfigs_1; }
	inline RuntimeObject** get_address_of_mConfigs_1() { return &___mConfigs_1; }
	inline void set_mConfigs_1(RuntimeObject* value)
	{
		___mConfigs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mConfigs_1), (void*)value);
	}
};


// Vuforia.VuGuideView
struct VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGuideView::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuCameraIntrinsics Vuforia.VuGuideView::mVuCameraIntrinsics
	VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * ___mVuCameraIntrinsics_1;
	// Vuforia.VuImage Vuforia.VuGuideView::mImage
	VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C * ___mImage_2;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mVuCameraIntrinsics_1() { return static_cast<int32_t>(offsetof(VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0, ___mVuCameraIntrinsics_1)); }
	inline VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * get_mVuCameraIntrinsics_1() const { return ___mVuCameraIntrinsics_1; }
	inline VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 ** get_address_of_mVuCameraIntrinsics_1() { return &___mVuCameraIntrinsics_1; }
	inline void set_mVuCameraIntrinsics_1(VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * value)
	{
		___mVuCameraIntrinsics_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuCameraIntrinsics_1), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_2() { return static_cast<int32_t>(offsetof(VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0, ___mImage_2)); }
	inline VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C * get_mImage_2() const { return ___mImage_2; }
	inline VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C ** get_address_of_mImage_2() { return &___mImage_2; }
	inline void set_mImage_2(VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C * value)
	{
		___mImage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_2), (void*)value);
	}
};


// Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1 
{
public:
	// System.Nullable`1<System.Int32> Vuforia.VuIlluminationObservationInfo::ambientIntensity
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientIntensity_0;
	// System.Nullable`1<System.Int32> Vuforia.VuIlluminationObservationInfo::ambientColorTemperature
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientColorTemperature_1;
	// System.Single Vuforia.VuIlluminationObservationInfo::intensityCorrection
	float ___intensityCorrection_2;
	// Vuforia.VuVector4F Vuforia.VuIlluminationObservationInfo::colorCorrection
	VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683  ___colorCorrection_3;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1, ___ambientIntensity_0)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1, ___ambientColorTemperature_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___ambientColorTemperature_1 = value;
	}

	inline static int32_t get_offset_of_intensityCorrection_2() { return static_cast<int32_t>(offsetof(VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1, ___intensityCorrection_2)); }
	inline float get_intensityCorrection_2() const { return ___intensityCorrection_2; }
	inline float* get_address_of_intensityCorrection_2() { return &___intensityCorrection_2; }
	inline void set_intensityCorrection_2(float value)
	{
		___intensityCorrection_2 = value;
	}

	inline static int32_t get_offset_of_colorCorrection_3() { return static_cast<int32_t>(offsetof(VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1, ___colorCorrection_3)); }
	inline VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683  get_colorCorrection_3() const { return ___colorCorrection_3; }
	inline VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683 * get_address_of_colorCorrection_3() { return &___colorCorrection_3; }
	inline void set_colorCorrection_3(VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683  value)
	{
		___colorCorrection_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1_marshaled_pinvoke
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientIntensity_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientColorTemperature_1;
	float ___intensityCorrection_2;
	VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683  ___colorCorrection_3;
};
// Native definition for COM marshalling of Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1_marshaled_com
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientIntensity_0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___ambientColorTemperature_1;
	float ___intensityCorrection_2;
	VuVector4F_t00B8BC606DBA0AB75DFDFD2B424AE7ED81C6D683  ___colorCorrection_3;
};

// Vuforia.VuImagePixelFormat
struct VuImagePixelFormat_tA5DDBBDA1A2F84D6EB3ECDDCB2E72125B9FCBCBA 
{
public:
	// System.Int32 Vuforia.VuImagePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuImagePixelFormat_tA5DDBBDA1A2F84D6EB3ECDDCB2E72125B9FCBCBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuImageTargetObservationStatusInfo
struct VuImageTargetObservationStatusInfo_tDD977EADA9364BD6BF6388C6CA0E789EC160ADC9 
{
public:
	// System.Int32 Vuforia.VuImageTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuImageTargetObservationStatusInfo_tDD977EADA9364BD6BF6388C6CA0E789EC160ADC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuMarkInstanceIdType
struct VuMarkInstanceIdType_tC65BB9EC73968E6AA16B78529E23BA05E2EBA561 
{
public:
	// System.Int32 Vuforia.VuMarkInstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuMarkInstanceIdType_tC65BB9EC73968E6AA16B78529E23BA05E2EBA561, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuMarkObservationStatusInfo
struct VuMarkObservationStatusInfo_t0E8ADE5EF4AD39682642445156B668F4A43F4A37 
{
public:
	// System.Int32 Vuforia.VuMarkObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuMarkObservationStatusInfo_t0E8ADE5EF4AD39682642445156B668F4A43F4A37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479  : public ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.Internal.Observers.VuMarkObserver::TemplateResized
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___TemplateResized_6;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::OnStartedTrackingInstance
	Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * ___OnStartedTrackingInstance_7;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::OnStoppedTrackingInstance
	Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * ___OnStoppedTrackingInstance_8;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkObserver> Vuforia.Internal.Observers.VuMarkObserver::OnDisposedOfAllNativeInstances
	Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * ___OnDisposedOfAllNativeInstances_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::mTrackedInstances
	Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * ___mTrackedInstances_10;

public:
	inline static int32_t get_offset_of_TemplateResized_6() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___TemplateResized_6)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_TemplateResized_6() const { return ___TemplateResized_6; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_TemplateResized_6() { return &___TemplateResized_6; }
	inline void set_TemplateResized_6(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___TemplateResized_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TemplateResized_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartedTrackingInstance_7() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnStartedTrackingInstance_7)); }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * get_OnStartedTrackingInstance_7() const { return ___OnStartedTrackingInstance_7; }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 ** get_address_of_OnStartedTrackingInstance_7() { return &___OnStartedTrackingInstance_7; }
	inline void set_OnStartedTrackingInstance_7(Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * value)
	{
		___OnStartedTrackingInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartedTrackingInstance_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedTrackingInstance_8() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnStoppedTrackingInstance_8)); }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * get_OnStoppedTrackingInstance_8() const { return ___OnStoppedTrackingInstance_8; }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 ** get_address_of_OnStoppedTrackingInstance_8() { return &___OnStoppedTrackingInstance_8; }
	inline void set_OnStoppedTrackingInstance_8(Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * value)
	{
		___OnStoppedTrackingInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedTrackingInstance_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisposedOfAllNativeInstances_9() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnDisposedOfAllNativeInstances_9)); }
	inline Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * get_OnDisposedOfAllNativeInstances_9() const { return ___OnDisposedOfAllNativeInstances_9; }
	inline Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 ** get_address_of_OnDisposedOfAllNativeInstances_9() { return &___OnDisposedOfAllNativeInstances_9; }
	inline void set_OnDisposedOfAllNativeInstances_9(Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * value)
	{
		___OnDisposedOfAllNativeInstances_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisposedOfAllNativeInstances_9), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackedInstances_10() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___mTrackedInstances_10)); }
	inline Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * get_mTrackedInstances_10() const { return ___mTrackedInstances_10; }
	inline Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 ** get_address_of_mTrackedInstances_10() { return &___mTrackedInstances_10; }
	inline void set_mTrackedInstances_10(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * value)
	{
		___mTrackedInstances_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackedInstances_10), (void*)value);
	}
};


// Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16 
{
public:
	// Vuforia.VuMatrix44F Vuforia.VuMeshObservationInfo::modelMatrix
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___modelMatrix_0;
	// System.Collections.Generic.IList`1<Vuforia.VuMeshObservationBlock> Vuforia.VuMeshObservationInfo::meshes
	RuntimeObject* ___meshes_1;

public:
	inline static int32_t get_offset_of_modelMatrix_0() { return static_cast<int32_t>(offsetof(VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16, ___modelMatrix_0)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_modelMatrix_0() const { return ___modelMatrix_0; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_modelMatrix_0() { return &___modelMatrix_0; }
	inline void set_modelMatrix_0(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___modelMatrix_0 = value;
	}

	inline static int32_t get_offset_of_meshes_1() { return static_cast<int32_t>(offsetof(VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16, ___meshes_1)); }
	inline RuntimeObject* get_meshes_1() const { return ___meshes_1; }
	inline RuntimeObject** get_address_of_meshes_1() { return &___meshes_1; }
	inline void set_meshes_1(RuntimeObject* value)
	{
		___meshes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16_marshaled_pinvoke
{
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___modelMatrix_0;
	RuntimeObject* ___meshes_1;
};
// Native definition for COM marshalling of Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16_marshaled_com
{
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___modelMatrix_0;
	RuntimeObject* ___meshes_1;
};

// Vuforia.VuModelTargetObservationStatusInfo
struct VuModelTargetObservationStatusInfo_tCC2D92C5C5B1A3A873F1D0A460AE74FE00021A4A 
{
public:
	// System.Int32 Vuforia.VuModelTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuModelTargetObservationStatusInfo_tCC2D92C5C5B1A3A873F1D0A460AE74FE00021A4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuModelTargetTrackingMode
struct VuModelTargetTrackingMode_t38CBD12E328BAEA22BAC1D6C19B8BFE5FE3CBD07 
{
public:
	// System.Int32 Vuforia.VuModelTargetTrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuModelTargetTrackingMode_t38CBD12E328BAEA22BAC1D6C19B8BFE5FE3CBD07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuMotionHint
struct VuMotionHint_t7F2EFD7E548C88E501DF501B8938BC71CEF06382 
{
public:
	// System.Int32 Vuforia.VuMotionHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuMotionHint_t7F2EFD7E548C88E501DF501B8938BC71CEF06382, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuMultiTargetObservationStatusInfo
struct VuMultiTargetObservationStatusInfo_t30CE39AEE196416F353CB7CC85D57F49E6BE32EA 
{
public:
	// System.Int32 Vuforia.VuMultiTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuMultiTargetObservationStatusInfo_t30CE39AEE196416F353CB7CC85D57F49E6BE32EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuObjectTargetObservationStatusInfo
struct VuObjectTargetObservationStatusInfo_t84E47D88A1CF9C8939F154513C05FAE55DA6ECCC 
{
public:
	// System.Int32 Vuforia.VuObjectTargetObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationStatusInfo_t84E47D88A1CF9C8939F154513C05FAE55DA6ECCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuObservation
struct VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuObservation::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Nullable`1<System.Int32> Vuforia.VuObservation::mObserverId
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mObserverId_1;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mObserverId_1() { return static_cast<int32_t>(offsetof(VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C, ___mObserverId_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mObserverId_1() const { return ___mObserverId_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mObserverId_1() { return &___mObserverId_1; }
	inline void set_mObserverId_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mObserverId_1 = value;
	}
};


// Vuforia.VuObservationPoseStatus
struct VuObservationPoseStatus_t31D78B594908856D6495E2D4CDBF64BBE137D4C4 
{
public:
	// System.Int32 Vuforia.VuObservationPoseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuObservationPoseStatus_t31D78B594908856D6495E2D4CDBF64BBE137D4C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuObserver
struct VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795  : public RuntimeObject
{
public:
	// Vuforia.VuEngine Vuforia.VuObserver::mEngine
	VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * ___mEngine_0;
	// System.IntPtr Vuforia.VuObserver::mNativeHandle
	intptr_t ___mNativeHandle_1;
	// System.Int32 Vuforia.VuObserver::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_mEngine_0() { return static_cast<int32_t>(offsetof(VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795, ___mEngine_0)); }
	inline VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * get_mEngine_0() const { return ___mEngine_0; }
	inline VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 ** get_address_of_mEngine_0() { return &___mEngine_0; }
	inline void set_mEngine_0(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * value)
	{
		___mEngine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_0), (void*)value);
	}

	inline static int32_t get_offset_of_mNativeHandle_1() { return static_cast<int32_t>(offsetof(VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795, ___mNativeHandle_1)); }
	inline intptr_t get_mNativeHandle_1() const { return ___mNativeHandle_1; }
	inline intptr_t* get_address_of_mNativeHandle_1() { return &___mNativeHandle_1; }
	inline void set_mNativeHandle_1(intptr_t value)
	{
		___mNativeHandle_1 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795, ___U3CIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
	}
};


// Vuforia.VuState
struct VuState_tF67F3A9B352C644C40290BF377B126A71B14F344  : public RuntimeObject
{
public:
	// Vuforia.VuEngine Vuforia.VuState::mEngine
	VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * ___mEngine_0;
	// Vuforia.ObservationManager Vuforia.VuState::mObservationManager
	ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * ___mObservationManager_1;
	// System.IntPtr Vuforia.VuState::mNativeHandle
	intptr_t ___mNativeHandle_2;
	// System.Nullable`1<System.Boolean> Vuforia.VuState::mHasCameraFrame
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___mHasCameraFrame_3;
	// Vuforia.VuCameraFrame Vuforia.VuState::mCameraFrame
	VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2 * ___mCameraFrame_4;
	// Vuforia.VuCameraIntrinsics Vuforia.VuState::mVuCameraIntrinsics
	VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * ___mVuCameraIntrinsics_5;
	// Vuforia.ObservationList`1<Vuforia.IVuObservation> Vuforia.VuState::mObservations
	ObservationList_1_t1E9A2383F3DE5879349EFAD8AB9EFC5E9D94AD66 * ___mObservations_6;
	// Vuforia.VuRenderState Vuforia.VuState::mRenderState
	VuRenderState_t7996AF386E68F6AF43118CCEA7CCBD2BD0712B03 * ___mRenderState_7;

public:
	inline static int32_t get_offset_of_mEngine_0() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mEngine_0)); }
	inline VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * get_mEngine_0() const { return ___mEngine_0; }
	inline VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 ** get_address_of_mEngine_0() { return &___mEngine_0; }
	inline void set_mEngine_0(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29 * value)
	{
		___mEngine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_0), (void*)value);
	}

	inline static int32_t get_offset_of_mObservationManager_1() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mObservationManager_1)); }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * get_mObservationManager_1() const { return ___mObservationManager_1; }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 ** get_address_of_mObservationManager_1() { return &___mObservationManager_1; }
	inline void set_mObservationManager_1(ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * value)
	{
		___mObservationManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservationManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_mNativeHandle_2() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mNativeHandle_2)); }
	inline intptr_t get_mNativeHandle_2() const { return ___mNativeHandle_2; }
	inline intptr_t* get_address_of_mNativeHandle_2() { return &___mNativeHandle_2; }
	inline void set_mNativeHandle_2(intptr_t value)
	{
		___mNativeHandle_2 = value;
	}

	inline static int32_t get_offset_of_mHasCameraFrame_3() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mHasCameraFrame_3)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_mHasCameraFrame_3() const { return ___mHasCameraFrame_3; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_mHasCameraFrame_3() { return &___mHasCameraFrame_3; }
	inline void set_mHasCameraFrame_3(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___mHasCameraFrame_3 = value;
	}

	inline static int32_t get_offset_of_mCameraFrame_4() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mCameraFrame_4)); }
	inline VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2 * get_mCameraFrame_4() const { return ___mCameraFrame_4; }
	inline VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2 ** get_address_of_mCameraFrame_4() { return &___mCameraFrame_4; }
	inline void set_mCameraFrame_4(VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2 * value)
	{
		___mCameraFrame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraFrame_4), (void*)value);
	}

	inline static int32_t get_offset_of_mVuCameraIntrinsics_5() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mVuCameraIntrinsics_5)); }
	inline VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * get_mVuCameraIntrinsics_5() const { return ___mVuCameraIntrinsics_5; }
	inline VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 ** get_address_of_mVuCameraIntrinsics_5() { return &___mVuCameraIntrinsics_5; }
	inline void set_mVuCameraIntrinsics_5(VuCameraIntrinsics_tEED6F05DE6136520B2E84346891D7951557BD7A7 * value)
	{
		___mVuCameraIntrinsics_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuCameraIntrinsics_5), (void*)value);
	}

	inline static int32_t get_offset_of_mObservations_6() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mObservations_6)); }
	inline ObservationList_1_t1E9A2383F3DE5879349EFAD8AB9EFC5E9D94AD66 * get_mObservations_6() const { return ___mObservations_6; }
	inline ObservationList_1_t1E9A2383F3DE5879349EFAD8AB9EFC5E9D94AD66 ** get_address_of_mObservations_6() { return &___mObservations_6; }
	inline void set_mObservations_6(ObservationList_1_t1E9A2383F3DE5879349EFAD8AB9EFC5E9D94AD66 * value)
	{
		___mObservations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservations_6), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderState_7() { return static_cast<int32_t>(offsetof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344, ___mRenderState_7)); }
	inline VuRenderState_t7996AF386E68F6AF43118CCEA7CCBD2BD0712B03 * get_mRenderState_7() const { return ___mRenderState_7; }
	inline VuRenderState_t7996AF386E68F6AF43118CCEA7CCBD2BD0712B03 ** get_address_of_mRenderState_7() { return &___mRenderState_7; }
	inline void set_mRenderState_7(VuRenderState_t7996AF386E68F6AF43118CCEA7CCBD2BD0712B03 * value)
	{
		___mRenderState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRenderState_7), (void*)value);
	}
};


// Vuforia.VuValidationAreaObservationStatusInfo
struct VuValidationAreaObservationStatusInfo_t97869C6DA3A46A257D550DD11E9A16690622F2CC 
{
public:
	// System.Int32 Vuforia.VuValidationAreaObservationStatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationStatusInfo_t97869C6DA3A46A257D550DD11E9A16690622F2CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1 
{
public:
	// System.String Vuforia.VuValidationAreaObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuValidationAreaObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuMatrix44F Vuforia.VuValidationAreaObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_2;
	// Vuforia.VuVector2F Vuforia.VuValidationAreaObservationTargetInfo::size
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_poseOffset_2() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1, ___poseOffset_2)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_2() const { return ___poseOffset_2; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_2() { return &___poseOffset_2; }
	inline void set_poseOffset_2(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1, ___size_3)); }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  get_size_3() const { return ___size_3; }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  value)
	{
		___size_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_2;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;
};
// Native definition for COM marshalling of Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_2;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;
};

// Vuforia.VuValidationAreaTrainingStatus
struct VuValidationAreaTrainingStatus_t8616F9A91E1E9C9D73C628386C6353D6F51BE5A7 
{
public:
	// System.Int32 Vuforia.VuValidationAreaTrainingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuValidationAreaTrainingStatus_t8616F9A91E1E9C9D73C628386C6353D6F51BE5A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuVirtualButtonState
struct VuVirtualButtonState_t8B7EB157519C154D9E8081FEEB616565AC8E5A56 
{
public:
	// System.Int32 Vuforia.VuVirtualButtonState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuVirtualButtonState_t8B7EB157519C154D9E8081FEEB616565AC8E5A56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaInitError
struct VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774 
{
public:
	// System.Int32 Vuforia.VuforiaInitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuforiaInitError_t8EDBA61A511F9B1518C1EA806C4769BA8E788774, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88  : public RuntimeObject
{
public:
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * ___ntlm_credentials_0;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated_1;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing_2;
	// System.IO.Stream System.Net.WebConnection::networkStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___networkStream_3;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket_4;
	// Mono.Net.Security.MonoTlsStream System.Net.WebConnection::monoTlsStream
	MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * ___monoTlsStream_5;
	// System.Net.WebConnectionTunnel System.Net.WebConnection::tunnel
	WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * ___tunnel_6;
	// System.Int32 System.Net.WebConnection::disposed
	int32_t ___disposed_7;
	// System.Net.ServicePoint System.Net.WebConnection::<ServicePoint>k__BackingField
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___U3CServicePointU3Ek__BackingField_8;
	// System.DateTime System.Net.WebConnection::idleSince
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___idleSince_9;
	// System.Net.WebOperation System.Net.WebConnection::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_10;

public:
	inline static int32_t get_offset_of_ntlm_credentials_0() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_credentials_0)); }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * get_ntlm_credentials_0() const { return ___ntlm_credentials_0; }
	inline NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 ** get_address_of_ntlm_credentials_0() { return &___ntlm_credentials_0; }
	inline void set_ntlm_credentials_0(NetworkCredential_t263CA6068540C6DA0E1CDE919BD7A15C28D55686 * value)
	{
		___ntlm_credentials_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ntlm_credentials_0), (void*)value);
	}

	inline static int32_t get_offset_of_ntlm_authenticated_1() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___ntlm_authenticated_1)); }
	inline bool get_ntlm_authenticated_1() const { return ___ntlm_authenticated_1; }
	inline bool* get_address_of_ntlm_authenticated_1() { return &___ntlm_authenticated_1; }
	inline void set_ntlm_authenticated_1(bool value)
	{
		___ntlm_authenticated_1 = value;
	}

	inline static int32_t get_offset_of_unsafe_sharing_2() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___unsafe_sharing_2)); }
	inline bool get_unsafe_sharing_2() const { return ___unsafe_sharing_2; }
	inline bool* get_address_of_unsafe_sharing_2() { return &___unsafe_sharing_2; }
	inline void set_unsafe_sharing_2(bool value)
	{
		___unsafe_sharing_2 = value;
	}

	inline static int32_t get_offset_of_networkStream_3() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___networkStream_3)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_networkStream_3() const { return ___networkStream_3; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_networkStream_3() { return &___networkStream_3; }
	inline void set_networkStream_3(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___networkStream_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_3), (void*)value);
	}

	inline static int32_t get_offset_of_socket_4() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___socket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_socket_4() const { return ___socket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_socket_4() { return &___socket_4; }
	inline void set_socket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___socket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_4), (void*)value);
	}

	inline static int32_t get_offset_of_monoTlsStream_5() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___monoTlsStream_5)); }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * get_monoTlsStream_5() const { return ___monoTlsStream_5; }
	inline MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 ** get_address_of_monoTlsStream_5() { return &___monoTlsStream_5; }
	inline void set_monoTlsStream_5(MonoTlsStream_t1CBBE92DE7BA1B432289982184305AF431C01233 * value)
	{
		___monoTlsStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monoTlsStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_tunnel_6() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___tunnel_6)); }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * get_tunnel_6() const { return ___tunnel_6; }
	inline WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 ** get_address_of_tunnel_6() { return &___tunnel_6; }
	inline void set_tunnel_6(WebConnectionTunnel_t0DEDF9AB5FFB065A77FAAA0F72C6C4763CDBC925 * value)
	{
		___tunnel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tunnel_6), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___disposed_7)); }
	inline int32_t get_disposed_7() const { return ___disposed_7; }
	inline int32_t* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(int32_t value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_U3CServicePointU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___U3CServicePointU3Ek__BackingField_8)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_U3CServicePointU3Ek__BackingField_8() const { return ___U3CServicePointU3Ek__BackingField_8; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_U3CServicePointU3Ek__BackingField_8() { return &___U3CServicePointU3Ek__BackingField_8; }
	inline void set_U3CServicePointU3Ek__BackingField_8(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___U3CServicePointU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServicePointU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_idleSince_9() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___idleSince_9)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_idleSince_9() const { return ___idleSince_9; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_idleSince_9() { return &___idleSince_9; }
	inline void set_idleSince_9(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___idleSince_9 = value;
	}

	inline static int32_t get_offset_of_currentOperation_10() { return static_cast<int32_t>(offsetof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88, ___currentOperation_10)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_10() const { return ___currentOperation_10; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_10() { return &___currentOperation_10; }
	inline void set_currentOperation_10(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_10), (void*)value);
	}
};


// System.Net.WebConnectionStream
struct WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Boolean System.Net.WebConnectionStream::closed
	bool ___closed_4;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_5;
	// System.Object System.Net.WebConnectionStream::locker
	RuntimeObject * ___locker_6;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_7;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_8;
	// System.Boolean System.Net.WebConnectionStream::IgnoreIOErrors
	bool ___IgnoreIOErrors_9;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::<Request>k__BackingField
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___U3CRequestU3Ek__BackingField_10;
	// System.Net.WebConnection System.Net.WebConnectionStream::<Connection>k__BackingField
	WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * ___U3CConnectionU3Ek__BackingField_11;
	// System.Net.WebOperation System.Net.WebConnectionStream::<Operation>k__BackingField
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___U3COperationU3Ek__BackingField_12;
	// System.IO.Stream System.Net.WebConnectionStream::<InnerStream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CInnerStreamU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_closed_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___closed_4)); }
	inline bool get_closed_4() const { return ___closed_4; }
	inline bool* get_address_of_closed_4() { return &___closed_4; }
	inline void set_closed_4(bool value)
	{
		___closed_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_locker_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___locker_6)); }
	inline RuntimeObject * get_locker_6() const { return ___locker_6; }
	inline RuntimeObject ** get_address_of_locker_6() { return &___locker_6; }
	inline void set_locker_6(RuntimeObject * value)
	{
		___locker_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_6), (void*)value);
	}

	inline static int32_t get_offset_of_read_timeout_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___read_timeout_7)); }
	inline int32_t get_read_timeout_7() const { return ___read_timeout_7; }
	inline int32_t* get_address_of_read_timeout_7() { return &___read_timeout_7; }
	inline void set_read_timeout_7(int32_t value)
	{
		___read_timeout_7 = value;
	}

	inline static int32_t get_offset_of_write_timeout_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___write_timeout_8)); }
	inline int32_t get_write_timeout_8() const { return ___write_timeout_8; }
	inline int32_t* get_address_of_write_timeout_8() { return &___write_timeout_8; }
	inline void set_write_timeout_8(int32_t value)
	{
		___write_timeout_8 = value;
	}

	inline static int32_t get_offset_of_IgnoreIOErrors_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___IgnoreIOErrors_9)); }
	inline bool get_IgnoreIOErrors_9() const { return ___IgnoreIOErrors_9; }
	inline bool* get_address_of_IgnoreIOErrors_9() { return &___IgnoreIOErrors_9; }
	inline void set_IgnoreIOErrors_9(bool value)
	{
		___IgnoreIOErrors_9 = value;
	}

	inline static int32_t get_offset_of_U3CRequestU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CRequestU3Ek__BackingField_10)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_U3CRequestU3Ek__BackingField_10() const { return ___U3CRequestU3Ek__BackingField_10; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_U3CRequestU3Ek__BackingField_10() { return &___U3CRequestU3Ek__BackingField_10; }
	inline void set_U3CRequestU3Ek__BackingField_10(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___U3CRequestU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CConnectionU3Ek__BackingField_11)); }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * get_U3CConnectionU3Ek__BackingField_11() const { return ___U3CConnectionU3Ek__BackingField_11; }
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 ** get_address_of_U3CConnectionU3Ek__BackingField_11() { return &___U3CConnectionU3Ek__BackingField_11; }
	inline void set_U3CConnectionU3Ek__BackingField_11(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88 * value)
	{
		___U3CConnectionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConnectionU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3COperationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3COperationU3Ek__BackingField_12)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_U3COperationU3Ek__BackingField_12() const { return ___U3COperationU3Ek__BackingField_12; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_U3COperationU3Ek__BackingField_12() { return &___U3COperationU3Ek__BackingField_12; }
	inline void set_U3COperationU3Ek__BackingField_12(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___U3COperationU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperationU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInnerStreamU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918, ___U3CInnerStreamU3Ek__BackingField_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CInnerStreamU3Ek__BackingField_13() const { return ___U3CInnerStreamU3Ek__BackingField_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CInnerStreamU3Ek__BackingField_13() { return &___U3CInnerStreamU3Ek__BackingField_13; }
	inline void set_U3CInnerStreamU3Ek__BackingField_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CInnerStreamU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInnerStreamU3Ek__BackingField_13), (void*)value);
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData
struct ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::InverseMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___InverseMatrix_1;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::CenterEyeRayFrom
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::CenterEyeRayTo
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayTo_5;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___ProjectionMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___InverseMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___CenterEyeRayFrom_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___CenterEyeRayTo_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___MaxDepth_6)); }
	inline float get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline float* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(float value)
	{
		___MaxDepth_6 = value;
	}
};


// Vuforia.WebCamProfile/ProfileData
struct ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE 
{
public:
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___RequestedTextureSize_0;
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedTextureSize_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___ResampledTextureSize_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};


// System.Nullable`1<Vuforia.VuAnchorObservationStatusInfo>
struct Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuAreaTargetObservationStatusInfo>
struct Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuCylinderTargetObservationStatusInfo>
struct Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuDevicePoseObservationStatusInfo>
struct Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuIlluminationObservationInfo>
struct Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628 
{
public:
	// T System.Nullable`1::value
	VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628, ___value_0)); }
	inline VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1  get_value_0() const { return ___value_0; }
	inline VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuIlluminationObservationInfo_t43D29045F5C0ACFBBD011EAF536291A513218AE1  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuImageTargetObservationStatusInfo>
struct Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMarkObservationStatusInfo>
struct Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMeshObservationInfo>
struct Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B 
{
public:
	// T System.Nullable`1::value
	VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B, ___value_0)); }
	inline VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16  get_value_0() const { return ___value_0; }
	inline VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuMeshObservationInfo_tD859CFDB1BBB22CFC7C821375F05BA7A6FBADE16  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___meshes_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuModelTargetObservationStatusInfo>
struct Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMultiTargetObservationStatusInfo>
struct Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuObjectTargetObservationStatusInfo>
struct Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuValidationAreaObservationStatusInfo>
struct Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>
struct Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F 
{
public:
	// T System.Nullable`1::value
	VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F, ___value_0)); }
	inline VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1  get_value_0() const { return ___value_0; }
	inline VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuValidationAreaObservationTargetInfo_t14CA68C6538968B5F3DDEF060A7D0D5B3DCBCDE1  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130  : public VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuGuideView,System.IntPtr>
struct VuGenericTypedList_2_t577E94558880FFED7596907B4EEB0E0649B5ABDE  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuHitTest,System.IntPtr>
struct VuGenericTypedList_2_t00AC5A2EE9BAA9FA3D269FE0C93484F411A92D5A  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuModelTargetState,System.IntPtr>
struct VuGenericTypedList_2_tC0B4B33C0422CB7EB6D8049D83BAAD2BFA1627AE  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuValidationAreaLabel,System.IntPtr>
struct VuGenericTypedList_2_tA3ED3BAFCF5E64F26034ED9C37F8016F256759DF  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.Internal.VuforiaDriver.CameraImage
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C 
{
public:
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::Timestamp
	int64_t ___Timestamp_0;
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::ExposureTime
	int64_t ___ExposureTime_1;
	// System.IntPtr Vuforia.Internal.VuforiaDriver.CameraImage::Buffer
	intptr_t ___Buffer_2;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::BufferSize
	int32_t ___BufferSize_3;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Index
	int32_t ___Index_4;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Width
	int32_t ___Width_5;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Height
	int32_t ___Height_6;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Stride
	int32_t ___Stride_7;
	// Vuforia.DriverPixelFormat Vuforia.Internal.VuforiaDriver.CameraImage::Format
	int32_t ___Format_8;
	// Vuforia.Internal.VuforiaDriver.CameraIntrinsics Vuforia.Internal.VuforiaDriver.CameraImage::Intrinsics
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  ___Intrinsics_9;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Timestamp_0)); }
	inline int64_t get_Timestamp_0() const { return ___Timestamp_0; }
	inline int64_t* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(int64_t value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_ExposureTime_1() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___ExposureTime_1)); }
	inline int64_t get_ExposureTime_1() const { return ___ExposureTime_1; }
	inline int64_t* get_address_of_ExposureTime_1() { return &___ExposureTime_1; }
	inline void set_ExposureTime_1(int64_t value)
	{
		___ExposureTime_1 = value;
	}

	inline static int32_t get_offset_of_Buffer_2() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Buffer_2)); }
	inline intptr_t get_Buffer_2() const { return ___Buffer_2; }
	inline intptr_t* get_address_of_Buffer_2() { return &___Buffer_2; }
	inline void set_Buffer_2(intptr_t value)
	{
		___Buffer_2 = value;
	}

	inline static int32_t get_offset_of_BufferSize_3() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___BufferSize_3)); }
	inline int32_t get_BufferSize_3() const { return ___BufferSize_3; }
	inline int32_t* get_address_of_BufferSize_3() { return &___BufferSize_3; }
	inline void set_BufferSize_3(int32_t value)
	{
		___BufferSize_3 = value;
	}

	inline static int32_t get_offset_of_Index_4() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Index_4)); }
	inline int32_t get_Index_4() const { return ___Index_4; }
	inline int32_t* get_address_of_Index_4() { return &___Index_4; }
	inline void set_Index_4(int32_t value)
	{
		___Index_4 = value;
	}

	inline static int32_t get_offset_of_Width_5() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Width_5)); }
	inline int32_t get_Width_5() const { return ___Width_5; }
	inline int32_t* get_address_of_Width_5() { return &___Width_5; }
	inline void set_Width_5(int32_t value)
	{
		___Width_5 = value;
	}

	inline static int32_t get_offset_of_Height_6() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Height_6)); }
	inline int32_t get_Height_6() const { return ___Height_6; }
	inline int32_t* get_address_of_Height_6() { return &___Height_6; }
	inline void set_Height_6(int32_t value)
	{
		___Height_6 = value;
	}

	inline static int32_t get_offset_of_Stride_7() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Stride_7)); }
	inline int32_t get_Stride_7() const { return ___Stride_7; }
	inline int32_t* get_address_of_Stride_7() { return &___Stride_7; }
	inline void set_Stride_7(int32_t value)
	{
		___Stride_7 = value;
	}

	inline static int32_t get_offset_of_Format_8() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Format_8)); }
	inline int32_t get_Format_8() const { return ___Format_8; }
	inline int32_t* get_address_of_Format_8() { return &___Format_8; }
	inline void set_Format_8(int32_t value)
	{
		___Format_8 = value;
	}

	inline static int32_t get_offset_of_Intrinsics_9() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Intrinsics_9)); }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  get_Intrinsics_9() const { return ___Intrinsics_9; }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 * get_address_of_Intrinsics_9() { return &___Intrinsics_9; }
	inline void set_Intrinsics_9(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  value)
	{
		___Intrinsics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_pinvoke
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke ___Intrinsics_9;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_com
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com ___Intrinsics_9;
};
#pragma pack(pop, tp)

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

// Vuforia.VuAnchorObserver
struct VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C 
{
public:
	// System.String Vuforia.VuAreaTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuAreaTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector3F Vuforia.VuAreaTargetObservationTargetInfo::size
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	// Vuforia.VuAABB Vuforia.VuAreaTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	// System.Boolean Vuforia.VuAreaTargetObservationTargetInfo::requiresExternalPositions
	bool ___requiresExternalPositions_4;
	// Vuforia.VuMatrix44F Vuforia.VuAreaTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_5;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___size_2)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_size_2() const { return ___size_2; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_bbox_3() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___bbox_3)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_3() const { return ___bbox_3; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_3() { return &___bbox_3; }
	inline void set_bbox_3(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_3 = value;
	}

	inline static int32_t get_offset_of_requiresExternalPositions_4() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___requiresExternalPositions_4)); }
	inline bool get_requiresExternalPositions_4() const { return ___requiresExternalPositions_4; }
	inline bool* get_address_of_requiresExternalPositions_4() { return &___requiresExternalPositions_4; }
	inline void set_requiresExternalPositions_4(bool value)
	{
		___requiresExternalPositions_4 = value;
	}

	inline static int32_t get_offset_of_poseOffset_5() { return static_cast<int32_t>(offsetof(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C, ___poseOffset_5)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_5() const { return ___poseOffset_5; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_5() { return &___poseOffset_5; }
	inline void set_poseOffset_5(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	int32_t ___requiresExternalPositions_4;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_5;
};
// Native definition for COM marshalling of Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	int32_t ___requiresExternalPositions_4;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_5;
};

// Vuforia.VuAreaTargetObserver
struct VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuCameraFieldList
struct VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E  : public VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C
{
public:

public:
};


// Vuforia.VuCameraVideoModeList
struct VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A  : public VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3
{
public:

public:
};


// Vuforia.VuCloudImageTargetObservation
struct VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF  : public VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C
{
public:
	// System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo> Vuforia.VuCloudImageTargetObservation::mTargetInfo
	Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F  ___mTargetInfo_2;

public:
	inline static int32_t get_offset_of_mTargetInfo_2() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF, ___mTargetInfo_2)); }
	inline Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F  get_mTargetInfo_2() const { return ___mTargetInfo_2; }
	inline Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F * get_address_of_mTargetInfo_2() { return &___mTargetInfo_2; }
	inline void set_mTargetInfo_2(Nullable_1_tBE51386DC3A2437EA9FB3921C336F1A46D7F635F  value)
	{
		___mTargetInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_2))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_2))->___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_2))->___value_0))->___metadata_2), (void*)NULL);
		#endif
	}
};


// Vuforia.VuCloudImageTargetObserver
struct VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:
	// Vuforia.ObservationManager Vuforia.VuCloudImageTargetObserver::mObservationManager
	ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * ___mObservationManager_3;
	// Vuforia.VuCloudImageTargetObservationsHandler Vuforia.VuCloudImageTargetObserver::mObservationsHandler
	VuCloudImageTargetObservationsHandler_t556F6230D7302C541895C5F94180B7B45103A152 * ___mObservationsHandler_4;
	// Vuforia.VuCloudImageTargetQueryErrorHandler Vuforia.VuCloudImageTargetObserver::mErrorHandler
	VuCloudImageTargetQueryErrorHandler_tFB2BDDA24AA36054E5F4F0A471A5120CFB0C07E9 * ___mErrorHandler_5;
	// System.Object Vuforia.VuCloudImageTargetObserver::mCallbacksClientData
	RuntimeObject * ___mCallbacksClientData_6;
	// System.Runtime.InteropServices.GCHandle Vuforia.VuCloudImageTargetObserver::mInstanceHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___mInstanceHandle_7;

public:
	inline static int32_t get_offset_of_mObservationManager_3() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7, ___mObservationManager_3)); }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * get_mObservationManager_3() const { return ___mObservationManager_3; }
	inline ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 ** get_address_of_mObservationManager_3() { return &___mObservationManager_3; }
	inline void set_mObservationManager_3(ObservationManager_t14E9D96E2A5E2AA023EBA2C933EDD12CE649FB93 * value)
	{
		___mObservationManager_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservationManager_3), (void*)value);
	}

	inline static int32_t get_offset_of_mObservationsHandler_4() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7, ___mObservationsHandler_4)); }
	inline VuCloudImageTargetObservationsHandler_t556F6230D7302C541895C5F94180B7B45103A152 * get_mObservationsHandler_4() const { return ___mObservationsHandler_4; }
	inline VuCloudImageTargetObservationsHandler_t556F6230D7302C541895C5F94180B7B45103A152 ** get_address_of_mObservationsHandler_4() { return &___mObservationsHandler_4; }
	inline void set_mObservationsHandler_4(VuCloudImageTargetObservationsHandler_t556F6230D7302C541895C5F94180B7B45103A152 * value)
	{
		___mObservationsHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObservationsHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_mErrorHandler_5() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7, ___mErrorHandler_5)); }
	inline VuCloudImageTargetQueryErrorHandler_tFB2BDDA24AA36054E5F4F0A471A5120CFB0C07E9 * get_mErrorHandler_5() const { return ___mErrorHandler_5; }
	inline VuCloudImageTargetQueryErrorHandler_tFB2BDDA24AA36054E5F4F0A471A5120CFB0C07E9 ** get_address_of_mErrorHandler_5() { return &___mErrorHandler_5; }
	inline void set_mErrorHandler_5(VuCloudImageTargetQueryErrorHandler_tFB2BDDA24AA36054E5F4F0A471A5120CFB0C07E9 * value)
	{
		___mErrorHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mErrorHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCallbacksClientData_6() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7, ___mCallbacksClientData_6)); }
	inline RuntimeObject * get_mCallbacksClientData_6() const { return ___mCallbacksClientData_6; }
	inline RuntimeObject ** get_address_of_mCallbacksClientData_6() { return &___mCallbacksClientData_6; }
	inline void set_mCallbacksClientData_6(RuntimeObject * value)
	{
		___mCallbacksClientData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCallbacksClientData_6), (void*)value);
	}

	inline static int32_t get_offset_of_mInstanceHandle_7() { return static_cast<int32_t>(offsetof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7, ___mInstanceHandle_7)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_mInstanceHandle_7() const { return ___mInstanceHandle_7; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_mInstanceHandle_7() { return &___mInstanceHandle_7; }
	inline void set_mInstanceHandle_7(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___mInstanceHandle_7 = value;
	}
};


// Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E 
{
public:
	// System.String Vuforia.VuCylinderTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuCylinderTargetObservationTargetInfo::name
	String_t* ___name_1;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::sideLength
	float ___sideLength_2;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::topDiameter
	float ___topDiameter_3;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::bottomDiameter
	float ___bottomDiameter_4;
	// Vuforia.VuAABB Vuforia.VuCylinderTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	// Vuforia.VuMatrix44F Vuforia.VuCylinderTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_sideLength_2() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___sideLength_2)); }
	inline float get_sideLength_2() const { return ___sideLength_2; }
	inline float* get_address_of_sideLength_2() { return &___sideLength_2; }
	inline void set_sideLength_2(float value)
	{
		___sideLength_2 = value;
	}

	inline static int32_t get_offset_of_topDiameter_3() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___topDiameter_3)); }
	inline float get_topDiameter_3() const { return ___topDiameter_3; }
	inline float* get_address_of_topDiameter_3() { return &___topDiameter_3; }
	inline void set_topDiameter_3(float value)
	{
		___topDiameter_3 = value;
	}

	inline static int32_t get_offset_of_bottomDiameter_4() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___bottomDiameter_4)); }
	inline float get_bottomDiameter_4() const { return ___bottomDiameter_4; }
	inline float* get_address_of_bottomDiameter_4() { return &___bottomDiameter_4; }
	inline void set_bottomDiameter_4(float value)
	{
		___bottomDiameter_4 = value;
	}

	inline static int32_t get_offset_of_bbox_5() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___bbox_5)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_5() const { return ___bbox_5; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_5() { return &___bbox_5; }
	inline void set_bbox_5(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_5 = value;
	}

	inline static int32_t get_offset_of_poseOffset_6() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E, ___poseOffset_6)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_6() const { return ___poseOffset_6; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_6() { return &___poseOffset_6; }
	inline void set_poseOffset_6(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	float ___sideLength_2;
	float ___topDiameter_3;
	float ___bottomDiameter_4;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;
};
// Native definition for COM marshalling of Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	float ___sideLength_2;
	float ___topDiameter_3;
	float ___bottomDiameter_4;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;
};

// Vuforia.VuCylinderTargetObserver
struct VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuDevicePoseObserver
struct VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuIlluminationObserver
struct VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuImageInfo
struct VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716 
{
public:
	// System.Int32 Vuforia.VuImageInfo::width
	int32_t ___width_0;
	// System.Int32 Vuforia.VuImageInfo::height
	int32_t ___height_1;
	// System.Int32 Vuforia.VuImageInfo::stride
	int32_t ___stride_2;
	// System.Int32 Vuforia.VuImageInfo::bufferWidth
	int32_t ___bufferWidth_3;
	// System.Int32 Vuforia.VuImageInfo::bufferHeight
	int32_t ___bufferHeight_4;
	// System.Int32 Vuforia.VuImageInfo::bufferSize
	int32_t ___bufferSize_5;
	// Vuforia.VuImagePixelFormat Vuforia.VuImageInfo::format
	int32_t ___format_6;
	// System.IntPtr Vuforia.VuImageInfo::buffer
	intptr_t ___buffer_7;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_stride_2() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___stride_2)); }
	inline int32_t get_stride_2() const { return ___stride_2; }
	inline int32_t* get_address_of_stride_2() { return &___stride_2; }
	inline void set_stride_2(int32_t value)
	{
		___stride_2 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_3() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___bufferWidth_3)); }
	inline int32_t get_bufferWidth_3() const { return ___bufferWidth_3; }
	inline int32_t* get_address_of_bufferWidth_3() { return &___bufferWidth_3; }
	inline void set_bufferWidth_3(int32_t value)
	{
		___bufferWidth_3 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_4() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___bufferHeight_4)); }
	inline int32_t get_bufferHeight_4() const { return ___bufferHeight_4; }
	inline int32_t* get_address_of_bufferHeight_4() { return &___bufferHeight_4; }
	inline void set_bufferHeight_4(int32_t value)
	{
		___bufferHeight_4 = value;
	}

	inline static int32_t get_offset_of_bufferSize_5() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___bufferSize_5)); }
	inline int32_t get_bufferSize_5() const { return ___bufferSize_5; }
	inline int32_t* get_address_of_bufferSize_5() { return &___bufferSize_5; }
	inline void set_bufferSize_5(int32_t value)
	{
		___bufferSize_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_buffer_7() { return static_cast<int32_t>(offsetof(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716, ___buffer_7)); }
	inline intptr_t get_buffer_7() const { return ___buffer_7; }
	inline intptr_t* get_address_of_buffer_7() { return &___buffer_7; }
	inline void set_buffer_7(intptr_t value)
	{
		___buffer_7 = value;
	}
};


// Vuforia.VuImageList
struct VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuImagePixelFormatList
struct VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0  : public VuGenericList_1_tF2F0E442BF6DE592C82546DAAC9CE93CC6A14A44
{
public:

public:
};


// Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703 
{
public:
	// System.String Vuforia.VuImageTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuImageTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector2F Vuforia.VuImageTargetObservationTargetInfo::size
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_2;
	// Vuforia.VuAABB Vuforia.VuImageTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	// Vuforia.VuMatrix44F Vuforia.VuImageTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703, ___size_2)); }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  get_size_2() const { return ___size_2; }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_bbox_3() { return static_cast<int32_t>(offsetof(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703, ___bbox_3)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_3() const { return ___bbox_3; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_3() { return &___bbox_3; }
	inline void set_bbox_3(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_3 = value;
	}

	inline static int32_t get_offset_of_poseOffset_4() { return static_cast<int32_t>(offsetof(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703, ___poseOffset_4)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_4() const { return ___poseOffset_4; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_4() { return &___poseOffset_4; }
	inline void set_poseOffset_4(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;
};
// Native definition for COM marshalling of Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;
};

// Vuforia.VuImageTargetObserver
struct VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuMarkObservationInstanceInfo
struct VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D 
{
public:
	// Vuforia.VuMarkInstanceIdType Vuforia.VuMarkObservationInstanceInfo::dataType
	int32_t ___dataType_0;
	// System.Byte[] Vuforia.VuMarkObservationInstanceInfo::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.UInt64 Vuforia.VuMarkObservationInstanceInfo::numericValue
	uint64_t ___numericValue_2;

public:
	inline static int32_t get_offset_of_dataType_0() { return static_cast<int32_t>(offsetof(VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D, ___dataType_0)); }
	inline int32_t get_dataType_0() const { return ___dataType_0; }
	inline int32_t* get_address_of_dataType_0() { return &___dataType_0; }
	inline void set_dataType_0(int32_t value)
	{
		___dataType_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_numericValue_2() { return static_cast<int32_t>(offsetof(VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D, ___numericValue_2)); }
	inline uint64_t get_numericValue_2() const { return ___numericValue_2; }
	inline uint64_t* get_address_of_numericValue_2() { return &___numericValue_2; }
	inline void set_numericValue_2(uint64_t value)
	{
		___numericValue_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuMarkObservationInstanceInfo
struct VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D_marshaled_pinvoke
{
	int32_t ___dataType_0;
	Il2CppSafeArray/*NONE*/* ___buffer_1;
	uint64_t ___numericValue_2;
};
// Native definition for COM marshalling of Vuforia.VuMarkObservationInstanceInfo
struct VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D_marshaled_com
{
	int32_t ___dataType_0;
	Il2CppSafeArray/*NONE*/* ___buffer_1;
	uint64_t ___numericValue_2;
};

// Vuforia.VuMarkObservationTemplateInfo
struct VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78 
{
public:
	// System.String Vuforia.VuMarkObservationTemplateInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuMarkObservationTemplateInfo::name
	String_t* ___name_1;
	// System.String Vuforia.VuMarkObservationTemplateInfo::vuMarkUserData
	String_t* ___vuMarkUserData_2;
	// Vuforia.VuVector2F Vuforia.VuMarkObservationTemplateInfo::size
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;
	// Vuforia.VuVector2F Vuforia.VuMarkObservationTemplateInfo::origin
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___origin_4;
	// Vuforia.VuAABB Vuforia.VuMarkObservationTemplateInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	// Vuforia.VuMatrix44F Vuforia.VuMarkObservationTemplateInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_vuMarkUserData_2() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___vuMarkUserData_2)); }
	inline String_t* get_vuMarkUserData_2() const { return ___vuMarkUserData_2; }
	inline String_t** get_address_of_vuMarkUserData_2() { return &___vuMarkUserData_2; }
	inline void set_vuMarkUserData_2(String_t* value)
	{
		___vuMarkUserData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuMarkUserData_2), (void*)value);
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___size_3)); }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  get_size_3() const { return ___size_3; }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_origin_4() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___origin_4)); }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  get_origin_4() const { return ___origin_4; }
	inline VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841 * get_address_of_origin_4() { return &___origin_4; }
	inline void set_origin_4(VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  value)
	{
		___origin_4 = value;
	}

	inline static int32_t get_offset_of_bbox_5() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___bbox_5)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_5() const { return ___bbox_5; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_5() { return &___bbox_5; }
	inline void set_bbox_5(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_5 = value;
	}

	inline static int32_t get_offset_of_poseOffset_6() { return static_cast<int32_t>(offsetof(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78, ___poseOffset_6)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_6() const { return ___poseOffset_6; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_6() { return &___poseOffset_6; }
	inline void set_poseOffset_6(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuMarkObservationTemplateInfo
struct VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	char* ___vuMarkUserData_2;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___origin_4;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;
};
// Native definition for COM marshalling of Vuforia.VuMarkObservationTemplateInfo
struct VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___vuMarkUserData_2;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___size_3;
	VuVector2F_t55DE6693C9FE36A375A696AE1F2C81845095D841  ___origin_4;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_5;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_6;
};

// Vuforia.VuMarkObserver
struct VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuMeshObservationBlockList
struct VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64  : public VuGenericList_1_t9887629F75AFF0A60834A2EBA6B0E3BD337BC079
{
public:

public:
};


// Vuforia.VuMeshObserver
struct VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973 
{
public:
	// System.String Vuforia.VuModelTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector3F Vuforia.VuModelTargetObservationTargetInfo::size
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	// Vuforia.VuAABB Vuforia.VuModelTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::activeGuideViewName
	String_t* ___activeGuideViewName_4;
	// Vuforia.VuModelTargetTrackingMode Vuforia.VuModelTargetObservationTargetInfo::trackingMode
	int32_t ___trackingMode_5;
	// Vuforia.VuMotionHint Vuforia.VuModelTargetObservationTargetInfo::motionHint
	int32_t ___motionHint_6;
	// Vuforia.VuMatrix44F Vuforia.VuModelTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_7;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::activeState
	String_t* ___activeState_8;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___size_2)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_size_2() const { return ___size_2; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_bbox_3() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___bbox_3)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_3() const { return ___bbox_3; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_3() { return &___bbox_3; }
	inline void set_bbox_3(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_3 = value;
	}

	inline static int32_t get_offset_of_activeGuideViewName_4() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___activeGuideViewName_4)); }
	inline String_t* get_activeGuideViewName_4() const { return ___activeGuideViewName_4; }
	inline String_t** get_address_of_activeGuideViewName_4() { return &___activeGuideViewName_4; }
	inline void set_activeGuideViewName_4(String_t* value)
	{
		___activeGuideViewName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeGuideViewName_4), (void*)value);
	}

	inline static int32_t get_offset_of_trackingMode_5() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___trackingMode_5)); }
	inline int32_t get_trackingMode_5() const { return ___trackingMode_5; }
	inline int32_t* get_address_of_trackingMode_5() { return &___trackingMode_5; }
	inline void set_trackingMode_5(int32_t value)
	{
		___trackingMode_5 = value;
	}

	inline static int32_t get_offset_of_motionHint_6() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___motionHint_6)); }
	inline int32_t get_motionHint_6() const { return ___motionHint_6; }
	inline int32_t* get_address_of_motionHint_6() { return &___motionHint_6; }
	inline void set_motionHint_6(int32_t value)
	{
		___motionHint_6 = value;
	}

	inline static int32_t get_offset_of_poseOffset_7() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___poseOffset_7)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_7() const { return ___poseOffset_7; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_7() { return &___poseOffset_7; }
	inline void set_poseOffset_7(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_7 = value;
	}

	inline static int32_t get_offset_of_activeState_8() { return static_cast<int32_t>(offsetof(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973, ___activeState_8)); }
	inline String_t* get_activeState_8() const { return ___activeState_8; }
	inline String_t** get_address_of_activeState_8() { return &___activeState_8; }
	inline void set_activeState_8(String_t* value)
	{
		___activeState_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeState_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	char* ___activeGuideViewName_4;
	int32_t ___trackingMode_5;
	int32_t ___motionHint_6;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_7;
	char* ___activeState_8;
};
// Native definition for COM marshalling of Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	Il2CppChar* ___activeGuideViewName_4;
	int32_t ___trackingMode_5;
	int32_t ___motionHint_6;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_7;
	Il2CppChar* ___activeState_8;
};

// Vuforia.VuModelTargetObserver
struct VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:
	// System.Collections.Generic.IList`1<Vuforia.IVuGuideView> Vuforia.VuModelTargetObserver::mGuideViews
	RuntimeObject* ___mGuideViews_3;
	// System.Collections.Generic.IList`1<Vuforia.IVuModelTargetState> Vuforia.VuModelTargetObserver::mStates
	RuntimeObject* ___mStates_4;

public:
	inline static int32_t get_offset_of_mGuideViews_3() { return static_cast<int32_t>(offsetof(VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D, ___mGuideViews_3)); }
	inline RuntimeObject* get_mGuideViews_3() const { return ___mGuideViews_3; }
	inline RuntimeObject** get_address_of_mGuideViews_3() { return &___mGuideViews_3; }
	inline void set_mGuideViews_3(RuntimeObject* value)
	{
		___mGuideViews_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGuideViews_3), (void*)value);
	}

	inline static int32_t get_offset_of_mStates_4() { return static_cast<int32_t>(offsetof(VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D, ___mStates_4)); }
	inline RuntimeObject* get_mStates_4() const { return ___mStates_4; }
	inline RuntimeObject** get_address_of_mStates_4() { return &___mStates_4; }
	inline void set_mStates_4(RuntimeObject* value)
	{
		___mStates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStates_4), (void*)value);
	}
};


// Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30 
{
public:
	// System.String Vuforia.VuMultiTargetObservationTargetInfo::name
	String_t* ___name_0;
	// Vuforia.VuVector3F Vuforia.VuMultiTargetObservationTargetInfo::size
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_1;
	// Vuforia.VuAABB Vuforia.VuMultiTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_2;
	// Vuforia.VuMatrix44F Vuforia.VuMultiTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30, ___size_1)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_size_1() const { return ___size_1; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_bbox_2() { return static_cast<int32_t>(offsetof(VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30, ___bbox_2)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_2() const { return ___bbox_2; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_2() { return &___bbox_2; }
	inline void set_bbox_2(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_2 = value;
	}

	inline static int32_t get_offset_of_poseOffset_3() { return static_cast<int32_t>(offsetof(VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30, ___poseOffset_3)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_3() const { return ___poseOffset_3; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_3() { return &___poseOffset_3; }
	inline void set_poseOffset_3(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30_marshaled_pinvoke
{
	char* ___name_0;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_1;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_2;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_3;
};
// Native definition for COM marshalling of Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30_marshaled_com
{
	Il2CppChar* ___name_0;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_1;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_2;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_3;
};

// Vuforia.VuMultiTargetObserver
struct VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuObjectTargetObservationTargetInfo
struct VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570 
{
public:
	// System.String Vuforia.VuObjectTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuObjectTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector3F Vuforia.VuObjectTargetObservationTargetInfo::size
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	// Vuforia.VuAABB Vuforia.VuObjectTargetObservationTargetInfo::bbox
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	// Vuforia.VuMatrix44F Vuforia.VuObjectTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;

public:
	inline static int32_t get_offset_of_uniqueId_0() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570, ___uniqueId_0)); }
	inline String_t* get_uniqueId_0() const { return ___uniqueId_0; }
	inline String_t** get_address_of_uniqueId_0() { return &___uniqueId_0; }
	inline void set_uniqueId_0(String_t* value)
	{
		___uniqueId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uniqueId_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570, ___size_2)); }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  get_size_2() const { return ___size_2; }
	inline VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_bbox_3() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570, ___bbox_3)); }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  get_bbox_3() const { return ___bbox_3; }
	inline VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E * get_address_of_bbox_3() { return &___bbox_3; }
	inline void set_bbox_3(VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  value)
	{
		___bbox_3 = value;
	}

	inline static int32_t get_offset_of_poseOffset_4() { return static_cast<int32_t>(offsetof(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570, ___poseOffset_4)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_poseOffset_4() const { return ___poseOffset_4; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_poseOffset_4() { return &___poseOffset_4; }
	inline void set_poseOffset_4(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___poseOffset_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuObjectTargetObservationTargetInfo
struct VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;
};
// Native definition for COM marshalling of Vuforia.VuObjectTargetObservationTargetInfo
struct VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector3F_t1E0686F88F876CC086B51DDB217C40702580855B  ___size_2;
	VuAABB_t9AA0440B1400C0B605DE326838426C324A0E506E  ___bbox_3;
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___poseOffset_4;
};

// Vuforia.VuObjectTargetObserver
struct VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuObservationList
struct VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuPoseInfo
struct VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE 
{
public:
	// Vuforia.VuObservationPoseStatus Vuforia.VuPoseInfo::poseStatus
	int32_t ___poseStatus_0;
	// Vuforia.VuMatrix44F Vuforia.VuPoseInfo::pose
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___pose_1;

public:
	inline static int32_t get_offset_of_poseStatus_0() { return static_cast<int32_t>(offsetof(VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE, ___poseStatus_0)); }
	inline int32_t get_poseStatus_0() const { return ___poseStatus_0; }
	inline int32_t* get_address_of_poseStatus_0() { return &___poseStatus_0; }
	inline void set_poseStatus_0(int32_t value)
	{
		___poseStatus_0 = value;
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE, ___pose_1)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_pose_1() const { return ___pose_1; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___pose_1 = value;
	}
};


// Vuforia.VuValidationAreaObservationTrainingInfo
struct VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0 
{
public:
	// Vuforia.VuValidationAreaTrainingStatus Vuforia.VuValidationAreaObservationTrainingInfo::trainingStatus
	int32_t ___trainingStatus_0;

public:
	inline static int32_t get_offset_of_trainingStatus_0() { return static_cast<int32_t>(offsetof(VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0, ___trainingStatus_0)); }
	inline int32_t get_trainingStatus_0() const { return ___trainingStatus_0; }
	inline int32_t* get_address_of_trainingStatus_0() { return &___trainingStatus_0; }
	inline void set_trainingStatus_0(int32_t value)
	{
		___trainingStatus_0 = value;
	}
};


// Vuforia.VuValidationAreaObserver
struct VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:
	// System.Collections.Generic.IList`1<Vuforia.IVuValidationAreaLabel> Vuforia.VuValidationAreaObserver::mAvailableLabels
	RuntimeObject* ___mAvailableLabels_3;

public:
	inline static int32_t get_offset_of_mAvailableLabels_3() { return static_cast<int32_t>(offsetof(VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C, ___mAvailableLabels_3)); }
	inline RuntimeObject* get_mAvailableLabels_3() const { return ___mAvailableLabels_3; }
	inline RuntimeObject** get_address_of_mAvailableLabels_3() { return &___mAvailableLabels_3; }
	inline void set_mAvailableLabels_3(RuntimeObject* value)
	{
		___mAvailableLabels_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvailableLabels_3), (void*)value);
	}
};


// Vuforia.VuVirtualButtonObservationInfo
struct VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F 
{
public:
	// Vuforia.VuVirtualButtonState Vuforia.VuVirtualButtonObservationInfo::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};


// Vuforia.VuVirtualButtonObserver
struct VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274  : public VuObserver_t6386B62EB39F3CE08B8C5BEE1BF333A6C9F53795
{
public:

public:
};


// Vuforia.VuforiaRuntime
struct VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaInitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * ___mOnVuforiaInitError_0;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_1;
	// Vuforia.VuforiaInitError Vuforia.VuforiaRuntime::mVuforiaInitError
	int32_t ___mVuforiaInitError_2;
	// System.Int32 Vuforia.VuforiaRuntime::mTimesPermissionCheckFailed
	int32_t ___mTimesPermissionCheckFailed_3;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_0() { return static_cast<int32_t>(offsetof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC, ___mOnVuforiaInitError_0)); }
	inline Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * get_mOnVuforiaInitError_0() const { return ___mOnVuforiaInitError_0; }
	inline Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 ** get_address_of_mOnVuforiaInitError_0() { return &___mOnVuforiaInitError_0; }
	inline void set_mOnVuforiaInitError_0(Action_1_tAA1D1EEFC680CD9A5C6DDD77BD612C0BBD43C306 * value)
	{
		___mOnVuforiaInitError_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaInitError_0), (void*)value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC, ___mFailedToInitialize_1)); }
	inline bool get_mFailedToInitialize_1() const { return ___mFailedToInitialize_1; }
	inline bool* get_address_of_mFailedToInitialize_1() { return &___mFailedToInitialize_1; }
	inline void set_mFailedToInitialize_1(bool value)
	{
		___mFailedToInitialize_1 = value;
	}

	inline static int32_t get_offset_of_mVuforiaInitError_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC, ___mVuforiaInitError_2)); }
	inline int32_t get_mVuforiaInitError_2() const { return ___mVuforiaInitError_2; }
	inline int32_t* get_address_of_mVuforiaInitError_2() { return &___mVuforiaInitError_2; }
	inline void set_mVuforiaInitError_2(int32_t value)
	{
		___mVuforiaInitError_2 = value;
	}

	inline static int32_t get_offset_of_mTimesPermissionCheckFailed_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC, ___mTimesPermissionCheckFailed_3)); }
	inline int32_t get_mTimesPermissionCheckFailed_3() const { return ___mTimesPermissionCheckFailed_3; }
	inline int32_t* get_address_of_mTimesPermissionCheckFailed_3() { return &___mTimesPermissionCheckFailed_3; }
	inline void set_mTimesPermissionCheckFailed_3(int32_t value)
	{
		___mTimesPermissionCheckFailed_3 = value;
	}
};

struct VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC * ___mInstance_4;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_StaticFields, ___mInstance_4)); }
	inline VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_4), (void*)value);
	}
};


// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_12;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_13;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_16;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_17;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_12() const { return ___m_CommonHeaders_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_12() { return &___m_CommonHeaders_12; }
	inline void set_m_CommonHeaders_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_13)); }
	inline int32_t get_m_NumCommonHeaders_13() const { return ___m_NumCommonHeaders_13; }
	inline int32_t* get_address_of_m_NumCommonHeaders_13() { return &___m_NumCommonHeaders_13; }
	inline void set_m_NumCommonHeaders_13(int32_t value)
	{
		___m_NumCommonHeaders_13 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_16)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_16() const { return ___m_InnerCollection_16; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_16() { return &___m_InnerCollection_16; }
	inline void set_m_InnerCollection_16(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_17() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_17)); }
	inline uint16_t get_m_Type_17() const { return ___m_Type_17; }
	inline uint16_t* get_address_of_m_Type_17() { return &___m_Type_17; }
	inline void set_m_Type_17(uint16_t value)
	{
		___m_Type_17 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_11;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_14;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_15;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_18;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_19;

public:
	inline static int32_t get_offset_of_HInfo_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_11)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_11() const { return ___HInfo_11; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_11() { return &___HInfo_11; }
	inline void set_HInfo_11(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_14)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_14() const { return ___s_CommonHeaderNames_14; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_14() { return &___s_CommonHeaderNames_14; }
	inline void set_s_CommonHeaderNames_14(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_15)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_15() const { return ___s_CommonHeaderHints_15; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_15() { return &___s_CommonHeaderHints_15; }
	inline void set_s_CommonHeaderHints_15(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_15), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_18() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_18)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_18() const { return ___HttpTrimCharacters_18; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_18() { return &___HttpTrimCharacters_18; }
	inline void set_HttpTrimCharacters_18(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_18), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_19() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_19)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_19() const { return ___RfcCharMap_19; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_19() { return &___RfcCharMap_19; }
	inline void set_RfcCharMap_19(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_19), (void*)value);
	}
};


// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.IO.MemoryStream System.Net.WebRequestStream::writeBuffer
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___writeBuffer_15;
	// System.Boolean System.Net.WebRequestStream::requestWritten
	bool ___requestWritten_16;
	// System.Boolean System.Net.WebRequestStream::allowBuffering
	bool ___allowBuffering_17;
	// System.Boolean System.Net.WebRequestStream::sendChunked
	bool ___sendChunked_18;
	// System.Net.WebCompletionSource System.Net.WebRequestStream::pendingWrite
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingWrite_19;
	// System.Int64 System.Net.WebRequestStream::totalWritten
	int64_t ___totalWritten_20;
	// System.Byte[] System.Net.WebRequestStream::headers
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headers_21;
	// System.Boolean System.Net.WebRequestStream::headersSent
	bool ___headersSent_22;
	// System.Int32 System.Net.WebRequestStream::completeRequestWritten
	int32_t ___completeRequestWritten_23;
	// System.Int32 System.Net.WebRequestStream::chunkTrailerWritten
	int32_t ___chunkTrailerWritten_24;
	// System.Boolean System.Net.WebRequestStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_writeBuffer_15() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___writeBuffer_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get_writeBuffer_15() const { return ___writeBuffer_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of_writeBuffer_15() { return &___writeBuffer_15; }
	inline void set_writeBuffer_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		___writeBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_requestWritten_16() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___requestWritten_16)); }
	inline bool get_requestWritten_16() const { return ___requestWritten_16; }
	inline bool* get_address_of_requestWritten_16() { return &___requestWritten_16; }
	inline void set_requestWritten_16(bool value)
	{
		___requestWritten_16 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_17() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___allowBuffering_17)); }
	inline bool get_allowBuffering_17() const { return ___allowBuffering_17; }
	inline bool* get_address_of_allowBuffering_17() { return &___allowBuffering_17; }
	inline void set_allowBuffering_17(bool value)
	{
		___allowBuffering_17 = value;
	}

	inline static int32_t get_offset_of_sendChunked_18() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___sendChunked_18)); }
	inline bool get_sendChunked_18() const { return ___sendChunked_18; }
	inline bool* get_address_of_sendChunked_18() { return &___sendChunked_18; }
	inline void set_sendChunked_18(bool value)
	{
		___sendChunked_18 = value;
	}

	inline static int32_t get_offset_of_pendingWrite_19() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___pendingWrite_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingWrite_19() const { return ___pendingWrite_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingWrite_19() { return &___pendingWrite_19; }
	inline void set_pendingWrite_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingWrite_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingWrite_19), (void*)value);
	}

	inline static int32_t get_offset_of_totalWritten_20() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___totalWritten_20)); }
	inline int64_t get_totalWritten_20() const { return ___totalWritten_20; }
	inline int64_t* get_address_of_totalWritten_20() { return &___totalWritten_20; }
	inline void set_totalWritten_20(int64_t value)
	{
		___totalWritten_20 = value;
	}

	inline static int32_t get_offset_of_headers_21() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headers_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_headers_21() const { return ___headers_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_headers_21() { return &___headers_21; }
	inline void set_headers_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___headers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_21), (void*)value);
	}

	inline static int32_t get_offset_of_headersSent_22() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___headersSent_22)); }
	inline bool get_headersSent_22() const { return ___headersSent_22; }
	inline bool* get_address_of_headersSent_22() { return &___headersSent_22; }
	inline void set_headersSent_22(bool value)
	{
		___headersSent_22 = value;
	}

	inline static int32_t get_offset_of_completeRequestWritten_23() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___completeRequestWritten_23)); }
	inline int32_t get_completeRequestWritten_23() const { return ___completeRequestWritten_23; }
	inline int32_t* get_address_of_completeRequestWritten_23() { return &___completeRequestWritten_23; }
	inline void set_completeRequestWritten_23(int32_t value)
	{
		___completeRequestWritten_23 = value;
	}

	inline static int32_t get_offset_of_chunkTrailerWritten_24() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___chunkTrailerWritten_24)); }
	inline int32_t get_chunkTrailerWritten_24() const { return ___chunkTrailerWritten_24; }
	inline int32_t* get_address_of_chunkTrailerWritten_24() { return &___chunkTrailerWritten_24; }
	inline void set_chunkTrailerWritten_24(int32_t value)
	{
		___chunkTrailerWritten_24 = value;
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887, ___U3CKeepAliveU3Ek__BackingField_25)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_25() const { return ___U3CKeepAliveU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_25() { return &___U3CKeepAliveU3Ek__BackingField_25; }
	inline void set_U3CKeepAliveU3Ek__BackingField_25(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_25 = value;
	}
};

struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields
{
public:
	// System.Byte[] System.Net.WebRequestStream::crlf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___crlf_14;

public:
	inline static int32_t get_offset_of_crlf_14() { return static_cast<int32_t>(offsetof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_StaticFields, ___crlf_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_crlf_14() const { return ___crlf_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_crlf_14() { return &___crlf_14; }
	inline void set_crlf_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___crlf_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crlf_14), (void*)value);
	}
};


// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F  : public WebConnectionStream_t3D04BDBD47522FD7C97ABF7F1B4498F72FA2E918
{
public:
	// System.Net.BufferOffsetSize System.Net.WebResponseStream::readBuffer
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___readBuffer_14;
	// System.Int64 System.Net.WebResponseStream::contentLength
	int64_t ___contentLength_15;
	// System.Int64 System.Net.WebResponseStream::totalRead
	int64_t ___totalRead_16;
	// System.Boolean System.Net.WebResponseStream::nextReadCalled
	bool ___nextReadCalled_17;
	// System.Int32 System.Net.WebResponseStream::stream_length
	int32_t ___stream_length_18;
	// System.Net.WebCompletionSource System.Net.WebResponseStream::pendingRead
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___pendingRead_19;
	// System.Object System.Net.WebResponseStream::locker
	RuntimeObject * ___locker_20;
	// System.Int32 System.Net.WebResponseStream::nestedRead
	int32_t ___nestedRead_21;
	// System.Boolean System.Net.WebResponseStream::read_eof
	bool ___read_eof_22;
	// System.Net.WebRequestStream System.Net.WebResponseStream::<RequestStream>k__BackingField
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___U3CRequestStreamU3Ek__BackingField_23;
	// System.Net.WebHeaderCollection System.Net.WebResponseStream::<Headers>k__BackingField
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___U3CHeadersU3Ek__BackingField_24;
	// System.Net.HttpStatusCode System.Net.WebResponseStream::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_25;
	// System.String System.Net.WebResponseStream::<StatusDescription>k__BackingField
	String_t* ___U3CStatusDescriptionU3Ek__BackingField_26;
	// System.Version System.Net.WebResponseStream::<Version>k__BackingField
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___U3CVersionU3Ek__BackingField_27;
	// System.Boolean System.Net.WebResponseStream::<KeepAlive>k__BackingField
	bool ___U3CKeepAliveU3Ek__BackingField_28;
	// System.Boolean System.Net.WebResponseStream::<ChunkedRead>k__BackingField
	bool ___U3CChunkedReadU3Ek__BackingField_29;
	// System.Net.MonoChunkStream System.Net.WebResponseStream::<ChunkStream>k__BackingField
	MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * ___U3CChunkStreamU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_readBuffer_14() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___readBuffer_14)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_readBuffer_14() const { return ___readBuffer_14; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_readBuffer_14() { return &___readBuffer_14; }
	inline void set_readBuffer_14(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___readBuffer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readBuffer_14), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_15() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___contentLength_15)); }
	inline int64_t get_contentLength_15() const { return ___contentLength_15; }
	inline int64_t* get_address_of_contentLength_15() { return &___contentLength_15; }
	inline void set_contentLength_15(int64_t value)
	{
		___contentLength_15 = value;
	}

	inline static int32_t get_offset_of_totalRead_16() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___totalRead_16)); }
	inline int64_t get_totalRead_16() const { return ___totalRead_16; }
	inline int64_t* get_address_of_totalRead_16() { return &___totalRead_16; }
	inline void set_totalRead_16(int64_t value)
	{
		___totalRead_16 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_17() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nextReadCalled_17)); }
	inline bool get_nextReadCalled_17() const { return ___nextReadCalled_17; }
	inline bool* get_address_of_nextReadCalled_17() { return &___nextReadCalled_17; }
	inline void set_nextReadCalled_17(bool value)
	{
		___nextReadCalled_17 = value;
	}

	inline static int32_t get_offset_of_stream_length_18() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___stream_length_18)); }
	inline int32_t get_stream_length_18() const { return ___stream_length_18; }
	inline int32_t* get_address_of_stream_length_18() { return &___stream_length_18; }
	inline void set_stream_length_18(int32_t value)
	{
		___stream_length_18 = value;
	}

	inline static int32_t get_offset_of_pendingRead_19() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___pendingRead_19)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_pendingRead_19() const { return ___pendingRead_19; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_pendingRead_19() { return &___pendingRead_19; }
	inline void set_pendingRead_19(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___pendingRead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingRead_19), (void*)value);
	}

	inline static int32_t get_offset_of_locker_20() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___locker_20)); }
	inline RuntimeObject * get_locker_20() const { return ___locker_20; }
	inline RuntimeObject ** get_address_of_locker_20() { return &___locker_20; }
	inline void set_locker_20(RuntimeObject * value)
	{
		___locker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_20), (void*)value);
	}

	inline static int32_t get_offset_of_nestedRead_21() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___nestedRead_21)); }
	inline int32_t get_nestedRead_21() const { return ___nestedRead_21; }
	inline int32_t* get_address_of_nestedRead_21() { return &___nestedRead_21; }
	inline void set_nestedRead_21(int32_t value)
	{
		___nestedRead_21 = value;
	}

	inline static int32_t get_offset_of_read_eof_22() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___read_eof_22)); }
	inline bool get_read_eof_22() const { return ___read_eof_22; }
	inline bool* get_address_of_read_eof_22() { return &___read_eof_22; }
	inline void set_read_eof_22(bool value)
	{
		___read_eof_22 = value;
	}

	inline static int32_t get_offset_of_U3CRequestStreamU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CRequestStreamU3Ek__BackingField_23)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_U3CRequestStreamU3Ek__BackingField_23() const { return ___U3CRequestStreamU3Ek__BackingField_23; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_U3CRequestStreamU3Ek__BackingField_23() { return &___U3CRequestStreamU3Ek__BackingField_23; }
	inline void set_U3CRequestStreamU3Ek__BackingField_23(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___U3CRequestStreamU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestStreamU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadersU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CHeadersU3Ek__BackingField_24)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_U3CHeadersU3Ek__BackingField_24() const { return ___U3CHeadersU3Ek__BackingField_24; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_U3CHeadersU3Ek__BackingField_24() { return &___U3CHeadersU3Ek__BackingField_24; }
	inline void set_U3CHeadersU3Ek__BackingField_24(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___U3CHeadersU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadersU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusCodeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusCodeU3Ek__BackingField_25)); }
	inline int32_t get_U3CStatusCodeU3Ek__BackingField_25() const { return ___U3CStatusCodeU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CStatusCodeU3Ek__BackingField_25() { return &___U3CStatusCodeU3Ek__BackingField_25; }
	inline void set_U3CStatusCodeU3Ek__BackingField_25(int32_t value)
	{
		___U3CStatusCodeU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CStatusDescriptionU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CStatusDescriptionU3Ek__BackingField_26)); }
	inline String_t* get_U3CStatusDescriptionU3Ek__BackingField_26() const { return ___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline String_t** get_address_of_U3CStatusDescriptionU3Ek__BackingField_26() { return &___U3CStatusDescriptionU3Ek__BackingField_26; }
	inline void set_U3CStatusDescriptionU3Ek__BackingField_26(String_t* value)
	{
		___U3CStatusDescriptionU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStatusDescriptionU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CVersionU3Ek__BackingField_27)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_U3CVersionU3Ek__BackingField_27() const { return ___U3CVersionU3Ek__BackingField_27; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_U3CVersionU3Ek__BackingField_27() { return &___U3CVersionU3Ek__BackingField_27; }
	inline void set_U3CVersionU3Ek__BackingField_27(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___U3CVersionU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeepAliveU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CKeepAliveU3Ek__BackingField_28)); }
	inline bool get_U3CKeepAliveU3Ek__BackingField_28() const { return ___U3CKeepAliveU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CKeepAliveU3Ek__BackingField_28() { return &___U3CKeepAliveU3Ek__BackingField_28; }
	inline void set_U3CKeepAliveU3Ek__BackingField_28(bool value)
	{
		___U3CKeepAliveU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CChunkedReadU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkedReadU3Ek__BackingField_29)); }
	inline bool get_U3CChunkedReadU3Ek__BackingField_29() const { return ___U3CChunkedReadU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CChunkedReadU3Ek__BackingField_29() { return &___U3CChunkedReadU3Ek__BackingField_29; }
	inline void set_U3CChunkedReadU3Ek__BackingField_29(bool value)
	{
		___U3CChunkedReadU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CChunkStreamU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F, ___U3CChunkStreamU3Ek__BackingField_30)); }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * get_U3CChunkStreamU3Ek__BackingField_30() const { return ___U3CChunkStreamU3Ek__BackingField_30; }
	inline MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 ** get_address_of_U3CChunkStreamU3Ek__BackingField_30() { return &___U3CChunkStreamU3Ek__BackingField_30; }
	inline void set_U3CChunkStreamU3Ek__BackingField_30(MonoChunkStream_t890E01BB394186CFA1A1B92B07A1F996E9A2C9E7 * value)
	{
		___U3CChunkStreamU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChunkStreamU3Ek__BackingField_30), (void*)value);
	}
};


// System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>
struct Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483 
{
public:
	// T System.Nullable`1::value
	VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483, ___value_0)); }
	inline VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C  get_value_0() const { return ___value_0; }
	inline VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuAreaTargetObservationTargetInfo_t5521DEF2BDA916A08067F52E768FBB0204082E9C  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>
struct Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA 
{
public:
	// T System.Nullable`1::value
	VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA, ___value_0)); }
	inline VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E  get_value_0() const { return ___value_0; }
	inline VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuCylinderTargetObservationTargetInfo_tDB508866D16C0A50201458A789F9E30E84172A7E  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuImageInfo>
struct Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67 
{
public:
	// T System.Nullable`1::value
	VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67, ___value_0)); }
	inline VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716  get_value_0() const { return ___value_0; }
	inline VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuImageInfo_tA103CD18489F89ED49456FE3CBBB4CBE0B112716  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>
struct Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71 
{
public:
	// T System.Nullable`1::value
	VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71, ___value_0)); }
	inline VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703  get_value_0() const { return ___value_0; }
	inline VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuImageTargetObservationTargetInfo_t8129835F6669E0C142138B5D994615759562A703  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMarkObservationInstanceInfo>
struct Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D 
{
public:
	// T System.Nullable`1::value
	VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D, ___value_0)); }
	inline VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D  get_value_0() const { return ___value_0; }
	inline VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuMarkObservationInstanceInfo_tCAF1E7CC6AB5F38362C0618A130B56FA062F3A8D  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___buffer_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMarkObservationTemplateInfo>
struct Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993 
{
public:
	// T System.Nullable`1::value
	VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993, ___value_0)); }
	inline VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78  get_value_0() const { return ___value_0; }
	inline VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuMarkObservationTemplateInfo_tAEC7AA1432FAAD2FD1EC43D99ACC529DE1D91C78  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___vuMarkUserData_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>
struct Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779 
{
public:
	// T System.Nullable`1::value
	VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779, ___value_0)); }
	inline VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973  get_value_0() const { return ___value_0; }
	inline VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuModelTargetObservationTargetInfo_t0CE2EF01F312F17E8E811D588528DA517F48C973  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___activeGuideViewName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___activeState_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>
struct Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D 
{
public:
	// T System.Nullable`1::value
	VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D, ___value_0)); }
	inline VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30  get_value_0() const { return ___value_0; }
	inline VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuMultiTargetObservationTargetInfo_tC9D8F951F3A7358387588566FEA416F6E9DDEF30  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuObjectTargetObservationTargetInfo>
struct Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8 
{
public:
	// T System.Nullable`1::value
	VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8, ___value_0)); }
	inline VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570  get_value_0() const { return ___value_0; }
	inline VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuObjectTargetObservationTargetInfo_tE362D63F7F15F611536C45E3330FA2A9EDA9D570  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuPoseInfo>
struct Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5 
{
public:
	// T System.Nullable`1::value
	VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5, ___value_0)); }
	inline VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE  get_value_0() const { return ___value_0; }
	inline VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>
struct Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245 
{
public:
	// T System.Nullable`1::value
	VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245, ___value_0)); }
	inline VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0  get_value_0() const { return ___value_0; }
	inline VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuValidationAreaObservationTrainingInfo_t6E518F609EDDD3E51844C3B886A1AC5E6EA3BEE0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>
struct Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2 
{
public:
	// T System.Nullable`1::value
	VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2, ___value_0)); }
	inline VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F  get_value_0() const { return ___value_0; }
	inline VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(VuVirtualButtonObservationInfo_tFE5865579216AF2120ACAD5359834637ED46371F  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Vuforia.VuDatabaseTargetInfoList
struct VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65  : public VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130
{
public:

public:
};


// Vuforia.VuGuideViewList
struct VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B  : public VuGenericTypedList_2_t577E94558880FFED7596907B4EEB0E0649B5ABDE
{
public:

public:
};


// Vuforia.VuHitTestList
struct VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5  : public VuGenericTypedList_2_t00AC5A2EE9BAA9FA3D269FE0C93484F411A92D5A
{
public:

public:
};


// Vuforia.VuIlluminationObservation
struct VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935  : public VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C
{
public:
	// System.Nullable`1<Vuforia.VuIlluminationObservationInfo> Vuforia.VuIlluminationObservation::mInfo
	Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628  ___mInfo_2;

public:
	inline static int32_t get_offset_of_mInfo_2() { return static_cast<int32_t>(offsetof(VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935, ___mInfo_2)); }
	inline Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628  get_mInfo_2() const { return ___mInfo_2; }
	inline Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628 * get_address_of_mInfo_2() { return &___mInfo_2; }
	inline void set_mInfo_2(Nullable_1_t33F2BE2AAC8711A6678E4E6C54927B3FE1A43628  value)
	{
		___mInfo_2 = value;
	}
};


// Vuforia.VuMeshObservation
struct VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6  : public VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C
{
public:
	// System.Nullable`1<Vuforia.VuMeshObservationInfo> Vuforia.VuMeshObservation::mInfo
	Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B  ___mInfo_2;

public:
	inline static int32_t get_offset_of_mInfo_2() { return static_cast<int32_t>(offsetof(VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6, ___mInfo_2)); }
	inline Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B  get_mInfo_2() const { return ___mInfo_2; }
	inline Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B * get_address_of_mInfo_2() { return &___mInfo_2; }
	inline void set_mInfo_2(Nullable_1_t4033C77DAF96DF99CD243987F2477760C0D0996B  value)
	{
		___mInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mInfo_2))->___value_0))->___meshes_1), (void*)NULL);
	}
};


// Vuforia.VuModelTargetStateList
struct VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A  : public VuGenericTypedList_2_tC0B4B33C0422CB7EB6D8049D83BAAD2BFA1627AE
{
public:

public:
};


// Vuforia.VuValidationAreaLabelList
struct VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1  : public VuGenericTypedList_2_tA3ED3BAFCF5E64F26034ED9C37F8016F256759DF
{
public:

public:
};


// Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E  : public RuntimeObject
{
public:
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_0;
	// Vuforia.Internal.Utility.VuforiaCoroutineUtility Vuforia.WebCam::mVuforiaCoroutineUtility
	VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * ___mVuforiaCoroutineUtility_1;
	// Vuforia.Internal.Core.IEngine Vuforia.WebCam::mEngine
	RuntimeObject* ___mEngine_2;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_3;
	// UnityEngine.Camera Vuforia.WebCam::mARCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mARCamera_4;
	// System.Int32 Vuforia.WebCam::mOriginalCameraCullMask
	int32_t ___mOriginalCameraCullMask_5;
	// Vuforia.Internal.Rendering.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * ___mTextureRenderer_6;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mBufferReadTexture_7;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mReadPixelsRect_8;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___mWebCamProfile_9;
	// System.Boolean Vuforia.WebCam::mWebCamPlaying
	bool ___mWebCamPlaying_10;
	// Vuforia.Internal.VuforiaDriver.CameraImage Vuforia.WebCam::mCameraImage
	CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  ___mCameraImage_11;
	// System.IntPtr Vuforia.WebCam::mCameraImagePtr
	intptr_t ___mCameraImagePtr_12;
	// System.Boolean Vuforia.WebCam::mDisposed
	bool ___mDisposed_13;
	// System.Func`1<System.Boolean> Vuforia.WebCam::mOnCameraReady
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___mOnCameraReady_14;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamTexture_0)); }
	inline RuntimeObject* get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline RuntimeObject** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(RuntimeObject* value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWebCamTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_mVuforiaCoroutineUtility_1() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mVuforiaCoroutineUtility_1)); }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * get_mVuforiaCoroutineUtility_1() const { return ___mVuforiaCoroutineUtility_1; }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 ** get_address_of_mVuforiaCoroutineUtility_1() { return &___mVuforiaCoroutineUtility_1; }
	inline void set_mVuforiaCoroutineUtility_1(VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * value)
	{
		___mVuforiaCoroutineUtility_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaCoroutineUtility_1), (void*)value);
	}

	inline static int32_t get_offset_of_mEngine_2() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mEngine_2)); }
	inline RuntimeObject* get_mEngine_2() const { return ___mEngine_2; }
	inline RuntimeObject** get_address_of_mEngine_2() { return &___mEngine_2; }
	inline void set_mEngine_2(RuntimeObject* value)
	{
		___mEngine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mRenderTextureLayer_3)); }
	inline int32_t get_mRenderTextureLayer_3() const { return ___mRenderTextureLayer_3; }
	inline int32_t* get_address_of_mRenderTextureLayer_3() { return &___mRenderTextureLayer_3; }
	inline void set_mRenderTextureLayer_3(int32_t value)
	{
		___mRenderTextureLayer_3 = value;
	}

	inline static int32_t get_offset_of_mARCamera_4() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mARCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mARCamera_4() const { return ___mARCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mARCamera_4() { return &___mARCamera_4; }
	inline void set_mARCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mARCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mARCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_5() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOriginalCameraCullMask_5)); }
	inline int32_t get_mOriginalCameraCullMask_5() const { return ___mOriginalCameraCullMask_5; }
	inline int32_t* get_address_of_mOriginalCameraCullMask_5() { return &___mOriginalCameraCullMask_5; }
	inline void set_mOriginalCameraCullMask_5(int32_t value)
	{
		___mOriginalCameraCullMask_5 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_6() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mTextureRenderer_6)); }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * get_mTextureRenderer_6() const { return ___mTextureRenderer_6; }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 ** get_address_of_mTextureRenderer_6() { return &___mTextureRenderer_6; }
	inline void set_mTextureRenderer_6(TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * value)
	{
		___mTextureRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextureRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_7() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mBufferReadTexture_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mBufferReadTexture_7() const { return ___mBufferReadTexture_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mBufferReadTexture_7() { return &___mBufferReadTexture_7; }
	inline void set_mBufferReadTexture_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mBufferReadTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBufferReadTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_8() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mReadPixelsRect_8)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mReadPixelsRect_8() const { return ___mReadPixelsRect_8; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mReadPixelsRect_8() { return &___mReadPixelsRect_8; }
	inline void set_mReadPixelsRect_8(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mReadPixelsRect_8 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_9() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamProfile_9)); }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  get_mWebCamProfile_9() const { return ___mWebCamProfile_9; }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE * get_address_of_mWebCamProfile_9() { return &___mWebCamProfile_9; }
	inline void set_mWebCamProfile_9(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  value)
	{
		___mWebCamProfile_9 = value;
	}

	inline static int32_t get_offset_of_mWebCamPlaying_10() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamPlaying_10)); }
	inline bool get_mWebCamPlaying_10() const { return ___mWebCamPlaying_10; }
	inline bool* get_address_of_mWebCamPlaying_10() { return &___mWebCamPlaying_10; }
	inline void set_mWebCamPlaying_10(bool value)
	{
		___mWebCamPlaying_10 = value;
	}

	inline static int32_t get_offset_of_mCameraImage_11() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImage_11)); }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  get_mCameraImage_11() const { return ___mCameraImage_11; }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C * get_address_of_mCameraImage_11() { return &___mCameraImage_11; }
	inline void set_mCameraImage_11(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  value)
	{
		___mCameraImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mCameraImage_11))->___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCameraImagePtr_12() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImagePtr_12)); }
	inline intptr_t get_mCameraImagePtr_12() const { return ___mCameraImagePtr_12; }
	inline intptr_t* get_address_of_mCameraImagePtr_12() { return &___mCameraImagePtr_12; }
	inline void set_mCameraImagePtr_12(intptr_t value)
	{
		___mCameraImagePtr_12 = value;
	}

	inline static int32_t get_offset_of_mDisposed_13() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mDisposed_13)); }
	inline bool get_mDisposed_13() const { return ___mDisposed_13; }
	inline bool* get_address_of_mDisposed_13() { return &___mDisposed_13; }
	inline void set_mDisposed_13(bool value)
	{
		___mDisposed_13 = value;
	}

	inline static int32_t get_offset_of_mOnCameraReady_14() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOnCameraReady_14)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_mOnCameraReady_14() const { return ___mOnCameraReady_14; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_mOnCameraReady_14() { return &___mOnCameraReady_14; }
	inline void set_mOnCameraReady_14(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___mOnCameraReady_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnCameraReady_14), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Vuforia.VuImage
struct VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuImage::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Boolean Vuforia.VuImage::mOwnsNativeData
	bool ___mOwnsNativeData_1;
	// System.Nullable`1<Vuforia.VuImageInfo> Vuforia.VuImage::mImageInfo
	Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  ___mImageInfo_2;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mOwnsNativeData_1() { return static_cast<int32_t>(offsetof(VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C, ___mOwnsNativeData_1)); }
	inline bool get_mOwnsNativeData_1() const { return ___mOwnsNativeData_1; }
	inline bool* get_address_of_mOwnsNativeData_1() { return &___mOwnsNativeData_1; }
	inline void set_mOwnsNativeData_1(bool value)
	{
		___mOwnsNativeData_1 = value;
	}

	inline static int32_t get_offset_of_mImageInfo_2() { return static_cast<int32_t>(offsetof(VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C, ___mImageInfo_2)); }
	inline Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  get_mImageInfo_2() const { return ___mImageInfo_2; }
	inline Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67 * get_address_of_mImageInfo_2() { return &___mImageInfo_2; }
	inline void set_mImageInfo_2(Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  value)
	{
		___mImageInfo_2 = value;
	}
};


// Vuforia.VuObservationWithPose
struct VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041  : public VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C
{
public:
	// System.Nullable`1<Vuforia.VuPoseInfo> Vuforia.VuObservationWithPose::mPoseInfo
	Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5  ___mPoseInfo_2;

public:
	inline static int32_t get_offset_of_mPoseInfo_2() { return static_cast<int32_t>(offsetof(VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041, ___mPoseInfo_2)); }
	inline Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5  get_mPoseInfo_2() const { return ___mPoseInfo_2; }
	inline Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5 * get_address_of_mPoseInfo_2() { return &___mPoseInfo_2; }
	inline void set_mPoseInfo_2(Nullable_1_t04C125397C0A09FC1C696AB35B27CFA2EB6E99B5  value)
	{
		___mPoseInfo_2 = value;
	}
};


// Vuforia.Internal.Simulator.VuSimulatedImage
struct VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD  : public RuntimeObject
{
public:
	// System.Nullable`1<Vuforia.VuImageInfo> Vuforia.Internal.Simulator.VuSimulatedImage::mImageInfo
	Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  ___mImageInfo_0;

public:
	inline static int32_t get_offset_of_mImageInfo_0() { return static_cast<int32_t>(offsetof(VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD, ___mImageInfo_0)); }
	inline Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  get_mImageInfo_0() const { return ___mImageInfo_0; }
	inline Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67 * get_address_of_mImageInfo_0() { return &___mImageInfo_0; }
	inline void set_mImageInfo_0(Nullable_1_tA8BB93053CD0615975D4A8C3961851C3AA09FB67  value)
	{
		___mImageInfo_0 = value;
	}
};


// Vuforia.VuVirtualButtonObservation
struct VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6  : public VuObservation_tB693C76A462DA8481448240DD8C603FC892BBC6C
{
public:
	// System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo> Vuforia.VuVirtualButtonObservation::mInfo
	Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2  ___mInfo_2;

public:
	inline static int32_t get_offset_of_mInfo_2() { return static_cast<int32_t>(offsetof(VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6, ___mInfo_2)); }
	inline Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2  get_mInfo_2() const { return ___mInfo_2; }
	inline Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2 * get_address_of_mInfo_2() { return &___mInfo_2; }
	inline void set_mInfo_2(Nullable_1_t0F4BFFE65CCAD2E49F9ABBC8CC91B94D0A5422B2  value)
	{
		___mInfo_2 = value;
	}
};


// Vuforia.VuAnchorObservation
struct VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuAnchorObservationStatusInfo> Vuforia.VuAnchorObservation::mStatusInfo
	Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC  ___mStatusInfo_3;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4, ___mStatusInfo_3)); }
	inline Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_t3691C90BD01CA0FFB3228AB622C8925195413DAC  value)
	{
		___mStatusInfo_3 = value;
	}
};


// Vuforia.VuAreaTargetObservation
struct VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuAreaTargetObservationStatusInfo> Vuforia.VuAreaTargetObservation::mStatusInfo
	Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo> Vuforia.VuAreaTargetObservation::mTargetInfo
	Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62, ___mStatusInfo_3)); }
	inline Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0 * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_t7AB323631C7BA5302E579A123CBA5A4D64EE63C0  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62, ___mTargetInfo_4)); }
	inline Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483 * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_t43937B5C5C0367CA3C3B3BF46C8837718C305483  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
	}
};


// Vuforia.VuCylinderTargetObservation
struct VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuCylinderTargetObservationStatusInfo> Vuforia.VuCylinderTargetObservation::mStatusInfo
	Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo> Vuforia.VuCylinderTargetObservation::mTargetInfo
	Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC, ___mStatusInfo_3)); }
	inline Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_t69D6EC8E41D0E08375CD895E4978F46E4224647D  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC, ___mTargetInfo_4)); }
	inline Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_tB7CB17CF57EA40E1E56E4D89DFF799367E6F41EA  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
	}
};


// Vuforia.VuDevicePoseObservation
struct VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuDevicePoseObservationStatusInfo> Vuforia.VuDevicePoseObservation::mStatusInfo
	Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7  ___mStatusInfo_3;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250, ___mStatusInfo_3)); }
	inline Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7 * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_t8BD8AE987CA61BECAB3AF5AE70D49CF11EE3CDF7  value)
	{
		___mStatusInfo_3 = value;
	}
};


// Vuforia.VuImageTargetObservation
struct VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuImageTargetObservationStatusInfo> Vuforia.VuImageTargetObservation::mStatusInfo
	Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo> Vuforia.VuImageTargetObservation::mTargetInfo
	Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D, ___mStatusInfo_3)); }
	inline Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8 * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_tE24AB04DFB334A129C3FF50D06D4C9AA32812FE8  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D, ___mTargetInfo_4)); }
	inline Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71 * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_t72F0EEDBB73DABE729891C2C7358B02A15D9AC71  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
	}
};


// Vuforia.VuMarkObservation
struct VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuMarkObservationStatusInfo> Vuforia.VuMarkObservation::mStatusInfo
	Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuMarkObservationTemplateInfo> Vuforia.VuMarkObservation::mTemplateInfo
	Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993  ___mTemplateInfo_4;
	// System.Nullable`1<Vuforia.VuMarkObservationInstanceInfo> Vuforia.VuMarkObservation::mInstanceInfo
	Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D  ___mInstanceInfo_5;
	// System.Nullable`1<Vuforia.VuMarkObservation/VuMarkObservationInfo> Vuforia.VuMarkObservation::mInfo
	Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58  ___mInfo_6;
	// Vuforia.IVuImage Vuforia.VuMarkObservation::mInstanceImage
	RuntimeObject* ___mInstanceImage_7;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87, ___mStatusInfo_3)); }
	inline Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_tCA3BFD832752FFAE627A59A675DDB929182134DE  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTemplateInfo_4() { return static_cast<int32_t>(offsetof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87, ___mTemplateInfo_4)); }
	inline Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993  get_mTemplateInfo_4() const { return ___mTemplateInfo_4; }
	inline Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993 * get_address_of_mTemplateInfo_4() { return &___mTemplateInfo_4; }
	inline void set_mTemplateInfo_4(Nullable_1_t59B1AE34AFB3D64D9A056A2B8D2C7034A7080993  value)
	{
		___mTemplateInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTemplateInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTemplateInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTemplateInfo_4))->___value_0))->___vuMarkUserData_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mInstanceInfo_5() { return static_cast<int32_t>(offsetof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87, ___mInstanceInfo_5)); }
	inline Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D  get_mInstanceInfo_5() const { return ___mInstanceInfo_5; }
	inline Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D * get_address_of_mInstanceInfo_5() { return &___mInstanceInfo_5; }
	inline void set_mInstanceInfo_5(Nullable_1_t2926C82834BE076CA433518367A0BA41317C878D  value)
	{
		___mInstanceInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mInstanceInfo_5))->___value_0))->___buffer_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_mInfo_6() { return static_cast<int32_t>(offsetof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87, ___mInfo_6)); }
	inline Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58  get_mInfo_6() const { return ___mInfo_6; }
	inline Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58 * get_address_of_mInfo_6() { return &___mInfo_6; }
	inline void set_mInfo_6(Nullable_1_tC398C7DA4591887CF9C1AFCBDA54F26352D0DE58  value)
	{
		___mInfo_6 = value;
	}

	inline static int32_t get_offset_of_mInstanceImage_7() { return static_cast<int32_t>(offsetof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87, ___mInstanceImage_7)); }
	inline RuntimeObject* get_mInstanceImage_7() const { return ___mInstanceImage_7; }
	inline RuntimeObject** get_address_of_mInstanceImage_7() { return &___mInstanceImage_7; }
	inline void set_mInstanceImage_7(RuntimeObject* value)
	{
		___mInstanceImage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstanceImage_7), (void*)value);
	}
};


// Vuforia.VuModelTargetObservation
struct VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuModelTargetObservationStatusInfo> Vuforia.VuModelTargetObservation::mStatusInfo
	Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo> Vuforia.VuModelTargetObservation::mTargetInfo
	Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD, ___mStatusInfo_3)); }
	inline Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_tD97E6A6E94181F7074BF45C48677C5664D7B739D  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD, ___mTargetInfo_4)); }
	inline Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779 * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_tB5FF0CCF9A380EF1CEC93F52EC6AD1EC2AA0F779  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___activeGuideViewName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___activeState_8), (void*)NULL);
		#endif
	}
};


// Vuforia.VuMultiTargetObservation
struct VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuMultiTargetObservationStatusInfo> Vuforia.VuMultiTargetObservation::mStatusInfo
	Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo> Vuforia.VuMultiTargetObservation::mTargetInfo
	Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E, ___mStatusInfo_3)); }
	inline Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_t8F7BD7A27040B3BBBD27C4081AC9AB463244E53D  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E, ___mTargetInfo_4)); }
	inline Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_t0A61C99353DCE1C487C1CBE578B097EB54E4C20D  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_0), (void*)NULL);
	}
};


// Vuforia.VuObjectTargetObservation
struct VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuObjectTargetObservationStatusInfo> Vuforia.VuObjectTargetObservation::mStatusInfo
	Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuObjectTargetObservationTargetInfo> Vuforia.VuObjectTargetObservation::mTargetInfo
	Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8  ___mTargetInfo_4;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C, ___mStatusInfo_3)); }
	inline Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682 * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_tF049FDC76FFF93410FF9B003924300AA23091682  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C, ___mTargetInfo_4)); }
	inline Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8 * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_t898317D878A2CCDEF993D3BCFF502876ECBBA5B8  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
	}
};


// Vuforia.VuValidationAreaObservation
struct VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD  : public VuObservationWithPose_t1E93D83484B9FED957265E454CAE0DD6B2A80041
{
public:
	// System.Nullable`1<Vuforia.VuValidationAreaObservationStatusInfo> Vuforia.VuValidationAreaObservation::mStatusInfo
	Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB  ___mStatusInfo_3;
	// System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo> Vuforia.VuValidationAreaObservation::mTargetInfo
	Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F  ___mTargetInfo_4;
	// System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo> Vuforia.VuValidationAreaObservation::mTrainingInfo
	Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245  ___mTrainingInfo_5;
	// System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo> Vuforia.VuValidationAreaObservation::mValidationInfo
	Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7  ___mValidationInfo_6;

public:
	inline static int32_t get_offset_of_mStatusInfo_3() { return static_cast<int32_t>(offsetof(VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD, ___mStatusInfo_3)); }
	inline Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB  get_mStatusInfo_3() const { return ___mStatusInfo_3; }
	inline Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB * get_address_of_mStatusInfo_3() { return &___mStatusInfo_3; }
	inline void set_mStatusInfo_3(Nullable_1_tB89661148E26E27951ADA1154F604FBE38F5CBEB  value)
	{
		___mStatusInfo_3 = value;
	}

	inline static int32_t get_offset_of_mTargetInfo_4() { return static_cast<int32_t>(offsetof(VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD, ___mTargetInfo_4)); }
	inline Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F  get_mTargetInfo_4() const { return ___mTargetInfo_4; }
	inline Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F * get_address_of_mTargetInfo_4() { return &___mTargetInfo_4; }
	inline void set_mTargetInfo_4(Nullable_1_tA1A90237D039808BB560EBCA762B5FA0A1EB9E9F  value)
	{
		___mTargetInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mTargetInfo_4))->___value_0))->___name_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mTrainingInfo_5() { return static_cast<int32_t>(offsetof(VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD, ___mTrainingInfo_5)); }
	inline Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245  get_mTrainingInfo_5() const { return ___mTrainingInfo_5; }
	inline Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245 * get_address_of_mTrainingInfo_5() { return &___mTrainingInfo_5; }
	inline void set_mTrainingInfo_5(Nullable_1_t23614D9FFD15E5E970D812AF86EC404F25848245  value)
	{
		___mTrainingInfo_5 = value;
	}

	inline static int32_t get_offset_of_mValidationInfo_6() { return static_cast<int32_t>(offsetof(VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD, ___mValidationInfo_6)); }
	inline Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7  get_mValidationInfo_6() const { return ___mValidationInfo_6; }
	inline Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7 * get_address_of_mValidationInfo_6() { return &___mValidationInfo_6; }
	inline void set_mValidationInfo_6(Nullable_1_t933CE63EEA5BA803CDE5BC1BC775C3EA2D4DCED7  value)
	{
		___mValidationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mValidationInfo_6))->___value_0))->___labelName_0), (void*)NULL);
	}
};


// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Vuforia.Internal.Rendering.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData Vuforia.Internal.Rendering.VideoBackgroundBehaviour::mLastUsedProjectionMatrix
	ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1  ___mLastUsedProjectionMatrix_4;
	// UnityEngine.Transform Vuforia.Internal.Rendering.VideoBackgroundBehaviour::mCameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCameraTransform_5;
	// System.Boolean Vuforia.Internal.Rendering.VideoBackgroundBehaviour::mIsDirty
	bool ___mIsDirty_6;

public:
	inline static int32_t get_offset_of_mLastUsedProjectionMatrix_4() { return static_cast<int32_t>(offsetof(VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1, ___mLastUsedProjectionMatrix_4)); }
	inline ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1  get_mLastUsedProjectionMatrix_4() const { return ___mLastUsedProjectionMatrix_4; }
	inline ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1 * get_address_of_mLastUsedProjectionMatrix_4() { return &___mLastUsedProjectionMatrix_4; }
	inline void set_mLastUsedProjectionMatrix_4(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1  value)
	{
		___mLastUsedProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_mCameraTransform_5() { return static_cast<int32_t>(offsetof(VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1, ___mCameraTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCameraTransform_5() const { return ___mCameraTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCameraTransform_5() { return &___mCameraTransform_5; }
	inline void set_mCameraTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_mIsDirty_6() { return static_cast<int32_t>(offsetof(VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1, ___mIsDirty_6)); }
	inline bool get_mIsDirty_6() const { return ___mIsDirty_6; }
	inline bool* get_address_of_mIsDirty_6() { return &___mIsDirty_6; }
	inline void set_mIsDirty_6(bool value)
	{
		___mIsDirty_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);



// COM Callable Wrapper for UnityEngine.VFX.VFXEventAttribute
struct VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXEventAttribute_tC4E90458100D52776F591CE62B19FF6051F423EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.VFX.VFXSpawnerState
struct VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VFXSpawnerState_t5879CC401019E9C9D4F81128147AE52AAED167CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.ValidationAreaCapture
struct ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValidationAreaCapture_t7B389517B7B2A72F61353C119C1B6C0C59ECEA36_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.ValidationAreaCaptureUpload
struct ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValidationAreaCaptureUpload_t88FC94E26D5605BE375802E968CDDC9A506F4047_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Observers.ValidationAreaObserver
struct ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValidationAreaObserver_t492DB626EB766B5FD2E531BA154DAFCAC594B081_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector2
struct Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper>, IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630*>(this);
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
		interfaceIds[0] = IReference_1_t3C8A36C7276B7158A344146F353F2DCA871E4630::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4255473F2FF2083F7A9A0B6E89C6B9532942FA5C(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B  returnValue;
		try
		{
			returnValue = *static_cast<Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B *>(UnBox(GetManagedObjectInline(), Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_il2cpp_TypeInfo_var));
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
			returnValue = 20;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2_tBD1CD435E3C2FB549BFC0EB8E331906ABF046D8B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector2
struct Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper>, IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF*>(this);
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
		interfaceIds[0] = IReference_1_tEAE3A44604921CCE36FBE3986D4AA48786A02DCF::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB9D7D66ED2B28C2740BAFD26B96ED89E73383B5F(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E  returnValue;
		try
		{
			returnValue = *static_cast<Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E *>(UnBox(GetManagedObjectInline(), Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_il2cpp_TypeInfo_var));
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
			returnValue = 20;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector2_t3F50A00BF980B1193E44D4EBE470C34903F4631E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>, IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70*>(this);
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
		interfaceIds[0] = IReference_1_t82C05BA472430109829B64EEB0BA4AA8DA57EF70::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41BE14B78D883205B1AB0B0F28DB78816768D26D(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 *>(UnBox(GetManagedObjectInline(), Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_il2cpp_TypeInfo_var));
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
			returnValue = 20;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Vector3
struct Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>, IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF*>(this);
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
		interfaceIds[0] = IReference_1_t2E90AA27DAF67A0C5212F008ED5019775E438EAF::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEFF123E1BD76AEDAED0313C6AC9D05313CBA7487(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F  returnValue;
		try
		{
			returnValue = *static_cast<Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F *>(UnBox(GetManagedObjectInline(), Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_il2cpp_TypeInfo_var));
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
			returnValue = 20;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Vector3_t0194CC66E38F631C9297656C3AA662B23F45F53F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Rendering.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoBackgroundBehaviour_t2164F65998A09EFDD0348671C09491F9909816D1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Rendering.VideoBackgroundRenderer
struct VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoBackgroundRenderer_t37CB79A8CF7F563CC13806CE1498ECF6BD29E7C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.VideoCapture
struct VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VideoCapture_tD1E122C49208E6DCCEF7FDE2A2C91DD47D010C91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Observers.VirtualButtonObserver
struct VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VirtualButtonObserver_tAD7FE571C0AD8767EF685A535A327F91EA18CC48_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.VolumeIsolationScope
struct VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VolumeIsolationScope_t9484194A8F015F4651CF7BEE3AE010081C39AA4E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuAnchorObservation
struct VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuAnchorObservation_t800513BA5C4F0664FB41EA6E8B72643AB6043CE4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuAnchorObserver
struct VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuAnchorObserver_tE970E1B09BAC21622229AEA1C468F2C099576F0D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuAreaTargetObservation
struct VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuAreaTargetObservation_t8FCE42AF95F1E2D2CA8EF5CD2F46CDFEDE07CF62_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuAreaTargetObserver
struct VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuAreaTargetObserver_tF39D00520C1149EB35508D7E4055C4268327F465_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCameraFieldList
struct VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCameraFieldList_t3BF4F45859AC6ADD2F31A225105FAF0F4B051E9E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCameraFrame
struct VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCameraFrame_tDC118A0A621CF31991DE735216DF8B6E2FFA1CC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCameraVideoModeList
struct VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCameraVideoModeList_t8346DACD3FC1F4D8A005273E8CC98EEF63FC184A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCloudImageTargetObservation
struct VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCloudImageTargetObservation_t41B4DC73CCFC14F3E1AA8C8EFB53AF1420C1B7CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCloudImageTargetObserver
struct VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCloudImageTargetObserver_tFC152FD2E7429A8C4CBBFC86E8EA68995AFFDCA7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCylinderTargetObservation
struct VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCylinderTargetObservation_tD8C1E23E1B6F9EB961F9297993BD0B9A516399BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuCylinderTargetObserver
struct VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuCylinderTargetObserver_t3E85AD675BADF3E3E235007E8CAF12608CE254E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuDatabaseTargetInfoList
struct VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuDatabaseTargetInfoList_tB248923BE1AD0B2845B1C5F510D0AB6D4D7DDC65_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuDevicePoseObservation
struct VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuDevicePoseObservation_tF3C0749DF9596D08D7C715B2CAAB2AF6339A7250_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuDevicePoseObserver
struct VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuDevicePoseObserver_tCECCA37AA6D75AFC4E74F6FB06035EC368AE9BF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuEngine
struct VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuEngine_tC17E66478F95D54807DAED400ECB02A7A534FB29_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuEngineConfigSet
struct VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuEngineConfigSet_t1552CAE690531BEE850AA52C20B92D66CDB5DE35_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuGuideView
struct VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuGuideView_tDD722DFE53EBB99C7E478242A48A547AF81842C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuGuideViewList
struct VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuGuideViewList_t9015FC75FB8815442D55624C9B1DF9B649F0E85B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuHitTestList
struct VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuHitTestList_t07D2CFC9CDCFF2B0CF5FC8A98A4E6BDD74334AC5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuHitTestResults
struct VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuHitTestResults_tC3A83847592491086F6706A081519DBE25D037A3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuIlluminationObservation
struct VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuIlluminationObservation_tA632BD780238A4918D5E00A5ED58C171C8704935_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuIlluminationObserver
struct VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuIlluminationObserver_t021E3ACD83EDC20D52822B81420D0632ECCB6B27_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuImage
struct VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuImage_t63848D225977BC9802BBC0F2283BFA7270EE126C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuImageList
struct VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuImageList_t6C7D911F46646D79C1692DAFF0B3C58464CEAE16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuImagePixelFormatList
struct VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuImagePixelFormatList_t4B7FCC638596A8F1F1900EE911AC9102EB9611A0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuImageTargetObservation
struct VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuImageTargetObservation_t7DEB1478AED7272D7EFDE65505616D4F9D3B026D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuImageTargetObserver
struct VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuImageTargetObserver_t40C6429EC685F7F941F8BFB17967ED8B0BFC0065_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Observers.VuMarkInstance
struct VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMarkObservation
struct VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMarkObservation_tE98A803F6168A60557AF93AD42CDECB270FD5F87_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMarkObserver
struct VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMarkObserver_tE3CBB07D9F62141259EFFFEFC68B6B29F11D11A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMeshObservation
struct VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMeshObservation_t8C8B2AEAAA2E36064A6FC3805CF69B2E9CF378E6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMeshObservationBlockList
struct VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMeshObservationBlockList_t72DC295BFC2A03FAE293715840F9ADCAFE824E64_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMeshObserver
struct VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMeshObserver_t2D2F5E4181C8D43279F72866D725F086D15D0A34_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuModelTargetObservation
struct VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuModelTargetObservation_t6C3676040F13BCC0D624EC58E80DB7F02150AABD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuModelTargetObserver
struct VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuModelTargetObserver_t4175FB6A3296667A84DAA74579FFFDC710552D8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuModelTargetStateList
struct VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuModelTargetStateList_t46AC663D4D73DE887FADB343711004347EE0456A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMultiTargetObservation
struct VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMultiTargetObservation_t07E071233631ECF82F9998EE0A5C8EBF56936D1E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuMultiTargetObserver
struct VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuMultiTargetObserver_t7D4BD7934D52BE47E74D21713F429D3893B156F5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuObjectTargetObservation
struct VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuObjectTargetObservation_t186CD459C7AD1D8FD3F00D347A3644F2C5C1FE8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuObjectTargetObserver
struct VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuObjectTargetObserver_t42630D393D5A53DC9C46989BC3011BBE34BE3A58_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuObservationList
struct VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuObservationList_t4C39BDD9EA07577D5BCC3D7F91BF1550BCCAFB90_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.Internal.Simulator.VuSimulatedImage
struct VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuSimulatedImage_t8C96B8A18CF14FD2E0D492C8B478BC34A4C39EFD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuState
struct VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuState_tF67F3A9B352C644C40290BF377B126A71B14F344(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuState_tF67F3A9B352C644C40290BF377B126A71B14F344_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuValidationAreaLabelList
struct VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuValidationAreaLabelList_tDAC94E9D2902552F74153AEFF1CC89A0558D98B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuValidationAreaObservation
struct VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuValidationAreaObservation_t6A09B3841F3B3B00D1AC316609AEA69D3A0C85CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuValidationAreaObserver
struct VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuValidationAreaObserver_t751AFE83F33921F9E37760EE511A76842DD53A2C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuVirtualButtonObservation
struct VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuVirtualButtonObservation_tA25145B3FBB60488034160B6691EB85C1EECCFD6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuVirtualButtonObserver
struct VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuVirtualButtonObserver_t35E998FB72539A8BF3E1037002641A0DCF069274_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.VuforiaRuntime
struct VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) VuforiaRuntime_tA6052D541A0671C5D94BE8EB78FD4DD827C6A7AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.WWW
struct WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WWW_tCC46D6E5A368D4A83A3D6FAFF00B19700C5373E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebConnection
struct WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebConnection_tBFE079FE6CA946AE000FE257DD8FE6F898BB3C88_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F_ComCallableWrapper(obj));
}
