<?php
/**
 * @file
 * site_pages.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function site_pages_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Privacy Policy',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '127fc3e7-f538-4c03-b112-ec80fd57950b',
  'type' => 'page',
  'language' => 'und',
  'created' => 1285683650,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '089a06e5-fc34-4f2a-8a89-8dfdb337e119',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break--><h2>Privacy Policy Statement</h2>
Citizens Online is committed to ensuring the best standards of practice in all its activities. Visitors to Fix the Web website can be assured that the protection of privacy and confidentiality are given the highest priority. All personal information is collected, held and used in strict compliance with the Data Protection Act 1998.
  
<h2>Information Collected</h2>
Citizens Online does not collect any personal information from visitors to its website other than information that is knowingly and voluntarily given. Anonymous information is collected, such as the number of visitors to the website in a given period, but it is purely statistical and cannot be used to identify an individual user. Cookies are not used to collect any other information from visitors to the website.
Visitors interested in Citizens Online can provide contact details via a fill-in form. Visitors cannot be contacted unless such information is given. Visitors are also invited to give additional information for use in the web fixing process.

<h2>Use of Information</h2>
The information collected will be used to contact you with further details of Fix the Web project. Reporters of website issues can opt to make their contact details visible to volunteers. If this is in any way abused we will take the matter seriously and deal with it.
You can inform the site  and coordinator at any time if you no longer require such information to be visible.

<h2>Data Security</h2>
Citizens Online takes appropriate measures to safeguard the information it holds from unauthorised access or improper use. Citizens Online has a strict internal security policy with which members of staff must comply as a condition of employment and no external access to the system is permitted. Citizens Online continually reviews and up-dates its security procedures as new technologies become available and new activities are introduced.

Any third parties (volunteers) to whom information is transferred are made aware of these security practices and are also required to take reasonable precautions to protect the transferred information. We will not share your data other than with the purpose of supporting Fix the Web Activities.

<h2>Integrity of Data</h2>
Citizens Online takes all reasonable measures to ensure that the information it holds is accurate. In particular it uses reliable collection methods and destroys or converts to an anonymous form any out-of-date data. Individuals may request details of all personal information held by Citizens Online so as to contest inaccurate or incomplete data, verify the information and have it corrected it as appropriate.

<h2>Enforcement</h2>
Any queries relating to Citizens Online collection or use of personal information should be addressed to Citizens Online, 1 Stratford Court, Stratford Road, Stroud, GL5 4AQ',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Privacy Policy Statement<br />
Citizens Online is committed to ensuring the best standards of practice in all its activities. Visitors to Fix the Web website can be assured that the protection of privacy and confidentiality are given the highest priority. All personal information is collected, held and used in strict compliance with the Data Protection Act 1998.</p>
<p>Information Collected<br />
Citizens Online does not collect any personal information from visitors to its website other than information that is knowingly and voluntarily given. Anonymous information is collected, such as the number of visitors to the website in a given period, but it is purely statistical and cannot be used to identify an individual user. Cookies are not used to collect any other information from visitors to the website.<br />
Visitors interested in Citizens Online can provide contact details via a fill-in form. Visitors cannot be contacted unless such information is given. Visitors are also invited to give additional information for use in the web fixing process.</p>
<p>Use of Information<br />
The information collected will be used to contact you with further details of Fix the Web project. Reporters of website issues can opt to make their contact details visible to volunteers. If this is in any way abused we will take the matter seriously and deal with it.<br />
You can inform the site  and coordinator at any time if you no longer require such information to be visible.</p>
<p>Data Security<br />
Citizens Online takes appropriate measures to safeguard the information it holds from unauthorised access or improper use. Citizens Online has a strict internal security policy with which members of staff must comply as a condition of employment and no external access to the system is permitted. Citizens Online continually reviews and up-dates its security procedures as new technologies become available and new activities are introduced.</p>
<p>Any third parties (volunteers) to whom information is transferred are made aware of these security practices and are also required to take reasonable precautions to protect the transferred information. We will not share your data other than with the purpose of supporting Fix the Web Activities.</p>
<p>Integrity of Data<br />
Citizens Online takes all reasonable measures to ensure that the information it holds is accurate. In particular it uses reliable collection methods and destroys or converts to an anonymous form any out-of-date data. Individuals may request details of all personal information held by Citizens Online so as to contest inaccurate or incomplete data, verify the information and have it corrected it as appropriate.</p>
<p>Enforcement<br />
Any queries relating to Citizens Online collection or use of personal information should be addressed to Citizens Online, 1 Stratford Court, Stratford Road, Stroud, GL5 4AQ</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-09-28 14:20:50 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Report bugs',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd30b71e9-cab9-47be-b9ae-e09eece91a10',
  'type' => 'page',
  'language' => 'und',
  'created' => 1392849034,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '14e6d495-770b-4d7d-ae3b-ecc19ddf31ab',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'We\'re very interested to hear about any bugs. Please <a href="contact">get in touch<a/> and let us know.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We\'re very interested to hear about any bugs. Please <a href="contact">get in touch</a><a></a> and let us know.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2014-02-19 22:30:34 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Stephen Fry comments on Fix the Web',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd55e41ef-7e87-4880-9337-211a29bd24fe',
  'type' => 'page',
  'language' => 'en',
  'created' => 1296493034,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28fcfeff-3a7c-4e4c-bd1e-0272ceb79b9c',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><img style="margin: 0 0 1em 1em;" src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right"></p><p style="font-size: 1.2em; margin-top: 1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed. This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p><p>Photo taken by Claire Newman Williams</p>',
        'summary' => '<img src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" style="margin:0 0 1em 1em;"><p style="font-size:1.2em; margin-top:1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed.  This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p><p>Photo taken by Claire Newman Williams</p>',
        'format' => 'full_html',
        'safe_value' => '<p><img style="margin: 0 0 1em 1em;" src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" /></p>
<p style="font-size: 1.2em; margin-top: 1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed. This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p>
<p>Photo taken by Claire Newman Williams</p>
',
        'safe_summary' => '<p><img src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" style="margin:0 0 1em 1em;" /><br /></p><p style="font-size:1.2em; margin-top:1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed.  This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p>
<p>Photo taken by Claire Newman Williams</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-01-31 16:57:14 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Access keys and how to use them',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '48b6b996-861d-4678-8f09-b88a5f6c324b',
  'type' => 'page',
  'language' => 'und',
  'created' => 1291821410,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3feb6736-b234-45e5-a194-0f324ce44175',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->Unfortunately, different browsers use access keys in different ways.  In general you need to hold down a key or two, and then press the access key you want.

<h2>Browsers for PCs</h2>
Firefox 2: Hold down the SHIFT key and the ALT key and then press the number of the access key
Firefox 1.5 for PCs: Hold down the ALT key and press the number of the access key
Opera 9: Hold SHIFT and the ESC key and the list of access keys will appear.
Internet Explorer 5+: Hold down the ALT key, press the number of the access key, release both keys then press ENTER
Internet Explorer 4: Hold down the ALT key and press the number of the access key
Netscape 7: Hold down the ALT key and press the number of the access key
Netscape 6+: Hold down the ALT key and select the number/letter of the access key
Netscape earlier versions: Access keys are not supported

<h2>Browsers for Macs</h2>
Firefox 2: Hold down the SHIFT key and the ALT key and then press the number of the access key
Firefox 1.5: Hold down the CTRL key and press the number of the access key
Safari: Hold down the CTRL key and press the number of the access key
Opera 9: Hold SHIFT and the ESC key and the list of access keys will appear.
Internet Explorer 5+: Hold down the CTRL key and press the number of the access key
Internet Explorer 4.5: Access keys are not supported

The content for this page came from <a href="http://www.direct.gov.uk/en/Hl1/Help/DG_020463">a guide on the DirectGov website</a>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Unfortunately, different browsers use access keys in different ways.  In general you need to hold down a key or two, and then press the access key you want.</p>
<p>Browsers for PCs<br />
Firefox 2: Hold down the SHIFT key and the ALT key and then press the number of the access key<br />
Firefox 1.5 for PCs: Hold down the ALT key and press the number of the access key<br />
Opera 9: Hold SHIFT and the ESC key and the list of access keys will appear.<br />
Internet Explorer 5+: Hold down the ALT key, press the number of the access key, release both keys then press ENTER<br />
Internet Explorer 4: Hold down the ALT key and press the number of the access key<br />
Netscape 7: Hold down the ALT key and press the number of the access key<br />
Netscape 6+: Hold down the ALT key and select the number/letter of the access key<br />
Netscape earlier versions: Access keys are not supported</p>
<p>Browsers for Macs<br />
Firefox 2: Hold down the SHIFT key and the ALT key and then press the number of the access key<br />
Firefox 1.5: Hold down the CTRL key and press the number of the access key<br />
Safari: Hold down the CTRL key and press the number of the access key<br />
Opera 9: Hold SHIFT and the ESC key and the list of access keys will appear.<br />
Internet Explorer 5+: Hold down the CTRL key and press the number of the access key<br />
Internet Explorer 4.5: Access keys are not supported</p>
<p>The content for this page came from <a href="http://www.direct.gov.uk/en/Hl1/Help/DG_020463">a guide on the DirectGov website</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-12-08 15:16:50 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'tweetbacks',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5469864a-69ad-4db3-95e5-3acff6c788ea',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279549470,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4487f6e4-efc2-4eba-ba1f-3134487d2e8e',
  'revision_uid' => 0,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 14:24:30 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'thanks for joining us',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '869f4398-a59e-4492-ad14-de7a4d1990e0',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279552218,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '44e15c90-a63c-472d-ae65-913f1359494c',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><a href="about/reporting_websites?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">Learn more about reporting websites</a></p><p><a href="about/volunteering?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">More about being a volunteer</a></p>',
        'summary' => '<p><a href="about/reporting_websites?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">Learn more about reporting websites</a></p><p><a href="about/volunteering?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">More about being a volunteer</a></p>',
        'format' => 'full_html',
        'safe_value' => '<p><a href="about/reporting_websites?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">Learn more about reporting websites</a></p>
<p><a href="about/volunteering?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">More about being a volunteer</a></p>
',
        'safe_summary' => '<p><a href="about/reporting_websites?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">Learn more about reporting websites</a></p>
<p><a href="about/volunteering?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">More about being a volunteer</a></p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 15:10:18 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sign in..',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '363ce340-2200-41a8-bd05-6baeaee990f1',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279629523,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '51577025-7f14-4dbc-aaa5-2e0210641050',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'That page is only accessible to certain people.',
        'summary' => 'That page is only accessible to certain people.',
        'format' => 'filtered_html',
        'safe_value' => '<p>That page is only accessible to certain people.</p>
',
        'safe_summary' => '<p>That page is only accessible to certain people.</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-20 12:38:43 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Log out successful',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5dd8ca60-aa6c-47c7-9cb9-61c1c30c8aee',
  'type' => 'page',
  'language' => 'und',
  'created' => 1286891852,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '57653056-2356-43b8-914c-621a20a82ce1',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'You have logged out.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>You have logged out.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-10-12 13:57:32 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Report a website',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '2d854161-5f89-44d9-85a4-d9cf138f5d82',
  'type' => 'page',
  'language' => 'en',
  'created' => 1356006694,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '59203c3f-99f7-4afb-b4cc-9e40b5c0e538',
  'revision_uid' => 0,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2012-12-20 12:31:34 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Fix the Web video',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'fecb3ff0-6a0a-4791-82ce-31b5130e4793',
  'type' => 'page',
  'language' => 'en',
  'created' => 1297180721,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7abbdf3c-dc2d-4fec-902f-4857b61b9066',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<iframe src="http://player.vimeo.com/video/19702407?autoplay=1" width="400" height="225" frameborder="0"></iframe><p>Here is a video made about our project (created by Amy Williams).</p>',
        'summary' => '<iframe src="http://player.vimeo.com/video/19702407?autoplay=1" width="400" height="225" frameborder="0"></iframe><p>Here is a video made about our project (created by Amy Williams).</p>',
        'format' => 'full_html',
        'safe_value' => '<iframe src="http://player.vimeo.com/video/19702407?autoplay=1" width="400" height="225" frameborder="0"></iframe><p>Here is a video made about our project (created by Amy Williams).</p>
',
        'safe_summary' => '<iframe src="http://player.vimeo.com/video/19702407?autoplay=1" width="400" height="225" frameborder="0"></iframe><p>Here is a video made about our project (created by Amy Williams).</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-02-08 15:58:41 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Badges and Case Studies',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b11ea5e4-0140-4fa5-99d9-f89568abac6e',
  'type' => 'page',
  'language' => 'en',
  'created' => 1297091278,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '92a487df-56b2-4b3e-88c3-c6073482964b',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Badges</h2>
<p>Our volunteers have asked for a Fix the Web badge so that they can show off how fantastic they are.... so we\'ve made you some. There are three: </p><ul><li>Silver, for 1+ fix.<img src="/sites/default/files/badges/I-fixed-the-web-silver.png" width="50" height="50" alt="Silver Badge"> download the silver badge as a <a href="/sites/default/files/badges/I-fixed-the-web-silver.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-silver.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-silver.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li><li>Gold, for 10+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-gold.png" width="100" height="100" alt="Gold Badge"> download the gold badge as a <a href="/sites/default/files/badges/I-fixed-the-web-gold.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-gold.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-gold.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li><li>Platinum for 50+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-platinum.png" width="100" height="100" alt="Platinum Badge"> download the platinum badge as a <a href="/sites/default/files/badges/I-fixed-the-web-platinum.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-platinum.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-platinum.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li></ul><p>By the time you get to platinum you\'ll probably feel sooo good that you won\'t actually need another badge, but if you do let us know.</p>
<h3>Other badges</h3><p>Here are two other badges that you can use:<ul><li><img src="/sites/default/files/badges/be-a-web-fixer.png" width="200" height="200" alt="Access Denied? Be a web fixer!"> download this badge as a <a href="/sites/default/files/badges/be-a-web-fixer.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/be-a-web-fixer.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/be-a-web-fixer.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li><li><img src="/sites/default/files/badges/Im-a-web-fixer.png" width="200" height="200" alt="Access all areas, I\'m a web fixer!"> download this badge as a <a href="/sites/default/files/badges/Im-a-web-fixer.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a> or a <a href="/sites/default/files/badges/Im-a-web-fixer.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li><ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Badges</h2>
<p>Our volunteers have asked for a Fix the Web badge so that they can show off how fantastic they are.... so we\'ve made you some. There are three: </p>
<ul><li>Silver, for 1+ fix.<img src="/sites/default/files/badges/I-fixed-the-web-silver.png" width="50" height="50" alt="Silver Badge" /> download the silver badge as a <a href="/sites/default/files/badges/I-fixed-the-web-silver.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-silver.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-silver.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li>
<li>Gold, for 10+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-gold.png" width="100" height="100" alt="Gold Badge" /> download the gold badge as a <a href="/sites/default/files/badges/I-fixed-the-web-gold.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-gold.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-gold.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li>
<li>Platinum for 50+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-platinum.png" width="100" height="100" alt="Platinum Badge" /> download the platinum badge as a <a href="/sites/default/files/badges/I-fixed-the-web-platinum.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/I-fixed-the-web-platinum.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/I-fixed-the-web-platinum.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li>
</ul><p>By the time you get to platinum you\'ll probably feel sooo good that you won\'t actually need another badge, but if you do let us know.</p>
<h3>Other badges</h3>
<p>Here are two other badges that you can use:
</p><ul><li><img src="/sites/default/files/badges/be-a-web-fixer.png" width="200" height="200" alt="Access Denied? Be a web fixer!" /> download this badge as a <a href="/sites/default/files/badges/be-a-web-fixer.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a>, <a href="/sites/default/files/badges/be-a-web-fixer.png?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">png</a>, or a <a href="/sites/default/files/badges/be-a-web-fixer.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li>
<li><img src="/sites/default/files/badges/Im-a-web-fixer.png" width="200" height="200" alt="Access all areas, I\'m a web fixer!" /> download this badge as a <a href="/sites/default/files/badges/Im-a-web-fixer.jpg?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">jpeg</a> or a <a href="/sites/default/files/badges/Im-a-web-fixer.pdf?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">pdf</a></li>
<ul></ul></ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-02-07 15:07:58 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'About Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cda0b348-55e4-40e5-b999-213b3257e14c',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279634161,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98644b16-d59d-4fa4-a577-aceb50a3f300',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Fix the Web is a social enterprise [?] project to tackle web accessibility problems.</p><p>The project is&nbsp;<span style="line-height: 1.538em;">led by</span><span style="line-height: 1.538em;">&nbsp;</span><a style="line-height: 1.538em;" href="http://www.citizensonline.org.uk">Citizens Online</a><span style="line-height: 1.538em;">&nbsp;</span><span style="line-height: 1.538em;">and funded by</span><span style="line-height: 1.538em;">&nbsp;</span><a style="line-height: 1.538em;" href="http://www.nominettrust.org.uk/">Nominet Trust</a><span style="line-height: 1.538em;">. A number of</span><span style="line-height: 1.538em;">&nbsp;</span><a style="line-height: 1.538em;" href="#partners">our partners&nbsp;</a><span style="line-height: 1.538em;">are contributing to the development of the project.</span></p><p><span style="line-height: 1.538em;">[Would be good to have a prominent quote here - either &nbsp;fuller version of Stephen Fry quote from frontpage, or quote from Gail, or from a third party such as Nomensa?]</span></p><p>See a&nbsp;<a href="/video">video about the Fix the Web project</a>.</p><h3>Access denied</h3><p>Despite the efforts of experts and campaigners, it is clear many disabled and older people are still faced with inaccessible websites [link to list of accessibility problems on report page?]</p><p>The scale of the problem is huge and we believe there is a need for <strong>culture change</strong> amongst web developers and website owners.</p><h3>Our solution</h3><p>Our solution is to make it simple for the people facing accessibility problems to report them to us, and for our team of volunteers to encourage the site owners to get them fixed.</p><p>Fix the Web volunteers aim to emphasise the real problems disabled users face, and to support website owners to make their sites more accessible by signposting them to the great range of support that is available [links].</p><h3>The power of volunteers</h3><p>Fix the Web relies on an army of volunteer reporters and volunteers. It would not be possible without them.</p><p>You can\'t set up a company to deal with this problem single-handed: the power of volunteers is required! Apart from enabling the project to function on a large scale, the other advantages of our volunteer approach are:</p><ul><li><strong><span style="line-height: 1.538em;">the personal touch:</span></strong></li><ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">Website owners get real and personal feedback on their sites and how they are being used.</span></li></ul><li><strong><span style="line-height: 1.538em;">skill-sharing:</span></strong></li><ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">Volunteers enhance their own knowledge and skills</span></li></ul><li><strong><span style="line-height: 1.538em;">building links:</span></strong></li><ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">disabled reporters can work closely with volunteers, reducing any sense of isolation, and providing for the exchange of knowledge and experiences.</span></li></ul></ul><h3>Fixing for the future</h3><p>In the UK alone, 6 million web users are excluded to some extent from 80% of websites [source?].&nbsp;Over 30% of a blind person\'s online time is wasted dealing with accessibility issues. [source?]</p><p>We want to get <strong>250,000 websites</strong>&nbsp;reported over the next 2 years [add in updated timescale - how realistic?]. This will need about <strong>10,000 volunteers</strong> signed up and many hundreds of active reporters.</p><p><em>We believe this will change the culture of the Web.</em></p><p>The story of Fix the Web starts in the United Kingdom, but as our influence and vision for the web grows, the project will reach many more countries across the planet.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Fix the Web is a social enterprise [?] project to tackle web accessibility problems.</p>
<p>The project is <span style="line-height: 1.538em;">led by</span><span style="line-height: 1.538em;"> </span><a style="line-height: 1.538em;" href="http://www.citizensonline.org.uk">Citizens Online</a><span style="line-height: 1.538em;"> </span><span style="line-height: 1.538em;">and funded by</span><span style="line-height: 1.538em;"> </span><a style="line-height: 1.538em;" href="http://www.nominettrust.org.uk/">Nominet Trust</a><span style="line-height: 1.538em;">. A number of</span><span style="line-height: 1.538em;"> </span><a style="line-height: 1.538em;" href="#partners">our partners </a><span style="line-height: 1.538em;">are contributing to the development of the project.</span></p>
<p><span style="line-height: 1.538em;">[Would be good to have a prominent quote here - either  fuller version of Stephen Fry quote from frontpage, or quote from Gail, or from a third party such as Nomensa?]</span></p>
<p>See a <a href="/video">video about the Fix the Web project</a>.</p>
<h3>Access denied</h3>
<p>Despite the efforts of experts and campaigners, it is clear many disabled and older people are still faced with inaccessible websites [link to list of accessibility problems on report page?]</p>
<p>The scale of the problem is huge and we believe there is a need for <strong>culture change</strong> amongst web developers and website owners.</p>
<h3>Our solution</h3>
<p>Our solution is to make it simple for the people facing accessibility problems to report them to us, and for our team of volunteers to encourage the site owners to get them fixed.</p>
<p>Fix the Web volunteers aim to emphasise the real problems disabled users face, and to support website owners to make their sites more accessible by signposting them to the great range of support that is available [links].</p>
<h3>The power of volunteers</h3>
<p>Fix the Web relies on an army of volunteer reporters and volunteers. It would not be possible without them.</p>
<p>You can\'t set up a company to deal with this problem single-handed: the power of volunteers is required! Apart from enabling the project to function on a large scale, the other advantages of our volunteer approach are:</p>
<ul><li><strong><span style="line-height: 1.538em;">the personal touch:</span></strong></li>
<ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">Website owners get real and personal feedback on their sites and how they are being used.</span></li>
</ul><li><strong><span style="line-height: 1.538em;">skill-sharing:</span></strong></li>
<ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">Volunteers enhance their own knowledge and skills</span></li>
</ul><li><strong><span style="line-height: 1.538em;">building links:</span></strong></li>
<ul style="list-style-type: square;"><li><span style="line-height: 1.538em;">disabled reporters can work closely with volunteers, reducing any sense of isolation, and providing for the exchange of knowledge and experiences.</span></li>
</ul></ul><h3>Fixing for the future</h3>
<p>In the UK alone, 6 million web users are excluded to some extent from 80% of websites [source?]. Over 30% of a blind person\'s online time is wasted dealing with accessibility issues. [source?]</p>
<p>We want to get <strong>250,000 websites</strong> reported over the next 2 years [add in updated timescale - how realistic?]. This will need about <strong>10,000 volunteers</strong> signed up and many hundreds of active reporters.</p>
<p><em>We believe this will change the culture of the Web.</em></p>
<p>The story of Fix the Web starts in the United Kingdom, but as our influence and vision for the web grows, the project will reach many more countries across the planet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-20 13:56:01 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Reporting websites',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5cb347c9-e3cf-44ea-a079-ef8c07d7130c',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279552162,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '99e418da-b392-4cc9-bee4-8fbeadc7b3b4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<ul><li><a style="line-height: 1.538em;" href="#what-report">What to report</a></li><li><a style="line-height: 1.538em;" href="#who-report">Who should report issues?</a></li><li><a style="line-height: 1.538em;" href="#a11y-issues">Common accessibility issues</a></li><li><a style="line-height: 1.538em;" href="#how-report">Reporting accessibility issues</a></li><li><a style="line-height: 1.538em;" href="#register">Registering an account with Fix the Web</a></li><li><a style="line-height: 1.538em;" href="#other-ways">Alternative ways to report</a></li></ul><h2 id="what-report">What to report</h2><p>Fix the Web relies on disabled web users to report sites where they find problems accessing information or features that should be available to all. <a href="#a11y-issues">Common examples of these accessibility issues</a> are given below.</p><p>Without these accessibility reports coming in, our campaign to "fix the web" simply cannot function!</p><p>Please note, it is very important that you <em>only report web sites for accessibility reasons</em>. Fix the Web is not designed to take on reports relating to sites that are offensive, disturbing, pornographic, racist, or that relate to illegal activities. These sites are beyond the remit of the Fix the Web campaign, and would of course be unpleasant for volunteers to have to deal with.</p><h2 id="who-report">Who should report issues?</h2><p>It is important that disabled web users themselves report sites that are not accessible to them. So, only people facing web accessibility issues should contribute reports to Fix the Web. This will primarily be people who identify as disabled, or perhaps you might be an older person with some specific impairment. This demonstrates the reality of the barriers that are there for disabled people, or older people with specific impairments, and makes the campaign <strong>more powerful</strong>. Accessibility is not just a theoretical idea, but a real issue for equality and fairness in our society!</p><p>By contrast, anyone can be a <a href="../being-volunteer">Fix the Web volunteer</a>... including of course disabled or older people themselves. You might begin by filing a report, then deciding to take a report forwards as a volunteer, making use of the sense of collective strength in the Fix the Web community. Together we can move from the frustration of a broken web to the triumph of real success!</p><h2 id="a11y-issues">Common accessibility issues</h2><p>It may be helpful to have some suggestions on how to describe the accessibility issue you have encountered. The advice from the <a href="http://www.w3.org/WAI/users/inaccessible"><abbr title="Web Accessibility Initiative">WAI</abbr></a> is to "provide details about what you were trying to do, and why it was difficult or impossible to do it." Here is a list of example descriptions of common issues that you may be facing... or not!</p><blockquote><ul><li><strong>keyboard navigation</strong> - I can\'t get from the home page to the pages for paying my bill. I can\'t use a mouse so I use Tab to get to links, but I can\'t tab to the Pay Your Bills link.</li><li><strong>mouse clicking</strong> - It\'s hard for me to get the mouse to stop on small things. In the survey, it\'s hard to click the little circles. On other surveys I\'ve used, I can click on the words as well as the circles, which is a lot easier.</li><li><strong>small text</strong> - I can\'t read the bus timetables because the text is too small. I set the text size to Larger in my browser, but the text didn\'t get any bigger.</li><li><strong>overlapping text</strong> - I had trouble reading the small text. I increased the text size in my browser, but then much of the text overlapped other text and the pictures, making it impossible to read.</li><li><strong>color combinations</strong> - It\'s difficult to read some of the product descriptions because the colors make it hard to see the text; in particular I have problems with blue/yellow and blue/orange color combinations.</li><li><strong>alt text</strong> - I\'m using a screen reader to listen to your website. Screen readers can\'t read images; they read the alt text from the code. The images on this page are missing alt text. For example, I hear "240.gif" which my friend tells me is an image for Special Discounts.</li><li><strong>distracting animations</strong> - I found the home page very confusing and it was difficult to find the information I wanted with all the animated things all over the page. They kept drawing my attention away from what I was trying to read.</li><li><strong>captions</strong> - I was told your website has good video tutorials, but I cannot get much information from the videos because I can\'t hear them and they are missing captions.</li></ul></blockquote><p>It is really important to include this kind of information in your reports, otherwise the volunteer will not be able to work effectively with the website owner to get the issue fixed.</p><h2 id="how-report">Reporting accessibility issues</h2><p>The primary way to report an issue you have encountered is to use the <a href="../help-us-fix-web">report form on the front page</a>. There are <a href="#other-ways">other methods</a> you can use when you are away from this site, such as via a twitter account: see below for more information.</p><p>To use the report form on this site, simply provide the website address where you encountered the problem, and then provide a full and clear description of the problem you have found. Without these details it is impossible for the problem to be fixed.</p><p>If the problem is with the way a whole site is designed, then it is fine to give the domain name e.g. www.not-a-good-site.com. But if the issue seems to be with a specific page or feature then it is very helpful to provide the full page address, www.not-accessible.org/media/problem.html for example. If you are not able to give the page address, then give a description instead, for example:<br><br> "the Local Services page, the one with the lists of Residential Services and Business Services";</p><p>"the Confirm Purchase page after I entered my credit card information";</p><p>"the Search Results from the Services Directory Database"</p><p>(these examples are taken from the excellent <a href="http://www.w3.org/WAI/users/inaccessible">WAI page on reporting accessibility problems</a>).</p><p>This will really help our volunteers when they work with the owner of the problem website to get it fixed.</p><h2 id="register">Registering an account with Fix the Web</h2><p>You do not have to register an account on this site in order to file a report, but we encourage you to do so. Registering has some great advantages for you:</p><ol><li>It removes the need for CAPTCHA tests. (These help us to eliminate automated reporting, which is likely to be malicious).</li><li>You can choose whether you want to be kept updated on progress with your reports. If you wish volunteers not to contact you then you can select this on your account profile. (See our (link)Privacy policy).</li><li>You can give information about any access technologies you use and the system you operate (one time only) so that volunteers have more context to help them get the issue fixed.</li></ol><h2 id="other-ways">Other ways to report</h2><p>As well as the <a href="../help-us-fix-web">form on this site</a> there are three other ways you can report an accessibility problem to Fix the Web:</p><ol><li>Via email, by simply sending details of the issue to post@fixtheweb.net. You can ask to be kept updated with progress on the issue, or not to be contacted.<br>Again, ensure you provide accurate details: describe in some detail what was the accessibility problem you found, and the exact address of the website or page.</li><li>Via a <a href="http://twitter.com">twitter</a> account.<br>If you send a tweet including the tags <strong>#fixtheweb #fail</strong>, the website address, and a brief description of the problem, it will be picked up and added to our list of new reports. Many sites now include twitter buttons for publicity purposes; use these instead to draw attention to the issue you have encountered! This also helps us at Fix the Web to publicise the campaign, as we can retweet your report. However it is less likely that you will receive updates on whether the issue is getting fixed.</li><li>The third alternative way to report is to install and use <a href="https://www.atbar.org/">ATBar</a> into your web browser.<br>ATBar is a small piece of software developed by the University of Southampton that helps to make sites more accessible, and with just a click on the red heart button it creates a Fix the Web report for you... it couldn\'t be simpler! If you are keen to hunt down accessibility issues and you might want to report them often to Fix the Web, then ATBar might be a really useful tool for you to have.</li></ol>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<ul><li><a style="line-height: 1.538em;" href="#what-report">What to report</a></li>
<li><a style="line-height: 1.538em;" href="#who-report">Who should report issues?</a></li>
<li><a style="line-height: 1.538em;" href="#a11y-issues">Common accessibility issues</a></li>
<li><a style="line-height: 1.538em;" href="#how-report">Reporting accessibility issues</a></li>
<li><a style="line-height: 1.538em;" href="#register">Registering an account with Fix the Web</a></li>
<li><a style="line-height: 1.538em;" href="#other-ways">Alternative ways to report</a></li>
</ul><h2 id="what-report">What to report</h2>
<p>Fix the Web relies on disabled web users to report sites where they find problems accessing information or features that should be available to all. <a href="#a11y-issues">Common examples of these accessibility issues</a> are given below.</p>
<p>Without these accessibility reports coming in, our campaign to "fix the web" simply cannot function!</p>
<p>Please note, it is very important that you <em>only report web sites for accessibility reasons</em>. Fix the Web is not designed to take on reports relating to sites that are offensive, disturbing, pornographic, racist, or that relate to illegal activities. These sites are beyond the remit of the Fix the Web campaign, and would of course be unpleasant for volunteers to have to deal with.</p>
<h2 id="who-report">Who should report issues?</h2>
<p>It is important that disabled web users themselves report sites that are not accessible to them. So, only people facing web accessibility issues should contribute reports to Fix the Web. This will primarily be people who identify as disabled, or perhaps you might be an older person with some specific impairment. This demonstrates the reality of the barriers that are there for disabled people, or older people with specific impairments, and makes the campaign <strong>more powerful</strong>. Accessibility is not just a theoretical idea, but a real issue for equality and fairness in our society!</p>
<p>By contrast, anyone can be a <a href="../being-volunteer">Fix the Web volunteer</a>... including of course disabled or older people themselves. You might begin by filing a report, then deciding to take a report forwards as a volunteer, making use of the sense of collective strength in the Fix the Web community. Together we can move from the frustration of a broken web to the triumph of real success!</p>
<h2 id="a11y-issues">Common accessibility issues</h2>
<p>It may be helpful to have some suggestions on how to describe the accessibility issue you have encountered. The advice from the <a href="http://www.w3.org/WAI/users/inaccessible"><abbr title="Web Accessibility Initiative">WAI</abbr></a> is to "provide details about what you were trying to do, and why it was difficult or impossible to do it." Here is a list of example descriptions of common issues that you may be facing... or not!</p>
<blockquote><ul><li><strong>keyboard navigation</strong> - I can\'t get from the home page to the pages for paying my bill. I can\'t use a mouse so I use Tab to get to links, but I can\'t tab to the Pay Your Bills link.</li>
<li><strong>mouse clicking</strong> - It\'s hard for me to get the mouse to stop on small things. In the survey, it\'s hard to click the little circles. On other surveys I\'ve used, I can click on the words as well as the circles, which is a lot easier.</li>
<li><strong>small text</strong> - I can\'t read the bus timetables because the text is too small. I set the text size to Larger in my browser, but the text didn\'t get any bigger.</li>
<li><strong>overlapping text</strong> - I had trouble reading the small text. I increased the text size in my browser, but then much of the text overlapped other text and the pictures, making it impossible to read.</li>
<li><strong>color combinations</strong> - It\'s difficult to read some of the product descriptions because the colors make it hard to see the text; in particular I have problems with blue/yellow and blue/orange color combinations.</li>
<li><strong>alt text</strong> - I\'m using a screen reader to listen to your website. Screen readers can\'t read images; they read the alt text from the code. The images on this page are missing alt text. For example, I hear "240.gif" which my friend tells me is an image for Special Discounts.</li>
<li><strong>distracting animations</strong> - I found the home page very confusing and it was difficult to find the information I wanted with all the animated things all over the page. They kept drawing my attention away from what I was trying to read.</li>
<li><strong>captions</strong> - I was told your website has good video tutorials, but I cannot get much information from the videos because I can\'t hear them and they are missing captions.</li>
</ul></blockquote>
<p>It is really important to include this kind of information in your reports, otherwise the volunteer will not be able to work effectively with the website owner to get the issue fixed.</p>
<h2 id="how-report">Reporting accessibility issues</h2>
<p>The primary way to report an issue you have encountered is to use the <a href="../help-us-fix-web">report form on the front page</a>. There are <a href="#other-ways">other methods</a> you can use when you are away from this site, such as via a twitter account: see below for more information.</p>
<p>To use the report form on this site, simply provide the website address where you encountered the problem, and then provide a full and clear description of the problem you have found. Without these details it is impossible for the problem to be fixed.</p>
<p>If the problem is with the way a whole site is designed, then it is fine to give the domain name e.g. <a href="http://www.not-a-good-site.com">www.not-a-good-site.com</a>. But if the issue seems to be with a specific page or feature then it is very helpful to provide the full page address, <a href="http://www.not-accessible.org/media/problem.html">www.not-accessible.org/media/problem.html</a> for example. If you are not able to give the page address, then give a description instead, for example:<br /><br /> "the Local Services page, the one with the lists of Residential Services and Business Services";</p>
<p>"the Confirm Purchase page after I entered my credit card information";</p>
<p>"the Search Results from the Services Directory Database"</p>
<p>(these examples are taken from the excellent <a href="http://www.w3.org/WAI/users/inaccessible">WAI page on reporting accessibility problems</a>).</p>
<p>This will really help our volunteers when they work with the owner of the problem website to get it fixed.</p>
<h2 id="register">Registering an account with Fix the Web</h2>
<p>You do not have to register an account on this site in order to file a report, but we encourage you to do so. Registering has some great advantages for you:</p>
<ol><li>It removes the need for CAPTCHA tests. (These help us to eliminate automated reporting, which is likely to be malicious).</li>
<li>You can choose whether you want to be kept updated on progress with your reports. If you wish volunteers not to contact you then you can select this on your account profile. (See our (link)Privacy policy).</li>
<li>You can give information about any access technologies you use and the system you operate (one time only) so that volunteers have more context to help them get the issue fixed.</li>
</ol><h2 id="other-ways">Other ways to report</h2>
<p>As well as the <a href="../help-us-fix-web">form on this site</a> there are three other ways you can report an accessibility problem to Fix the Web:</p>
<ol><li>Via email, by simply sending details of the issue to <a href="mailto:post@fixtheweb.net">post@fixtheweb.net</a>. You can ask to be kept updated with progress on the issue, or not to be contacted.<br />Again, ensure you provide accurate details: describe in some detail what was the accessibility problem you found, and the exact address of the website or page.</li>
<li>Via a <a href="http://twitter.com">twitter</a> account.<br />If you send a tweet including the tags <strong>#fixtheweb #fail</strong>, the website address, and a brief description of the problem, it will be picked up and added to our list of new reports. Many sites now include twitter buttons for publicity purposes; use these instead to draw attention to the issue you have encountered! This also helps us at Fix the Web to publicise the campaign, as we can retweet your report. However it is less likely that you will receive updates on whether the issue is getting fixed.</li>
<li>The third alternative way to report is to install and use <a href="https://www.atbar.org/">ATBar</a> into your web browser.<br />ATBar is a small piece of software developed by the University of Southampton that helps to make sites more accessible, and with just a click on the red heart button it creates a Fix the Web report for you... it couldn\'t be simpler! If you are keen to hunt down accessibility issues and you might want to report them often to Fix the Web, then ATBar might be a really useful tool for you to have.</li>
</ol>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 15:09:22 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Accessibility',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '39067b94-8f8e-41b9-9f95-5752c1e6a8d7',
  'type' => 'page',
  'language' => 'und',
  'created' => 1288346726,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9eae1dad-8d14-470f-830e-697d565f4cbe',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><!--break--></p><h2>General Info</h2><p>This site has been built to certain web standards i<span style="line-height: 1.538em;">n order to make this site accessible to as many people as possible.&nbsp;</span><span style="line-height: 1.538em;">Disabled people should find this website easy to use.</span></p><p>The World Wide Web Consortium (W3C) has published Web Content Accessibility Guidelines (WCAG) that helps Web developers make sites accessible. This site has been built and tested to meet <a href="http://www.w3.org/TR/WCAG20/#conformance">WCAG 2.0 AA standard</a> (<a href="http://www.hanona.org/FTWcertificate.html">view our certificate</a>).</p><p><img src="http://www.hanona.org/images/hanona_aa.png" alt="Hanona.org WCAG 2 Double A conformance logo"></p><p>Decorative images on the site may not have alternative text, but only if they do not carry any useful information, or if they duplicate nearby written text.<br> User tip: each page starts with navigation, but there is a skip link at the top of each page that will take you to the main content.</p><h2>Spam Protection/Captcha decision</h2><p>After some research into various methods to keep spam out of our site we\'ve had to strike a balance between the experience for our volunteers and our reporters. Using CAPTCHA (asking simple questions to prove that you are a human) is a very controversial issue. We spent a long time debating the various options, but there are many problems to overcome, even <a title="Can anyone use audio CAPTCHA" href="http://www.it-analysis.com/blogs/Abrahams_Accessibility/2010/10/can_anyone_use_audio_captcha.html">audio CAPTCHA has its problems</a>. Ruling out audio CAPTCHA ruled out for us some of the popular suggestions that we\'ve been having (<a href="http://mollom.com/">Mollom</a>, <a href="http://www.google.com/recaptcha">reCAPTCHA</a>) and finally led us to using <a href="http://textcaptcha.com/">Rob Tuley\'s TextCAPTCHA service</a>. We have looked into the more accessible spam filtering methods (<a href="http://www.akismet.com">Akismet</a> and so on...) but have seen reports that real submissions may be missed.</p><p>We have enabled a refresh option on the captcha so you can refresh until you get one you are happy with. If you register with Fix the Web you will only ever need to do one captcha. If you use the toolbar or email route for reporting these are totally free from CAPTCHA. Twitter reporting is also CAPTCHA free, but if possible register first before using twitter, as this helps our volunteers who don\'t already have a twitter account to report back.</p><h2><a name="access-keys"></a>Access Keys</h2><p>Fix the Web uses the following access keys:</p><dl id="accesskeys"><dt>1</dt><dd>Home</dd><dt>2</dt><dd>Accessibility</dd><dt>3</dt><dd>Sitemap</dd><dt>4</dt><dd>Frequently asked questions</dd><dt>5</dt><dd>Links</dd><dt>6</dt><dd>Contact us</dd><dt>7</dt><dd>Volunteering</dd><dt>8</dt><dd>Reporting websites</dd><dt>9</dt><dd>Jump to navigation</dd><dt>0</dt><dd>Jump to content</dd></dl><p>How these access keys work depends upon the browser and operating system that you are using. Wikipedia has <a href="http://en.wikipedia.org/wiki/Access_key#Access_in_different_Browsers">a comprehensive guide on how to use access keys</a>. Opera users can get a list of access keys by pressing SHIFT+ESC, though this list doesn\'t effectively indicate the Jump to links (0 and 9).</p><h2>Jump to/Skip links</h2><p>Skip links help users who prefer to use tabbed browsing to navigate the page more quickly. If you use tabbed browsing you will probably have already noticed that we have chosen to hide our skip links. These appear when you hit the tab key for the first time.</p><h2>Current access issues on our site</h2><p>We intend to add to this list as we become aware of problems with our site.</p><ul><li>We are aware of a few combinations of text zoom and screen width where the menu at the top of the page becomes obscured by the title of the page.</li></ul><h2>Comments</h2><p>If you have any comments about the accessibility of this site, or if you would like to make a suggestion to help us make this site more accessible, contact the web Trust\'s administrator using our <a href="/contact">contact page</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!--break--></p>
<h2>General Info</h2>
<p>This site has been built to certain web standards i<span style="line-height: 1.538em;">n order to make this site accessible to as many people as possible. </span><span style="line-height: 1.538em;">Disabled people should find this website easy to use.</span></p>
<p>The World Wide Web Consortium (W3C) has published Web Content Accessibility Guidelines (WCAG) that helps Web developers make sites accessible. This site has been built and tested to meet <a href="http://www.w3.org/TR/WCAG20/#conformance">WCAG 2.0 AA standard</a> (<a href="http://www.hanona.org/FTWcertificate.html">view our certificate</a>).</p>
<p><img src="http://www.hanona.org/images/hanona_aa.png" alt="Hanona.org WCAG 2 Double A conformance logo" /></p>
<p>Decorative images on the site may not have alternative text, but only if they do not carry any useful information, or if they duplicate nearby written text.<br /> User tip: each page starts with navigation, but there is a skip link at the top of each page that will take you to the main content.</p>
<h2>Spam Protection/Captcha decision</h2>
<p>After some research into various methods to keep spam out of our site we\'ve had to strike a balance between the experience for our volunteers and our reporters. Using CAPTCHA (asking simple questions to prove that you are a human) is a very controversial issue. We spent a long time debating the various options, but there are many problems to overcome, even <a title="Can anyone use audio CAPTCHA" href="http://www.it-analysis.com/blogs/Abrahams_Accessibility/2010/10/can_anyone_use_audio_captcha.html">audio CAPTCHA has its problems</a>. Ruling out audio CAPTCHA ruled out for us some of the popular suggestions that we\'ve been having (<a href="http://mollom.com/">Mollom</a>, <a href="http://www.google.com/recaptcha">reCAPTCHA</a>) and finally led us to using <a href="http://textcaptcha.com/">Rob Tuley\'s TextCAPTCHA service</a>. We have looked into the more accessible spam filtering methods (<a href="http://www.akismet.com">Akismet</a> and so on...) but have seen reports that real submissions may be missed.</p>
<p>We have enabled a refresh option on the captcha so you can refresh until you get one you are happy with. If you register with Fix the Web you will only ever need to do one captcha. If you use the toolbar or email route for reporting these are totally free from CAPTCHA. Twitter reporting is also CAPTCHA free, but if possible register first before using twitter, as this helps our volunteers who don\'t already have a twitter account to report back.</p>
<h2><a name="access-keys" id="access-keys"></a>Access Keys</h2>
<p>Fix the Web uses the following access keys:</p>
<dl id="accesskeys"><dt>1</dt>
<dd>Home</dd>
<dt>2</dt>
<dd>Accessibility</dd>
<dt>3</dt>
<dd>Sitemap</dd>
<dt>4</dt>
<dd>Frequently asked questions</dd>
<dt>5</dt>
<dd>Links</dd>
<dt>6</dt>
<dd>Contact us</dd>
<dt>7</dt>
<dd>Volunteering</dd>
<dt>8</dt>
<dd>Reporting websites</dd>
<dt>9</dt>
<dd>Jump to navigation</dd>
<dt>0</dt>
<dd>Jump to content</dd>
</dl><p>How these access keys work depends upon the browser and operating system that you are using. Wikipedia has <a href="http://en.wikipedia.org/wiki/Access_key#Access_in_different_Browsers">a comprehensive guide on how to use access keys</a>. Opera users can get a list of access keys by pressing SHIFT+ESC, though this list doesn\'t effectively indicate the Jump to links (0 and 9).</p>
<h2>Jump to/Skip links</h2>
<p>Skip links help users who prefer to use tabbed browsing to navigate the page more quickly. If you use tabbed browsing you will probably have already noticed that we have chosen to hide our skip links. These appear when you hit the tab key for the first time.</p>
<h2>Current access issues on our site</h2>
<p>We intend to add to this list as we become aware of problems with our site.</p>
<ul><li>We are aware of a few combinations of text zoom and screen width where the menu at the top of the page becomes obscured by the title of the page.</li>
</ul><h2>Comments</h2>
<p>If you have any comments about the accessibility of this site, or if you would like to make a suggestion to help us make this site more accessible, contact the web Trust\'s administrator using our <a href="/contact">contact page</a>.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-10-29 10:05:26 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Not found',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'e9ee05b5-7650-4b22-b75e-b2b4eec53f20',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279629562,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9f590da5-3f15-4ea5-9abc-8dab7b892235',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'That link is broken.',
        'summary' => 'That link is broken.',
        'format' => 'filtered_html',
        'safe_value' => '<p>That link is broken.</p>
',
        'safe_summary' => '<p>That link is broken.</p>
',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-20 12:39:22 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Fix the Web Video',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '676a022e-e775-4160-92a8-6c0f7bc5deb9',
  'type' => 'page',
  'language' => 'en',
  'created' => 1302530998,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ba94ab18-75d1-430b-9541-6dd8ef7e907f',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<script src="/sites/all/libraries/theworkshop_videoplayer/swfobject/swfobject.js" type="text/javascript"></script><!-- SWFObject javascript -->
<div id="help"><p><br/><a href="/video/help">Video player help and accessibility features</a></p></div>
		<div id="flash">
			<!-- div to contain the video player. This content will show if the user has the incorrect flash player or has javascript disabled in thier browser -->
			<p>To view this content, you must have JavaScript enabled, and the latest version of the <a href="http://www.adobe.com/go/getflashplayer">Adobe Flash Player</a>.</p>
			<p><a href="http://www.adobe.com/go/getflashplayer"><img src="http://www.adobe.com/images/shared/download_buttons/get_flash_player.gif"	alt="Get Adobe Flash Player" border="0" /></a></p>
		</div>
		
		<script type="text/javascript">
			/* <![CDATA[ */
				
				//Embed using SWFObject
				var params = {};
				params.bgColor = "#FFFFFF"; // background colour of the embed (optional)
				params.allowFullScreen = true; // set to true to enable full screen video playback
			
				//Typical Flash vars for the video player
				/*
					mediaURL = url (relative to the SWF page embedding the videoplayer.swf) of media OR Youtube video ID, eg. Oe3St1GgoHQ
					captionsURL = url (relative to the HTML page) to the captions XML (optional)
					imageURL = url (relative to the HTML page) of an image to dipslay (optional)
					audioDescriptionURL = url (relative to the HTML page) of audio description mp3 file (optional)
				*/
				
				var flashvars = {};
				flashvars.mediaURL = "_g991EZE4bI";//a Youtube video ID, eg. Oe3St1GgoHQ
				//flashvars.mediaURL = "video/dummy_video.flv";// url relative to the SWF containing the video player OR absolute path OR youtube ID
				flashvars.imageURL = "/sites/default/files/still3.jpg";// url relative to the HTML page containing the video player
				flashvars.captionsURL = "/sites/default/files/gail-intro02.xml";// url relative to the HTML page containing the video player
				flashvars.audioDescriptionURL = "assets/audio/dummy_audiodesc.mp3";	// url relative to the HTML page containing the video player
				swfobject.embedSWF("/sites/all/libraries/theworkshop_videoplayer/assets/videoplayer.swf", "flash", "480", "385", "9.0.115", null, flashvars, params);
				
			/* ]]> */
		</script><p>The accessible video player we are using for this presentation is free to <a href="http://www.theworkshop.co.uk/video-player">download  from The Workshop</a> for use on your website.</p>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-04-11 14:09:58 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Terms and Conditions',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4fd127f5-751a-463a-8b05-3b3e8128960d',
  'type' => 'page',
  'language' => 'und',
  'created' => 1285683814,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bc5ed865-b101-4f94-8a82-024bbffdb048',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><!--break--></p><h2>Website Terms and conditions</h2><p>All content on this website is owned or controlled by Citizens Online and is protected by worldwide copyright laws. You may download content only for your personal use for non-commercial purposes but no modification or further reproduction of the content is permitted. The content may otherwise not be copied or used in any way. Citizens Online will use reasonable efforts to include up-to-date and accurate information in this website, but makes no representations, warranties, or assurances as to the accuracy, currency or completeness of the information provided. Citizens Online shall not be liable for any damages or injury resulting from your access to, or inability to access, this website, or from your reliance on any information provided at this website. Internet software or transmission problems could produce inaccurate or incomplete copies of various documents when downloaded and displayed on a user\'s computer. The information and documents available on this website are not intended to provide specific legal, accounting, investment/financial or tax advice to any user. This website may provide links or references to other sites. Citizens Online makes no representations, warranties or assurances as to any information in such sites and has no responsibility for their content, accuracy, currency or completeness and shall not be liable for any damages or injury arising from that content, accuracy, currency or completeness. Any links to other sites are provided merely as a convenience to the users of this. The trademarks, services marks, trade names, trade dress and products represented on the website are protected internationally. No use of these may be made without prior, written authorisation of Citizens Online except to identify the products or services of the company. Fix the Web enables volunteers and web accessibility reporters to communicate with each other. The purpose of sharing contact details is to enable the project to function, we do not accept responsibility for any mis-use of a persons contact details. Any communications you send to this website or otherwise to Citizens Online by electronic mail are on a non-confidential basis, and Citizens Online is under no obligation to refrain from reproducing, publishing or otherwise using them in any way or for any purpose. Citizens Online shall be free to use the content of any such communication, including any ideas, inventions, concepts, techniques or know-how disclosed therein, for any purpose including developing, manufacturing and/or marketing goods and services. The sender of communications to this website or otherwise to Citizens Online shall be responsible for the content and information contained therein, including its truthfulness and accuracy. This website is provided as a service to its visitors. Citizens Online reserves the right to delete, modify or supplement the content of this site at any time for any reason without notification to anyone.</p><dl class="theme-1"><dt>Company Name:</dt><dd>Citizens Online</dd><dt>Registered Office Address:</dt><dd>1 Stratford Court, Stratford Road, Stroud, GL5 4AQ</dd><dd>A company limited by Guarantee</dd><dd>Registered in England and Wales No. 3963007</dd><dd>VAT Reg. No 749 9619 63</dd></dl>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!--break--></p>
