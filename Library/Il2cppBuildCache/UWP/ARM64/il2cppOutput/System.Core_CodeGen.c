#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000018 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000020 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
extern void Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415 (void);
// 0x00000021 System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::RangeIterator(System.Int32,System.Int32)
extern void Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A (void);
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<RangeIterator>d__115::.ctor(System.Int32)
extern void U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161 (void);
// 0x0000008B System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.IDisposable.Dispose()
extern void U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40 (void);
// 0x0000008C System.Boolean System.Linq.Enumerable/<RangeIterator>d__115::MoveNext()
extern void U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE (void);
// 0x0000008D System.Int32 System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerator<System.Int32>.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646 (void);
// 0x0000008E System.Void System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.Reset()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059 (void);
// 0x0000008F System.Object System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerator.get_Current()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680 (void);
// 0x00000090 System.Collections.Generic.IEnumerator`1<System.Int32> System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94 (void);
// 0x00000091 System.Collections.IEnumerator System.Linq.Enumerable/<RangeIterator>d__115::System.Collections.IEnumerable.GetEnumerator()
extern void U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B (void);
// 0x00000092 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000093 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000094 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000095 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000097 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000098 System.Void System.Linq.Set`1::Resize()
// 0x00000099 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000009A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A1 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A2 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A3 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A4 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A5 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A6 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A8 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A9 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AE System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AF System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B0 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B6 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B8 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B9 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BA System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BB System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BC System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BD System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C7 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C8 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CB System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CC T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CD System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CE System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[206] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Range_mA545670D76B68795D0126AC84B994E2AD66E2415,
	Enumerable_RangeIterator_m8BC9AE9DF66A6AB3D05D8F7B55D65539133C984A,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CRangeIteratorU3Ed__115__ctor_m3B8C9ADCE5DD64A09B124BD33754D2032A129161,
	U3CRangeIteratorU3Ed__115_System_IDisposable_Dispose_m309B1CA342B62F07D81D8B0FD41FA270E49AEA40,
	U3CRangeIteratorU3Ed__115_MoveNext_m52450B0FF0EA2386F02F97A26B86EEDFB6F428DE,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m23A5F7D49A4221419AE2C01531FEC54669A78646,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_Reset_mD099802F41E0B4017B1775F7A0F7A0C3EAE5C059,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerator_get_Current_mC98C2271FCDACABA4C52610AB5E5A98C08DF2680,
	U3CRangeIteratorU3Ed__115_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mF58B1118E0E226A7EC3F79DC9BF2ECF19E9A9B94,
	U3CRangeIteratorU3Ed__115_System_Collections_IEnumerable_GetEnumerator_m2FC1ECA81BE4003BFABCDE8654160C8BAD39BC9B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[206] = 
{
	8273,
	8273,
	8596,
	8596,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7454,
	7454,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	8127,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4588,
	5763,
	5693,
	5579,
	5763,
	5629,
	5629,
	5629,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[67] = 
{
	{ 0x02000004, { 105, 4 } },
	{ 0x02000005, { 109, 9 } },
	{ 0x02000006, { 120, 7 } },
	{ 0x02000007, { 129, 10 } },
	{ 0x02000008, { 141, 11 } },
	{ 0x02000009, { 155, 9 } },
	{ 0x0200000A, { 167, 12 } },
	{ 0x0200000B, { 182, 1 } },
	{ 0x0200000C, { 183, 2 } },
	{ 0x0200000D, { 185, 12 } },
	{ 0x0200000E, { 197, 8 } },
	{ 0x0200000F, { 205, 11 } },
	{ 0x02000010, { 216, 12 } },
	{ 0x02000011, { 228, 12 } },
	{ 0x02000013, { 240, 2 } },
	{ 0x02000015, { 242, 8 } },
	{ 0x02000017, { 250, 3 } },
	{ 0x02000018, { 255, 5 } },
	{ 0x02000019, { 260, 7 } },
	{ 0x0200001A, { 267, 3 } },
	{ 0x0200001B, { 270, 7 } },
	{ 0x0200001C, { 277, 4 } },
	{ 0x0200001D, { 281, 23 } },
	{ 0x0200001F, { 304, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 1 } },
	{ 0x06000017, { 51, 5 } },
	{ 0x06000018, { 56, 3 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 4 } },
	{ 0x0600001B, { 65, 4 } },
	{ 0x0600001C, { 69, 3 } },
	{ 0x0600001D, { 72, 4 } },
	{ 0x0600001E, { 76, 3 } },
	{ 0x0600001F, { 79, 3 } },
	{ 0x06000022, { 82, 1 } },
	{ 0x06000023, { 83, 1 } },
	{ 0x06000024, { 84, 3 } },
	{ 0x06000025, { 87, 3 } },
	{ 0x06000026, { 90, 2 } },
	{ 0x06000027, { 92, 3 } },
	{ 0x06000028, { 95, 2 } },
	{ 0x06000029, { 97, 5 } },
	{ 0x0600002A, { 102, 3 } },
	{ 0x0600003B, { 118, 2 } },
	{ 0x06000040, { 127, 2 } },
	{ 0x06000045, { 139, 2 } },
	{ 0x0600004B, { 152, 3 } },
	{ 0x06000050, { 164, 3 } },
	{ 0x06000055, { 179, 3 } },
	{ 0x0600009D, { 253, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 7845 },
	{ (Il2CppRGCTXDataType)3, 29988 },
	{ (Il2CppRGCTXDataType)2, 12844 },
	{ (Il2CppRGCTXDataType)2, 11849 },
	{ (Il2CppRGCTXDataType)3, 52798 },
	{ (Il2CppRGCTXDataType)2, 8655 },
	{ (Il2CppRGCTXDataType)2, 11897 },
	{ (Il2CppRGCTXDataType)3, 52882 },
	{ (Il2CppRGCTXDataType)2, 11861 },
	{ (Il2CppRGCTXDataType)3, 52815 },
	{ (Il2CppRGCTXDataType)2, 7846 },
	{ (Il2CppRGCTXDataType)3, 29989 },
	{ (Il2CppRGCTXDataType)2, 12876 },
	{ (Il2CppRGCTXDataType)2, 11909 },
	{ (Il2CppRGCTXDataType)3, 52899 },
	{ (Il2CppRGCTXDataType)2, 8682 },
	{ (Il2CppRGCTXDataType)2, 11975 },
	{ (Il2CppRGCTXDataType)3, 53299 },
	{ (Il2CppRGCTXDataType)2, 11942 },
	{ (Il2CppRGCTXDataType)3, 53081 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)3, 242 },
	{ (Il2CppRGCTXDataType)3, 243 },
	{ (Il2CppRGCTXDataType)2, 4608 },
	{ (Il2CppRGCTXDataType)3, 19069 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)3, 266 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)2, 4625 },
	{ (Il2CppRGCTXDataType)3, 19078 },
	{ (Il2CppRGCTXDataType)3, 59364 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 531 },
	{ (Il2CppRGCTXDataType)3, 59382 },
	{ (Il2CppRGCTXDataType)2, 1457 },
	{ (Il2CppRGCTXDataType)3, 581 },
	{ (Il2CppRGCTXDataType)2, 9558 },
	{ (Il2CppRGCTXDataType)3, 41862 },
	{ (Il2CppRGCTXDataType)2, 9559 },
	{ (Il2CppRGCTXDataType)3, 41863 },
	{ (Il2CppRGCTXDataType)3, 24943 },
	{ (Il2CppRGCTXDataType)3, 59273 },
	{ (Il2CppRGCTXDataType)2, 1405 },
	{ (Il2CppRGCTXDataType)3, 377 },
	{ (Il2CppRGCTXDataType)3, 59438 },
	{ (Il2CppRGCTXDataType)2, 1461 },
	{ (Il2CppRGCTXDataType)3, 613 },
	{ (Il2CppRGCTXDataType)3, 59298 },
	{ (Il2CppRGCTXDataType)2, 1439 },
	{ (Il2CppRGCTXDataType)3, 503 },
	{ (Il2CppRGCTXDataType)3, 59371 },
	{ (Il2CppRGCTXDataType)3, 17507 },
	{ (Il2CppRGCTXDataType)2, 4346 },
	{ (Il2CppRGCTXDataType)2, 5245 },
	{ (Il2CppRGCTXDataType)2, 5597 },
	{ (Il2CppRGCTXDataType)2, 5867 },
	{ (Il2CppRGCTXDataType)2, 1874 },
	{ (Il2CppRGCTXDataType)3, 3947 },
	{ (Il2CppRGCTXDataType)3, 3948 },
	{ (Il2CppRGCTXDataType)2, 8656 },
	{ (Il2CppRGCTXDataType)3, 32384 },
	{ (Il2CppRGCTXDataType)2, 6918 },
	{ (Il2CppRGCTXDataType)2, 4992 },
	{ (Il2CppRGCTXDataType)2, 5260 },
	{ (Il2CppRGCTXDataType)2, 5600 },
	{ (Il2CppRGCTXDataType)2, 6919 },
	{ (Il2CppRGCTXDataType)2, 4993 },
	{ (Il2CppRGCTXDataType)2, 5261 },
	{ (Il2CppRGCTXDataType)2, 5601 },
	{ (Il2CppRGCTXDataType)2, 5262 },
	{ (Il2CppRGCTXDataType)2, 5602 },
	{ (Il2CppRGCTXDataType)3, 19071 },
	{ (Il2CppRGCTXDataType)2, 6920 },
	{ (Il2CppRGCTXDataType)2, 4994 },
	{ (Il2CppRGCTXDataType)2, 5263 },
	{ (Il2CppRGCTXDataType)2, 5603 },
	{ (Il2CppRGCTXDataType)2, 5264 },
	{ (Il2CppRGCTXDataType)2, 5604 },
	{ (Il2CppRGCTXDataType)3, 19072 },
	{ (Il2CppRGCTXDataType)2, 6917 },
	{ (Il2CppRGCTXDataType)2, 5259 },
	{ (Il2CppRGCTXDataType)2, 5599 },
	{ (Il2CppRGCTXDataType)2, 3220 },
	{ (Il2CppRGCTXDataType)2, 5240 },
	{ (Il2CppRGCTXDataType)2, 5241 },
	{ (Il2CppRGCTXDataType)2, 5595 },
	{ (Il2CppRGCTXDataType)3, 19068 },
	{ (Il2CppRGCTXDataType)2, 5239 },
	{ (Il2CppRGCTXDataType)2, 5594 },
	{ (Il2CppRGCTXDataType)3, 19067 },
	{ (Il2CppRGCTXDataType)2, 4991 },
	{ (Il2CppRGCTXDataType)2, 5257 },
	{ (Il2CppRGCTXDataType)2, 5258 },
	{ (Il2CppRGCTXDataType)2, 5598 },
	{ (Il2CppRGCTXDataType)3, 19070 },
	{ (Il2CppRGCTXDataType)2, 4990 },
	{ (Il2CppRGCTXDataType)3, 59244 },
	{ (Il2CppRGCTXDataType)3, 17506 },
	{ (Il2CppRGCTXDataType)2, 4345 },
	{ (Il2CppRGCTXDataType)2, 5243 },
	{ (Il2CppRGCTXDataType)2, 5596 },
	{ (Il2CppRGCTXDataType)2, 5866 },
	{ (Il2CppRGCTXDataType)2, 5290 },
	{ (Il2CppRGCTXDataType)2, 5610 },
	{ (Il2CppRGCTXDataType)3, 19533 },
	{ (Il2CppRGCTXDataType)3, 29990 },
	{ (Il2CppRGCTXDataType)3, 29992 },
	{ (Il2CppRGCTXDataType)2, 1014 },
	{ (Il2CppRGCTXDataType)3, 29991 },
	{ (Il2CppRGCTXDataType)3, 30000 },
	{ (Il2CppRGCTXDataType)2, 7849 },
	{ (Il2CppRGCTXDataType)2, 11862 },
	{ (Il2CppRGCTXDataType)3, 52816 },
	{ (Il2CppRGCTXDataType)3, 30001 },
	{ (Il2CppRGCTXDataType)2, 5358 },
	{ (Il2CppRGCTXDataType)2, 5666 },
	{ (Il2CppRGCTXDataType)3, 19087 },
	{ (Il2CppRGCTXDataType)3, 59168 },
	{ (Il2CppRGCTXDataType)2, 11943 },
	{ (Il2CppRGCTXDataType)3, 53082 },
	{ (Il2CppRGCTXDataType)3, 29993 },
	{ (Il2CppRGCTXDataType)2, 7848 },
	{ (Il2CppRGCTXDataType)2, 11850 },
	{ (Il2CppRGCTXDataType)3, 52799 },
	{ (Il2CppRGCTXDataType)3, 19086 },
	{ (Il2CppRGCTXDataType)3, 29994 },
	{ (Il2CppRGCTXDataType)3, 59167 },
	{ (Il2CppRGCTXDataType)2, 11910 },
	{ (Il2CppRGCTXDataType)3, 52900 },
	{ (Il2CppRGCTXDataType)3, 30007 },
	{ (Il2CppRGCTXDataType)2, 7850 },
	{ (Il2CppRGCTXDataType)2, 11898 },
	{ (Il2CppRGCTXDataType)3, 52883 },
	{ (Il2CppRGCTXDataType)3, 32455 },
	{ (Il2CppRGCTXDataType)3, 15133 },
	{ (Il2CppRGCTXDataType)3, 19088 },
	{ (Il2CppRGCTXDataType)3, 15132 },
	{ (Il2CppRGCTXDataType)3, 30008 },
	{ (Il2CppRGCTXDataType)3, 59169 },
	{ (Il2CppRGCTXDataType)2, 11976 },
	{ (Il2CppRGCTXDataType)3, 53300 },
	{ (Il2CppRGCTXDataType)3, 30021 },
	{ (Il2CppRGCTXDataType)2, 7852 },
	{ (Il2CppRGCTXDataType)2, 11945 },
	{ (Il2CppRGCTXDataType)3, 53084 },
	{ (Il2CppRGCTXDataType)3, 30022 },
	{ (Il2CppRGCTXDataType)2, 5361 },
	{ (Il2CppRGCTXDataType)2, 5669 },
	{ (Il2CppRGCTXDataType)3, 19092 },
	{ (Il2CppRGCTXDataType)3, 19091 },
	{ (Il2CppRGCTXDataType)2, 11864 },
	{ (Il2CppRGCTXDataType)3, 52818 },
	{ (Il2CppRGCTXDataType)3, 59182 },
	{ (Il2CppRGCTXDataType)2, 11944 },
	{ (Il2CppRGCTXDataType)3, 53083 },
	{ (Il2CppRGCTXDataType)3, 30014 },
	{ (Il2CppRGCTXDataType)2, 7851 },
	{ (Il2CppRGCTXDataType)2, 11912 },
	{ (Il2CppRGCTXDataType)3, 52902 },
	{ (Il2CppRGCTXDataType)3, 19090 },
	{ (Il2CppRGCTXDataType)3, 19089 },
	{ (Il2CppRGCTXDataType)3, 30015 },
	{ (Il2CppRGCTXDataType)2, 11863 },
	{ (Il2CppRGCTXDataType)3, 52817 },
	{ (Il2CppRGCTXDataType)3, 59181 },
	{ (Il2CppRGCTXDataType)2, 11911 },
	{ (Il2CppRGCTXDataType)3, 52901 },
	{ (Il2CppRGCTXDataType)3, 30028 },
	{ (Il2CppRGCTXDataType)2, 7853 },
	{ (Il2CppRGCTXDataType)2, 11978 },
	{ (Il2CppRGCTXDataType)3, 53302 },
	{ (Il2CppRGCTXDataType)3, 32456 },
	{ (Il2CppRGCTXDataType)3, 15135 },
	{ (Il2CppRGCTXDataType)3, 19094 },
	{ (Il2CppRGCTXDataType)3, 19093 },
	{ (Il2CppRGCTXDataType)3, 15134 },
	{ (Il2CppRGCTXDataType)3, 30029 },
	{ (Il2CppRGCTXDataType)2, 11865 },
	{ (Il2CppRGCTXDataType)3, 52819 },
	{ (Il2CppRGCTXDataType)3, 59183 },
	{ (Il2CppRGCTXDataType)2, 11977 },
	{ (Il2CppRGCTXDataType)3, 53301 },
	{ (Il2CppRGCTXDataType)3, 19083 },
	{ (Il2CppRGCTXDataType)3, 19084 },
	{ (Il2CppRGCTXDataType)3, 19095 },
	{ (Il2CppRGCTXDataType)3, 534 },
	{ (Il2CppRGCTXDataType)3, 533 },
	{ (Il2CppRGCTXDataType)2, 5347 },
	{ (Il2CppRGCTXDataType)2, 5658 },
	{ (Il2CppRGCTXDataType)3, 19085 },
	{ (Il2CppRGCTXDataType)2, 5384 },
	{ (Il2CppRGCTXDataType)2, 5701 },
	{ (Il2CppRGCTXDataType)3, 536 },
	{ (Il2CppRGCTXDataType)2, 1267 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)3, 532 },
	{ (Il2CppRGCTXDataType)3, 535 },
	{ (Il2CppRGCTXDataType)3, 583 },
	{ (Il2CppRGCTXDataType)2, 5350 },
	{ (Il2CppRGCTXDataType)2, 5660 },
	{ (Il2CppRGCTXDataType)3, 585 },
	{ (Il2CppRGCTXDataType)2, 1010 },
	{ (Il2CppRGCTXDataType)2, 1458 },
	{ (Il2CppRGCTXDataType)3, 582 },
	{ (Il2CppRGCTXDataType)3, 584 },
	{ (Il2CppRGCTXDataType)3, 379 },
	{ (Il2CppRGCTXDataType)2, 10874 },
	{ (Il2CppRGCTXDataType)3, 48304 },
	{ (Il2CppRGCTXDataType)2, 5341 },
	{ (Il2CppRGCTXDataType)2, 5654 },
	{ (Il2CppRGCTXDataType)3, 48305 },
	{ (Il2CppRGCTXDataType)3, 381 },
	{ (Il2CppRGCTXDataType)2, 1005 },
	{ (Il2CppRGCTXDataType)2, 1406 },
	{ (Il2CppRGCTXDataType)3, 378 },
	{ (Il2CppRGCTXDataType)3, 380 },
	{ (Il2CppRGCTXDataType)3, 615 },
	{ (Il2CppRGCTXDataType)3, 616 },
	{ (Il2CppRGCTXDataType)2, 10878 },
	{ (Il2CppRGCTXDataType)3, 48309 },
	{ (Il2CppRGCTXDataType)2, 5353 },
	{ (Il2CppRGCTXDataType)2, 5662 },
	{ (Il2CppRGCTXDataType)3, 48310 },
	{ (Il2CppRGCTXDataType)3, 618 },
	{ (Il2CppRGCTXDataType)2, 1012 },
	{ (Il2CppRGCTXDataType)2, 1462 },
	{ (Il2CppRGCTXDataType)3, 614 },
	{ (Il2CppRGCTXDataType)3, 617 },
	{ (Il2CppRGCTXDataType)3, 505 },
	{ (Il2CppRGCTXDataType)2, 10876 },
	{ (Il2CppRGCTXDataType)3, 48306 },
	{ (Il2CppRGCTXDataType)2, 5344 },
	{ (Il2CppRGCTXDataType)2, 5656 },
	{ (Il2CppRGCTXDataType)3, 48307 },
	{ (Il2CppRGCTXDataType)3, 48308 },
	{ (Il2CppRGCTXDataType)3, 507 },
	{ (Il2CppRGCTXDataType)2, 1007 },
	{ (Il2CppRGCTXDataType)2, 1440 },
	{ (Il2CppRGCTXDataType)3, 504 },
	{ (Il2CppRGCTXDataType)3, 506 },
	{ (Il2CppRGCTXDataType)2, 12898 },
	{ (Il2CppRGCTXDataType)2, 3221 },
	{ (Il2CppRGCTXDataType)3, 17547 },
	{ (Il2CppRGCTXDataType)2, 4362 },
	{ (Il2CppRGCTXDataType)2, 13409 },
	{ (Il2CppRGCTXDataType)3, 48301 },
	{ (Il2CppRGCTXDataType)3, 48302 },
	{ (Il2CppRGCTXDataType)2, 5884 },
	{ (Il2CppRGCTXDataType)3, 48303 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)2, 1410 },
	{ (Il2CppRGCTXDataType)3, 398 },
	{ (Il2CppRGCTXDataType)3, 41837 },
	{ (Il2CppRGCTXDataType)2, 9560 },
	{ (Il2CppRGCTXDataType)3, 41864 },
	{ (Il2CppRGCTXDataType)2, 1875 },
	{ (Il2CppRGCTXDataType)3, 3949 },
	{ (Il2CppRGCTXDataType)3, 41843 },
	{ (Il2CppRGCTXDataType)3, 15074 },
	{ (Il2CppRGCTXDataType)2, 1052 },
	{ (Il2CppRGCTXDataType)3, 41838 },
	{ (Il2CppRGCTXDataType)2, 9555 },
	{ (Il2CppRGCTXDataType)3, 4394 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)2, 3432 },
	{ (Il2CppRGCTXDataType)3, 15092 },
	{ (Il2CppRGCTXDataType)3, 41839 },
	{ (Il2CppRGCTXDataType)3, 15069 },
	{ (Il2CppRGCTXDataType)3, 15070 },
	{ (Il2CppRGCTXDataType)3, 15068 },
	{ (Il2CppRGCTXDataType)3, 15071 },
	{ (Il2CppRGCTXDataType)2, 3428 },
	{ (Il2CppRGCTXDataType)2, 12959 },
	{ (Il2CppRGCTXDataType)3, 19081 },
	{ (Il2CppRGCTXDataType)3, 15073 },
	{ (Il2CppRGCTXDataType)2, 5165 },
	{ (Il2CppRGCTXDataType)3, 15072 },
	{ (Il2CppRGCTXDataType)2, 5002 },
	{ (Il2CppRGCTXDataType)2, 12887 },
	{ (Il2CppRGCTXDataType)2, 5295 },
	{ (Il2CppRGCTXDataType)2, 5614 },
	{ (Il2CppRGCTXDataType)3, 17526 },
	{ (Il2CppRGCTXDataType)2, 4355 },
	{ (Il2CppRGCTXDataType)3, 20267 },
	{ (Il2CppRGCTXDataType)3, 20268 },
	{ (Il2CppRGCTXDataType)3, 20273 },
	{ (Il2CppRGCTXDataType)2, 5878 },
	{ (Il2CppRGCTXDataType)3, 20270 },
	{ (Il2CppRGCTXDataType)3, 60682 },
	{ (Il2CppRGCTXDataType)2, 3436 },
	{ (Il2CppRGCTXDataType)3, 15122 },
	{ (Il2CppRGCTXDataType)1, 5156 },
	{ (Il2CppRGCTXDataType)2, 12904 },
	{ (Il2CppRGCTXDataType)3, 20269 },
	{ (Il2CppRGCTXDataType)1, 12904 },
	{ (Il2CppRGCTXDataType)1, 5878 },
	{ (Il2CppRGCTXDataType)2, 13407 },
	{ (Il2CppRGCTXDataType)2, 12904 },
	{ (Il2CppRGCTXDataType)2, 5302 },
	{ (Il2CppRGCTXDataType)2, 5619 },
	{ (Il2CppRGCTXDataType)3, 20274 },
	{ (Il2CppRGCTXDataType)3, 20272 },
	{ (Il2CppRGCTXDataType)3, 20271 },
	{ (Il2CppRGCTXDataType)2, 752 },
	{ (Il2CppRGCTXDataType)3, 15136 },
	{ (Il2CppRGCTXDataType)2, 1024 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	206,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	67,
	s_rgctxIndices,
	306,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
