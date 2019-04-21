/*************************************************/
/* START of waterman_parallel_diagonal */
#include <x10/waterman_parallel_diagonal.h>

#ifndef X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__1_CLOSURE
#define X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_waterman_parallel_diagonal__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel_diagonal__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::waterman_parallel_diagonal::thread_task(r, ((c) + (((x10_long)1ll))),
                                                       scoreMatrix,
                                                       input1, input2,
                                                       blosum, current_position,
                                                       A, B);
    }
    
    // captured environment
    x10_long r;
    x10_long c;
    ::x10::array::Array_2<x10_long>* scoreMatrix;
    ::x10::lang::Rail< x10_char >* input1;
    ::x10::lang::Rail< x10_char >* input2;
    ::x10::array::Array_2<x10_long>* blosum;
    ::x10::array::Array_1<x10_long>* current_position;
    x10_long A;
    x10_long B;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->r);
        buf.write(this->c);
        buf.write(this->scoreMatrix);
        buf.write(this->input1);
        buf.write(this->input2);
        buf.write(this->blosum);
        buf.write(this->current_position);
        buf.write(this->A);
        buf.write(this->B);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_waterman_parallel_diagonal__closure__1* storage = ::x10aux::alloc_z<x10_waterman_parallel_diagonal__closure__1>();
        buf.record_reference(storage);
        x10_long that_r = buf.read<x10_long>();
        x10_long that_c = buf.read<x10_long>();
        ::x10::array::Array_2<x10_long>* that_scoreMatrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::lang::Rail< x10_char >* that_input1 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::lang::Rail< x10_char >* that_input2 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_1<x10_long>* that_current_position = buf.read< ::x10::array::Array_1<x10_long>*>();
        x10_long that_A = buf.read<x10_long>();
        x10_long that_B = buf.read<x10_long>();
        x10_waterman_parallel_diagonal__closure__1* this_ = new (storage) x10_waterman_parallel_diagonal__closure__1(that_r, that_c, that_scoreMatrix, that_input1, that_input2, that_blosum, that_current_position, that_A, that_B);
        return this_;
    }
    
    x10_waterman_parallel_diagonal__closure__1(x10_long r, x10_long c, ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1, ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_1<x10_long>* current_position, x10_long A, x10_long B) : r(r), c(c), scoreMatrix(scoreMatrix), input1(input1), input2(input2), blosum(blosum), current_position(current_position), A(A), B(B) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "waterman_parallel_diagonal.x10:175";
    }

};

#endif // X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__1_CLOSURE
#ifndef X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__2_CLOSURE
#define X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_waterman_parallel_diagonal__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel_diagonal__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::waterman_parallel_diagonal::thread_task(((r) + (((x10_long)1ll))),
                                                       c, scoreMatrix,
                                                       input1, input2,
                                                       blosum, current_position,
                                                       A, B);
    }
    
    // captured environment
    x10_long r;
    x10_long c;
    ::x10::array::Array_2<x10_long>* scoreMatrix;
    ::x10::lang::Rail< x10_char >* input1;
    ::x10::lang::Rail< x10_char >* input2;
    ::x10::array::Array_2<x10_long>* blosum;
    ::x10::array::Array_1<x10_long>* current_position;
    x10_long A;
    x10_long B;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->r);
        buf.write(this->c);
        buf.write(this->scoreMatrix);
        buf.write(this->input1);
        buf.write(this->input2);
        buf.write(this->blosum);
        buf.write(this->current_position);
        buf.write(this->A);
        buf.write(this->B);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_waterman_parallel_diagonal__closure__2* storage = ::x10aux::alloc_z<x10_waterman_parallel_diagonal__closure__2>();
        buf.record_reference(storage);
        x10_long that_r = buf.read<x10_long>();
        x10_long that_c = buf.read<x10_long>();
        ::x10::array::Array_2<x10_long>* that_scoreMatrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::lang::Rail< x10_char >* that_input1 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::lang::Rail< x10_char >* that_input2 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_1<x10_long>* that_current_position = buf.read< ::x10::array::Array_1<x10_long>*>();
        x10_long that_A = buf.read<x10_long>();
        x10_long that_B = buf.read<x10_long>();
        x10_waterman_parallel_diagonal__closure__2* this_ = new (storage) x10_waterman_parallel_diagonal__closure__2(that_r, that_c, that_scoreMatrix, that_input1, that_input2, that_blosum, that_current_position, that_A, that_B);
        return this_;
    }
    
    x10_waterman_parallel_diagonal__closure__2(x10_long r, x10_long c, ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1, ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_1<x10_long>* current_position, x10_long A, x10_long B) : r(r), c(c), scoreMatrix(scoreMatrix), input1(input1), input2(input2), blosum(blosum), current_position(current_position), A(A), B(B) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "waterman_parallel_diagonal.x10:179";
    }

};

