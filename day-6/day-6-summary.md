## Scope of a Variable
### What is Scope of a Variable?

### Local scope - nested block
```c
{
	/*OUTER BLOCK*/
    
      {
    	
        
        //contents of the outer block just before the start of this block
        //CAN be accessed here
        
        /*INNER BLOCK*/
        
        
      }
     
       //contents of the inner block are NOT accessible here
 }


```

### Local scope - different blocks
```c
{

	/*BLOCK 1*/
    // contents of BLOCK 2 cannot be accessed here
    
}


{

	/*BLOCK 2*/
    // contents of BLOCK 1 cannot be accessed here
    
}
```
### Global scope
```c
//all global variables are declared here
function1()
	{
    
    // all global variables can be accessed inside function1
    
    }
function2()
	{
    
    // all global variables can be accessed inside function2
     
    }
```