<h2>Website Terms and conditions</h2>
<p>All content on this website is owned or controlled by Citizens Online and is protected by worldwide copyright laws. You may download content only for your personal use for non-commercial purposes but no modification or further reproduction of the content is permitted. The content may otherwise not be copied or used in any way. Citizens Online will use reasonable efforts to include up-to-date and accurate information in this website, but makes no representations, warranties, or assurances as to the accuracy, currency or completeness of the information provided. Citizens Online shall not be liable for any damages or injury resulting from your access to, or inability to access, this website, or from your reliance on any information provided at this website. Internet software or transmission problems could produce inaccurate or incomplete copies of various documents when downloaded and displayed on a user\'s computer. The information and documents available on this website are not intended to provide specific legal, accounting, investment/financial or tax advice to any user. This website may provide links or references to other sites. Citizens Online makes no representations, warranties or assurances as to any information in such sites and has no responsibility for their content, accuracy, currency or completeness and shall not be liable for any damages or injury arising from that content, accuracy, currency or completeness. Any links to other sites are provided merely as a convenience to the users of this. The trademarks, services marks, trade names, trade dress and products represented on the website are protected internationally. No use of these may be made without prior, written authorisation of Citizens Online except to identify the products or services of the company. Fix the Web enables volunteers and web accessibility reporters to communicate with each other. The purpose of sharing contact details is to enable the project to function, we do not accept responsibility for any mis-use of a persons contact details. Any communications you send to this website or otherwise to Citizens Online by electronic mail are on a non-confidential basis, and Citizens Online is under no obligation to refrain from reproducing, publishing or otherwise using them in any way or for any purpose. Citizens Online shall be free to use the content of any such communication, including any ideas, inventions, concepts, techniques or know-how disclosed therein, for any purpose including developing, manufacturing and/or marketing goods and services. The sender of communications to this website or otherwise to Citizens Online shall be responsible for the content and information contained therein, including its truthfulness and accuracy. This website is provided as a service to its visitors. Citizens Online reserves the right to delete, modify or supplement the content of this site at any time for any reason without notification to anyone.</p>
<dl class="theme-1"><dt>Company Name:</dt>
<dd>Citizens Online</dd>
<dt>Registered Office Address:</dt>
<dd>1 Stratford Court, Stratford Road, Stroud, GL5 4AQ</dd>
<dd>A company limited by Guarantee</dd>
<dd>Registered in England and Wales No. 3963007</dd>
<dd>VAT Reg. No 749 9619 63</dd>
</dl>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-09-28 14:23:34 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Badges and Case Studies',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1b55ea82-52d2-4e0e-9bfa-ec48676aa29d',
  'type' => 'page',
  'language' => 'en',
  'created' => 1297091142,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c172319e-911d-4698-a0d4-845114af8926',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Badges</h2>
