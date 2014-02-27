<?php
/**
 * @file
 * ftw_faq.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ftw_faq_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'FAQs for Volunteers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '5d21cf6b-b002-45ce-a9e2-b111fa4c7050',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'FAQs for Reporters of Website issues',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '7ad4ae5f-d664-4ec0-8fc0-4c9d9fc1f320',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'General FAQs',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97368215-0dac-410c-bbed-1f9037374ea5',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'FAQs for Website owners / developers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'f72ceb3e-83e3-4dd1-ad07-6f2580d10f91',
    'vocabulary_machine_name' => 'faq_categories',
    'url_alias' => array(),
  );
  return $terms;
}
