<?php
/**
 * @file
 * Contains \Drupal\styleguide\Controller\StyleguideController.
 */

namespace Drupal\styleguide\Controller;

use Drupal\Core\Controller\ControllerBase;

/**
 * Controller routines for styleguide routes.
 */
class StyleguideController extends ControllerBase {


  public function styleguidePage() {
    $build = array(
      '#type' => 'markup',
      '#markup' => t('Hello World!'),
    );
    return $build;
  }
}
