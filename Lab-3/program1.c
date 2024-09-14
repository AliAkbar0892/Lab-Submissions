PROBLEM 1:
In the given code, the datatype used for variable "testInteger" is "int" 
  Datatype "int" only store values ranging between -2,147,483,648 to 2,147,483,647. But the value being store (which is 3,000,000) is larger then the possible value tha "int" datatype can store , which is causing overflow and a random value is being displayed on output window,
  To tackle this problem this problem, The datatype "unsigned int" or "long int" should be used.
