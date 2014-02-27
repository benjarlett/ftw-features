<?php
/**
 * @file
 * ftw_links.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ftw_links_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-links-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'links-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'links',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ftw' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ftw',
        'weight' => -17,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-links-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'links-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'links',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ftw' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ftw',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
