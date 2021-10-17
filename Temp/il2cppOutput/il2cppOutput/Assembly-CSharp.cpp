#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// FadeManager
struct FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0;
// FadeSample
struct FadeSample_t0E470A0E8C1B9B74F18CA3545BB399BC4B570DCF;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// InterfaceAdjustment
struct InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObstacleMove
struct ObstacleMove_tCA8BCDF4E1470FF52591F02A0E20D6091EB614DC;
// ParticleFinish
struct ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// RectScalerWithViewport
struct RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// ToGame
struct ToGame_t6D885A70AAC88FC0D971CDCA1762B53DBCA06C9D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UIOutline
struct UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// wallController
struct wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// FadeManager/<TransScene>d__10
struct U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ParticleFinish/<WaitParticle>d__3
struct U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral0A07FF732616CB393F6A5E3C8911D7F5F15F971F;
IL2CPP_EXTERN_C String_t* _stringLiteral1323C8A084A0A5103CC20C76F0096F053EC54890;
IL2CPP_EXTERN_C String_t* _stringLiteral178D4AAF37D2B61F061802B131C1092F6CB952CD;
IL2CPP_EXTERN_C String_t* _stringLiteral2358FCC4A730F84BBCCA558CDCDB4E729ABFE595;
IL2CPP_EXTERN_C String_t* _stringLiteral3373165B8216C440BC3CC3438AF7F799A5AD63BC;
IL2CPP_EXTERN_C String_t* _stringLiteral399FECC591EFFB36B0216B27C9FEDDE291F7F9DF;
IL2CPP_EXTERN_C String_t* _stringLiteral5AA298613FDBFC931A30DFB7667FEE840901F396;
IL2CPP_EXTERN_C String_t* _stringLiteral6183583C14342FABEAE18DDE6F829848BE9043D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6354A3B9B591DEF517FD3C2679016D96D6015135;
IL2CPP_EXTERN_C String_t* _stringLiteral64D24090833D0F2767E49072F66203DC9464A384;
IL2CPP_EXTERN_C String_t* _stringLiteral656927E66326D6DEBB8BB4931597EF9C6B306FED;
IL2CPP_EXTERN_C String_t* _stringLiteral669A015EB2DFC9B49D447A9D07CEFCA56CB0B290;
IL2CPP_EXTERN_C String_t* _stringLiteral676AD289BECC2CB21E0C1B271399E7336D9D6152;
IL2CPP_EXTERN_C String_t* _stringLiteral77512901E1D4B3450AFDEBC2654973C0BEDEA374;
IL2CPP_EXTERN_C String_t* _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C;
IL2CPP_EXTERN_C String_t* _stringLiteral796CB4FA9EE3DF7EE151D3F25A284BA5705FFEDE;
IL2CPP_EXTERN_C String_t* _stringLiteral8452CCD222466A7AF0A1432DDC1B752A4C6FF584;
IL2CPP_EXTERN_C String_t* _stringLiteral873D70DC405F35FFFB25E6B14EF9F3EBC788ECDE;
IL2CPP_EXTERN_C String_t* _stringLiteral9B3913D9874C1F015B997E6C2ED7DA18BF28F462;
IL2CPP_EXTERN_C String_t* _stringLiteralA007CD5A498E09DF06DBEBC4A38046DFC212AB75;
IL2CPP_EXTERN_C String_t* _stringLiteralA6673728A5001353610B5BA9FDD78FAE5ACB9E21;
IL2CPP_EXTERN_C String_t* _stringLiteralB1486312D3368D21B40565753BED1BA83624D4D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB21D137513445DD6E887DB086329049111A62B31;
IL2CPP_EXTERN_C String_t* _stringLiteralB52A5A35DDF98B3AED4C57357F2857AFFC39CC3B;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD;
IL2CPP_EXTERN_C String_t* _stringLiteralBC110E56A29D7AC53B843D9A41CB69C5830CFB10;
IL2CPP_EXTERN_C String_t* _stringLiteralBF34F63CF9CC98A63C7E915CDE1577571FF9A09B;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE1F8262520CEB48B8D4636F410BA4B6FDDF518C2;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1644510CFFFF45E85B85EF1C10F90993C67A89;
IL2CPP_EXTERN_C String_t* _stringLiteralFD42DA6E5C5DD8E39F758549EF65322DC4F3845D;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA25434E2C35560706A7C1C2DF70C74125E0240;
IL2CPP_EXTERN_C String_t* _stringLiteralFF04D064E4D574B8D0249948CB28A9415746BF5C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTransSceneU3Ed__10_System_Collections_IEnumerator_Reset_m299EDF0D0B6B0ADB5C12E588426A661DB47118D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitParticleU3Ed__3_System_Collections_IEnumerator_Reset_m3C13265EE56EE26D445B336E20F73E689F0A60A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____items_1)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get__items_1() const { return ____items_1; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_StaticFields, ____emptyArray_5)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____items_1)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get__items_1() const { return ____items_1; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_StaticFields, ____emptyArray_5)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// FadeManager/<TransScene>d__10
struct U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3  : public RuntimeObject
{
public:
	// System.Int32 FadeManager/<TransScene>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeManager/<TransScene>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// FadeManager FadeManager/<TransScene>d__10::<>4__this
	FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * ___U3CU3E4__this_2;
	// System.Single FadeManager/<TransScene>d__10::interval
	float ___interval_3;
	// System.String FadeManager/<TransScene>d__10::scene
	String_t* ___scene_4;
	// System.Single FadeManager/<TransScene>d__10::<time>5__2
	float ___U3CtimeU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___U3CU3E4__this_2)); }
	inline FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_interval_3() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___interval_3)); }
	inline float get_interval_3() const { return ___interval_3; }
	inline float* get_address_of_interval_3() { return &___interval_3; }
	inline void set_interval_3(float value)
	{
		___interval_3 = value;
	}

	inline static int32_t get_offset_of_scene_4() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___scene_4)); }
	inline String_t* get_scene_4() const { return ___scene_4; }
	inline String_t** get_address_of_scene_4() { return &___scene_4; }
	inline void set_scene_4(String_t* value)
	{
		___scene_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scene_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3, ___U3CtimeU3E5__2_5)); }
	inline float get_U3CtimeU3E5__2_5() const { return ___U3CtimeU3E5__2_5; }
	inline float* get_address_of_U3CtimeU3E5__2_5() { return &___U3CtimeU3E5__2_5; }
	inline void set_U3CtimeU3E5__2_5(float value)
	{
		___U3CtimeU3E5__2_5 = value;
	}
};


// ParticleFinish/<WaitParticle>d__3
struct U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3  : public RuntimeObject
{
public:
	// System.Int32 ParticleFinish/<WaitParticle>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ParticleFinish/<WaitParticle>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ParticleFinish ParticleFinish/<WaitParticle>d__3::<>4__this
	ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3, ___U3CU3E4__this_2)); }
	inline ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
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


// InterfaceAdjustment/ADJUSTMENT_RULES
struct ADJUSTMENT_RULES_t5DD25E579BA9053AF3789C3B4F4CDA0FEC67EF47 
{
public:
	// System.Int32 InterfaceAdjustment/ADJUSTMENT_RULES::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ADJUSTMENT_RULES_t5DD25E579BA9053AF3789C3B4F4CDA0FEC67EF47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
struct Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A, ___list_0)); }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * get_list_0() const { return ___list_0; }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A, ___current_3)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_current_3() const { return ___current_3; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
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


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_4;
	// UnityEngine.Vector3 CameraController::lastPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPos_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_4() const { return ___player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_lastPos_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___lastPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPos_5() const { return ___lastPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPos_5() { return &___lastPos_5; }
	inline void set_lastPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPos_5 = value;
	}
};


// FadeManager
struct FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean FadeManager::DebugMode
	bool ___DebugMode_5;
	// System.Single FadeManager::fadeAlpha
	float ___fadeAlpha_6;
	// System.Boolean FadeManager::isFading
	bool ___isFading_7;
	// UnityEngine.Color FadeManager::fadeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeColor_8;

public:
	inline static int32_t get_offset_of_DebugMode_5() { return static_cast<int32_t>(offsetof(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0, ___DebugMode_5)); }
	inline bool get_DebugMode_5() const { return ___DebugMode_5; }
	inline bool* get_address_of_DebugMode_5() { return &___DebugMode_5; }
	inline void set_DebugMode_5(bool value)
	{
		___DebugMode_5 = value;
	}

	inline static int32_t get_offset_of_fadeAlpha_6() { return static_cast<int32_t>(offsetof(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0, ___fadeAlpha_6)); }
	inline float get_fadeAlpha_6() const { return ___fadeAlpha_6; }
	inline float* get_address_of_fadeAlpha_6() { return &___fadeAlpha_6; }
	inline void set_fadeAlpha_6(float value)
	{
		___fadeAlpha_6 = value;
	}

	inline static int32_t get_offset_of_isFading_7() { return static_cast<int32_t>(offsetof(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0, ___isFading_7)); }
	inline bool get_isFading_7() const { return ___isFading_7; }
	inline bool* get_address_of_isFading_7() { return &___isFading_7; }
	inline void set_isFading_7(bool value)
	{
		___isFading_7 = value;
	}

	inline static int32_t get_offset_of_fadeColor_8() { return static_cast<int32_t>(offsetof(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0, ___fadeColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeColor_8() const { return ___fadeColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeColor_8() { return &___fadeColor_8; }
	inline void set_fadeColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeColor_8 = value;
	}
};

struct FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields
{
public:
	// FadeManager FadeManager::instance
	FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields, ___instance_4)); }
	inline FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * get_instance_4() const { return ___instance_4; }
	inline FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// FadeSample
struct FadeSample_t0E470A0E8C1B9B74F18CA3545BB399BC4B570DCF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameManager::itemCount
	int32_t ___itemCount_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::items
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___items_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::obstacles
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___obstacles_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> GameManager::symbolPosition
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___symbolPosition_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::appearItems
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___appearItems_9;
	// UnityEngine.GameObject GameManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_10;
	// Player GameManager::player2
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player2_11;
	// System.Single GameManager::lineHight
	float ___lineHight_12;
	// System.Single GameManager::lineWidthStartPoint
	float ___lineWidthStartPoint_13;
	// System.Single GameManager::symbolDistance
	float ___symbolDistance_14;
	// System.Single GameManager::lineDistance
	float ___lineDistance_15;
	// System.Single GameManager::middleSymbolDistance
	float ___middleSymbolDistance_16;
	// System.Int32 GameManager::countForGenerateHight
	int32_t ___countForGenerateHight_17;
	// System.Int32 GameManager::stageNum
	int32_t ___stageNum_18;
	// System.Boolean GameManager::lastSymbol
	bool ___lastSymbol_19;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_20;
	// System.Boolean GameManager::isSymbolGenerated
	bool ___isSymbolGenerated_22;
	// System.Boolean GameManager::isSymbolDeleted
	bool ___isSymbolDeleted_23;
	// UnityEngine.GameObject GameManager::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_24;
	// System.Single GameManager::WallObstacleLeftX
	float ___WallObstacleLeftX_27;
	// System.Single GameManager::WallObstacleRightX
	float ___WallObstacleRightX_28;

public:
	inline static int32_t get_offset_of_itemCount_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___itemCount_4)); }
	inline int32_t get_itemCount_4() const { return ___itemCount_4; }
	inline int32_t* get_address_of_itemCount_4() { return &___itemCount_4; }
	inline void set_itemCount_4(int32_t value)
	{
		___itemCount_4 = value;
	}

	inline static int32_t get_offset_of_items_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___items_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_items_5() const { return ___items_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_items_5() { return &___items_5; }
	inline void set_items_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___items_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_5), (void*)value);
	}

	inline static int32_t get_offset_of_obstacles_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___obstacles_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_obstacles_6() const { return ___obstacles_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_obstacles_6() { return &___obstacles_6; }
	inline void set_obstacles_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___obstacles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obstacles_6), (void*)value);
	}

	inline static int32_t get_offset_of_symbolPosition_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___symbolPosition_7)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_symbolPosition_7() const { return ___symbolPosition_7; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_symbolPosition_7() { return &___symbolPosition_7; }
	inline void set_symbolPosition_7(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___symbolPosition_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolPosition_7), (void*)value);
	}

	inline static int32_t get_offset_of_appearItems_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___appearItems_9)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_appearItems_9() const { return ___appearItems_9; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_appearItems_9() { return &___appearItems_9; }
	inline void set_appearItems_9(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___appearItems_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appearItems_9), (void*)value);
	}

	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_10() const { return ___player_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_10), (void*)value);
	}

	inline static int32_t get_offset_of_player2_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player2_11)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player2_11() const { return ___player2_11; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player2_11() { return &___player2_11; }
	inline void set_player2_11(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player2_11), (void*)value);
	}

	inline static int32_t get_offset_of_lineHight_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lineHight_12)); }
	inline float get_lineHight_12() const { return ___lineHight_12; }
	inline float* get_address_of_lineHight_12() { return &___lineHight_12; }
	inline void set_lineHight_12(float value)
	{
		___lineHight_12 = value;
	}

	inline static int32_t get_offset_of_lineWidthStartPoint_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lineWidthStartPoint_13)); }
	inline float get_lineWidthStartPoint_13() const { return ___lineWidthStartPoint_13; }
	inline float* get_address_of_lineWidthStartPoint_13() { return &___lineWidthStartPoint_13; }
	inline void set_lineWidthStartPoint_13(float value)
	{
		___lineWidthStartPoint_13 = value;
	}

	inline static int32_t get_offset_of_symbolDistance_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___symbolDistance_14)); }
	inline float get_symbolDistance_14() const { return ___symbolDistance_14; }
	inline float* get_address_of_symbolDistance_14() { return &___symbolDistance_14; }
	inline void set_symbolDistance_14(float value)
	{
		___symbolDistance_14 = value;
	}

	inline static int32_t get_offset_of_lineDistance_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lineDistance_15)); }
	inline float get_lineDistance_15() const { return ___lineDistance_15; }
	inline float* get_address_of_lineDistance_15() { return &___lineDistance_15; }
	inline void set_lineDistance_15(float value)
	{
		___lineDistance_15 = value;
	}

	inline static int32_t get_offset_of_middleSymbolDistance_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___middleSymbolDistance_16)); }
	inline float get_middleSymbolDistance_16() const { return ___middleSymbolDistance_16; }
	inline float* get_address_of_middleSymbolDistance_16() { return &___middleSymbolDistance_16; }
	inline void set_middleSymbolDistance_16(float value)
	{
		___middleSymbolDistance_16 = value;
	}

	inline static int32_t get_offset_of_countForGenerateHight_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___countForGenerateHight_17)); }
	inline int32_t get_countForGenerateHight_17() const { return ___countForGenerateHight_17; }
	inline int32_t* get_address_of_countForGenerateHight_17() { return &___countForGenerateHight_17; }
	inline void set_countForGenerateHight_17(int32_t value)
	{
		___countForGenerateHight_17 = value;
	}

	inline static int32_t get_offset_of_stageNum_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___stageNum_18)); }
	inline int32_t get_stageNum_18() const { return ___stageNum_18; }
	inline int32_t* get_address_of_stageNum_18() { return &___stageNum_18; }
	inline void set_stageNum_18(int32_t value)
	{
		___stageNum_18 = value;
	}

	inline static int32_t get_offset_of_lastSymbol_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___lastSymbol_19)); }
	inline bool get_lastSymbol_19() const { return ___lastSymbol_19; }
	inline bool* get_address_of_lastSymbol_19() { return &___lastSymbol_19; }
	inline void set_lastSymbol_19(bool value)
	{
		___lastSymbol_19 = value;
	}

	inline static int32_t get_offset_of_scoreText_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreText_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_20() const { return ___scoreText_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_20() { return &___scoreText_20; }
	inline void set_scoreText_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_20), (void*)value);
	}

	inline static int32_t get_offset_of_isSymbolGenerated_22() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isSymbolGenerated_22)); }
	inline bool get_isSymbolGenerated_22() const { return ___isSymbolGenerated_22; }
	inline bool* get_address_of_isSymbolGenerated_22() { return &___isSymbolGenerated_22; }
	inline void set_isSymbolGenerated_22(bool value)
	{
		___isSymbolGenerated_22 = value;
	}

	inline static int32_t get_offset_of_isSymbolDeleted_23() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isSymbolDeleted_23)); }
	inline bool get_isSymbolDeleted_23() const { return ___isSymbolDeleted_23; }
	inline bool* get_address_of_isSymbolDeleted_23() { return &___isSymbolDeleted_23; }
	inline void set_isSymbolDeleted_23(bool value)
	{
		___isSymbolDeleted_23 = value;
	}

	inline static int32_t get_offset_of_canvas_24() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___canvas_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_24() const { return ___canvas_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_24() { return &___canvas_24; }
	inline void set_canvas_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_24), (void*)value);
	}

	inline static int32_t get_offset_of_WallObstacleLeftX_27() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___WallObstacleLeftX_27)); }
	inline float get_WallObstacleLeftX_27() const { return ___WallObstacleLeftX_27; }
	inline float* get_address_of_WallObstacleLeftX_27() { return &___WallObstacleLeftX_27; }
	inline void set_WallObstacleLeftX_27(float value)
	{
		___WallObstacleLeftX_27 = value;
	}

	inline static int32_t get_offset_of_WallObstacleRightX_28() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___WallObstacleRightX_28)); }
	inline float get_WallObstacleRightX_28() const { return ___WallObstacleRightX_28; }
	inline float* get_address_of_WallObstacleRightX_28() { return &___WallObstacleRightX_28; }
	inline void set_WallObstacleRightX_28(float value)
	{
		___WallObstacleRightX_28 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// System.Int32 GameManager::symbolListCount
	int32_t ___symbolListCount_8;
	// System.Int32 GameManager::score
	int32_t ___score_21;
	// System.Int32 GameManager::highScore
	int32_t ___highScore_25;
	// System.Boolean GameManager::isHighScored
	bool ___isHighScored_26;

public:
	inline static int32_t get_offset_of_symbolListCount_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___symbolListCount_8)); }
	inline int32_t get_symbolListCount_8() const { return ___symbolListCount_8; }
	inline int32_t* get_address_of_symbolListCount_8() { return &___symbolListCount_8; }
	inline void set_symbolListCount_8(int32_t value)
	{
		___symbolListCount_8 = value;
	}

	inline static int32_t get_offset_of_score_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___score_21)); }
	inline int32_t get_score_21() const { return ___score_21; }
	inline int32_t* get_address_of_score_21() { return &___score_21; }
	inline void set_score_21(int32_t value)
	{
		___score_21 = value;
	}

	inline static int32_t get_offset_of_highScore_25() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___highScore_25)); }
	inline int32_t get_highScore_25() const { return ___highScore_25; }
	inline int32_t* get_address_of_highScore_25() { return &___highScore_25; }
	inline void set_highScore_25(int32_t value)
	{
		___highScore_25 = value;
	}

	inline static int32_t get_offset_of_isHighScored_26() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___isHighScored_26)); }
	inline bool get_isHighScored_26() const { return ___isHighScored_26; }
	inline bool* get_address_of_isHighScored_26() { return &___isHighScored_26; }
	inline void set_isHighScored_26(bool value)
	{
		___isHighScored_26 = value;
	}
};


// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameOverManager::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text GameOverManager::highScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___highScoreText_5;
	// UnityEngine.UI.Text GameOverManager::newRecordText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___newRecordText_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameOverManager::symbols
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___symbols_7;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_highScoreText_5() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___highScoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_highScoreText_5() const { return ___highScoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_highScoreText_5() { return &___highScoreText_5; }
	inline void set_highScoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___highScoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_newRecordText_6() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___newRecordText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_newRecordText_6() const { return ___newRecordText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_newRecordText_6() { return &___newRecordText_6; }
	inline void set_newRecordText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___newRecordText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newRecordText_6), (void*)value);
	}

	inline static int32_t get_offset_of_symbols_7() { return static_cast<int32_t>(offsetof(GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C, ___symbols_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_symbols_7() const { return ___symbols_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_symbols_7() { return &___symbols_7; }
	inline void set_symbols_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___symbols_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbols_7), (void*)value);
	}
};


// InterfaceAdjustment
struct InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2Int InterfaceAdjustment::Size
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___Size_4;
	// InterfaceAdjustment/ADJUSTMENT_RULES InterfaceAdjustment::AdjType
	int32_t ___AdjType_5;

public:
	inline static int32_t get_offset_of_Size_4() { return static_cast<int32_t>(offsetof(InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89, ___Size_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_Size_4() const { return ___Size_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_Size_4() { return &___Size_4; }
	inline void set_Size_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___Size_4 = value;
	}

	inline static int32_t get_offset_of_AdjType_5() { return static_cast<int32_t>(offsetof(InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89, ___AdjType_5)); }
	inline int32_t get_AdjType_5() const { return ___AdjType_5; }
	inline int32_t* get_address_of_AdjType_5() { return &___AdjType_5; }
	inline void set_AdjType_5(int32_t value)
	{
		___AdjType_5 = value;
	}
};


// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ObstacleMove
struct ObstacleMove_tCA8BCDF4E1470FF52591F02A0E20D6091EB614DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ParticleFinish
struct ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ParticleFinish::fadeTime
	float ___fadeTime_4;
	// System.Single ParticleFinish::particleTime
	float ___particleTime_5;

public:
	inline static int32_t get_offset_of_fadeTime_4() { return static_cast<int32_t>(offsetof(ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C, ___fadeTime_4)); }
	inline float get_fadeTime_4() const { return ___fadeTime_4; }
	inline float* get_address_of_fadeTime_4() { return &___fadeTime_4; }
	inline void set_fadeTime_4(float value)
	{
		___fadeTime_4 = value;
	}

	inline static int32_t get_offset_of_particleTime_5() { return static_cast<int32_t>(offsetof(ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C, ___particleTime_5)); }
	inline float get_particleTime_5() const { return ___particleTime_5; }
	inline float* get_address_of_particleTime_5() { return &___particleTime_5; }
	inline void set_particleTime_5(float value)
	{
		___particleTime_5 = value;
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::JumpPower
	float ___JumpPower_4;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;
	// UnityEngine.Vector2 Player::right
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___right_6;
	// UnityEngine.Vector2 Player::left
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___left_7;
	// UnityEngine.SpriteRenderer Player::currentSymbol
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___currentSymbol_8;
	// UnityEngine.Sprite Player::squareSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___squareSprite_9;
	// UnityEngine.Sprite Player::triangleSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___triangleSprite_10;
	// UnityEngine.Sprite Player::circleSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___circleSprite_11;
	// UnityEngine.Sprite Player::polygon5Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon5Sprite_12;
	// UnityEngine.Sprite Player::polygon6Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon6Sprite_13;
	// UnityEngine.Sprite Player::polygon7Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon7Sprite_14;
	// UnityEngine.Sprite Player::polygon8Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon8Sprite_15;
	// UnityEngine.Sprite Player::polygon9Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon9Sprite_16;
	// UnityEngine.Sprite Player::polygon10Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___polygon10Sprite_17;
	// System.Boolean Player::isTriangle
	bool ___isTriangle_18;
	// System.Boolean Player::squared
	bool ___squared_19;
	// System.Boolean Player::circled
	bool ___circled_20;
	// System.Boolean Player::isPolygon5
	bool ___isPolygon5_21;
	// System.Boolean Player::isPolygon6
	bool ___isPolygon6_22;
	// System.Boolean Player::isPolygon7
	bool ___isPolygon7_23;
	// System.Boolean Player::isPolygon8
	bool ___isPolygon8_24;
	// System.Boolean Player::isPolygon9
	bool ___isPolygon9_25;
	// System.Boolean Player::isPolygon10
	bool ___isPolygon10_26;
	// SoundManager Player::sm
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___sm_27;
	// UnityEngine.Camera Player::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_28;
	// System.String Player::colorCode
	String_t* ___colorCode_29;
	// System.Single Player::rotationSpeed
	float ___rotationSpeed_30;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Player::particleList
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___particleList_31;

public:
	inline static int32_t get_offset_of_JumpPower_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___JumpPower_4)); }
	inline float get_JumpPower_4() const { return ___JumpPower_4; }
	inline float* get_address_of_JumpPower_4() { return &___JumpPower_4; }
	inline void set_JumpPower_4(float value)
	{
		___JumpPower_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}

	inline static int32_t get_offset_of_right_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___right_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_right_6() const { return ___right_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_right_6() { return &___right_6; }
	inline void set_right_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___right_6 = value;
	}

	inline static int32_t get_offset_of_left_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___left_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_left_7() const { return ___left_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_left_7() { return &___left_7; }
	inline void set_left_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___left_7 = value;
	}

	inline static int32_t get_offset_of_currentSymbol_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___currentSymbol_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_currentSymbol_8() const { return ___currentSymbol_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_currentSymbol_8() { return &___currentSymbol_8; }
	inline void set_currentSymbol_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___currentSymbol_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSymbol_8), (void*)value);
	}

	inline static int32_t get_offset_of_squareSprite_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___squareSprite_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_squareSprite_9() const { return ___squareSprite_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_squareSprite_9() { return &___squareSprite_9; }
	inline void set_squareSprite_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___squareSprite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___squareSprite_9), (void*)value);
	}

	inline static int32_t get_offset_of_triangleSprite_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___triangleSprite_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_triangleSprite_10() const { return ___triangleSprite_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_triangleSprite_10() { return &___triangleSprite_10; }
	inline void set_triangleSprite_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___triangleSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangleSprite_10), (void*)value);
	}

	inline static int32_t get_offset_of_circleSprite_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___circleSprite_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_circleSprite_11() const { return ___circleSprite_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_circleSprite_11() { return &___circleSprite_11; }
	inline void set_circleSprite_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___circleSprite_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circleSprite_11), (void*)value);
	}

	inline static int32_t get_offset_of_polygon5Sprite_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon5Sprite_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon5Sprite_12() const { return ___polygon5Sprite_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon5Sprite_12() { return &___polygon5Sprite_12; }
	inline void set_polygon5Sprite_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon5Sprite_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon5Sprite_12), (void*)value);
	}

	inline static int32_t get_offset_of_polygon6Sprite_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon6Sprite_13)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon6Sprite_13() const { return ___polygon6Sprite_13; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon6Sprite_13() { return &___polygon6Sprite_13; }
	inline void set_polygon6Sprite_13(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon6Sprite_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon6Sprite_13), (void*)value);
	}

	inline static int32_t get_offset_of_polygon7Sprite_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon7Sprite_14)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon7Sprite_14() const { return ___polygon7Sprite_14; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon7Sprite_14() { return &___polygon7Sprite_14; }
	inline void set_polygon7Sprite_14(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon7Sprite_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon7Sprite_14), (void*)value);
	}

	inline static int32_t get_offset_of_polygon8Sprite_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon8Sprite_15)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon8Sprite_15() const { return ___polygon8Sprite_15; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon8Sprite_15() { return &___polygon8Sprite_15; }
	inline void set_polygon8Sprite_15(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon8Sprite_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon8Sprite_15), (void*)value);
	}

	inline static int32_t get_offset_of_polygon9Sprite_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon9Sprite_16)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon9Sprite_16() const { return ___polygon9Sprite_16; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon9Sprite_16() { return &___polygon9Sprite_16; }
	inline void set_polygon9Sprite_16(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon9Sprite_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon9Sprite_16), (void*)value);
	}

	inline static int32_t get_offset_of_polygon10Sprite_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___polygon10Sprite_17)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_polygon10Sprite_17() const { return ___polygon10Sprite_17; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_polygon10Sprite_17() { return &___polygon10Sprite_17; }
	inline void set_polygon10Sprite_17(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___polygon10Sprite_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___polygon10Sprite_17), (void*)value);
	}

	inline static int32_t get_offset_of_isTriangle_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isTriangle_18)); }
	inline bool get_isTriangle_18() const { return ___isTriangle_18; }
	inline bool* get_address_of_isTriangle_18() { return &___isTriangle_18; }
	inline void set_isTriangle_18(bool value)
	{
		___isTriangle_18 = value;
	}

	inline static int32_t get_offset_of_squared_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___squared_19)); }
	inline bool get_squared_19() const { return ___squared_19; }
	inline bool* get_address_of_squared_19() { return &___squared_19; }
	inline void set_squared_19(bool value)
	{
		___squared_19 = value;
	}

	inline static int32_t get_offset_of_circled_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___circled_20)); }
	inline bool get_circled_20() const { return ___circled_20; }
	inline bool* get_address_of_circled_20() { return &___circled_20; }
	inline void set_circled_20(bool value)
	{
		___circled_20 = value;
	}

	inline static int32_t get_offset_of_isPolygon5_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon5_21)); }
	inline bool get_isPolygon5_21() const { return ___isPolygon5_21; }
	inline bool* get_address_of_isPolygon5_21() { return &___isPolygon5_21; }
	inline void set_isPolygon5_21(bool value)
	{
		___isPolygon5_21 = value;
	}

	inline static int32_t get_offset_of_isPolygon6_22() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon6_22)); }
	inline bool get_isPolygon6_22() const { return ___isPolygon6_22; }
	inline bool* get_address_of_isPolygon6_22() { return &___isPolygon6_22; }
	inline void set_isPolygon6_22(bool value)
	{
		___isPolygon6_22 = value;
	}

	inline static int32_t get_offset_of_isPolygon7_23() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon7_23)); }
	inline bool get_isPolygon7_23() const { return ___isPolygon7_23; }
	inline bool* get_address_of_isPolygon7_23() { return &___isPolygon7_23; }
	inline void set_isPolygon7_23(bool value)
	{
		___isPolygon7_23 = value;
	}

	inline static int32_t get_offset_of_isPolygon8_24() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon8_24)); }
	inline bool get_isPolygon8_24() const { return ___isPolygon8_24; }
	inline bool* get_address_of_isPolygon8_24() { return &___isPolygon8_24; }
	inline void set_isPolygon8_24(bool value)
	{
		___isPolygon8_24 = value;
	}

	inline static int32_t get_offset_of_isPolygon9_25() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon9_25)); }
	inline bool get_isPolygon9_25() const { return ___isPolygon9_25; }
	inline bool* get_address_of_isPolygon9_25() { return &___isPolygon9_25; }
	inline void set_isPolygon9_25(bool value)
	{
		___isPolygon9_25 = value;
	}

	inline static int32_t get_offset_of_isPolygon10_26() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isPolygon10_26)); }
	inline bool get_isPolygon10_26() const { return ___isPolygon10_26; }
	inline bool* get_address_of_isPolygon10_26() { return &___isPolygon10_26; }
	inline void set_isPolygon10_26(bool value)
	{
		___isPolygon10_26 = value;
	}

	inline static int32_t get_offset_of_sm_27() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___sm_27)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_sm_27() const { return ___sm_27; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_sm_27() { return &___sm_27; }
	inline void set_sm_27(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___sm_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sm_27), (void*)value);
	}

	inline static int32_t get_offset_of__camera_28() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ____camera_28)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_28() const { return ____camera_28; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_28() { return &____camera_28; }
	inline void set__camera_28(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_28), (void*)value);
	}

	inline static int32_t get_offset_of_colorCode_29() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___colorCode_29)); }
	inline String_t* get_colorCode_29() const { return ___colorCode_29; }
	inline String_t** get_address_of_colorCode_29() { return &___colorCode_29; }
	inline void set_colorCode_29(String_t* value)
	{
		___colorCode_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colorCode_29), (void*)value);
	}

	inline static int32_t get_offset_of_rotationSpeed_30() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rotationSpeed_30)); }
	inline float get_rotationSpeed_30() const { return ___rotationSpeed_30; }
	inline float* get_address_of_rotationSpeed_30() { return &___rotationSpeed_30; }
	inline void set_rotationSpeed_30(float value)
	{
		___rotationSpeed_30 = value;
	}

	inline static int32_t get_offset_of_particleList_31() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___particleList_31)); }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * get_particleList_31() const { return ___particleList_31; }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 ** get_address_of_particleList_31() { return &___particleList_31; }
	inline void set_particleList_31(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * value)
	{
		___particleList_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleList_31), (void*)value);
	}
};

struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields
{
public:
	// System.Int32 Player::symbolLevel
	int32_t ___symbolLevel_32;
	// System.Boolean Player::isGameOver
	bool ___isGameOver_33;

public:
	inline static int32_t get_offset_of_symbolLevel_32() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields, ___symbolLevel_32)); }
	inline int32_t get_symbolLevel_32() const { return ___symbolLevel_32; }
	inline int32_t* get_address_of_symbolLevel_32() { return &___symbolLevel_32; }
	inline void set_symbolLevel_32(int32_t value)
	{
		___symbolLevel_32 = value;
	}

	inline static int32_t get_offset_of_isGameOver_33() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields, ___isGameOver_33)); }
	inline bool get_isGameOver_33() const { return ___isGameOver_33; }
	inline bool* get_address_of_isGameOver_33() { return &___isGameOver_33; }
	inline void set_isGameOver_33(bool value)
	{
		___isGameOver_33 = value;
	}
};


