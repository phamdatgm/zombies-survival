// Namespace: 
internal class <Module> // TypeDefIndex: 6991
{}


// Namespace: UnityEngine
public struct jvalue // TypeDefIndex: 6992
{
	// Fields
	public bool z; // 0x0
	public sbyte b; // 0x0
	public char c; // 0x0
	public short s; // 0x0
	public int i; // 0x0
	public long j; // 0x0
	public float f; // 0x0
	public double d; // 0x0
	public IntPtr l; // 0x0
}


// Namespace: UnityEngine
public struct JNINativeMethod // TypeDefIndex: 6993
{
	// Fields
	public string name; // 0x0
	public string signature; // 0x8
	public IntPtr fnPtr; // 0x10
}


// Namespace: UnityEngine
[UsedByNativeCode]
public static class AndroidJNIHelper // TypeDefIndex: 6994
{
	// Properties
	public static bool debug { get; set; }

	// Methods

	// RVA: 0x134F4F4 Offset: 0x134B4F4 VA: 0x134F4F4
	public static bool get_debug() { }

	// RVA: 0x134F51C Offset: 0x134B51C VA: 0x134F51C
	public static void set_debug(bool value) { }

	// RVA: 0x134F558 Offset: 0x134B558 VA: 0x134F558
	public static IntPtr GetConstructorID(IntPtr javaClass) { }

	// RVA: 0x134F5A0 Offset: 0x134B5A0 VA: 0x134F5A0
	public static IntPtr GetConstructorID(IntPtr javaClass, string signature) { }

	// RVA: 0x134F76C Offset: 0x134B76C VA: 0x134F76C
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName) { }

	// RVA: 0x134F7D0 Offset: 0x134B7D0 VA: 0x134F7D0
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, string signature) { }

	// RVA: 0x134F7C8 Offset: 0x134B7C8 VA: 0x134F7C8
	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, string signature, bool isStatic) { }

	// RVA: 0x134F9B0 Offset: 0x134B9B0 VA: 0x134F9B0
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName) { }

	// RVA: 0x134FA14 Offset: 0x134BA14 VA: 0x134FA14
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, string signature) { }

	// RVA: 0x134FA0C Offset: 0x134BA0C VA: 0x134FA0C
	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, string signature, bool isStatic) { }

	// RVA: 0x134FCF4 Offset: 0x134BCF4 VA: 0x134FCF4
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable) { }

	// RVA: 0x134FD50 Offset: 0x134BD50 VA: 0x134FD50
	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy) { }

	// RVA: 0x134FEDC Offset: 0x134BEDC VA: 0x134FEDC
	public static IntPtr ConvertToJNIArray(Array array) { }

	// RVA: 0x1350AB0 Offset: 0x134CAB0 VA: 0x1350AB0
	public static jvalue[] CreateJNIArgArray(object[] args) { }

	// RVA: 0x13510C0 Offset: 0x134D0C0 VA: 0x13510C0
	public static void CreateJNIArgArray(object[] args, Span<jvalue> jniArgs) { }

	// RVA: 0x13511D0 Offset: 0x134D1D0 VA: 0x13511D0
	public static void DeleteJNIArgArray(object[] args, jvalue[] jniArgs) { }

	// RVA: 0x1351394 Offset: 0x134D394 VA: 0x1351394
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs) { }

	// RVA: 0x1351398 Offset: 0x134D398 VA: 0x1351398
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args) { }

	// RVA: 0x13513D8 Offset: 0x134D3D8 VA: 0x13513D8
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic) { }

	// RVA: 0x1351448 Offset: 0x134D448 VA: 0x1351448
	public static string GetSignature(object obj) { }

	// RVA: 0x1352328 Offset: 0x134E328 VA: 0x1352328
	public static string GetSignature(object[] args) { }

	// RVA: -1 Offset: -1
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C978 Offset: 0xB68978 VA: 0xB6C978
	|-AndroidJNIHelper.ConvertFromJNIArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CAB8 Offset: 0xB68AB8 VA: 0xB6CAB8
	|-AndroidJNIHelper.GetMethodID<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static IntPtr GetFieldID<FieldType>(IntPtr jclass, string fieldName, bool isStatic) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CA68 Offset: 0xB68A68 VA: 0xB6CA68
	|-AndroidJNIHelper.GetFieldID<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static string GetSignature<ReturnType>(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CB10 Offset: 0xB68B10 VA: 0xB6CB10
	|-AndroidJNIHelper.GetSignature<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x1352450 Offset: 0x134E450 VA: 0x1352450
	private static IntPtr Box(jvalue val, string boxedClass, string signature) { }

	// RVA: 0x13527B8 Offset: 0x134E7B8 VA: 0x13527B8
	public static IntPtr Box(sbyte value) { }

	// RVA: 0x1352820 Offset: 0x134E820 VA: 0x1352820
	public static IntPtr Box(short value) { }

	// RVA: 0x1352888 Offset: 0x134E888 VA: 0x1352888
	public static IntPtr Box(int value) { }

	// RVA: 0x13528F0 Offset: 0x134E8F0 VA: 0x13528F0
	public static IntPtr Box(long value) { }

	// RVA: 0x1352958 Offset: 0x134E958 VA: 0x1352958
	public static IntPtr Box(float value) { }

	// RVA: 0x13529C0 Offset: 0x134E9C0 VA: 0x13529C0
	public static IntPtr Box(double value) { }

	// RVA: 0x1352A28 Offset: 0x134EA28 VA: 0x1352A28
	public static IntPtr Box(char value) { }

	// RVA: 0x1352A90 Offset: 0x134EA90 VA: 0x1352A90
	public static IntPtr Box(bool value) { }

	// RVA: 0x1352AF8 Offset: 0x134EAF8 VA: 0x1352AF8
	private static IntPtr GetUnboxMethod(IntPtr obj, string methodName, string signature) { }

	// RVA: 0x1352CEC Offset: 0x134ECEC VA: 0x1352CEC
	public static void Unbox(IntPtr obj, out sbyte value) { }

	// RVA: 0x1352DEC Offset: 0x134EDEC VA: 0x1352DEC
	public static void Unbox(IntPtr obj, out short value) { }

	// RVA: 0x1352EEC Offset: 0x134EEEC VA: 0x1352EEC
	public static void Unbox(IntPtr obj, out int value) { }

	// RVA: 0x1352FEC Offset: 0x134EFEC VA: 0x1352FEC
	public static void Unbox(IntPtr obj, out long value) { }

	// RVA: 0x13530EC Offset: 0x134F0EC VA: 0x13530EC
	public static void Unbox(IntPtr obj, out float value) { }

	// RVA: 0x13531F8 Offset: 0x134F1F8 VA: 0x13531F8
	public static void Unbox(IntPtr obj, out double value) { }

	// RVA: 0x1353304 Offset: 0x134F304 VA: 0x1353304
	public static void Unbox(IntPtr obj, out char value) { }

	// RVA: 0x1353404 Offset: 0x134F404 VA: 0x1353404
	public static void Unbox(IntPtr obj, out bool value) { }
}


// Namespace: UnityEngine
public static class AndroidJNI // TypeDefIndex: 6995
{
	// Methods

	// RVA: 0x1353508 Offset: 0x134F508 VA: 0x1353508
	public static IntPtr GetJavaVM() { }

	// RVA: 0x1353530 Offset: 0x134F530 VA: 0x1353530
	public static int AttachCurrentThread() { }

	// RVA: 0x1353558 Offset: 0x134F558 VA: 0x1353558
	public static int DetachCurrentThread() { }

	// RVA: 0x1353580 Offset: 0x134F580 VA: 0x1353580
	public static int GetVersion() { }

	// RVA: 0x13535A8 Offset: 0x134F5A8 VA: 0x13535A8
	public static IntPtr FindClass(string name) { }

	// RVA: 0x13535E4 Offset: 0x134F5E4 VA: 0x13535E4
	public static IntPtr FromReflectedMethod(IntPtr refMethod) { }

	// RVA: 0x1353620 Offset: 0x134F620 VA: 0x1353620
	public static IntPtr FromReflectedField(IntPtr refField) { }

	// RVA: 0x135365C Offset: 0x134F65C VA: 0x135365C
	public static IntPtr ToReflectedMethod(IntPtr clazz, IntPtr methodID, bool isStatic) { }

	// RVA: 0x13536B0 Offset: 0x134F6B0 VA: 0x13536B0
	public static IntPtr ToReflectedField(IntPtr clazz, IntPtr fieldID, bool isStatic) { }

	// RVA: 0x1353704 Offset: 0x134F704 VA: 0x1353704
	public static IntPtr GetSuperclass(IntPtr clazz) { }

	// RVA: 0x1353740 Offset: 0x134F740 VA: 0x1353740
	public static bool IsAssignableFrom(IntPtr clazz1, IntPtr clazz2) { }

	// RVA: 0x1353784 Offset: 0x134F784 VA: 0x1353784
	public static int Throw(IntPtr obj) { }

	// RVA: 0x13537C0 Offset: 0x134F7C0 VA: 0x13537C0
	public static int ThrowNew(IntPtr clazz, string message) { }

	// RVA: 0x1353804 Offset: 0x134F804 VA: 0x1353804
	public static IntPtr ExceptionOccurred() { }

	// RVA: 0x135382C Offset: 0x134F82C VA: 0x135382C
	public static void ExceptionDescribe() { }

	// RVA: 0x1353854 Offset: 0x134F854 VA: 0x1353854
	public static void ExceptionClear() { }

	// RVA: 0x135387C Offset: 0x134F87C VA: 0x135387C
	public static void FatalError(string message) { }

	// RVA: 0x13538B8 Offset: 0x134F8B8 VA: 0x13538B8
	public static int PushLocalFrame(int capacity) { }

	// RVA: 0x13538F4 Offset: 0x134F8F4 VA: 0x13538F4
	public static IntPtr PopLocalFrame(IntPtr ptr) { }

	// RVA: 0x1353930 Offset: 0x134F930 VA: 0x1353930
	public static IntPtr NewGlobalRef(IntPtr obj) { }

	// RVA: 0x135396C Offset: 0x134F96C VA: 0x135396C
	public static void DeleteGlobalRef(IntPtr obj) { }

	// RVA: 0x13539A8 Offset: 0x134F9A8 VA: 0x13539A8
	internal static void QueueDeleteGlobalRef(IntPtr obj) { }

	// RVA: 0x13539E4 Offset: 0x134F9E4 VA: 0x13539E4
	internal static uint GetQueueGlobalRefsCount() { }

