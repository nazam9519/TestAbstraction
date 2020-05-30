#pragma once
#define DECLARE_NODE( TYPE )   \
  typedef struct _NODE_##TYPE  \
  {                            \
	TYPE data;                 \
	struct _NODE_##TYPE *next; \
  } NODE_##TYPE;

//
// DEFINE_FUNC( TYPE )
// Purpose: Defines a function to create a node of specified type.
//
#define DEFINE_FUNC( TYPE )                          \
  NODE_##TYPE *NODE_CREATE_##TYPE( TYPE data )       \
  {                                                  \
    NODE_##TYPE *newNode =                           \
     (NODE_##TYPE *)malloc( sizeof( NODE_##TYPE ) ); \
    newNode->data = data;                            \
    newNode->next = NULL;                            \
    return newNode;                                  \
  }