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

![PXL_20220404_063515261](https://user-images.githubusercontent.com/92862731/161487061-1debbf88-2a73-4b47-92cc-e741b178ab84.jpg)
![PXL_20220404_063136917](https://user-images.githubusercontent.com/92862731/161487043-b54da95d-99dd-40ec-a5e6-72c8af4bdfef.jpg)
