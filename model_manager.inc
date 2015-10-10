#if defined _model_manager_included
    #endinput
#endif
#define _model_manager_included

#pragma reqlib model_manager

stock const MODEL_NAME[] = "model_name";
stock const MODEL_PATH[] = "model_path";

/**
 * @param name  unique name for this model
 * @param path  path to the model file
 * @param copy  trie handle to copy (or overwrite) name and path 
 * @param model existing trie handle which already contains the keys
 */
native Trie:cs_registerModel(
        const name[] = NULL_STRING,
        const nameLen = sizeof name,
        const path[] = NULL_STRING,
        const pathLen = sizeof path,
        const Trie:model = Invalid_Trie);

/*******************************************************************************
 * FORWARDS
 ******************************************************************************/

//...

/*******************************************************************************
 * NATIVES
 ******************************************************************************/

native Model: mdl_registerModel();
native PlayerModel: mdl_registerPlayerModel();
native WeaponModel: mdl_registerWeaponModel();