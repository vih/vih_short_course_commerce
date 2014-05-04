<?php
/**
 * @file
 * vih_short_course_commerce.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vih_short_course_commerce_defaultconfig_features() {
  return array(
    'vih_short_course_commerce' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vih_short_course_commerce_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_basic'.
  $permissions['create commerce_product entities of bundle vih_short_course_basic'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create short_course_basic content'.
  $permissions['create short_course_basic content'] = array(
    'name' => 'create short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_course_basic content'.
  $permissions['delete any short_course_basic content'] = array(
    'name' => 'delete any short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_course_basic content'.
  $permissions['delete own short_course_basic content'] = array(
    'name' => 'delete own short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_basic'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_basic'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any short_course_basic content'.
  $permissions['edit any short_course_basic content'] = array(
    'name' => 'edit any short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_basic'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_basic'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own short_course_basic content'.
  $permissions['edit own short_course_basic content'] = array(
    'name' => 'edit own short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'office' => 'office',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_basic'.
  $permissions['view any commerce_product entity of bundle vih_short_course_basic'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_basic'.
  $permissions['view own commerce_product entities of bundle vih_short_course_basic'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
