#ifndef LOOKUP_HPP
#define LOOKUP_HPP


// Step 1 
// Introduce a structure to hold lookup table data
typedef struct buttonHandlerStruct_t
{
    const char *buttonPointer;
    const char *currScreenPointer;
    const char *nextScreenPointer;
    const char *prevScreenPointer; 
}buttonHandlerStruct_t;

// typedef struct buttonHandlerStruct_t
// {
//     const char *buttonPointer;
//     short currScreenPointer;
//     short nextScreenPointer;
//     short prevScreenPointer; 
// }buttonHaconstndlerStruct_t;
extern buttonHandlerStruct_t updateValuesList[];


#endif