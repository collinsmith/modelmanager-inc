#if defined _model_t_included
    #endinput
#endif
#define _model_t_included

enum Model {
    Invalid_Model = 0
};

/*******************************************************************************
 * model_t template
 ******************************************************************************/

#define mdl_Path_length 255

enum model_t {
    mdl_Path[mdl_Path_length+1],
};