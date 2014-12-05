<?php

use Drupal\Core\Url;

/**
 * Implements hook_styleguide().
 */
function styleguide_styleguide() {
  $current_url = Url::fromRoute('styleguide.page');
  $items['a'] = array(
    '#key' => 'a',
    '#title' => t('Link'),
    '#content' => styleguide_word(3, 'ucfirst') . ' ' . \Drupal::l(styleguide_word(3), $current_url) . ' ' . styleguide_word(4) . '.',
  );

  $items['b'] = array(
    '#key' => 'b',
    '#theme' => 'styleguide_item',
    '#title' => t('B'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <b>' . styleguide_word(3) . '</b> ' . styleguide_word(4) . '.',
  );

  $items['del'] = array(
    '#key' => 'del',
    '#theme' => 'styleguide_item',
    '#title' => t('Delete'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <del>' . styleguide_word(3) . '</del> ' . styleguide_word(4) . '.',
  );
  $items['em'] = array(
    '#key' => 'em',
    '#theme' => 'styleguide_item',
    '#title' => t('Emphasis'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <em>' . styleguide_word(3) . '</em> ' . styleguide_word(4) . '.',
  );
  $items['figcaption'] = array(
    '#key' => 'figcaption',
    '#theme' => 'styleguide_item',
    '#title' => t('Figcaption'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <figcaption>' . styleguide_word(3) . '</figcaption> ' . styleguide_word(4) . '.',
  );
  $items['figure'] = array(
    '#key' => 'figure',
    '#theme' => 'styleguide_item',
    '#title' => t('Figure'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <figure>' . styleguide_word(3) . '</figure> ' . styleguide_word(4) . '.',
  );
  $items['hr'] = array(
    '#key' => 'hr',
    '#theme' => 'styleguide_item',
    '#title' => t('hr'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <hr>' . styleguide_word(3) . '</hr> ' . styleguide_word(4) . '.',
  );
  $items['i'] = array(
    '#key' => 'i',
    '#theme' => 'styleguide_item',
    '#title' => t('Italic'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <i>' . styleguide_word(3) . '</i> ' . styleguide_word(4) . '.',
  );
  $items['q'] = array(
    '#key' => 'q',
    '#theme' => 'styleguide_item',
    '#title' => t('Quote'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <q>' . styleguide_word(3) . '</q> ' . styleguide_word(4) . '.',
  );
  $items['s'] = array(
    '#key' => 's',
    '#theme' => 'styleguide_item',
    '#title' => t('Strikethrough'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <s>' . styleguide_word(3) . '</s> ' . styleguide_word(4) . '.',
  );
  $items['small'] = array(
    '#key' => 'small',
    '#theme' => 'styleguide_item',
    '#title' => t('Small'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <small>' . styleguide_word(3) . '</small> ' . styleguide_word(4) . '.',
  );
  $items['strong'] = array(
    '#key' => 'strong',
    '#theme' => 'styleguide_item',
    '#title' => t('Strong'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <strong>' . styleguide_word(3) . '</strong> ' . styleguide_word(4) . '.',
  );
  $items['sub'] = array(
    '#key' => 'sub',
    '#theme' => 'styleguide_item',
    '#title' => t('Subscript'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <sub>' . styleguide_word(1) . '</sub> ' . styleguide_word(4) . '.',
  );
  $items['sup'] = array(
    '#key' => 'sup',
    '#theme' => 'styleguide_item',
    '#title' => t('Superscript'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <sup>' . styleguide_word(1) . '</sup> ' . styleguide_word(4) . '.',
  );
  $items['u'] = array(
    '#key' => 'u',
    '#theme' => 'styleguide_item',
    '#title' => t('Underline'),
    '#content' => styleguide_word(3, 'ucfirst') . ' <u>' . styleguide_word(3) . '</u> ' . styleguide_word(4) . '.',
  );

  $item_list = array(
    '#theme' => 'item_list',
    '#items' => styleguide_list(),
  );

  $title = array(
    '#title' => styleguide_word(3, 'ucfirst'),
  );

  $unordered_list_title = array_merge($item_list, $title);

  $ordered_list = array_merge($item_list, array(
    '#list_type' => 'ol',
  ));

  $ordered_list_title = array_merge($ordered_list, $title);
  $unordered_list_long = array_merge($item_list, array('items' => styleguide_list(3, 120)));

  $items['ul'] = array(
    '#key' => 'ul',
    '#title' => t('Unordered list'),
    '#theme' => 'styleguide_item',
    '#content' => drupal_render_root($item_list),
    '#group' => t('Lists'),
  );

  $items['ol'] = array(
    '#key' => 'ol',
    '#title' => t('Ordered list'),
    '#theme' => 'styleguide_item',
    '#content' => drupal_render_root($ordered_list),
    '#group' => t('Lists'),
  );

  $items['ul_title'] = array(
    '#key' => 'ul_title',
    '#title' => t('Unordered list, with title'),
    '#theme' => 'styleguide_item',
    '#content' => drupal_render_root($unordered_list_title),
    '#group' => t('Lists'),
  );

  $items['ol_title'] = array(
    '#key' => 'ol_title',
    '#title' => t('Ordered list, with title'),
    '#theme' => 'styleguide_item',
    '#content' => drupal_render_root($ordered_list_title),
    '#group' => t('Lists'),
  );

  // TODO: not being output
  $items['ul_long'] = array(
    '#key' => 'ul_long',
    '#title' => t('Unordered list with wrapped list items'),
    '#theme' => 'styleguide_item',
    '#content' => drupal_render_root($unordered_list_long),
    '#group' => t('Lists'),
  );

  // TODO: not being output
  $items['ol_long'] = array(
    '#key' => 'ol_long',
// '#theme' => 'styleguide_item',
    '#title' => t('Ordered list with wrapped list items'),
    '#theme' => 'item_list',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'items' => styleguide_list(3, 120),
      'type' => 'ol'
    ),
    '#group' => t('Lists'),
  );

  // TODO: not being output
  $items['ul_links'] = array(
    '#key' => 'ul_links',
    '#theme' => 'styleguide_item',
    '#title' => t('Unordered list with links'),
    '#theme' => 'links',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'links' => styleguide_ul_links(),
    ),
    '#group' => t('Lists'),
  );

  // TODO: not being output
  $items['ul_links_inline'] = array(
    '#key' => 'ul_links_inline',
    '#theme' => 'styleguide_item',
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


  // TODO: rebuild broken theme() and menu_tree() calls.
//  $items['menu_tree'] = array(
//    '#key' => 'menu_tree',
// '#theme' => 'styleguide_item',
//    '#title' => t('Menu tree'),
//    '#content' => menu_tree('management'),
//    '#group' => t('Menus'),
//  );
//  $items['menu_link'] = array(
//    '#key' => 'menu_link',
// '#theme' => 'styleguide_item',
//    '#title' => t('Menu link'),
//    '#content' => theme('menu_link', array('element' => styleguide_menu_item($current_url))),
//    '#group' => t('Menus')
//  );


  // TODO: not being output
  $items['table'] = array(
    '#key' => 'table',
//    '#theme' => 'styleguide_item',
    '#title' => t('Table'),
    '#theme' => 'table',
    'variables' => array(
      'caption' => styleguide_word(3),
      'header' => styleguide_header(),
      'rows' => styleguide_rows()
    ),
    '#group' => t('Tables'),
  );


  $items['text'] = array(
    '#key' => 'text',
    '#theme' => 'styleguide_item',
    '#title' => t('Text block'),
    '#content' => styleguide_paragraph(3),
    '#group' => t('Text'),
  );
  $items['blockquote'] = array(
    '#key' => 'blockquote',
    '#theme' => 'styleguide_item',
    '#title' => t('Blockquote'),
    '#content' => styleguide_paragraph(1) . '<blockquote>' . styleguide_paragraph(1) . '</blockquote>' . styleguide_paragraph(1),
    '#group' => t('Text'),
  );

  // TODO: not being output
  $items['image-horizontal'] = array(
    '#key' => 'image-horizontal',
    '#theme' => 'styleguide_item',
    '#title' => t('Image, horizontal'),
    '#theme' => 'image',
    'variables' => array(
      'path' => styleguide_image('horizontal'),
      'alt' => t('My image'),
      '#title' => t('My image')
    ),
    '#group' => t('Media'),
  );

  // TODO: not being output
  $items['image-vertical'] = array(
    '#key' => 'image-vertical',
    '#theme' => 'styleguide_item',
    '#title' => t('Image, vertical'),
    '#theme' => 'image',
    'variables' => array(
      '#theme' => 'styleguide_item',
      'path' => styleguide_image('vertical'),
      'alt' => t('My image'),
      '#title' => t('My image')
    ),
    '#group' => t('Media'),
  );


  //TODO: broken...
//  $items['image-inset-horizontal'] = array(
//    '#key' => 'image-inset-horizontal',
//  '#theme' => 'styleguide_item',
//    '#title' => t('Image, horizontal, within text'),
//    '#content' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('horizontal'), 'alt' => t('My image'), '#title' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );
//  $items['image-inset-vertical'] = array(
//    '#key' => 'image-inset-vertical',
//    '#title' => t('Image, vertical, within text'),
//    '#content' => styleguide_paragraph(1) . theme('image', array('path' => styleguide_image('vertical'), 'alt' => t('My image'), '#title' => t('My image'))) . styleguide_paragraph(2),
//    '#group' => t('Media'),
//  );


  $content = '';
  for ($i = 1; $i <= 6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>";
  }
  $items['headings'] = array(
    '#key' => 'headings',
    '#theme' => 'styleguide_item',
    '#title' => "Headings",
    '#content' => $content,
    '#group' => t('Text'),
  );
  $content = '';
  for ($i = 1; $i <= 6; $i++) {
    $content .= "<h$i>" . "h$i: " . implode(' ', styleguide_list()) . "</h$i>" . styleguide_paragraph(1);
  }
  $items['headings_text'] = array(
    '#key' => 'headings_text',
    '#theme' => 'styleguide_item',
    '#title' => "Headings with text",
    '#content' => $content,
    '#group' => t('Text'),
  );
  $messages = array('status', 'warning', 'error');
  foreach ($messages as $message) {
    $key = $message . '-message';
    $items[$key] = array(
      '#key' => $key,
      '#theme' => 'styleguide_item',
      '#title' => ucwords($message) . ' message',
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
  foreach (element_children($elements) as $title) {
    if (!isset($elements[$title]['#type']) || $elements[$title]['#type'] == 'item') {
      $content[] = $title;
    }
    elseif ($elements[$title]['#type'] == 'fieldset') {
      $fieldsets[] = $title;
    }
    elseif ($title == 'vertical_tabs') {
      $tabs[] = $title;
    }
    // We skip these.
    elseif (in_array($elements[$title]['#type'], array(
      'button',
      'submit',
      'image_button'
    ))
    ) {
      $buttons[] = $title;
    }
    else {
      $basic[] = $title;
    }
  }


  // TODO: broken
//  $items['form'] = array(
//    '#key' => 'form',
// '#theme' => 'styleguide_item',
//    '#title' => t('Forms, basic'),
//    '#content' => drupal_get_form('styleguide_form', $basic),
//    '#group' => t('Forms'),
//  );
//  $items['form-submit'] = array(
//    '#key' => 'form-submit',
// '#theme' => 'styleguide_item',
//    '#title' => t('Forms, submit'),
//    '#content' => drupal_get_form('styleguide_form', array('submit')),
//    '#group' => t('Forms'),
//  );
//  $items['form-button'] = array(
//    '#key' => 'form-button',
// '#theme' => 'styleguide_item',
//    '#title' => t('Forms, button'),
//    '#content' => drupal_get_form('styleguide_form', array('button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-image-button'] = array(
//    '#key' => 'form-image-button',
// '#theme' => 'styleguide_item',//    '#title' => t('Forms, image button'),
//    '#content' => drupal_get_form('styleguide_form', array('image_button')),
//    '#group' => t('Forms'),
//  );
//  $items['form-content'] = array(
//    '#key' => 'form-content',
// '#theme' => 'styleguide_item',//    '#title' => t('Forms, content'),
//    '#content' => drupal_get_form('styleguide_form', $content),
//    '#group' => t('Forms'),
//  );
//  $items['form-fieldsets'] = array(
//    '#key' => 'form-fieldsets',
// '#theme' => 'styleguide_item',//    '#title' => t('Forms, fieldsets'),
//    '#content' => drupal_get_form('styleguide_form', $fieldsets),
//    '#group' => t('Forms'),
//  );
//  $items['form-vertical-tabs'] = array(
//    '#key' => 'form-vertical-tabs',
// '#theme' => 'styleguide_item',//    '#title' => t('Forms, vertical tabs'),
//    '#content' => drupal_get_form('styleguide_form', $tabs),
//    '#group' => t('Forms'),
//  );
//  $items['feed_icon'] = array(
//    '#key' => 'feed_icon',
// '#theme' => 'styleguide_item',//    '#title' => t('Feed icon'),
//    '#content' => theme('feed_icon', array('url' => url('rss.xml'), '#title' => t('Syndicate'))),
//    '#group' => t('System')
//  );
//  // This item kills drupal_set_message. The messages are displayed here.
//  $items['maintenance_page'] = array(
//    '#key' => 'maintenance_page',
// '#theme' => 'styleguide_item',//    '#title' => t('Maintenance page'),
//    '#content' => theme('maintenance_page', array('#content' => styleguide_paragraph(2))),
//    '#group' => t('System')
//  );
//  $items['system_powered_by'] = array(
//    '#key' => 'system_powered_by',
// '#theme' => 'styleguide_item',//    '#title' => t('System powered by'),
//    '#content' => theme('system_powered_by'),
//    '#group' => t('System')
//  );
//  $items['confirm_form'] = array(
//    '#key' => 'confirm_form',
// '#theme' => 'styleguide_item',//    '#title' => t('Confirm form'),
//    '#content' => drupal_get_form('confirm_form', array('path' => '')),
//    '#group' => t('System')
//  );


  // TODO: not being output
  $items['pager'] = array(
    '#key' => 'pager',
    '#theme' => 'styleguide_item',
    '#title' => t('Pager'),
    '#content' => styleguide_pager(),
    '#group' => t('User interface')
  );


  // TODO: broken
//  $items['progress_bar'] = array(
//    '#key' => 'progress_bar',
// '#theme' => 'styleguide_item',//    '#title' => t('Progress bar'),
//    '#content' => theme('progress_bar', array('percent' => 57, 'message' => styleguide_sentence(2))),
//    '#group' => t('User interface')
//  );
//  // Use alternative item name to avoid conflict with main breadcrumb.
//  $items['styleguide_breadcrumb'] = array(
//    '#key' => 'styleguide_breadcrumb',
// '#theme' => 'styleguide_item',//    '#title' => t('Breadcrumb'),
//    '#content' => theme('breadcrumb', array('breadcrumb' => drupal_get_breadcrumb())),
//    '#group' => t('User interface')
//  );


  $items['link'] = array(
    '#key' => 'link',
    '#theme' => 'styleguide_item',
    '#title' => t('Link'),
    '#content' => \Drupal::l(styleguide_word(2), $current_url),
    '#group' => t('Link')
  );


  // TODO: broken
//  $items['links'] = array(
//    '#key' => 'links',
//    '#theme' => 'styleguide_item', //    '#title' => t('Links'),
//    '#content' => theme('links', array('links' => styleguide_links($current_url))),
//    '#group' => t('Link')
//  );
//  $items['mark_new'] = array(
//    '#key' => 'mark_new',
//    '#theme' => 'styleguide_item', //    '#title' => t('Mark, new'),
//    '#content' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_NEW)),
//    '#group' => t('Link')
//  );
//  $items['mark_updated'] = array(
//    '#key' => 'mark_updated',
//    '#theme' => 'styleguide_item', //    '#title' => t('Mark, updated'),
//    '#content' => \Drupal::l(styleguide_sentence(), $current_url) . theme('mark', array('type' => MARK_UPDATED)),
//    '#group' => t('Link')
//  );
//  $items['more_help_link'] = array(
//    '#key' => 'more_help_link',
//    '#theme' => 'styleguide_item', //    '#title' => t('More help link'),
//    '#content' => styleguide_paragraph(1) . theme('more_help_link', array('url' => $current_url)),
//    '#group' => t('Link')
//  );
//  $items['more_link'] = array(
//    '#key' => 'more_link',
//    '#theme' => 'styleguide_item', //    '#title' => t('More link'),
//    '#content' => styleguide_paragraph(1) . theme('more_link', array(
//        'url' => $current_url,
//        '#title' => styleguide_sentence()
//      )),
//    '#group' => t('Link')
//  );


  $items['monospace'] = array(
    '#key' => 'monospace',
    '#theme' => 'styleguide_item',
    '#title' => t('Monospace'),
    '#content' => styleguide_lorem(1, 0, 'mixed', FALSE),
    '#group' => t('Text'),
    '#tag' => 'code',
  );

  return $items;
}

