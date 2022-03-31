# QMK

## dactyl

- QMKの初期設定を済ませる
- QMK Toolbox.appのAuto-Flashを設定する

```bash
cd /Volumes/workspace/qmk/qmk_firmware && \
cp /Volumes/workspace/akira-toriyama/qmk/dactyl/keymap.c /Volumes/workspace/qmk/qmk_firmware/keyboards/handwired/dactyl_manuform/6x6_kinesis/keymaps/default/. && \
qmk compile -kb handwired/dactyl_manuform/6x6_kinesis -km default && \
open /Volumes/workspace/qmk/qmk_firmware/handwired_dactyl_manuform_6x6_kinesis_default.hex
```
