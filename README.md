# Polymorphism
A example program with a brief code showcasing polymorphic abilities.

Dynamic or late binding
Run the Dynamic or late binding example program in your IDE and pay attention to the invoked display method within the Super_Class class. You will learn that binding between the origin of the virtual function (inside the Super_Class) and its replacement (defined within the subclasses) is created dynamically, during the execution of the program. This is also known as late binding and occurs and runtime.

Invoking indirectly using Super_Class
In this example a function is created only in Super_Class which can be, let us say accessed by the intherited classes. This function name is reveal_inherit_class and has the invoked display method 'within' her. display method is invoked indirectly, through reveal_inherit_class function which is defined only in the Super_Class and isn’t defined anywhere else within the example program. In main() you will notice that nowhere is the Super_Class being mentioned with an object creation.
