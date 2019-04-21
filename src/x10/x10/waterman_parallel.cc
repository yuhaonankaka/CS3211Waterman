/*************************************************/
/* START of waterman_parallel */
#include <x10/waterman_parallel.h>

#ifndef X10_WATERMAN_PARALLEL__CLOSURE__1_CLOSURE
#define X10_WATERMAN_PARALLEL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_waterman_parallel__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        ::x10::waterman_parallel::thread_task(((r) + (((x10_long)1ll))), scoreMatrix,
                                              input1, input2, blosum,
                                              current_position, A,
                                              B);
    }
    
    // captured environment
    x10_long r;
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
        buf.write(this->scoreMatrix);
        buf.write(this->input1);
        buf.write(this->input2);
        buf.write(this->blosum);
        buf.write(this->current_position);
        buf.write(this->A);
        buf.write(this->B);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_waterman_parallel__closure__1* storage = ::x10aux::alloc_z<x10_waterman_parallel__closure__1>();
        buf.record_reference(storage);
        x10_long that_r = buf.read<x10_long>();
        ::x10::array::Array_2<x10_long>* that_scoreMatrix = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::lang::Rail< x10_char >* that_input1 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::lang::Rail< x10_char >* that_input2 = buf.read< ::x10::lang::Rail< x10_char >*>();
        ::x10::array::Array_2<x10_long>* that_blosum = buf.read< ::x10::array::Array_2<x10_long>*>();
        ::x10::array::Array_1<x10_long>* that_current_position = buf.read< ::x10::array::Array_1<x10_long>*>();
        x10_long that_A = buf.read<x10_long>();
        x10_long that_B = buf.read<x10_long>();
        x10_waterman_parallel__closure__1* this_ = new (storage) x10_waterman_parallel__closure__1(that_r, that_scoreMatrix, that_input1, that_input2, that_blosum, that_current_position, that_A, that_B);
        return this_;
    }
    
    x10_waterman_parallel__closure__1(x10_long r, ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1, ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum, ::x10::array::Array_1<x10_long>* current_position, x10_long A, x10_long B) : r(r), scoreMatrix(scoreMatrix), input1(input1), input2(input2), blosum(blosum), current_position(current_position), A(A), B(B) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "waterman_parallel.x10:167";
    }

};

#endif // X10_WATERMAN_PARALLEL__CLOSURE__1_CLOSURE

//#line 17 "waterman_parallel.x10"
::x10::util::HashMap<x10_char, x10_long>* x10::waterman_parallel::FMGL(letterValue);
void x10::waterman_parallel::FMGL(letterValue__do_init)() {
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10::waterman_parallel.letterValue");
    ::x10::util::HashMap<x10_char, x10_long>* __var0__ = ::x10::util::HashMap<x10_char, x10_long>::_make();
    FMGL(letterValue) = __var0__;
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10::waterman_parallel::FMGL(letterValue__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(letterValue__status), &FMGL(letterValue__do_init), &FMGL(letterValue__exception), "x10::waterman_parallel.letterValue");
    
}
volatile ::x10aux::StaticInitController::status x10::waterman_parallel::FMGL(letterValue__status);
::x10::lang::CheckedThrowable* x10::waterman_parallel::FMGL(letterValue__exception);


//#line 18 "waterman_parallel.x10"

//#line 19 "waterman_parallel.x10"