<p>Our volunteers have asked for a Fix the Web badge so that they can show off how fantastic they are.... so we\'ve made you some. There are three: </p><ul><li>Silver, for 1+ fix.<img src="/sites/default/files/badges/I-fixed-the-web-silver.jpg" width="50" height="50" alt="Silver Badge"></li><li>Gold, for 10+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-gold.jpg" width="50" height="50" alt="Gold Badge"></li><li>Platinum for 50+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-platinum.jpg" width="50" height="50" alt="Platinum Badge"></li></ol><p>By the time you get to platinum you\'ll probably feel sooo good that you won\'t actually need another badge, but if you do let us know.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Badges</h2>
<p>Our volunteers have asked for a Fix the Web badge so that they can show off how fantastic they are.... so we\'ve made you some. There are three: </p>
<ul><li>Silver, for 1+ fix.<img src="/sites/default/files/badges/I-fixed-the-web-silver.jpg" width="50" height="50" alt="Silver Badge" /></li>
<li>Gold, for 10+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-gold.jpg" width="50" height="50" alt="Gold Badge" /></li>
<li>Platinum for 50+ fixes. <img src="/sites/default/files/badges/I-fixed-the-web-platinum.jpg" width="50" height="50" alt="Platinum Badge" /></li>

<p>By the time you get to platinum you\'ll probably feel sooo good that you won\'t actually need another badge, but if you do let us know.</p>
</ul>',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-02-07 15:05:42 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'The Workshop Video Player Help',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '933dbbf7-a225-47f0-95e5-d7d28eaf86a7',
  'type' => 'page',
  'language' => 'en',
  'created' => 1302533775,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c1f1d9a8-9a89-4a29-9625-212ed7271b7a',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>How to use the video player</h2>
			<h3>Playing and pausing</h3>
			<p>Use the play/pause button or the P key. To fast forward or rewind use the scrub bar or the &gt; and &lt; keys.<br/>
			When playing a Youtube video you can scrub past the buffered video using the scrub bar or shortcut keys.</p>

			
			<h3>Captions</h3>
			<p>Captions are available for this video so  there will be a Caption button on the video toolbar.
			<br/>You can control the text size and the font and background colour of the captions by using the Caption text size and Caption colour settings buttons.</p>
			
			<h3>Volume controls</h3>
			<p>You can mute/unmute the sound with the volume button or the M key. To adjust the volume use the volume slider or the + and - keys.</p>
			
			<h3>Shortcut keys</h3>
			<p>For keyboard users, the following keys control the Video Player.</p>
			<p>P, Play/pause.<br/>
			&lt;, Rewind.<br/>
			&gt;, Fast forward.<br/>
			+, Increase volume.<br/>
			-, Decrease volume.<br/>
			M, Mute.<br/>
			</p>
			<p>For Screen Reader users, the following keys control the Video Player.</p>
			<p>1, Play/pause.<br/>
			2, Rewind.<br/>
			3, Fast forward.<br/>
			4, Increase volume.<br/>
			5, Decrease volume.<br/>
			6, Mute.<br/>
			</p>
			
			<p>All shortcut keys are listed in the Information panel in the Video Player.</p>
			
			<h3>Full screen</h3>
			<p>You can watch the video in full screen mode. To exit full screen mode you can either press the Full screen button again or press the Escape key. Please note, no other keyboard controls will work in Full screen mode.</p>
			
			<h3>Screen Reader and Keyboard users</h3>
			<p>The Video Player is fully accessible to screen reader and keyboard users. All buttons are accessible using the Tab, Enter or shortcut keys. All controls are labelled for screen readers.</p>
			
			<a href="/video">Back to the video</a>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>How to use the video player<br />
			Playing and pausing<br />
			Use the play/pause button or the P key. To fast forward or rewind use the scrub bar or the &gt; and &lt; keys.<br />
			When playing a Youtube video you can scrub past the buffered video using the scrub bar or shortcut keys.</p>
