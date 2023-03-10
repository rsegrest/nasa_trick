/*
    PURPOSE:
        (Enumeration of the Variable Message types)
*/

#ifndef VARIABLE_SERVER_MESSAGE_TYPES_H
#define VARIABLE_SERVER_MESSAGE_TYPES_H

typedef enum {
    VS_IP_ERROR = -1,
    VS_VAR_LIST = 0,
    VS_VAR_EXISTS = 1,
    VS_SIE_RESOURCE = 2,
    VS_LIST_SIZE = 3 ,
    VS_STDIO = 4,
    VS_SEND_ONCE = 5,
    VS_MIN_CODE = VS_IP_ERROR,
    VS_MAX_CODE = VS_SEND_ONCE
} VS_MESSAGE_TYPE ;

#endif

