<?php
/**
 * @file
 * vih_short_course_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_commerce_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_commerce_node_info() {
  $items = array(
    'short_course_basic' => array(
      'name' => t('Short Course Basic'),
      'base' => 'node_content',
      'description' => t('Used for short courses which does not use a special line item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_golf' => array(
      'name' => t('Short Course Golf'),
      'base' => 'node_content',
      'description' => t('Used for the golf courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_kajak' => array(
      'name' => t('Short Course Kajak'),
      'base' => 'node_content',
      'description' => t('Used for the kayak courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_sport_camp' => array(
      'name' => t('Short Course Sport Camp'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
