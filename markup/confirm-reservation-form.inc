<div class="order-confirm-details">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h3 class="panel-title"><?php echo $title; ?></h3>
        </div>
        <div class="panel-body">
            <p><?php echo $summary; ?></p>

            <form action="./" name="reservation-confirm-form" method="post" role="form" class="reservation-confirm-form">
                <div class="confirm-info">
                    <?php if (isset($order['fields'])): ?>
                        <div class="table-responsive">
                            <table class="table">
                                <?php foreach ($order['fields'] as $field):?>
                                    <tr>
                                        <th><?php echo $field['label']?></th>
                                        <td><?php if ($field['value'] != '') echo $field['value']; else echo "-";?></td>
                                    </tr>
                                <?php endforeach; ?>
                            </table>
                        </div>
                    <?php endif;?>
                </div>
                <div class="form-group no-bottom-margin">
                    <div class="col-sm-12">
                        <input type="submit" name="submit" class="btn btn-primary" value="Confirm"/>
                        <a href="../" class="btn btn-default">
                            <?php echo __('Edit order')?>
                        </a>
                    </div>
                </div>
            </form>
        </div>
    </div>
</div>
