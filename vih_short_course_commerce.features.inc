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
 * Implements hook_views_api().
 */
function vih_short_course_commerce_views_api() {
  return array("version" => "3.0");
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
    'vih_short_course_family' => array(
      'name' => t('Short Course Family'),
      'base' => 'node_content',
      'description' => '',
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
    'vih_short_course_sommercamp' => array(
      'name' => t('Short Course Sommercamp'),
      'base' => 'node_content',
      'description' => '',
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
    'vih_short_course_subject' => array(
      'name' => t('VIH Short Course Subject'),
      'base' => 'node_content',
      'description' => t('Subjects for the sportcamp.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function vih_short_course_commerce_default_registration_type() {
  $items = array();
  $items['vih_golf_course_registration'] = entity_import('registration_type', '{
    "name" : "vih_golf_course_registration",
    "label" : "VIH Short Course Golf",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['vih_short_course_basic'] = entity_import('registration_type', '{
    "name" : "vih_short_course_basic",
    "label" : "VIH Short Course Basic",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['vih_short_course_family'] = entity_import('registration_type', '{
    "name" : "vih_short_course_family",
    "label" : "VIH Short Course Family",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['vih_short_course_kayak'] = entity_import('registration_type', '{
    "name" : "vih_short_course_kayak",
    "label" : "VIH Short Course Kayak",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['vih_short_course_sommercamp'] = entity_import('registration_type', '{
    "name" : "vih_short_course_sommercamp",
    "label" : "VIH Short Course Sommercamp",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  $items['vih_short_course_sportcamp'] = entity_import('registration_type', '{
    "name" : "vih_short_course_sportcamp",
    "label" : "VIH Short Course Sportcamp",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "metatags" : [],
    "rdf_mapping" : []
  }');
  return $items;
}
