<?php

/**
 * @file
 * Contains \Drupal\Core\Render\Element\StyleguideItem.
 */

namespace Drupal\styleguide\StyleguideItem;

/**
 * Provides a render element for displaying a styleguide item.
 *
 * @RenderElement("styleguide_item")
 */
class StyleguideItem extends RenderElement {

  /**
   * {@inheritdoc}
   */
  public function getInfo() {
    return array(
      '#theme' => 'styleguide_item',
    );
  }

}
