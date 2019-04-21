/*************************************************/
/* START of waterman */
#include <x10/waterman.h>


//#line 19 "waterman.x10"
::x10::util::HashMap<x10_char, x10_long>* x10::waterman::FMGL(letterValue);
void x10::waterman::FMGL(letterValue__do_init)() {
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: x10::waterman.letterValue");
    ::x10::util::HashMap<x10_char, x10_long>* __var0__ = ::x10::util::HashMap<x10_char, x10_long>::_make();
    FMGL(letterValue) = __var0__;
    FMGL(letterValue__status) = ::x10aux::StaticInitController::INITIALIZED;
}
void x10::waterman::FMGL(letterValue__init)() {
    ::x10aux::StaticInitController::initField(&FMGL(letterValue__status), &FMGL(letterValue__do_init), &FMGL(letterValue__exception), "x10::waterman.letterValue");
    
}
volatile ::x10aux::StaticInitController::status x10::waterman::FMGL(letterValue__status);
::x10::lang::CheckedThrowable* x10::waterman::FMGL(letterValue__exception);


//#line 20 "waterman.x10"

//#line 21 "waterman.x10"

//#line 27 "waterman.x10"
::x10::array::Array_2<x10_long>* x10::waterman::buildBlosum(::x10::lang::String* inputBlosum) {
    
    //#line 28 "waterman.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::array::Array_2<x10_long>::_make(((x10_long)50ll),
                                                                                     ((x10_long)50ll),
                                                                                     ((x10_long)0ll));
    
    //#line 29 "waterman.x10"
    try {
        
        //#line 30 "waterman.x10"
        x10_long counter = ((x10_long)0ll);
        
        //#line 31 "waterman.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputBlosum);
        
        //#line 32 "waterman.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3168;
            for (line__3168 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3168));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3168));
                
                //#line 33 "waterman.x10"
                if ((::x10aux::struct_equals(::x10aux::nullCheck(line)->x10::lang::String::indexOf(
                                               (&::x10::waterman_Strings::sl__3208)),
                                             (-(((x10_int) (((x10_long)1ll))))))))
                {
                    
                    //#line 34 "waterman.x10"
                    if ((::x10aux::struct_equals(counter,
                                                 ((x10_long)0ll))))
                    {
                        
                        //#line 35 "waterman.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 36 "waterman.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 37 "waterman.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_Strings::sl__3209), preline);
                        
                        //#line 38 "waterman.x10"
                        x10_long i__3132min__3196 = ((x10_long)0ll);
                        x10_long i__3132max__3197 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3198;
                            for (i__3198 = i__3132min__3196;
                                 ((i__3198) <= (i__3132max__3197));
                                 i__3198 = ((i__3198) + (((x10_long)1ll))))
                            {
                                x10_long i__3199 = i__3198;
                                
                                //#line 39 "waterman.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3199))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 40 "waterman.x10"
                                    ::x10::waterman::FMGL(letterValue__get)()->put(
                                      ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                i__3199))->x10::lang::String::trim())->x10::lang::String::charAt(
                                        ((x10_int) (((x10_long)0ll)))),
                                      letterIndex);
                                }
                                
                                //#line 41 "waterman.x10"
                                letterIndex = ((letterIndex) + (((x10_long)1ll)));
                            }
                        }
                        
                    } else {
                        
                        //#line 45 "waterman.x10"
                        x10_long letterIndex = ((x10_long)0ll);
                        
                        //#line 46 "waterman.x10"
                        ::x10::lang::String* preline = ::x10aux::nullCheck(line)->x10::lang::String::trim();
                        
                        //#line 47 "waterman.x10"
                        ::x10::lang::Rail< ::x10::lang::String* >* tokens =
                          ::x10::lang::StringHelper::split((&::x10::waterman_Strings::sl__3209), preline);
                        
                        //#line 48 "waterman.x10"
                        x10_long i__3150min__3200 = ((x10_long)1ll);
                        x10_long i__3150max__3201 = ((x10_long)(((x10_int) ((((x10_long)(::x10aux::nullCheck(tokens)->FMGL(size))) - (((x10_long)1ll)))))));
                        {
                            x10_long i__3202;
                            for (i__3202 = i__3150min__3200;
                                 ((i__3202) <= (i__3150max__3201));
                                 i__3202 = ((i__3202) + (((x10_long)1ll))))
                            {
                                x10_long i__3203 = i__3202;
                                
                                //#line 49 "waterman.x10"
                                if ((!::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                        i__3203))->x10::lang::String::trim())->x10::lang::String::length(),
                                                              ((x10_int) (((x10_long)0ll))))))
                                {
                                    
                                    //#line 50 "waterman.x10"
                                    blosum->x10::array::Array_2<x10_long>::__set(
                                      ((counter) - (((x10_long)1ll))),
                                      letterIndex, ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(::x10aux::nullCheck(tokens)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                             i__3203))->x10::lang::String::trim()));
                                    
                                    //#line 51 "waterman.x10"
                                    letterIndex = ((letterIndex) + (((x10_long)1ll)));
                                }
                                
                            }
                        }
                        
                    }
                    
                    //#line 56 "waterman.x10"
                    counter = ((counter) + (((x10_long)1ll)));
                }
                
            }
        }
        
        //#line 61 "waterman.x10"
        return blosum;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc2) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc2)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc2);
            {
                
                //#line 66 "waterman.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 70 "waterman.x10"
    return ::x10aux::class_cast_unchecked< ::x10::array::Array_2<x10_long>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 83 "waterman.x10"
x10_long x10::waterman::penalty(x10_long a, x10_long b, x10_long l) {
    
    //#line 85 "waterman.x10"
    return ((a) + (((b) * (((l) - (((x10_long)1ll)))))));
    
}

//#line 99 "waterman.x10"
::x10::lang::Rail< x10_char >* x10::waterman::parseInput(
  ::x10::lang::String* inputPath) {
    
    //#line 101 "waterman.x10"
    try {
        
        //#line 103 "waterman.x10"
        ::x10::io::File* input = ::x10::io::File::_make(inputPath);
        
        //#line 105 "waterman.x10"
        x10_long fullLength = ((x10_long)0ll);
        
        //#line 107 "waterman.x10"
        ::x10::util::ArrayList<x10_char>* charList = ::x10::util::ArrayList<x10_char>::_make();
        
        //#line 109 "waterman.x10"
        x10_long count = ((x10_long)0ll);
        
        //#line 111 "waterman.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::String*>* line__3195;
            for (line__3195 = ::x10aux::nullCheck(input->lines())->iterator();
                 ::x10::lang::Iterator< ::x10::lang::String*>::hasNext(::x10aux::nullCheck(line__3195));
                 ) {
                ::x10::lang::String* line = ::x10::lang::Iterator< ::x10::lang::String*>::next(::x10aux::nullCheck(line__3195));
                
                //#line 113 "waterman.x10"
                if ((!::x10aux::struct_equals(count, ((x10_long)0ll))))
                {
                    
                    //#line 115 "waterman.x10"
                    fullLength = ((fullLength) + (((x10_long)(::x10aux::nullCheck(line)->x10::lang::String::length()))));
                    
                    //#line 117 "waterman.x10"
                    ::x10::lang::Rail< x10_char >* output =
                      ::x10aux::nullCheck(line)->x10::lang::String::chars();
                    
                    //#line 119 "waterman.x10"
                    ::x10::lang::Rail< x10_char >* rail__3204 =
                      output;
                    x10_long size__3205 = (x10_long)(::x10aux::nullCheck(rail__3204)->FMGL(size));
                    {
                        x10_long idx__3206;
                        for (idx__3206 = ((x10_long)0ll);
                             ((idx__3206) < (size__3205));
                             idx__3206 = ((idx__3206) + (((x10_long)1ll))))
                        {
                            x10_char ch__3207 = ::x10aux::nullCheck(rail__3204)->x10::lang::Rail< x10_char >::__apply(
                                                  idx__3206);
                            
                            //#line 121 "waterman.x10"
                            charList->add(ch__3207);
                        }
                    }
                    
                }
                
                //#line 127 "waterman.x10"
                count = ((count) + (((x10_long)1ll)));
            }
        }
        
        //#line 131 "waterman.x10"
        ::x10::lang::Rail< x10_char >* ret = charList->toRail();
        
        //#line 133 "waterman.x10"
        return ret;
        
    }
    catch (::x10::lang::CheckedThrowable* __exc5) {
        if (::x10aux::instanceof< ::x10::io::IOException*>(__exc5)) {
            ::x10::io::IOException* e = static_cast< ::x10::io::IOException*>(__exc5);
            {
                
                //#line 141 "waterman.x10"
                ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                  reinterpret_cast< ::x10::lang::CheckedThrowable*>(e));
            }
        } else {
            throw;
        }
    }
    
    //#line 145 "waterman.x10"
    return ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_char >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
    
}

