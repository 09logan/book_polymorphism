Please add detail to this file on how you implement polymorphism in Book and it's subclasses.


Book is the base class.Novel and TextBook are its derived classes.A pure virtual function toString makes the base class 
abstract. So, an object cannot be created in Book.Hence, constructors which were previously in Book class were removed.Setters and Getters are used 
for price and quantity.Whereas, book’s name, and author object are set as protected. This was done as they needed to be set 
from within the constructor of Novel and TextBook. And they do not need setter, and hence cannot be changed once created.
Then using the concept of poilymorphism, previously done assignment was morphed into this new form.