//#line 25 "waterman_parallel.x10"
::x10::array::Array_2<x10_long>* x10::waterman_parallel::buildBlosum(::x10::lang::String* inputBlosum) {
    
    //#line 26 "waterman_parallel.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)50ll),
                                                                                     ((x10_long)50ll),
                                                                                     ((x10_long)0ll));
    
    //#line 27 "waterman_parallel.x10"
    try {
        
        //#line 28 "waterman_parallel.x10"
        x10_long counter = ((x10_long)0ll);
        
        //#line 29 "waterman_parallel.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputBlosum);
        
        //#line 30 "waterman_parallel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3271;
            for (line__3271 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3271));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3271));
                
                //#line 31 "waterman_parallel.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                               (&::x10::waterman_parallel_Strings::sl__3345)),
                                             (-(((x10_int) (((x10_long)1ll))))))))
                {
                    
                    //#line 32 "waterman_parallel.x10"
                    if ((::x10aux::struct_equals(counter,
                                                 ((x10_long)0ll))))
                    {
                        
                        //#line 33 "waterman_parallel.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 34 "waterman_parallel.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 35 "waterman_parallel.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_parallel_Strings::sl__3346), preline);
                        
                        //#line 36 "waterman_parallel.x10"
                        x10_long i__3235min__3299 = ((x10_long)0ll);
                        x10_long i__3235max__3300 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3301;
                            for (i__3301 = i__3235min__3299;
                                 ((i__3301) <= (i__3235max__3300));
                                 i__3301 = ((i__3301) + (((x10_long)1ll))))
                            {
                                x10_long i__3302 = i__3301;
                                
                                //#line 37 "waterman_parallel.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3302))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 38 "waterman_parallel.x10"
                                    ::x10::waterman_parallel::FMGL(letterValue__get)()->put(
                                      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                i__3302))->x10::lang::String::trim())->x10::lang::String::charAt(
                                        ((x10_int) (((x10_long)0ll)))),
                                      letterIndex);
                                }
                                
                                //#line 39 "waterman_parallel.x10"
                                letterIndex = ((letterIndex) + (((x10_long)1ll)));
                            }
                        }
                        
                    } else {
                        
                        //#line 43 "waterman_parallel.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 44 "waterman_parallel.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 45 "waterman_parallel.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_parallel_Strings::sl__3346), preline);
                        
                        //#line 46 "waterman_parallel.x10"
                        x10_long i__3253min__3303 = ((x10_long)1ll);
                        x10_long i__3253max__3304 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3305;
                            for (i__3305 = i__3253min__3303;
                                 ((i__3305) <= (i__3253max__3304));
                                 i__3305 = ((i__3305) + (((x10_long)1ll))))
                            {
                                x10_long i__3306 = i__3305;
                                
                                //#line 47 "waterman_parallel.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3306))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 48 "waterman_parallel.x10"
                                    blosum->x10::array::Array_2<x10_long>::__set(
                                      ((counter) - (((x10_long)1ll))),
                                      letterIndex, ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                             i__3306))->x10::lang::String::trim()));
                                    
                                    //#line 49 "waterman_parallel.x10"
                                    letterIndex = ((letterIndex) + (((x10_long)1ll)));
                                }
                                
                            }
                        }
                        
                    }
                    
                    //#line 54 "waterman_parallel.x10"
                    counter = ((counter) + (((x10_long)1ll)));
                }
                
            }
        }
        
        //#line 59 "waterman_parallel.x10"
        return blosum;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc2) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc2)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc2);
            {
                
                //#line 64 "waterman_parallel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 68 "waterman_parallel.x10"
    return ::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 81 "waterman_parallel.x10"
x10_long x10::waterman_parallel::penalty(x10_long a, x10_long b,
                                         x10_long l) {
    
    //#line 83 "waterman_parallel.x10"
    return ((a) + (((b) * (((l) - (((x10_long)1ll)))))));
    
}

//#line 97 "waterman_parallel.x10"
::x10::lang::Rail< x10_char >* x10::waterman_parallel::parseInput(
  ::x10::lang::String* inputPath) {
    
    //#line 99 "waterman_parallel.x10"
    try {
        
        //#line 101 "waterman_parallel.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputPath);
        
        //#line 103 "waterman_parallel.x10"
        x10_long fullLength = ((x10_long)0ll);
        
        //#line 105 "waterman_parallel.x10"
        ::x10::util::ArrayList<x10_char>* charList = ::x10::util::ArrayList<x10_char>::_make();
        
        //#line 107 "waterman_parallel.x10"
        x10_long count = ((x10_long)0ll);
        
        //#line 109 "waterman_parallel.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3298;
            for (line__3298 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3298));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3298));
                
                //#line 111 "waterman_parallel.x10"
                if ((!::x10aux::struct_equals(count, ((x10_long)0ll))))
                {
                    
                    //#line 113 "waterman_parallel.x10"
                    fullLength = ((fullLength) + (((x10_long)(::x10aux::nullCheck(line)->x10::lang::String::length()))));
                    
                    //#line 115 "waterman_parallel.x10"
                    ::x10::lang::Rail< x10_char >* output =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    
                    //#line 117 "waterman_parallel.x10"
                    ::x10::lang::Rail< x10_char >* rail__3307 =
                      output;
                    x10_long size__3308 = (x10_long)(::x10aux::nullCheck(rail__3307)->FMGL(size));
                    {
                        x10_long idx__3309;
                        for (idx__3309 = ((x10_long)0ll);
                             ((idx__3309) < (size__3308));
                             idx__3309 = ((idx__3309) + (((x10_long)1ll))))
                        {
                            x10_char ch__3310 = ::x10aux::nullCheck(rail__3307)->x10::lang::Rail< x10_char >::__apply(
                                                  idx__3309);
                            
                            //#line 119 "waterman_parallel.x10"
                            charList->add(ch__3310);
                        }
                    }
                    
                }
                
                //#line 125 "waterman_parallel.x10"
                count = ((count) + (((x10_long)1ll)));
            }
        }
        
        //#line 129 "waterman_parallel.x10"
        ::x10::lang::Rail< x10_char >* ret = charList->toRail();
        
        //#line 131 "waterman_parallel.x10"
        return ret;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc5) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc5)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc5);
            {
                
                //#line 139 "waterman_parallel.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 143 "waterman_parallel.x10"
    return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_char >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 164 "waterman_parallel.x10"
x10_long x10::waterman_parallel::thread_task(x10_long r, ::x10::array::Array_2<x10_long>* scoreMatrix,
                                             ::x10::lang::Rail< x10_char >* input1,
                                             ::x10::lang::Rail< x10_char >* input2,
                                             ::x10::array::Array_2<x10_long>* blosum,
                                             ::x10::array::Array_1<x10_long>* current_position,
                                             x10_long A, x10_long B) {
    
    //#line 165 "waterman_parallel.x10"
    if (((((r) + (((x10_long)1ll)))) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size)))))
    {
        
        //#line 167 "waterman_parallel.x10"
        ::x10::xrx::Runtime::runAsync(reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_waterman_parallel__closure__1)))x10_waterman_parallel__closure__1(r, scoreMatrix, input1, input2, blosum, current_position, A, B))));
    }
    
    //#line 169 "waterman_parallel.x10"
    {
        x10_long c;
        for (c = ((x10_long)1ll); ((c) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size))));
             c = ((c) + (((x10_long)1ll)))) {
            
            //#line 171 "waterman_parallel.x10"
            if ((!::x10aux::struct_equals(r, ((x10_long)1ll))))
            {
                
                //#line 173 "waterman_parallel.x10"
                while (((::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__apply(
                           ((r) - (((x10_long)1ll))))) < (c)))
                {
                    ;
                }
                
            }
            
            //#line 175 "waterman_parallel.x10"
            x10_long maxScore = ((x10_long)0ll);
            
            //#line 176 "waterman_parallel.x10"
            x10_long maxR = ::x10::waterman_parallel::maxRowScore(
                              r, c, scoreMatrix, A, B);
            
            //#line 177 "waterman_parallel.x10"
            if (((maxR) > (maxScore))) {
                
                //#line 178 "waterman_parallel.x10"
                maxScore = maxR;
            }
            
            //#line 180 "waterman_parallel.x10"
            x10_long maxC = ::x10::waterman_parallel::maxColumnScore(
                              r, c, scoreMatrix, A, B);
            
            //#line 181 "waterman_parallel.x10"
            if (((maxC) > (maxScore))) {
                
                //#line 182 "waterman_parallel.x10"
                maxScore = maxC;
            }
            
            //#line 184 "waterman_parallel.x10"
            x10_long diagnalScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                        ((r) - (((x10_long)1ll))),
                                        ((c) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                         ::x10::waterman_parallel::FMGL(letterValue__get)()->get(
                                                                           ::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                                                             ((r) - (((x10_long)1ll))))),
                                                                         ::x10::waterman_parallel::FMGL(letterValue__get)()->get(
                                                                           ::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                             ((c) - (((x10_long)1ll))))))));
            
            //#line 185 "waterman_parallel.x10"
            if (((diagnalScore) > (maxScore))) {
                
                //#line 186 "waterman_parallel.x10"
                maxScore = diagnalScore;
            }
            
            //#line 188 "waterman_parallel.x10"
            ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__set(
              r, c, maxScore);
            {
                
                //#line 189 "waterman_parallel.x10"
                ::x10::lang::CheckedThrowable* throwable__3316 =
                  ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
                try {
                    {
                        ::x10::xrx::Runtime::enterAtomic();
                        {
                            ::x10aux::nullCheck(current_position)->x10::array::Array_1<x10_long>::__set(
                              r, c);
                        }
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc7) {
                    {
                        ::x10::lang::CheckedThrowable* formal__3317 =
                          __exc7;
                        {
                            throwable__3316 = formal__3317;
                        }
                    }
                }
                if ((!::x10aux::struct_equals(throwable__3316,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__3316))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__3316));
                    }
                    
                }
                if (true) {
                    ::x10::xrx::Runtime::exitAtomic();
                }
                if ((!::x10aux::struct_equals(throwable__3316,
                                              reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
                {
                    if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__3316)))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(throwable__3316));
                    }
                    
                }
                
            }
        }
    }
    
    //#line 192 "waterman_parallel.x10"
    return ((x10_long)0ll);
    
}

