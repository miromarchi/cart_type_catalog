<?php
/**
 * @file
 * cart_type_catalog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cart_type_catalog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cart_catalog content'.
  $permissions['create cart_catalog content'] = array(
    'name' => 'create cart_catalog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cart_catalog content'.
  $permissions['delete any cart_catalog content'] = array(
    'name' => 'delete any cart_catalog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cart_catalog content'.
  $permissions['delete own cart_catalog content'] = array(
    'name' => 'delete own cart_catalog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cart_catalog content'.
  $permissions['edit any cart_catalog content'] = array(
    'name' => 'edit any cart_catalog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cart_catalog content'.
  $permissions['edit own cart_catalog content'] = array(
    'name' => 'edit own cart_catalog content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
