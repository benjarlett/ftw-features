<?php
/**
 * @file
 * ftw_text_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ftw_text_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Nag text sent to the volunteer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'nag_email';
  $fe_block_boxes->body = 'Dear [name]

We are receiving genuine reports into Fix the Web that need a volunteer to attend to. We also have a spam issue and quite a few reports that aren\'t relevant. We are fixing the issues as best we can, please close such reports as spam or other, as appropriate. Please can you make sure you chase up on old reports at least three times before closing them.
[dashboard]

Please contact us if you have any difficulties
Best Wishes and thanks again!
Fix the Web Team

You have asked for a reminder every [reminder] days, if you want to change this at  any time please <a href="http://www.fixtheweb.net/user/login">login</a> then go to my account to edit your profile.

If you have queries please do not reply directly to this email. Use this <a href="http://www.fixtheweb.net/contact">contact form</a> instead. You will be asked to login if you are not already.

Fix the Web is an innovative project to crowd-source e-accessibility. It is led by Citizens Online and funded by Nominet Trust, with support  from partners such as AbilityNet, Hanona, Nomensa, Bloor Research, RNIB and Coolfields Consulting.

Thanks for your time!
Fix the Web team.';

  $export['nag_email'] = $fe_block_boxes;

  return $export;
}