// RectScalerWithViewport
struct RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform RectScalerWithViewport::refRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___refRect_4;
	// UnityEngine.Vector2 RectScalerWithViewport::referenceResolution
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___referenceResolution_5;
	// System.Single RectScalerWithViewport::matchWidthOrHeight
	float ___matchWidthOrHeight_6;
	// System.Single RectScalerWithViewport::m_width
	float ___m_width_7;
	// System.Single RectScalerWithViewport::m_height
	float ___m_height_8;
	// System.Single RectScalerWithViewport::m_matchWidthOrHeight
	float ___m_matchWidthOrHeight_9;

public:
	inline static int32_t get_offset_of_refRect_4() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___refRect_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_refRect_4() const { return ___refRect_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_refRect_4() { return &___refRect_4; }
	inline void set_refRect_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___refRect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refRect_4), (void*)value);
	}

	inline static int32_t get_offset_of_referenceResolution_5() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___referenceResolution_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_referenceResolution_5() const { return ___referenceResolution_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_referenceResolution_5() { return &___referenceResolution_5; }
	inline void set_referenceResolution_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___referenceResolution_5 = value;
	}

	inline static int32_t get_offset_of_matchWidthOrHeight_6() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___matchWidthOrHeight_6)); }
	inline float get_matchWidthOrHeight_6() const { return ___matchWidthOrHeight_6; }
	inline float* get_address_of_matchWidthOrHeight_6() { return &___matchWidthOrHeight_6; }
	inline void set_matchWidthOrHeight_6(float value)
	{
		___matchWidthOrHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_width_7() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___m_width_7)); }
	inline float get_m_width_7() const { return ___m_width_7; }
	inline float* get_address_of_m_width_7() { return &___m_width_7; }
	inline void set_m_width_7(float value)
	{
		___m_width_7 = value;
	}

	inline static int32_t get_offset_of_m_height_8() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___m_height_8)); }
	inline float get_m_height_8() const { return ___m_height_8; }
	inline float* get_address_of_m_height_8() { return &___m_height_8; }
	inline void set_m_height_8(float value)
	{
		___m_height_8 = value;
	}

	inline static int32_t get_offset_of_m_matchWidthOrHeight_9() { return static_cast<int32_t>(offsetof(RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8, ___m_matchWidthOrHeight_9)); }
	inline float get_m_matchWidthOrHeight_9() const { return ___m_matchWidthOrHeight_9; }
	inline float* get_address_of_m_matchWidthOrHeight_9() { return &___m_matchWidthOrHeight_9; }
	inline void set_m_matchWidthOrHeight_9(float value)
	{
		___m_matchWidthOrHeight_9 = value;
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip SoundManager::jumpSE
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___jumpSE_4;
	// UnityEngine.AudioClip SoundManager::buttonSE
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___buttonSE_5;
	// UnityEngine.AudioClip SoundManager::changeSE
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___changeSE_6;
	// UnityEngine.AudioClip SoundManager::breakSE
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___breakSE_7;
	// UnityEngine.AudioSource SoundManager::aud
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___aud_8;

public:
	inline static int32_t get_offset_of_jumpSE_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___jumpSE_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_jumpSE_4() const { return ___jumpSE_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_jumpSE_4() { return &___jumpSE_4; }
	inline void set_jumpSE_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___jumpSE_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpSE_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonSE_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___buttonSE_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_buttonSE_5() const { return ___buttonSE_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_buttonSE_5() { return &___buttonSE_5; }
	inline void set_buttonSE_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___buttonSE_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonSE_5), (void*)value);
	}

	inline static int32_t get_offset_of_changeSE_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___changeSE_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_changeSE_6() const { return ___changeSE_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_changeSE_6() { return &___changeSE_6; }
	inline void set_changeSE_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___changeSE_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeSE_6), (void*)value);
	}

	inline static int32_t get_offset_of_breakSE_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___breakSE_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_breakSE_7() const { return ___breakSE_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_breakSE_7() { return &___breakSE_7; }
	inline void set_breakSE_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___breakSE_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___breakSE_7), (void*)value);
	}

	inline static int32_t get_offset_of_aud_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___aud_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_aud_8() const { return ___aud_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_aud_8() { return &___aud_8; }
	inline void set_aud_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___aud_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aud_8), (void*)value);
	}
};


// ToGame
struct ToGame_t6D885A70AAC88FC0D971CDCA1762B53DBCA06C9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// wallController
struct wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject wallController::wallLeft
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallLeft_4;
	// UnityEngine.GameObject wallController::wallRight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wallRight_5;
	// UnityEngine.GameObject wallController::symbol
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___symbol_6;

public:
	inline static int32_t get_offset_of_wallLeft_4() { return static_cast<int32_t>(offsetof(wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1, ___wallLeft_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallLeft_4() const { return ___wallLeft_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallLeft_4() { return &___wallLeft_4; }
	inline void set_wallLeft_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_wallRight_5() { return static_cast<int32_t>(offsetof(wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1, ___wallRight_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wallRight_5() const { return ___wallRight_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wallRight_5() { return &___wallRight_5; }
	inline void set_wallRight_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wallRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wallRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_symbol_6() { return static_cast<int32_t>(offsetof(wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1, ___symbol_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_symbol_6() const { return ___symbol_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_symbol_6() { return &___symbol_6; }
	inline void set_symbol_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___symbol_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbol_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// UIOutline
struct UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UIOutline::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// System.Single UIOutline::_outlineWidth
	float ____outlineWidth_37;
	// System.Single UIOutline::_cornerRadius
	float ____cornerRadius_38;
	// System.Int32 UIOutline::_cornerSegments
	int32_t ____cornerSegments_39;
	// System.Single UIOutline::_mappingBias
	float ____mappingBias_40;
	// System.Boolean UIOutline::_fillCenter
	bool ____fillCenter_41;
	// UnityEngine.Vector3[] UIOutline::_corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____corners_42;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UIOutline::_verts
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ____verts_43;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of__outlineWidth_37() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____outlineWidth_37)); }
	inline float get__outlineWidth_37() const { return ____outlineWidth_37; }
	inline float* get_address_of__outlineWidth_37() { return &____outlineWidth_37; }
	inline void set__outlineWidth_37(float value)
	{
		____outlineWidth_37 = value;
	}

	inline static int32_t get_offset_of__cornerRadius_38() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____cornerRadius_38)); }
	inline float get__cornerRadius_38() const { return ____cornerRadius_38; }
	inline float* get_address_of__cornerRadius_38() { return &____cornerRadius_38; }
	inline void set__cornerRadius_38(float value)
	{
		____cornerRadius_38 = value;
	}

	inline static int32_t get_offset_of__cornerSegments_39() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____cornerSegments_39)); }
	inline int32_t get__cornerSegments_39() const { return ____cornerSegments_39; }
	inline int32_t* get_address_of__cornerSegments_39() { return &____cornerSegments_39; }
	inline void set__cornerSegments_39(int32_t value)
	{
		____cornerSegments_39 = value;
	}

	inline static int32_t get_offset_of__mappingBias_40() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____mappingBias_40)); }
	inline float get__mappingBias_40() const { return ____mappingBias_40; }
	inline float* get_address_of__mappingBias_40() { return &____mappingBias_40; }
	inline void set__mappingBias_40(float value)
	{
		____mappingBias_40 = value;
	}

	inline static int32_t get_offset_of__fillCenter_41() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____fillCenter_41)); }
	inline bool get__fillCenter_41() const { return ____fillCenter_41; }
	inline bool* get_address_of__fillCenter_41() { return &____fillCenter_41; }
	inline void set__fillCenter_41(bool value)
	{
		____fillCenter_41 = value;
	}

	inline static int32_t get_offset_of__corners_42() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____corners_42)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__corners_42() const { return ____corners_42; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__corners_42() { return &____corners_42; }
	inline void set__corners_42(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____corners_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____corners_42), (void*)value);
	}

	inline static int32_t get_offset_of__verts_43() { return static_cast<int32_t>(offsetof(UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A, ____verts_43)); }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * get__verts_43() const { return ____verts_43; }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F ** get_address_of__verts_43() { return &____verts_43; }
	inline void set__verts_43(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * value)
	{
		____verts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____verts_43), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
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
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  m_Items[1];

public:
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB_gshared (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_gshared_inline (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A  List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7_gshared (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_gshared_inline (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA_gshared (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561_gshared (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC_gshared (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// FadeManager FadeManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void FadeManager::LoadScene(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, String_t* ___scene0, float ___interval1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Collections.IEnumerator FadeManager::TransScene(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeManager_TransScene_m0B9411C1EF47A4519C554E3E69948EB9C1F2A2C5 (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, String_t* ___scene0, float ___interval1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void FadeManager/<TransScene>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransSceneU3Ed__10__ctor_mF6B239297A0DBD79C3A40FA5D63E5FEB273848F3 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC (int32_t ___value0, const RuntimeMethod* method);
// System.Void GameManager::symbolGenerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_symbolGenerate_m1CFE3615C8F40D3D87AB7BC23839341BC940A8CC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void GameManager::symbolDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_symbolDelete_m6DE96AC385251DF80D3AAADAD1DA088C2B45C02B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void GameManager::HighScoreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HighScoreUpdate_m069CA064241E5CAC097664DCF22381301FD13F5D (const RuntimeMethod* method);
// System.Void ParticleFinish/<WaitParticle>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitParticleU3Ed__3__ctor_mB25F8594E0CDC5E53CB08AB7BA0A146BEEAE1570 (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Player::leftRightTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_leftRightTap_m65E7B83DE5BFA7DF6CDF1C4C4322C99FD0E3A8BD (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void SoundManager::JumpSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
inline int32_t List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void Player::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069 (String_t* ___htmlString0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * ___color1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void SoundManager::BreakSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void SoundManager::ChangeSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method);
// System.Void Player::ColorChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
inline void List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void RectScalerWithViewport::UpdateRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_UpdateRect_mE476B0588D3034F6D83CD9BDC4ADDCE5C9D95D2A (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method);
// System.Void RectScalerWithViewport::UpdateRectWithCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_UpdateRectWithCheck_m39195108C053C9C1CAD1DA041CD1AD27117F4DBF (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A (float ___f0, float ___p1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___volumeScale1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_OnRectTransformDimensionsChange_m582C9953019AEAD41756B6218D16A132F78F18DD (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::GetLocalCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetLocalCorners_mA93C3DA0EF4915A399E111F23E8B0037FB0D897C (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___fourCornersArray0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
inline void List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *, const RuntimeMethod*))List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB_gshared)(__this, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(!0)
inline void List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588 (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A , const RuntimeMethod*))List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_inline (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  (*) (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *, int32_t, const RuntimeMethod*))List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
inline Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A  List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7 (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A  (*) (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *, const RuntimeMethod*))List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_inline (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method)
{
	return ((  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  (*) (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *, const RuntimeMethod*))Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_m7A43A65F746413AF697EBD1D0A8EA87A0A7ED032 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___v0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
inline bool Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *, const RuntimeMethod*))Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
inline void Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561 (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *, const RuntimeMethod*))Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561_gshared)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *, const RuntimeMethod*))List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC_gshared)(__this, method);
}
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 playerPos = this.player.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if((playerPos - lastPos).y > 0){
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_lastPos_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, playerPos.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_10, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_16, /*hidden argument*/NULL);
		// lastPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		__this->set_lastPos_5(L_18);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 lastPos = new Vector3(0,0,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_lastPos_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// FadeManager FadeManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF04D064E4D574B8D0249948CB28A9415746BF5C);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B4_0 = NULL;
	Type_t * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (instance == null) {
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_0 = ((FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields*)il2cpp_codegen_static_fields_for(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// instance = (FadeManager)FindObjectOfType (typeof(FadeManager));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Object_FindObjectOfType_m07215A5C789FC7C88754B64DFCF1313C55E2F6D2(L_3, /*hidden argument*/NULL);
		((FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields*)il2cpp_codegen_static_fields_for(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var))->set_instance_4(((FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 *)CastclassClass((RuntimeObject*)L_4, FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var)));
		// if (instance == null) {
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_5 = ((FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields*)il2cpp_codegen_static_fields_for(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError (typeof(FadeManager) + "is nothing");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_0044;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0049;
	}

IL_0044:
	{
		NullCheck(G_B4_0);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_10;
	}

IL_0049:
	{
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_0, _stringLiteralFF04D064E4D574B8D0249948CB28A9415746BF5C, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_11, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// return instance;
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_12 = ((FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_StaticFields*)il2cpp_codegen_static_fields_for(FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0_il2cpp_TypeInfo_var))->get_instance_4();
		return L_12;
	}
}
// System.Void FadeManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeManager_Awake_m16D26A3DA9BB3B787D2300FDB70F42C6842FEF25 (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this != Instance) {
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_0;
		L_0 = FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy (this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0019:
	{
		// DontDestroyOnLoad (this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FadeManager::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeManager_OnGUI_m3369F47915E0911552EDF7B322D0A9EF0EC8EF55 (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2358FCC4A730F84BBCCA558CDCDB4E729ABFE595);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral873D70DC405F35FFFB25E6B14EF9F3EBC788ECDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6673728A5001353610B5BA9FDD78FAE5ACB9E21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1644510CFFFF45E85B85EF1C10F90993C67A89);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	int32_t V_1 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (this.isFading) {
		bool L_0 = __this->get_isFading_7();
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// this.fadeColor.a = this.fadeAlpha;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_1 = __this->get_address_of_fadeColor_8();
		float L_2 = __this->get_fadeAlpha_6();
		L_1->set_a_3(L_2);
		// GUI.color = this.fadeColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_fadeColor_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_3, /*hidden argument*/NULL);
		// GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), Texture2D.whiteTexture);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (0.0f), (0.0f), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7;
		L_7 = Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0(/*hidden argument*/NULL);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (this.DebugMode) {
		bool L_8 = __this->get_DebugMode_5();
		if (!L_8)
		{
			goto IL_01a8;
		}
	}
	{
		// if (!this.isFading) {
		bool L_9 = __this->get_isFading_7();
		if (L_9)
		{
			goto IL_01a8;
		}
	}
	{
		// List<string> scenes = new List<string> ();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_10 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_10, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_10;
		// scenes.Add ("SampleScene");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_0;
		NullCheck(L_11);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_11, _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// if (scenes.Count == 0) {
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_12, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_00bf;
		}
	}
	{
		// GUI.Box (new Rect (10, 10, 200, 50), "Fade Manager(Debug Mode)");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_14), (10.0f), (10.0f), (200.0f), (50.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_14, _stringLiteralEE1644510CFFFF45E85B85EF1C10F90993C67A89, /*hidden argument*/NULL);
		// GUI.Label (new Rect (20, 35, 180, 20), "Scene not found.");
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_15), (20.0f), (35.0f), (180.0f), (20.0f), /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_15, _stringLiteral2358FCC4A730F84BBCCA558CDCDB4E729ABFE595, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00bf:
	{
		// GUI.Box (new Rect (10, 10, 300, 50 + scenes.Count * 25), "Fade Manager(Debug Mode)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_16, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_18), (10.0f), (10.0f), (300.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)50), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)((int32_t)25))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_18, _stringLiteralEE1644510CFFFF45E85B85EF1C10F90993C67A89, /*hidden argument*/NULL);
		// GUI.Label (new Rect (20, 30, 280, 20), "Current Scene : " + SceneManager.GetActiveScene ().name);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), (20.0f), (30.0f), (280.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_20;
		L_20 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_20;
		String_t* L_21;
		L_21 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral873D70DC405F35FFFB25E6B14EF9F3EBC788ECDE, L_21, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_19, L_22, /*hidden argument*/NULL);
		// int i = 0;
		V_1 = 0;
		// foreach (string sceneName in scenes) {
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23 = V_0;
		NullCheck(L_23);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_24;
		L_24 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_23, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_3 = L_24;
	}

IL_0128:
	try
	{ // begin try (depth: 1)
		{
			goto IL_018f;
		}

IL_012a:
		{
			// foreach (string sceneName in scenes) {
			String_t* L_25;
			L_25 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_4 = L_25;
			// if (GUI.Button (new Rect (20, 55 + i * 25, 100, 20), "Load Level")) {
			int32_t L_26 = V_1;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_27;
			memset((&L_27), 0, sizeof(L_27));
			Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_27), (20.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)55), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)((int32_t)25))))))), (100.0f), (20.0f), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
			bool L_28;
			L_28 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_27, _stringLiteralA6673728A5001353610B5BA9FDD78FAE5ACB9E21, /*hidden argument*/NULL);
			if (!L_28)
			{
				goto IL_0168;
			}
		}

IL_015b:
		{
			// LoadScene (sceneName, 1.0f);
			String_t* L_29 = V_4;
			FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C(__this, L_29, (1.0f), /*hidden argument*/NULL);
		}

