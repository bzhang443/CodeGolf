# -*- coding: utf-8 -*-
$:.unshift("/Library/RubyMotion/lib")
require 'motion/project'
require 'rubygems'
require 'bundler'
Bundler.require

# Use `rake config' to see complete project settings.
Motion::Project::App.setup do |app|
  app.name = 'CodeGolf'
  app.icons = ['icon.png', 'icon@2x.png']

  app.pods do
    #pod 'TestFlightSDK'
    pod 'JSONKit'
  end
  #app.vendor_project 'vendor/RestKit', :xcode, target: 'RestKit'
  #app.vendor_project 'vendor/code', :static

  app.codesign_certificate = 'iPhone Distribution: Shanghai Yuexing Culture Media Ltd.'
  app.identifier = 'mobi.tt-golf.rubymotion'
  app.provisioning_profile ='/Users/bison/Library/MobileDevice/Provisioning Profiles/32A6DDF3-975F-4A5F-B0AA-C516D6358C8A.mobileprovision'
  #app.testflight.sdk = 'vendor/TestFlightSDK'
  #app.testflight.api_token = 'aca2eee2966c47b6c03b6309b1847dac_NTM1NTI0MjAxMi0wNy0xNiAxMToxMzoxOC4wMzM2NDM'
  #app.testflight.team_token = '9f13c5e133f3ebf02f7781e9819be27f_MTEwNzE2MjAxMi0wNy0xNiAxMToxNzozNi43MzY0NzU'
end