//#line 195 "waterman_parallel.x10"
::x10::array::Array_2<x10_long>* x10::waterman_parallel::calculate(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum,
  x10_long A, x10_long B) {
    
    //#line 196 "waterman_parallel.x10"
    ::x10::array::Array_1<x10_long>* current_position = ::x10::array::Array_1<x10_long>::_make((((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))) + (((x10_long)1ll))),
                                                                                               ((x10_long)0ll));
    {
        
        //#line 208 "waterman_parallel.x10"
        ::x10::xrx::Runtime::ensureNotInAtomic();
        ::x10::xrx::FinishState* fs__3314 = ::x10::xrx::Runtime::startFinish();
        try {
            {
                ::x10::waterman_parallel::thread_task(((x10_long)1ll),
                                                      scoreMatrix,
                                                      input1,
                                                      input2,
                                                      blosum,
                                                      current_position,
                                                      A, B);
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc9) {
            {
                ::x10::lang::CheckedThrowable* ct__3312 =
                  __exc9;
                {
                    ::x10::xrx::Runtime::pushException(ct__3312);
                }
            }
        }
        ::x10::xrx::Runtime::stopFinish(fs__3314);
    }
    
    //#line 209 "waterman_parallel.x10"
    return scoreMatrix;
    
}

//#line 220 "waterman_parallel.x10"
x10_long x10::waterman_parallel::maxRowScore(x10_long row,
                                             x10_long column,
                                             ::x10::array::Array_2<x10_long>* scoreMatrix,
                                             x10_long A, x10_long B) {
    
    //#line 221 "waterman_parallel.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 222 "waterman_parallel.x10"
    {
        x10_long c;
        for (c = ((x10_long)0ll); ((c) < (column)); c = ((c) + (((x10_long)1ll))))
        {
            
            //#line 223 "waterman_parallel.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     row, c)) - (::x10::waterman_parallel::penalty(
                                                   A, B, ((column) - (c)))));
            
            //#line 224 "waterman_parallel.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 225 "waterman_parallel.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 229 "waterman_parallel.x10"
    return maxScore;
    
}

