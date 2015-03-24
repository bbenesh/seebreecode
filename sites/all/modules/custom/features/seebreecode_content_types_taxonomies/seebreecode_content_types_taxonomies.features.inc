<?php
/**
 * @file
 * seebreecode_content_types_taxonomies.features.inc
 */

/**
 * Implements hook_node_info().
 */
function seebreecode_content_types_taxonomies_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'todo' => array(
      'name' => t('ToDo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