<p>			Captions<br />
			Captions are available for this video so  there will be a Caption button on the video toolbar.<br />
			You can control the text size and the font and background colour of the captions by using the Caption text size and Caption colour settings buttons.</p>
<p>			Volume controls<br />
			You can mute/unmute the sound with the volume button or the M key. To adjust the volume use the volume slider or the + and - keys.</p>
<p>			Shortcut keys<br />
			For keyboard users, the following keys control the Video Player.<br />
			P, Play/pause.<br />
			&lt;, Rewind.<br />
			&gt;, Fast forward.<br />
			+, Increase volume.<br />
			-, Decrease volume.<br />
			M, Mute.</p>
<p>			For Screen Reader users, the following keys control the Video Player.<br />
			1, Play/pause.<br />
			2, Rewind.<br />
			3, Fast forward.<br />
			4, Increase volume.<br />
			5, Decrease volume.<br />
			6, Mute.</p>
<p>			All shortcut keys are listed in the Information panel in the Video Player.</p>
<p>			Full screen<br />
			You can watch the video in full screen mode. To exit full screen mode you can either press the Full screen button again or press the Escape key. Please note, no other keyboard controls will work in Full screen mode.</p>
<p>			Screen Reader and Keyboard users<br />
			The Video Player is fully accessible to screen reader and keyboard users. All buttons are accessible using the Tab, Enter or shortcut keys. All controls are labelled for screen readers.</p>