//#line 244 "waterman_parallel.x10"
x10_long x10::waterman_parallel::maxColumnScore(x10_long row,
                                                x10_long column,
                                                ::x10::array::Array_2<x10_long>* scoreMatrix,
                                                x10_long A,
                                                x10_long B) {
    
    //#line 245 "waterman_parallel.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 246 "waterman_parallel.x10"
    {
        x10_long r;
        for (r = ((x10_long)0ll); ((r) < (row)); r = ((r) + (((x10_long)1ll))))
        {
            
            //#line 247 "waterman_parallel.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     r, column)) - (::x10::waterman_parallel::penalty(
                                                      A, B,
                                                      ((row) - (r)))));
            
            //#line 248 "waterman_parallel.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 249 "waterman_parallel.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 254 "waterman_parallel.x10"
    return maxScore;
    
}

//#line 284 "waterman_parallel.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* x10::waterman_parallel::traceback(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum) {
    
    //#line 285 "waterman_parallel.x10"
    x10_long bestScore = ((x10_long)0ll);
    
    //#line 286 "waterman_parallel.x10"
    ::x10::lang::Rail< x10_long >* bestCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 288 "waterman_parallel.x10"
    ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>* resultList =
      ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>::_make();
    
    //#line 290 "waterman_parallel.x10"
    {
        x10_long r;
        for (r = ((x10_long)1ll); ((r) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))));
             r = ((r) + (((x10_long)1ll)))) {
            
            //#line 291 "waterman_parallel.x10"
            {
                x10_long c;
                for (c = ((x10_long)1ll); ((c) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size))));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 292 "waterman_parallel.x10"
                    if (((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                            r, c)) > (bestScore))) {
                        
                        //#line 293 "waterman_parallel.x10"
                        bestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                      r, c);
                        
                        //#line 294 "waterman_parallel.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)0ll), r);
                        
                        //#line 295 "waterman_parallel.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)1ll), c);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 299 "waterman_parallel.x10"
    x10_long curRow = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll));
    
    //#line 300 "waterman_parallel.x10"
    x10_long curColumn = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                           ((x10_long)1ll));
    
    //#line 301 "waterman_parallel.x10"
    ::x10::lang::Rail< x10_long >* curCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 302 "waterman_parallel.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)0ll), curRow);
    
    //#line 303 "waterman_parallel.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)1ll), curColumn);
    
    //#line 306 "waterman_parallel.x10"
    while (true) {
        
        //#line 307 "waterman_parallel.x10"
        if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
            (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
        {
            
            //#line 308 "waterman_parallel.x10"
            ::x10::lang::Rail< x10_long >* midResult = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
            
            //#line 309 "waterman_parallel.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)0ll), curRow);
            
            //#line 310 "waterman_parallel.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)1ll), curColumn);
            
            //#line 311 "waterman_parallel.x10"
            resultList->add(midResult);
            
            //#line 312 "waterman_parallel.x10"
            x10_long tempColumn = ((curColumn) - (((x10_long)1ll)));
            
            //#line 313 "waterman_parallel.x10"
            x10_long tempRow = curRow;
            
            //#line 314 "waterman_parallel.x10"
            x10_long BestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   curRow, ((curColumn) - (((x10_long)1ll))));
            
            //#line 316 "waterman_parallel.x10"
            x10_long leftScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   ((curRow) - (((x10_long)1ll))),
                                   curColumn);
            
            //#line 317 "waterman_parallel.x10"
            if (((leftScore) > (BestScore))) {
                
                //#line 318 "waterman_parallel.x10"
                BestScore = leftScore;
                
                //#line 319 "waterman_parallel.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 320 "waterman_parallel.x10"
                tempColumn = curColumn;
            }
            
            //#line 322 "waterman_parallel.x10"
            x10_long leftupScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     ((curRow) - (((x10_long)1ll))),
                                     ((curColumn) - (((x10_long)1ll))));
            
            //#line 323 "waterman_parallel.x10"
            if (((leftupScore) > (BestScore))) {
                
                //#line 324 "waterman_parallel.x10"
                BestScore = leftupScore;
                
                //#line 325 "waterman_parallel.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 326 "waterman_parallel.x10"
                tempColumn = ((curColumn) - (((x10_long)1ll)));
            }
            
            //#line 328 "waterman_parallel.x10"
            curRow = tempRow;
            
            //#line 329 "waterman_parallel.x10"
            curColumn = tempColumn;
            
            //#line 331 "waterman_parallel.x10"
            if ((::x10aux::struct_equals(bestScore, ((x10_long)0ll))))
            {
                
                //#line 332 "waterman_parallel.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)0ll), curRow);
                
                //#line 333 "waterman_parallel.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)1ll), curColumn);
                
                //#line 334 "waterman_parallel.x10"
                if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
                    (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
                {
                    
                    //#line 335 "waterman_parallel.x10"
                    resultList->add(midResult);
                }
                
                //#line 337 "waterman_parallel.x10"
                break;
            }
            
        } else {
            
            //#line 341 "waterman_parallel.x10"
            break;
        }
        
    }
    
    //#line 346 "waterman_parallel.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* finalResult =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(resultList->size());
    
    //#line 347 "waterman_parallel.x10"
    {
        x10_long i;
        for (i = ((resultList->size()) - (((x10_long)1ll)));
             ((i) >= (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 348 "waterman_parallel.x10"
            ::x10aux::nullCheck(finalResult)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ((((resultList->size()) - (((x10_long)1ll)))) - (i)),
              resultList->get(i));
        }
    }
    
    //#line 351 "waterman_parallel.x10"
    ::x10::waterman_parallel::printResult(finalResult, input1,
                                          input2, bestScore);
    
    //#line 353 "waterman_parallel.x10"
    return finalResult;
    
}