IL_0168:
		{
			// GUI.Label (new Rect (125, 55 + i * 25, 1000, 20), sceneName);
			int32_t L_30 = V_1;
			Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31;
			memset((&L_31), 0, sizeof(L_31));
			Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_31), (125.0f), ((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)55), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)((int32_t)25))))))), (1000.0f), (20.0f), /*hidden argument*/NULL);
			String_t* L_32 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
			GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_31, L_32, /*hidden argument*/NULL);
			// i++;
			int32_t L_33 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_018f:
		{
			// foreach (string sceneName in scenes) {
			bool L_34;
			L_34 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_012a;
			}
		}

IL_0198:
		{
			IL2CPP_LEAVE(0x1A8, FINALLY_019a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019a;
	}

FINALLY_019a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(410)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(410)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A8, IL_01a8)
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void FadeManager::LoadScene(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, String_t* ___scene0, float ___interval1, const RuntimeMethod* method)
{
	{
		// StartCoroutine (TransScene (scene, interval));
		String_t* L_0 = ___scene0;
		float L_1 = ___interval1;
		RuntimeObject* L_2;
		L_2 = FadeManager_TransScene_m0B9411C1EF47A4519C554E3E69948EB9C1F2A2C5(__this, L_0, L_1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeManager::TransScene(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeManager_TransScene_m0B9411C1EF47A4519C554E3E69948EB9C1F2A2C5 (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, String_t* ___scene0, float ___interval1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * L_0 = (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 *)il2cpp_codegen_object_new(U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3_il2cpp_TypeInfo_var);
		U3CTransSceneU3Ed__10__ctor_mF6B239297A0DBD79C3A40FA5D63E5FEB273848F3(L_0, 0, /*hidden argument*/NULL);
		U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * L_2 = L_1;
		String_t* L_3 = ___scene0;
		NullCheck(L_2);
		L_2->set_scene_4(L_3);
		U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * L_4 = L_2;
		float L_5 = ___interval1;
		NullCheck(L_4);
		L_4->set_interval_3(L_5);
		return L_4;
	}
}
// System.Void FadeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeManager__ctor_m52ABCAEC678567697CEEB5286F6EF69EB652D2CA (FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * __this, const RuntimeMethod* method)
{
	{
		// public bool DebugMode = true;
		__this->set_DebugMode_5((bool)1);
		// public Color fadeColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_fadeColor_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FadeSample::FadeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeSample_FadeScene_mB54F893E8697CFEC34DE4ED8D5B4B8A5FD96E5A0 (FadeSample_t0E470A0E8C1B9B74F18CA3545BB399BC4B570DCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6183583C14342FABEAE18DDE6F829848BE9043D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FadeManager.Instance.LoadScene ("Scene1", 2.0f);
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_0;
		L_0 = FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B(/*hidden argument*/NULL);
		NullCheck(L_0);
		FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C(L_0, _stringLiteral6183583C14342FABEAE18DDE6F829848BE9043D1, (2.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FadeSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeSample__ctor_m95FC1B59D71C060AD8997C68F0FFB39D75BA2F66 (FadeSample_t0E470A0E8C1B9B74F18CA3545BB399BC4B570DCF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)60), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// symbolGenerate();
		GameManager_symbolGenerate_m1CFE3615C8F40D3D87AB7BC23839341BC940A8CC(__this, /*hidden argument*/NULL);
		// score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(0);
		// highScore = PlayerPrefs.GetInt("SCORE", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, 0, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_25(L_0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	{
		// if(Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.LeftArrow))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)275), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)276), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		// canvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_canvas_24();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// canvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_canvas_24();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// Vector2 playerPos = player.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_10();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		// if(player2.isPolygon10){
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_9 = __this->get_player2_11();
		NullCheck(L_9);
		bool L_10 = L_9->get_isPolygon10_26();
		G_B6_0 = L_8;
		if (!L_10)
		{
			G_B9_0 = L_8;
			goto IL_0071;
		}
	}
	{
		// if(!isSymbolGenerated){
		bool L_11 = __this->get_isSymbolGenerated_22();
		G_B7_0 = G_B6_0;
		if (L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0068;
		}
	}
	{
		// symbolGenerate();
		GameManager_symbolGenerate_m1CFE3615C8F40D3D87AB7BC23839341BC940A8CC(__this, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0068:
	{
		// isSymbolGenerated = true;
		__this->set_isSymbolGenerated_22((bool)1);
		// }
		G_B10_0 = G_B8_0;
		goto IL_0078;
	}

IL_0071:
	{
		// isSymbolGenerated = false;
		__this->set_isSymbolGenerated_22((bool)0);
		G_B10_0 = G_B9_0;
	}

IL_0078:
	{
		// if(playerPos.y > 20 * countForGenerateHight){
		float L_12 = G_B10_0.get_y_1();
		int32_t L_13 = __this->get_countForGenerateHight_17();
		if ((!(((float)L_12) > ((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)20), (int32_t)L_13))))))))
		{
			goto IL_00b3;
		}
	}
	{
		// isSymbolDeleted = false;
		__this->set_isSymbolDeleted_23((bool)0);
		// if(!isSymbolDeleted){
		bool L_14 = __this->get_isSymbolDeleted_23();
		if (L_14)
		{
			goto IL_00ac;
		}
	}
	{
		// symbolDelete();
		GameManager_symbolDelete_m6DE96AC385251DF80D3AAADAD1DA088C2B45C02B(__this, /*hidden argument*/NULL);
		// countForGenerateHight++;
		int32_t L_15 = __this->get_countForGenerateHight_17();
		__this->set_countForGenerateHight_17(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
	}

IL_00ac:
	{
		// isSymbolDeleted = true;
		__this->set_isSymbolDeleted_23((bool)1);
	}

IL_00b3:
	{
		// scoreText.text = score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = __this->get_scoreText_20();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_score_21()), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_17);
		// }
		return;
	}
}
// System.Void GameManager::symbolDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_symbolDelete_m6DE96AC385251DF80D3AAADAD1DA088C2B45C02B (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// Destroy(appearItems[0]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_appearItems_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// appearItems.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = __this->get_appearItems_9();
		NullCheck(L_2);
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_2, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// for(int i = 0; i < 16; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0025:
	{
		// for(int i = 0; i < 16; i++)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::symbolGenerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_symbolGenerate_m1CFE3615C8F40D3D87AB7BC23839341BC940A8CC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		// Vector2 pos = new Vector2(lineWidthStartPoint,lineHight);
		float L_0 = __this->get_lineWidthStartPoint_13();
		float L_1 = __this->get_lineHight_12();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		// for(int j = 0; j < items.Count; j++)
		V_1 = 0;
		goto IL_03d4;
	}

IL_001a:
	{
		// int randomNum = Random.Range(0, 6);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 6, /*hidden argument*/NULL);
		V_2 = L_2;
		// for (int n = 0; n < randomNum; n++)
		V_5 = 0;
		goto IL_00b1;
	}

IL_002a:
	{
		// if(j == items.Count-1){
		int32_t L_3 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_items_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_4, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))))))
		{
			goto IL_006f;
		}
	}
	{
		// appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = __this->get_items_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_items_5();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_11, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_14, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_009a;
	}

IL_006f:
	{
		// appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_items_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_19, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_18, L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_15, L_22, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_009a:
	{
		// pos.x += symbolDistance;
		float* L_23 = (&V_0)->get_address_of_x_0();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = __this->get_symbolDistance_14();
		*((float*)L_24) = (float)((float)il2cpp_codegen_add((float)L_25, (float)L_26));
		// for (int n = 0; n < randomNum; n++)
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00b1:
	{
		// for (int n = 0; n < randomNum; n++)
		int32_t L_28 = V_5;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_002a;
		}
	}
	{
		// if(j == items.Count-1){
		int32_t L_30 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_31 = __this->get_items_5();
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_31, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1))))))
		{
			goto IL_00f2;
		}
	}
	{
		// appearItems.Add(Instantiate(items[0], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_33 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_34 = __this->get_items_5();
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_34, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_35, L_37, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_33);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_33, L_39, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_011f;
	}

IL_00f2:
	{
		// appearItems.Add(Instantiate(items[symbolListCount+1], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_40 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_41 = __this->get_items_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_42 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_41, ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_44, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46;
		L_46 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_43, L_45, L_46, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_40);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_40, L_47, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_011f:
	{
		// pos.x += symbolDistance;
		float* L_48 = (&V_0)->get_address_of_x_0();
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = __this->get_symbolDistance_14();
		*((float*)L_49) = (float)((float)il2cpp_codegen_add((float)L_50, (float)L_51));
		// for (int i = 0; i < 5 - randomNum; i++)
		V_6 = 0;
		goto IL_01bf;
	}

IL_0138:
	{
		// if(j == items.Count-1){
		int32_t L_52 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_53 = __this->get_items_5();
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_53, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1))))))
		{
			goto IL_017d;
		}
	}
	{
		// appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_55 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_56 = __this->get_items_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_57 = __this->get_items_5();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_57, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_56);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_60, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62;
		L_62 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63;
		L_63 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_59, L_61, L_62, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_55);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_55, L_63, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_01a8;
	}

IL_017d:
	{
		// appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_64 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get_items_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_66 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_65, L_66, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_68, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70;
		L_70 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_67, L_69, L_70, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_64);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_64, L_71, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_01a8:
	{
		// pos.x += symbolDistance;
		float* L_72 = (&V_0)->get_address_of_x_0();
		float* L_73 = L_72;
		float L_74 = *((float*)L_73);
		float L_75 = __this->get_symbolDistance_14();
		*((float*)L_73) = (float)((float)il2cpp_codegen_add((float)L_74, (float)L_75));
		// for (int i = 0; i < 5 - randomNum; i++)
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01bf:
	{
		// for (int i = 0; i < 5 - randomNum; i++)
		int32_t L_77 = V_6;
		int32_t L_78 = V_2;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)5, (int32_t)L_78)))))
		{
			goto IL_0138;
		}
	}
	{
		// Vector2 posWallObstacleLeft = new Vector2(WallObstacleLeftX, (lineDistance/2) + lineHight);
		float L_79 = __this->get_WallObstacleLeftX_27();
		float L_80 = __this->get_lineDistance_15();
		float L_81 = __this->get_lineHight_12();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), L_79, ((float)il2cpp_codegen_add((float)((float)((float)L_80/(float)(2.0f))), (float)L_81)), /*hidden argument*/NULL);
		// Vector2 posWallObstacleRight = new Vector2(WallObstacleRightX, (lineDistance/2) + lineHight);
		float L_82 = __this->get_WallObstacleRightX_28();
		float L_83 = __this->get_lineDistance_15();
		float L_84 = __this->get_lineHight_12();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), L_82, ((float)il2cpp_codegen_add((float)((float)((float)L_83/(float)(2.0f))), (float)L_84)), /*hidden argument*/NULL);
		// appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleLeft, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_85 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_86 = __this->get_items_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_87 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_86);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88;
		L_88 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_86, L_87, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_89 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_89, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_91;
		L_91 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92;
		L_92 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_88, L_90, L_91, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_85);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_85, L_92, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleRight, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_93 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_94 = __this->get_items_5();
		int32_t L_95 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_94);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96;
		L_96 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_94, L_95, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_97, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_99;
		L_99 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_96, L_98, L_99, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_93);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_93, L_100, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// if(j > 3){
		int32_t L_101 = V_1;
		if ((((int32_t)L_101) <= ((int32_t)3)))
		{
			goto IL_0337;
		}
	}
	{
		// float obstacleX = Random.Range(-2.0f, -0.5f);
		float L_102;
		L_102 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.0f), (-0.5f), /*hidden argument*/NULL);
		V_7 = L_102;
		// float obstacleY = Random.Range(lineHight+1.5f, lineHight+3.5f);
		float L_103 = __this->get_lineHight_12();
		float L_104 = __this->get_lineHight_12();
		float L_105;
		L_105 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)L_103, (float)(1.5f))), ((float)il2cpp_codegen_add((float)L_104, (float)(3.5f))), /*hidden argument*/NULL);
		V_8 = L_105;
		// Vector2 posObstacle = new Vector2(obstacleX,obstacleY);
		float L_106 = V_7;
		float L_107 = V_8;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_9), L_106, L_107, /*hidden argument*/NULL);
		// appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_108 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_109 = __this->get_obstacles_6();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_110 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_109);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111;
		L_111 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_109, L_110, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_112 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
		L_113 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_112, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_114;
		L_114 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115;
		L_115 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_111, L_113, L_114, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_108);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_108, L_115, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// float obstacleX2 = Random.Range(0.5f, 2.0f);
		float L_116;
		L_116 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.5f), (2.0f), /*hidden argument*/NULL);
		V_10 = L_116;
		// float obstacleY2 = Random.Range(lineHight+1.5f, lineHight+3.5f);
		float L_117 = __this->get_lineHight_12();
		float L_118 = __this->get_lineHight_12();
		float L_119;
		L_119 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)L_117, (float)(1.5f))), ((float)il2cpp_codegen_add((float)L_118, (float)(3.5f))), /*hidden argument*/NULL);
		V_11 = L_119;
		// Vector2 posObstacle2 = new Vector2(obstacleX2,obstacleY2);
		float L_120 = V_10;
		float L_121 = V_11;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_12), L_120, L_121, /*hidden argument*/NULL);
		// appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle2, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_122 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_123 = __this->get_obstacles_6();
		int32_t L_124 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_123);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125;
		L_125 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_123, L_124, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_126 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_126, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_128;
		L_128 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129;
		L_129 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_125, L_127, L_128, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_122);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_122, L_129, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_039e;
	}

IL_0337:
	{
		// float obstacleX = Random.Range(-2f, 2f);
		float L_130;
		L_130 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-2.0f), (2.0f), /*hidden argument*/NULL);
		V_13 = L_130;
		// float obstacleY = Random.Range(lineHight+1.5f, lineHight+2.0f);
		float L_131 = __this->get_lineHight_12();
		float L_132 = __this->get_lineHight_12();
		float L_133;
		L_133 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_add((float)L_131, (float)(1.5f))), ((float)il2cpp_codegen_add((float)L_132, (float)(2.0f))), /*hidden argument*/NULL);
		V_14 = L_133;
		// Vector2 posObstacle = new Vector2(obstacleX,obstacleY);
		float L_134 = V_13;
		float L_135 = V_14;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_15), L_134, L_135, /*hidden argument*/NULL);
		// appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle, Quaternion.identity));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_136 = __this->get_appearItems_9();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_137 = __this->get_obstacles_6();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_138 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		NullCheck(L_137);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139;
		L_139 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_137, L_138, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_140 = V_15;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141;
		L_141 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_140, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_142;
		L_142 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143;
		L_143 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_139, L_141, L_142, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_136);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_136, L_143, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_039e:
	{
		// lineHight += lineDistance;
		float L_144 = __this->get_lineHight_12();
		float L_145 = __this->get_lineDistance_15();
		__this->set_lineHight_12(((float)il2cpp_codegen_add((float)L_144, (float)L_145)));
		// pos = new Vector2(lineWidthStartPoint,lineHight);
		float L_146 = __this->get_lineWidthStartPoint_13();
		float L_147 = __this->get_lineHight_12();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_146, L_147, /*hidden argument*/NULL);
		// symbolListCount++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_148 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_symbolListCount_8();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_symbolListCount_8(((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1)));
		// for(int j = 0; j < items.Count; j++)
		int32_t L_149 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)1));
	}

