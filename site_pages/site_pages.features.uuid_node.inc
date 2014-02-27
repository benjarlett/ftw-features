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
  'revision_uid' => 1,
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
        'value' => 'We\'re very interested to hear about any bugs. Please <a href="contact">get in touch<a/> and let us know.

Hello Ben',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>We\'re very interested to hear about any bugs. Please <a href="contact">get in touch</a><a></a> and let us know.</p>
<p>Hello Ben</p>
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
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'd55e41ef-7e87-4880-9337-211a29bd24fe',
  'type' => 'page',
  'language' => 'en',
  'created' => 1296493034,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '28fcfeff-3a7c-4e4c-bd1e-0272ceb79b9c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<img src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" style="margin:0 0 1em 1em;"><p style="font-size:1.2em; margin-top:1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed.  This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p><p>Photo taken by Claire Newman Williams</p>',
        'summary' => '<img src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" style="margin:0 0 1em 1em;"><p style="font-size:1.2em; margin-top:1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed.  This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p><p>Photo taken by Claire Newman Williams</p>',
        'format' => 'full_html',
        'safe_value' => '<p><img src="/sites/default/files/stephen_fry.png" alt="Stephen Fry" align="right" style="margin:0 0 1em 1em;" /><br /></p><p style="font-size:1.2em; margin-top:1em;">“We all expect a few glitches when we go on line, but when it comes to accessibility for disabled and older people, the problem is colossal. Fix the Web is doing something about it in a positive and practical way – I urge you to get involved and help get this problem fixed.  This campaign gets to the very heart of the problem – it’s pure genius!” - <em>Stephen Fry</em></p>
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
  'last_comment_name' => '',
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'title' => 'Links',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '06fcf33e-9da1-4152-97f5-b731a8fef158',
  'type' => 'page',
  'language' => 'und',
  'created' => 1279548863,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '52708833-9270-4f7f-ac04-a9672963396d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Here you can find links to information about accessibility on the web.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Here you can find links to information about accessibility on the web.</p>
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
  'date' => '2010-07-19 14:14:23 +0000',
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
        'value' => '<p>Fix the Web is led by <a href="http://www.citizensonline.org.uk">Citizens Online</a> and funded by <a href="http://www.nominettrust.org.uk/">Nominet Trust</a>. A number of <a href="#partners">partners </a>are contributing to the development of the project.</p><p>See a <a href="/video">video about the Fix the Web project</a>.</p><p>Web accessibility is not improving very quickly despite the efforts of many experts. The scale of the problem is huge and there is a need for culture change amongst web developers and website owners. Our solution is to make it super easy for people facing accessibility issues (such as many disabled and older people) to report problems with websites. Volunteers do the work of contacting the website owners and signposting them to support. In doing this work, volunteers will understand more about e-accessibility for themselves, as well as giving crucial information to website owners. Everybody wins! Details of how the process works are explained for the different roles (<a title="more about being a volunteer" href="being-volunteer">volunteering</a> and <a title="information about reporting websites" href="reporting-websites">issue reporter)</a> and in the <a title="frequently asked questions" href="faq">FAQs.</a></p><p>You can get involved in three different ways:</p><ol><li><a title="Information about reporting websites" href="reporting-websites">Report issues</a> you are having with websites.</li><li><a href="being-volunteer">Volunteer</a> to help liaise with website owners.</li><li>Support the development of the project: <a href="contact">contact the coordinator</a>.</li></ol><p>Reporting and volunteering are different "roles" within the Fix the Web process. We ask that reporters are disabled or older people facing web accessibility issues. Anyone can be a volunteer (we suggest you have reasonable tech skills) and this includes disabled and older people themselves. You may even want to take your own report forwards as a volunteer, making use of the sense of collective in Fix the Web, you are very welcome to do this.</p><p><strong>Benefits of a volunteer led process:</strong></p><ol><li>Complaining could happen on a much bigger scale</li><li>Volunteers can offer support to make the web a better place, in their own time and online</li><li>It\'s an easier process for disabled people</li><li>The volunteers enhance their own knowledge and skills</li><li>Website owners get feedback they can work with or use to justify changes to budget holders</li><li>Web accessibility experts get more business</li><li>Disabled people don\'t have to keep fighting their own corner</li><li>It is clearer what the key issues are: there is a kind of mass user testing in place.</li></ol><p><strong>What we want to achieve and why</strong></p><p>We want to get 250,000 websites reported over the next 2 years. That will need about 10,000 volunteers signed up and many hundreds of active reporters. We believe this will change the culture of the Web. We are UK focussed for now (though everyone is welcome) and we would want to extend our global reach if this process works. In the UK alone, 6 million web users are excluded to some extent from 80% of websites. It is infuriating at times for disabled users. 30.4% of a blind person\'s time is wasted on-line dealing with access issues. Disabled people, if they had the energy and time to take this issue on (and report all the issues they face) may be excluded even from the complaining process (for example by the use of captchas). That\'s why we want to make it super-easy for disabled people to report and let volunteers take the issues forwards.</p><h2><strong>Fix the Web Partners</strong></h2>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Fix the Web is led by <a href="http://www.citizensonline.org.uk">Citizens Online</a> and funded by <a href="http://www.nominettrust.org.uk/">Nominet Trust</a>. A number of <a href="#partners">partners </a>are contributing to the development of the project.</p>
