# C-result-wrapping-lib
pointless recreation of Rust's error handling in C

Simple test library that implements Rust's Option and Result types.  
Adds Option and Result types that contains a pointer to the value, a type and two object-like methods (is_Some/Ok and unwrap)

could be useful if used to wrap every function's return value to force the user to handle errors. almost impossible and stupid