IL_03d4:
	{
		// for(int j = 0; j < items.Count; j++)
		int32_t L_150 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_151 = __this->get_items_5();
		NullCheck(L_151);
		int32_t L_152;
		L_152 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_151, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_150) < ((int32_t)L_152)))
		{
			goto IL_001a;
		}
	}
	{
		// symbolListCount=0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_symbolListCount_8(0);
		// }
		return;
	}
}
// System.Void GameManager::HighScoreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HighScoreUpdate_m069CA064241E5CAC097664DCF22381301FD13F5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(score > highScore){
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		int32_t L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_25();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}
	{
		// highScore = score;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_highScore_25(L_2);
		// PlayerPrefs.SetInt("SCORE", highScore);
		int32_t L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_highScore_25();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// isHighScored = true;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_isHighScored_26((bool)1);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> items = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_items_5(L_0);
		// public List<GameObject> obstacles = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_obstacles_6(L_1);
		// List<Vector2> symbolPosition = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_2 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_2, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		__this->set_symbolPosition_7(L_2);
		// public List<GameObject> appearItems = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_3, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_appearItems_9(L_3);
		// int countForGenerateHight = 1;
		__this->set_countForGenerateHight_17(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
	{
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
// System.Void GameOverManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Start_mCF340FAB95187564C54942AD01D2A65BD005CEDD (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral399FECC591EFFB36B0216B27C9FEDDE291F7F9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1486312D3368D21B40565753BED1BA83624D4D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text =  "<size=90>" + "CHANGE " + "</size>" + GameManager.score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_score_21()), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB1486312D3368D21B40565753BED1BA83624D4D6, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// highScoreText.text = "<size=70>" + "BEST " + "</size>" + GameManager.highScore;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_highScoreText_5();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_address_of_highScore_25()), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral399FECC591EFFB36B0216B27C9FEDDE291F7F9DF, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if(GameManager.isHighScored){
		bool L_6 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_isHighScored_26();
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// newRecordText.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_newRecordText_6();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if(Player.symbolLevel==1)symbols[0].SetActive(true);
		int32_t L_9 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		// if(Player.symbolLevel==1)symbols[0].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_symbols_7();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_10, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_0075:
	{
		// else if(Player.symbolLevel==2)symbols[1].SetActive(true);
		int32_t L_12 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0094;
		}
	}
	{
		// else if(Player.symbolLevel==2)symbols[1].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = __this->get_symbols_7();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_13, 1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_0094:
	{
		// else if(Player.symbolLevel==3)symbols[2].SetActive(true);
		int32_t L_15 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00b3;
		}
	}
	{
		// else if(Player.symbolLevel==3)symbols[2].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_symbols_7();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_16, 2, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_00b3:
	{
		// else if(Player.symbolLevel==4)symbols[3].SetActive(true);
		int32_t L_18 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_00cf;
		}
	}
	{
		// else if(Player.symbolLevel==4)symbols[3].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_symbols_7();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_19, 3, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_00cf:
	{
		// else if(Player.symbolLevel==5)symbols[4].SetActive(true);
		int32_t L_21 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_21) == ((uint32_t)5))))
		{
			goto IL_00eb;
		}
	}
	{
		// else if(Player.symbolLevel==5)symbols[4].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_22 = __this->get_symbols_7();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_22, 4, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_00eb:
	{
		// else if(Player.symbolLevel==6)symbols[5].SetActive(true);
		int32_t L_24 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_24) == ((uint32_t)6))))
		{
			goto IL_0107;
		}
	}
	{
		// else if(Player.symbolLevel==6)symbols[5].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = __this->get_symbols_7();
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_25, 5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_0107:
	{
		// else if(Player.symbolLevel==7)symbols[6].SetActive(true);
		int32_t L_27 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_0123;
		}
	}
	{
		// else if(Player.symbolLevel==7)symbols[6].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_28 = __this->get_symbols_7();
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_28, 6, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_29);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
		goto IL_013d;
	}

IL_0123:
	{
		// else if(Player.symbolLevel==8)symbols[7].SetActive(true);
		int32_t L_30 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_30) == ((uint32_t)8))))
		{
			goto IL_013d;
		}
	}
	{
		// else if(Player.symbolLevel==8)symbols[7].SetActive(true);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_31 = __this->get_symbols_7();
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_31, 7, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_32);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)1, /*hidden argument*/NULL);
	}

IL_013d:
	{
		// GameManager.isHighScored = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_isHighScored_26((bool)0);
		// }
		return;
	}
}
// System.Void GameOverManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Update_mCC4D30DD698BBDEAEE7EC313A9446B5457C356EF (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOverManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager__ctor_m52207DE1B4AFE3EB17B968DC034DF9CD126BE15B (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> symbols = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_symbols_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InterfaceAdjustment::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAdjustment_Awake_mBD751C06ECF3D132EB1511CE57EFA0FFB3B95AAE (InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral178D4AAF37D2B61F061802B131C1092F6CB952CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21D137513445DD6E887DB086329049111A62B31);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// RectTransform _trans = this.transform.gameObject.GetComponent<RectTransform>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_1, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		V_0 = L_2;
		// Vector3 _pos = this.transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// float _work_w = 1.0f;
		V_2 = (1.0f);
		// float _work_h = 1.0f;
		V_3 = (1.0f);
		// if (Size.x != 0 && Size.y != 0)
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_5 = __this->get_address_of_Size_4();
		int32_t L_6;
		L_6 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_7 = __this->get_address_of_Size_4();
		int32_t L_8;
		L_8 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// _work_w = (float)Screen.width / Size.x;
		int32_t L_9;
		L_9 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_10 = __this->get_address_of_Size_4();
		int32_t L_11;
		L_11 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_10, /*hidden argument*/NULL);
		V_2 = ((float)((float)((float)((float)L_9))/(float)((float)((float)L_11))));
		// _work_h = (float)Screen.height / Size.y;
		int32_t L_12;
		L_12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * L_13 = __this->get_address_of_Size_4();
		int32_t L_14;
		L_14 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)L_13, /*hidden argument*/NULL);
		V_3 = ((float)((float)((float)((float)L_12))/(float)((float)((float)L_14))));
		// }
		goto IL_0077;
	}

IL_006d:
	{
		// Debug.LogError("スクリーンサイズに　0　が設定されています");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral178D4AAF37D2B61F061802B131C1092F6CB952CD, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// _pos.x *= _work_w;
		float* L_15 = (&V_1)->get_address_of_x_2();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = V_2;
		*((float*)L_16) = (float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_18));
		// _pos.y *= _work_h;
		float* L_19 = (&V_1)->get_address_of_y_3();
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22 = V_3;
		*((float*)L_20) = (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22));
		// if(AdjType == ADJUSTMENT_RULES.normal && _trans == null)
		int32_t L_23 = __this->get_AdjType_5();
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00b2;
		}
	}
	{
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00b2;
		}
	}
	{
		// Debug.Log("normal設定を行うオブジェクトはRectTransformが必要です");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB21D137513445DD6E887DB086329049111A62B31, /*hidden argument*/NULL);
		// AdjType = ADJUSTMENT_RULES.box;
		__this->set_AdjType_5(0);
	}

IL_00b2:
	{
		// if(AdjType == ADJUSTMENT_RULES.normal)
		int32_t L_26 = __this->get_AdjType_5();
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00e2;
		}
	}
	{
		// _trans.sizeDelta = new Vector2(
		//         _trans.sizeDelta.x * _work_w,
		//         _trans.sizeDelta.y * _work_h);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = V_0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_28 = V_0;
		NullCheck(L_28);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_0();
		float L_31 = V_2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_32 = V_0;
		NullCheck(L_32);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_1();
		float L_35 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_36), ((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)), ((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), /*hidden argument*/NULL);
		NullCheck(L_27);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_27, L_36, /*hidden argument*/NULL);
		// }
		goto IL_010d;
	}

IL_00e2:
	{
		// float _adj = 0;
		V_4 = (0.0f);
		// if (_work_w < _work_h)
		float L_37 = V_2;
		float L_38 = V_3;
		if ((!(((float)L_37) < ((float)L_38))))
		{
			goto IL_00f2;
		}
	}
	{
		// _adj = _work_w;
		float L_39 = V_2;
		V_4 = L_39;
		// }
		goto IL_00f5;
	}

IL_00f2:
	{
		// _adj = _work_h;
		float L_40 = V_3;
		V_4 = L_40;
	}

IL_00f5:
	{
		// this.transform.localScale *= _adj;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = L_41;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_42, /*hidden argument*/NULL);
		float L_44 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_42, L_45, /*hidden argument*/NULL);
	}

IL_010d:
	{
		// this.transform.localPosition = _pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_1;
		NullCheck(L_46);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_46, L_47, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InterfaceAdjustment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceAdjustment__ctor_mD7CCBC23A88142B9657873DF5E409347410FD9E2 (InterfaceAdjustment_tE5917B7DEBDE7CB8EB6357C966B0114C8870FC89 * __this, const RuntimeMethod* method)
{
	{
		// private Vector2Int Size = new Vector2Int(1080, 1920);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_0), ((int32_t)1080), ((int32_t)1920), /*hidden argument*/NULL);
		__this->set_Size_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_m783F84A617DADC4574B0BF1524481E6B96C65661 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1323C8A084A0A5103CC20C76F0096F053EC54890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8452CCD222466A7AF0A1432DDC1B752A4C6FF584);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B3913D9874C1F015B997E6C2ED7DA18BF28F462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA25434E2C35560706A7C1C2DF70C74125E0240);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = 1; i <101; i++)
		V_0 = 1;
		goto IL_0067;
	}

IL_0004:
	{
		// if(i==100){
		int32_t L_0 = V_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0015;
		}
	}
	{
		// Debug.Log("Buzz");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1323C8A084A0A5103CC20C76F0096F053EC54890, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_0015:
	{
		// else if(i%3==0 && i%5==0){
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1%(int32_t)3)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2%(int32_t)5)))
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("FizzBuzz" + ",");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9B3913D9874C1F015B997E6C2ED7DA18BF28F462, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_002b:
	{
		// else if(i%3==0){
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3%(int32_t)3)))
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("Fizz" + ",");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8452CCD222466A7AF0A1432DDC1B752A4C6FF584, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_003c:
	{
		// else if(i%5==0){
		int32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_4%(int32_t)5)))
		{
			goto IL_004d;
		}
	}
	{
		// Debug.Log("Buzz" + ",");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFEA25434E2C35560706A7C1C2DF70C74125E0240, /*hidden argument*/NULL);
		// }
		goto IL_0063;
	}

IL_004d:
	{
		// Debug.Log(i + ",");
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// for(int i = 1; i <101; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0067:
	{
		// for(int i = 1; i <101; i++)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)101))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m411C4D5C2D993FD70092FDA0FE2AC4786F8AC001 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_m437970EA37D66BDF32972F4CC0F65B95E5961FAA (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObstacleMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMove_Start_mE77C89D9B2FE4AF554FF4F30FA779DC3E2482636 (ObstacleMove_tCA8BCDF4E1470FF52591F02A0E20D6091EB614DC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ObstacleMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMove_Update_mE4B79D78456499B3A27CA980B09D995F557C0EF5 (ObstacleMove_tCA8BCDF4E1470FF52591F02A0E20D6091EB614DC * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(new Vector3(0,0,120) * Time.deltaTime, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (120.0f), /*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_0, L_3, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObstacleMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleMove__ctor_m9ABAFED61C7CF65CA4BDE79F6B7606B1B0E38309 (ObstacleMove_tCA8BCDF4E1470FF52591F02A0E20D6091EB614DC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ParticleFinish::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleFinish_Update_m861D4DA934F38FC88F341F52787415B182D8686D (ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA007CD5A498E09DF06DBEBC4A38046DFC212AB75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Player.isGameOver)
		bool L_0 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_isGameOver_33();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// StartCoroutine("WaitParticle");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralA007CD5A498E09DF06DBEBC4A38046DFC212AB75, /*hidden argument*/NULL);
		// GameManager.HighScoreUpdate();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_HighScoreUpdate_m069CA064241E5CAC097664DCF22381301FD13F5D(/*hidden argument*/NULL);
	}

IL_0018:
	{
		// Player.isGameOver = false;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_isGameOver_33((bool)0);
		// }
		return;
	}
}
// System.Collections.IEnumerator ParticleFinish::WaitParticle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParticleFinish_WaitParticle_m57AA2B99BA08EDE5CBBCEE2F958A757E1599D663 (ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * L_0 = (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 *)il2cpp_codegen_object_new(U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3_il2cpp_TypeInfo_var);
		U3CWaitParticleU3Ed__3__ctor_mB25F8594E0CDC5E53CB08AB7BA0A146BEEAE1570(L_0, 0, /*hidden argument*/NULL);
		U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ParticleFinish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleFinish__ctor_m723E50D1E4F3671ED85833E75FDF08C039DB0DEA (ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * __this, const RuntimeMethod* method)
{
	{
		// private float fadeTime = 0.5f;
		__this->set_fadeTime_4((0.5f));
		// private float particleTime = 0.6f;
		__this->set_particleTime_5((0.600000024f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		// currentSymbol = gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_currentSymbol_8(L_2);
		// rb.isKinematic = true;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_5();
		NullCheck(L_3);
		Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB(L_3, (bool)1, /*hidden argument*/NULL);
		// symbolLevel = 1;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(1);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// leftRightTap();
		Player_leftRightTap_m65E7B83DE5BFA7DF6CDF1C4C4322C99FD0E3A8BD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::leftRightTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_leftRightTap_m65E7B83DE5BFA7DF6CDF1C4C4322C99FD0E3A8BD (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKeyDown(KeyCode.RightArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// rb.velocity = right * JumpPower;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get_right_6();
		float L_3 = __this->get_JumpPower_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_4, /*hidden argument*/NULL);
		// rb.isKinematic = false;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rb_5();
		NullCheck(L_5);
		Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB(L_5, (bool)0, /*hidden argument*/NULL);
		// sm.JumpSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_6 = __this->get_sm_27();
		NullCheck(L_6);
		SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249(L_6, /*hidden argument*/NULL);
		// transform.Rotate(0,0,rotationSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_8 = __this->get_rotationSpeed_30();
		NullCheck(L_7);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_7, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if(Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_9;
		L_9 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00b5;
		}
	}
	{
		// rb.velocity = left * JumpPower;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = __this->get_left_7();
		float L_12 = __this->get_JumpPower_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_10, L_13, /*hidden argument*/NULL);
		// rb.isKinematic = false;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_rb_5();
		NullCheck(L_14);
		Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB(L_14, (bool)0, /*hidden argument*/NULL);
		// sm.JumpSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_15 = __this->get_sm_27();
		NullCheck(L_15);
		SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249(L_15, /*hidden argument*/NULL);
		// transform.Rotate(0,0,-rotationSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_17 = __this->get_rotationSpeed_30();
		NullCheck(L_16);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_16, (0.0f), (0.0f), ((-L_17)), /*hidden argument*/NULL);
	}

IL_00b5:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_18;
		L_18 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0185;
		}
	}
	{
		// if (Input.mousePosition.x > Screen.width / 2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		int32_t L_21;
		L_21 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((float)L_20) > ((float)((float)((float)((int32_t)((int32_t)L_21/(int32_t)2))))))))
		{
			goto IL_0122;
		}
	}
	{
		// rb.velocity = right * JumpPower;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = __this->get_right_6();
		float L_24 = __this->get_JumpPower_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_22, L_25, /*hidden argument*/NULL);
		// rb.isKinematic = false;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_26 = __this->get_rb_5();
		NullCheck(L_26);
		Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB(L_26, (bool)0, /*hidden argument*/NULL);
		// sm.JumpSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_27 = __this->get_sm_27();
		NullCheck(L_27);
		SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249(L_27, /*hidden argument*/NULL);
		// transform.Rotate(0,0,rotationSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_29 = __this->get_rotationSpeed_30();
		NullCheck(L_28);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_28, (0.0f), (0.0f), L_29, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// if (Input.mousePosition.x < Screen.width / 2)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		int32_t L_32;
		L_32 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		if ((!(((float)L_31) < ((float)((float)((float)((int32_t)((int32_t)L_32/(int32_t)2))))))))
		{
			goto IL_0185;
		}
	}
	{
		// rb.velocity = left * JumpPower;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33 = __this->get_rb_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34 = __this->get_left_7();
		float L_35 = __this->get_JumpPower_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_33, L_36, /*hidden argument*/NULL);
		// rb.isKinematic = false;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_37 = __this->get_rb_5();
		NullCheck(L_37);
		Rigidbody2D_set_isKinematic_m82FBA7C4F4EB2569AC77D4767061F9CE0F8C3FEB(L_37, (bool)0, /*hidden argument*/NULL);
		// sm.JumpSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_38 = __this->get_sm_27();
		NullCheck(L_38);
		SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249(L_38, /*hidden argument*/NULL);
		// transform.Rotate(0,0,-rotationSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_40 = __this->get_rotationSpeed_30();
		NullCheck(L_39);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_39, (0.0f), (0.0f), ((-L_40)), /*hidden argument*/NULL);
	}

