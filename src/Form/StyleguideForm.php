<?php

/**
 * @file
 * Contains \Drupal\styleguide\Form\StyleGuideForm.
 */

namespace Drupal\styleguide\Form;

use Drupal\Core\Form\FormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Render\ElementInfoManager;
use Drupal\Core\Url;

/**
 * Provides an image dialog for text editors.
 */
class StyleGuideForm extends FormBase {


  /**
   * @var \Drupal\Core\Render\ElementInfoManager
   */
  protected $elementInfoManager;

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'styleguide_form';
  }

  /**
   * {@inheritdoc}
   *
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form = $form + $this->build();
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
  }


  public function build() {
    $output = array();
    $elementInfoManager = \Drupal::service('element_info');
    $definitions = $elementInfoManager->getDefinitions();
    $allowed_elements = $this->allowedElements();
    $allowed_element_keys = array_keys($allowed_elements);
    $index = 0;
    foreach ($definitions as $key => $definition) {
      if (in_array($key, $allowed_element_keys)) {
        $element = $allowed_elements[$key] + $elementInfoManager->getInfo($key) + array('#weight' => $index);
        $output[$key]['item'] = array(
          '#type' => 'fieldset',
          '#tree' => TRUE,
          '#title' => $this->t($element['#title']),
          '#collapsible' => TRUE,
          '#collapsed' => FALSE,
        );
        $output[$key]['item']['element'] = $element;
        $index++;
      }
    }
    return $output;
  }

  protected function allowedElements() {
    return array(
      'submit' => array(
        '#value' => $this->t('Submit'),
      ),
      'radio' => array(
        '#title' => $this->t('Radio'),
        '#value' => $this->t('Radio'),
      ),
      'radios' => array(
        '#options' => array(
          '1' => $this->t('Option 1'),
          '2' => $this->t('Option 2'),
          '3' => $this->t('Option 3'),
        ),
        '#tree' => TRUE,
      ),
      'password' => array(
        '#title' => $this->t('Password'),
        '#default_value' => 'test',
      ),
      'password_confirm' => array(
        '#title' => $this->t('Password confirm'),
      ),
      'text_format' => array(
        '#title' => $this->t('Text format'),
        '#format' => 'full_html',
        '#default_value' => $this->t('this is working'),
      ),
      'textarea' => array(
        '#title' => $this->t('Text area'),
        '#default_value' => $this->t('this is working'),
        '#format' => 'full_html',
      ),
      'managed_file' => array(
        '#title' => $this->t('Managed file'),
        '#upload_location' => 'public://',
        'value' => '',
      ),
      'toolbar' => array(
        'rows' => array(
          // Button groups.
          array(
            array(
              'name' => $this->t('Formatting'),
              'items' => array('Bold', 'Italic'),
            ),
            array(
              'name' => $this->t('Links'),
              'items' => array('DrupalLink', 'DrupalUnlink'),
            ),
            array(
              'name' => $this->t('Lists'),
              'items' => array('BulletedList', 'NumberedList'),
            ),
            array(
              'name' => $this->t('Media'),
              'items' => array('Blockquote', 'DrupalImage'),
            ),
            array(
              'name' => $this->t('Tools'),
              'items' => array('Source'),
            ),
          ),
        ),
        '#weight' => 0,
      ),
      'button' => array(
        '#value' => $this->t('Button'),
        '#title' => $this->t('Button'),
      ),
      'checkbox' => array(
        '#value' => 1,
        '#title' => $this->t('Checkbox'),
      ),
      'checkboxes' => array(
        '#options' => array_combine(array(
          t('SAT'),
          $this->t('ACT'),
        ), array(
          t('SAT'),
          $this->t('ACT'),
        )),
      ),
      'color' => array(
        '#title' => 'color',
        '#default_value' => '#ff0000',
      ),
      'image_button' => array(
        '#value' => $this->t('Image button'),
        '#src' => 'core/misc/druplicon.png',
        '#name' => 'image_button',
      ),
      'date' => array(
        '#title' => $this->t('Date'),
      ),
      'operations' => array(
        '#title' => 'Operations',
        '#links' => array(
          'operation1' => array(
            'title' => $this->t('Operation 1'),
            'url' => Url::fromRoute('<front>'),
          ),
          'operation2' => array(
            'title' => $this->t('Operation 2'),
            'url' => Url::fromRoute('<front>'),
          ),
          'operation3' => array(
            'title' => $this->t('Operation 3'),
            'url' => Url::fromRoute('<front>'),
          ),
        ),
      ),
      'dropbutton' => array(
        '#title' => 'Drop button',
        '#links' => array(
          'dropbutton1' => array(
            'title' => $this->t('Drop button 1'),
            'url' => Url::fromRoute('<front>'),
          ),
          'dropbutton2' => array(
            'title' => $this->t('Drop button 2'),
            'url' => Url::fromRoute('<front>'),
          ),
          'dropbutton3' => array(
            'title' => $this->t('Drop button 3'),
            'url' => Url::fromRoute('<front>'),
          ),
        ),
      ),
      'fieldset' => array(
        '#title' => $this->t('Fieldset'),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
        'fieldset_textfield' => array(
          '#title' => 'Textfield',
          '#type' => 'textfield',
        ),
      ),
      'language_select' => array(
        '#title' => 'Language select',
        '#languages' => 3,
      ),
      'machine_name' => array(
        '#title' => 'Machine name',
      ),
      'path' => array(
        '#title' => 'Path',
      ),
      'select' => array(
        '#title' => 'Select',
        '#options' => array(
          'option1' => $this->t('Option 1'),
          'option2' => $this->t('Option 2'),
          'option3' => $this->t('Option 3'),
        ),
      ),
      'range' => array(
        '#title' => 'Range',
        '#min' => 10,
        '#max' => 20,
        '#step' => 2,
        '#default_value' => 18,
        '#description' => 'Range description',
      ),
      'weight' => array(
        '#title' => $this->t('Weight'),
        '#delta' => 10,
      ),
    );
  }
}