#endif // X10_WATERMAN_PARALLEL_DIAGONAL__CLOSURE__2_CLOSURE

//#line 17 "waterman_parallel_diagonal.x10"
::x10::util::HashMap<x10_char, x10_long>* x10::waterman_parallel_diagonal::FMGL(letterValue);
void x10::waterman_parallel_diagonal::FMGL(letterValue__do_init)() {
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10::waterman_parallel_diagonal.letterValue");
    ::x10::util::HashMap<x10_char, x10_long>* __var0__ = ::x10::util::HashMap<x10_char, x10_long>::_make();
    FMGL(letterValue) = __var0__;
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10::waterman_parallel_diagonal::FMGL(letterValue__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(letterValue__status), &FMGL(letterValue__do_init), &FMGL(letterValue__exception), "x10::waterman_parallel_diagonal.letterValue");
    
}
volatile ::x10aux::StaticInitController::status x10::waterman_parallel_diagonal::FMGL(letterValue__status);
::x10::lang::CheckedThrowable* x10::waterman_parallel_diagonal::FMGL(letterValue__exception);


//#line 23 "waterman_parallel_diagonal.x10"
::x10::array::Array_2<x10_long>* x10::waterman_parallel_diagonal::buildBlosum(
  ::x10::lang::String* inputBlosum) {
    
    //#line 24 "waterman_parallel_diagonal.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)50ll),
                                                                                     ((x10_long)50ll),
                                                                                     ((x10_long)0ll));
    
    //#line 25 "waterman_parallel_diagonal.x10"
    try {
        
        //#line 26 "waterman_parallel_diagonal.x10"
        x10_long counter = ((x10_long)0ll);
        
        //#line 27 "waterman_parallel_diagonal.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputBlosum);
        
        //#line 28 "waterman_parallel_diagonal.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3422;
            for (line__3422 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3422));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3422));
                
                //#line 29 "waterman_parallel_diagonal.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                               (&::x10::waterman_parallel_diagonal_Strings::sl__3497)),
                                             (-(((x10_int) (((x10_long)1ll))))))))
                {
                    
                    //#line 30 "waterman_parallel_diagonal.x10"
                    if ((::x10aux::struct_equals(counter,
                                                 ((x10_long)0ll))))
                    {
                        
                        //#line 31 "waterman_parallel_diagonal.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 32 "waterman_parallel_diagonal.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 33 "waterman_parallel_diagonal.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_parallel_diagonal_Strings::sl__3498), preline);
                        
                        //#line 34 "waterman_parallel_diagonal.x10"
                        x10_long i__3386min__3450 = ((x10_long)0ll);
                        x10_long i__3386max__3451 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3452;
                            for (i__3452 = i__3386min__3450;
                                 ((i__3452) <= (i__3386max__3451));
                                 i__3452 = ((i__3452) + (((x10_long)1ll))))
                            {
                                x10_long i__3453 = i__3452;
                                
                                //#line 35 "waterman_parallel_diagonal.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3453))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 36 "waterman_parallel_diagonal.x10"
                                    ::x10::waterman_parallel_diagonal::FMGL(letterValue__get)()->put(
                                      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                i__3453))->x10::lang::String::trim())->x10::lang::String::charAt(
                                        ((x10_int) (((x10_long)0ll)))),
                                      letterIndex);
                                }
                                
                                //#line 37 "waterman_parallel_diagonal.x10"
                                letterIndex = ((letterIndex) + (((x10_long)1ll)));
                            }
                        }
                        
                    } else {
                        
                        //#line 41 "waterman_parallel_diagonal.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 42 "waterman_parallel_diagonal.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 43 "waterman_parallel_diagonal.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_parallel_diagonal_Strings::sl__3498), preline);
                        
                        //#line 44 "waterman_parallel_diagonal.x10"
                        x10_long i__3404min__3454 = ((x10_long)1ll);
                        x10_long i__3404max__3455 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3456;
                            for (i__3456 = i__3404min__3454;
                                 ((i__3456) <= (i__3404max__3455));
                                 i__3456 = ((i__3456) + (((x10_long)1ll))))
                            {
                                x10_long i__3457 = i__3456;
                                
                                //#line 45 "waterman_parallel_diagonal.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3457))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 46 "waterman_parallel_diagonal.x10"
                                    blosum->x10::array::Array_2<x10_long>::__set(
                                      ((counter) - (((x10_long)1ll))),
                                      letterIndex, ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                             i__3457))->x10::lang::String::trim()));
                                    
                                    //#line 47 "waterman_parallel_diagonal.x10"
                                    letterIndex = ((letterIndex) + (((x10_long)1ll)));
                                }
                                
                            }
                        }
                        
                    }
                    
                    //#line 52 "waterman_parallel_diagonal.x10"
                    counter = ((counter) + (((x10_long)1ll)));
                }
                
            }
        }
        
        //#line 57 "waterman_parallel_diagonal.x10"
        return blosum;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc2) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc2)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc2);
            {
                
                //#line 62 "waterman_parallel_diagonal.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 66 "waterman_parallel_diagonal.x10"
    return ::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 79 "waterman_parallel_diagonal.x10"
x10_long x10::waterman_parallel_diagonal::penalty(x10_long a,
                                                  x10_long b,
                                                  x10_long l) {
    
    //#line 81 "waterman_parallel_diagonal.x10"
    return ((a) + (((b) * (((l) - (((x10_long)1ll)))))));
    
}

//#line 95 "waterman_parallel_diagonal.x10"
::x10::lang::Rail< x10_char >* x10::waterman_parallel_diagonal::parseInput(
  ::x10::lang::String* inputPath) {
    
    //#line 97 "waterman_parallel_diagonal.x10"
    try {
        
        //#line 99 "waterman_parallel_diagonal.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputPath);
        
        //#line 101 "waterman_parallel_diagonal.x10"
        x10_long fullLength = ((x10_long)0ll);
        
        //#line 103 "waterman_parallel_diagonal.x10"
        ::x10::util::ArrayList<x10_char>* charList = ::x10::util::ArrayList<x10_char>::_make();
        
        //#line 105 "waterman_parallel_diagonal.x10"
        x10_long count = ((x10_long)0ll);
        
        //#line 107 "waterman_parallel_diagonal.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3449;
            for (line__3449 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3449));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3449));
                
                //#line 109 "waterman_parallel_diagonal.x10"
                if ((!::x10aux::struct_equals(count, ((x10_long)0ll))))
                {
                    
                    //#line 111 "waterman_parallel_diagonal.x10"
                    fullLength = ((fullLength) + (((x10_long)(::x10aux::nullCheck(line)->x10::lang::String::length()))));
                    
                    //#line 113 "waterman_parallel_diagonal.x10"
                    ::x10::lang::Rail< x10_char >* output =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    
                    //#line 115 "waterman_parallel_diagonal.x10"
                    ::x10::lang::Rail< x10_char >* rail__3458 =
                      output;
                    x10_long size__3459 = (x10_long)(::x10aux::nullCheck(rail__3458)->FMGL(size));
                    {
                        x10_long idx__3460;
                        for (idx__3460 = ((x10_long)0ll);
                             ((idx__3460) < (size__3459));
                             idx__3460 = ((idx__3460) + (((x10_long)1ll))))
                        {
                            x10_char ch__3461 = ::x10aux::nullCheck(rail__3458)->x10::lang::Rail< x10_char >::__apply(
                                                  idx__3460);
                            
                            //#line 117 "waterman_parallel_diagonal.x10"
                            charList->add(ch__3461);
                        }
                    }
                    
                }
                
                //#line 123 "waterman_parallel_diagonal.x10"
                count = ((count) + (((x10_long)1ll)));
            }
        }
        
        //#line 127 "waterman_parallel_diagonal.x10"
        ::x10::lang::Rail< x10_char >* ret = charList->toRail();
        
        //#line 129 "waterman_parallel_diagonal.x10"
        return ret;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc5) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc5)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc5);
            {
                
                //#line 137 "waterman_parallel_diagonal.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 141 "waterman_parallel_diagonal.x10"
    return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_char >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 162 "waterman_parallel_diagonal.x10"
x10_long x10::waterman_parallel_diagonal::thread_task(x10_long r,
                                                      x10_long c,
                                                      ::x10::array::Array_2<x10_long>* scoreMatrix,
                                                      ::x10::lang::Rail< x10_char >* input1,
                                                      ::x10::lang::Rail< x10_char >* input2,
                                                      ::x10::array::Array_2<x10_long>* blosum,
                                                      ::x10::array::Array_1<x10_long>* current_position,
                                                      x10_long A,
                                                      x10_long B) {
    
    //#line 173 "waterman_parallel_diagonal.x10"
    if (((((c) + (((x10_long)1ll)))) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size)))))
    {
        
        //#line 175 "waterman_parallel_diagonal.x10"
        ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_waterman_parallel_diagonal__closure__1)))x10_waterman_parallel_diagonal__closure__1(r, c, scoreMatrix, input1, input2, blosum, current_position, A, B))));
    } else 
    //#line 177 "waterman_parallel_diagonal.x10"
    if (((((r) + (((x10_long)1ll)))) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size)))))
    {
        
        //#line 179 "waterman_parallel_diagonal.x10"
        ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_waterman_parallel_diagonal__closure__2)))x10_waterman_parallel_diagonal__closure__2(r, c, scoreMatrix, input1, input2, blosum, current_position, A, B))));
    }
    
    //#line 183 "waterman_parallel_diagonal.x10"
    x10_long r_inner = r;
    
    //#line 184 "waterman_parallel_diagonal.x10"
    {
        x10_long c_inner;
        for (c_inner = c; ((c_inner) >= (((x10_long)1ll)));
             c_inner = ((c_inner) - (((x10_long)1ll)))) {
            
            //#line 186 "waterman_parallel_diagonal.x10"
            if (((r_inner) > ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size)))))
            {
                
                //#line 188 "waterman_parallel_diagonal.x10"
                break;
            }
            
            //#line 190 "waterman_parallel_diagonal.x10"
            if ((!::x10aux::struct_equals(r_inner, ((x10_long)1ll))))
            {
                
                //#line 193 "waterman_parallel_diagonal.x10"
                while (((::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__apply(
                           ((r_inner) - (((x10_long)1ll))))) < (c_inner)))
                {
                 
                }
                
            }
            
            //#line 197 "waterman_parallel_diagonal.x10"
            while (((::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__apply(
                       r_inner)) < (((c_inner) - (((x10_long)1ll))))))
            {
             
            }
            
            //#line 201 "waterman_parallel_diagonal.x10"
            x10_long maxScore = ((x10_long)0ll);
            
            //#line 202 "waterman_parallel_diagonal.x10"
            x10_long maxR = ::x10::waterman_parallel_diagonal::maxRowScore(
                              r_inner, c_inner, scoreMatrix,
                              A, B);
            
            //#line 203 "waterman_parallel_diagonal.x10"
            if (((maxR) > (maxScore))) {
                
                //#line 204 "waterman_parallel_diagonal.x10"
                maxScore = maxR;
            }
            
            //#line 206 "waterman_parallel_diagonal.x10"
            x10_long maxC = ::x10::waterman_parallel_diagonal::maxColumnScore(
                              r_inner, c_inner, scoreMatrix,
                              A, B);
            
            //#line 207 "waterman_parallel_diagonal.x10"
            if (((maxC) > (maxScore))) {
                
                //#line 208 "waterman_parallel_diagonal.x10"
                maxScore = maxC;
            }
            
            //#line 210 "waterman_parallel_diagonal.x10"
            x10_long diagnalScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                        ((r_inner) - (((x10_long)1ll))),
                                        ((c_inner) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                               ::x10::waterman_parallel_diagonal::FMGL(letterValue__get)()->get(
                                                                                 ::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                                                                   ((r_inner) - (((x10_long)1ll))))),
                                                                               ::x10::waterman_parallel_diagonal::FMGL(letterValue__get)()->get(
                                                                                 ::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                                   ((c_inner) - (((x10_long)1ll))))))));
            
            //#line 211 "waterman_parallel_diagonal.x10"
            if (((diagnalScore) > (maxScore))) {
                
                //#line 212 "waterman_parallel_diagonal.x10"
                maxScore = diagnalScore;
            }
            
            //#line 214 "waterman_parallel_diagonal.x10"
            ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__set(
              r_inner, c_inner, maxScore);
            {
                
                //#line 215 "waterman_parallel_diagonal.x10"
                ::x10::lang::CheckedThrowable* throwable__3468 =
                  ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::xrx::Runtime::enterAtomic();
                        {
                            
                            //#line 216 "waterman_parallel_diagonal.x10"
                            if (((::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__apply(
                                    r_inner)) >= (c_inner)))
                            {
                             
                            } else {
                                
                                //#line 219 "waterman_parallel_diagonal.x10"
                                ::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__set(
                                  r_inner, c_inner);
                            }
                            
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* formal__3469 =
                          __exc7;
                        {
                            throwable__3468 = formal__3469;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__3468,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__3468))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__3468));
                    }
                    
                }
                if (true) {
                    ::x10::xrx::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__3468,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__3468)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__3468));
                    }
                    
                }
                
            }
            
            //#line 224 "waterman_parallel_diagonal.x10"
            r_inner = ((r_inner) + (((x10_long)1ll)));
        }
    }
    
    //#line 226 "waterman_parallel_diagonal.x10"
    return ((x10_long)0ll);
    
}