	// RVA: 0x1353A0C Offset: 0x134FA0C VA: 0x1353A0C
	public static IntPtr NewWeakGlobalRef(IntPtr obj) { }

	// RVA: 0x1353A48 Offset: 0x134FA48 VA: 0x1353A48
	public static void DeleteWeakGlobalRef(IntPtr obj) { }

	// RVA: 0x1353A84 Offset: 0x134FA84 VA: 0x1353A84
	public static IntPtr NewLocalRef(IntPtr obj) { }

	// RVA: 0x1353AC0 Offset: 0x134FAC0 VA: 0x1353AC0
	public static void DeleteLocalRef(IntPtr obj) { }

	// RVA: 0x1353AFC Offset: 0x134FAFC VA: 0x1353AFC
	public static bool IsSameObject(IntPtr obj1, IntPtr obj2) { }

	// RVA: 0x1353B40 Offset: 0x134FB40 VA: 0x1353B40
	public static int EnsureLocalCapacity(int capacity) { }

	// RVA: 0x1353B7C Offset: 0x134FB7C VA: 0x1353B7C
	public static IntPtr AllocObject(IntPtr clazz) { }

	// RVA: 0x1353BB8 Offset: 0x134FBB8 VA: 0x1353BB8
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1353C34 Offset: 0x134FC34 VA: 0x1353C34
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1353CCC Offset: 0x134FCCC VA: 0x1353CCC
	public static IntPtr NewObjectA(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1353D20 Offset: 0x134FD20 VA: 0x1353D20
	public static IntPtr GetObjectClass(IntPtr obj) { }

	// RVA: 0x1353D5C Offset: 0x134FD5C VA: 0x1353D5C
	public static bool IsInstanceOf(IntPtr obj, IntPtr clazz) { }

	// RVA: 0x1353DA0 Offset: 0x134FDA0 VA: 0x1353DA0
	public static IntPtr GetMethodID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x1353DF4 Offset: 0x134FDF4 VA: 0x1353DF4
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x1353E48 Offset: 0x134FE48 VA: 0x1353E48
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x1353E9C Offset: 0x134FE9C VA: 0x1353E9C
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x1353EF0 Offset: 0x134FEF0 VA: 0x1353EF0
	public static IntPtr NewString(string chars) { }

	// RVA: 0x1353F2C Offset: 0x134FF2C VA: 0x1353F2C
	private static IntPtr NewStringFromStr(string chars) { }

	// RVA: 0x1353F68 Offset: 0x134FF68 VA: 0x1353F68
	public static IntPtr NewString(char[] chars) { }

	// RVA: 0x1353FA4 Offset: 0x134FFA4 VA: 0x1353FA4
	public static IntPtr NewStringUTF(string bytes) { }

	// RVA: 0x1353FE0 Offset: 0x134FFE0 VA: 0x1353FE0
	public static string GetStringChars(IntPtr str) { }

	// RVA: 0x135401C Offset: 0x135001C VA: 0x135401C
	public static int GetStringLength(IntPtr str) { }

	// RVA: 0x1354058 Offset: 0x1350058 VA: 0x1354058
	public static int GetStringUTFLength(IntPtr str) { }

	// RVA: 0x1354094 Offset: 0x1350094 VA: 0x1354094
	public static string GetStringUTFChars(IntPtr str) { }

	// RVA: 0x13540D0 Offset: 0x13500D0 VA: 0x13540D0
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x135414C Offset: 0x135014C VA: 0x135414C
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13541E4 Offset: 0x13501E4 VA: 0x13541E4
	public static string CallStringMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354238 Offset: 0x1350238 VA: 0x1354238
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13542B4 Offset: 0x13502B4 VA: 0x13542B4
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135434C Offset: 0x135034C VA: 0x135434C
	public static IntPtr CallObjectMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x13543A0 Offset: 0x13503A0 VA: 0x13543A0
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x135441C Offset: 0x135041C VA: 0x135441C
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13544B4 Offset: 0x13504B4 VA: 0x13544B4
	public static int CallIntMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354508 Offset: 0x1350508 VA: 0x1354508
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354588 Offset: 0x1350588 VA: 0x1354588
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1354624 Offset: 0x1350624 VA: 0x1354624
	public static bool CallBooleanMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354678 Offset: 0x1350678 VA: 0x1354678
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13546F4 Offset: 0x13506F4 VA: 0x13546F4
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135478C Offset: 0x135078C VA: 0x135478C
	public static short CallShortMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	[Obsolete("AndroidJNI.CallByteMethod is obsolete. Use AndroidJNI.CallSByteMethod method instead")]
	// RVA: 0x13547E0 Offset: 0x13507E0 VA: 0x13547E0
	public static byte CallByteMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13547E4 Offset: 0x13507E4 VA: 0x13547E4
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354860 Offset: 0x1350860 VA: 0x1354860
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13548F8 Offset: 0x13508F8 VA: 0x13548F8
	public static sbyte CallSByteMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x135494C Offset: 0x135094C VA: 0x135494C
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13549C8 Offset: 0x13509C8 VA: 0x13549C8
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1354A60 Offset: 0x1350A60 VA: 0x1354A60
	public static char CallCharMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354AB4 Offset: 0x1350AB4 VA: 0x1354AB4
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354B30 Offset: 0x1350B30 VA: 0x1354B30
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1354BC8 Offset: 0x1350BC8 VA: 0x1354BC8
	public static float CallFloatMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354C1C Offset: 0x1350C1C VA: 0x1354C1C
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354C98 Offset: 0x1350C98 VA: 0x1354C98
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1354D30 Offset: 0x1350D30 VA: 0x1354D30
	public static double CallDoubleMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354D84 Offset: 0x1350D84 VA: 0x1354D84
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354E00 Offset: 0x1350E00 VA: 0x1354E00
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1354E98 Offset: 0x1350E98 VA: 0x1354E98
	public static long CallLongMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1354EEC Offset: 0x1350EEC VA: 0x1354EEC
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1354F68 Offset: 0x1350F68 VA: 0x1354F68
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355000 Offset: 0x1351000 VA: 0x1355000
	public static void CallVoidMethodUnsafe(IntPtr obj, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1355054 Offset: 0x1351054 VA: 0x1355054
	public static string GetStringField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x1355098 Offset: 0x1351098 VA: 0x1355098
	public static IntPtr GetObjectField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x13550DC Offset: 0x13510DC VA: 0x13550DC
	public static bool GetBooleanField(IntPtr obj, IntPtr fieldID) { }

	[Obsolete("AndroidJNI.GetByteField is obsolete. Use AndroidJNI.GetSByteField method instead")]
	// RVA: 0x1355120 Offset: 0x1351120 VA: 0x1355120
	public static byte GetByteField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x1355164 Offset: 0x1351164 VA: 0x1355164
	public static sbyte GetSByteField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x13551A8 Offset: 0x13511A8 VA: 0x13551A8
	public static char GetCharField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x13551EC Offset: 0x13511EC VA: 0x13551EC
	public static short GetShortField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x1355230 Offset: 0x1351230 VA: 0x1355230
	public static int GetIntField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x1355274 Offset: 0x1351274 VA: 0x1355274
	public static long GetLongField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x13552B8 Offset: 0x13512B8 VA: 0x13552B8
	public static float GetFloatField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x13552FC Offset: 0x13512FC VA: 0x13552FC
	public static double GetDoubleField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x1355340 Offset: 0x1351340 VA: 0x1355340
	public static void SetStringField(IntPtr obj, IntPtr fieldID, string val) { }

	// RVA: 0x1355394 Offset: 0x1351394 VA: 0x1355394
	public static void SetObjectField(IntPtr obj, IntPtr fieldID, IntPtr val) { }

	// RVA: 0x13553E8 Offset: 0x13513E8 VA: 0x13553E8
	public static void SetBooleanField(IntPtr obj, IntPtr fieldID, bool val) { }

	[Obsolete("AndroidJNI.SetByteField is obsolete. Use AndroidJNI.SetSByteField method instead")]
	// RVA: 0x135543C Offset: 0x135143C VA: 0x135543C
	public static void SetByteField(IntPtr obj, IntPtr fieldID, byte val) { }

	// RVA: 0x1355490 Offset: 0x1351490 VA: 0x1355490
	public static void SetSByteField(IntPtr obj, IntPtr fieldID, sbyte val) { }

	// RVA: 0x13554E4 Offset: 0x13514E4 VA: 0x13554E4
	public static void SetCharField(IntPtr obj, IntPtr fieldID, char val) { }

	// RVA: 0x1355538 Offset: 0x1351538 VA: 0x1355538
	public static void SetShortField(IntPtr obj, IntPtr fieldID, short val) { }

	// RVA: 0x135558C Offset: 0x135158C VA: 0x135558C
	public static void SetIntField(IntPtr obj, IntPtr fieldID, int val) { }

	// RVA: 0x13555E0 Offset: 0x13515E0 VA: 0x13555E0
	public static void SetLongField(IntPtr obj, IntPtr fieldID, long val) { }

	// RVA: 0x1355634 Offset: 0x1351634 VA: 0x1355634
	public static void SetFloatField(IntPtr obj, IntPtr fieldID, float val) { }

	// RVA: 0x1355688 Offset: 0x1351688 VA: 0x1355688
	public static void SetDoubleField(IntPtr obj, IntPtr fieldID, double val) { }

	// RVA: 0x13556DC Offset: 0x13516DC VA: 0x13556DC
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355758 Offset: 0x1351758 VA: 0x1355758
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13557F0 Offset: 0x13517F0 VA: 0x13557F0
	public static string CallStaticStringMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1355844 Offset: 0x1351844 VA: 0x1355844
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13558C0 Offset: 0x13518C0 VA: 0x13558C0
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355958 Offset: 0x1351958 VA: 0x1355958
	public static IntPtr CallStaticObjectMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x13559AC Offset: 0x13519AC VA: 0x13559AC
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355A28 Offset: 0x1351A28 VA: 0x1355A28
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355AC0 Offset: 0x1351AC0 VA: 0x1355AC0
	public static int CallStaticIntMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1355B14 Offset: 0x1351B14 VA: 0x1355B14
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355B94 Offset: 0x1351B94 VA: 0x1355B94
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355C30 Offset: 0x1351C30 VA: 0x1355C30
	public static bool CallStaticBooleanMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1355C84 Offset: 0x1351C84 VA: 0x1355C84
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355D00 Offset: 0x1351D00 VA: 0x1355D00
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355D98 Offset: 0x1351D98 VA: 0x1355D98
	public static short CallStaticShortMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	[Obsolete("AndroidJNI.CallStaticByteMethod is obsolete. Use AndroidJNI.CallStaticSByteMethod method instead")]
	// RVA: 0x1355DEC Offset: 0x1351DEC VA: 0x1355DEC
	public static byte CallStaticByteMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355DF0 Offset: 0x1351DF0 VA: 0x1355DF0
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355E6C Offset: 0x1351E6C VA: 0x1355E6C
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1355F04 Offset: 0x1351F04 VA: 0x1355F04
	public static sbyte CallStaticSByteMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1355F58 Offset: 0x1351F58 VA: 0x1355F58
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1355FD4 Offset: 0x1351FD4 VA: 0x1355FD4
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135606C Offset: 0x135206C VA: 0x135606C
	public static char CallStaticCharMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x13560C0 Offset: 0x13520C0 VA: 0x13560C0
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x135613C Offset: 0x135213C VA: 0x135613C
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13561D4 Offset: 0x13521D4 VA: 0x13561D4
	public static float CallStaticFloatMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1356228 Offset: 0x1352228 VA: 0x1356228
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x13562A4 Offset: 0x13522A4 VA: 0x13562A4
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135633C Offset: 0x135233C VA: 0x135633C
	public static double CallStaticDoubleMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1356390 Offset: 0x1352390 VA: 0x1356390
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x135640C Offset: 0x135240C VA: 0x135640C
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13564A4 Offset: 0x13524A4 VA: 0x13564A4
	public static long CallStaticLongMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x13564F8 Offset: 0x13524F8 VA: 0x13564F8
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1356574 Offset: 0x1352574 VA: 0x1356574
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135660C Offset: 0x135260C VA: 0x135660C
	public static void CallStaticVoidMethodUnsafe(IntPtr clazz, IntPtr methodID, jvalue* args) { }

	// RVA: 0x1356660 Offset: 0x1352660 VA: 0x1356660
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13566A4 Offset: 0x13526A4 VA: 0x13566A4
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13566E8 Offset: 0x13526E8 VA: 0x13566E8
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID) { }

	[Obsolete("AndroidJNI.GetStaticByteField is obsolete. Use AndroidJNI.GetStaticSByteField method instead")]
	// RVA: 0x135672C Offset: 0x135272C VA: 0x135672C
	public static byte GetStaticByteField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1356770 Offset: 0x1352770 VA: 0x1356770
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13567B4 Offset: 0x13527B4 VA: 0x13567B4
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13567F8 Offset: 0x13527F8 VA: 0x13567F8
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x135683C Offset: 0x135283C VA: 0x135683C
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1356880 Offset: 0x1352880 VA: 0x1356880
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13568C4 Offset: 0x13528C4 VA: 0x13568C4
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1356908 Offset: 0x1352908 VA: 0x1356908
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x135694C Offset: 0x135294C VA: 0x135694C
	public static void SetStaticStringField(IntPtr clazz, IntPtr fieldID, string val) { }

	// RVA: 0x13569A0 Offset: 0x13529A0 VA: 0x13569A0
	public static void SetStaticObjectField(IntPtr clazz, IntPtr fieldID, IntPtr val) { }

	// RVA: 0x13569F4 Offset: 0x13529F4 VA: 0x13569F4
	public static void SetStaticBooleanField(IntPtr clazz, IntPtr fieldID, bool val) { }

	[Obsolete("AndroidJNI.SetStaticByteField is obsolete. Use AndroidJNI.SetStaticSByteField method instead")]
	// RVA: 0x1356A48 Offset: 0x1352A48 VA: 0x1356A48
	public static void SetStaticByteField(IntPtr clazz, IntPtr fieldID, byte val) { }

	// RVA: 0x1356A9C Offset: 0x1352A9C VA: 0x1356A9C
	public static void SetStaticSByteField(IntPtr clazz, IntPtr fieldID, sbyte val) { }

	// RVA: 0x1356AF0 Offset: 0x1352AF0 VA: 0x1356AF0
	public static void SetStaticCharField(IntPtr clazz, IntPtr fieldID, char val) { }

	// RVA: 0x1356B44 Offset: 0x1352B44 VA: 0x1356B44
	public static void SetStaticShortField(IntPtr clazz, IntPtr fieldID, short val) { }

	// RVA: 0x1356B98 Offset: 0x1352B98 VA: 0x1356B98
	public static void SetStaticIntField(IntPtr clazz, IntPtr fieldID, int val) { }

	// RVA: 0x1356BEC Offset: 0x1352BEC VA: 0x1356BEC
	public static void SetStaticLongField(IntPtr clazz, IntPtr fieldID, long val) { }

	// RVA: 0x1356C40 Offset: 0x1352C40 VA: 0x1356C40
	public static void SetStaticFloatField(IntPtr clazz, IntPtr fieldID, float val) { }

	// RVA: 0x1356C94 Offset: 0x1352C94 VA: 0x1356C94
	public static void SetStaticDoubleField(IntPtr clazz, IntPtr fieldID, double val) { }

	// RVA: 0x1356CE8 Offset: 0x1352CE8 VA: 0x1356CE8
	private static IntPtr ConvertToBooleanArray(bool[] array) { }

	// RVA: 0x1356D24 Offset: 0x1352D24 VA: 0x1356D24
	public static IntPtr ToBooleanArray(bool[] array) { }

	[Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
	// RVA: 0x1356D68 Offset: 0x1352D68 VA: 0x1356D68
	public static IntPtr ToByteArray(byte[] array) { }

	// RVA: 0x1356DA4 Offset: 0x1352DA4 VA: 0x1356DA4
	public static IntPtr ToSByteArray(sbyte[] array) { }

	// RVA: 0x1356DF8 Offset: 0x1352DF8 VA: 0x1356DF8
	public static IntPtr ToSByteArray(sbyte* array, int length) { }

	// RVA: 0x1356E3C Offset: 0x1352E3C VA: 0x1356E3C
	public static IntPtr ToCharArray(char[] array) { }

	// RVA: 0x1356E90 Offset: 0x1352E90 VA: 0x1356E90
	public static IntPtr ToCharArray(char* array, int length) { }

	// RVA: 0x1356ED4 Offset: 0x1352ED4 VA: 0x1356ED4
	public static IntPtr ToShortArray(short[] array) { }

	// RVA: 0x1356F28 Offset: 0x1352F28 VA: 0x1356F28
	public static IntPtr ToShortArray(short* array, int length) { }

	// RVA: 0x1356F6C Offset: 0x1352F6C VA: 0x1356F6C
	public static IntPtr ToIntArray(int[] array) { }

	// RVA: 0x1356FC0 Offset: 0x1352FC0 VA: 0x1356FC0
	public static IntPtr ToIntArray(int* array, int length) { }

	// RVA: 0x1357004 Offset: 0x1353004 VA: 0x1357004
	public static IntPtr ToLongArray(long[] array) { }

	// RVA: 0x1357058 Offset: 0x1353058 VA: 0x1357058
	public static IntPtr ToLongArray(long* array, int length) { }

	// RVA: 0x135709C Offset: 0x135309C VA: 0x135709C
	public static IntPtr ToFloatArray(float[] array) { }

	// RVA: 0x13570F0 Offset: 0x13530F0 VA: 0x13570F0
	public static IntPtr ToFloatArray(float* array, int length) { }

	// RVA: 0x1357134 Offset: 0x1353134 VA: 0x1357134
	public static IntPtr ToDoubleArray(double[] array) { }

	// RVA: 0x1357188 Offset: 0x1353188 VA: 0x1357188
	public static IntPtr ToDoubleArray(double* array, int length) { }

	// RVA: 0x13571CC Offset: 0x13531CC VA: 0x13571CC
	public static IntPtr ToObjectArray(IntPtr* array, int length, IntPtr arrayClass) { }

	// RVA: 0x1357220 Offset: 0x1353220 VA: 0x1357220
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr arrayClass) { }

	// RVA: 0x1357284 Offset: 0x1353284 VA: 0x1357284
	public static IntPtr ToObjectArray(IntPtr[] array) { }

	// RVA: 0x135728C Offset: 0x135328C VA: 0x135728C
	public static bool[] FromBooleanArray(IntPtr array) { }

	[Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
	// RVA: 0x13572C8 Offset: 0x13532C8 VA: 0x13572C8
	public static byte[] FromByteArray(IntPtr array) { }

	// RVA: 0x1357304 Offset: 0x1353304 VA: 0x1357304
	public static sbyte[] FromSByteArray(IntPtr array) { }

	// RVA: 0x1357340 Offset: 0x1353340 VA: 0x1357340
	public static char[] FromCharArray(IntPtr array) { }

	// RVA: 0x135737C Offset: 0x135337C VA: 0x135737C
	public static short[] FromShortArray(IntPtr array) { }

	// RVA: 0x13573B8 Offset: 0x13533B8 VA: 0x13573B8
	public static int[] FromIntArray(IntPtr array) { }

	// RVA: 0x13573F4 Offset: 0x13533F4 VA: 0x13573F4
	public static long[] FromLongArray(IntPtr array) { }

	// RVA: 0x1357430 Offset: 0x1353430 VA: 0x1357430
	public static float[] FromFloatArray(IntPtr array) { }

	// RVA: 0x135746C Offset: 0x135346C VA: 0x135746C
	public static double[] FromDoubleArray(IntPtr array) { }

	// RVA: 0x13574A8 Offset: 0x13534A8 VA: 0x13574A8
	public static IntPtr[] FromObjectArray(IntPtr array) { }

	// RVA: 0x13574E4 Offset: 0x13534E4 VA: 0x13574E4
	public static int GetArrayLength(IntPtr array) { }

	// RVA: 0x1357520 Offset: 0x1353520 VA: 0x1357520
	public static IntPtr NewBooleanArray(int size) { }

	[Obsolete("AndroidJNI.NewByteArray is obsolete. Use AndroidJNI.NewSByteArray method instead")]
	// RVA: 0x135755C Offset: 0x135355C VA: 0x135755C
	public static IntPtr NewByteArray(int size) { }

	// RVA: 0x1357598 Offset: 0x1353598 VA: 0x1357598
	public static IntPtr NewSByteArray(int size) { }

	// RVA: 0x13575D4 Offset: 0x13535D4 VA: 0x13575D4
	public static IntPtr NewCharArray(int size) { }

	// RVA: 0x1357610 Offset: 0x1353610 VA: 0x1357610
	public static IntPtr NewShortArray(int size) { }

	// RVA: 0x135764C Offset: 0x135364C VA: 0x135764C
	public static IntPtr NewIntArray(int size) { }

	// RVA: 0x1357688 Offset: 0x1353688 VA: 0x1357688
	public static IntPtr NewLongArray(int size) { }

	// RVA: 0x13576C4 Offset: 0x13536C4 VA: 0x13576C4
	public static IntPtr NewFloatArray(int size) { }

	// RVA: 0x1357700 Offset: 0x1353700 VA: 0x1357700
	public static IntPtr NewDoubleArray(int size) { }

	// RVA: 0x135773C Offset: 0x135373C VA: 0x135773C
	public static IntPtr NewObjectArray(int size, IntPtr clazz, IntPtr obj) { }

	// RVA: 0x1357790 Offset: 0x1353790 VA: 0x1357790
	public static bool GetBooleanArrayElement(IntPtr array, int index) { }

	[Obsolete("AndroidJNI.GetByteArrayElement is obsolete. Use AndroidJNI.GetSByteArrayElement method instead")]
	// RVA: 0x13577D4 Offset: 0x13537D4 VA: 0x13577D4
	public static byte GetByteArrayElement(IntPtr array, int index) { }

	// RVA: 0x1357818 Offset: 0x1353818 VA: 0x1357818
	public static sbyte GetSByteArrayElement(IntPtr array, int index) { }

	// RVA: 0x135785C Offset: 0x135385C VA: 0x135785C
	public static char GetCharArrayElement(IntPtr array, int index) { }

	// RVA: 0x13578A0 Offset: 0x13538A0 VA: 0x13578A0
	public static short GetShortArrayElement(IntPtr array, int index) { }

	// RVA: 0x13578E4 Offset: 0x13538E4 VA: 0x13578E4
	public static int GetIntArrayElement(IntPtr array, int index) { }

	// RVA: 0x1357928 Offset: 0x1353928 VA: 0x1357928
	public static long GetLongArrayElement(IntPtr array, int index) { }

	// RVA: 0x135796C Offset: 0x135396C VA: 0x135796C
	public static float GetFloatArrayElement(IntPtr array, int index) { }

	// RVA: 0x13579B0 Offset: 0x13539B0 VA: 0x13579B0
	public static double GetDoubleArrayElement(IntPtr array, int index) { }

	// RVA: 0x13579F4 Offset: 0x13539F4 VA: 0x13579F4
	public static IntPtr GetObjectArrayElement(IntPtr array, int index) { }

	[Obsolete("AndroidJNI.SetBooleanArrayElement(IntPtr, int, byte) is obsolete. Use AndroidJNI.SetBooleanArrayElement(IntPtr, int, bool) method instead")]
	// RVA: 0x1357A38 Offset: 0x1353A38 VA: 0x1357A38
	public static void SetBooleanArrayElement(IntPtr array, int index, byte val) { }

	// RVA: 0x1357A90 Offset: 0x1353A90 VA: 0x1357A90
	public static void SetBooleanArrayElement(IntPtr array, int index, bool val) { }

	[Obsolete("AndroidJNI.SetByteArrayElement is obsolete. Use AndroidJNI.SetSByteArrayElement method instead")]
	// RVA: 0x1357AE4 Offset: 0x1353AE4 VA: 0x1357AE4
	public static void SetByteArrayElement(IntPtr array, int index, sbyte val) { }

	// RVA: 0x1357B38 Offset: 0x1353B38 VA: 0x1357B38
	public static void SetSByteArrayElement(IntPtr array, int index, sbyte val) { }

	// RVA: 0x1357B8C Offset: 0x1353B8C VA: 0x1357B8C
	public static void SetCharArrayElement(IntPtr array, int index, char val) { }

	// RVA: 0x1357BE0 Offset: 0x1353BE0 VA: 0x1357BE0
	public static void SetShortArrayElement(IntPtr array, int index, short val) { }

	// RVA: 0x1357C34 Offset: 0x1353C34 VA: 0x1357C34
	public static void SetIntArrayElement(IntPtr array, int index, int val) { }

	// RVA: 0x1357C88 Offset: 0x1353C88 VA: 0x1357C88
	public static void SetLongArrayElement(IntPtr array, int index, long val) { }

	// RVA: 0x1357CDC Offset: 0x1353CDC VA: 0x1357CDC
	public static void SetFloatArrayElement(IntPtr array, int index, float val) { }

	// RVA: 0x1357D30 Offset: 0x1353D30 VA: 0x1357D30
	public static void SetDoubleArrayElement(IntPtr array, int index, double val) { }

	// RVA: 0x1357D84 Offset: 0x1353D84 VA: 0x1357D84
	public static void SetObjectArrayElement(IntPtr array, int index, IntPtr obj) { }

	// RVA: 0x1357DD8 Offset: 0x1353DD8 VA: 0x1357DD8
	public static IntPtr NewDirectByteBuffer(byte* buffer, long capacity) { }

	// RVA: 0x1357E1C Offset: 0x1353E1C VA: 0x1357E1C
	public static IntPtr NewDirectByteBuffer(NativeArray<byte> buffer) { }

	// RVA: 0x1357E74 Offset: 0x1353E74 VA: 0x1357E74
	public static IntPtr NewDirectByteBuffer(NativeArray<sbyte> buffer) { }

	// RVA: -1 Offset: -1
	private static IntPtr NewDirectByteBufferFromNativeArray<T>(NativeArray<T> buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C908 Offset: 0xB68908 VA: 0xB6C908
	|-AndroidJNI.NewDirectByteBufferFromNativeArray<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x1357ECC Offset: 0x1353ECC VA: 0x1357ECC
	public static sbyte* GetDirectBufferAddress(IntPtr buffer) { }

	// RVA: 0x1357F08 Offset: 0x1353F08 VA: 0x1357F08
	public static long GetDirectBufferCapacity(IntPtr buffer) { }

	// RVA: -1 Offset: -1
	private static NativeArray<T> GetDirectBuffer<T>(IntPtr buffer) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6C7E0 Offset: 0xB687E0 VA: 0xB6C7E0
	|-AndroidJNI.GetDirectBuffer<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x1357F44 Offset: 0x1353F44 VA: 0x1357F44
	public static NativeArray<byte> GetDirectByteBuffer(IntPtr buffer) { }

	// RVA: 0x1357F8C Offset: 0x1353F8C VA: 0x1357F8C
	public static NativeArray<sbyte> GetDirectSByteBuffer(IntPtr buffer) { }

	// RVA: 0x1357FD4 Offset: 0x1353FD4 VA: 0x1357FD4
	public static int RegisterNatives(IntPtr clazz, JNINativeMethod[] methods) { }

	// RVA: 0x1358164 Offset: 0x1354164 VA: 0x1358164
	private static IntPtr RegisterNativesAllocate(int length) { }

	// RVA: 0x13581A0 Offset: 0x13541A0 VA: 0x13581A0
	private static void RegisterNativesSet(IntPtr natives, int idx, string name, string signature, IntPtr fnPtr) { }

	// RVA: 0x135820C Offset: 0x135420C VA: 0x135820C
	private static int RegisterNativesAndFree(IntPtr clazz, IntPtr natives, int n) { }

	// RVA: 0x1358260 Offset: 0x1354260 VA: 0x1358260
	public static int UnregisterNatives(IntPtr clazz) { }
}


// Namespace: UnityEngine
internal class AndroidJNISafe // TypeDefIndex: 6996
{
	// Methods

	// RVA: 0x135829C Offset: 0x135429C VA: 0x135829C
	public static void CheckException() { }

	// RVA: 0x13585E4 Offset: 0x13545E4 VA: 0x13585E4
	public static void QueueDeleteGlobalRef(IntPtr globalref) { }

	// RVA: 0x135863C Offset: 0x135463C VA: 0x135863C
	public static void DeleteWeakGlobalRef(IntPtr globalref) { }

	// RVA: 0x1358694 Offset: 0x1354694 VA: 0x1358694
	public static void DeleteLocalRef(IntPtr localref) { }

	// RVA: 0x13586EC Offset: 0x13546EC VA: 0x13586EC
	public static IntPtr NewString(string chars) { }

	// RVA: 0x135878C Offset: 0x135478C VA: 0x135878C
	public static string GetStringChars(IntPtr str) { }

	// RVA: 0x1352B94 Offset: 0x134EB94 VA: 0x1352B94
	public static IntPtr GetObjectClass(IntPtr ptr) { }

	// RVA: 0x1352688 Offset: 0x134E688 VA: 0x1352688
	public static IntPtr GetStaticMethodID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x1352C34 Offset: 0x134EC34 VA: 0x1352C34
	public static IntPtr GetMethodID(IntPtr obj, string name, string sig) { }

	// RVA: 0x135882C Offset: 0x135482C VA: 0x135882C
	public static IntPtr GetFieldID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x13588E4 Offset: 0x13548E4 VA: 0x13588E4
	public static IntPtr GetStaticFieldID(IntPtr clazz, string name, string sig) { }

	// RVA: 0x135899C Offset: 0x135499C VA: 0x135899C
	public static IntPtr FromReflectedMethod(IntPtr refMethod) { }

	// RVA: 0x13525E8 Offset: 0x134E5E8 VA: 0x13525E8
	public static IntPtr FindClass(string name) { }

	// RVA: 0x1358A3C Offset: 0x1354A3C VA: 0x1358A3C
	public static IntPtr NewObject(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1358AB4 Offset: 0x1354AB4 VA: 0x1358AB4
	public static void SetStaticObjectField(IntPtr clazz, IntPtr fieldID, IntPtr val) { }

	// RVA: 0x1358B70 Offset: 0x1354B70 VA: 0x1358B70
	public static void SetStaticStringField(IntPtr clazz, IntPtr fieldID, string val) { }

	// RVA: 0x1358C2C Offset: 0x1354C2C VA: 0x1358C2C
	public static void SetStaticCharField(IntPtr clazz, IntPtr fieldID, char val) { }

	// RVA: 0x1358CE8 Offset: 0x1354CE8 VA: 0x1358CE8
	public static void SetStaticDoubleField(IntPtr clazz, IntPtr fieldID, double val) { }

	// RVA: 0x1358DA4 Offset: 0x1354DA4 VA: 0x1358DA4
	public static void SetStaticFloatField(IntPtr clazz, IntPtr fieldID, float val) { }

	// RVA: 0x1358E60 Offset: 0x1354E60 VA: 0x1358E60
	public static void SetStaticLongField(IntPtr clazz, IntPtr fieldID, long val) { }

	// RVA: 0x1358F1C Offset: 0x1354F1C VA: 0x1358F1C
	public static void SetStaticShortField(IntPtr clazz, IntPtr fieldID, short val) { }

	// RVA: 0x1358FD8 Offset: 0x1354FD8 VA: 0x1358FD8
	public static void SetStaticSByteField(IntPtr clazz, IntPtr fieldID, sbyte val) { }

	// RVA: 0x1359094 Offset: 0x1355094 VA: 0x1359094
	public static void SetStaticBooleanField(IntPtr clazz, IntPtr fieldID, bool val) { }

	// RVA: 0x1359150 Offset: 0x1355150 VA: 0x1359150
	public static void SetStaticIntField(IntPtr clazz, IntPtr fieldID, int val) { }

	// RVA: 0x135920C Offset: 0x135520C VA: 0x135920C
	public static IntPtr GetStaticObjectField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13592B4 Offset: 0x13552B4 VA: 0x13592B4
	public static string GetStaticStringField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x135935C Offset: 0x135535C VA: 0x135935C
	public static char GetStaticCharField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1359404 Offset: 0x1355404 VA: 0x1359404
	public static double GetStaticDoubleField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13594B8 Offset: 0x13554B8 VA: 0x13594B8
	public static float GetStaticFloatField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x135956C Offset: 0x135556C VA: 0x135956C
	public static long GetStaticLongField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1359614 Offset: 0x1355614 VA: 0x1359614
	public static short GetStaticShortField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13596BC Offset: 0x13556BC VA: 0x13596BC
	public static sbyte GetStaticSByteField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x1359764 Offset: 0x1355764 VA: 0x1359764
	public static bool GetStaticBooleanField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x135980C Offset: 0x135580C VA: 0x135980C
	public static int GetStaticIntField(IntPtr clazz, IntPtr fieldID) { }

	// RVA: 0x13598B4 Offset: 0x13558B4 VA: 0x13598B4
	public static void CallStaticVoidMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135992C Offset: 0x135592C VA: 0x135992C
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1352740 Offset: 0x134E740 VA: 0x1352740
	public static IntPtr CallStaticObjectMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x13599A8 Offset: 0x13559A8 VA: 0x13599A8
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x1359A24 Offset: 0x1355A24 VA: 0x1359A24
	public static string CallStaticStringMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359A9C Offset: 0x1355A9C VA: 0x1359A9C
	public static char CallStaticCharMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359B14 Offset: 0x1355B14 VA: 0x1359B14
	public static double CallStaticDoubleMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359B98 Offset: 0x1355B98 VA: 0x1359B98
	public static float CallStaticFloatMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359C1C Offset: 0x1355C1C VA: 0x1359C1C
	public static long CallStaticLongMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359C94 Offset: 0x1355C94 VA: 0x1359C94
	public static short CallStaticShortMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359D0C Offset: 0x1355D0C VA: 0x1359D0C
	public static sbyte CallStaticSByteMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359D84 Offset: 0x1355D84 VA: 0x1359D84
	public static bool CallStaticBooleanMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359DFC Offset: 0x1355DFC VA: 0x1359DFC
	public static int CallStaticIntMethod(IntPtr clazz, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1359E74 Offset: 0x1355E74 VA: 0x1359E74
	public static void SetObjectField(IntPtr obj, IntPtr fieldID, IntPtr val) { }

	// RVA: 0x1359F30 Offset: 0x1355F30 VA: 0x1359F30
	public static void SetStringField(IntPtr obj, IntPtr fieldID, string val) { }

	// RVA: 0x1359FEC Offset: 0x1355FEC VA: 0x1359FEC
	public static void SetCharField(IntPtr obj, IntPtr fieldID, char val) { }

	// RVA: 0x135A0A8 Offset: 0x13560A8 VA: 0x135A0A8
	public static void SetDoubleField(IntPtr obj, IntPtr fieldID, double val) { }

	// RVA: 0x135A164 Offset: 0x1356164 VA: 0x135A164
	public static void SetFloatField(IntPtr obj, IntPtr fieldID, float val) { }

	// RVA: 0x135A220 Offset: 0x1356220 VA: 0x135A220
	public static void SetLongField(IntPtr obj, IntPtr fieldID, long val) { }

	// RVA: 0x135A2DC Offset: 0x13562DC VA: 0x135A2DC
	public static void SetShortField(IntPtr obj, IntPtr fieldID, short val) { }

	// RVA: 0x135A398 Offset: 0x1356398 VA: 0x135A398
	public static void SetSByteField(IntPtr obj, IntPtr fieldID, sbyte val) { }

	// RVA: 0x135A454 Offset: 0x1356454 VA: 0x135A454
	public static void SetBooleanField(IntPtr obj, IntPtr fieldID, bool val) { }

	// RVA: 0x135A510 Offset: 0x1356510 VA: 0x135A510
	public static void SetIntField(IntPtr obj, IntPtr fieldID, int val) { }

	// RVA: 0x135A5CC Offset: 0x13565CC VA: 0x135A5CC
	public static IntPtr GetObjectField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A674 Offset: 0x1356674 VA: 0x135A674
	public static string GetStringField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A71C Offset: 0x135671C VA: 0x135A71C
	public static char GetCharField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A7C4 Offset: 0x13567C4 VA: 0x135A7C4
	public static double GetDoubleField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A878 Offset: 0x1356878 VA: 0x135A878
	public static float GetFloatField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A92C Offset: 0x135692C VA: 0x135A92C
	public static long GetLongField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135A9D4 Offset: 0x13569D4 VA: 0x135A9D4
	public static short GetShortField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135AA7C Offset: 0x1356A7C VA: 0x135AA7C
	public static sbyte GetSByteField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135AB24 Offset: 0x1356B24 VA: 0x135AB24
	public static bool GetBooleanField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135ABCC Offset: 0x1356BCC VA: 0x135ABCC
	public static int GetIntField(IntPtr obj, IntPtr fieldID) { }

	// RVA: 0x135AC74 Offset: 0x1356C74 VA: 0x135AC74
	public static void CallVoidMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135ACEC Offset: 0x1356CEC VA: 0x135ACEC
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, jvalue[] args) { }

	// RVA: 0x135AD68 Offset: 0x1356D68 VA: 0x135AD68
	public static IntPtr CallObjectMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135ADE0 Offset: 0x1356DE0 VA: 0x135ADE0
	public static string CallStringMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135338C Offset: 0x134F38C VA: 0x135338C
	public static char CallCharMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1353280 Offset: 0x134F280 VA: 0x1353280
	public static double CallDoubleMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1353174 Offset: 0x134F174 VA: 0x1353174
	public static float CallFloatMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1353074 Offset: 0x134F074 VA: 0x1353074
	public static long CallLongMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1352E74 Offset: 0x134EE74 VA: 0x1352E74
	public static short CallShortMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1352D74 Offset: 0x134ED74 VA: 0x1352D74
	public static sbyte CallSByteMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1353490 Offset: 0x134F490 VA: 0x1353490
	public static bool CallBooleanMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x1352F74 Offset: 0x134EF74 VA: 0x1352F74
	public static int CallIntMethod(IntPtr obj, IntPtr methodID, Span<jvalue> args) { }

	// RVA: 0x135AE58 Offset: 0x1356E58 VA: 0x135AE58
	public static char[] FromCharArray(IntPtr array) { }

	// RVA: 0x135AEF8 Offset: 0x1356EF8 VA: 0x135AEF8
	public static double[] FromDoubleArray(IntPtr array) { }

	// RVA: 0x135AF98 Offset: 0x1356F98 VA: 0x135AF98
	public static float[] FromFloatArray(IntPtr array) { }

	// RVA: 0x135B038 Offset: 0x1357038 VA: 0x135B038
	public static long[] FromLongArray(IntPtr array) { }

	// RVA: 0x135B0D8 Offset: 0x13570D8 VA: 0x135B0D8
	public static short[] FromShortArray(IntPtr array) { }

	// RVA: 0x135B178 Offset: 0x1357178 VA: 0x135B178
	public static byte[] FromByteArray(IntPtr array) { }

	// RVA: 0x135B218 Offset: 0x1357218 VA: 0x135B218
	public static sbyte[] FromSByteArray(IntPtr array) { }

	// RVA: 0x135B2B8 Offset: 0x13572B8 VA: 0x135B2B8
	public static bool[] FromBooleanArray(IntPtr array) { }

	// RVA: 0x135B358 Offset: 0x1357358 VA: 0x135B358
	public static int[] FromIntArray(IntPtr array) { }

	// RVA: 0x135B3F8 Offset: 0x13573F8 VA: 0x135B3F8
	public static IntPtr ToObjectArray(IntPtr[] array, IntPtr type) { }

	// RVA: 0x135B470 Offset: 0x1357470 VA: 0x135B470
	public static IntPtr ToCharArray(char[] array) { }

	// RVA: 0x135B4E8 Offset: 0x13574E8 VA: 0x135B4E8
	public static IntPtr ToDoubleArray(double[] array) { }

	// RVA: 0x135B560 Offset: 0x1357560 VA: 0x135B560
	public static IntPtr ToFloatArray(float[] array) { }

	// RVA: 0x135B5D8 Offset: 0x13575D8 VA: 0x135B5D8
	public static IntPtr ToLongArray(long[] array) { }

	// RVA: 0x135B650 Offset: 0x1357650 VA: 0x135B650
	public static IntPtr ToShortArray(short[] array) { }

	// RVA: 0x135B6C8 Offset: 0x13576C8 VA: 0x135B6C8
	public static IntPtr ToByteArray(byte[] array) { }

	// RVA: 0x135B768 Offset: 0x1357768 VA: 0x135B768
	public static IntPtr ToSByteArray(sbyte[] array) { }

	// RVA: 0x135B7E0 Offset: 0x13577E0 VA: 0x135B7E0
	public static IntPtr ToBooleanArray(bool[] array) { }

	// RVA: 0x135B884 Offset: 0x1357884 VA: 0x135B884
	public static IntPtr ToIntArray(int[] array) { }

	// RVA: 0x135B8FC Offset: 0x13578FC VA: 0x135B8FC
	public static IntPtr GetObjectArrayElement(IntPtr array, int index) { }

	// RVA: 0x135B9A4 Offset: 0x13579A4 VA: 0x135B9A4
	public static int GetArrayLength(IntPtr array) { }
}


// Namespace: UnityEngine
public sealed class AndroidJavaRunnable : MulticastDelegate // TypeDefIndex: 6997
{
	// Methods

	// RVA: 0x135BA44 Offset: 0x1357A44 VA: 0x135BA44
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x135BACC Offset: 0x1357ACC VA: 0x135BACC Slot: 12
	public virtual void Invoke() { }
}


// Namespace: UnityEngine
public sealed class AndroidJavaException : Exception // TypeDefIndex: 6998
{
	// Fields
	private string mJavaStackTrace; // 0x90

	// Properties
	public override string StackTrace { get; }

	// Methods

	// RVA: 0x1358570 Offset: 0x1354570 VA: 0x1358570
	internal void .ctor(string message, string javaStackTrace) { }

	// RVA: 0x135BAE0 Offset: 0x1357AE0 VA: 0x135BAE0 Slot: 8
	public override string get_StackTrace() { }
}


// Namespace: UnityEngine
internal class GlobalJavaObjectRef // TypeDefIndex: 6999
{
	// Fields
	private bool m_disposed; // 0x10
	protected IntPtr m_jobject; // 0x18

	// Methods

	// RVA: 0x135BB04 Offset: 0x1357B04 VA: 0x135BB04
	public void .ctor(IntPtr jobject) { }

	// RVA: 0x135BB74 Offset: 0x1357B74 VA: 0x135BB74 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x135BC48 Offset: 0x1357C48 VA: 0x135BC48
	public static IntPtr op_Implicit(GlobalJavaObjectRef obj) { }

	// RVA: 0x135BC08 Offset: 0x1357C08 VA: 0x135BC08
	public void Dispose() { }
}


// Namespace: UnityEngine
internal class AndroidJavaRunnableProxy : AndroidJavaProxy // TypeDefIndex: 7000
{
	// Fields
	private AndroidJavaRunnable mRunnable; // 0x20

	// Methods

	// RVA: 0x135BC60 Offset: 0x1357C60 VA: 0x135BC60
	public void .ctor(AndroidJavaRunnable runnable) { }

	// RVA: 0x135BD60 Offset: 0x1357D60 VA: 0x135BD60
	public void run() { }

	// RVA: 0x135BD84 Offset: 0x1357D84 VA: 0x135BD84 Slot: 6
	public override IntPtr Invoke(string methodName, IntPtr javaArgs) { }
}


// Namespace: UnityEngine
public class AndroidJavaProxy // TypeDefIndex: 7001
{
	// Fields
	public readonly AndroidJavaClass javaInterface; // 0x10
	internal IntPtr proxyObject; // 0x18
	private static readonly GlobalJavaObjectRef s_JavaLangSystemClass; // 0x0
	private static readonly IntPtr s_HashCodeMethodID; // 0x8

	// Methods

	// RVA: 0x135BCE0 Offset: 0x1357CE0 VA: 0x135BCE0
	public void .ctor(string javaInterface) { }

	// RVA: 0x135C250 Offset: 0x1358250 VA: 0x135C250
	public void .ctor(AndroidJavaClass javaInterface) { }

	// RVA: 0x135C27C Offset: 0x135827C VA: 0x135C27C Slot: 1
	protected override void Finalize() { }

	// RVA: 0x135C314 Offset: 0x1358314 VA: 0x135C314 Slot: 4
	public virtual AndroidJavaObject Invoke(string methodName, object[] args) { }

	// RVA: 0x135D7D8 Offset: 0x13597D8 VA: 0x135D7D8 Slot: 5
	public virtual AndroidJavaObject Invoke(string methodName, AndroidJavaObject[] javaArgs) { }

	// RVA: 0x135BE44 Offset: 0x1357E44 VA: 0x135BE44 Slot: 6
	public virtual IntPtr Invoke(string methodName, IntPtr javaArgs) { }

	// RVA: 0x135E678 Offset: 0x135A678 VA: 0x135E678 Slot: 7
	public virtual bool equals(AndroidJavaObject obj) { }

	// RVA: 0x135E6D0 Offset: 0x135A6D0 VA: 0x135E6D0 Slot: 8
	public virtual int hashCode() { }

	// RVA: 0x135E91C Offset: 0x135A91C VA: 0x135E91C Slot: 9
	public virtual string toString() { }

	// RVA: 0x135E980 Offset: 0x135A980 VA: 0x135E980
	internal AndroidJavaObject GetProxyObject() { }

	// RVA: 0x135E824 Offset: 0x135A824 VA: 0x135E824
	internal IntPtr GetRawProxy() { }

	// RVA: 0x135E990 Offset: 0x135A990 VA: 0x135E990
	private static void .cctor() { }
}


// Namespace: UnityEngine
public class AndroidJavaObject : IDisposable // TypeDefIndex: 7002
{
	// Fields
	private static bool enableDebugPrints; // 0x0
	internal GlobalJavaObjectRef m_jobject; // 0x10
	internal GlobalJavaObjectRef m_jclass; // 0x18

	// Methods

	// RVA: 0x135EA88 Offset: 0x135AA88 VA: 0x135EA88
	public void .ctor(string className, string[] args) { }

	// RVA: 0x135EC34 Offset: 0x135AC34 VA: 0x135EC34
	public void .ctor(string className, AndroidJavaObject[] args) { }

	// RVA: 0x135ECE8 Offset: 0x135ACE8 VA: 0x135ECE8
	public void .ctor(string className, AndroidJavaClass[] args) { }

	// RVA: 0x135ED9C Offset: 0x135AD9C VA: 0x135ED9C
	public void .ctor(string className, AndroidJavaProxy[] args) { }

	// RVA: 0x135EE50 Offset: 0x135AE50 VA: 0x135EE50
	public void .ctor(string className, AndroidJavaRunnable[] args) { }

	// RVA: 0x135EF04 Offset: 0x135AF04 VA: 0x135EF04
	public void .ctor(string className, object[] args) { }

	// RVA: 0x135D6E0 Offset: 0x13596E0 VA: 0x135D6E0
	public void .ctor(IntPtr jobject) { }

	// RVA: 0x135EF38 Offset: 0x135AF38 VA: 0x135EF38
	public void .ctor(IntPtr clazz, IntPtr constructorID, object[] args) { }

	// RVA: 0x135E538 Offset: 0x135A538 VA: 0x135E538 Slot: 4
	public void Dispose() { }

	// RVA: -1 Offset: -1
	public void Call<T>(string methodName, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CE04 Offset: 0xB68E04 VA: 0xB6CE04
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void Call<T>(IntPtr methodID, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CD58 Offset: 0xB68D58 VA: 0xB6CD58
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135F1B4 Offset: 0x135B1B4 VA: 0x135F1B4
	public void Call(string methodName, object[] args) { }

	// RVA: 0x135F218 Offset: 0x135B218 VA: 0x135F218
	public void Call(IntPtr methodID, object[] args) { }

	// RVA: -1 Offset: -1
	public void CallStatic<T>(string methodName, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D454 Offset: 0xB69454 VA: 0xB6D454
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void CallStatic<T>(IntPtr methodID, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D3A8 Offset: 0xB693A8 VA: 0xB6D3A8
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135F3C4 Offset: 0x135B3C4 VA: 0x135F3C4
	public void CallStatic(string methodName, object[] args) { }

	// RVA: 0x135F428 Offset: 0x135B428 VA: 0x135F428
	public void CallStatic(IntPtr methodID, object[] args) { }

	// RVA: -1 Offset: -1
	public FieldType Get<FieldType>(string fieldName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DB00 Offset: 0xB69B00 VA: 0xB6DB00
	|-AndroidJavaObject.Get<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public FieldType Get<FieldType>(IntPtr fieldID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DA08 Offset: 0xB69A08 VA: 0xB6DA08
	|-AndroidJavaObject.Get<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void Set<FieldType>(string fieldName, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DEE4 Offset: 0xB69EE4 VA: 0xB6DEE4
	|-AndroidJavaObject.Set<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void Set<FieldType>(IntPtr fieldID, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DDE8 Offset: 0xB69DE8 VA: 0xB6DDE8
	|-AndroidJavaObject.Set<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public FieldType GetStatic<FieldType>(string fieldName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DCF0 Offset: 0xB69CF0 VA: 0xB6DCF0
	|-AndroidJavaObject.GetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public FieldType GetStatic<FieldType>(IntPtr fieldID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DBF8 Offset: 0xB69BF8 VA: 0xB6DBF8
	|-AndroidJavaObject.GetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void SetStatic<FieldType>(string fieldName, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6E0DC Offset: 0xB6A0DC VA: 0xB6E0DC
	|-AndroidJavaObject.SetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public void SetStatic<FieldType>(IntPtr fieldID, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6DFE0 Offset: 0xB69FE0 VA: 0xB6DFE0
	|-AndroidJavaObject.SetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135E660 Offset: 0x135A660 VA: 0x135E660
	public IntPtr GetRawObject() { }

	// RVA: 0x135F5EC Offset: 0x135B5EC VA: 0x135F5EC
	public IntPtr GetRawClass() { }

	// RVA: 0x135F624 Offset: 0x135B624 VA: 0x135F624
	public AndroidJavaObject CloneReference() { }

	// RVA: -1 Offset: -1
	public ReturnType Call<ReturnType, T>(string methodName, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D024 Offset: 0xB69024 VA: 0xB6D024
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType Call<ReturnType, T>(IntPtr methodID, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CEB0 Offset: 0xB68EB0 VA: 0xB6CEB0
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType Call<ReturnType>(string methodName, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CC50 Offset: 0xB68C50 VA: 0xB6CC50
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType Call<ReturnType>(IntPtr methodID, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6CB48 Offset: 0xB68B48 VA: 0xB6CB48
	|-AndroidJavaObject.Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType CallStatic<ReturnType, T>(string methodName, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D674 Offset: 0xB69674 VA: 0xB6D674
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType CallStatic<ReturnType, T>(IntPtr methodID, T[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D500 Offset: 0xB69500 VA: 0xB6D500
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType CallStatic<ReturnType>(string methodName, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D2A0 Offset: 0xB692A0 VA: 0xB6D2A0
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public ReturnType CallStatic<ReturnType>(IntPtr methodID, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D198 Offset: 0xB69198 VA: 0xB6D198
	|-AndroidJavaObject.CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135F834 Offset: 0x135B834 VA: 0x135F834
	protected void DebugPrint(string msg) { }

	// RVA: 0x135F8BC Offset: 0x135B8BC VA: 0x135F8BC
	protected void DebugPrint(string call, string methodName, string signature, object[] args) { }

	// RVA: 0x135EB44 Offset: 0x135AB44 VA: 0x135EB44
	private void _AndroidJavaObject(string className, object[] args) { }

	// RVA: 0x135EFC4 Offset: 0x135AFC4 VA: 0x135EFC4
	private void _AndroidJavaObject(IntPtr constructorID, object[] args) { }

	// RVA: 0x135EB3C Offset: 0x135AB3C VA: 0x135EB3C
	internal void .ctor() { }

	// RVA: 0x135FB54 Offset: 0x135BB54 VA: 0x135FB54 Slot: 1
	protected override void Finalize() { }

	// RVA: 0x135FBF4 Offset: 0x135BBF4 VA: 0x135FBF4 Slot: 5
	protected virtual void Dispose(bool disposing) { }

	// RVA: 0x135F1B8 Offset: 0x135B1B8 VA: 0x135F1B8
	protected void _Call(string methodName, object[] args) { }

	// RVA: 0x135F21C Offset: 0x135B21C VA: 0x135F21C
	protected void _Call(IntPtr methodID, object[] args) { }

	// RVA: -1 Offset: -1
	protected ReturnType _Call<ReturnType>(string methodName, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6F274 Offset: 0xB6B274 VA: 0xB6F274
	|-AndroidJavaObject._Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected ReturnType _Call<ReturnType>(IntPtr methodID, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6E1D8 Offset: 0xB6A1D8 VA: 0xB6E1D8
	|-AndroidJavaObject._Call<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected FieldType _Get<FieldType>(string fieldName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB71160 Offset: 0xB6D160 VA: 0xB71160
	|-AndroidJavaObject._Get<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected FieldType _Get<FieldType>(IntPtr fieldID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB70570 Offset: 0xB6C570 VA: 0xB70570
	|-AndroidJavaObject._Get<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected void _Set<FieldType>(string fieldName, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB72F2C Offset: 0xB6EF2C VA: 0xB72F2C
	|-AndroidJavaObject._Set<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected void _Set<FieldType>(IntPtr fieldID, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB71F88 Offset: 0xB6DF88 VA: 0xB71F88
	|-AndroidJavaObject._Set<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135F3C8 Offset: 0x135B3C8 VA: 0x135F3C8
	protected void _CallStatic(string methodName, object[] args) { }

	// RVA: 0x135F42C Offset: 0x135B42C VA: 0x135F42C
	protected void _CallStatic(IntPtr methodID, object[] args) { }

	// RVA: -1 Offset: -1
	protected ReturnType _CallStatic<ReturnType>(string methodName, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB70440 Offset: 0xB6C440 VA: 0xB70440
	|-AndroidJavaObject._CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected ReturnType _CallStatic<ReturnType>(IntPtr methodID, object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6F3A4 Offset: 0xB6B3A4 VA: 0xB6F3A4
	|-AndroidJavaObject._CallStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected FieldType _GetStatic<FieldType>(string fieldName) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB71E6C Offset: 0xB6DE6C VA: 0xB71E6C
	|-AndroidJavaObject._GetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected FieldType _GetStatic<FieldType>(IntPtr fieldID) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB7127C Offset: 0xB6D27C VA: 0xB7127C
	|-AndroidJavaObject._GetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected void _SetStatic<FieldType>(string fieldName, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB73FF8 Offset: 0xB6FFF8 VA: 0xB73FF8
	|-AndroidJavaObject._SetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	protected void _SetStatic<FieldType>(IntPtr fieldID, FieldType val) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB73054 Offset: 0xB6F054 VA: 0xB73054
	|-AndroidJavaObject._SetStatic<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135E5A4 Offset: 0x135A5A4 VA: 0x135E5A4
	internal static AndroidJavaObject AndroidJavaObjectDeleteLocalRef(IntPtr jobject) { }

	// RVA: 0x135FC24 Offset: 0x135BC24 VA: 0x135FC24
	internal static AndroidJavaClass AndroidJavaClassDeleteLocalRef(IntPtr jclass) { }

	// RVA: -1 Offset: -1
	internal static ReturnType FromJavaArrayDeleteLocalRef<ReturnType>(IntPtr jobject) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xB6D7E8 Offset: 0xB697E8 VA: 0xB6D7E8
	|-AndroidJavaObject.FromJavaArrayDeleteLocalRef<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x135F5D4 Offset: 0x135B5D4 VA: 0x135F5D4
	protected IntPtr _GetRawObject() { }

	// RVA: 0x135F608 Offset: 0x135B608 VA: 0x135F608
	protected IntPtr _GetRawClass() { }
}


// Namespace: UnityEngine
public class AndroidJavaClass : AndroidJavaObject // TypeDefIndex: 7003
{
	// Methods

	// RVA: 0x135C224 Offset: 0x1358224 VA: 0x135C224
	public void .ctor(string className) { }

	// RVA: 0x135FCE0 Offset: 0x135BCE0 VA: 0x135FCE0
	private void _AndroidJavaClass(string className) { }

	// RVA: 0x135F770 Offset: 0x135B770 VA: 0x135F770
	internal void .ctor(IntPtr jclass) { }
}


// Namespace: UnityEngine
internal class AndroidReflection // TypeDefIndex: 7004
{
	// Fields
	private static readonly GlobalJavaObjectRef s_ReflectionHelperClass; // 0x0
	private static readonly IntPtr s_ReflectionHelperGetConstructorID; // 0x8
	private static readonly IntPtr s_ReflectionHelperGetMethodID; // 0x10
	private static readonly IntPtr s_ReflectionHelperGetFieldID; // 0x18
	private static readonly IntPtr s_ReflectionHelperGetFieldSignature; // 0x20
	private static readonly IntPtr s_ReflectionHelperNewProxyInstance; // 0x28
	private static readonly IntPtr s_ReflectionHelperCeateInvocationError; // 0x30
	private static readonly IntPtr s_FieldGetDeclaringClass; // 0x38

	// Methods

	// RVA: 0x135FD9C Offset: 0x135BD9C VA: 0x135FD9C
	public static bool IsPrimitive(Type t) { }

	// RVA: 0x135FDB0 Offset: 0x135BDB0 VA: 0x135FDB0
	public static bool IsAssignableFrom(Type t, Type from) { }

	// RVA: 0x135FDD0 Offset: 0x135BDD0 VA: 0x135FDD0
	private static IntPtr GetStaticMethodID(string clazz, string methodName, string signature) { }

	// RVA: 0x135FE6C Offset: 0x135BE6C VA: 0x135FE6C
	private static IntPtr GetMethodID(string clazz, string methodName, string signature) { }

	// RVA: 0x135FF08 Offset: 0x135BF08 VA: 0x135FF08
	public static IntPtr GetConstructorMember(IntPtr jclass, string signature) { }

	// RVA: 0x1360090 Offset: 0x135C090 VA: 0x1360090
	public static IntPtr GetMethodMember(IntPtr jclass, string methodName, string signature, bool isStatic) { }

	// RVA: 0x136028C Offset: 0x135C28C VA: 0x136028C
	public static IntPtr GetFieldMember(IntPtr jclass, string fieldName, string signature, bool isStatic) { }

	// RVA: 0x1360488 Offset: 0x135C488 VA: 0x1360488
	public static IntPtr GetFieldClass(IntPtr field) { }

	// RVA: 0x13604EC Offset: 0x135C4EC VA: 0x13604EC
	public static string GetFieldSignature(IntPtr field) { }

	// RVA: 0x1360594 Offset: 0x135C594 VA: 0x1360594
	public static IntPtr NewProxyInstance(IntPtr player, IntPtr delegateHandle, IntPtr interfaze) { }

	// RVA: 0x135D5FC Offset: 0x13595FC VA: 0x135D5FC
	internal static IntPtr CreateInvocationError(Exception ex, bool methodNotFound) { }

	// RVA: 0x1360678 Offset: 0x135C678 VA: 0x1360678
	private static void .cctor() { }
}


// Namespace: UnityEngine
[UsedByNativeCode]
internal sealed class _AndroidJNIHelper // TypeDefIndex: 7005
{
	// Methods

	// RVA: 0x134FE54 Offset: 0x134BE54 VA: 0x134FE54
	public static IntPtr CreateJavaProxy(IntPtr player, IntPtr delegateHandle, AndroidJavaProxy proxy) { }

	// RVA: 0x134FCF8 Offset: 0x134BCF8 VA: 0x134FCF8
	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable) { }

	[RequiredByNativeCode]
	// RVA: 0x136091C Offset: 0x135C91C VA: 0x136091C
	public static IntPtr InvokeJavaProxyMethod(AndroidJavaProxy proxy, IntPtr jmethodName, IntPtr jargs) { }

	// RVA: 0x1350B40 Offset: 0x134CB40 VA: 0x1350B40
	public static void CreateJNIArgArray(object[] args, Span<jvalue> ret) { }

	// RVA: 0x1360A34 Offset: 0x135CA34 VA: 0x1360A34
	public static object UnboxArray(AndroidJavaObject obj) { }

	// RVA: 0x135D94C Offset: 0x135994C VA: 0x135D94C
	public static object Unbox(AndroidJavaObject obj) { }

	// RVA: 0x135CC48 Offset: 0x1358C48 VA: 0x135CC48
	public static AndroidJavaObject Box(object obj) { }

	// RVA: 0x135123C Offset: 0x134D23C VA: 0x135123C
	public static void DeleteJNIArgArray(object[] args, Span<jvalue> jniArgs) { }

	// RVA: 0x134FEE0 Offset: 0x134BEE0 VA: 0x134FEE0
	public static IntPtr ConvertToJNIArray(Array array) { }

	// RVA: -1 Offset: -1
	public static ArrayType ConvertFromJNIArray<ArrayType>(IntPtr array) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB1CD0 Offset: 0xBADCD0 VA: 0xBB1CD0
	|-_AndroidJNIHelper.ConvertFromJNIArray<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x13513B8 Offset: 0x134D3B8 VA: 0x13513B8
	public static IntPtr GetConstructorID(IntPtr jclass, object[] args) { }

	// RVA: 0x1351410 Offset: 0x134D410 VA: 0x1351410
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, object[] args, bool isStatic) { }

	// RVA: -1 Offset: -1
	public static IntPtr GetMethodID<ReturnType>(IntPtr jclass, string methodName, object[] args, bool isStatic) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB25EC Offset: 0xBAE5EC VA: 0xBB25EC
	|-_AndroidJNIHelper.GetMethodID<__Il2CppFullySharedGenericType>
	*/

	// RVA: -1 Offset: -1
	public static IntPtr GetFieldID<ReturnType>(IntPtr jclass, string fieldName, bool isStatic) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2554 Offset: 0xBAE554 VA: 0xBB2554
	|-_AndroidJNIHelper.GetFieldID<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x134F5A4 Offset: 0x134B5A4 VA: 0x134F5A4
	public static IntPtr GetConstructorID(IntPtr jclass, string signature) { }

	// RVA: 0x134F7D8 Offset: 0x134B7D8 VA: 0x134F7D8
	public static IntPtr GetMethodID(IntPtr jclass, string methodName, string signature, bool isStatic) { }

	// RVA: 0x13611E8 Offset: 0x135D1E8 VA: 0x13611E8
	private static IntPtr GetMethodIDFallback(IntPtr jclass, string methodName, string signature, bool isStatic) { }

	// RVA: 0x134FA1C Offset: 0x134BA1C VA: 0x134FA1C
	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, string signature, bool isStatic) { }

	// RVA: 0x135144C Offset: 0x134D44C VA: 0x135144C
	public static string GetSignature(object obj) { }

	// RVA: 0x135232C Offset: 0x134E32C VA: 0x135232C
	public static string GetSignature(object[] args) { }

	// RVA: -1 Offset: -1
	public static string GetSignature<ReturnType>(object[] args) { }
	/* GenericInstMethod :
	|
	|-RVA: 0xBB2650 Offset: 0xBAE650 VA: 0xBB2650
	|-_AndroidJNIHelper.GetSignature<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x136127C Offset: 0x135D27C VA: 0x136127C
	public void .ctor() { }
}


// Namespace: UnityEngine.Android
internal static class AndroidApp // TypeDefIndex: 7006
{
	// Fields
	private static AndroidJavaObject m_Context; // 0x0
	private static AndroidJavaObject m_Activity; // 0x8

	// Properties
	public static AndroidJavaObject Context { get; }
	public static AndroidJavaObject Activity { get; }
	public static IntPtr UnityPlayerRaw { get; }

	// Methods

	// RVA: 0x1361284 Offset: 0x135D284 VA: 0x1361284
	public static AndroidJavaObject get_Context() { }

	// RVA: 0x136152C Offset: 0x135D52C VA: 0x136152C
	public static AndroidJavaObject get_Activity() { }

	// RVA: 0x13612D0 Offset: 0x135D2D0 VA: 0x13612D0
	private static void AcquireContextAndActivity() { }

	// RVA: 0x134FE2C Offset: 0x134BE2C VA: 0x134FE2C
	public static IntPtr get_UnityPlayerRaw() { }
}


// Namespace: UnityEngine.Android
public enum AndroidAssetPackStatus // TypeDefIndex: 7007
{
	// Fields
	public int value__; // 0x0
	public const AndroidAssetPackStatus Unknown = 0;
	public const AndroidAssetPackStatus Pending = 1;
	public const AndroidAssetPackStatus Downloading = 2;
	public const AndroidAssetPackStatus Transferring = 3;
	public const AndroidAssetPackStatus Completed = 4;
	public const AndroidAssetPackStatus Failed = 5;
	public const AndroidAssetPackStatus Canceled = 6;
	public const AndroidAssetPackStatus WaitingForWifi = 7;
	public const AndroidAssetPackStatus NotInstalled = 8;
}


// Namespace: UnityEngine.Android
public enum AndroidAssetPackError // TypeDefIndex: 7008
{
	// Fields
	public int value__; // 0x0
	public const AndroidAssetPackError NoError = 0;
	public const AndroidAssetPackError AppUnavailable = -1;
	public const AndroidAssetPackError PackUnavailable = -2;
	public const AndroidAssetPackError InvalidRequest = -3;
	public const AndroidAssetPackError DownloadNotFound = -4;
	public const AndroidAssetPackError ApiNotAvailable = -5;
	public const AndroidAssetPackError NetworkError = -6;
	public const AndroidAssetPackError AccessDenied = -7;
	public const AndroidAssetPackError InsufficientStorage = -10;
	public const AndroidAssetPackError PlayStoreNotFound = -11;
	public const AndroidAssetPackError NetworkUnrestricted = -12;
	public const AndroidAssetPackError AppNotOwned = -13;
	public const AndroidAssetPackError InternalError = -100;
}


// Namespace: UnityEngine.Android
public class AndroidAssetPackInfo // TypeDefIndex: 7009
{
	// Fields
	[CompilerGenerated]
	private readonly string <name>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly AndroidAssetPackStatus <status>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly ulong <size>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly ulong <bytesDownloaded>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly float <transferProgress>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly AndroidAssetPackError <error>k__BackingField; // 0x34

	// Methods

	// RVA: 0x1361578 Offset: 0x135D578 VA: 0x1361578
	internal void .ctor(string name, AndroidAssetPackStatus status, ulong size, ulong bytesDownloaded, float transferProgress, AndroidAssetPackError error) { }
}


// Namespace: UnityEngine.Android
public class AndroidAssetPackState // TypeDefIndex: 7010
{
	// Fields
	[CompilerGenerated]
	private readonly string <name>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly AndroidAssetPackStatus <status>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly AndroidAssetPackError <error>k__BackingField; // 0x1C

	// Methods

	// RVA: 0x13615DC Offset: 0x135D5DC VA: 0x13615DC
	internal void .ctor(string name, AndroidAssetPackStatus status, AndroidAssetPackError error) { }
}


// Namespace: UnityEngine.Android
public class AndroidAssetPackUseMobileDataRequestResult // TypeDefIndex: 7011
{
	// Fields
	[CompilerGenerated]
	private readonly bool <allowed>k__BackingField; // 0x10

	// Methods

	// RVA: 0x1361618 Offset: 0x135D618 VA: 0x1361618
	internal void .ctor(bool allowed) { }
}


// Namespace: 
private class AndroidAssetPacks.AssetPackManagerDownloadStatusCallback : AndroidJavaProxy // TypeDefIndex: 7012
{
	// Fields
	private Action<AndroidAssetPackInfo> m_Callback; // 0x20
	private string[] m_AssetPacks; // 0x28

	// Methods

	// RVA: 0x13619F8 Offset: 0x135D9F8 VA: 0x13619F8
	public void .ctor(Action<AndroidAssetPackInfo> callback, string[] assetPacks) { }

	[Preserve]
	// RVA: 0x1361A7C Offset: 0x135DA7C VA: 0x1361A7C
	private void onStatusUpdate(string assetPackName, int assetPackStatus, long assetPackSize, long assetPackBytesDownloaded, int assetPackTransferProgress, int assetPackErrorCode) { }
}


// Namespace: 
private class AndroidAssetPacks.AssetPackManagerMobileDataConfirmationCallback : AndroidJavaProxy // TypeDefIndex: 7013
{
	// Fields
	private Action<AndroidAssetPackUseMobileDataRequestResult> m_Callback; // 0x20

	// Methods

	// RVA: 0x1361B88 Offset: 0x135DB88 VA: 0x1361B88
	public void .ctor(Action<AndroidAssetPackUseMobileDataRequestResult> callback) { }

	[Preserve]
	// RVA: 0x1361C08 Offset: 0x135DC08 VA: 0x1361C08
	private void onMobileDataConfirmationResult(bool allowed) { }
}


// Namespace: 
private class AndroidAssetPacks.AssetPackManagerStatusQueryCallback : AndroidJavaProxy // TypeDefIndex: 7014
{
	// Fields
	private Action<ulong, AndroidAssetPackState[]> m_Callback; // 0x20
	private List<string> m_AssetPackNames; // 0x28
	private List<AndroidAssetPackState> m_States; // 0x30
	private long m_Size; // 0x38

	// Methods

	// RVA: 0x1361C8C Offset: 0x135DC8C VA: 0x1361C8C
	public void .ctor(Action<ulong, AndroidAssetPackState[]> callback, string[] assetPacks) { }

	[Preserve]
	// RVA: 0x1361D7C Offset: 0x135DD7C VA: 0x1361D7C
	private void onStatusResult(long totalBytes, string[] assetPackNames, int[] assetPackStatuses, int[] assetPackErrorCodes) { }
}


// Namespace: UnityEngine.Android
public static class AndroidAssetPacks // TypeDefIndex: 7015
{
	// Fields
	private static AndroidJavaObject s_JavaPlayAssetDeliveryWrapper; // 0x0
	private static bool s_ApiMissing; // 0x8

	// Methods

	// RVA: 0x1361640 Offset: 0x135D640 VA: 0x1361640
	private static AndroidJavaObject GetAssetPackManager() { }
}


// Namespace: UnityEngine.Android
public class PermissionCallbacks : AndroidJavaProxy // TypeDefIndex: 7016
{
	// Fields
	[CompilerGenerated]
	private Action<string> PermissionGranted; // 0x20
	[CompilerGenerated]
	private Action<string> PermissionDenied; // 0x28
	[CompilerGenerated]
	private Action<string> PermissionDeniedAndDontAskAgain; // 0x30

	// Methods

	[CompilerGenerated]
	// RVA: 0x136208C Offset: 0x135E08C VA: 0x136208C
	public void add_PermissionGranted(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x136213C Offset: 0x135E13C VA: 0x136213C
	public void remove_PermissionGranted(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x13621EC Offset: 0x135E1EC VA: 0x13621EC
	public void add_PermissionDenied(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x136229C Offset: 0x135E29C VA: 0x136229C
	public void remove_PermissionDenied(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x136234C Offset: 0x135E34C VA: 0x136234C
	public void add_PermissionDeniedAndDontAskAgain(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x13623FC Offset: 0x135E3FC VA: 0x13623FC
	public void remove_PermissionDeniedAndDontAskAgain(Action<string> value) { }

	// RVA: 0x13624AC Offset: 0x135E4AC VA: 0x13624AC
	public void .ctor() { }

	[Preserve]
	// RVA: 0x1362518 Offset: 0x135E518 VA: 0x1362518
	private void onPermissionGranted(string permissionName) { }

	[Preserve]
	// RVA: 0x1362534 Offset: 0x135E534 VA: 0x1362534
	private void onPermissionDenied(string permissionName) { }

	[Preserve]
	// RVA: 0x1362550 Offset: 0x135E550 VA: 0x1362550
	private void onPermissionDeniedAndDontAskAgain(string permissionName) { }
}


// Namespace: UnityEngine.Android
public struct Permission // TypeDefIndex: 7017
{
	// Fields
	private static AndroidJavaObject m_UnityPermissions; // 0x0

	// Methods

	// RVA: 0x1362574 Offset: 0x135E574 VA: 0x1362574
	private static AndroidJavaObject GetUnityPermissions() { }

	// RVA: 0x1362624 Offset: 0x135E624 VA: 0x1362624
	public static bool HasUserAuthorizedPermission(string permission) { }

	// RVA: 0x136274C Offset: 0x135E74C VA: 0x136274C
	public static void RequestUserPermission(string permission) { }

	// RVA: 0x13627C4 Offset: 0x135E7C4 VA: 0x13627C4
	public static void RequestUserPermissions(string[] permissions, PermissionCallbacks callbacks) { }
}