//#line 165 "waterman.x10"
::x10::array::Array_2<x10_long>* x10::waterman::calculate(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum,
  x10_long A, x10_long B) {
    
    //#line 168 "waterman.x10"
    {
        x10_long r;
        for (r = ((x10_long)1ll); ((r) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))));
             r = ((r) + (((x10_long)1ll)))) {
            
            //#line 169 "waterman.x10"
            {
                x10_long c;
                for (c = ((x10_long)1ll); ((c) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size))));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 170 "waterman.x10"
                    x10_long maxScore = ((x10_long)0ll);
                    
                    //#line 171 "waterman.x10"
                    x10_long maxR = ::x10::waterman::maxRowScore(
                                      r, c, scoreMatrix, A,
                                      B);
                    
                    //#line 172 "waterman.x10"
                    if (((maxR) > (maxScore))) {
                        
                        //#line 173 "waterman.x10"
                        maxScore = maxR;
                    }
                    
                    //#line 175 "waterman.x10"
                    x10_long maxC = ::x10::waterman::maxColumnScore(
                                      r, c, scoreMatrix, A,
                                      B);
                    
                    //#line 176 "waterman.x10"
                    if (((maxC) > (maxScore))) {
                        
                        //#line 177 "waterman.x10"
                        maxScore = maxC;
                    }
                    
                    //#line 179 "waterman.x10"
                    x10_long diagnalScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                                ((r) - (((x10_long)1ll))),
                                                ((c) - (((x10_long)1ll))))) + (::x10aux::nullCheck(blosum)->x10::array::Array_2<x10_long>::__apply(
                                                                                 ::x10::waterman::FMGL(letterValue__get)()->get(
                                                                                   ::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                                                                     ((r) - (((x10_long)1ll))))),
                                                                                 ::x10::waterman::FMGL(letterValue__get)()->get(
                                                                                   ::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                                     ((c) - (((x10_long)1ll))))))));
                    
                    //#line 180 "waterman.x10"
                    if (((diagnalScore) > (maxScore))) {
                        
                        //#line 181 "waterman.x10"
                        maxScore = diagnalScore;
                    }
                    
                    //#line 183 "waterman.x10"
                    ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__set(
                      r, c, maxScore);
                }
            }
            
        }
    }
    
    //#line 187 "waterman.x10"
    return scoreMatrix;
    
}

