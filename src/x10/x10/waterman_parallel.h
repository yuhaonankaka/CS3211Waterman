#ifndef __X10_WATERMAN_PARALLEL_H
#define __X10_WATERMAN_PARALLEL_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace lang { 
class Char;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_2;
} } 
namespace x10 { namespace io { 
class File;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace io { 
template<class TPMGL(T)> class ReaderIterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace io { 
class IOException;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
class Date;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { 

class waterman_parallel_Strings {
  public:
    static ::x10::lang::String sl__3346;
    static ::x10::lang::String sl__3345;
    static ::x10::lang::String sl__3350;
    static ::x10::lang::String sl__3347;
    static ::x10::lang::String sl__3349;
    static ::x10::lang::String sl__3354;
    static ::x10::lang::String sl__3356;
    static ::x10::lang::String sl__3357;
    static ::x10::lang::String sl__3348;
    static ::x10::lang::String sl__3351;
    static ::x10::lang::String sl__3353;
    static ::x10::lang::String sl__3355;
    static ::x10::lang::String sl__3352;
};

class waterman_parallel : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    /* Static field: FMGL(letterValue) */
    static ::x10::util::HashMap<x10_char, x10_long>* FMGL(letterValue);
    static void FMGL(letterValue__do_init)();
    static void FMGL(letterValue__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(letterValue__status);
    static ::x10::lang::CheckedThrowable* FMGL(letterValue__exception);
    static ::x10::util::HashMap<x10_char, x10_long>* FMGL(letterValue__get)();
    
    x10_long FMGL(A);
    
    x10_long FMGL(B);
    
    static ::x10::array::Array_2<x10_long>* buildBlosum(::x10::lang::String* inputBlosum);
    static x10_long penalty(x10_long a, x10_long b, x10_long l);
    static ::x10::lang::Rail< x10_char >* parseInput(::x10::lang::String* inputPath);
    static x10_long thread_task(x10_long r, ::x10::array::Array_2<x10_long>* scoreMatrix,
                                ::x10::lang::Rail< x10_char >* input1,
                                ::x10::lang::Rail< x10_char >* input2,
                                ::x10::array::Array_2<x10_long>* blosum,
                                ::x10::array::Array_1<x10_long>* current_position,
                                x10_long A, x10_long B);
    static ::x10::array::Array_2<x10_long>* calculate(::x10::array::Array_2<x10_long>* scoreMatrix,
                                                      ::x10::lang::Rail< x10_char >* input1,
                                                      ::x10::lang::Rail< x10_char >* input2,
                                                      ::x10::array::Array_2<x10_long>* blosum,
                                                      x10_long A,
                                                      x10_long B);
    static x10_long maxRowScore(x10_long row, x10_long column,
                                ::x10::array::Array_2<x10_long>* scoreMatrix,
                                x10_long A, x10_long B);
    static x10_long maxColumnScore(x10_long row, x10_long column,
                                   ::x10::array::Array_2<x10_long>* scoreMatrix,
                                   x10_long A, x10_long B);
    static ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >*
      traceback(::x10::array::Array_2<x10_long>* scoreMatrix,
                ::x10::lang::Rail< x10_char >* input1, ::x10::lang::Rail< x10_char >* input2,
                ::x10::array::Array_2<x10_long>* blosum);
    static void printResult(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* seq,
                            ::x10::lang::Rail< x10_char >* input1,
                            ::x10::lang::Rail< x10_char >* input2,
                            x10_long maxScore);
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::x10::waterman_parallel* x10__waterman_parallel____this__x10__waterman_parallel(
      );
    void _constructor();
    
    static ::x10::waterman_parallel* _make();
    
    virtual void __fieldInitializers_x10_waterman_parallel(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} 
#endif // X10_WATERMAN_PARALLEL_H

namespace x10 { 
class waterman_parallel;
} 

#ifndef X10_WATERMAN_PARALLEL_H_NODEPS
#define X10_WATERMAN_PARALLEL_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/util/HashMap.h>
#include <x10/lang/Char.h>
#include <x10/lang/String.h>
#include <x10/array/Array_2.h>
#include <x10/io/File.h>
#include <x10/lang/Iterator.h>
#include <x10/io/ReaderIterator.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/lang/Rail.h>
#include <x10/io/IOException.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/ArrayList.h>
#include <x10/array/Array_1.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Float.h>
#include <x10/lang/Any.h>
#include <x10/util/Date.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_WATERMAN_PARALLEL_H_GENERICS
#define X10_WATERMAN_PARALLEL_H_GENERICS
inline ::x10::util::HashMap<x10_char, x10_long>* x10::waterman_parallel::FMGL(letterValue__get)() {
    if (FMGL(letterValue__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(letterValue__init)();
    }
    return x10::waterman_parallel::FMGL(letterValue);
}

#endif // X10_WATERMAN_PARALLEL_H_GENERICS
#endif // __X10_WATERMAN_PARALLEL_H_NODEPS
