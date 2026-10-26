#!/usr/bin/env python3
"""derive_fam8.py - 从 fam7 全链显式替换表派生 fam8 脚本（教训 al：长串在前）
产出: fam8_prep.py / fam8_assemble.py / fam8_callsites.py / fam8_defer.py / fam8_iter.sh
"""
from pathlib import Path

HERE = Path('/home/z/my-project/scripts')

# 显式替换表 —— 顺序即执行序，长串在前防互吞（教训 al）
ORDER = [
    ('pilot_039_fam7', 'pilot_040_fam8'),
    ('pilot039', 'pilot040'),
    ('p039', 'p040'),
    ('FAM7_DEFER', 'FAM8_DEFER'),
    ('fam7', 'fam8'),
]

FILES = ['fam7_prep.py', 'fam7_assemble.py', 'fam7_callsites.py',
         'fam7_defer.py', 'fam7_iter.sh']

# fam8 目标类（全新 8 族，避开 fam4-7 defer 池回声）
CLASSES_NEW = ("CLASSES = ['WeaponCompartment', 'CraftInstance', 'Body', "
               "'CraftBlueprintArmor',\n           'CraftBlueprint', "
               "'ItineraryNodeUI', 'HUDItineraryNodeDragger', 'ShipGroupUI']")
CLASSES_OLD = ("CLASSES = ['SpacecraftComponent', 'TacticalManager', 'Fleet',\n"
               "           'CelestialObject']")

COSMETIC = [
    # prep docstring
    ('batch-friendly families (SpacecraftTargeting/ModuleCompartment/\nWorldObject/CameraManager/UIWidget)',
     'batch-friendly families (WeaponCompartment/CraftInstance/Body/\nCraftBlueprintArmor/CraftBlueprint/ItineraryNodeUI/HUDItineraryNodeDragger/ShipGroupUI)'),
    # assemble docstring first line
    ('fam4_assemble.py — 四类扩族 (TacticalManager/Body/SpacecraftComponent/CraftInstance)',
     'fam8_assemble.py — 八新族 (WeaponCompartment/CraftInstance/Body/CraftBlueprint*)'),
    # assemble draft header comment
    ('SpacecraftTargeting/ModuleCompartment/WorldObject/CameraManager/UIWidget (127 methods)',
     'WeaponCompartment/CraftInstance/Body/CraftBlueprintArmor/CraftBlueprint/ItineraryNodeUI/HUDItineraryNodeDragger/ShipGroupUI (262 methods)'),
]

for src_name in FILES:
    src = HERE / src_name
    dst_name = src_name.replace('fam7', 'fam8')
    text = src.read_text(encoding='utf-8')
    for old, new in ORDER:
        text = text.replace(old, new)
    for old, new in COSMETIC:
        text = text.replace(old, new)
    if src_name == 'fam7_prep.py':
        assert CLASSES_OLD in text, 'CLASSES block not found in prep!'
        text = text.replace(CLASSES_OLD, CLASSES_NEW)
        text = text.replace('fam7_prep.py', 'fam8_prep.py')
    dst = HERE / dst_name
    dst.write_text(text, encoding='utf-8')
    print(f'{src_name} -> {dst_name} ({len(text)} chars)')

# 自检：派生稿不得残留 fam7/pilot039/p039 标识
import re
for src_name in FILES:
    dst = HERE / src_name.replace('fam7', 'fam8')
    t = dst.read_text()
    residue = re.findall(r'pilot_039_fam7|pilot039|p039|FAM7_DEFER|fam7', t)
    print(f'{dst.name}: residue={residue if residue else "CLEAN"}')