IL_0185:
	{
		// }
		return;
	}
}
// System.Void Player::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnBecameInvisible_m1EB6DF4C741BF8A306EA3C0C76C9CC5EC3CD4CAA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var pos = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for(int i = 0; i < particleList.Count; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0015:
	{
		// particleList[i].transform.position = pos;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_3 = __this->get_particleList_31();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5;
		L_5 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// for(int i = 0; i < particleList.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0030:
	{
		// for(int i = 0; i < particleList.Count; i++)
		int32_t L_9 = V_1;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_10 = __this->get_particleList_31();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_10, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}
	{
		// particleList[0].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_12 = __this->get_particleList_31();
		NullCheck(L_12);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13;
		L_13 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_12, 0, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_13);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_13, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::ColorChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(ColorUtility.TryParseHtmlString(colorCode, out Color color))
		String_t* L_0 = __this->get_colorCode_29();
		bool L_1;
		L_1 = ColorUtility_TryParseHtmlString_m69BEFAF655920930399471B79CF668FC3BAD4069(L_0, (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// _camera.backgroundColor = color;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get__camera_28();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = V_0;
		NullCheck(L_2);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void Player::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_0 = __this->get_sm_27();
		NullCheck(L_0);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_0, /*hidden argument*/NULL);
		// isGameOver = true;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_isGameOver_33((bool)1);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A07FF732616CB393F6A5E3C8911D7F5F15F971F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3373165B8216C440BC3CC3438AF7F799A5AD63BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AA298613FDBFC931A30DFB7667FEE840901F396);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6354A3B9B591DEF517FD3C2679016D96D6015135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D24090833D0F2767E49072F66203DC9464A384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656927E66326D6DEBB8BB4931597EF9C6B306FED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral669A015EB2DFC9B49D447A9D07CEFCA56CB0B290);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral676AD289BECC2CB21E0C1B271399E7336D9D6152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77512901E1D4B3450AFDEBC2654973C0BEDEA374);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral796CB4FA9EE3DF7EE151D3F25A284BA5705FFEDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52A5A35DDF98B3AED4C57357F2857AFFC39CC3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC110E56A29D7AC53B843D9A41CB69C5830CFB10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF34F63CF9CC98A63C7E915CDE1577571FF9A09B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1F8262520CEB48B8D4636F410BA4B6FDDF518C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD42DA6E5C5DD8E39F758549EF65322DC4F3845D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var pos = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for(int i = 0; i < particleList.Count; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_0015:
	{
		// particleList[i].transform.position = pos;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_3 = __this->get_particleList_31();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5;
		L_5 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// for(int i = 0; i < particleList.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0030:
	{
		// for(int i = 0; i < particleList.Count; i++)
		int32_t L_9 = V_1;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_10 = __this->get_particleList_31();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_10, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}
	{
		// if(isTriangle){
		bool L_12 = __this->get_isTriangle_18();
		if (!L_12)
		{
			goto IL_00d9;
		}
	}
	{
		// if(other.gameObject.tag == "Square"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___other0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteral64D24090833D0F2767E49072F66203DC9464A384, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_17 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// currentSymbol.sprite = squareSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_18 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = __this->get_squareSprite_9();
		NullCheck(L_18);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_18, L_19, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = ___other0;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
		// isTriangle = false;
		__this->set_isTriangle_18((bool)0);
		// squared = true;
		__this->set_squared_19((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_22 = __this->get_sm_27();
		NullCheck(L_22);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_22, /*hidden argument*/NULL);
		// if(symbolLevel==1){
		int32_t L_23 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		// symbolLevel = 2;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(2);
	}

IL_00af:
	{
		// colorCode = "#ffd6d6";
		__this->set_colorCode_29(_stringLiteralBC110E56A29D7AC53B843D9A41CB69C5830CFB10);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c1:
	{
		// particleList[0].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_24 = __this->get_particleList_31();
		NullCheck(L_24);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_25;
		L_25 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_24, 0, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_25);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_25, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d9:
	{
		// else if(circled){
		bool L_26 = __this->get_circled_20();
		if (!L_26)
		{
			goto IL_017d;
		}
	}
	{
		// if(other.gameObject.tag == "Triangle"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_27 = ___other0;
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_28, /*hidden argument*/NULL);
		bool L_30;
		L_30 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_29, _stringLiteralB9DAD303C7A46DA1C0BFCAD200370C73E61542DD, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_014e;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_31 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// currentSymbol.sprite = triangleSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_32 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_33 = __this->get_triangleSprite_10();
		NullCheck(L_32);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_32, L_33, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_34 = ___other0;
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		// circled = false;
		__this->set_circled_20((bool)0);
		// isTriangle = true;
		__this->set_isTriangle_18((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_36 = __this->get_sm_27();
		NullCheck(L_36);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_36, /*hidden argument*/NULL);
		// colorCode = "#ffffff";
		__this->set_colorCode_29(_stringLiteral77512901E1D4B3450AFDEBC2654973C0BEDEA374);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_014e:
	{
		// particleList[particleList.Count-1].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_37 = __this->get_particleList_31();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_38 = __this->get_particleList_31();
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_38, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		NullCheck(L_37);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_40;
		L_40 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_40);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_40, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_41 = __this->get_sm_27();
		NullCheck(L_41);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_41, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_017d:
	{
		// else if(squared){
		bool L_42 = __this->get_squared_19();
		if (!L_42)
		{
			goto IL_0223;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon5"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_43 = ___other0;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_44, /*hidden argument*/NULL);
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteral676AD289BECC2CB21E0C1B271399E7336D9D6152, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0200;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_47 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		// currentSymbol.sprite = polygon5Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_48 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_49 = __this->get_polygon5Sprite_12();
		NullCheck(L_48);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_48, L_49, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_50 = ___other0;
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_51, /*hidden argument*/NULL);
		// squared = false;
		__this->set_squared_19((bool)0);
		// isPolygon5 = true;
		__this->set_isPolygon5_21((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_52 = __this->get_sm_27();
		NullCheck(L_52);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_52, /*hidden argument*/NULL);
		// if(symbolLevel==2){
		int32_t L_53 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_01ee;
		}
	}
	{
		// symbolLevel = 3;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(3);
	}

IL_01ee:
	{
		// colorCode = "#ffffd6";
		__this->set_colorCode_29(_stringLiteralB52A5A35DDF98B3AED4C57357F2857AFFC39CC3B);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0200:
	{
		// particleList[2].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_54 = __this->get_particleList_31();
		NullCheck(L_54);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_55;
		L_55 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_54, 2, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_55);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_55, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_56 = __this->get_sm_27();
		NullCheck(L_56);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_56, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0223:
	{
		// else if(isPolygon5){
		bool L_57 = __this->get_isPolygon5_21();
		if (!L_57)
		{
			goto IL_02c9;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon6"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_58 = ___other0;
		NullCheck(L_58);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		String_t* L_60;
		L_60 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_59, /*hidden argument*/NULL);
		bool L_61;
		L_61 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_60, _stringLiteral0A07FF732616CB393F6A5E3C8911D7F5F15F971F, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_02a6;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_62 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1)));
		// currentSymbol.sprite = polygon6Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_63 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_64 = __this->get_polygon6Sprite_13();
		NullCheck(L_63);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_63, L_64, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_65 = ___other0;
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_66, /*hidden argument*/NULL);
		// isPolygon5 = false;
		__this->set_isPolygon5_21((bool)0);
		// isPolygon6 = true;
		__this->set_isPolygon6_22((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_67 = __this->get_sm_27();
		NullCheck(L_67);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_67, /*hidden argument*/NULL);
		// if(symbolLevel==3){
		int32_t L_68 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_68) == ((uint32_t)3))))
		{
			goto IL_0294;
		}
	}
	{
		// symbolLevel = 4;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(4);
	}

IL_0294:
	{
		// colorCode = "#eaffd6";
		__this->set_colorCode_29(_stringLiteral669A015EB2DFC9B49D447A9D07CEFCA56CB0B290);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_02a6:
	{
		// particleList[3].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_69 = __this->get_particleList_31();
		NullCheck(L_69);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_70;
		L_70 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_69, 3, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_70);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_70, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_71 = __this->get_sm_27();
		NullCheck(L_71);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_71, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_02c9:
	{
		// else if(isPolygon6){
		bool L_72 = __this->get_isPolygon6_22();
		if (!L_72)
		{
			goto IL_036f;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon7"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_73 = ___other0;
		NullCheck(L_73);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_75;
		L_75 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_74, /*hidden argument*/NULL);
		bool L_76;
		L_76 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_75, _stringLiteral656927E66326D6DEBB8BB4931597EF9C6B306FED, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_034c;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_77 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)));
		// currentSymbol.sprite = polygon7Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_78 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_79 = __this->get_polygon7Sprite_14();
		NullCheck(L_78);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_78, L_79, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_80 = ___other0;
		NullCheck(L_80);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81;
		L_81 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_81, /*hidden argument*/NULL);
		// isPolygon6 = false;
		__this->set_isPolygon6_22((bool)0);
		// isPolygon7 = true;
		__this->set_isPolygon7_23((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_82 = __this->get_sm_27();
		NullCheck(L_82);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_82, /*hidden argument*/NULL);
		// if(symbolLevel==4){
		int32_t L_83 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_83) == ((uint32_t)4))))
		{
			goto IL_033a;
		}
	}
	{
		// symbolLevel = 5;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(5);
	}

IL_033a:
	{
		// colorCode = "#d6ffff";
		__this->set_colorCode_29(_stringLiteral5AA298613FDBFC931A30DFB7667FEE840901F396);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_034c:
	{
		// particleList[4].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_84 = __this->get_particleList_31();
		NullCheck(L_84);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_85;
		L_85 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_84, 4, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_85);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_85, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_86 = __this->get_sm_27();
		NullCheck(L_86);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_86, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_036f:
	{
		// else if(isPolygon7){
		bool L_87 = __this->get_isPolygon7_23();
		if (!L_87)
		{
			goto IL_0415;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon8"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_88 = ___other0;
		NullCheck(L_88);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89;
		L_89 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		String_t* L_90;
		L_90 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_89, /*hidden argument*/NULL);
		bool L_91;
		L_91 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_90, _stringLiteralFD42DA6E5C5DD8E39F758549EF65322DC4F3845D, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_03f2;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_92 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)));
		// currentSymbol.sprite = polygon8Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_93 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_94 = __this->get_polygon8Sprite_15();
		NullCheck(L_93);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_93, L_94, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_95 = ___other0;
		NullCheck(L_95);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_96;
		L_96 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_95, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_96, /*hidden argument*/NULL);
		// isPolygon7 = false;
		__this->set_isPolygon7_23((bool)0);
		// isPolygon8 = true;
		__this->set_isPolygon8_24((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_97 = __this->get_sm_27();
		NullCheck(L_97);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_97, /*hidden argument*/NULL);
		// if(symbolLevel==5){
		int32_t L_98 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_98) == ((uint32_t)5))))
		{
			goto IL_03e0;
		}
	}
	{
		// symbolLevel = 6;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(6);
	}

IL_03e0:
	{
		// colorCode = "#d6d6ff";
		__this->set_colorCode_29(_stringLiteral6354A3B9B591DEF517FD3C2679016D96D6015135);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_03f2:
	{
		// particleList[5].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_99 = __this->get_particleList_31();
		NullCheck(L_99);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_100;
		L_100 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_99, 5, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_100);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_100, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_101 = __this->get_sm_27();
		NullCheck(L_101);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_101, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0415:
	{
		// else if(isPolygon8){
		bool L_102 = __this->get_isPolygon8_24();
		if (!L_102)
		{
			goto IL_04bb;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon9"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_103 = ___other0;
		NullCheck(L_103);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104;
		L_104 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		String_t* L_105;
		L_105 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_104, /*hidden argument*/NULL);
		bool L_106;
		L_106 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_105, _stringLiteral3373165B8216C440BC3CC3438AF7F799A5AD63BC, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_0498;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_107 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1)));
		// currentSymbol.sprite = polygon9Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_108 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_109 = __this->get_polygon9Sprite_16();
		NullCheck(L_108);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_108, L_109, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_110 = ___other0;
		NullCheck(L_110);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111;
		L_111 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_110, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_111, /*hidden argument*/NULL);
		// isPolygon8 = false;
		__this->set_isPolygon8_24((bool)0);
		// isPolygon9 = true;
		__this->set_isPolygon9_25((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_112 = __this->get_sm_27();
		NullCheck(L_112);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_112, /*hidden argument*/NULL);
		// if(symbolLevel==6){
		int32_t L_113 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_113) == ((uint32_t)6))))
		{
			goto IL_0486;
		}
	}
	{
		// symbolLevel = 7;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(7);
	}

IL_0486:
	{
		// colorCode = "#d6eaff";
		__this->set_colorCode_29(_stringLiteral796CB4FA9EE3DF7EE151D3F25A284BA5705FFEDE);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0498:
	{
		// particleList[6].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_114 = __this->get_particleList_31();
		NullCheck(L_114);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_115;
		L_115 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_114, 6, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_115);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_115, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_116 = __this->get_sm_27();
		NullCheck(L_116);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_116, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_04bb:
	{
		// else if(isPolygon9){
		bool L_117 = __this->get_isPolygon9_25();
		if (!L_117)
		{
			goto IL_0561;
		}
	}
	{
		// if(other.gameObject.tag == "Polygon10"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_118 = ___other0;
		NullCheck(L_118);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_119;
		L_119 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_118, /*hidden argument*/NULL);
		NullCheck(L_119);
		String_t* L_120;
		L_120 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_119, /*hidden argument*/NULL);
		bool L_121;
		L_121 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_120, _stringLiteralE1F8262520CEB48B8D4636F410BA4B6FDDF518C2, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_053e;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_122 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)));
		// currentSymbol.sprite = polygon10Sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_123 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_124 = __this->get_polygon10Sprite_17();
		NullCheck(L_123);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_123, L_124, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_125 = ___other0;
		NullCheck(L_125);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126;
		L_126 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_125, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_126, /*hidden argument*/NULL);
		// isPolygon9 = false;
		__this->set_isPolygon9_25((bool)0);
		// isPolygon10 = true;
		__this->set_isPolygon10_26((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_127 = __this->get_sm_27();
		NullCheck(L_127);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_127, /*hidden argument*/NULL);
		// if(symbolLevel==7){
		int32_t L_128 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_symbolLevel_32();
		if ((!(((uint32_t)L_128) == ((uint32_t)7))))
		{
			goto IL_052c;
		}
	}
	{
		// symbolLevel = 8;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_symbolLevel_32(8);
	}

IL_052c:
	{
		// colorCode = "#ead6ff";
		__this->set_colorCode_29(_stringLiteralBF34F63CF9CC98A63C7E915CDE1577571FF9A09B);
		// ColorChange();
		Player_ColorChange_mAF90B9CF5C0739A394CD1C2A81F7C030485CD0EE(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_053e:
	{
		// particleList[7].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_129 = __this->get_particleList_31();
		NullCheck(L_129);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_130;
		L_130 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_129, 7, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_130);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_130, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_131 = __this->get_sm_27();
		NullCheck(L_131);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_131, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0561:
	{
		// else if(isPolygon10){
		bool L_132 = __this->get_isPolygon10_26();
		if (!L_132)
		{
			goto IL_05e4;
		}
	}
	{
		// if(other.gameObject.tag == "Circle"){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_133 = ___other0;
		NullCheck(L_133);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_134;
		L_134 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_133, /*hidden argument*/NULL);
		NullCheck(L_134);
		String_t* L_135;
		L_135 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_134, /*hidden argument*/NULL);
		bool L_136;
		L_136 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_135, _stringLiteral010CF79B276B799D3075D15F60FEA1F42DE0231C, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_05c2;
		}
	}
	{
		// GameManager.score++;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_137 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_score_21();
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)));
		// currentSymbol.sprite = circleSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_138 = __this->get_currentSymbol_8();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_139 = __this->get_circleSprite_11();
		NullCheck(L_138);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_138, L_139, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_140 = ___other0;
		NullCheck(L_140);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_141;
		L_141 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_140, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_141, /*hidden argument*/NULL);
		// isPolygon10 = false;
		__this->set_isPolygon10_26((bool)0);
		// circled = true;
		__this->set_circled_20((bool)1);
		// sm.ChangeSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_142 = __this->get_sm_27();
		NullCheck(L_142);
		SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807(L_142, /*hidden argument*/NULL);
		// }
		return;
	}

IL_05c2:
	{
		// particleList[8].Play();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_143 = __this->get_particleList_31();
		NullCheck(L_143);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_144;
		L_144 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_143, 8, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		NullCheck(L_144);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_144, /*hidden argument*/NULL);
		// sm.BreakSE();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_145 = __this->get_sm_27();
		NullCheck(L_145);
		SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3(L_145, /*hidden argument*/NULL);
		// GameOver();
		Player_GameOver_m2484AE1CBC60A0A4AE50E58E0529BBD0B44FFB47(__this, /*hidden argument*/NULL);
	}

IL_05e4:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isTriangle = true;
		__this->set_isTriangle_18((bool)1);
		// public List <ParticleSystem> particleList = new List<ParticleSystem>();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0 = (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *)il2cpp_codegen_object_new(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE(L_0, /*hidden argument*/List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		__this->set_particleList_31(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RectScalerWithViewport::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_Awake_mD0D368A8C0D013B88B81027F5A5EC67951D4E6BD (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(refRect == null){
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_refRect_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// refRect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_refRect_4(L_2);
	}