//#line 197 "waterman.x10"
x10_long x10::waterman::maxRowScore(x10_long row, x10_long column,
                                    ::x10::array::Array_2<x10_long>* scoreMatrix,
                                    x10_long A, x10_long B) {
    
    //#line 198 "waterman.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 199 "waterman.x10"
    {
        x10_long c;
        for (c = ((x10_long)0ll); ((c) < (column)); c = ((c) + (((x10_long)1ll))))
        {
            
            //#line 200 "waterman.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     row, c)) - (::x10::waterman::penalty(
                                                   A, B, ((column) - (c)))));
            
            //#line 201 "waterman.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 202 "waterman.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 206 "waterman.x10"
    return maxScore;
    
}

//#line 221 "waterman.x10"
x10_long x10::waterman::maxColumnScore(x10_long row, x10_long column,
                                       ::x10::array::Array_2<x10_long>* scoreMatrix,
                                       x10_long A, x10_long B) {
    
    //#line 222 "waterman.x10"
    x10_long maxScore = ((x10_long)0ll);
    
    //#line 223 "waterman.x10"
    {
        x10_long r;
        for (r = ((x10_long)0ll); ((r) < (row)); r = ((r) + (((x10_long)1ll))))
        {
            
            //#line 224 "waterman.x10"
            x10_long tempScore = ((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     r, column)) - (::x10::waterman::penalty(
                                                      A, B,
                                                      ((row) - (r)))));
            
            //#line 225 "waterman.x10"
            if (((tempScore) > (maxScore))) {
                
                //#line 226 "waterman.x10"
                maxScore = tempScore;
            }
            
        }
    }
    
    //#line 231 "waterman.x10"
    return maxScore;
    
}

