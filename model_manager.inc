#if defined _model_manager_included
    #endinput
#endif
#define _model_manager_included

#pragma reqlib model_manager

/*******************************************************************************
 * FORWARDS
 ******************************************************************************/

//...

/*******************************************************************************
 * NATIVES
 ******************************************************************************/

native Model: mdl_registerModel();
native Model: mdl_getModel();
native Model: mdl_numModels();