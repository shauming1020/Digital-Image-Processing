import torch
import torch.nn.functional as F
from dice_loss import dice_coeff


def eval_net(net, loader, device, n_val):
    """Evaluation without the densecrf with the dice coefficient"""
    net.eval()
    tot = 0

    for batch in loader:
        imgs = batch['image']
        true_masks = batch['mask']

        imgs = imgs.to(device=device, dtype=torch.float32)
        true_masks = true_masks.to(device=device, dtype=torch.float32)

        mask_pred = net(imgs)

        for true_mask, pred in zip(true_masks, mask_pred):
            pred = (pred > 0.5).float()
            if net.n_classes > 1:
                tot += F.cross_entropy(pred.unsqueeze(dim=0), true_mask.unsqueeze(dim=0)).item()
            else:
                tot += dice_coeff(pred, true_mask.squeeze(dim=1)).item()

    return tot / n_val