//#line 229 "waterman_parallel_diagonal.x10"
::x10::array::Array_2<x10_long>* x10::waterman_parallel_diagonal::calculate(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum,
  x10_long A, x10_long B) {
    
    //#line 230 "waterman_parallel_diagonal.x10"
    ::x10::array::Array_1<x10_long>* current_position = ::x10::array::Array_1<x10_long>::_make((((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))) + (((x10_long)1ll))),
                                                                                               ((x10_long)0ll));
    {
        
        //#line 242 "waterman_parallel_diagonal.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__3466 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                ::x10::waterman_parallel_diagonal::thread_task(
                  ((x10_long)1ll), ((x10_long)1ll), scoreMatrix,
                  input1, input2, blosum, current_position,
                  A, B);
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            {
                ::x10::lang::CheckedThrowable* ct__3464 =
                  __exc9;
                {
                    ::x10::xrx::Runtime::pushException(ct__3464);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3466);
    }
    
    //#line 243 "waterman_parallel_diagonal.x10"
    return scoreMatrix;
    
}

//#line 254 "waterman_parallel_diagonal.x10"
x10_long x10::waterman_parallel_diagonal::maxRowScore(x10_long row,
                                                      x10_long column,
                                                      ::x10::array::Array_2<x10_long>* scoreMatrix,
                                                      x10_long A,
                                                      x10_long B) {
    
    //#line 255 "waterman_parallel_diagonal.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 256 "waterman_parallel_diagonal.x10"
    {
        x10_long c;
        for (c = ((x10_long)0ll); ((c) < (column)); c = ((c) + (((x10_long)1ll))))
        {
            
            //#line 257 "waterman_parallel_diagonal.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     row, c)) - (::x10::waterman_parallel_diagonal::penalty(
                                                   A, B, ((column) - (c)))));
            
            //#line 258 "waterman_parallel_diagonal.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 259 "waterman_parallel_diagonal.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 263 "waterman_parallel_diagonal.x10"
    return maxScore;
    
}

