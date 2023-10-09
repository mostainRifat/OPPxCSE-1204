class MyClass {

    private void privateMethod() {
        System.out.println("Inside private method....");
    }

    public void publicMethod() {
        System.out.println("Inside public method....");
        privateMethod(); 
        // This is allowed since privateMethod is called within the same class.
    }
}

public class Lab10Topic3 {
    public static void main(String[] args) {
        MyClass obj = new MyClass();
        obj.publicMethod();
        //obj.privateMethod();
        //Compilation error privateMethod is not accessible from outside the class.
    }
}

