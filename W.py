import sys
sys.path.append('cmake-build-debug')
import libCardinalExtra

class CardinalExtra:
    def __init__(self) -> None:
        self.DragonBones = 0
        self.Spine = 1
        self.Live2D = 3

        self.search_path = str()
        self.mode = int()

        self.dragonbones_info = {
            "DragonBonesData":"",
            "TextureAtlasData":"",
            "armatureName":""
        }
        self.Scale = 1.0

    def setSearchPath(self,search_path):
        self.search_path = search_path
        libCardinalExtra.setSearchPath(self.search_path)

    def setDragonbones(self,DragonBonesData,TextureAtlasData,armatureName):
        self.mode = self.DragonBones
        self.dragonbones_info = {
            "DragonBonesData":DragonBonesData,
            "TextureAtlasData":TextureAtlasData,
            "armatureName":armatureName
        }
       
        libCardinalExtra.setMode(self.mode)
        libCardinalExtra.setDragonBones(DragonBonesData,TextureAtlasData,armatureName)

    def setScale(self,s):
        self.Scale = s
        libCardinalExtra.setScale(s)

    def init(self):
        libCardinalExtra.Init()


a = CardinalExtra()

a.setSearchPath("/home/henryzeng/Pictures/build_char_2015_dusk")
a.setDragonbones("build_char_2015_dusk_ske.json","build_char_2015_dusk_tex.json","armatureName")
a.setScale(float(0.5))
a.init()