//#line 261 "waterman.x10"
::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* x10::waterman::traceback(
  ::x10::array::Array_2<x10_long>* scoreMatrix, ::x10::lang::Rail< x10_char >* input1,
  ::x10::lang::Rail< x10_char >* input2, ::x10::array::Array_2<x10_long>* blosum) {
    
    //#line 262 "waterman.x10"
    x10_long bestScore = ((x10_long)0ll);
    
    //#line 263 "waterman.x10"
    ::x10::lang::Rail< x10_long >* bestCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 265 "waterman.x10"
    ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>* resultList =
      ::x10::util::ArrayList< ::x10::lang::Rail< x10_long >*>::_make();
    
    //#line 267 "waterman.x10"
    {
        x10_long r;
        for (r = ((x10_long)1ll); ((r) <= ((x10_long)(::x10aux::nullCheck(input1)->FMGL(size))));
             r = ((r) + (((x10_long)1ll)))) {
            
            //#line 268 "waterman.x10"
            {
                x10_long c;
                for (c = ((x10_long)1ll); ((c) <= ((x10_long)(::x10aux::nullCheck(input2)->FMGL(size))));
                     c = ((c) + (((x10_long)1ll)))) {
                    
                    //#line 269 "waterman.x10"
                    if (((::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                            r, c)) > (bestScore))) {
                        
                        //#line 270 "waterman.x10"
                        bestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                      r, c);
                        
                        //#line 271 "waterman.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)0ll), r);
                        
                        //#line 272 "waterman.x10"
                        ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__set(
                          ((x10_long)1ll), c);
                    }
                    
                }
            }
            
        }
    }
    
    //#line 276 "waterman.x10"
    x10_long curRow = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                        ((x10_long)0ll));
    
    //#line 277 "waterman.x10"
    x10_long curColumn = ::x10aux::nullCheck(bestCoordinate)->x10::lang::Rail< x10_long >::__apply(
                           ((x10_long)1ll));
    
    //#line 278 "waterman.x10"
    ::x10::lang::Rail< x10_long >* curCoordinate = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
    
    //#line 279 "waterman.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)0ll), curRow);
    
    //#line 280 "waterman.x10"
    ::x10aux::nullCheck(curCoordinate)->x10::lang::Rail< x10_long >::__set(
      ((x10_long)1ll), curColumn);
    
    //#line 283 "waterman.x10"
    while (true) {
        
        //#line 284 "waterman.x10"
        if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
            (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
        {
            
            //#line 285 "waterman.x10"
            ::x10::lang::Rail< x10_long >* midResult = ::x10::lang::Rail< x10_long >::_make(((x10_long)2ll));
            
            //#line 286 "waterman.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)0ll), curRow);
            
            //#line 287 "waterman.x10"
            midResult->x10::lang::Rail< x10_long >::__set(
              ((x10_long)1ll), curColumn);
            
            //#line 288 "waterman.x10"
            resultList->add(midResult);
            
            //#line 289 "waterman.x10"
            x10_long tempColumn = ((curColumn) - (((x10_long)1ll)));
            
            //#line 290 "waterman.x10"
            x10_long tempRow = curRow;
            
            //#line 291 "waterman.x10"
            x10_long BestScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   curRow, ((curColumn) - (((x10_long)1ll))));
            
            //#line 293 "waterman.x10"
            x10_long leftScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                   ((curRow) - (((x10_long)1ll))),
                                   curColumn);
            
            //#line 294 "waterman.x10"
            if (((leftScore) > (BestScore))) {
                
                //#line 295 "waterman.x10"
                BestScore = leftScore;
                
                //#line 296 "waterman.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 297 "waterman.x10"
                tempColumn = curColumn;
            }
            
            //#line 299 "waterman.x10"
            x10_long leftupScore = ::x10aux::nullCheck(scoreMatrix)->x10::array::Array_2<x10_long>::__apply(
                                     ((curRow) - (((x10_long)1ll))),
                                     ((curColumn) - (((x10_long)1ll))));
            
            //#line 300 "waterman.x10"
            if (((leftupScore) > (BestScore))) {
                
                //#line 301 "waterman.x10"
                BestScore = leftupScore;
                
                //#line 302 "waterman.x10"
                tempRow = ((curRow) - (((x10_long)1ll)));
                
                //#line 303 "waterman.x10"
                tempColumn = ((curColumn) - (((x10_long)1ll)));
            }
            
            //#line 305 "waterman.x10"
            curRow = tempRow;
            
            //#line 306 "waterman.x10"
            curColumn = tempColumn;
            
            //#line 308 "waterman.x10"
            if ((::x10aux::struct_equals(bestScore, ((x10_long)0ll))))
            {
                
                //#line 309 "waterman.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)0ll), curRow);
                
                //#line 310 "waterman.x10"
                midResult->x10::lang::Rail< x10_long >::__set(
                  ((x10_long)1ll), curColumn);
                
                //#line 311 "waterman.x10"
                if (((!::x10aux::struct_equals(curRow, ((x10_long)0ll))) &&
                    (!::x10aux::struct_equals(curColumn, ((x10_long)0ll)))))
                {
                    
                    //#line 312 "waterman.x10"
                    resultList->add(midResult);
                }
                
                //#line 314 "waterman.x10"
                break;
            }
            
        } else {
            
            //#line 318 "waterman.x10"
            break;
        }
        
    }
    
    //#line 323 "waterman.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* finalResult =
      ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::_make(resultList->size());
    
    //#line 324 "waterman.x10"
    {
        x10_long i;
        for (i = ((resultList->size()) - (((x10_long)1ll)));
             ((i) >= (((x10_long)0ll))); i = ((i) - (((x10_long)1ll))))
        {
            
            //#line 325 "waterman.x10"
            ::x10aux::nullCheck(finalResult)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__set(
              ((((resultList->size()) - (((x10_long)1ll)))) - (i)),
              resultList->get(i));
        }
    }
    
    //#line 328 "waterman.x10"
    ::x10::waterman::printResult(finalResult, input1, input2,
                                 bestScore);
    
    //#line 330 "waterman.x10"
    return finalResult;
    
}

