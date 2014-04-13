<?php

/**
 * @file
 *  Migrations for vih_short_course_commerce.
 */

class VIHShortCourseBasicProduct extends VIHMigration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import short courses from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'vih_short_course_basic')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course_commerce') . '/import/short_courses_basic.csv', $this->csvcolumns(), array('header_rows' => 1), $this->fields());

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'vih_short_course_basic');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('field_room', 'room');

    /*
    // Size
    $this->addFieldMapping('field_bag_size', 'size');
    $this->addFieldMapping('field_bag_size:create_term')
      ->defaultValue(TRUE);
    */
    
    /*
    // Images
    $this->addFieldMapping('field_images', 'product_images');
    $this->addFieldMapping('field_images:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_images:source_dir')
      ->defaultValue(drupal_get_path('module', 'commerce_kickstart_product') . '/import/images');
    */
    
    /*
    // Color
    $this->addFieldMapping('field_color', 'color');
    $this->addFieldMapping('field_color:additional_field', 'hexadecimal');
    $this->addFieldMapping('field_color:create_term')
      ->defaultValue(TRUE);
    */
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    /*
    $columns[2] = array('color', 'Color');
    $columns[3] = array('size', 'Size');
    */
    $columns[2] = array('price', 'Price');
    $columns[3] = array('stock_status', 'Stock status');
    $columns[4] = array('stock_quantity', 'Stock quantity');
    $columns[5] = array('room', 'Room');
    /*
    $columns[5] = array('images', 'Images');
    $columns[6] = array('hexadecimal', 'Hexadecimal');
    */
    return $columns;
  }

  function fields() {
    /*
    return array(
      'product_images' => 'An array of images, populated during prepareRow().',
    );
    */
  }

  function prepareRow($row) {
    //$row->product_images = explode(', ', $row->images);
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class VIHShortCourseBasicNode extends VIHMigration {

  public function __construct(array $arguments) {
    $this->arguments = $arguments;
    parent::__construct();
    $this->description = t('Import course nodes.');
    $this->dependencies = array('VIHShortCourseBasicProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'title' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'vih_short_course_commerce') . '/import/product_display_short_course_basic.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('short_course_basic');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'description');
    $this->addFieldMapping('field_course_time', 'date_from');
    $this->addFieldMapping('field_course_time:to', 'date_to');

    $this->addFieldMapping('field_course_leader', 'teacher_reference')
      ->sourceMigration('VIHEmployeesContext');

    $this->addFieldMapping('field_short_course_lecture', 'lectures')
      ->sourceMigration('VIHLecturesNode');
    /*
    $this->addFieldMapping('body:summary', 'excerpt');
    $this->addFieldMapping('field_brand', 'brand');
    $this->addFieldMapping('field_brand:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_collection', 'collection')
          ->separator(', ');
    $this->addFieldMapping('field_collection:create_term')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_gender', 'gender');
    $this->addFieldMapping('field_gender:create_term')
      ->defaultValue(TRUE);
    */

    $this->addFieldMapping('field_course_type', 'course_type');
    $this->addFieldMapping('field_course_type:create_term')
      ->defaultValue(TRUE);

    // Images
    $this->addFieldMapping('field_pictures', 'all_images');
    $this->addFieldMapping('field_pictures:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_pictures:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_commerce') . '/import/images');

    // Featured image
    $this->addFieldMapping('field_featured_image', 'featured_image');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_commerce') . '/import/images');

    // Featured image
    $this->addFieldMapping('field_picture', 'featured_image');
    $this->addFieldMapping('field_picture:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_picture:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_commerce') . '/import/images');

    // Connect the products
    $this->addFieldMapping('field_golf_product', 'skus');
  }

  public function prepareRow($row) {
    $row->all_images = explode(',', $row->images);
    $products = array();
    foreach(explode(', ', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('date_from', 'Date From');
    $columns[2] = array('date_to', 'Date To');
    $columns[3] = array('description', 'Description');
    /*
    $columns[2] = array('collection', 'Collection');
    $columns[3] = array('category', 'Category');
    $columns[4] = array('gender', 'Gender');
    $columns[5] = array('brand', 'Brand');
    */
    $columns[4] = array('sku', 'SKU');
    $columns[5] = array('product', 'Product');
    $columns[6] = array('featured_image', 'Featured Image');
    $columns[7] = array('images', 'Images');
    $columns[8] = array('teacher_reference', 'Teacher');
    $columns[9] = array('lectures', 'Lectures');
    $columns[10] = array('course_type', 'Course Type');
    return $columns;
  }
}
