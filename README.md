This was my creation for my local Hack Club Build Guild hackathon.

With what little parts I had to work with at the hackathon, I wound up making a lil simple device that counts in binary every single time a motion is detected by the PIR sensor. Doesn't quite have a structure I designed or anything, but it's a rather flexible device that can go wherever you want it to and is easy to shift around for whatever purpose.

## Components needed:
1. Arduino (I used a [nano](https://link](https://www.amazon.com/LUIRSAY-2Pcs-ATmega328P-Microcontroller-Compatible/dp/B0F1FQMNXM?adgrpid=1330411627912752&dib=eyJ2IjoiMSJ9.87rL5d9ziJpvx7A3OM0Cu8aVmGqwhO_Uv02Fkr2rtnwJefpmVkHt5i2wxKYxoLHMPzX8JASnpD_xwkBI2InxZgxZrIEAAJ4yPKhez2nXkpBOO6IB3eKHpRvHCXqHg8d5cOZsU_G5z99W6GfACdqysgU4d8n1w6Gyi67QY07sbzrbe-ZO4-fy-dZBmb49NAzasJPfQVP-USMYANNjJfmAomujBMwuMVhC8bWddUzgvJc.829HTJd7CzMXd3C10QOF2bC3w1MzKTfNPvW7JnOImYo&dib_tag=se&hvadid=83151010903713&hvbmt=be&hvdev=c&hvlocphy=103304&hvnetw=o&hvqmt=e&hvtargid=kwd-83151933485623%3Aloc-190&hydadcr=24328_13514973&keywords=arduino%2Bnano&mcid=8b35fce829b232af874780ddece88d5b&qid=1777420499&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sr=8-3&th=1)) in mine)
2. [Bread board](https://www.amazon.com/Rindion-Breadboard-Distribution-Connection-Prototype/dp/B0DBQ8ML2T?crid=25DSV79PTV1G&dib=eyJ2IjoiMSJ9.Kz-T88hN2fro-OlU2oxOXsXfKB1oLFNO0GHLPDhqMs2TE9tm2fE-QUoq8dkvO2ke3Q7D70RTerpWzOJsDTLK1YlMi9V0QEruHsfw9BEU7YcpkdZamxzxoGFO9SfvjRJmPGohdmgVTX2ReKfdFZH_SOVTMsbeWgdrA3_WLEmuXqVTg1gVr0Li8pDLs6GSvvn1KlhH5xuvSEXEsJwValZceJ01JwDw3pWuFaEK5T5s31deTkCcmwSWSLfiUTAI88X-khVRXzcb2vYVIPjMDaf_FwF_rUScFKRnia2Of4sc99I.rkd0brVJwL0cWJ1uMHAaWm7sB9jF0opXozXCDGYUg58&dib_tag=se&keywords=bread+board&qid=1777424722&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sprefix=bread+board%2Caps%2C152&sr=8-12)
3. [PIR sensor](https://www.amazon.com/HiLetgo-HC-SR501-Infrared-Sensor-Arduino/dp/B07KZW86YR?crid=25ATCGC2QXDQR&dib=eyJ2IjoiMSJ9.zxcyRjj1a2cgLHKDl6EoPCCDqaYxDVUQ5tR59MM-1uGaEMYxqII0mHLp1ik7SSAhsPotpN-F6zNgoPc0ylP5yIoiLmOqHJ2pBuWyiqqa9WM9JOSMmowePQUjmqx92NbAJZkwS_AzLoDHa9GYo-e3fKagnDAEgu1YwCQ2edZg2Pnl4pPKw_sPwGUQEMRDkVTPeKfrqqp-tJHreyA-udoAnrtpWToY9f-xQM3gaMmOeDY.wCO9BcWWcs6PN7bOjJ1HsnaOAlE1RxsICWI_mQySBqM&dib_tag=se&keywords=PIR+sensor&qid=1777420581&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sprefix=pir+sensor%2Caps%2C136&sr=8-3)
4. [LED lights](https://www.amazon.com/California-JOS-50-PCS-Colorful/dp/B0CR886L92?crid=35KC3WARLP5NI&dib=eyJ2IjoiMSJ9.b2ax0uReCWF-zaQ-YkPtSV4NlKZz6rD5G8ZFOfbHOZGBMIpN2-k3mbEcMnAkQoxWmpxT-lhnH0M6o7huaEjM6dvpfXtMPF8S-tR7NQI8icr_4PAYvPVoSF0xT3mVJEpnxqVeRekS6dD1fIDpaIDeyojuZ608tz9H8Sq-ogWpczGsr6kb4QJSvxr_0gWPIplXOZALzdGMvE4r7RlL-3vi1-kBA9xemvS6jW5IL2KuYuo.K_MOb3joXQZ_8-iJ3TKw_Hj2lIn4qCWUnXw_OeAhV00&dib_tag=se&keywords=led%2Blights%2Barduino&qid=1777420633&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sprefix=led%2Blights%2Barduino%2Caps%2C140&sr=8-3&th=1)
5. Some jumper wires and resistors

## Assembly
1. Attach the arduino to the breadboard with ground and power
2. Attach PIR sensor to ground, power, and one of the inputs. (For some reason mine only worked without ground and power, but I'm unsure how likely that'd happen again.)
3. Attach resistors to output pins and other (different) points on the breadboard
4. Connect LED lights to resistors and ground lines
5. Correct [code](https://github.com/blowupthenoobs/MotionCounter/blob/main/BuildGuild.ino) to reflect the pins you placed the LEDs and sensor on
6. Upload the code to the arudino and make sure the arduino is connected to power (computer also works)
7. Wave your hands around the device to test it :D