//#line 349 "waterman.x10"
void x10::waterman::printResult(::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* seq,
                                ::x10::lang::Rail< x10_char >* input1,
                                ::x10::lang::Rail< x10_char >* input2,
                                x10_long maxScore) {
    
    //#line 350 "waterman.x10"
    x10_float totalLength = ((x10_float) ((x10_long)(::x10aux::nullCheck(seq)->FMGL(size))));
    
    //#line 351 "waterman.x10"
    x10_float Gaps = ((x10_float) (((x10_long)0ll)));
    
    //#line 352 "waterman.x10"
    x10_float identity = ((x10_float) (((x10_long)0ll)));
    
    //#line 353 "waterman.x10"
    ::x10::util::ArrayList<x10_char>* output1 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 354 "waterman.x10"
    ::x10::util::ArrayList<x10_char>* output2 = ::x10::util::ArrayList<x10_char>::_make();
    
    //#line 355 "waterman.x10"
    x10_long lastRow = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                             ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                         ((x10_long)0ll));
    
    //#line 356 "waterman.x10"
    x10_long lastColumn = ::x10aux::nullCheck(::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                ((x10_long)0ll)))->x10::lang::Rail< x10_long >::__apply(
                            ((x10_long)1ll));
    
    //#line 359 "waterman.x10"
    output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                   ((lastRow) - (((x10_long)1ll)))));
    
    //#line 360 "waterman.x10"
    output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                   ((lastColumn) - (((x10_long)1ll)))));
    
    //#line 361 "waterman.x10"
    if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                           ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                              ((lastColumn) - (((x10_long)1ll))))))
    {
        
        //#line 362 "waterman.x10"
        identity = ((identity) + (1.0f));
    }
    
    //#line 365 "waterman.x10"
    {
        x10_long i;
        for (i = ((x10_long)1ll); ((((x10_float) (i))) < (totalLength));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 366 "waterman.x10"
            ::x10::lang::Rail< x10_long >* coor = ::x10aux::nullCheck(seq)->x10::lang::Rail< ::x10::lang::Rail< x10_long >* >::__apply(
                                                    i);
            
            //#line 367 "waterman.x10"
            x10_long row = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                             ((x10_long)0ll));
            
            //#line 368 "waterman.x10"
            x10_long column = ::x10aux::nullCheck(coor)->x10::lang::Rail< x10_long >::__apply(
                                ((x10_long)1ll));
            
            //#line 369 "waterman.x10"
            if ((::x10aux::struct_equals(((row) - (lastRow)),
                                         ((x10_long)0ll))))
            {
                
                //#line 370 "waterman.x10"
                output1->add(((x10_char)'-'));
                
                //#line 371 "waterman.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
                
                //#line 372 "waterman.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 374 "waterman.x10"
            if ((::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)0ll))))
            {
                
                //#line 375 "waterman.x10"
                output2->add(((x10_char)'-'));
                
                //#line 376 "waterman.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 377 "waterman.x10"
                Gaps = ((Gaps) + (1.0f));
            } else 
            //#line 379 "waterman.x10"
            if (((::x10aux::struct_equals(((row) - (lastRow)),
                                          ((x10_long)1ll))) &&
                (::x10aux::struct_equals(((column) - (lastColumn)),
                                         ((x10_long)1ll)))))
            {
                
                //#line 380 "waterman.x10"
                output1->add(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                               ((row) - (((x10_long)1ll)))));
                
                //#line 381 "waterman.x10"
                output2->add(::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                               ((column) - (((x10_long)1ll)))));
            }
            
            //#line 383 "waterman.x10"
            lastRow = row;
            
            //#line 384 "waterman.x10"
            lastColumn = column;
            
            //#line 385 "waterman.x10"
            if (::x10aux::equals(::x10aux::nullCheck(input1)->x10::lang::Rail< x10_char >::__apply(
                                   ((lastRow) - (((x10_long)1ll)))),::x10aux::nullCheck(input2)->x10::lang::Rail< x10_char >::__apply(
                                                                      ((lastColumn) - (((x10_long)1ll))))))
            {
                
                //#line 386 "waterman.x10"
                identity = ((identity) + (1.0f));
            }
            
        }
    }
    
    //#line 392 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_Strings::sl__3210), identity), (&::x10::waterman_Strings::sl__3211)), totalLength), (&::x10::waterman_Strings::sl__3212)), ((((identity) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_Strings::sl__3213))));
    
    //#line 393 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_Strings::sl__3214), Gaps), (&::x10::waterman_Strings::sl__3211)), totalLength), (&::x10::waterman_Strings::sl__3212)), ((((Gaps) / (totalLength))) * (((x10_float) (((x10_long)100ll)))))), (&::x10::waterman_Strings::sl__3213))));
    
    //#line 394 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::waterman_Strings::sl__3215), maxScore)));
    
    //#line 395 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_Strings::sl__3216));
    
    //#line 396 "waterman.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output1->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 397 "waterman.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output1->get(
                                                                   i)));
        }
    }
    
    //#line 399 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_Strings::sl__3217));
    
    //#line 401 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_Strings::sl__3218));
    
    //#line 402 "waterman.x10"
    {
        x10_long i;
        for (i = ((x10_long)0ll); ((i) < (output2->size()));
             i = ((i) + (((x10_long)1ll)))) {
            
            //#line 403 "waterman.x10"
            ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::print(
              ::x10aux::class_cast_unchecked< ::x10::lang::Any*>(output2->get(
                                                                   i)));
        }
    }
    
    //#line 405 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->print((&::x10::waterman_Strings::sl__3217));
}