//#line 372 "waterman_parallel.x10"
void x10::waterman_parallel::printResult(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* seq,
                                         ::x10::lang::Rail< x10_char >* input1,
                                         ::x10::lang::Rail< x10_char >* input2,
                                         x10_long maxScore) {
    
    //#line 373 "waterman_parallel.x10"
    x10_float totalLength = ((x10_float) ((x10_long)(::x10aux::nullCheck(seq)->FMGL(size))));
    
    //#line 374 "waterman_parallel.x10"
    x10_float Gaps = ((x10_float) (((x10_long)0ll)));
    
    //#line 375 "waterman_parallel.x10"
    x10_float identity = ((x10_float) (((x10_long)0ll)));
    
    //#line 376 "waterman_parallel.x10"
    ::x10::util::ArrayList<x10_char>* output1 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 377 "waterman_parallel.x10"
    ::x10::util::ArrayList<x10_char>* output2 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 378 "waterman_parallel.x10"
    x10_long lastRow = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                             ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                         ((x10_long)0ll));
    
    //#line 379 "waterman_parallel.x10"
    x10_long lastColumn = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                            ((x10_long)1ll));
    
    //#line 382 "waterman_parallel.x10"
    output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                   ((lastRow) - (((x10_long)1ll)))));
    
    //#line 383 "waterman_parallel.x10"
    output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                   ((lastColumn) - (((x10_long)1ll)))));
    
    //#line 384 "waterman_parallel.x10"
    if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                           ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                              ((lastColumn) - (((x10_long)1ll))))))
    {
        
        //#line 385 "waterman_parallel.x10"
        identity = ((identity) + (1.0f));
    }
    
    //#line 388 "waterman_parallel.x10"
    {
        x10_long i;
        for (i = ((x10_long)1ll); ((((x10_float) (i))) < (totalLength));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 389 "waterman_parallel.x10"
            ::x10::lang::Rail< x10_long >* coor = ::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                    i);
            
            //#line 390 "waterman_parallel.x10"
            x10_long row = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                             ((x10_long)0ll));
            
            //#line 391 "waterman_parallel.x10"
            x10_long column = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                                ((x10_long)1ll));
            
            //#line 392 "waterman_parallel.x10"
            if ((::x10aux::struct_equals(((row) - (lastRow)),
                                         ((x10_long)0ll))))
            {
                
                //#line 393 "waterman_parallel.x10"
                output1->add(((x10_char)'-'));
                
                //#line 394 "waterman_parallel.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
                
                //#line 395 "waterman_parallel.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 397 "waterman_parallel.x10"
            if ((::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)0ll))))
            {
                
                //#line 398 "waterman_parallel.x10"
                output2->add(((x10_char)'-'));
                
                //#line 399 "waterman_parallel.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 400 "waterman_parallel.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 402 "waterman_parallel.x10"
            if (((::x10aux::struct_equals(((row) - (lastRow)),
                                          ((x10_long)1ll))) &&
                (::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)1ll)))))
            {
                
                //#line 403 "waterman_parallel.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 404 "waterman_parallel.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
            }
            
            //#line 406 "waterman_parallel.x10"
            lastRow = row;
            
            //#line 407 "waterman_parallel.x10"
            lastColumn = column;
            
            //#line 408 "waterman_parallel.x10"
            if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                   ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                      ((lastColumn) - (((x10_long)1ll))))))
            {
                
                //#line 409 "waterman_parallel.x10"
                identity = ((identity) + (1.0f));
            }
            
        }
    }
    
    //#line 415 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_Strings::sl__3347), identity), (&::x10::waterman_parallel_Strings::sl__3348)), totalLength), (&::x10::waterman_parallel_Strings::sl__3349)), ((((identity) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_parallel_Strings::sl__3350))));
    
    //#line 416 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_Strings::sl__3351), Gaps), (&::x10::waterman_parallel_Strings::sl__3348)), totalLength), (&::x10::waterman_parallel_Strings::sl__3349)), ((((Gaps) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_parallel_Strings::sl__3350))));
    
    //#line 417 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::waterman_parallel_Strings::sl__3352), maxScore)));
    
    //#line 418 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_Strings::sl__3353));
    
    //#line 419 "waterman_parallel.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output1->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 420 "waterman_parallel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output1->get(
                                                                   i)));
        }
    }
    
    //#line 422 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_Strings::sl__3354));
    
    //#line 424 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_Strings::sl__3355));
    
    //#line 425 "waterman_parallel.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output2->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 426 "waterman_parallel.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output2->get(
                                                                   i)));
        }
    }
    
    //#line 428 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_parallel_Strings::sl__3354));
}