//#line 278 "waterman_parallel_diagonal.x10"
x10_long x10::waterman_parallel_diagonal::maxColumnScore(
  x10_long row, x10_long column, ::x10::array::Array_2<x10_long>* scoreMatrix,
  x10_long A, x10_long B) {
    
    //#line 279 "waterman_parallel_diagonal.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 280 "waterman_parallel_diagonal.x10"
    {
        x10_long r;
        for (r = ((x10_long)0ll); ((r) < (row)); r = ((r) + (((x10_long)1ll))))
        {
            
            //#line 281 "waterman_parallel_diagonal.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     r, column)) - (::x10::waterman_parallel_diagonal::penalty(
                                                      A, B,
                                                      ((row) - (r)))));
            
            //#line 282 "waterman_parallel_diagonal.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 283 "waterman_parallel_diagonal.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 288 "waterman_parallel_diagonal.x10"
    return maxScore;
    
}

//#line 318 "waterman_parallel_diagonal.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* x10::waterman_parallel_diagonal::traceback(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum) {
    
    //#line 319 "waterman_parallel_diagonal.x10"
    x10_long bestScore = ((x10_long)0ll);
    
    //#line 320 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< x10_long >* bestCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 322 "waterman_parallel_diagonal.x10"
    ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>* resultList =
      ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>::_make();
    
    //#line 324 "waterman_parallel_diagonal.x10"
    {
        x10_long r;
        for (r = ((x10_long)1ll); ((r) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))));
             r = ((r) + (((x10_long)1ll)))) {
            
            //#line 325 "waterman_parallel_diagonal.x10"
            {
                x10_long c;
                for (c = ((x10_long)1ll); ((c) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size))));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 326 "waterman_parallel_diagonal.x10"
                    if (((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                            r, c)) > (bestScore))) {
                        
                        //#line 327 "waterman_parallel_diagonal.x10"
                        bestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                      r, c);
                        
                        //#line 328 "waterman_parallel_diagonal.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)0ll), r);
                        
                        //#line 329 "waterman_parallel_diagonal.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)1ll), c);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 333 "waterman_parallel_diagonal.x10"
    x10_long curRow = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll));
    
    //#line 334 "waterman_parallel_diagonal.x10"
    x10_long curColumn = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                           ((x10_long)1ll));
    
    //#line 335 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< x10_long >* curCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 336 "waterman_parallel_diagonal.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)0ll), curRow);
    
    //#line 337 "waterman_parallel_diagonal.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)1ll), curColumn);
    
    //#line 340 "waterman_parallel_diagonal.x10"
    while (true) {
        
        //#line 341 "waterman_parallel_diagonal.x10"
        if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
            (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
        {
            
            //#line 342 "waterman_parallel_diagonal.x10"
            ::x10::lang::Rail< x10_long >* midResult = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
            
            //#line 343 "waterman_parallel_diagonal.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)0ll), curRow);
            
            //#line 344 "waterman_parallel_diagonal.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)1ll), curColumn);
            
            //#line 345 "waterman_parallel_diagonal.x10"
            resultList->add(midResult);
            
            //#line 346 "waterman_parallel_diagonal.x10"
            x10_long tempColumn = ((curColumn) - (((x10_long)1ll)));
            
            //#line 347 "waterman_parallel_diagonal.x10"
            x10_long tempRow = curRow;
            
            //#line 348 "waterman_parallel_diagonal.x10"
            x10_long BestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   curRow, ((curColumn) - (((x10_long)1ll))));
            
            //#line 350 "waterman_parallel_diagonal.x10"
            x10_long leftScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   ((curRow) - (((x10_long)1ll))),
                                   curColumn);
            
            //#line 351 "waterman_parallel_diagonal.x10"
            if (((leftScore) > (BestScore))) {
                
                //#line 352 "waterman_parallel_diagonal.x10"
                BestScore = leftScore;
                
                //#line 353 "waterman_parallel_diagonal.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 354 "waterman_parallel_diagonal.x10"
                tempColumn = curColumn;
            }
            
            //#line 356 "waterman_parallel_diagonal.x10"
            x10_long leftupScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     ((curRow) - (((x10_long)1ll))),
                                     ((curColumn) - (((x10_long)1ll))));
            
            //#line 357 "waterman_parallel_diagonal.x10"
            if (((leftupScore) > (BestScore))) {
                
                //#line 358 "waterman_parallel_diagonal.x10"
                BestScore = leftupScore;
                
                //#line 359 "waterman_parallel_diagonal.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 360 "waterman_parallel_diagonal.x10"
                tempColumn = ((curColumn) - (((x10_long)1ll)));
            }
            
            //#line 362 "waterman_parallel_diagonal.x10"
            curRow = tempRow;
            
            //#line 363 "waterman_parallel_diagonal.x10"
            curColumn = tempColumn;
            
            //#line 365 "waterman_parallel_diagonal.x10"
            if ((::x10aux::struct_equals(bestScore, ((x10_long)0ll))))
            {
                
                //#line 366 "waterman_parallel_diagonal.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)0ll), curRow);
                
                //#line 367 "waterman_parallel_diagonal.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)1ll), curColumn);
                
                //#line 368 "waterman_parallel_diagonal.x10"
                if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
                    (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
                {
                    
                    //#line 369 "waterman_parallel_diagonal.x10"
                    resultList->add(midResult);
                }
                
                //#line 371 "waterman_parallel_diagonal.x10"
                break;
            }
            
        } else {
            
            //#line 375 "waterman_parallel_diagonal.x10"
            break;
        }
        
    }
    
    //#line 380 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* finalResult =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(resultList->size());
    
    //#line 381 "waterman_parallel_diagonal.x10"
    {
        x10_long i;
        for (i = ((resultList->size()) - (((x10_long)1ll)));
             ((i) >= (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 382 "waterman_parallel_diagonal.x10"
            ::x10aux::nullCheck(finalResult)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ((((resultList->size()) - (((x10_long)1ll)))) - (i)),
              resultList->get(i));
        }
    }
    
    //#line 385 "waterman_parallel_diagonal.x10"
    ::x10::waterman_parallel_diagonal::printResult(finalResult,
                                                   input1,
                                                   input2,
                                                   bestScore);
    
    //#line 387 "waterman_parallel_diagonal.x10"
    return finalResult;
    
}

