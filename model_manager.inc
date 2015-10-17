#if defined _model_manager_included
    #endinput
#endif
#define _model_manager_included

#pragma reqlib model_manager

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

native Trie: mdl_loadModel(&Trie: trie = Invalid_Trie, const path[]);
native Trie: mdl_loadPlayerModel(&Trie: trie = Invalid_Trie, const model[]);
native Trie: mdl_loadWeaponModel(&Trie: trie = Invalid_Trie, const model[], const csiConst);