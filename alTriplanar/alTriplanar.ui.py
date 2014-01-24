import uigen

ui.shader({
        'name':'alTriplanar',
        'description':'Projects a texture orthographically in three axis.',
        'output':'rgb',
        'maya_name':'alTriplanar',
        'maya_classification':'texture',
        'maya_id':'0x00116413',
        'maya_swatch':True,
        'maya_matte':False,
        'maya_bump':False,
        'soft_name':'ALS_Triplanar',
        'soft_classification':'texture',
        'soft_version':1
})

ui.parameter('space', 'enum', 'world', 'Space', enum_names=[
        "world",
        "object",
        "Pref"
])

ui.parameter('normal', 'enum', 'geometric', 'Normal', enum_names=[
        "geometric",
        "smooth",
        "smooth-NoBump"
])

ui.parameter('tiling', 'enum', 'regular', 'Tiling', enum_names=[
        "regular",
        "cellnoise"
])

ui.parameter('texture', 'string', '', 'Texture', connectible=False)

ui.parameter('blendSoftness', 'float', 0.1, 'Blend Softness', "", 0., 1., 0., 1.)

ui.parameter('cellSoftness', 'float', 0.1, 'Cell Softness', "", 0., 1., 0., 1.)

ui.parameter('scalex', 'float', 1.0, 'X Scale')
ui.parameter('scaley', 'float', 1.0, 'Y Scale')
ui.parameter('scalez', 'float', 1.0, 'Z Scale')

ui.parameter('offsetx', 'float', 0.0, 'X Offset')
ui.parameter('offsety', 'float', 0.0, 'Y Offset')
ui.parameter('offsetz', 'float', 0.0, 'Z Offset')

ui.parameter('rotx', 'float', 0.0, 'X Rotation', "", 0., 360., 0., 360.)
ui.parameter('roty', 'float', 0.0, 'Y Rotation', "", 0., 360., 0., 360.)
ui.parameter('rotz', 'float', 0.0, 'Z Rotation', "", 0., 360., 0., 360.)

ui.parameter('rotjitterx', 'float', 1.0, 'X Rotation Jitter', "", 0., 1., 0., 1.)
ui.parameter('rotjittery', 'float', 1.0, 'Y Rotation Jitter', "", 0., 1., 0., 1.)
ui.parameter('rotjitterz', 'float', 1.0, 'Z Rotation Jitter', "", 0., 1., 0., 1.)