<p>See a <a href="/video">video about the Fix the Web project</a>.</p>
<p>Web accessibility is not improving very quickly despite the efforts of many experts. The scale of the problem is huge and there is a need for culture change amongst web developers and website owners. Our solution is to make it super easy for people facing accessibility issues (such as many disabled and older people) to report problems with websites. Volunteers do the work of contacting the website owners and signposting them to support. In doing this work, volunteers will understand more about e-accessibility for themselves, as well as giving crucial information to website owners. Everybody wins! Details of how the process works are explained for the different roles (<a title="more about being a volunteer" href="being-volunteer">volunteering</a> and <a title="information about reporting websites" href="reporting-websites">issue reporter)</a> and in the <a title="frequently asked questions" href="faq">FAQs.</a></p>
<p>You can get involved in three different ways:</p>
<ol><li><a title="Information about reporting websites" href="reporting-websites">Report issues</a> you are having with websites.</li>
<li><a href="being-volunteer">Volunteer</a> to help liaise with website owners.</li>
<li>Support the development of the project: <a href="contact">contact the coordinator</a>.</li>
</ol><p>Reporting and volunteering are different "roles" within the Fix the Web process. We ask that reporters are disabled or older people facing web accessibility issues. Anyone can be a volunteer (we suggest you have reasonable tech skills) and this includes disabled and older people themselves. You may even want to take your own report forwards as a volunteer, making use of the sense of collective in Fix the Web, you are very welcome to do this.</p>
<p><strong>Benefits of a volunteer led process:</strong></p>
<ol><li>Complaining could happen on a much bigger scale</li>
<li>Volunteers can offer support to make the web a better place, in their own time and online</li>
<li>It\'s an easier process for disabled people</li>
<li>The volunteers enhance their own knowledge and skills</li>
<li>Website owners get feedback they can work with or use to justify changes to budget holders</li>
<li>Web accessibility experts get more business</li>
<li>Disabled people don\'t have to keep fighting their own corner</li>
<li>It is clearer what the key issues are: there is a kind of mass user testing in place.</li>
</ol><p><strong>What we want to achieve and why</strong></p>
<p>We want to get 250,000 websites reported over the next 2 years. That will need about 10,000 volunteers signed up and many hundreds of active reporters. We believe this will change the culture of the Web. We are UK focussed for now (though everyone is welcome) and we would want to extend our global reach if this process works. In the UK alone, 6 million web users are excluded to some extent from 80% of websites. It is infuriating at times for disabled users. 30.4% of a blind person\'s time is wasted on-line dealing with access issues. Disabled people, if they had the energy and time to take this issue on (and report all the issues they face) may be excluded even from the complaining process (for example by the use of captchas). That\'s why we want to make it super-easy for disabled people to report and let volunteers take the issues forwards.</p>
<h2><strong>Fix the Web Partners</strong></h2>
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
        'value' => '<p><!--break--></p><p>Reporting inaccessible websites is simple! You can report as many websites as you wish. This can be individual pages or the site as a whole.</p><p>You can do this in any of three ways:</p><ol><li>Use this form to <a href="/report">report a website</a>.</li><li>Email&nbsp;<a href="mailto:post@fixtheweb.net">post@fixtheweb.net</a>&nbsp;, putting the URL in the subject header and information about the problem in the body.</li><li>Tweet &nbsp;"#fixtheweb #fail"; include the url and what the issue is</li><li><a href="/toolbar">Use the ATbar</a> and click the Fix the Web love heart button to open a form and report any websites as you surf on them!</li></ol><p>You can give as little or as much information as you like (except by tweeting where there is a restriction).</p><h2><strong>Who can report?</strong></h2><p>Reporting and volunteering are different "roles" within the Fix the Web process.&nbsp;We are asking that only people facing web accessibility issues report to the site. So this includes disabled and older people with specific impairments. (Other people are able to report directly to web owners.)</p><p>Anyone can be a volunteer (we suggest you have reasonable tech skills) and this includes disabled and older people themselves. You may even want to take your own report forwards as a volunteer, making use of the sense of collective in Fix the Web, you are very welcome to do this.</p><h2><strong>What happens to my reports?</strong></h2><p>Volunteers take the reports through a short process to check them and then will send them on to website owners, with information about web accessibility. Our volunteers might contact you if the web owner has further questions. You don\'t have to <a href="register/reporter">register</a>&nbsp;with the site to take part in reporting, but it has a few advantages:</p><ul><li>It removes the need for a captcha on forms.</li><li>You can say through your profile, whether you want to be kept updated on progress on any websites that you reported.</li><li>You can give information about any access technologies you use and the system you operate (one time only) so that volunteers have more context, when needed.</li><li>You can chose not to be contacted, if you prefer.</li></ul><p>We can process the reports coming in according to the number of volunteers we have and the reports they are willing to take forwards. We will prioritise websites that receive more reports of issues. Web owners may not respond or may say they need a long time to make changes, or haven\'t currently got a budget. However, in our view, we will create culture change by ensuring that an increasing number of web accessibility problems are reported. When websites do get fixed, they will be collated on our website homepage so we can get a sense of progress.</p><p>At the moment, you are unlikely to get contacted about your report until it has been closed (a conclusion reached one way or another). You might be contacted if volunteers want to ask further questions. We understand from feedback that reporters would like more opportunity to see what is happening with thier reports, so we have encouraged volunteers to keep you updated (please let them know if you don\'t need this) and we will in further development rounds of Fix the Web give you an ability to see more of what is happening.</p><p>Please&nbsp;ensure websites reported are not discriminatory, pornographic or in any way illegal / spam.</p><p>Please <a href="register/reporter">sign up</a> and start reporting those e-accessibility frustrations, large and small. For any further questions please see the <a href="faq">FAQs </a>or <a href="contact">contact the coordinator</a>.</p><h2><strong>Important Privacy information</strong></h2><p><strong>&nbsp;</strong>Reporters of sites give their contact details when they report sites and this is shared with volunteers, who may wish to get more information on the web accessibility issues reported. If you don\'t want to be contacted at all it is important to register with the site and make this choice in your profile. if you believe a volunteer is behaving inappropriately please <a href="contact">contact the coordinator.</a></p><p>&nbsp;</p><h2><strong>Describing problems </strong></h2><p><strong>Examples (<a href="http://www.w3.org/WAI/users/inaccessible">from WAI</a>):</strong></p><ul><li><strong>keyboard navigation</strong> - I can\'t get from the home page to the pages for paying my bill. I can\'t use a mouse so I use Tab to get to links, but I can\'t tab to the Pay Your Bills link.</li><li><strong>mouse clicking</strong> - It\'s hard for me to get the mouse to stop on small things. In the survey, it\'s hard to click the little circles. On other surveys I\'ve used, I can click on the words as well as the circles, which is a lot easier.</li><li><strong>small text</strong> - I can\'t read the bus timetables because the text is too small. I set the text size to Larger in my browser, but the text didn\'t get any bigger.</li><li><strong>overlapping text</strong> - I had trouble reading the small text. I increased the text size in my browser, but then much of the text overlapped other text and the pictures, making it impossible to read.</li><li><strong>color combinations</strong> - It\'s difficult to read some of the product descriptions because the colors make it hard to see the text; in particular I have problems with blue/yellow and blue/orange color combinations.</li><li><strong>alt text</strong> - I\'m using a screen reader to listen to your website. Screen readers can\'t read images; they read the alt text from the code. The images on this page are missing alt text. For example, I hear "240.gif" which my friend tells me is an image for Special Discounts.</li><li><strong>distracting animations</strong> - I found the home page very confusing and it was difficult to find the information I wanted with all the animated things all over the page. They kept drawing my attention away from what I was trying to read.</li><li><strong>captions</strong> - I was told your website has good video tutorials, but I cannot get much information from the videos because I can\'t hear them and they are missing captions.</li></ul>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!--break--></p>