IL_001a:
	{
		// UpdateRect();
		RectScalerWithViewport_UpdateRect_mE476B0588D3034F6D83CD9BDC4ADDCE5C9D95D2A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RectScalerWithViewport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_Update_mE97AD04D19B70C4449B0C1AC2049CDD2E58C6E27 (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	{
		// UpdateRectWithCheck();
		RectScalerWithViewport_UpdateRectWithCheck_m39195108C053C9C1CAD1DA041CD1AD27117F4DBF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RectScalerWithViewport::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_OnValidate_m5D9895F0531DE903047AA7A517A14F38E12641CD (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	{
		// UpdateRect();
		RectScalerWithViewport_UpdateRect_mE476B0588D3034F6D83CD9BDC4ADDCE5C9D95D2A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RectScalerWithViewport::UpdateRectWithCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_UpdateRectWithCheck_m39195108C053C9C1CAD1DA041CD1AD27117F4DBF (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Camera cam = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		// float width = cam.rect.width * Screen.width;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = L_0;
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3;
		L_3 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)L_4))));
		// float height = cam.rect.height * Screen.height;
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		L_5 = Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7(L_1, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6;
		L_6 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)((float)((float)L_7))));
		// if(m_width == width && m_height == height && m_matchWidthOrHeight == matchWidthOrHeight ){
		float L_8 = __this->get_m_width_7();
		float L_9 = V_0;
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0051;
		}
	}
	{
		float L_10 = __this->get_m_height_8();
		float L_11 = V_1;
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0051;
		}
	}
	{
		float L_12 = __this->get_m_matchWidthOrHeight_9();
		float L_13 = __this->get_matchWidthOrHeight_6();
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0051;
		}
	}
	{
		// return;
		return;
	}

IL_0051:
	{
		// UpdateRect();
		RectScalerWithViewport_UpdateRect_mE476B0588D3034F6D83CD9BDC4ADDCE5C9D95D2A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RectScalerWithViewport::UpdateRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport_UpdateRect_mE476B0588D3034F6D83CD9BDC4ADDCE5C9D95D2A (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if( referenceResolution.x == 0f || referenceResolution.y == 0f){
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_referenceResolution_5();
		float L_1 = L_0->get_x_0();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0024;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_2 = __this->get_address_of_referenceResolution_5();
		float L_3 = L_2->get_y_1();
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// Camera cam = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_4;
		// if( cam == null ){
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		return;
	}

IL_0035:
	{
		// float width = cam.rect.width * Screen.width;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7 = V_0;
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7(L_7, /*hidden argument*/NULL);
		V_7 = L_8;
		float L_9;
		L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_9, (float)((float)((float)L_10))));
		// float height = cam.rect.height * Screen.height;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = V_0;
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		L_12 = Camera_get_rect_m6B59AEFF7465FA7B605D25E04E99B6E555D59DB7(L_11, /*hidden argument*/NULL);
		V_7 = L_12;
		float L_13;
		L_13 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_7), /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)((float)L_14))));
		// if( width == 0f || height == 0f ){
		float L_15 = V_1;
		if ((((float)L_15) == ((float)(0.0f))))
		{
			goto IL_0073;
		}
	}
	{
		float L_16 = V_2;
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_0074;
		}
	}

IL_0073:
	{
		// return;
		return;
	}

IL_0074:
	{
		// float logWidth = Mathf.Log(width / referenceResolution.x, kLogBase);
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_referenceResolution_5();
		float L_19 = L_18->get_x_0();
		float L_20;
		L_20 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(((float)((float)L_17/(float)L_19)), (2.0f), /*hidden argument*/NULL);
		// float logHeight = Mathf.Log(height / referenceResolution.y, kLogBase);
		float L_21 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_referenceResolution_5();
		float L_23 = L_22->get_y_1();
		float L_24;
		L_24 = Mathf_Log_mF7F3624FA030AB57AD8C1F4CAF084B2DCC99897A(((float)((float)L_21/(float)L_23)), (2.0f), /*hidden argument*/NULL);
		V_3 = L_24;
		// float logWeightedAverage = Mathf.Lerp(logWidth, logHeight, matchWidthOrHeight);
		float L_25 = V_3;
		float L_26 = __this->get_matchWidthOrHeight_6();
		float L_27;
		L_27 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, L_25, L_26, /*hidden argument*/NULL);
		V_4 = L_27;
		// float scale = Mathf.Pow(kLogBase, logWeightedAverage);
		float L_28 = V_4;
		float L_29;
		L_29 = powf((2.0f), L_28);
		V_5 = L_29;
		// if( float.IsNaN(scale) || scale <= 0f ){
		float L_30 = V_5;
		bool L_31;
		L_31 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00d1;
		}
	}
	{
		float L_32 = V_5;
		if ((!(((float)L_32) <= ((float)(0.0f)))))
		{
			goto IL_00d2;
		}
	}

IL_00d1:
	{
		// return;
		return;
	}

IL_00d2:
	{
		// refRect.localScale = new Vector3(scale, scale, scale);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = __this->get_refRect_4();
		float L_34 = V_5;
		float L_35 = V_5;
		float L_36 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_34, L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_37, /*hidden argument*/NULL);
		// float revScale = 1f / scale;
		float L_38 = V_5;
		V_6 = ((float)((float)(1.0f)/(float)L_38));
		// refRect.sizeDelta = new Vector2(width * revScale, height * revScale);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_39 = __this->get_refRect_4();
		float L_40 = V_1;
		float L_41 = V_6;
		float L_42 = V_2;
		float L_43 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_44), ((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), ((float)il2cpp_codegen_multiply((float)L_42, (float)L_43)), /*hidden argument*/NULL);
		NullCheck(L_39);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_39, L_44, /*hidden argument*/NULL);
		// m_width = width;
		float L_45 = V_1;
		__this->set_m_width_7(L_45);
		// m_height = height;
		float L_46 = V_2;
		__this->set_m_height_8(L_46);
		// m_matchWidthOrHeight = matchWidthOrHeight;
		float L_47 = __this->get_matchWidthOrHeight_6();
		__this->set_m_matchWidthOrHeight_9(L_47);
		// }
		return;
	}
}
// System.Void RectScalerWithViewport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectScalerWithViewport__ctor_mA78BD8F1D1929A8C3B8D0DF2E170D65A58D480D5 (RectScalerWithViewport_t9C2505CFE95740D348DB14AE619520608A06BDD8 * __this, const RuntimeMethod* method)
{
	{
		// Vector2 referenceResolution = new Vector2(1920, 1080);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (1920.0f), (1080.0f), /*hidden argument*/NULL);
		__this->set_referenceResolution_5(L_0);
		// float m_width = -1;
		__this->set_m_width_7((-1.0f));
		// float m_height = -1;
		__this->set_m_height_8((-1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::ButtonSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ButtonSE_m1055F76417AC6DF2197A04881F81221DFC290F77 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// aud.PlayOneShot(buttonSE);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_aud_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_buttonSE_5();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::JumpSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_JumpSE_m1361C8C3FBF7DD73B0EDEE5A33763E521E928249 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// aud.PlayOneShot(jumpSE, 0.3f);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_aud_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_jumpSE_4();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (0.300000012f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::ChangeSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeSE_mB88279C6071EA7CCBBA0ACE6392FE9ED4AD77807 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// aud.PlayOneShot(changeSE, 0.8f);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_aud_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_changeSE_6();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (0.800000012f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::BreakSE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_BreakSE_m827EBCC838C07609D7DE64E785D860850981FEE3 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		// aud.PlayOneShot(breakSE, 0.8f);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_aud_8();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_breakSE_7();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mBFCD838C503CE4334501C9864C091FE0061CF024(L_0, L_1, (0.800000012f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ToGame::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToGame_OnClick_mCDDE3C670AC0D7A9170BA462F5A610DB6BDBDC77 (ToGame_t6D885A70AAC88FC0D971CDCA1762B53DBCA06C9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FadeManager.Instance.LoadScene ("Game", 0.4f);
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_0;
		L_0 = FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B(/*hidden argument*/NULL);
		NullCheck(L_0);
		FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C(L_0, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, (0.400000006f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ToGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToGame__ctor_m5883E8897AC959358762B45E64FFA28D72E466B6 (ToGame_t6D885A70AAC88FC0D971CDCA1762B53DBCA06C9D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Texture UIOutline::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * UIOutline_get_mainTexture_m2603AE1BB716F77C29C22BAD5EC492ADD272A114 (UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Texture mainTexture => m_Texture == null ? s_WhiteTexture : m_Texture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_m_Texture_36();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_2 = __this->get_m_Texture_36();
		return L_2;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields*)il2cpp_codegen_static_fields_for(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_il2cpp_TypeInfo_var))->get_s_WhiteTexture_5();
		return L_3;
	}
}
// System.Void UIOutline::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOutline_OnRectTransformDimensionsChange_m3C1AD32A2F7580A151DC16919FD85812DB4FF402 (UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A * __this, const RuntimeMethod* method)
{
	{
		// base.OnRectTransformDimensionsChange();
		Graphic_OnRectTransformDimensionsChange_m582C9953019AEAD41756B6218D16A132F78F18DD(__this, /*hidden argument*/NULL);
		// SetVerticesDirty();
		VirtActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, __this);
		// SetMaterialDirty();
		VirtActionInvoker0::Invoke(29 /* System.Void UnityEngine.UI.Graphic::SetMaterialDirty() */, __this);
		// }
		return;
	}
}
// System.Void UIOutline::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOutline_OnPopulateMesh_m102AC99FE3BF2DF6032607A16A624157D4982B42 (UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A * __this, VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	float V_14 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A  V_16;
	memset((&V_16), 0, sizeof(V_16));
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// vh.Clear();
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA(L_0, /*hidden argument*/NULL);
		// var rect = rectTransform.rect;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var clampedCornerRadius = Mathf.Min((Mathf.Min(rect.width, rect.height) / 2f), _cornerRadius);
		float L_3;
		L_3 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_4;
		L_4 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		float L_5;
		L_5 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get__cornerRadius_38();
		float L_7;
		L_7 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(((float)((float)L_5/(float)(2.0f))), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// rectTransform.GetLocalCorners(_corners);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8;
		L_8 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = __this->get__corners_42();
		NullCheck(L_8);
		RectTransform_GetLocalCorners_mA93C3DA0EF4915A399E111F23E8B0037FB0D897C(L_8, L_9, /*hidden argument*/NULL);
		// _corners[0] += new Vector3(clampedCornerRadius, clampedCornerRadius, 0f);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = __this->get__corners_42();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_11);
		float L_13 = V_1;
		float L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_13, L_14, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_12, L_15, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_11 = L_16;
		// _corners[1] += new Vector3(clampedCornerRadius, -clampedCornerRadius, 0f);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_17 = __this->get__corners_42();
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_18);
		float L_20 = V_1;
		float L_21 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), L_20, ((-L_21)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_22, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_18 = L_23;
		// _corners[2] += new Vector3(-clampedCornerRadius, -clampedCornerRadius, 0f);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = __this->get__corners_42();
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_25);
		float L_27 = V_1;
		float L_28 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), ((-L_27)), ((-L_28)), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_29, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_25 = L_30;
		// _corners[3] += new Vector3(-clampedCornerRadius, clampedCornerRadius, 0f);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_31 = __this->get__corners_42();
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_32);
		float L_34 = V_1;
		float L_35 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((-L_34)), L_35, (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_36, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_32 = L_37;
		// var height = _corners[1].y - _corners[0].y;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_38 = __this->get__corners_42();
		NullCheck(L_38);
		float L_39 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_y_3();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_40 = __this->get__corners_42();
		NullCheck(L_40);
		float L_41 = ((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_39, (float)L_41));
		// var width = _corners[2].x - _corners[1].x;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_42 = __this->get__corners_42();
		NullCheck(L_42);
		float L_43 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->get_x_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_44 = __this->get__corners_42();
		NullCheck(L_44);
		float L_45 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->get_x_2();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_43, (float)L_45));
		// var edgeLengths = new[] { height, width, height, width };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47 = L_46;
		float L_48 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_48);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_49 = L_47;
		float L_50 = V_3;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_50);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_51 = L_49;
		float L_52 = V_2;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_52);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_53 = L_51;
		float L_54 = V_3;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_54);
		V_4 = L_53;
		// var circumference = 2f * Mathf.PI * Mathf.Lerp(clampedCornerRadius, clampedCornerRadius + _outlineWidth, _mappingBias);
		float L_55 = V_1;
		float L_56 = V_1;
		float L_57 = __this->get__outlineWidth_37();
		float L_58 = __this->get__mappingBias_40();
		float L_59;
		L_59 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_55, ((float)il2cpp_codegen_add((float)L_56, (float)L_57)), L_58, /*hidden argument*/NULL);
		V_5 = ((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_59));
		// var around = height * 2f + width * 2f + circumference;
		float L_60 = V_2;
		float L_61 = V_3;
		float L_62 = V_5;
		V_6 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_60, (float)(2.0f))), (float)((float)il2cpp_codegen_multiply((float)L_61, (float)(2.0f))))), (float)L_62));
		// var cornerLength = circumference / 4f;
		float L_63 = V_5;
		// var segmentLength = cornerLength / _cornerSegments;
		int32_t L_64 = __this->get__cornerSegments_39();
		V_7 = ((float)((float)((float)((float)L_63/(float)(4.0f)))/(float)((float)((float)L_64))));
		// var vert = new UIVertex { color = color };
		il2cpp_codegen_initobj((&V_10), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65;
		L_65 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, __this);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_66;
		L_66 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_65, /*hidden argument*/NULL);
		(&V_10)->set_color_3(L_66);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_67 = V_10;
		V_8 = L_67;
		// _verts.Clear();
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_68 = __this->get__verts_43();
		NullCheck(L_68);
		List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB(L_68, /*hidden argument*/List_1_Clear_m4375DCA89C2759B409ABA84E601C40F72027BCBB_RuntimeMethod_var);
		// var u = 0f;
		V_9 = (0.0f);
		// for (var c = 0; c < 4; c++)
		V_11 = 0;
		goto IL_0323;
	}

IL_01c6:
	{
		// var origin = _corners[c];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = __this->get__corners_42();
		int32_t L_70 = V_11;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_12 = L_72;
		// for (var i = 0; i < _cornerSegments + 1; i++)
		V_13 = 0;
		goto IL_030e;
	}

IL_01dd:
	{
		// var angle = (float)i / _cornerSegments * Mathf.PI / 2f + Mathf.PI * 0.5f - Mathf.PI * c * 1.5f;
		int32_t L_73 = V_13;
		int32_t L_74 = __this->get__cornerSegments_39();
		int32_t L_75 = V_11;
		V_14 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_73))/(float)((float)((float)L_74)))), (float)(3.14159274f)))/(float)(2.0f))), (float)(1.57079637f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(3.14159274f), (float)((float)((float)L_75)))), (float)(1.5f)))));
		// var direction = new Vector3(Mathf.Cos(-angle), Mathf.Sin(-angle), 0f);
		float L_76 = V_14;
		float L_77;
		L_77 = cosf(((-L_76)));
		float L_78 = V_14;
		float L_79;
		L_79 = sinf(((-L_78)));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_15), L_77, L_79, (0.0f), /*hidden argument*/NULL);
		// vert.position = origin + direction * clampedCornerRadius;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81 = V_15;
		float L_82 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_81, L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		L_84 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_80, L_83, /*hidden argument*/NULL);
		(&V_8)->set_position_0(L_84);
		// vert.uv0 = new Vector2(u, 0f);
		float L_85 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_86), L_85, (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_87;
		L_87 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_86, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_87);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_88 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_89 = V_8;
		NullCheck(L_88);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_88, L_89, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
		// vert.position = origin + direction * (clampedCornerRadius + _outlineWidth);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = V_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = V_15;
		float L_92 = V_1;
		float L_93 = __this->get__outlineWidth_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_91, ((float)il2cpp_codegen_add((float)L_92, (float)L_93)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_90, L_94, /*hidden argument*/NULL);
		(&V_8)->set_position_0(L_95);
		// vert.uv0 = new Vector2(u, 1f);
		float L_96 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_97), L_96, (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_98;
		L_98 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_97, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_98);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_99 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_100 = V_8;
		NullCheck(L_99);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_99, L_100, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
		// if (_fillCenter)
		bool L_101 = __this->get__fillCenter_41();
		if (!L_101)
		{
			goto IL_02e5;
		}
	}
	{
		// vert.position = rect.center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_102;
		L_102 = Rect_get_center_mDFC7A4AE153DCDC1D6248803381C6F36C7883707((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_102, /*hidden argument*/NULL);
		(&V_8)->set_position_0(L_103);
		// vert.uv0 = new Vector2(u, 0f);
		float L_104 = V_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_105), L_104, (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_106;
		L_106 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_105, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_106);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_107 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_108 = V_8;
		NullCheck(L_107);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_107, L_108, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
	}

