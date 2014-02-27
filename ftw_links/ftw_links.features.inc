<?php
/**
 * @file
 * ftw_links.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ftw_links_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('Link for the links page'),
      'has_title' => '1',
      'title_label' => t('Title of project/website'),
      'help' => '',
    ),
  );
  return $items;
}
