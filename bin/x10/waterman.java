package x10;

@x10.runtime.impl.java.X10Generated
public class waterman extends x10.core.Ref implements x10.serialization.X10JavaSerializable
{
    public static final x10.rtt.RuntimeType<waterman> $RTT = 
        x10.rtt.NamedType.<waterman> make("x10.waterman",
                                          waterman.class);
    
    public x10.rtt.RuntimeType<?> $getRTT() { return $RTT; }
    
    public x10.rtt.Type<?> $getParam(int i) { return null; }
    
    private Object writeReplace() throws java.io.ObjectStreamException {
        return new x10.serialization.SerializationProxy(this);
    }
    
    public static x10.serialization.X10JavaSerializable $_deserialize_body(x10.waterman $_obj, x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        if (x10.runtime.impl.java.Runtime.TRACE_SER) { x10.runtime.impl.java.Runtime.printTraceMessage("X10JavaSerializable: $_deserialize_body() of " + waterman.class + " calling"); } 
        return $_obj;
    }
    
    public static x10.serialization.X10JavaSerializable $_deserializer(x10.serialization.X10JavaDeserializer $deserializer) throws java.io.IOException {
        x10.waterman $_obj = new x10.waterman((java.lang.System[]) null);
        $deserializer.record_reference($_obj);
        return $_deserialize_body($_obj, $deserializer);
    }
    
    public void $_serialize(x10.serialization.X10JavaSerializer $serializer) throws java.io.IOException {
        
    }
    
    // constructor just for allocation
    public waterman(final java.lang.System[] $dummy) {
        
    }
    
    

    
    
    //#line 4 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
    public static class $Main extends x10.runtime.impl.java.Runtime
    {
        // java main method
        public static void main(java.lang.String[] args) {
            // start native runtime
            new $Main().start(args);
        }
        
        // called by native runtime inside main x10 thread
        public void runtimeCallback(final x10.core.Rail<java.lang.String> args) {
            // call the original app-main method
            waterman.main(args);
        }
    }
    
    // the original app-main method
    public static void main(final x10.core.Rail<java.lang.String> args) {
        
    }
    
    
    //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
    final public x10.waterman x10$waterman$$this$x10$waterman() {
        
        //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
        return x10.waterman.this;
    }
    
    
    //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
    // creation method for java code (1-phase java constructor)
    public waterman() {
        this((java.lang.System[]) null);
        x10$waterman$$init$S();
    }
    
    // constructor for non-virtual call
    final public x10.waterman x10$waterman$$init$S() {
         {
            
            //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
            
            
            //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
            this.__fieldInitializers_x10_waterman();
        }
        return this;
    }
    
    
    
    //#line 3 "D:/workspace2/WatermanX10/src/x10/waterman.x10"
    final public void __fieldInitializers_x10_waterman() {
        
    }
}

