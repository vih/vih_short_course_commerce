<?php
/**
 * @file
 * vih_short_course_commerce.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function vih_short_course_commerce_commerce_line_item_default_types() {
  $items = array(
    'vih_short_course' => array(
      'name' => 'VIH Short Course',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Add product',
      'base' => 'commerce_product_line_item',
    ),
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add product');

  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_short_course_commerce_commerce_product_default_types() {
  $items = array(
    'vih_short_course_basic' => array(
      'type' => 'vih_short_course_basic',
      'name' => 'VIH Short Course Basic',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_short_course_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_short_course_commerce_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_short_course_commerce_node_info() {
  $items = array(
    'short_course_basic' => array(
      'name' => t('Short Course Basic'),
      'base' => 'node_content',
      'description' => t('Use <em>short course basic</em> for courses where you need info about room type and social security number.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
