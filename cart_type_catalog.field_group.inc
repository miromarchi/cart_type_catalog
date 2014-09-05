<?php
/**
 * @file
 * cart_type_catalog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cart_type_catalog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_info|node|cart_catalog|form';
  $field_group->group_name = 'group_cart_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_catalog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '16',
    'children' => array(
      0 => 'body',
      1 => 'field_cart_editor',
      2 => 'field_cart_publisher',
      3 => 'field_cart_language',
      4 => 'field_cart_textby',
      5 => 'field_cart_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_info|node|cart_catalog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cart_links|node|cart_catalog|form';
  $field_group->group_name = 'group_cart_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_catalog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabsgroup';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '17',
    'children' => array(
      0 => 'field_cart_links_web',
      1 => 'field_cart_blog_link',
      2 => 'field_cart_facebook_link',
      3 => 'field_cart_twitter_link',
      4 => 'field_cart_google_link',
      5 => 'field_cart_instagram_link',
      6 => 'field_cart_flickr_link',
      7 => 'field_cart_youtube_link',
      8 => 'field_cart_rss_link',
      9 => 'field_cart_linkedin_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cart-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_cart_links|node|cart_catalog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabsgroup|node|cart_catalog|form';
  $field_group->group_name = 'group_tabsgroup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cart_catalog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs group',
    'weight' => '2',
    'children' => array(
      0 => 'group_cart_links',
      1 => 'group_cart_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabsgroup field-group-tabs',
      ),
    ),
  );
  $export['group_tabsgroup|node|cart_catalog|form'] = $field_group;

  return $export;
}