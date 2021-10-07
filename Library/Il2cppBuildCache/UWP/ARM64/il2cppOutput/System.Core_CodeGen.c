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
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000089 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000008A System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000008B System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000008C System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x0000008D System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000008E System.Void System.Linq.Set`1::Resize()
// 0x0000008F System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000090 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000091 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000092 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000094 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000095 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000096 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000097 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000098 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000099 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000009A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000009B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000009E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000009F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A0 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A1 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A2 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A3 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000A4 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000A5 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000A6 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000AB System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000AC System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000AD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000AE System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000AF System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B0 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000B1 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000B2 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000B3 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000B6 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000B7 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000BD System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000BE System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000C2 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000C3 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[196] = 
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
static const int32_t s_InvokerIndices[196] = 
{
	7325,
	7325,
	7601,
	7601,
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
	7205,
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
	{ 0x02000012, { 240, 2 } },
	{ 0x02000014, { 242, 8 } },
	{ 0x02000016, { 250, 3 } },
	{ 0x02000017, { 255, 5 } },
	{ 0x02000018, { 260, 7 } },
	{ 0x02000019, { 267, 3 } },
	{ 0x0200001A, { 270, 7 } },
	{ 0x0200001B, { 277, 4 } },
	{ 0x0200001C, { 281, 23 } },
	{ 0x0200001E, { 304, 2 } },
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
	{ 0x06000020, { 82, 1 } },
	{ 0x06000021, { 83, 1 } },
	{ 0x06000022, { 84, 3 } },
	{ 0x06000023, { 87, 3 } },
	{ 0x06000024, { 90, 2 } },
	{ 0x06000025, { 92, 3 } },
	{ 0x06000026, { 95, 2 } },
	{ 0x06000027, { 97, 5 } },
	{ 0x06000028, { 102, 3 } },
	{ 0x06000039, { 118, 2 } },
	{ 0x0600003E, { 127, 2 } },
	{ 0x06000043, { 139, 2 } },
	{ 0x06000049, { 152, 3 } },
	{ 0x0600004E, { 164, 3 } },
	{ 0x06000053, { 179, 3 } },
	{ 0x06000093, { 253, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[306] = 
{
	{ (Il2CppRGCTXDataType)2, 7432 },
	{ (Il2CppRGCTXDataType)3, 28007 },
	{ (Il2CppRGCTXDataType)2, 12002 },
	{ (Il2CppRGCTXDataType)2, 11150 },
	{ (Il2CppRGCTXDataType)3, 48980 },
	{ (Il2CppRGCTXDataType)2, 8195 },
	{ (Il2CppRGCTXDataType)2, 11186 },
	{ (Il2CppRGCTXDataType)3, 49032 },
	{ (Il2CppRGCTXDataType)2, 11162 },
	{ (Il2CppRGCTXDataType)3, 48997 },
	{ (Il2CppRGCTXDataType)2, 7433 },
	{ (Il2CppRGCTXDataType)3, 28008 },
	{ (Il2CppRGCTXDataType)2, 12034 },
	{ (Il2CppRGCTXDataType)2, 11198 },
	{ (Il2CppRGCTXDataType)3, 49049 },
	{ (Il2CppRGCTXDataType)2, 8222 },
	{ (Il2CppRGCTXDataType)2, 11240 },
	{ (Il2CppRGCTXDataType)3, 49325 },
	{ (Il2CppRGCTXDataType)2, 11219 },
	{ (Il2CppRGCTXDataType)3, 49175 },
	{ (Il2CppRGCTXDataType)2, 1344 },
	{ (Il2CppRGCTXDataType)3, 206 },
	{ (Il2CppRGCTXDataType)3, 207 },
	{ (Il2CppRGCTXDataType)2, 4350 },
	{ (Il2CppRGCTXDataType)3, 17726 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)3, 218 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)2, 4367 },
	{ (Il2CppRGCTXDataType)3, 17735 },
	{ (Il2CppRGCTXDataType)3, 54882 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)3, 439 },
	{ (Il2CppRGCTXDataType)3, 54900 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 482 },
	{ (Il2CppRGCTXDataType)2, 9037 },
	{ (Il2CppRGCTXDataType)3, 38751 },
	{ (Il2CppRGCTXDataType)2, 9038 },
	{ (Il2CppRGCTXDataType)3, 38752 },
	{ (Il2CppRGCTXDataType)3, 23196 },
	{ (Il2CppRGCTXDataType)3, 54806 },
	{ (Il2CppRGCTXDataType)2, 1348 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)3, 54946 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)3, 514 },
	{ (Il2CppRGCTXDataType)3, 54830 },
	{ (Il2CppRGCTXDataType)2, 1380 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)3, 54889 },
	{ (Il2CppRGCTXDataType)3, 16231 },
	{ (Il2CppRGCTXDataType)2, 4089 },
	{ (Il2CppRGCTXDataType)2, 4908 },
	{ (Il2CppRGCTXDataType)2, 5255 },
	{ (Il2CppRGCTXDataType)2, 5518 },
	{ (Il2CppRGCTXDataType)2, 1755 },
	{ (Il2CppRGCTXDataType)3, 3460 },
	{ (Il2CppRGCTXDataType)3, 3461 },
	{ (Il2CppRGCTXDataType)2, 8196 },
	{ (Il2CppRGCTXDataType)3, 30256 },
	{ (Il2CppRGCTXDataType)2, 6513 },
	{ (Il2CppRGCTXDataType)2, 4663 },
	{ (Il2CppRGCTXDataType)2, 4923 },
	{ (Il2CppRGCTXDataType)2, 5258 },
	{ (Il2CppRGCTXDataType)2, 6514 },
	{ (Il2CppRGCTXDataType)2, 4664 },
	{ (Il2CppRGCTXDataType)2, 4924 },
	{ (Il2CppRGCTXDataType)2, 5259 },
	{ (Il2CppRGCTXDataType)2, 4925 },
	{ (Il2CppRGCTXDataType)2, 5260 },
	{ (Il2CppRGCTXDataType)3, 17728 },
	{ (Il2CppRGCTXDataType)2, 6515 },
	{ (Il2CppRGCTXDataType)2, 4665 },
	{ (Il2CppRGCTXDataType)2, 4926 },
	{ (Il2CppRGCTXDataType)2, 5261 },
	{ (Il2CppRGCTXDataType)2, 4927 },
	{ (Il2CppRGCTXDataType)2, 5262 },
	{ (Il2CppRGCTXDataType)3, 17729 },
	{ (Il2CppRGCTXDataType)2, 6512 },
	{ (Il2CppRGCTXDataType)2, 4922 },
	{ (Il2CppRGCTXDataType)2, 5257 },
	{ (Il2CppRGCTXDataType)2, 3024 },
	{ (Il2CppRGCTXDataType)2, 4903 },
	{ (Il2CppRGCTXDataType)2, 4904 },
	{ (Il2CppRGCTXDataType)2, 5253 },
	{ (Il2CppRGCTXDataType)3, 17725 },
	{ (Il2CppRGCTXDataType)2, 4902 },
	{ (Il2CppRGCTXDataType)2, 5252 },
	{ (Il2CppRGCTXDataType)3, 17724 },
	{ (Il2CppRGCTXDataType)2, 4662 },
	{ (Il2CppRGCTXDataType)2, 4920 },
	{ (Il2CppRGCTXDataType)2, 4921 },
	{ (Il2CppRGCTXDataType)2, 5256 },
	{ (Il2CppRGCTXDataType)3, 17727 },
	{ (Il2CppRGCTXDataType)2, 4661 },
	{ (Il2CppRGCTXDataType)3, 54778 },
	{ (Il2CppRGCTXDataType)3, 16230 },
	{ (Il2CppRGCTXDataType)2, 4088 },
	{ (Il2CppRGCTXDataType)2, 4906 },
	{ (Il2CppRGCTXDataType)2, 5254 },
	{ (Il2CppRGCTXDataType)2, 5517 },
	{ (Il2CppRGCTXDataType)2, 4953 },
	{ (Il2CppRGCTXDataType)2, 5268 },
	{ (Il2CppRGCTXDataType)3, 18054 },
	{ (Il2CppRGCTXDataType)3, 28009 },
	{ (Il2CppRGCTXDataType)3, 28011 },
	{ (Il2CppRGCTXDataType)2, 968 },
	{ (Il2CppRGCTXDataType)3, 28010 },
	{ (Il2CppRGCTXDataType)3, 28019 },
	{ (Il2CppRGCTXDataType)2, 7436 },
	{ (Il2CppRGCTXDataType)2, 11163 },
	{ (Il2CppRGCTXDataType)3, 48998 },
	{ (Il2CppRGCTXDataType)3, 28020 },
	{ (Il2CppRGCTXDataType)2, 5020 },
	{ (Il2CppRGCTXDataType)2, 5322 },
	{ (Il2CppRGCTXDataType)3, 17743 },
	{ (Il2CppRGCTXDataType)3, 54720 },
	{ (Il2CppRGCTXDataType)2, 11220 },
	{ (Il2CppRGCTXDataType)3, 49176 },
	{ (Il2CppRGCTXDataType)3, 28012 },
	{ (Il2CppRGCTXDataType)2, 7435 },
	{ (Il2CppRGCTXDataType)2, 11151 },
	{ (Il2CppRGCTXDataType)3, 48981 },
	{ (Il2CppRGCTXDataType)3, 17742 },
	{ (Il2CppRGCTXDataType)3, 28013 },
	{ (Il2CppRGCTXDataType)3, 54719 },
	{ (Il2CppRGCTXDataType)2, 11199 },
	{ (Il2CppRGCTXDataType)3, 49050 },
	{ (Il2CppRGCTXDataType)3, 28026 },
	{ (Il2CppRGCTXDataType)2, 7437 },
	{ (Il2CppRGCTXDataType)2, 11187 },
	{ (Il2CppRGCTXDataType)3, 49033 },
	{ (Il2CppRGCTXDataType)3, 30326 },
	{ (Il2CppRGCTXDataType)3, 14038 },
	{ (Il2CppRGCTXDataType)3, 17744 },
	{ (Il2CppRGCTXDataType)3, 14037 },
	{ (Il2CppRGCTXDataType)3, 28027 },
	{ (Il2CppRGCTXDataType)3, 54721 },
	{ (Il2CppRGCTXDataType)2, 11241 },
	{ (Il2CppRGCTXDataType)3, 49326 },
	{ (Il2CppRGCTXDataType)3, 28040 },
	{ (Il2CppRGCTXDataType)2, 7439 },
	{ (Il2CppRGCTXDataType)2, 11222 },
	{ (Il2CppRGCTXDataType)3, 49178 },
	{ (Il2CppRGCTXDataType)3, 28041 },
	{ (Il2CppRGCTXDataType)2, 5023 },
	{ (Il2CppRGCTXDataType)2, 5325 },
	{ (Il2CppRGCTXDataType)3, 17748 },
	{ (Il2CppRGCTXDataType)3, 17747 },
	{ (Il2CppRGCTXDataType)2, 11165 },
	{ (Il2CppRGCTXDataType)3, 49000 },
	{ (Il2CppRGCTXDataType)3, 54728 },
	{ (Il2CppRGCTXDataType)2, 11221 },
	{ (Il2CppRGCTXDataType)3, 49177 },
	{ (Il2CppRGCTXDataType)3, 28033 },
	{ (Il2CppRGCTXDataType)2, 7438 },
	{ (Il2CppRGCTXDataType)2, 11201 },
	{ (Il2CppRGCTXDataType)3, 49052 },
	{ (Il2CppRGCTXDataType)3, 17746 },
	{ (Il2CppRGCTXDataType)3, 17745 },
	{ (Il2CppRGCTXDataType)3, 28034 },
	{ (Il2CppRGCTXDataType)2, 11164 },
	{ (Il2CppRGCTXDataType)3, 48999 },
	{ (Il2CppRGCTXDataType)3, 54727 },
	{ (Il2CppRGCTXDataType)2, 11200 },
	{ (Il2CppRGCTXDataType)3, 49051 },
	{ (Il2CppRGCTXDataType)3, 28047 },
	{ (Il2CppRGCTXDataType)2, 7440 },
	{ (Il2CppRGCTXDataType)2, 11243 },
	{ (Il2CppRGCTXDataType)3, 49328 },
	{ (Il2CppRGCTXDataType)3, 30327 },
	{ (Il2CppRGCTXDataType)3, 14040 },
	{ (Il2CppRGCTXDataType)3, 17750 },
	{ (Il2CppRGCTXDataType)3, 17749 },
	{ (Il2CppRGCTXDataType)3, 14039 },
	{ (Il2CppRGCTXDataType)3, 28048 },
	{ (Il2CppRGCTXDataType)2, 11166 },
	{ (Il2CppRGCTXDataType)3, 49001 },
	{ (Il2CppRGCTXDataType)3, 54729 },
	{ (Il2CppRGCTXDataType)2, 11242 },
	{ (Il2CppRGCTXDataType)3, 49327 },
	{ (Il2CppRGCTXDataType)3, 17739 },
	{ (Il2CppRGCTXDataType)3, 17740 },
	{ (Il2CppRGCTXDataType)3, 17751 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)3, 441 },
	{ (Il2CppRGCTXDataType)2, 5009 },
	{ (Il2CppRGCTXDataType)2, 5314 },
	{ (Il2CppRGCTXDataType)3, 17741 },
	{ (Il2CppRGCTXDataType)2, 5046 },
	{ (Il2CppRGCTXDataType)2, 5357 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)2, 1214 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)3, 440 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 484 },
	{ (Il2CppRGCTXDataType)2, 5012 },
	{ (Il2CppRGCTXDataType)2, 5316 },
	{ (Il2CppRGCTXDataType)3, 486 },
	{ (Il2CppRGCTXDataType)2, 964 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 483 },
	{ (Il2CppRGCTXDataType)3, 485 },
	{ (Il2CppRGCTXDataType)3, 307 },
	{ (Il2CppRGCTXDataType)2, 10261 },
	{ (Il2CppRGCTXDataType)3, 44805 },
	{ (Il2CppRGCTXDataType)2, 5003 },
	{ (Il2CppRGCTXDataType)2, 5310 },
	{ (Il2CppRGCTXDataType)3, 44806 },
	{ (Il2CppRGCTXDataType)3, 309 },
	{ (Il2CppRGCTXDataType)2, 959 },
	{ (Il2CppRGCTXDataType)2, 1349 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)3, 308 },
	{ (Il2CppRGCTXDataType)3, 516 },
	{ (Il2CppRGCTXDataType)3, 517 },
	{ (Il2CppRGCTXDataType)2, 10265 },
	{ (Il2CppRGCTXDataType)3, 44810 },
	{ (Il2CppRGCTXDataType)2, 5015 },
	{ (Il2CppRGCTXDataType)2, 5318 },
	{ (Il2CppRGCTXDataType)3, 44811 },
	{ (Il2CppRGCTXDataType)3, 519 },
	{ (Il2CppRGCTXDataType)2, 966 },
	{ (Il2CppRGCTXDataType)2, 1403 },
	{ (Il2CppRGCTXDataType)3, 515 },
	{ (Il2CppRGCTXDataType)3, 518 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 10263 },
	{ (Il2CppRGCTXDataType)3, 44807 },
	{ (Il2CppRGCTXDataType)2, 5006 },
	{ (Il2CppRGCTXDataType)2, 5312 },
	{ (Il2CppRGCTXDataType)3, 44808 },
	{ (Il2CppRGCTXDataType)3, 44809 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)2, 961 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)2, 12055 },
	{ (Il2CppRGCTXDataType)2, 3025 },
	{ (Il2CppRGCTXDataType)3, 16271 },
	{ (Il2CppRGCTXDataType)2, 4105 },
	{ (Il2CppRGCTXDataType)2, 12538 },
	{ (Il2CppRGCTXDataType)3, 44802 },
	{ (Il2CppRGCTXDataType)3, 44803 },
	{ (Il2CppRGCTXDataType)2, 5535 },
	{ (Il2CppRGCTXDataType)3, 44804 },
	{ (Il2CppRGCTXDataType)2, 848 },
	{ (Il2CppRGCTXDataType)2, 1353 },
	{ (Il2CppRGCTXDataType)3, 326 },
	{ (Il2CppRGCTXDataType)3, 38726 },
	{ (Il2CppRGCTXDataType)2, 9039 },
	{ (Il2CppRGCTXDataType)3, 38753 },
	{ (Il2CppRGCTXDataType)2, 1756 },
	{ (Il2CppRGCTXDataType)3, 3462 },
	{ (Il2CppRGCTXDataType)3, 38732 },
	{ (Il2CppRGCTXDataType)3, 13979 },
	{ (Il2CppRGCTXDataType)2, 1004 },
	{ (Il2CppRGCTXDataType)3, 38727 },
	{ (Il2CppRGCTXDataType)2, 9034 },
	{ (Il2CppRGCTXDataType)3, 3895 },
	{ (Il2CppRGCTXDataType)2, 1780 },
	{ (Il2CppRGCTXDataType)2, 3228 },
	{ (Il2CppRGCTXDataType)3, 13997 },
	{ (Il2CppRGCTXDataType)3, 38728 },
	{ (Il2CppRGCTXDataType)3, 13974 },
	{ (Il2CppRGCTXDataType)3, 13975 },
	{ (Il2CppRGCTXDataType)3, 13973 },
	{ (Il2CppRGCTXDataType)3, 13976 },
	{ (Il2CppRGCTXDataType)2, 3224 },
	{ (Il2CppRGCTXDataType)2, 12114 },
	{ (Il2CppRGCTXDataType)3, 17737 },
	{ (Il2CppRGCTXDataType)3, 13978 },
	{ (Il2CppRGCTXDataType)2, 4830 },
	{ (Il2CppRGCTXDataType)3, 13977 },
	{ (Il2CppRGCTXDataType)2, 4671 },
	{ (Il2CppRGCTXDataType)2, 12044 },
	{ (Il2CppRGCTXDataType)2, 4957 },
	{ (Il2CppRGCTXDataType)2, 5271 },
	{ (Il2CppRGCTXDataType)3, 16250 },
	{ (Il2CppRGCTXDataType)2, 4098 },
	{ (Il2CppRGCTXDataType)3, 18768 },
	{ (Il2CppRGCTXDataType)3, 18769 },
	{ (Il2CppRGCTXDataType)3, 18774 },
	{ (Il2CppRGCTXDataType)2, 5529 },
	{ (Il2CppRGCTXDataType)3, 18771 },
	{ (Il2CppRGCTXDataType)3, 56094 },
	{ (Il2CppRGCTXDataType)2, 3232 },
	{ (Il2CppRGCTXDataType)3, 14027 },
	{ (Il2CppRGCTXDataType)1, 4821 },
	{ (Il2CppRGCTXDataType)2, 12061 },
	{ (Il2CppRGCTXDataType)3, 18770 },
	{ (Il2CppRGCTXDataType)1, 12061 },
	{ (Il2CppRGCTXDataType)1, 5529 },
	{ (Il2CppRGCTXDataType)2, 12536 },
	{ (Il2CppRGCTXDataType)2, 12061 },
	{ (Il2CppRGCTXDataType)2, 4964 },
	{ (Il2CppRGCTXDataType)2, 5276 },
	{ (Il2CppRGCTXDataType)3, 18775 },
	{ (Il2CppRGCTXDataType)3, 18773 },
	{ (Il2CppRGCTXDataType)3, 18772 },
	{ (Il2CppRGCTXDataType)2, 717 },
	{ (Il2CppRGCTXDataType)3, 14041 },
	{ (Il2CppRGCTXDataType)2, 978 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	196,
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
