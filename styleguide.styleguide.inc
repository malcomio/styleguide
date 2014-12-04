<?php

use Drupal\Core\Url;

/**
 * Implements hook_styleguide().
 */
function styleguide_styleguide() {
  $current_url = Url::fromRoute('styleguide.page');
//  $items['a'] = array(
//    '#key' => t('Link'),
//    '#content' => styleguide_word(3, 'ucfirst') . ' ' . l(styleguide_word(3), 'node') . ' ' . styleguide_word(4) . '.',
//  );


  $items['b'] = array(
    '#theme' => 'styleguide_item',
    '#theme' => 'styleguide_item',
    '#key' => t('B'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <b>' . styleguide_word(3) . '</b> ' . styleguide_word(4) . '.',
  );

  $items['del'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Delete'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <del>' . styleguide_word(3) . '</del> ' . styleguide_word(4) . '.',
  );
  $items['em'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Emphasis'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <em>' . styleguide_word(3) . '</em> ' . styleguide_word(4) . '.',
  );
  $items['figcaption'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Figcaption'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <figcaption>' . styleguide_word(3) . '</figcaption> ' . styleguide_word(4) . '.',
  );
  $items['figure'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Figure'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <figure>' . styleguide_word(3) . '</figure> ' . styleguide_word(4) . '.',
  );
  $items['hr'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('hr'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <hr>' . styleguide_word(3) . '</hr> ' . styleguide_word(4) . '.',
  );
  $items['i'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Italic'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <i>' . styleguide_word(3) . '</i> ' . styleguide_word(4) . '.',
  );
  $items['q'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Quote'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <q>' . styleguide_word(3) . '</q> ' . styleguide_word(4) . '.',
  );
  $items['s'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Strikethrough'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <s>' . styleguide_word(3) . '</s> ' . styleguide_word(4) . '.',
  );
  $items['small'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Small'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <small>' . styleguide_word(3) . '</small> ' . styleguide_word(4) . '.',
  );
  $items['strong'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Strong'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <strong>' . styleguide_word(3) . '</strong> ' . styleguide_word(4) . '.',
  );
  $items['sub'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Subscript'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <sub>' . styleguide_word(1) . '</sub> ' . styleguide_word(4) . '.',
  );
  $items['sup'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Superscript'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <sup>' . styleguide_word(1) . '</sup> ' . styleguide_word(4) . '.',
  );
  $items['u'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Underline'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <u>' . styleguide_word(3) . '</u> ' . styleguide_word(4) . '.',
  );
  $items['ul'] = array(
    '#key' => t('Unordered list'),
    '#theme' => 'item_list',
    'variables' => array(
      'items' => styleguide_list(),
      'type' => 'ul'
    ),
    '#group' => t('Lists'),
  );
  $items['ol'] = array(

    '#key' => t('Ordered list'),
    '#theme' => 'item_list',
    'variables' => array(
      'items' => styleguide_list(),
      'type' => 'ol'
    ),
    '#group' => t('Lists'),
  );
  $items['ul_title'] = array(
    '#key' => t('Unordered list, with title'),
    '#theme' => 'item_list',
    'variables' => array(
      'items' => styleguide_list(),
      'type' => 'ul',
      '#key' => styleguide_word(3, 'ucfirst')
    ),
    '#group' => t('Lists'),
  );
  $items['ol_title'] = array(

    '#key' => t('Ordered list, with title'),
    '#theme' => 'item_list',
    'variables' => array(
      'items' => styleguide_list(),
      'type' => 'ol',
      '#key' => styleguide_word(3, 'ucfirst')
    ),
    '#group' => t('Lists'),
  );
  $items['ul_long'] = array(
    '#key' => t('Unordered list with wrapped list items'),
    '#theme' => 'item_list',
    'variables' => array(
      'items' => styleguide_list(3, 120),
      'type' => 'ul'
    ),
    '#group' => t('Lists'),
  );
  $items['ol_long'] = array(
// '#theme' => 'styleguide_item',
    '#key' => t('Ordered list with wrapped list items'),
    '#theme' => 'item_list',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'items' => styleguide_list(3, 120),
      'type' => 'ol'
    ),
    '#group' => t('Lists'),
  );
  $items['ul_links'] = array(
// '  #theme' => 'styleguide_item',
    '#key' => t('Unordered list with links'),
    '#theme' => 'links',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'links' => styleguide_ul_links(),
    ),
    '#group' => t('Lists'),
  );
  $items['ul_links_inline'] = array(
// '#theme' => 'styleguide_item',
    '#key' => t('Unordered inline list with links'),
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


  // TODO: rebuild broken theme() and menu_tree() calls.
//  $items['menu_tree'] = array(
// '#theme' => 'styleguide_item',
//    '#key' => t('Menu tree'),
//    '#content' => menu_tree('management'),
//    '#group' => t('Menus'),
//  );
//  $items['menu_link'] = array(
// '#theme' => 'styleguide_item',
//    '#key' => t('Menu link'),
//    '#content' => theme('menu_link', array('element' => styleguide_menu_item($current_url))),
//    '#group' => t('Menus')
//  );


  $items['table'] = array(
// '#theme' => 'styleguide_item',
    '#key' => t('Table'),
    '#theme' => 'table',
    'variables' => array(
      'caption' => styleguide_word(3),
      'header' => styleguide_header(),
      'rows' => styleguide_rows()
    ),
    '#group' => t('Tables'),
  );
  $items['text'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Text block'),
    '#content' => styleguide_paragraph(3),
    '#group' => t('Text'),
  );
  $items['blockquote'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Blockquote'),
    '#content' => styleguide_paragraph(1) . '<blockquote>' . styleguide_paragraph(1) . '</blockquote>' . styleguide_paragraph(1),
    '#group' => t('Text'),
  );
  $items['image-horizontal'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Image, horizontal'),
    '#theme' => 'image',
    'variables' => array(
      'path' => styleguide_image('horizontal'),
      'alt' => t('My image'),
      '#key' => t('My image')
    ),
    '#group' => t('Media'),
  );
  $items['image-vertical'] = array(
    '#theme' => 'styleguide_item',
    '#key' => t('Image, vertical'),
    '#theme' => 'image',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'path' => styleguide_image('vertical'),
      'alt' => t('My image'),
      '#key' => t('My image')
    ),
    '#group' => t('Media'),
  );


  //TODO: broken...
//  $items['image-inset-horizontal'] = array(
//  '#theme' => 'styleguide_item',
//    '#key' => t('Image, horizontal, within text'),
//    '#content' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('horizontal'), 'alt' => t('My image'), '#key' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );
//  $items['image-inset-vertical'] = array(
//    '#key' => t('Image, vertical, within text'),
//    '#content' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('vertical'), 'alt' => t('My image'), '#key' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );



  $content = '';
  for ($i = 1; $i <= 6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>";
  }
  $items['headings'] = array(
    '#theme' => 'styleguide_item',
    '#key' => "Headings",
    '#content' => $content,
    '#group' => t('Text'),
  );
  $content = '';
  for ($i = 1; $i <= 6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>" . styleguide_paragraph(1);
  }
  $items['headings_text'] = array(
    '#theme' => 'styleguide_item',
    '#key' => "Headings with text",
    '#content' => $content,
    '#group' => t('Text'),
  );
  $messages = array('status', 'warning', 'error');
  foreach ($messages as $message) {
    $items[$message . '-message'] = array(
      '#theme' => 'styleguide_item',
      '#key' => ucwords($message) . ' message',
      '#content' => '<div class="messages ' . $message . '"><h2 class="element-invisible">Status message</h2>' . styleguide_sentence() . '</div>',
    );
  }
  // Form elements.
  $fake = $form_state = array();
  $elements = styleguide_form($fake, $form_state);
  $basic = array();
  $fieldsets = array();
  $tabs = array();
  $content = array();
  foreach (element_children($elements) as $key) {
    if (!isset($elements[$key]['#type']) || $elements[$key]['#type'] == 'item') {
      $content[] = $key;
    }
    elseif ($elements[$key]['#type'] == 'fieldset') {
      $fieldsets[] = $key;
    }
    elseif ($key == 'vertical_tabs') {
      $tabs[] = $key;
    }
    // We skip these.
    elseif (in_array($elements[$key]['#type'], array(
      'button',
      'submit',
      'image_button'
    ))
    ) {
      $buttons[] = $key;
    }
    else {
      $basic[] = $key;
    }
  }



  // TODO: broken
//  $items['form'] = array(
// '#theme' => 'styleguide_item',
//    '#key' => t('Forms, basic'),
//    '#content' => drupal_get_form('styleguide_form', $basic),
//    '#group' => t('Forms'),
//  );
//  $items['form-submit'] = array(
// '#theme' => 'styleguide_item',
//    '#key' => t('Forms, submit'),
//    '#content' => drupal_get_form('styleguide_form', array('submit')),
//    '#group' => t('Forms'),
//  );
//  $items['form-button'] = array(
// '#theme' => 'styleguide_item',
//    '#key' => t('Forms, button'),
//    '#content' => drupal_get_form('styleguide_form', array('button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-image-button'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Forms, image button'),
//    '#content' => drupal_get_form('styleguide_form', array('image_button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-content'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Forms, content'),
//    '#content' => drupal_get_form('styleguide_form', $content),
//    '#group' => t('Forms'),
//  );
//  $items['form-fieldsets'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Forms, fieldsets'),
//    '#content' => drupal_get_form('styleguide_form', $fieldsets),
//    '#group' => t('Forms'),
//  );
//  $items['form-vertical-tabs'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Forms, vertical tabs'),
//    '#content' => drupal_get_form('styleguide_form', $tabs),
//    '#group' => t('Forms'),
//  );
//  $items['feed_icon'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Feed icon'),
//    '#content' => theme('feed_icon', array('url' => url('rss.xml'), '#key' => t('Syndicate'))),
//    '#group' => t('System')
//  );
//  // This item kills drupal_set_message. The messages are displayed here.
//  $items['maintenance_page'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Maintenance page'),
//    '#content' => theme('maintenance_page', array('#content' => styleguide_paragraph(2))),
//    '#group' => t('System')
//  );
//  $items['system_powered_by'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('System powered by'),
//    '#content' => theme('system_powered_by'),
//    '#group' => t('System')
//  );
//  $items['confirm_form'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Confirm form'),
//    '#content' => drupal_get_form('confirm_form', array('path' => '')),
//    '#group' => t('System')
//  );





  $items['pager'] = array(
    '#theme' => 'styleguide_item', //    '#key' => t('Pager'),
    '#content' => styleguide_pager(),
    '#group' => t('User interface')
  );



  // TODO: broken
//  $items['progress_bar'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Progress bar'),
//    '#content' => theme('progress_bar', array('percent' => 57, 'message' => styleguide_sentence(2))),
//    '#group' => t('User interface')
//  );
//  // Use alternative item name to avoid conflict with main breadcrumb.
//  $items['styleguide_breadcrumb'] = array(
// '#theme' => 'styleguide_item',//    '#key' => t('Breadcrumb'),
//    '#content' => theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb())),
//    '#group' => t('User interface')
//  );





  $items['link'] = array(
    '#theme' => 'styleguide_item', //    '#key' => t('Link'),
    '#content' => \Drupal::l(styleguide_word(2), $current_url),
    '#group' => t('Link')
  );




  // TODO: broken
//  $items['links'] = array(
//    '#theme' => 'styleguide_item', //    '#key' => t('Links'),
//    '#content' => theme('links', array('links' => styleguide_links($current_url))),
//    '#group' => t('Link')
//  );
//  $items['mark_new'] = array(
//    '#theme' => 'styleguide_item', //    '#key' => t('Mark, new'),
//    '#content' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_NEW)),
//    '#group' => t('Link')
//  );
//  $items['mark_updated'] = array(
//    '#theme' => 'styleguide_item', //    '#key' => t('Mark, updated'),
//    '#content' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_UPDATED)),
//    '#group' => t('Link')
//  );
//  $items['more_help_link'] = array(
//    '#theme' => 'styleguide_item', //    '#key' => t('More help link'),
//    '#content' => styleguide_paragraph(1) . theme('more_help_link', array('url' => $current_url)),
//    '#group' => t('Link')
//  );
//  $items['more_link'] = array(
//    '#theme' => 'styleguide_item', //    '#key' => t('More link'),
//    '#content' => styleguide_paragraph(1) . theme('more_link', array(
//        'url' => $current_url,
//        '#key' => styleguide_sentence()
//      )),
//    '#group' => t('Link')
//  );






  $items['monospace'] = array(
    '#theme' => 'styleguide_item', //    '#key' => t('Monospace'),
    '#content' => styleguide_lorem(1, 0, 'mixed', FALSE),
    '#group' => t('Text'),
    '#tag' => 'code',
  );

  return $items;
}