//#line 406 "waterman_parallel_diagonal.x10"
void x10::waterman_parallel_diagonal::printResult(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* seq,
                                                  ::x10::lang::Rail< x10_char >* input1,
                                                  ::x10::lang::Rail< x10_char >* input2,
                                                  x10_long maxScore) {
    
    //#line 407 "waterman_parallel_diagonal.x10"
    x10_float totalLength = ((x10_float) ((x10_long)(::x10aux::nullCheck(seq)->FMGL(size))));
    
    //#line 408 "waterman_parallel_diagonal.x10"
    x10_float Gaps = ((x10_float) (((x10_long)0ll)));
    
    //#line 409 "waterman_parallel_diagonal.x10"
    x10_float identity = ((x10_float) (((x10_long)0ll)));
    
    //#line 410 "waterman_parallel_diagonal.x10"
    ::x10::util::ArrayList<x10_char>* output1 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 411 "waterman_parallel_diagonal.x10"
    ::x10::util::ArrayList<x10_char>* output2 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 412 "waterman_parallel_diagonal.x10"
    x10_long lastRow = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                             ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                         ((x10_long)0ll));
    
    //#line 413 "waterman_parallel_diagonal.x10"
    x10_long lastColumn = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                            ((x10_long)1ll));
    
    //#line 416 "waterman_parallel_diagonal.x10"
    output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                   ((lastRow) - (((x10_long)1ll)))));
    
    //#line 417 "waterman_parallel_diagonal.x10"
    output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                   ((lastColumn) - (((x10_long)1ll)))));
    
    //#line 418 "waterman_parallel_diagonal.x10"
    if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                           ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                              ((lastColumn) - (((x10_long)1ll))))))
    {
        
        //#line 419 "waterman_parallel_diagonal.x10"
        identity = ((identity) + (1.0f));
    }
    
    //#line 422 "waterman_parallel_diagonal.x10"
    {
        x10_long i;
        for (i = ((x10_long)1ll); ((((x10_float) (i))) < (totalLength));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 423 "waterman_parallel_diagonal.x10"
            ::x10::lang::Rail< x10_long >* coor = ::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                    i);
            
            //#line 424 "waterman_parallel_diagonal.x10"
            x10_long row = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                             ((x10_long)0ll));
            
            //#line 425 "waterman_parallel_diagonal.x10"
            x10_long column = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                                ((x10_long)1ll));
            
            //#line 426 "waterman_parallel_diagonal.x10"
            if ((::x10aux::struct_equals(((row) - (lastRow)),
                                         ((x10_long)0ll))))
            {
                
                //#line 427 "waterman_parallel_diagonal.x10"
                output1->add(((x10_char)'-'));
                
                //#line 428 "waterman_parallel_diagonal.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
                
                //#line 429 "waterman_parallel_diagonal.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 431 "waterman_parallel_diagonal.x10"
            if ((::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)0ll))))
            {
                
                //#line 432 "waterman_parallel_diagonal.x10"
                output2->add(((x10_char)'-'));
                
                //#line 433 "waterman_parallel_diagonal.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 434 "waterman_parallel_diagonal.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 436 "waterman_parallel_diagonal.x10"
            if (((::x10aux::struct_equals(((row) - (lastRow)),
                                          ((x10_long)1ll))) &&
                (::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)1ll)))))
            {
                
                //#line 437 "waterman_parallel_diagonal.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 438 "waterman_parallel_diagonal.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
            }
            
            //#line 440 "waterman_parallel_diagonal.x10"
            lastRow = row;
            
            //#line 441 "waterman_parallel_diagonal.x10"
            lastColumn = column;
            
            //#line 442 "waterman_parallel_diagonal.x10"
            if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                   ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                      ((lastColumn) - (((x10_long)1ll))))))
            {
                
                //#line 443 "waterman_parallel_diagonal.x10"
                identity = ((identity) + (1.0f));
            }
            
        }
    }
    
    //#line 449 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_diagonal_Strings::sl__3499), identity), (&::x10::waterman_parallel_diagonal_Strings::sl__3500)), totalLength), (&::x10::waterman_parallel_diagonal_Strings::sl__3501)), ((((identity) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_parallel_diagonal_Strings::sl__3502))));
    
    //#line 450 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_diagonal_Strings::sl__3503), Gaps), (&::x10::waterman_parallel_diagonal_Strings::sl__3500)), totalLength), (&::x10::waterman_parallel_diagonal_Strings::sl__3501)), ((((Gaps) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_parallel_diagonal_Strings::sl__3502))));
    
    //#line 451 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::waterman_parallel_diagonal_Strings::sl__3504), maxScore)));
    
    //#line 452 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_diagonal_Strings::sl__3505));
    
    //#line 453 "waterman_parallel_diagonal.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output1->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 454 "waterman_parallel_diagonal.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output1->get(
                                                                   i)));
        }
    }
    
    //#line 456 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_diagonal_Strings::sl__3506));
    
    //#line 458 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_diagonal_Strings::sl__3507));
    
    //#line 459 "waterman_parallel_diagonal.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output2->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 460 "waterman_parallel_diagonal.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output2->get(
                                                                   i)));
        }
    }
    
    //#line 462 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_diagonal_Strings::sl__3506));
}