//#line 425 "waterman.x10"
void x10::waterman::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 427 "waterman.x10"
    ::x10::lang::String* input1 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)0ll));
    
    //#line 428 "waterman.x10"
    ::x10::lang::String* input2 = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                    ((x10_long)1ll));
    
    //#line 429 "waterman.x10"
    ::x10::lang::String* blosumFile = ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                        ((x10_long)2ll));
    
    //#line 430 "waterman.x10"
    x10_long A = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)3ll)));
    
    //#line 431 "waterman.x10"
    x10_long B = ::x10::lang::LongNatives::parseLong(::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                       ((x10_long)4ll)));
    
    //#line 433 "waterman.x10"
    ::x10::util::Date* date1 = ::x10::util::Date::_make();
    
    //#line 435 "waterman.x10"
    x10_long starttime = date1->getTime();
    
    //#line 437 "waterman.x10"
    ::x10::lang::Rail< x10_char >* charList1 = ::x10::waterman::parseInput(
                                                 input1);
    
    //#line 439 "waterman.x10"
    ::x10::lang::Rail< x10_char >* charList2 = ::x10::waterman::parseInput(
                                                 input2);
    
    //#line 445 "waterman.x10"
    ::x10::array::Array_2<x10_long>* blosum = ::x10::waterman::buildBlosum(
                                                blosumFile);
    
    //#line 449 "waterman.x10"
    x10_long n = (((x10_long)(::x10aux::nullCheck(charList1)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 451 "waterman.x10"
    x10_long m = (((x10_long)(::x10aux::nullCheck(charList2)->FMGL(size))) + (((x10_long)1ll)));
    
    //#line 453 "waterman.x10"
    ::x10::array::Array_2<x10_long>* scoreMatrix = ::x10::array::Array_2<x10_long>::_make(n,
                                                                                          m,
                                                                                          ((x10_long)0ll));
    
    //#line 455 "waterman.x10"
    ::x10::waterman::calculate(scoreMatrix, charList1, charList2,
                               blosum, A, B);
    
    //#line 457 "waterman.x10"
    ::x10::lang::Rail< ::x10::lang::Rail< x10_long >* >* sequence =
      ::x10::waterman::traceback(scoreMatrix, charList1, charList2,
                                 blosum);
    
    //#line 459 "waterman.x10"
    ::x10::util::Date* date2 = ::x10::util::Date::_make();
    
    //#line 460 "waterman.x10"
    x10_long endtime = date2->getTime();
    
    //#line 462 "waterman.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::waterman_Strings::sl__3219), ((endtime) - (starttime))), (&::x10::waterman_Strings::sl__3220))));
}

//#line 17 "waterman.x10"
::x10::waterman* x10::waterman::x10__waterman____this__x10__waterman(
  ) {
    return this;
    
}
void x10::waterman::_constructor() {
    this->x10::waterman::__fieldInitializers_x10_waterman();
}
::x10::waterman* x10::waterman::_make() {
    ::x10::waterman* this_ = new (::x10aux::alloc_z< ::x10::waterman>()) ::x10::waterman();
    this_->_constructor();
    return this_;
}


void x10::waterman::__fieldInitializers_x10_waterman() {
    this->FMGL(A) = ((x10_long)10ll);
    this->FMGL(B) = ((x10_long)5ll);
}
const ::x10aux::serialization_id_t x10::waterman::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::waterman::_deserializer);

void x10::waterman::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(A));
    buf.write(this->FMGL(B));
    
}