//#line 448 "waterman_parallel.x10"
void x10::waterman_parallel::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 450 "waterman_parallel.x10"
    ::x10::lang::String* input1 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)0ll));
    
    //#line 451 "waterman_parallel.x10"
    ::x10::lang::String* input2 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)1ll));
    
    //#line 452 "waterman_parallel.x10"
    ::x10::lang::String* blosumFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                        ((x10_long)2ll));
    
    //#line 453 "waterman_parallel.x10"
    x10_long A = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)3ll)));
    
    //#line 454 "waterman_parallel.x10"
    x10_long B = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)4ll)));
    
    //#line 456 "waterman_parallel.x10"
    ::x10::util::Date* date1 = ::x10::util::Date::_make();
    
    //#line 458 "waterman_parallel.x10"
    x10_long starttime = date1->getTime();
    
    //#line 460 "waterman_parallel.x10"
    ::x10::lang::Rail< x10_char >* charList1 = ::x10::waterman_parallel::parseInput(
                                                 input1);
    
    //#line 462 "waterman_parallel.x10"
    ::x10::lang::Rail< x10_char >* charList2 = ::x10::waterman_parallel::parseInput(
                                                 input2);
    
    //#line 468 "waterman_parallel.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::waterman_parallel::buildBlosum(
                                                blosumFile);
    
    //#line 472 "waterman_parallel.x10"
    x10_long n = (((x10_long)(::x10aux::nullCheck(charList1)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 474 "waterman_parallel.x10"
    x10_long m = (((x10_long)(::x10aux::nullCheck(charList2)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 476 "waterman_parallel.x10"
    ::x10::array::Array_2<x10_long>* scoreMatrix = ::x10::array::Array_2<x10_long>::_make(n,
                                                                                          m,
                                                                                          ((x10_long)0ll));
    
    //#line 478 "waterman_parallel.x10"
    ::x10::waterman_parallel::calculate(scoreMatrix, charList1,
                                        charList2, blosum,
                                        A, B);
    
    //#line 480 "waterman_parallel.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* sequence =
      ::x10::waterman_parallel::traceback(scoreMatrix, charList1,
                                          charList2, blosum);
    
    //#line 482 "waterman_parallel.x10"
    ::x10::util::Date* date2 = ::x10::util::Date::_make();
    
    //#line 483 "waterman_parallel.x10"
    x10_long endtime = date2->getTime();
    
    //#line 485 "waterman_parallel.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_parallel_Strings::sl__3356), ((endtime) - (starttime))), (&::x10::waterman_parallel_Strings::sl__3357))));
}

//#line 15 "waterman_parallel.x10"
::x10::waterman_parallel* x10::waterman_parallel::x10__waterman_parallel____this__x10__waterman_parallel(
  ) {
    return this;
    
}
void x10::waterman_parallel::_constructor() {
    this->x10::waterman_parallel::__fieldInitializers_x10_waterman_parallel();
}
::x10::waterman_parallel* x10::waterman_parallel::_make()
{
    ::x10::waterman_parallel* this_ = new (::x10aux::alloc_z< ::x10::waterman_parallel>()) ::x10::waterman_parallel();
    this_->_constructor();
    return this_;
}


void x10::waterman_parallel::__fieldInitializers_x10_waterman_parallel(
  ) {
    this->FMGL(A) = ((x10_long)10ll);
    this->FMGL(B) = ((x10_long)5ll);
}
const ::x10aux::serialization_id_t x10::waterman_parallel::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::waterman_parallel::_deserializer);

void x10::waterman_parallel::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(A));
    buf.write(this->FMGL(B));
    
}

::x10::lang::Reference* ::x10::waterman_parallel::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::waterman_parallel* this_ = new (::x10aux::alloc_z< ::x10::waterman_parallel>()) ::x10::waterman_parallel();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10::waterman_parallel::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(A) = buf.read<x10_long>();
    FMGL(B) = buf.read<x10_long>();
}

::x10aux::RuntimeType x10::waterman_parallel::rtt;
void x10::waterman_parallel::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10.waterman_parallel",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String x10::waterman_parallel_Strings::sl__3346(" ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3345("#");
::x10::lang::String x10::waterman_parallel_Strings::sl__3350("%)");
::x10::lang::String x10::waterman_parallel_Strings::sl__3347("Identity: ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3349(" (");
::x10::lang::String x10::waterman_parallel_Strings::sl__3354("\n");
::x10::lang::String x10::waterman_parallel_Strings::sl__3356("Running Time: ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3357("  milliseconds.");
::x10::lang::String x10::waterman_parallel_Strings::sl__3348("/");
::x10::lang::String x10::waterman_parallel_Strings::sl__3351("Gaps: ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3353("1: ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3355("2: ");
::x10::lang::String x10::waterman_parallel_Strings::sl__3352("Score: ");

::x10::lang::VoidFun_0_0::itable<x10_waterman_parallel__closure__1>x10_waterman_parallel__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_waterman_parallel__closure__1::__apply, &x10_waterman_parallel__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry x10_waterman_parallel__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_waterman_parallel__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t x10_waterman_parallel__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_waterman_parallel__closure__1::_deserialize);
const ::x10aux::serialization_id_t x10_waterman_parallel__closure__1::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_waterman_parallel__closure__1::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of waterman_parallel */
/*************************************************/
