#ifndef ERRORS_H
#define ERRORS_H

typedef struct Option{
    enum {Some_opt, None_opt} type;
    void* content;
    void* (*unwrap)(Option_t);
    int (*isSome)(Option_t);
}Option_t;

Option_t Option_wrap(void* content, int type);

typedef struct Result{
    enum {Ok_res, Err_res} type;
    void* content;
    void* (*unwrap)(Result_t);
    int (*isOk)(Result_t);
}Result_t;

Result_t Result_wrap(void* content, int type);


#endif