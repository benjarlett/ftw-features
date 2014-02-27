<?php
/**
 * @file
 * site_pages.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function site_pages_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Help with assistive technologies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '19476efe-fcf6-42c6-92c7-b164260c7715',
    'vocabulary_machine_name' => 'links_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'fix the web newsletter',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '26136bec-5780-4281-8d0a-24bc0b11a34f',
    'vocabulary_machine_name' => 'newsletter',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Fix the web newsletter',
    'description' => '',
    'format' => NULL,
    'weight' => 0,
    'uuid' => '667f3226-c4cf-47c7-8ca1-37862231c202',
    'vocabulary_machine_name' => 'newsletter',
    'url_alias' => array(
      0 => array(
        'alias' => 'newsletter/fix-web-newsletter',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'General links',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c2c99a91-13b9-4b07-8177-2b0f63759772',
    'vocabulary_machine_name' => 'links_categories',
    'url_alias' => array(),
  );
  return $terms;
}
