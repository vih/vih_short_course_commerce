<?php
/**
 * @file
 * vih_short_course_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vih_short_course_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create short_course_basic content'.
  $permissions['create short_course_basic content'] = array(
    'name' => 'create short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create vih_short_course_kajak content'.
  $permissions['create vih_short_course_kajak content'] = array(
    'name' => 'create vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vih_short_course_kajak content'.
  $permissions['delete any vih_short_course_kajak content'] = array(
    'name' => 'delete any vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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

  // Exported permission: 'delete own vih_short_course_kajak content'.
  $permissions['delete own vih_short_course_kajak content'] = array(
    'name' => 'delete own vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any short_course_basic content'.
  $permissions['edit any short_course_basic content'] = array(
    'name' => 'edit any short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vih_short_course_kajak content'.
  $permissions['edit any vih_short_course_kajak content'] = array(
    'name' => 'edit any vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own short_course_basic content'.
  $permissions['edit own short_course_basic content'] = array(
    'name' => 'edit own short_course_basic content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vih_short_course_kajak content'.
  $permissions['edit own vih_short_course_kajak content'] = array(
    'name' => 'edit own vih_short_course_kajak content',
    'roles' => array(
      'administrator' => 'administrator',
      'kontor' => 'kontor',
      'lærer' => 'lærer',
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
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
      'redaktør' => 'redaktør',
    ),
    'module' => 'node',
  );

  return $permissions;
}