IL_02e5:
	{
		// if (i < _cornerSegments)
		int32_t L_109 = V_13;
		int32_t L_110 = __this->get__cornerSegments_39();
		if ((((int32_t)L_109) >= ((int32_t)L_110)))
		{
			goto IL_02fb;
		}
	}
	{
		// u += segmentLength / around;
		float L_111 = V_9;
		float L_112 = V_7;
		float L_113 = V_6;
		V_9 = ((float)il2cpp_codegen_add((float)L_111, (float)((float)((float)L_112/(float)L_113))));
		goto IL_0308;
	}

IL_02fb:
	{
		// u += edgeLengths[c] / around;
		float L_114 = V_9;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_115 = V_4;
		int32_t L_116 = V_11;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		float L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		float L_119 = V_6;
		V_9 = ((float)il2cpp_codegen_add((float)L_114, (float)((float)((float)L_118/(float)L_119))));
	}

IL_0308:
	{
		// for (var i = 0; i < _cornerSegments + 1; i++)
		int32_t L_120 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)1));
	}

IL_030e:
	{
		// for (var i = 0; i < _cornerSegments + 1; i++)
		int32_t L_121 = V_13;
		int32_t L_122 = __this->get__cornerSegments_39();
		if ((((int32_t)L_121) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)))))
		{
			goto IL_01dd;
		}
	}
	{
		// for (var c = 0; c < 4; c++)
		int32_t L_123 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
	}

IL_0323:
	{
		// for (var c = 0; c < 4; c++)
		int32_t L_124 = V_11;
		if ((((int32_t)L_124) < ((int32_t)4)))
		{
			goto IL_01c6;
		}
	}
	{
		// vert = _verts[0];
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_125 = __this->get__verts_43();
		NullCheck(L_125);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_126;
		L_126 = List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_inline(L_125, 0, /*hidden argument*/List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_RuntimeMethod_var);
		V_8 = L_126;
		// vert.uv0 = new Vector2(1f, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_127), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_128;
		L_128 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_127, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_128);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_129 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_130 = V_8;
		NullCheck(L_129);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_129, L_130, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
		// vert = _verts[1];
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_131 = __this->get__verts_43();
		NullCheck(L_131);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_132;
		L_132 = List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_inline(L_131, 1, /*hidden argument*/List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_RuntimeMethod_var);
		V_8 = L_132;
		// vert.uv0 = new Vector2(1f, 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_133;
		memset((&L_133), 0, sizeof(L_133));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_133), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_134;
		L_134 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_133, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_134);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_135 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_136 = V_8;
		NullCheck(L_135);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_135, L_136, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
		// if (_fillCenter)
		bool L_137 = __this->get__fillCenter_41();
		if (!L_137)
		{
			goto IL_03d5;
		}
	}
	{
		// vert = _verts[2];
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_138 = __this->get__verts_43();
		NullCheck(L_138);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_139;
		L_139 = List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_inline(L_138, 2, /*hidden argument*/List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_RuntimeMethod_var);
		V_8 = L_139;
		// vert.uv0 = new Vector2(1f, 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_140;
		memset((&L_140), 0, sizeof(L_140));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_140), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_141;
		L_141 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_140, /*hidden argument*/NULL);
		(&V_8)->set_uv0_4(L_141);
		// _verts.Add(vert);
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_142 = __this->get__verts_43();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_143 = V_8;
		NullCheck(L_142);
		List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588(L_142, L_143, /*hidden argument*/List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
	}

IL_03d5:
	{
		// foreach (var vertex in _verts)
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_144 = __this->get__verts_43();
		NullCheck(L_144);
		Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A  L_145;
		L_145 = List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7(L_144, /*hidden argument*/List_1_GetEnumerator_m6FF74144A7326B8F0902009DD416BCA43B5148F7_RuntimeMethod_var);
		V_16 = L_145;
	}

IL_03e2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03f5;
		}

IL_03e4:
		{
			// foreach (var vertex in _verts)
			UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_146;
			L_146 = Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_inline((Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *)(&V_16), /*hidden argument*/Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_RuntimeMethod_var);
			V_17 = L_146;
			// vh.AddVert(vertex);
			VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_147 = ___vh0;
			UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_148 = V_17;
			NullCheck(L_147);
			VertexHelper_AddVert_m7A43A65F746413AF697EBD1D0A8EA87A0A7ED032(L_147, L_148, /*hidden argument*/NULL);
		}

IL_03f5:
		{
			// foreach (var vertex in _verts)
			bool L_149;
			L_149 = Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA((Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *)(&V_16), /*hidden argument*/Enumerator_MoveNext_mB628AF1390F43094F2444BF75B47595EE51553DA_RuntimeMethod_var);
			if (L_149)
			{
				goto IL_03e4;
			}
		}

IL_03fe:
		{
			IL2CPP_LEAVE(0x40E, FINALLY_0400);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0400;
	}

FINALLY_0400:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561((Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A *)(&V_16), /*hidden argument*/Enumerator_Dispose_m64B59279C544710DBD25AE11D0418D8B5E9EE561_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1024)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1024)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40E, IL_040e)
	}

IL_040e:
	{
		// if (_fillCenter)
		bool L_150 = __this->get__fillCenter_41();
		if (!L_150)
		{
			goto IL_0470;
		}
	}
	{
		// for (var v = 0; v < vh.currentVertCount - 3; v += 3)
		V_18 = 0;
		goto IL_0463;
	}

IL_041b:
	{
		// vh.AddTriangle(v, v + 1, v + 4);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_151 = ___vh0;
		int32_t L_152 = V_18;
		int32_t L_153 = V_18;
		int32_t L_154 = V_18;
		NullCheck(L_151);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_151, L_152, ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)4)), /*hidden argument*/NULL);
		// vh.AddTriangle(v, v + 4, v + 3);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_155 = ___vh0;
		int32_t L_156 = V_18;
		int32_t L_157 = V_18;
		int32_t L_158 = V_18;
		NullCheck(L_155);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_155, L_156, ((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)4)), ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)3)), /*hidden argument*/NULL);
		// vh.AddTriangle(v + 2, v, v + 3);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_159 = ___vh0;
		int32_t L_160 = V_18;
		int32_t L_161 = V_18;
		int32_t L_162 = V_18;
		NullCheck(L_159);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_159, ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)2)), L_161, ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)3)), /*hidden argument*/NULL);
		// vh.AddTriangle(v + 2, v + 3, v + 5);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_163 = ___vh0;
		int32_t L_164 = V_18;
		int32_t L_165 = V_18;
		int32_t L_166 = V_18;
		NullCheck(L_163);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_163, ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)2)), ((int32_t)il2cpp_codegen_add((int32_t)L_165, (int32_t)3)), ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)5)), /*hidden argument*/NULL);
		// for (var v = 0; v < vh.currentVertCount - 3; v += 3)
		int32_t L_167 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)3));
	}

IL_0463:
	{
		// for (var v = 0; v < vh.currentVertCount - 3; v += 3)
		int32_t L_168 = V_18;
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_169 = ___vh0;
		NullCheck(L_169);
		int32_t L_170;
		L_170 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(L_169, /*hidden argument*/NULL);
		if ((((int32_t)L_168) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_170, (int32_t)3)))))
		{
			goto IL_041b;
		}
	}
	{
		// }
		return;
	}

IL_0470:
	{
		// for (var v = 0; v < vh.currentVertCount - 2; v += 2)
		V_19 = 0;
		goto IL_049b;
	}

IL_0475:
	{
		// vh.AddTriangle(v, v + 1, v + 3);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_171 = ___vh0;
		int32_t L_172 = V_19;
		int32_t L_173 = V_19;
		int32_t L_174 = V_19;
		NullCheck(L_171);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_171, L_172, ((int32_t)il2cpp_codegen_add((int32_t)L_173, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)3)), /*hidden argument*/NULL);
		// vh.AddTriangle(v, v + 3, v + 2);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_175 = ___vh0;
		int32_t L_176 = V_19;
		int32_t L_177 = V_19;
		int32_t L_178 = V_19;
		NullCheck(L_175);
		VertexHelper_AddTriangle_m1EE93E4BF27E3BCCE69A348358FAF605105B63C6(L_175, L_176, ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)3)), ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)2)), /*hidden argument*/NULL);
		// for (var v = 0; v < vh.currentVertCount - 2; v += 2)
		int32_t L_179 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_179, (int32_t)2));
	}

IL_049b:
	{
		// for (var v = 0; v < vh.currentVertCount - 2; v += 2)
		int32_t L_180 = V_19;
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_181 = ___vh0;
		NullCheck(L_181);
		int32_t L_182;
		L_182 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(L_181, /*hidden argument*/NULL);
		if ((((int32_t)L_180) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_182, (int32_t)2)))))
		{
			goto IL_0475;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIOutline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIOutline__ctor_mE616C7B7A0DAF8AF9832FECFAD68DFCEBF972640 (UIOutline_t034C47E3C531FCB7B0D04E355D91B528220E812A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField, Range(0f, 500f)] float _outlineWidth = 100f;
		__this->set__outlineWidth_37((100.0f));
		// [SerializeField, Range(0f, 500f)] float _cornerRadius = 50f;
		__this->set__cornerRadius_38((50.0f));
		// [SerializeField, Range(1, 20)] int _cornerSegments = 1;
		__this->set__cornerSegments_39(1);
		// [SerializeField, Range(0f, 1f)] float _mappingBias = 0.5f;
		__this->set__mappingBias_40((0.5f));
		// private Vector3[] _corners = new Vector3[4];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set__corners_42(L_0);
		// private List<UIVertex> _verts = new List<UIVertex>();
		List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * L_1 = (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)il2cpp_codegen_object_new(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F_il2cpp_TypeInfo_var);
		List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC(L_1, /*hidden argument*/List_1__ctor_m66CF20877114338DBA82AEDF855E0DF0CD2FE8EC_RuntimeMethod_var);
		__this->set__verts_43(L_1);
		MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D(__this, /*hidden argument*/NULL);
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
// System.Void wallController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wallController_Start_m480426A324A1A6D0EB73593AFCE1757D7ECBD75E (wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void wallController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wallController_Update_m0E474DBC117411D72DBD60AAE4CB1EA6CECCAAD7 (wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 wallPos = symbol.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_symbol_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// transform.position = new Vector3(transform.position.x, wallPos.y+4f, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_6, ((float)il2cpp_codegen_add((float)L_8, (float)(4.0f))), L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void wallController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wallController__ctor_mE53268B26E15CFAAE594F130CD8A28492776397E (wallController_t17B5F099A9152872E6B008A9BCCCEF4BF7DC8BE1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FadeManager/<TransScene>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransSceneU3Ed__10__ctor_mF6B239297A0DBD79C3A40FA5D63E5FEB273848F3 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void FadeManager/<TransScene>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransSceneU3Ed__10_System_IDisposable_Dispose_m618ACC8C0DC29159496C4A0361A7CC4DA9AC1B66 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean FadeManager/<TransScene>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTransSceneU3Ed__10_MoveNext_mDFAF262ED8A3B8210DFA4B84630DD843120B768A (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_00fc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// this.isFading = true;
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_isFading_7((bool)1);
		// float time = 0;
		__this->set_U3CtimeU3E5__2_5((0.0f));
		goto IL_008d;
	}

IL_003d:
	{
		// this.fadeAlpha = Mathf.Lerp (0f, 1f, time / interval);
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_4 = V_1;
		float L_5 = __this->get_U3CtimeU3E5__2_5();
		float L_6 = __this->get_interval_3();
		float L_7;
		L_7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), (1.0f), ((float)((float)L_5/(float)L_6)), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_fadeAlpha_6(L_7);
		// time += Time.deltaTime;
		float L_8 = __this->get_U3CtimeU3E5__2_5();
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_5(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// yield return 0;
		int32_t L_10 = 0;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0086:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008d:
	{
		// while (time <= interval) {
		float L_12 = __this->get_U3CtimeU3E5__2_5();
		float L_13 = __this->get_interval_3();
		if ((((float)L_12) <= ((float)L_13)))
		{
			goto IL_003d;
		}
	}
	{
		// SceneManager.LoadScene (scene);
		String_t* L_14 = __this->get_scene_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_14, /*hidden argument*/NULL);
		// time = 0;
		__this->set_U3CtimeU3E5__2_5((0.0f));
		goto IL_0103;
	}

IL_00b3:
	{
		// this.fadeAlpha = Mathf.Lerp (1f, 0f, time / interval);
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_15 = V_1;
		float L_16 = __this->get_U3CtimeU3E5__2_5();
		float L_17 = __this->get_interval_3();
		float L_18;
		L_18 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((1.0f), (0.0f), ((float)((float)L_16/(float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_fadeAlpha_6(L_18);
		// time += Time.deltaTime;
		float L_19 = __this->get_U3CtimeU3E5__2_5();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_5(((float)il2cpp_codegen_add((float)L_19, (float)L_20)));
		// yield return 0;
		int32_t L_21 = 0;
		RuntimeObject * L_22 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_21);
		__this->set_U3CU3E2__current_1(L_22);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00fc:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0103:
	{
		// while (time <= interval) {
		float L_23 = __this->get_U3CtimeU3E5__2_5();
		float L_24 = __this->get_interval_3();
		if ((((float)L_23) <= ((float)L_24)))
		{
			goto IL_00b3;
		}
	}
	{
		// this.isFading = false;
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set_isFading_7((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object FadeManager/<TransScene>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTransSceneU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA97938FFBEC92B8F334896D95C41EADBBBFB93A5 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void FadeManager/<TransScene>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTransSceneU3Ed__10_System_Collections_IEnumerator_Reset_m299EDF0D0B6B0ADB5C12E588426A661DB47118D0 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTransSceneU3Ed__10_System_Collections_IEnumerator_Reset_m299EDF0D0B6B0ADB5C12E588426A661DB47118D0_RuntimeMethod_var)));
	}
}
// System.Object FadeManager/<TransScene>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTransSceneU3Ed__10_System_Collections_IEnumerator_get_Current_m3CA3559639AF1EE9938E52B93C8072BF3CDEF1D9 (U3CTransSceneU3Ed__10_tDB02F6F2FEB94007831B25748B818BA76C9FACF3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticleFinish/<WaitParticle>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitParticleU3Ed__3__ctor_mB25F8594E0CDC5E53CB08AB7BA0A146BEEAE1570 (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ParticleFinish/<WaitParticle>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitParticleU3Ed__3_System_IDisposable_Dispose_m69C0CBA67C85A407566D21C8A031EFFB55C91D90 (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ParticleFinish/<WaitParticle>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitParticleU3Ed__3_MoveNext_m8E127744B1D2AA3A94113033C02723081360CC6C (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(particleTime);
		ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_particleTime_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// FadeManager.Instance.LoadScene("GameOver", fadeTime);
		FadeManager_t52431C2E0F0B939462394FECA677F10551D28BF0 * L_7;
		L_7 = FadeManager_get_Instance_m84B96C58D7866421F4D1163F11898ABAF4A1B16B(/*hidden argument*/NULL);
		ParticleFinish_tE7EB243BEA7607BA8D5667BDE06F76F33DA7DF9C * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_fadeTime_4();
		NullCheck(L_7);
		FadeManager_LoadScene_mB26A77D4C299937DDE5CB538F75E028CFA7DDA2C(L_7, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ParticleFinish/<WaitParticle>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitParticleU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E0A91BAF46768CC78C2FD85FC251A7A645C73DB (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ParticleFinish/<WaitParticle>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitParticleU3Ed__3_System_Collections_IEnumerator_Reset_m3C13265EE56EE26D445B336E20F73E689F0A60A5 (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitParticleU3Ed__3_System_Collections_IEnumerator_Reset_m3C13265EE56EE26D445B336E20F73E689F0A60A5_RuntimeMethod_var)));
	}
}
// System.Object ParticleFinish/<WaitParticle>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitParticleU3Ed__3_System_Collections_IEnumerator_get_Current_mF49D327F2860544E130474ACAAB324DA39FED3E7 (U3CWaitParticleU3Ed__3_t31B2E18D9A0F5623A19C45A4B0CC028CD424C7C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  List_1_get_Item_m391D3A419FD1FC4B147D9C35968DE52270549DEE_gshared_inline (List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_2 = (UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A*)L_2, (int32_t)L_3);
		return (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  Enumerator_get_Current_mACD6CF5C04834806AEFE3ECD76BA0265CD6AB696_gshared_inline (Enumerator_tEC1212B5D3809963156DCBB944F082379ED1BA1A * __this, const RuntimeMethod* method)
{
	{
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_0 = (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )__this->get_current_3();
		return (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_0;
	}
}
