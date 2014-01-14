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
    'vih_kayak' => array(
      'name' => 'VIH Kayak',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course' => array(
      'name' => 'VIH Short Course',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_family' => array(
      'name' => 'VIH Short Course Family',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_golf' => array(
      'name' => 'VIH Short Course Golf',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_kayak' => array(
      'name' => 'VIH Short Course Kayak',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_sommercamp' => array(
      'name' => 'VIH Short Course Sommercamp',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
    'vih_short_course_sport' => array(
      'name' => 'VIH Short Course Sport',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Tilføj vare',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function vih_short_course_commerce_commerce_product_default_types() {
  $items = array(
    'vih_kayak' => array(
      'type' => 'vih_kayak',
      'name' => 'VIH Kayak',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_basic' => array(
      'type' => 'vih_short_course_basic',
      'name' => 'VIH Short Course Basic',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_family' => array(
      'type' => 'vih_short_course_family',
      'name' => 'VIH Short Course Family',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_kayak' => array(
      'type' => 'vih_short_course_kayak',
      'name' => 'VIH Short Course Kayak',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_sommercamp' => array(
      'type' => 'vih_short_course_sommercamp',
      'name' => 'VIH Short Course Sommercamp',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_short_course_sportcamp' => array(
      'type' => 'vih_short_course_sportcamp',
      'name' => 'VIH Short Course Sportcamp',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'vih_shourt_course_golf' => array(
      'type' => 'vih_shourt_course_golf',
      'name' => 'VIH Short Course Golf',
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
    'vih_short_course_family' => array(
      'name' => t('Short Course Familiy'),
      'base' => 'node_content',
      'description' => t('Used for <em>family courses</em> where you have different age groups but no room types.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
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
      'description' => t('Used for the <em>kayak courses</em> where you should be able to rent a kayak and add your size for the wet suit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_sommercamp' => array(
      'name' => t('Short Course Summercamp'),
      'base' => 'node_content',
      'description' => t('Kursusbeskrivelse og tilmelding til <em>sommercamp</em> <strong>UDEN</strong> onlinebetaling.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'vih_short_course_sport_camp' => array(
      'name' => t('Short Course Sport Camp'),
      'base' => 'node_content',
      'description' => t('Used for <em>sport camps</em> where you need to choose your subjects when registering.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vih_short_course_subject' => array(
      'name' => t('Short Course Subject'),
      'base' => 'node_content',
      'description' => t('Subjects for the sportcamp.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
