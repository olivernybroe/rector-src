<?php

namespace Rector\Tests\Arguments\Rector\ClassMethod\ReplaceArgumentDefaultValueRector\Fixture;

use Symfony\Component\Yaml\Yaml;

function argumentDefaultValue3()
{
    Yaml::dump(array('foo' => new A(), 'bar' => 1), 0, 0, true);

    Yaml::dump(array('foo' => new A(), 'bar' => 1), 0, 0, false, true);
}

?>
-----
<?php

namespace Rector\Tests\Arguments\Rector\ClassMethod\ReplaceArgumentDefaultValueRector\Fixture;

use Symfony\Component\Yaml\Yaml;

function argumentDefaultValue3()
{
    Yaml::dump(array('foo' => new A(), 'bar' => 1), 0, 0, \Symfony\Component\Yaml\Yaml::DUMP_EXCEPTION_ON_INVALID_TYPE);

    Yaml::dump(array('foo' => new A(), 'bar' => 1), 0, 0, \Symfony\Component\Yaml\Yaml::DUMP_OBJECT);
}

?>
