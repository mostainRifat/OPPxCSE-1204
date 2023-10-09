class MyClass {
    static int staticField = 10;
    int nonStaticField = 20;

    static void staticMethod() {
        System.out.println("This is a static method");
        System.out.println("Static Field: " + staticField);
        // System.out.println("Non-Static Field: " + nonStaticField);
        //compilation error--> nonStaticField is not static.
    }

    void nonStaticMethod() {
        System.out.println("This is a non-static method");
        System.out.println("Static Field: " + staticField);
        System.out.println("Non-Static Field: " + nonStaticField);
    }
}

public class Lab10Topic4 {
    public static void main(String[] args) {
        MyClass.staticMethod(); 
        // Calling a static method is allowed without creating an instance.
        
        MyClass obj = new MyClass();
        obj.nonStaticMethod(); 
        // Calling a non-static method requires creating an instance of the class.
    }
}
