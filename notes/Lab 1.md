
**Task 1 challenges**

1. coded test bench so that upon seeing the counter value reach 9, the testbench disables the enable input for 3 clock cycles and since incrementing is dependent on the enable signal no increments are made for the next 3 clock cycles
2. adding "posedge rst" introduces an asynchronous input to the synthesised circuit that can operate immediately after an increment has been performed, instead of waiting for the next full loop. 
   (observe difference between images below) Without/With asynchronous reset

![[Pasted image 20231025201724.png]]

![[Pasted image 20231025201902.png]]