<p>			<a href="/video">Back to the video</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2011-04-11 14:56:15 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Being a volunteer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'ce205d22-4787-482b-a014-4317c4fa4b31',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279552198,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c92b2962-946a-4322-b68c-f3b9788d8d5e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Thank you for your interest in being a Fix the Web volunteer. This page explains more about this vital role.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Being a volunteer for Fix the Web is a valuable way to contribute your time and make a difference to the quality of the web experience for disabled people.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteering is simple, online, in your own time and may also provide you with valuable skills and experience. Sign up: </span><a style="text-decoration: none;" href="http://ftw/register/volunteer"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">volunteer to Fix the Web</span></a></p><h2 style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteer work with Fix the Web</span></h2><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The role of the volunteer is relatively simple. Volunteers take on </span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">reports</span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> made by disabled people when they have had difficulty accessing information or features on a website.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Examples of these difficulties include:</span></p><ul style="margin-top: 0pt; margin-bottom: 0pt;"><li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr"><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">web sites having non-accessible navigation (links);</span></p></li><li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr"><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">poorly presented information such as links that are not labelled correctly;</span></p></li><li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr"><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">use of Flash, video or images without providing alternative sources of information.</span></p></li></ul><h2 style="line-height: 1.5004727840423584; margin-top: 18pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Step 1</span></h2><p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteers should spend some time understanding the nature of the report, perhaps visiting the site in question to get a sense of what the disabled user has experienced. Remember that a link or feature that might seem obviously accessible to a non-disabled person might well be much harder, or impossible, to access when using screen reader software or other browsing tools for disabled people. Click for <a href="../reporting-websites#a11y-issues">more information on understanding web accessibility issues</a>.</span></p><h2 style="line-height: 1.5004727840423584; margin-top: 18pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Step 2</span></h2><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">If the volunteer is satisfied that there is a genuine </span><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">accessibility </span><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">problem, they should contact the relevant web design contact for the reported website. This should be stated somewhere on the site (often at the very bottom of the page). If you cannot find the web designer\'s details are not available, then proceed by using another appropriate contact you can find on the site.</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Bear in mind that in many cases, sites are built using site builder tools or templates (look for domains containing wix.com, weebly.com, moonfruit.com, sites.google.com and so on.) With these kinds of sites, the accessibility problem is less likely to be with the person who has produced the site content ("Annie\'s Homemade Jam site") but rather with the site builder software or template that they have used. Again, it\'s worth looking at the site footer to try to find the right details. "Annie" is unlikely to be able to fix the problem... it is probably the software provider you need to contact.</span></p><h2 style="line-height: 1.5; margin-top: 18pt; margin-bottom: 4pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Getting started</span></h2><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Once you have signed up as a volunteer, you will be able to log in to this site and access your "dashboard" by clicking the link on the front page. Here you will be able to look for your first report to take on. Later, you will able to use the dashboard to access reports that are in progress as well as review reports you have finished with.</span></p><p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">You can do as much or as little with Fix the Web as you want. When you sign up as a volunteer, you can say how often you want the site to nudge you (by email) for involvement. The email will remind you of the status of the reports you have taken on.</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Building rapport with web designers</span></p><p style="line-height: 1.5; margin-top: 0pt; margin-bottom: 10pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The WAI has a helpful page on <a href="http://www.w3.org/WAI/users/inaccessible">contacting organizations about inaccessible websites</a>. The key thing here is to be clear, polite and patient with the web designers you contact. They may be very busy, no matter how willing to help. However, you may find that you get brushed off, and assured that a problem is fixed when it hasn\'t been! It\'s good to be tenacious as well as persistently polite, and to push a few times so that there is a better chance that the issue will actually get fixed.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">You will have two main jobs to do, when contacting web designers or site owners:</span></p><ol style="margin-top: 0pt; margin-bottom: 0pt;"><li style="list-style-type: decimal; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; margin-left: 29px;" dir="ltr"><p style="line-height: 1.5004727840423584; margin-top: 3pt; margin-bottom: 3pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Ensure the information from the disabled person, though very brief (some of this will come through tweets!) is reproduced in a polite and comprehensible form.</span></p></li><li style="list-style-type: decimal; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; margin-left: 29px;" dir="ltr"><p style="line-height: 1.5004727840423584; margin-top: 3pt; margin-bottom: 3pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Find the web owner via their website and send the information to them through email or contact form.</span></p></li></ol><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The construction of the report is autoAriald and there is an accessibility checker built in to the process to pre-qualify the report. </span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Some of the issues that come into the list of newly reported sites are not accessibility issues, they may be spam, porn, other kinds of problems or they could be "retweets" or marketing via twitter. If you are clear that a report is </span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">not</span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> an accessibility issue then please close it and label it appropriately. If you aren\'t sure, you can leave it for someone else to decide, and choose a different report to work on, via your dashboard.</span></p><h2 style="line-height: 1.5; margin-top: 18pt; margin-bottom: 4pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Getting support as a volunteer: going deeper</span></h2><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The forum</span></p><p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">We strongly suggest you join the </span><a style="text-decoration: none;" href="http://www.accessifyforum.com/"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Accessify discussion forum</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> (or look in their archives). The forum is the main place where you can get support and get responses to any questions you may have as a volunteer.</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Understanding Web Accessibility Issues</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">We believe that anyone with the right determination and motivation can be an effective Fix the Web volunteer. You do not need prior expertise in web accessibility, though we hope you will begin to understand more as you help out. </span><a style="text-decoration: none;" href="http://www.w3.org/WAI/intro/accessibility"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">W3Cs Accessibility guide</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> is great place to introduce yourself to the issues, so please have a look!</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Communicating with website owners and disabled reporters</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Raising web accessibility issues with website owners or designers, on the scale Fix the Web is aiming for, will make a difference. Simply contacting people about an issue on behalf of a disabled person is important. Sometimes website owners/designers may not respond to your message but the awareness raising you have done will have an impact over the longer term.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Remember that web owners will need more information about the issue, and in some cases (polite) pressure to make changes. A crucial part of your role as a volunteer is to explain the nature of the problem as clearly as you can to the web owner.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In some cases it may be appropriate to go back to the disabled person who reported the problem, and request further information from them. In any case, it is a good idea to keep the reporter informed of the progress of the case, unless they have asked not to be contacted.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In the case where the website owner/designer replies to you with further questions about the query, you can offer advice if you feel able, or signpost them to further more specialised </span><a style="text-decoration: none;" href="http://ftw/links"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">sources of support</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">. You are not required or expected to be able to fix their problems for them. In some cases they may need to redesign their website substantially and of course this can rarely be done straight away. In this case, it may be worth closing the report with the appropriate label, or at least making a note to contact them again after a reasonable time period to see if there has been any progress. Make a note of this on the report file in your dashboard, and let the reporter know the state of play.</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please keep good records of dialogues with website owners, pasting them into the notes section of the dashboard. Other people may view the report file later, so make sure that your notes are polite and make sense!</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Occasionally it may turn out that there isn\'t a problem with the website, but that the disabled person is not using their </span><a style="text-decoration: none;" href="http://abilitynet.wetpaint.com/page/What+is+Assistive+Technology"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">assistive technology</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> (such as a screen reader for a visually impaired person) properly. In this case there are further </span><a style="text-decoration: none;" href="http://ftw/links"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">signposts</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> to assist that person.</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Commercial activity</span></p><p style="line-height: 1.5; margin-top: 0pt; margin-bottom: 10pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please do not use the role of Fix the Web volunteer just as a way in for your own business or service. While it is fine, after some time, to mention your business to a website owner, in the first instance the contact should be as a volunteer (an </span><a style="text-decoration: none;" href="http://ftw/faq"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">FAQ</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> discusses this in more detail). But for example you may wish to include your personal contact information discreetly in an email signature/footer.</span></p><p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Success stories</span></p><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In some cases the issue with a website may be straightforward for the web owner to fix, and it would be great to hear about improvements made as a result of your volunteering efforts - let us know your success stories! </span></p><p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">If that is enough information, we hope you are now feeling inspired to be a volunteer for Fix the Web. </span><a style="text-decoration: none;" href="http://www.fixtheweb.net/register/volunteer"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please sign up here.</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> Let\'s make sure the web that we love is inclusive!</span></p><p><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">If you have any other questions about the project and being a volunteer please see the </span><a href="../faq"><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">FAQs</span></a><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;"> or </span><a href="../contact"><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">contact the coordinator</span></a><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">.</span></p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Thank you for your interest in being a Fix the Web volunteer. This page explains more about this vital role.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Being a volunteer for Fix the Web is a valuable way to contribute your time and make a difference to the quality of the web experience for disabled people.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteering is simple, online, in your own time and may also provide you with valuable skills and experience. Sign up: </span><a style="text-decoration: none;" href="http://ftw/register/volunteer"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">volunteer to Fix the Web</span></a></p>
<h2 style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteer work with Fix the Web</span></h2>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The role of the volunteer is relatively simple. Volunteers take on </span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">reports</span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> made by disabled people when they have had difficulty accessing information or features on a website.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Examples of these difficulties include:</span></p>
<ul style="margin-top: 0pt; margin-bottom: 0pt;"><li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr">
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">web sites having non-accessible navigation (links);</span></p>
</li>
<li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr">
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">poorly presented information such as links that are not labelled correctly;</span></p>
</li>
<li style="list-style-type: disc; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline;" dir="ltr">
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">use of Flash, video or images without providing alternative sources of information.</span></p>
</li>
</ul><h2 style="line-height: 1.5004727840423584; margin-top: 18pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Step 1</span></h2>
<p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Volunteers should spend some time understanding the nature of the report, perhaps visiting the site in question to get a sense of what the disabled user has experienced. Remember that a link or feature that might seem obviously accessible to a non-disabled person might well be much harder, or impossible, to access when using screen reader software or other browsing tools for disabled people. Click for <a href="../reporting-websites#a11y-issues">more information on understanding web accessibility issues</a>.</span></p>
<h2 style="line-height: 1.5004727840423584; margin-top: 18pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Step 2</span></h2>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">If the volunteer is satisfied that there is a genuine </span><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">accessibility </span><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">problem, they should contact the relevant web design contact for the reported website. This should be stated somewhere on the site (often at the very bottom of the page). If you cannot find the web designer\'s details are not available, then proceed by using another appropriate contact you can find on the site.</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Bear in mind that in many cases, sites are built using site builder tools or templates (look for domains containing wix.com, weebly.com, moonfruit.com, sites.google.com and so on.) With these kinds of sites, the accessibility problem is less likely to be with the person who has produced the site content ("Annie\'s Homemade Jam site") but rather with the site builder software or template that they have used. Again, it\'s worth looking at the site footer to try to find the right details. "Annie" is unlikely to be able to fix the problem... it is probably the software provider you need to contact.</span></p>
<h2 style="line-height: 1.5; margin-top: 18pt; margin-bottom: 4pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Getting started</span></h2>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Once you have signed up as a volunteer, you will be able to log in to this site and access your "dashboard" by clicking the link on the front page. Here you will be able to look for your first report to take on. Later, you will able to use the dashboard to access reports that are in progress as well as review reports you have finished with.</span></p>
<p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">You can do as much or as little with Fix the Web as you want. When you sign up as a volunteer, you can say how often you want the site to nudge you (by email) for involvement. The email will remind you of the status of the reports you have taken on.</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Building rapport with web designers</span></p>
<p style="line-height: 1.5; margin-top: 0pt; margin-bottom: 10pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The WAI has a helpful page on <a href="http://www.w3.org/WAI/users/inaccessible">contacting organizations about inaccessible websites</a>. The key thing here is to be clear, polite and patient with the web designers you contact. They may be very busy, no matter how willing to help. However, you may find that you get brushed off, and assured that a problem is fixed when it hasn\'t been! It\'s good to be tenacious as well as persistently polite, and to push a few times so that there is a better chance that the issue will actually get fixed.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">You will have two main jobs to do, when contacting web designers or site owners:</span></p>
<ol style="margin-top: 0pt; margin-bottom: 0pt;"><li style="list-style-type: decimal; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; margin-left: 29px;" dir="ltr">
<p style="line-height: 1.5004727840423584; margin-top: 3pt; margin-bottom: 3pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Ensure the information from the disabled person, though very brief (some of this will come through tweets!) is reproduced in a polite and comprehensible form.</span></p>
</li>
<li style="list-style-type: decimal; font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; margin-left: 29px;" dir="ltr">
<p style="line-height: 1.5004727840423584; margin-top: 3pt; margin-bottom: 3pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Find the web owner via their website and send the information to them through email or contact form.</span></p>
</li>
</ol><p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The construction of the report is autoAriald and there is an accessibility checker built in to the process to pre-qualify the report. </span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Some of the issues that come into the list of newly reported sites are not accessibility issues, they may be spam, porn, other kinds of problems or they could be "retweets" or marketing via twitter. If you are clear that a report is </span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">not</span><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> an accessibility issue then please close it and label it appropriately. If you aren\'t sure, you can leave it for someone else to decide, and choose a different report to work on, via your dashboard.</span></p>
<h2 style="line-height: 1.5; margin-top: 18pt; margin-bottom: 4pt;" dir="ltr"><span style="font-size: 19px; font-family: Arial; color: #000000; background-color: transparent; font-weight: bold; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Getting support as a volunteer: going deeper</span></h2>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">The forum</span></p>
<p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">We strongly suggest you join the </span><a style="text-decoration: none;" href="http://www.accessifyforum.com/"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Accessify discussion forum</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> (or look in their archives). The forum is the main place where you can get support and get responses to any questions you may have as a volunteer.</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Understanding Web Accessibility Issues</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">We believe that anyone with the right determination and motivation can be an effective Fix the Web volunteer. You do not need prior expertise in web accessibility, though we hope you will begin to understand more as you help out. </span><a style="text-decoration: none;" href="http://www.w3.org/WAI/intro/accessibility"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">W3Cs Accessibility guide</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> is great place to introduce yourself to the issues, so please have a look!</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Communicating with website owners and disabled reporters</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Raising web accessibility issues with website owners or designers, on the scale Fix the Web is aiming for, will make a difference. Simply contacting people about an issue on behalf of a disabled person is important. Sometimes website owners/designers may not respond to your message but the awareness raising you have done will have an impact over the longer term.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Remember that web owners will need more information about the issue, and in some cases (polite) pressure to make changes. A crucial part of your role as a volunteer is to explain the nature of the problem as clearly as you can to the web owner.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In some cases it may be appropriate to go back to the disabled person who reported the problem, and request further information from them. In any case, it is a good idea to keep the reporter informed of the progress of the case, unless they have asked not to be contacted.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In the case where the website owner/designer replies to you with further questions about the query, you can offer advice if you feel able, or signpost them to further more specialised </span><a style="text-decoration: none;" href="http://ftw/links"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">sources of support</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">. You are not required or expected to be able to fix their problems for them. In some cases they may need to redesign their website substantially and of course this can rarely be done straight away. In this case, it may be worth closing the report with the appropriate label, or at least making a note to contact them again after a reasonable time period to see if there has been any progress. Make a note of this on the report file in your dashboard, and let the reporter know the state of play.</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please keep good records of dialogues with website owners, pasting them into the notes section of the dashboard. Other people may view the report file later, so make sure that your notes are polite and make sense!</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Occasionally it may turn out that there isn\'t a problem with the website, but that the disabled person is not using their </span><a style="text-decoration: none;" href="http://abilitynet.wetpaint.com/page/What+is+Assistive+Technology"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">assistive technology</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> (such as a screen reader for a visually impaired person) properly. In this case there are further </span><a style="text-decoration: none;" href="http://ftw/links"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">signposts</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> to assist that person.</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Commercial activity</span></p>
<p style="line-height: 1.5; margin-top: 0pt; margin-bottom: 10pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please do not use the role of Fix the Web volunteer just as a way in for your own business or service. While it is fine, after some time, to mention your business to a website owner, in the first instance the contact should be as a volunteer (an </span><a style="text-decoration: none;" href="http://ftw/faq"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">FAQ</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> discusses this in more detail). But for example you may wish to include your personal contact information discreetly in an email signature/footer.</span></p>
<p><span style="font-size: 15px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: italic; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Success stories</span></p>
<p style="line-height: 1.5004727840423584; margin-top: 11pt; margin-bottom: 11pt;" dir="ltr"><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">In some cases the issue with a website may be straightforward for the web owner to fix, and it would be great to hear about improvements made as a result of your volunteering efforts - let us know your success stories! </span></p>
<p><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">If that is enough information, we hope you are now feeling inspired to be a volunteer for Fix the Web. </span><a style="text-decoration: none;" href="http://www.fixtheweb.net/register/volunteer"><span style="font-size: 13px; font-family: Arial; color: #0074bd; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;">Please sign up here.</span></a><span style="font-size: 13px; font-family: Arial; color: #000000; background-color: transparent; font-weight: normal; font-style: normal; font-variant: normal; text-decoration: none; vertical-align: baseline; white-space: pre-wrap;"> Let\'s make sure the web that we love is inclusive!</span></p>
<p><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">If you have any other questions about the project and being a volunteer please see the </span><a href="../faq"><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">FAQs</span></a><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;"> or </span><a href="../contact"><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">contact the coordinator</span></a><span style="font-family: Arial; background-color: transparent; white-space: pre-wrap;">.</span></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 15:09:58 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Access denied',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9a988bfe-4ada-4abe-a529-64c704aa5d21',
  'type' => 'page',
  'language' => 'und',
  'created' => 1285088706,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cbad1478-3d48-4d25-a6c5-2fd519cc644b',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Sorry you can\'t access that page - hit your back button to go back to the last page.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Sorry you can\'t access that page - hit your back button to go back to the last page.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-09-21 17:05:06 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Thanks',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '422fe798-7ed4-476f-b601-af98eef4ec3c',
  'type' => 'page',
  'language' => 'und',
  'created' => 1289557126,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ccffb642-b567-4f7b-8f98-1054aeb5177f',
  'revision_uid' => 0,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<!--break-->Thanks for your report',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thanks for your report</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => '',
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-11-12 10:18:46 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Help us Fix the Web!',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5d494f76-2100-4551-bf56-128a1bdfdd43',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279545186,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'db5f752c-3841-49a4-8191-fb7f16de1082',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div id="formbackground"><?php print drupal_render(drupal_get_form(\'report_form\')); ?></div>',
        'summary' => '',
        'format' => 'php_code',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2010-07-19 13:13:06 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Reports waiting',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4c37d9fb-41cf-4d87-8ca1-3fd7c99a6405',
  'type' => 'page',
  'language' => 'und',
  'created' => 1392046040,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f13a0eab-c338-448e-994a-c21a28a6bcaf',
  'revision_uid' => 0,
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:2:{s:7:"contact";i:1;s:7:"overlay";i:1;}',
  'date' => '2014-02-10 15:27:20 +0000',
);
  return $nodes;
}
