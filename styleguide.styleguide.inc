<?php

use Drupal\Core\Url;

/**
 * Implements hook_styleguide().
 */
function styleguide_styleguide() {
  $current_url = Url::fromRoute('styleguide.page');
//  $items['a'] = array(
//    '#title' => t('Link'),
//    '#markup' => styleguide_word(3, 'ucfirst') . ' ' . l(styleguide_word(3), 'node') . ' ' . styleguide_word(4) . '.',
//  );
  $items['b'] = array(
    '#title' => t('B'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <b>' . styleguide_word(3) . '</b> ' . styleguide_word(4) . '.',
  );
  $items['del'] = array(
    '#title' => t('Delete'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <del>' . styleguide_word(3) . '</del> ' . styleguide_word(4) . '.',
  );
  $items['em'] = array(
    '#title' => t('Emphasis'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <em>' . styleguide_word(3) . '</em> ' . styleguide_word(4) . '.',
  );
  $items['figcaption'] = array(
    '#title' => t('Figcaption'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <figcaption>' . styleguide_word(3) . '</figcaption> ' . styleguide_word(4) . '.',
  );
  $items['figure'] = array(
    '#title' => t('Figure'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <figure>' . styleguide_word(3) . '</figure> ' . styleguide_word(4) . '.',
  );
  $items['hr'] = array(
    '#title' => t('hr'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <hr>' . styleguide_word(3) . '</hr> ' . styleguide_word(4) . '.',
  );
  $items['i'] = array(
    '#title' => t('Italic'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <i>' . styleguide_word(3) . '</i> ' . styleguide_word(4) . '.',
  );
  $items['q'] = array(
    '#title' => t('Quote'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <q>' . styleguide_word(3) . '</q> ' . styleguide_word(4) . '.',
  );
  $items['s'] = array(
    '#title' => t('Strikethrough'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <s>' . styleguide_word(3) . '</s> ' . styleguide_word(4) . '.',
  );
  $items['small'] = array(
    '#title' => t('Small'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <small>' . styleguide_word(3) . '</small> ' . styleguide_word(4) . '.',
  );
  $items['strong'] = array(
    '#title' => t('Strong'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <strong>' . styleguide_word(3) . '</strong> ' . styleguide_word(4) . '.',
  );
  $items['sub'] = array(
    '#title' => t('Subscript'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <sub>' . styleguide_word(1) . '</sub> ' . styleguide_word(4) . '.',
  );
  $items['sup'] = array(
    '#title' => t('Superscript'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <sup>' . styleguide_word(1) . '</sup> ' . styleguide_word(4) . '.',
  );
  $items['u'] = array(
    '#title' => t('Underline'),
    '#markup' => styleguide_word(3, 'ucfirst') . ' <u>' . styleguide_word(3) . '</u> ' . styleguide_word(4) . '.',
  );
  $items['ul'] = array(
    '#title' => t('Unordered list'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(), 'type' => 'ul'),
    '#group' => t('Lists'),
  );
  $items['ol'] = array(
    '#title' => t('Ordered list'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(), 'type' => 'ol'),
    '#group' => t('Lists'),
  );
  $items['ul_title'] = array(
    '#title' => t('Unordered list, with title'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(), 'type' => 'ul', '#title' => styleguide_word(3, 'ucfirst')),
    '#group' => t('Lists'),
  );
  $items['ol_title'] = array(
    '#title' => t('Ordered list, with title'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(), 'type' => 'ol', '#title' => styleguide_word(3, 'ucfirst')),
    '#group' => t('Lists'),
  );
  $items['ul_long'] = array(
    '#title' => t('Unordered list with wrapped list items'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(3, 120), 'type' => 'ul'),
    '#group' => t('Lists'),
  );
  $items['ol_long'] = array(
    '#title' => t('Ordered list with wrapped list items'),
    '#theme' => 'item_list',
    'variables' => array('items' => styleguide_list(3, 120), 'type' => 'ol'),
    '#group' => t('Lists'),
  );
  $items['ul_links'] = array(
    '#title' => t('Unordered list with links'),
    '#theme' => 'links',
    'variables' => array(
      'links' => styleguide_ul_links(),
    ),
    '#group' => t('Lists'),
  );
  $items['ul_links_inline'] = array(
    '#title' => t('Unordered inline list with links'),
    '#theme' => 'links',
    'variables' => array(
      'links' => styleguide_ul_links(),
      'attributes' => array(
        'class' => array(
          'inline',
        ),
      ),
    ),
    '#group' => t('Lists'),
  );
//  $items['menu_tree'] = array(
//    '#title' => t('Menu tree'),
//    '#markup' => menu_tree('management'),
//    '#group' => t('Menus'),
//  );
//  $items['menu_link'] = array(
//    '#title' => t('Menu link'),
//    '#markup' => theme('menu_link', array('element' => styleguide_menu_item($current_url))),
//    '#group' => t('Menus')
//  );
  $items['table'] = array(
    '#title' => t('Table'),
    '#theme' => 'table',
    'variables' => array('caption' => styleguide_word(3), 'header' => styleguide_header(), 'rows' => styleguide_rows()),
    '#group' => t('Tables'),
  );
  $items['text'] = array(
    '#title' => t('Text block'),
    '#markup' => styleguide_paragraph(3),
    '#group' => t('Text'),
  );
  $items['blockquote'] = array(
    '#title' => t('Blockquote'),
    '#markup' => styleguide_paragraph(1) . '<blockquote>' . styleguide_paragraph(1) . '</blockquote>' . styleguide_paragraph(1),
    '#group' => t('Text'),
  );
  $items['image-horizontal'] = array(
    '#title' => t('Image, horizontal'),
    '#theme' => 'image',
    'variables' => array('path' => styleguide_image('horizontal'), 'alt' => t('My image'), '#title' => t('My image')),
    '#group' => t('Media'),
  );
  $items['image-vertical'] = array(
    '#title' => t('Image, vertical'),
    '#theme' => 'image',
    'variables' => array('path' => styleguide_image('vertical'), 'alt' => t('My image'), '#title' => t('My image')),
    '#group' => t('Media'),
  );
//  $items['image-inset-horizontal'] = array(
//    '#title' => t('Image, horizontal, within text'),
//    '#markup' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('horizontal'), 'alt' => t('My image'), '#title' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );
//  $items['image-inset-vertical'] = array(
//    '#title' => t('Image, vertical, within text'),
//    '#markup' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('vertical'), 'alt' => t('My image'), '#title' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );
  $content = '';
  for ($i = 1; $i <=6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>";
  }
  $items['headings'] = array(
    '#title' => "Headings",
    '#markup' => $content,
    '#group' => t('Text'),
  );
  $content = '';
  for ($i = 1; $i <=6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>" . styleguide_paragraph(1);
  }
  $items['headings_text'] = array(
    '#title' => "Headings with text",
    '#markup' => $content,
    '#group' => t('Text'),
  );
  $messages = array('status', 'warning', 'error');
  foreach ($messages as $message) {
    $items[$message . '-message'] = array(
      '#title' => ucwords($message) . ' message',
      '#markup' => '<div class="messages ' . $message . '"><h2 class="element-invisible">Status message</h2>' . styleguide_sentence() . '</div>',
    );
  }
  // Form elements.
  $fake = $form_state = array();
  $elements = styleguide_form($fake, $form_state);
  $basic = array();
  $fieldsets = array();
  $tabs = array();
  $markup = array();
  foreach (element_children($elements) as $key) {
    if (!isset($elements[$key]['#type']) || $elements[$key]['#type'] == 'item') {
      $markup[] = $key;
    }
    elseif ($elements[$key]['#type'] == 'fieldset') {
      $fieldsets[] = $key;
    }
    elseif ($key == 'vertical_tabs') {
      $tabs[] = $key;
    }
    // We skip these.
    elseif (in_array($elements[$key]['#type'], array('button', 'submit', 'image_button'))) {
      $buttons[] = $key;
    }
    else {
      $basic[] = $key;
    }
  }
//  $items['form'] = array(
//    '#title' => t('Forms, basic'),
//    '#markup' => drupal_get_form('styleguide_form', $basic),
//    '#group' => t('Forms'),
//  );
//  $items['form-submit'] = array(
//    '#title' => t('Forms, submit'),
//    '#markup' => drupal_get_form('styleguide_form', array('submit')),
//    '#group' => t('Forms'),
//  );
//  $items['form-button'] = array(
//    '#title' => t('Forms, button'),
//    '#markup' => drupal_get_form('styleguide_form', array('button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-image-button'] = array(
//    '#title' => t('Forms, image button'),
//    '#markup' => drupal_get_form('styleguide_form', array('image_button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-markup'] = array(
//    '#title' => t('Forms, markup'),
//    '#markup' => drupal_get_form('styleguide_form', $markup),
//    '#group' => t('Forms'),
//  );
//  $items['form-fieldsets'] = array(
//    '#title' => t('Forms, fieldsets'),
//    '#markup' => drupal_get_form('styleguide_form', $fieldsets),
//    '#group' => t('Forms'),
//  );
//  $items['form-vertical-tabs'] = array(
//    '#title' => t('Forms, vertical tabs'),
//    '#markup' => drupal_get_form('styleguide_form', $tabs),
//    '#group' => t('Forms'),
//  );
//  $items['feed_icon'] = array(
//    '#title' => t('Feed icon'),
//    '#markup' => theme('feed_icon', array('url' => url('rss.xml'), '#title' => t('Syndicate'))),
//    '#group' => t('System')
//  );
//  // This item kills drupal_set_message. The messages are displayed here.
//  $items['maintenance_page'] = array(
//    '#title' => t('Maintenance page'),
//    '#markup' => theme('maintenance_page', array('#markup' => styleguide_paragraph(2))),
//    '#group' => t('System')
//  );
//  $items['system_powered_by'] = array(
//    '#title' => t('System powered by'),
//    '#markup' => theme('system_powered_by'),
//    '#group' => t('System')
//  );
//  $items['confirm_form'] = array(
//    '#title' => t('Confirm form'),
//    '#markup' => drupal_get_form('confirm_form', array('path' => '')),
//    '#group' => t('System')
//  );
  $items['pager'] = array(
    '#title' => t('Pager'),
    '#markup' => styleguide_pager(),
    '#group' => t('User interface')
  );
//  $items['progress_bar'] = array(
//    '#title' => t('Progress bar'),
//    '#markup' => theme('progress_bar', array('percent' => 57, 'message' => styleguide_sentence(2))),
//    '#group' => t('User interface')
//  );
//  // Use alternative item name to avoid conflict with main breadcrumb.
//  $items['styleguide_breadcrumb'] = array(
//    '#title' => t('Breadcrumb'),
//    '#markup' => theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb())),
//    '#group' => t('User interface')
//  );
  $items['link'] = array(
    '#title' => t('Link'),
    '#markup' => \Drupal::l(styleguide_word(2), $current_url),
    '#group' => t('Link')
  );
//  $items['links'] = array(
//    '#title' => t('Links'),
//    '#markup' => theme('links', array('links' => styleguide_links($current_url))),
//    '#group' => t('Link')
//  );
//  $items['mark_new'] = array(
//    '#title' => t('Mark, new'),
//    '#markup' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_NEW)),
//    '#group' => t('Link')
//  );
//  $items['mark_updated'] = array(
//    '#title' => t('Mark, updated'),
//    '#markup' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_UPDATED)),
//    '#group' => t('Link')
//  );
//  $items['more_help_link'] = array(
//    '#title' => t('More help link'),
//    '#markup' => styleguide_paragraph(1) . theme('more_help_link', array('url' => $current_url)),
//    '#group' => t('Link')
//  );
//  $items['more_link'] = array(
//    '#title' => t('More link'),
//    '#markup' => styleguide_paragraph(1) . theme('more_link', array('url' => $current_url, '#title' => styleguide_sentence())),
//    '#group' => t('Link')
//  );
  $items['monospace'] = array(
    '#title' => t('Monospace'),
    '#markup' => styleguide_lorem(1, 0, 'mixed', FALSE),
    '#group' => t('Text'),
    '#tag' => 'code',
  );

  return $items;
}