//#line 482 "waterman_parallel_diagonal.x10"
void x10::waterman_parallel_diagonal::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 484 "waterman_parallel_diagonal.x10"
    ::x10::lang::String* input1 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)0ll));
    
    //#line 485 "waterman_parallel_diagonal.x10"
    ::x10::lang::String* input2 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)1ll));
    
    //#line 486 "waterman_parallel_diagonal.x10"
    ::x10::lang::String* blosumFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                        ((x10_long)2ll));
    
    //#line 487 "waterman_parallel_diagonal.x10"
    x10_long A = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)3ll)));
    
    //#line 488 "waterman_parallel_diagonal.x10"
    x10_long B = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)4ll)));
    
    //#line 490 "waterman_parallel_diagonal.x10"
    ::x10::util::Date* date1 = ::x10::util::Date::_make();
    
    //#line 492 "waterman_parallel_diagonal.x10"
    x10_long starttime = date1->getTime();
    
    //#line 494 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< x10_char >* charList1 = ::x10::waterman_parallel_diagonal::parseInput(
                                                 input1);
    
    //#line 496 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< x10_char >* charList2 = ::x10::waterman_parallel_diagonal::parseInput(
                                                 input2);
    
    //#line 502 "waterman_parallel_diagonal.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::waterman_parallel_diagonal::buildBlosum(
                                                blosumFile);
    
    //#line 506 "waterman_parallel_diagonal.x10"
    x10_long n = (((x10_long)(::x10aux::nullCheck(charList1)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 508 "waterman_parallel_diagonal.x10"
    x10_long m = (((x10_long)(::x10aux::nullCheck(charList2)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 510 "waterman_parallel_diagonal.x10"
    ::x10::array::Array_2<x10_long>* scoreMatrix = ::x10::array::Array_2<x10_long>::_make(n,
                                                                                          m,
                                                                                          ((x10_long)0ll));
    
    //#line 512 "waterman_parallel_diagonal.x10"
    ::x10::waterman_parallel_diagonal::calculate(scoreMatrix,
                                                 charList1,
                                                 charList2,
                                                 blosum, A,
                                                 B);
    
    //#line 514 "waterman_parallel_diagonal.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* sequence =
      ::x10::waterman_parallel_diagonal::traceback(scoreMatrix,
                                                   charList1,
                                                   charList2,
                                                   blosum);
    
    //#line 516 "waterman_parallel_diagonal.x10"
    ::x10::util::Date* date2 = ::x10::util::Date::_make();
    
    //#line 517 "waterman_parallel_diagonal.x10"
    x10_long endtime = date2->getTime();
    
    //#line 519 "waterman_parallel_diagonal.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_diagonal_Strings::sl__3508), ((endtime) - (starttime))), (&::x10::waterman_parallel_diagonal_Strings::sl__3509))));
}

//#line 15 "waterman_parallel_diagonal.x10"
::x10::waterman_parallel_diagonal* x10::waterman_parallel_diagonal::x10__waterman_parallel_diagonal____this__x10__waterman_parallel_diagonal(
  ) {
    return this;
    
}
void x10::waterman_parallel_diagonal::_constructor() {
    this->x10::waterman_parallel_diagonal::__fieldInitializers_x10_waterman_parallel_diagonal();
}
::x10::waterman_parallel_diagonal* x10::waterman_parallel_diagonal::_make(
  ) {
    ::x10::waterman_parallel_diagonal* this_ = new (::x10aux::alloc_z< ::x10::waterman_parallel_diagonal>()) ::x10::waterman_parallel_diagonal();
    this_->_constructor();
    return this_;
}


void x10::waterman_parallel_diagonal::__fieldInitializers_x10_waterman_parallel_diagonal(
  ) {
 
}
const ::x10aux::serialization_id_t x10::waterman_parallel_diagonal::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::waterman_parallel_diagonal::_deserializer);

void x10::waterman_parallel_diagonal::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::x10::waterman_parallel_diagonal::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::waterman_parallel_diagonal* this_ = new (::x10aux::alloc_z< ::x10::waterman_parallel_diagonal>()) ::x10::waterman_parallel_diagonal();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10::waterman_parallel_diagonal::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType x10::waterman_parallel_diagonal::rtt;
void x10::waterman_parallel_diagonal::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10.waterman_parallel_diagonal",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3498(" ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3497("#");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3502("%)");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3499("Identity: ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3501(" (");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3506("\n");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3508("Running Time: ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3509("  milliseconds.");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3500("/");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3503("Gaps: ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3505("1: ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3507("2: ");
::x10::lang::String x10::waterman_parallel_diagonal_Strings::sl__3504("Score: ");

::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel_diagonal__closure__1>x10_waterman_parallel_diagonal__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_waterman_parallel_diagonal__closure__1::__apply, &x10_waterman_parallel_diagonal__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry x10_waterman_parallel_diagonal__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_waterman_parallel_diagonal__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t x10_waterman_parallel_diagonal__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_waterman_parallel_diagonal__closure__1::_deserialize);
const ::x10aux::serialization_id_t x10_waterman_parallel_diagonal__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_waterman_parallel_diagonal__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel_diagonal__closure__2>x10_waterman_parallel_diagonal__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_waterman_parallel_diagonal__closure__2::__apply, &x10_waterman_parallel_diagonal__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry x10_waterman_parallel_diagonal__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_waterman_parallel_diagonal__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t x10_waterman_parallel_diagonal__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_waterman_parallel_diagonal__closure__2::_deserialize);
const ::x10aux::serialization_id_t x10_waterman_parallel_diagonal__closure__2::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_waterman_parallel_diagonal__closure__2::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of waterman_parallel_diagonal */
/*************************************************/
