## Scope of a Variable
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
### Illustrating global scope
