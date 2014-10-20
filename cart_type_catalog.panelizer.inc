<?php
/**
 * @file
 * cart_type_catalog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cart_type_catalog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_catalog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_catalog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
      'left' => NULL,
      'right' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a7272474-7e5d-435a-ba68-a4d107928511';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a46269b1-570a-4334-8b62-d38b91f540e1';
    $pane->panel = 'one';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_completeness-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a46269b1-570a-4334-8b62-d38b91f540e1';
    $display->content['new-a46269b1-570a-4334-8b62-d38b91f540e1'] = $pane;
    $display->panels['one'][0] = 'new-a46269b1-570a-4334-8b62-d38b91f540e1';
    $pane = new stdClass();
    $pane->pid = 'new-538092bd-095e-4b30-b197-8b4fc817df18';
    $pane->panel = 'one';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_coffeebook',
        'image_link' => 'file',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '538092bd-095e-4b30-b197-8b4fc817df18';
    $display->content['new-538092bd-095e-4b30-b197-8b4fc817df18'] = $pane;
    $display->panels['one'][1] = 'new-538092bd-095e-4b30-b197-8b4fc817df18';
    $pane = new stdClass();
    $pane->pid = 'new-85a66f0c-9fba-45de-8766-0cce5a0df255';
    $pane->panel = 'one';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_links-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '85a66f0c-9fba-45de-8766-0cce5a0df255';
    $display->content['new-85a66f0c-9fba-45de-8766-0cce5a0df255'] = $pane;
    $display->panels['one'][2] = 'new-85a66f0c-9fba-45de-8766-0cce5a0df255';
    $pane = new stdClass();
    $pane->pid = 'new-d93fdf70-1e04-49f7-9a01-675d3a7814fe';
    $pane->panel = 'one';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_shop_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd93fdf70-1e04-49f7-9a01-675d3a7814fe';
    $display->content['new-d93fdf70-1e04-49f7-9a01-675d3a7814fe'] = $pane;
    $display->panels['one'][3] = 'new-d93fdf70-1e04-49f7-9a01-675d3a7814fe';
    $pane = new stdClass();
    $pane->pid = 'new-d1c4d465-d69a-4413-918a-4ad0db8428f5';
    $pane->panel = 'three';
    $pane->type = 'views_panes';
    $pane->subtype = 'cart_view_curriculum-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1c4d465-d69a-4413-918a-4ad0db8428f5';
    $display->content['new-d1c4d465-d69a-4413-918a-4ad0db8428f5'] = $pane;
    $display->panels['three'][0] = 'new-d1c4d465-d69a-4413-918a-4ad0db8428f5';
    $pane = new stdClass();
    $pane->pid = 'new-0d6121da-179e-4736-b9aa-f538f6bf52a2';
    $pane->panel = 'two';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d6121da-179e-4736-b9aa-f538f6bf52a2';
    $display->content['new-0d6121da-179e-4736-b9aa-f538f6bf52a2'] = $pane;
    $display->panels['two'][0] = 'new-0d6121da-179e-4736-b9aa-f538f6bf52a2';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_catalog:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:cart_catalog:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'cart_catalog';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ef9081c3-8c21-4779-abf7-1ac9637dea1a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6334876e-297c-4340-b0a4-e57c558081ba';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cart_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'cart_img_coffeebook',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6334876e-297c-4340-b0a4-e57c558081ba';
    $display->content['new-6334876e-297c-4340-b0a4-e57c558081ba'] = $pane;
    $display->panels['middle'][0] = 'new-6334876e-297c-4340-b0a4-e57c558081ba';
    $pane = new stdClass();
    $pane->pid = 'new-5b6df540-4a66-4c60-bd6b-21e41885e5dc';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'teaser',
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b6df540-4a66-4c60-bd6b-21e41885e5dc';
    $display->content['new-5b6df540-4a66-4c60-bd6b-21e41885e5dc'] = $pane;
    $display->panels['middle'][1] = 'new-5b6df540-4a66-4c60-bd6b-21e41885e5dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:cart_catalog:default:teaser'] = $panelizer;

  return $export;
}
