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
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_family'.
  $permissions['create commerce_product entities of bundle vih_short_course_family'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_family',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_sommercamp'.
  $permissions['create commerce_product entities of bundle vih_short_course_sommercamp'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_sommercamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['create commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'create commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['create commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'create commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create short_course_basic content'.
  $permissions['create short_course_basic content'] = array(
    'name' => 'create short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_golf_courses content'.
  $permissions['create vih_golf_courses content'] = array(
    'name' => 'create vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_family content'.
  $permissions['create vih_short_course_family content'] = array(
    'name' => 'create vih_short_course_family content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_golf content'.
  $permissions['create vih_short_course_golf content'] = array(
    'name' => 'create vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_sommercamp content'.
  $permissions['create vih_short_course_sommercamp content'] = array(
    'name' => 'create vih_short_course_sommercamp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_sport_camp content'.
  $permissions['create vih_short_course_sport_camp content'] = array(
    'name' => 'create vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_subject content'.
  $permissions['create vih_short_course_subject content'] = array(
    'name' => 'create vih_short_course_subject content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any short_course_basic content'.
  $permissions['delete any short_course_basic content'] = array(
    'name' => 'delete any short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_golf_courses content'.
  $permissions['delete any vih_golf_courses content'] = array(
    'name' => 'delete any vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_family content'.
  $permissions['delete any vih_short_course_family content'] = array(
    'name' => 'delete any vih_short_course_family content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_golf content'.
  $permissions['delete any vih_short_course_golf content'] = array(
    'name' => 'delete any vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_sommercamp content'.
  $permissions['delete any vih_short_course_sommercamp content'] = array(
    'name' => 'delete any vih_short_course_sommercamp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_sport_camp content'.
  $permissions['delete any vih_short_course_sport_camp content'] = array(
    'name' => 'delete any vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_subject content'.
  $permissions['delete any vih_short_course_subject content'] = array(
    'name' => 'delete any vih_short_course_subject content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own short_course_basic content'.
  $permissions['delete own short_course_basic content'] = array(
    'name' => 'delete own short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_golf_courses content'.
  $permissions['delete own vih_golf_courses content'] = array(
    'name' => 'delete own vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_family content'.
  $permissions['delete own vih_short_course_family content'] = array(
    'name' => 'delete own vih_short_course_family content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_golf content'.
  $permissions['delete own vih_short_course_golf content'] = array(
    'name' => 'delete own vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_sommercamp content'.
  $permissions['delete own vih_short_course_sommercamp content'] = array(
    'name' => 'delete own vih_short_course_sommercamp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_sport_camp content'.
  $permissions['delete own vih_short_course_sport_camp content'] = array(
    'name' => 'delete own vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vih_short_course_subject content'.
  $permissions['delete own vih_short_course_subject content'] = array(
    'name' => 'delete own vih_short_course_subject content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_basic'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_basic'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_family'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_family'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_family',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_sommercamp'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_sommercamp'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_sommercamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_short_course_sportcamp'.
  $permissions['edit any commerce_product entity of bundle vih_short_course_sportcamp'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle vih_shourt_course_golf'.
  $permissions['edit any commerce_product entity of bundle vih_shourt_course_golf'] = array(
    'name' => 'edit any commerce_product entity of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any short_course_basic content'.
  $permissions['edit any short_course_basic content'] = array(
    'name' => 'edit any short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_golf_courses content'.
  $permissions['edit any vih_golf_courses content'] = array(
    'name' => 'edit any vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_family content'.
  $permissions['edit any vih_short_course_family content'] = array(
    'name' => 'edit any vih_short_course_family content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_golf content'.
  $permissions['edit any vih_short_course_golf content'] = array(
    'name' => 'edit any vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_sommercamp content'.
  $permissions['edit any vih_short_course_sommercamp content'] = array(
    'name' => 'edit any vih_short_course_sommercamp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_sport_camp content'.
  $permissions['edit any vih_short_course_sport_camp content'] = array(
    'name' => 'edit any vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_subject content'.
  $permissions['edit any vih_short_course_subject content'] = array(
    'name' => 'edit any vih_short_course_subject content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_basic'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_basic'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_family'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_family'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_family',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_sommercamp'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_sommercamp'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_sommercamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['edit own commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['edit own commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'edit own commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own short_course_basic content'.
  $permissions['edit own short_course_basic content'] = array(
    'name' => 'edit own short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_golf_courses content'.
  $permissions['edit own vih_golf_courses content'] = array(
    'name' => 'edit own vih_golf_courses content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_family content'.
  $permissions['edit own vih_short_course_family content'] = array(
    'name' => 'edit own vih_short_course_family content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_golf content'.
  $permissions['edit own vih_short_course_golf content'] = array(
    'name' => 'edit own vih_short_course_golf content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_sommercamp content'.
  $permissions['edit own vih_short_course_sommercamp content'] = array(
    'name' => 'edit own vih_short_course_sommercamp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_sport_camp content'.
  $permissions['edit own vih_short_course_sport_camp content'] = array(
    'name' => 'edit own vih_short_course_sport_camp content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_subject content'.
  $permissions['edit own vih_short_course_subject content'] = array(
    'name' => 'edit own vih_short_course_subject content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_basic'.
  $permissions['view any commerce_product entity of bundle vih_short_course_basic'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_family'.
  $permissions['view any commerce_product entity of bundle vih_short_course_family'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_family',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_sommercamp'.
  $permissions['view any commerce_product entity of bundle vih_short_course_sommercamp'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_sommercamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_short_course_sportcamp'.
  $permissions['view any commerce_product entity of bundle vih_short_course_sportcamp'] = array(
    'name' => 'view any commerce_product entity of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle vih_shourt_course_golf'.
  $permissions['view any commerce_product entity of bundle vih_shourt_course_golf'] = array(
    'name' => 'view any commerce_product entity of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_basic'.
  $permissions['view own commerce_product entities of bundle vih_short_course_basic'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_basic',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_family'.
  $permissions['view own commerce_product entities of bundle vih_short_course_family'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_family',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_sommercamp'.
  $permissions['view own commerce_product entities of bundle vih_short_course_sommercamp'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_sommercamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_short_course_sportcamp'.
  $permissions['view own commerce_product entities of bundle vih_short_course_sportcamp'] = array(
    'name' => 'view own commerce_product entities of bundle vih_short_course_sportcamp',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle vih_shourt_course_golf'.
  $permissions['view own commerce_product entities of bundle vih_shourt_course_golf'] = array(
    'name' => 'view own commerce_product entities of bundle vih_shourt_course_golf',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