::x10::lang::Reference* ::x10::waterman::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::waterman* this_ = new (::x10aux::alloc_z< ::x10::waterman>()) ::x10::waterman();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void x10::waterman::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(A) = buf.read<x10_long>();
    FMGL(B) = buf.read<x10_long>();
}

::x10aux::RuntimeType x10::waterman::rtt;
void x10::waterman::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("x10.waterman",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String x10::waterman_Strings::sl__3209(" ");
::x10::lang::String x10::waterman_Strings::sl__3208("#");
::x10::lang::String x10::waterman_Strings::sl__3213("%)");
::x10::lang::String x10::waterman_Strings::sl__3210("Identity: ");
::x10::lang::String x10::waterman_Strings::sl__3212(" (");
::x10::lang::String x10::waterman_Strings::sl__3217("\n");
::x10::lang::String x10::waterman_Strings::sl__3219("Running Time: ");
::x10::lang::String x10::waterman_Strings::sl__3220("  milliseconds.");
::x10::lang::String x10::waterman_Strings::sl__3211("/");
::x10::lang::String x10::waterman_Strings::sl__3214("Gaps: ");
::x10::lang::String x10::waterman_Strings::sl__3216("1: ");
::x10::lang::String x10::waterman_Strings::sl__3218("2: ");
::x10::lang::String x10::waterman_Strings::sl__3215("Score: ");

/* END of waterman */
/*************************************************/