<p>Reporting inaccessible websites is simple! You can report as many websites as you wish. This can be individual pages or the site as a whole.</p>
<p>You can do this in any of three ways:</p>
<ol><li>Use this form to <a href="/report">report a website</a>.</li>
<li>Email <a href="mailto:post@fixtheweb.net">post@fixtheweb.net</a> , putting the URL in the subject header and information about the problem in the body.</li>
<li>Tweet  "#fixtheweb #fail"; include the url and what the issue is</li>
<li><a href="/toolbar">Use the ATbar</a> and click the Fix the Web love heart button to open a form and report any websites as you surf on them!</li>
</ol><p>You can give as little or as much information as you like (except by tweeting where there is a restriction).</p>
<h2><strong>Who can report?</strong></h2>
<p>Reporting and volunteering are different "roles" within the Fix the Web process. We are asking that only people facing web accessibility issues report to the site. So this includes disabled and older people with specific impairments. (Other people are able to report directly to web owners.)</p>
<p>Anyone can be a volunteer (we suggest you have reasonable tech skills) and this includes disabled and older people themselves. You may even want to take your own report forwards as a volunteer, making use of the sense of collective in Fix the Web, you are very welcome to do this.</p>
<h2><strong>What happens to my reports?</strong></h2>
<p>Volunteers take the reports through a short process to check them and then will send them on to website owners, with information about web accessibility. Our volunteers might contact you if the web owner has further questions. You don\'t have to <a href="register/reporter">register</a> with the site to take part in reporting, but it has a few advantages:</p>
<ul><li>It removes the need for a captcha on forms.</li>
<li>You can say through your profile, whether you want to be kept updated on progress on any websites that you reported.</li>
<li>You can give information about any access technologies you use and the system you operate (one time only) so that volunteers have more context, when needed.</li>
<li>You can chose not to be contacted, if you prefer.</li>
</ul><p>We can process the reports coming in according to the number of volunteers we have and the reports they are willing to take forwards. We will prioritise websites that receive more reports of issues. Web owners may not respond or may say they need a long time to make changes, or haven\'t currently got a budget. However, in our view, we will create culture change by ensuring that an increasing number of web accessibility problems are reported. When websites do get fixed, they will be collated on our website homepage so we can get a sense of progress.</p>
<p>At the moment, you are unlikely to get contacted about your report until it has been closed (a conclusion reached one way or another). You might be contacted if volunteers want to ask further questions. We understand from feedback that reporters would like more opportunity to see what is happening with thier reports, so we have encouraged volunteers to keep you updated (please let them know if you don\'t need this) and we will in further development rounds of Fix the Web give you an ability to see more of what is happening.</p>
<p>Please ensure websites reported are not discriminatory, pornographic or in any way illegal / spam.</p>
<p>Please <a href="register/reporter">sign up</a> and start reporting those e-accessibility frustrations, large and small. For any further questions please see the <a href="faq">FAQs </a>or <a href="contact">contact the coordinator</a>.</p>
<h2><strong>Important Privacy information</strong></h2>
<p><strong> </strong>Reporters of sites give their contact details when they report sites and this is shared with volunteers, who may wish to get more information on the web accessibility issues reported. If you don\'t want to be contacted at all it is important to register with the site and make this choice in your profile. if you believe a volunteer is behaving inappropriately please <a href="contact">contact the coordinator.</a></p>
<p> </p>
<h2><strong>Describing problems </strong></h2>
<p><strong>Examples (<a href="http://www.w3.org/WAI/users/inaccessible">from WAI</a>):</strong></p>
<ul><li><strong>keyboard navigation</strong> - I can\'t get from the home page to the pages for paying my bill. I can\'t use a mouse so I use Tab to get to links, but I can\'t tab to the Pay Your Bills link.</li>
<li><strong>mouse clicking</strong> - It\'s hard for me to get the mouse to stop on small things. In the survey, it\'s hard to click the little circles. On other surveys I\'ve used, I can click on the words as well as the circles, which is a lot easier.</li>
<li><strong>small text</strong> - I can\'t read the bus timetables because the text is too small. I set the text size to Larger in my browser, but the text didn\'t get any bigger.</li>
<li><strong>overlapping text</strong> - I had trouble reading the small text. I increased the text size in my browser, but then much of the text overlapped other text and the pictures, making it impossible to read.</li>
<li><strong>color combinations</strong> - It\'s difficult to read some of the product descriptions because the colors make it hard to see the text; in particular I have problems with blue/yellow and blue/orange color combinations.</li>
<li><strong>alt text</strong> - I\'m using a screen reader to listen to your website. Screen readers can\'t read images; they read the alt text from the code. The images on this page are missing alt text. For example, I hear "240.gif" which my friend tells me is an image for Special Discounts.</li>
<li><strong>distracting animations</strong> - I found the home page very confusing and it was difficult to find the information I wanted with all the animated things all over the page. They kept drawing my attention away from what I was trying to read.</li>
<li><strong>captions</strong> - I was told your website has good video tutorials, but I cannot get much information from the videos because I can\'t hear them and they are missing captions.</li>
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
        'value' => '<p><!--break--></p><h2>General Info</h2><p>In order to make this site accessible to as many people as possible, it has been built to certain web standards to ensure that people with disabilities find this website easy to use.</p><p>The World Wide Web Consortium (W3C) has published Web Content Accessibility Guidelines (WCAG) that helps Web developers make sites accessible. This site has been built and tested to meet <a href="http://www.w3.org/TR/WCAG20/#conformance">WCAG 2.0 AA standard</a> (<a href="http://www.hanona.org/FTWcertificate.html">view our certificate</a>).</p><p><img src="http://www.hanona.org/images/hanona_aa.png" alt="Hanona.org WCAG 2 Double A conformance logo"></p><p>Decorative images on the site may not have alternative text, but only if they do not carry any useful information, or duplicate nearby written text.<br> User tip: Each page starts with navigation, but there is a skip link at the top of each page that will take you to the main content.</p><h2>Spam Protection/Captcha decision</h2><p>After some research into various methods to keep spam out of our site we\'ve had to strike a balance between the experience for our volunteers and our reporters. It is well reported that using CAPTCHA (asking simple questions to prove that you are a human) is a very controversial issue. We spent a long time debating the various options, but there are many problems to overcome, even <a title="Can anyone use audio CAPTCHA" href="http://www.it-analysis.com/blogs/Abrahams_Accessibility/2010/10/can_anyone_use_audio_captcha.html">audio CAPTCHA has it\'s problems</a>. Ruling out audio CAPTCHA ruled out for us some of the popular suggestions that we\'ve been having (<a href="http://mollom.com/">Mollom</a>, <a href="http://www.google.com/recaptcha">reCAPTCHA</a>) and finally led us to using <a href="http://textcaptcha.com/">Rob Tuley\'s TextCAPTCHA service</a>. We have looked into the more accessible spam filtering methods (<a href="http://www.akismet.com">Askimet</a> and so on...) but have seen reports that real submissions may be missed.</p><p>We have enabled a refresh option on the captcha so you can refresh until you get one you are happy with. If you register with Fix the Web you will only ever need to do one captcha. If you use the toolbar or email route for reporting these are totally free from CAPTCHA. Twitter reporting is also CAPTCHA free, but if possible register first before using twitter, as this helps our volunteers who don\'t already have a twitter account to report back.</p><p>&nbsp;</p><h2><a name="access-keys"></a>Access Keys</h2><p>Fix the Web uses the following access keys:</p><dl id="accesskeys"><dt>1</dt><dd>Home</dd><dt>2</dt><dd>Accessibility</dd><dt>3</dt><dd>Sitemap</dd><dt>4</dt><dd>F.A.Q. (Frequently asked questions)</dd><dt>5</dt><dd>Links</dd><dt>6</dt><dd>Contact us</dd><dt>7</dt><dd>Volunteering</dd><dt>8</dt><dd>Reporting Websites</dd><dt>9</dt><dd>Jump to navigation</dd><dt>0</dt><dd>Jump to content</dd></dl><p>How access keys work depend upon the browser and operating system that you are using. Wikipedia has <a href="http://en.wikipedia.org/wiki/Access_key#Access_in_different_Browsers">a comprehensive guide on how to use access keys</a>. Opera users can get a list of access keys if they press SHIFT+ESC, though this list doesn\'t effectively indicate the Jump to links (0 and 9).</p><h2>Jump to/Skip links</h2><p>Skip links help users who prefer to use tabbed browsing to navigate the page more quickly. If you use tabbed browsing you will probably have already noticed that we have chosen to hide our skip links, these appear when you hit the tab key for the first time.</p><h2>Current access issues on our site</h2><p>We intend to add to this list as we become aware of problems with our site.</p><ul><li>We are aware of a few combinations of text zoom and screen width where the menu at the top of the page becomes obscured by the title of the page.</li></ul><h2>Comments</h2><p>If you have any comments about the accessibility of this site or if you would like to make a suggestion to help us make this site more accessible, contact the web Trust\'s administrator using our <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">contact page</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!--break--></p>
<h2>General Info</h2>
<p>In order to make this site accessible to as many people as possible, it has been built to certain web standards to ensure that people with disabilities find this website easy to use.</p>
<p>The World Wide Web Consortium (W3C) has published Web Content Accessibility Guidelines (WCAG) that helps Web developers make sites accessible. This site has been built and tested to meet <a href="http://www.w3.org/TR/WCAG20/#conformance">WCAG 2.0 AA standard</a> (<a href="http://www.hanona.org/FTWcertificate.html">view our certificate</a>).</p>
<p><img src="http://www.hanona.org/images/hanona_aa.png" alt="Hanona.org WCAG 2 Double A conformance logo" /></p>
<p>Decorative images on the site may not have alternative text, but only if they do not carry any useful information, or duplicate nearby written text.<br /> User tip: Each page starts with navigation, but there is a skip link at the top of each page that will take you to the main content.</p>
<h2>Spam Protection/Captcha decision</h2>
<p>After some research into various methods to keep spam out of our site we\'ve had to strike a balance between the experience for our volunteers and our reporters. It is well reported that using CAPTCHA (asking simple questions to prove that you are a human) is a very controversial issue. We spent a long time debating the various options, but there are many problems to overcome, even <a title="Can anyone use audio CAPTCHA" href="http://www.it-analysis.com/blogs/Abrahams_Accessibility/2010/10/can_anyone_use_audio_captcha.html">audio CAPTCHA has it\'s problems</a>. Ruling out audio CAPTCHA ruled out for us some of the popular suggestions that we\'ve been having (<a href="http://mollom.com/">Mollom</a>, <a href="http://www.google.com/recaptcha">reCAPTCHA</a>) and finally led us to using <a href="http://textcaptcha.com/">Rob Tuley\'s TextCAPTCHA service</a>. We have looked into the more accessible spam filtering methods (<a href="http://www.akismet.com">Askimet</a> and so on...) but have seen reports that real submissions may be missed.</p>
<p>We have enabled a refresh option on the captcha so you can refresh until you get one you are happy with. If you register with Fix the Web you will only ever need to do one captcha. If you use the toolbar or email route for reporting these are totally free from CAPTCHA. Twitter reporting is also CAPTCHA free, but if possible register first before using twitter, as this helps our volunteers who don\'t already have a twitter account to report back.</p>
<p> </p>
<h2><a name="access-keys" id="access-keys"></a>Access Keys</h2>
<p>Fix the Web uses the following access keys:</p>
<dl id="accesskeys"><dt>1</dt>
<dd>Home</dd>
<dt>2</dt>
<dd>Accessibility</dd>
<dt>3</dt>
<dd>Sitemap</dd>
<dt>4</dt>
<dd>F.A.Q. (Frequently asked questions)</dd>
<dt>5</dt>
<dd>Links</dd>
<dt>6</dt>
<dd>Contact us</dd>
<dt>7</dt>
<dd>Volunteering</dd>
<dt>8</dt>
<dd>Reporting Websites</dd>
<dt>9</dt>
<dd>Jump to navigation</dd>
<dt>0</dt>
<dd>Jump to content</dd>
</dl><p>How access keys work depend upon the browser and operating system that you are using. Wikipedia has <a href="http://en.wikipedia.org/wiki/Access_key#Access_in_different_Browsers">a comprehensive guide on how to use access keys</a>. Opera users can get a list of access keys if they press SHIFT+ESC, though this list doesn\'t effectively indicate the Jump to links (0 and 9).</p>
<h2>Jump to/Skip links</h2>
<p>Skip links help users who prefer to use tabbed browsing to navigate the page more quickly. If you use tabbed browsing you will probably have already noticed that we have chosen to hide our skip links, these appear when you hit the tab key for the first time.</p>
<h2>Current access issues on our site</h2>
<p>We intend to add to this list as we become aware of problems with our site.</p>
<ul><li>We are aware of a few combinations of text zoom and screen width where the menu at the top of the page becomes obscured by the title of the page.</li>
</ul><h2>Comments</h2>
<p>If you have any comments about the accessibility of this site or if you would like to make a suggestion to help us make this site more accessible, contact the web Trust\'s administrator using our <a href="/contact?phpMyAdmin=Q%2CToaeky0Xc3ARH1eTUteltcjbf">contact page</a>.</p>
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
        'value' => '<p><!--break--></p><p>Being a volunteer for Fix the Web is a valuable way to contribute your time and make a difference. It is simple, on-line, in your own time and may teach you useful things!</p><p><a href="/register/volunteer">Volunteer to Fix the Web</a></p><h2><strong>Understanding Web Accessibility Issues</strong></h2><p>Having expertise in web accessibility is not needed, though we hope you will begin to understand more about this vital area as you help out. It is sensible to introduce yourself to the basics of web accessibility - <a href="http://www.w3.org/WAI/intro/accessibility">W3Cs Accessibility guide</a> is good. If you want more details we strongly suggest you join the <a href="http://www.accessifyforum.com/">Accessify discussion forum</a> (or look in their archives). If you do have expertise in web accessibility that is great! However, please do not use the information from Fix the Web for overtly commercial behaviour. Whilst it is fine, after some time, to mention your business to a website owner, in the first instance the contact should be as a volunteer (an <a href="faq">FAQ</a> discusses this in more detail).</p><h2><strong>How it Works</strong></h2><p>The majority of your work for Fix the Web takes place within the website through "my dashboard" and the process is explained in a step by step way.</p><p>You will have two main jobs to do:</p><ol><li>Ensure the information from the disabled person, though very brief (some of this will come through tweets!) is reproduced in a polite and comprehensible form.</li><li>Find the web owner via their website and send the information to them through email or contact form.</li></ol><p>The construction of the email is automated and there is an accessibility checker built in to the process to pre-qualify the report. You can do as much or as little with Fix the Web as you feel you want / have time for. When you sign up as a volunteer, you can say how often you want the site to chase you for involvement. It will remind you of the status of the jobs you have.</p><p>Some of the issues that come into the list of newly reported sites are not accessibility issues, they may be spam, porn, other kinds of problems or they could be "retweets" or marketing via twitter. If you are clear that a report is NOT an accessibility issue then please close it marked as "other". If you aren\'t sure, leave it for someone else to decide.</p><p>Please&nbsp;ensure websites reported are not discriminatory, pornographic or in any way illegal / spam.</p><h2><strong>Dialogues with the web owner and disabled reporter </strong></h2><p>Raising web accessibility issues with Web Owners, on the scale Fix the Web is aiming for, will make a difference. So just posting on an issue, on behalf of a disabled person is important. Web owners need more information and in some cases (polite) pressure to make changes. They may not respond to your message but the awareness raising you have done, will have an impact over the longer term.</p><p>In the case where the Web Owner comes back with further questions or interest in the query you can offer advice if you feel able, or sign post them to further more specialised <a href="links">sources of support</a>. You are not required or expected to be able to fix their problems for them. In some cases they may need to redesign their website and we anticipate many can\'t do that straight away. The good thing is that they know they have a problem. In some cases it may be appropriate to go back to the disabled person and request further information, we have ensured this is easy for you.</p><p>It is also important to keep the person who reported the issue fully informed. If they are happy to be contacted, let them know that you have received their report and will be contacting the website owner on their behalf. As the dialogue with the website owner progresses, try to keep the person who reported the problem up to date on what has happened as well.</p><p>If you need more information from and about the disabled person who made the report in the first case. This is possible if they have provided additional information. In some cases they may request not to be contacted, in which case we can only use the information we have. Generally the person will be contactable and we ask that their contact information is only used for Fix the Web purposes and that they are contacted with some sensitivity about their time.</p><p>Please keep good records of dialogues with website owners and ideally, paste them into the notes section of the dashboard. Other people may eventually access this work (if you are unable to complete it or when we provide reporters with their own dashboard) so make sure your comments are polite and will make sense to others.</p><p>Occasionally it may turn out that there isn\'t a problem with the website, but that the disabled person is not using their <a href="http://abilitynet.wetpaint.com/page/What+is+Assistive+Technology">assistive technology</a> (such as a screen reader for a visually impaired person) properly. In this case there are further <a href="links">signposts</a> to assist that person. We hope to minimise this by prioritising websites that have had many complaints and running automated pre checks.</p><p>In some cases the issue with a website may be straight forwards for the web owner to fix and it will be great to hear about improvements made as a result of your volunteering efforts.</p><p>If that is enough information, we hope you are now feeling inspired to be a volunteer for Fix the Web. <a href="http://www.fixtheweb.net/register/volunteer">Please sign up here.</a> Let\'s make sure the web that we love is inclusive!</p><p>If you have any other questions about the project and being a volunteer please see the <a href="faq">FAQs</a> or <a href="contact">contact the coordinator</a>.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><!--break--></p>
<p>Being a volunteer for Fix the Web is a valuable way to contribute your time and make a difference. It is simple, on-line, in your own time and may teach you useful things!</p>
<p><a href="/register/volunteer">Volunteer to Fix the Web</a></p>
<h2><strong>Understanding Web Accessibility Issues</strong></h2>
<p>Having expertise in web accessibility is not needed, though we hope you will begin to understand more about this vital area as you help out. It is sensible to introduce yourself to the basics of web accessibility - <a href="http://www.w3.org/WAI/intro/accessibility">W3Cs Accessibility guide</a> is good. If you want more details we strongly suggest you join the <a href="http://www.accessifyforum.com/">Accessify discussion forum</a> (or look in their archives). If you do have expertise in web accessibility that is great! However, please do not use the information from Fix the Web for overtly commercial behaviour. Whilst it is fine, after some time, to mention your business to a website owner, in the first instance the contact should be as a volunteer (an <a href="faq">FAQ</a> discusses this in more detail).</p>
<h2><strong>How it Works</strong></h2>
<p>The majority of your work for Fix the Web takes place within the website through "my dashboard" and the process is explained in a step by step way.</p>
<p>You will have two main jobs to do:</p>
<ol><li>Ensure the information from the disabled person, though very brief (some of this will come through tweets!) is reproduced in a polite and comprehensible form.</li>
<li>Find the web owner via their website and send the information to them through email or contact form.</li>
</ol><p>The construction of the email is automated and there is an accessibility checker built in to the process to pre-qualify the report. You can do as much or as little with Fix the Web as you feel you want / have time for. When you sign up as a volunteer, you can say how often you want the site to chase you for involvement. It will remind you of the status of the jobs you have.</p>
<p>Some of the issues that come into the list of newly reported sites are not accessibility issues, they may be spam, porn, other kinds of problems or they could be "retweets" or marketing via twitter. If you are clear that a report is NOT an accessibility issue then please close it marked as "other". If you aren\'t sure, leave it for someone else to decide.</p>
<p>Please ensure websites reported are not discriminatory, pornographic or in any way illegal / spam.</p>
<h2><strong>Dialogues with the web owner and disabled reporter </strong></h2>
<p>Raising web accessibility issues with Web Owners, on the scale Fix the Web is aiming for, will make a difference. So just posting on an issue, on behalf of a disabled person is important. Web owners need more information and in some cases (polite) pressure to make changes. They may not respond to your message but the awareness raising you have done, will have an impact over the longer term.</p>
<p>In the case where the Web Owner comes back with further questions or interest in the query you can offer advice if you feel able, or sign post them to further more specialised <a href="links">sources of support</a>. You are not required or expected to be able to fix their problems for them. In some cases they may need to redesign their website and we anticipate many can\'t do that straight away. The good thing is that they know they have a problem. In some cases it may be appropriate to go back to the disabled person and request further information, we have ensured this is easy for you.</p>
<p>It is also important to keep the person who reported the issue fully informed. If they are happy to be contacted, let them know that you have received their report and will be contacting the website owner on their behalf. As the dialogue with the website owner progresses, try to keep the person who reported the problem up to date on what has happened as well.</p>
<p>If you need more information from and about the disabled person who made the report in the first case. This is possible if they have provided additional information. In some cases they may request not to be contacted, in which case we can only use the information we have. Generally the person will be contactable and we ask that their contact information is only used for Fix the Web purposes and that they are contacted with some sensitivity about their time.</p>
<p>Please keep good records of dialogues with website owners and ideally, paste them into the notes section of the dashboard. Other people may eventually access this work (if you are unable to complete it or when we provide reporters with their own dashboard) so make sure your comments are polite and will make sense to others.</p>
<p>Occasionally it may turn out that there isn\'t a problem with the website, but that the disabled person is not using their <a href="http://abilitynet.wetpaint.com/page/What+is+Assistive+Technology">assistive technology</a> (such as a screen reader for a visually impaired person) properly. In this case there are further <a href="links">signposts</a> to assist that person. We hope to minimise this by prioritising websites that have had many complaints and running automated pre checks.</p>
<p>In some cases the issue with a website may be straight forwards for the web owner to fix and it will be great to hear about improvements made as a result of your volunteering efforts.</p>
<p>If that is enough information, we hope you are now feeling inspired to be a volunteer for Fix the Web. <a href="http://www.fixtheweb.net/register/volunteer">Please sign up here.</a> Let\'s make sure the web that we love is inclusive!</p>
<p>If you have any other questions about the project and being a volunteer please see the <a href="faq">FAQs</a> or <a href="contact">contact the coordinator</a>.</p>
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
  'revision_uid' => 1,
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
  'revision_uid' => 1,
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
  'title' => 'Disabled people: Report an issue now!',
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
        'value' => '<div id="formbackground">
<form action="/ftw-site/report" method="post" id="report-form" accept-charset="UTF-8"><div><input type="hidden" name="field_report_user_id" value="1">
<input type="hidden" name="field_report_mail" value="admin@fixtheweb.net">
<input type="hidden" name="details" value="">
<input type="hidden" name="form_build_id" value="form-Kq-lPwTURkoYNDnvMX-UFbXJMzqDu4NtG6CUgtXJvXE">
<input type="hidden" name="form_token" value="0I_1ML4h_LwVBaDl_xo_OEnHEFw8d-ucQXKvahrWQnk">
<input type="hidden" name="form_id" value="report_form">
<div class="form-item form-type-textfield form-item-field-report-url">
  <label for="edit-field-report-url">Website address:</label>
 <input type="text" id="edit-field-report-url" name="field_report_url" value="http://" size="40" maxlength="128" class="form-text required">
</div>
<div class="form-item form-type-textarea form-item-field-report-body">
  <label for="edit-field-report-body">Problem:</label>
 <div class="form-textarea-wrapper resizable textarea-processed resizable-textarea"><textarea id="edit-field-report-body" name="field_report_body" cols="32" rows="5" class="form-textarea required"></textarea><div class="grippie"></div></div>
</div>
<input type="submit" id="edit-submit" name="op" value="Submit" class="form-submit"></div></form></div>',
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
  'revision_uid' => 1,
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
