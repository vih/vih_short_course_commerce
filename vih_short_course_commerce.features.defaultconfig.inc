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

  // Exported permission: 'publish any short_course_basic content'.
  $permissions['publish any short_course_basic content'] = array(
    'name' => 'publish any short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_family content'.
  $permissions['publish any vih_short_course_family content'] = array(
    'name' => 'publish any vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_golf content'.
  $permissions['publish any vih_short_course_golf content'] = array(
    'name' => 'publish any vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_kajak content'.
  $permissions['publish any vih_short_course_kajak content'] = array(
    'name' => 'publish any vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_sommercamp content'.
  $permissions['publish any vih_short_course_sommercamp content'] = array(
    'name' => 'publish any vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_sport_camp content'.
  $permissions['publish any vih_short_course_sport_camp content'] = array(
    'name' => 'publish any vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'publish any vih_short_course_subject content'.
  $permissions['publish any vih_short_course_subject content'] = array(
    'name' => 'publish any vih_short_course_subject content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable short_course_basic content'.
  $permissions['publish editable short_course_basic content'] = array(
    'name' => 'publish editable short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_family content'.
  $permissions['publish editable vih_short_course_family content'] = array(
    'name' => 'publish editable vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_golf content'.
  $permissions['publish editable vih_short_course_golf content'] = array(
    'name' => 'publish editable vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_kajak content'.
  $permissions['publish editable vih_short_course_kajak content'] = array(
    'name' => 'publish editable vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_sommercamp content'.
  $permissions['publish editable vih_short_course_sommercamp content'] = array(
    'name' => 'publish editable vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_sport_camp content'.
  $permissions['publish editable vih_short_course_sport_camp content'] = array(
    'name' => 'publish editable vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'publish editable vih_short_course_subject content'.
  $permissions['publish editable vih_short_course_subject content'] = array(
    'name' => 'publish editable vih_short_course_subject content',
    'roles' => array(),
  );

  // Exported permission: 'publish own short_course_basic content'.
  $permissions['publish own short_course_basic content'] = array(
    'name' => 'publish own short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_family content'.
  $permissions['publish own vih_short_course_family content'] = array(
    'name' => 'publish own vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_golf content'.
  $permissions['publish own vih_short_course_golf content'] = array(
    'name' => 'publish own vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_kajak content'.
  $permissions['publish own vih_short_course_kajak content'] = array(
    'name' => 'publish own vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_sommercamp content'.
  $permissions['publish own vih_short_course_sommercamp content'] = array(
    'name' => 'publish own vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_sport_camp content'.
  $permissions['publish own vih_short_course_sport_camp content'] = array(
    'name' => 'publish own vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'publish own vih_short_course_subject content'.
  $permissions['publish own vih_short_course_subject content'] = array(
    'name' => 'publish own vih_short_course_subject content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any short_course_basic content'.
  $permissions['unpublish any short_course_basic content'] = array(
    'name' => 'unpublish any short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_family content'.
  $permissions['unpublish any vih_short_course_family content'] = array(
    'name' => 'unpublish any vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_golf content'.
  $permissions['unpublish any vih_short_course_golf content'] = array(
    'name' => 'unpublish any vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_kajak content'.
  $permissions['unpublish any vih_short_course_kajak content'] = array(
    'name' => 'unpublish any vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_sommercamp content'.
  $permissions['unpublish any vih_short_course_sommercamp content'] = array(
    'name' => 'unpublish any vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_sport_camp content'.
  $permissions['unpublish any vih_short_course_sport_camp content'] = array(
    'name' => 'unpublish any vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish any vih_short_course_subject content'.
  $permissions['unpublish any vih_short_course_subject content'] = array(
    'name' => 'unpublish any vih_short_course_subject content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable short_course_basic content'.
  $permissions['unpublish editable short_course_basic content'] = array(
    'name' => 'unpublish editable short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_family content'.
  $permissions['unpublish editable vih_short_course_family content'] = array(
    'name' => 'unpublish editable vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_golf content'.
  $permissions['unpublish editable vih_short_course_golf content'] = array(
    'name' => 'unpublish editable vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_kajak content'.
  $permissions['unpublish editable vih_short_course_kajak content'] = array(
    'name' => 'unpublish editable vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_sommercamp content'.
  $permissions['unpublish editable vih_short_course_sommercamp content'] = array(
    'name' => 'unpublish editable vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_sport_camp content'.
  $permissions['unpublish editable vih_short_course_sport_camp content'] = array(
    'name' => 'unpublish editable vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish editable vih_short_course_subject content'.
  $permissions['unpublish editable vih_short_course_subject content'] = array(
    'name' => 'unpublish editable vih_short_course_subject content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own short_course_basic content'.
  $permissions['unpublish own short_course_basic content'] = array(
    'name' => 'unpublish own short_course_basic content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_family content'.
  $permissions['unpublish own vih_short_course_family content'] = array(
    'name' => 'unpublish own vih_short_course_family content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_golf content'.
  $permissions['unpublish own vih_short_course_golf content'] = array(
    'name' => 'unpublish own vih_short_course_golf content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_kajak content'.
  $permissions['unpublish own vih_short_course_kajak content'] = array(
    'name' => 'unpublish own vih_short_course_kajak content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_sommercamp content'.
  $permissions['unpublish own vih_short_course_sommercamp content'] = array(
    'name' => 'unpublish own vih_short_course_sommercamp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_sport_camp content'.
  $permissions['unpublish own vih_short_course_sport_camp content'] = array(
    'name' => 'unpublish own vih_short_course_sport_camp content',
    'roles' => array(),
  );

  // Exported permission: 'unpublish own vih_short_course_subject content'.
  $permissions['unpublish own vih_short_course_subject content'] = array(
    'name' => 'unpublish own vih_short_course_subject content',
    'roles' => array(),
  );

  return $permissions;
}
