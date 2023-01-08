<!-- Tufts VUE 3.3.0 concept-map (Database-1.vue) 2023-01-03 -->
<!-- Tufts VUE: http://vue.tufts.edu/ -->
<!-- Do Not Remove: VUE mapping @version(1.1) jar:file:/home/dev/3-toolkit/vue/VUE.jar!/tufts/vue/resources/lw_mapping_1_1.xml -->
<!-- Do Not Remove: Saved date Tue Jan 03 06:56:12 EST 2023 by dev on platform Linux 5.4.0-126-generic in JVM 11.0.16+8-post-Ubuntu-0ubuntu120.04 -->
<!-- Do Not Remove: Saving version @(#)VUE: built October 8 2015 at 1658 by tomadm on Linux 2.6.32-504.23.4.el6.x86_64 i386 JVM 1.7.0_21-b11(bits=32) -->
<?xml version="1.0" encoding="US-ASCII"?>
<LW-MAP xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
    xsi:noNamespaceSchemaLocation="none" ID="0" label="Database-1.vue"
    created="1597706425792" x="0.0" y="0.0" width="1.4E-45"
    height="1.4E-45" strokeWidth="0.0" autoSized="false">
    <resource referenceCreated="1672746972130" size="104820"
        spec="/home/dev/Desktop/Ucf Docs/DesignRef/Models/Database-1.vue"
        type="1" xsi:type="URLResource">
        <title>Database-1.vue</title>
        <property key="File" value="/home/dev/Desktop/Ucf Docs/DesignRef/Models/Database-1.vue"/>
    </resource>
    <fillColor>#FFFFFF</fillColor>
    <strokeColor>#404040</strokeColor>
    <textColor>#000000</textColor>
    <font>SansSerif-plain-14</font>
    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb4f7f0001010028d976a79296d1</URIString>
    <child ID="6"
        label="UUTIndex&#xa;- ID&#xa;- SerialNumber&#xa;- ExtendedSerialNumber"
        layerID="1" created="1597706477910" x="153.0" y="205.0"
        width="163.0" height="68.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb517f0001010028d976d890d1ee</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="7"
        label="UUTInstance Table&#xa;- ID&#xa;- SessionID&#xa;- DeviceID&#xa;- Context&#xa;- TestSpec&#xa;- TestFixture&#xa;- Slot&#xa;- Status"
        layerID="1" created="1597706553713" x="530.5" y="168.5"
        width="141.0" height="143.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb537f0001010028d97601d04854</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="8" label="DeviceID = fk to ID" layerID="1"
        created="1597706553716" x="315.5" y="232.51501" width="215.5"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb547f0001010028d9761c2ab3ec</URIString>
        <point1 x="316.0" y="239.22238"/>
        <point2 x="530.5" y="239.80765"/>
        <ID1 xsi:type="node">6</ID1>
        <ID2 xsi:type="node">7</ID2>
    </child>
    <child ID="9"
        label="MeasurementData Table&#xa;- ID&#xa;- DataInstanceID&#xa;- GroupName&#xa;- Parameter&#xa;- Value&#xa;- TestTimeStamp"
        layerID="1" created="1597706670454" x="847.5" y="184.5"
        width="166.0" height="113.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb577f0001010028d976f370f14c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="10" label="DataInstanceID = fk to ID" layerID="1"
        created="1597706670457" x="671.0" y="233.48103" width="177.0"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb587f0001010028d9762ca36e7f</URIString>
        <point1 x="671.5" y="240.21396"/>
        <point2 x="847.5" y="240.74811"/>
        <ID1 xsi:type="node">7</ID1>
        <ID2 xsi:type="node">9</ID2>
    </child>
    <child ID="11"
        label="TestSpecIndex Table&#xa;- ID&#xa;- Name&#xa;- Version&#xa;- DutType&#xa;- Description"
        layerID="1" created="1597706742251" x="530.5" y="5.5"
        width="141.0" height="98.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5b7f0001010028d97699e5aa68</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="12" label="TestSpec = fk to ID" layerID="1"
        created="1597706742254" x="545.5" y="103.0" width="111.0"
        height="66.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5c7f0001010028d97687a66882</URIString>
        <point1 x="601.0" y="168.5"/>
        <point2 x="601.0" y="103.5"/>
        <ID1 xsi:type="node">7</ID1>
        <ID2 xsi:type="node">11</ID2>
    </child>
    <child ID="13"
        label="TestLimits Table&#xa;- ID&#xa;- Specification&#xa;- GroupName&#xa;- Parameter&#xa;- Lolimit&#xa;- Hilimit&#xa;- Description"
        layerID="1" created="1597706851730" x="847.5" y="-9.5"
        width="166.0" height="128.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5e7f0001010028d9766c5d2b18</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="14" label="Specification = fk to ID" layerID="1"
        created="1597706851733" x="671.0" y="47.5" width="177.0"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb5f7f0001010028d97647a3f3e4</URIString>
        <point1 x="671.5" y="54.5"/>
        <point2 x="847.5" y="54.5"/>
        <ID1 xsi:type="node">11</ID1>
        <ID2 xsi:type="node">13</ID2>
    </child>
    <child ID="16"
        label="TestProfileMap Table&#xa;- Specification&#xa;- ProfileName&#xa;- Description"
        layerID="1" created="1597706949425" x="153.0" y="20.5"
        width="163.0" height="68.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb607f0001010028d976b098849b</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="17" label="Specification = fk to ID" layerID="1"
        created="1597706949428" x="315.5" y="47.5" width="215.5"
        height="14.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb617f0001010028d976e8548a7d</URIString>
        <point1 x="530.5" y="54.5"/>
        <point2 x="316.0" y="54.5"/>
        <ID1 xsi:type="node">11</ID1>
        <ID2 xsi:type="node">16</ID2>
    </child>
    <child ID="19" label="Not used when serial numbers are not stored"
        layerID="1" created="1597707460112" x="162.0" y="295.0"
        width="155.0" height="53.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb637f0001010028d976a50b15d5</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      Not used when serial numbers are not stored
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>Not used when serial numbers are not stored</label>
    </child>
    <child ID="29"
        label="create new record in 'TestProfileMap' and &#xa;set CurrentTestSpecID (default == 1)"
        layerID="20" created="1672080354405" x="518.75" y="1052.5"
        width="276.0" height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5b7f0001016dbe2ddd06260967</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="30"
        label="if a record for the &#xa;current profile does not exist&#xa;"
        layerID="20" created="1672080354410" x="286.25" y="1056.2603"
        width="233.0" height="42.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5b7f0001016dbe2ddd98a9f5fd</URIString>
        <point1 x="286.75" y="1079.891"/>
        <point2 x="518.75" y="1074.6296"/>
        <ID1 xsi:type="node">31</ID1>
        <ID2 xsi:type="node">29</ID2>
    </child>
    <child ID="31"
        label="(TestProfileMap)&#xa;get the current test spec id&#xa;based on the profile name"
        layerID="20" created="1672088783237" x="100.75" y="1055.5"
        width="186.0" height="53.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5c7f0001016dbe2dddb399b972</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="33"
        label="specify the test spec(s)&#xa;in 'TestSpecIndex'"
        layerID="20" created="1672088975997" x="135.25" y="1141.0"
        width="160.0" height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5d7f0001016dbe2dddb9424ac2</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="34"
        label="create a profile record in 'TestProfileMap' and &#xa;reference it to 'TestSpecIndex'&#xa;"
        layerID="20" created="1672089068362" x="407.75" y="1135.5"
        width="302.0" height="53.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5d7f0001016dbe2ddd4133952a</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="37" layerID="20" created="1672089161907" x="294.75"
        y="1159.9658" width="113.5" height="1.6550293" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e5d7f0001016dbe2ddd90a43164</URIString>
        <point1 x="407.75" y="1161.1208"/>
        <point2 x="295.25" y="1160.4658"/>
        <ID1 xsi:type="node">34</ID1>
        <ID2 xsi:type="node">33</ID2>
    </child>
    <child ID="52" label="Save Measurement" layerID="20"
        created="1672090933136" x="94.75" y="266.0" width="132.0"
        height="37.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5063bbfc7f0001016dbe2ddd4bf09b82</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="53" label="(n) = configuration sequence" layerID="20"
        created="1672090950640" x="1253.75" y="349.0" width="261.0"
        height="33.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5063bbfc7f0001016dbe2ddd7a26e4af</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      (n) = configuration sequence
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>(n) = configuration sequence</label>
    </child>
    <child ID="67"
        label="Key identifiers set on startup&#xa;    &#xa;    &#xa;      - CurrentTestSpecID&#xa;    &#xa;    &#xa;      - TestSpecName&#xa;    &#xa;    &#xa;      - DUTTypeName&#xa;    &#xa;    &#xa;      - MfgName&#xa;    &#xa;    &#xa;      - MfgLocation&#xa;    &#xa;    &#xa;      - SessionID"
        layerID="20" created="1672111240608" x="1253.75" y="418.87543"
        width="250.0" height="164.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/519b44107f00010127ea692a1027e42e</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      Key identifiers set on startup
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - CurrentTestSpecID
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - TestSpecName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - DUTTypeName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - MfgName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - MfgLocation
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - SessionID
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>Key identifiers set on startup
    
    
      - CurrentTestSpecID
    
    
      - TestSpecName
    
    
      - DUTTypeName
    
    
      - MfgName
    
    
      - MfgLocation
    
    
      - SessionID</label>
    </child>
    <child ID="74" label="VerifyTestLimits" layerID="20"
        created="1672157581413" x="283.75" y="203.87543" width="108.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752aef7f00010127ea692a6411c829</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="75" label="1" layerID="20" created="1672157596015"
        x="207.621" y="226.37543" width="101.18213" height="40.124573"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752aef7f00010127ea692a56b5f048</URIString>
        <point1 x="308.30313" y="226.87543"/>
        <point2 x="208.121" y="266.0"/>
        <ID1 xsi:type="node">74</ID1>
        <ID2 xsi:type="node">52</ID2>
    </child>
    <child ID="76" label="CurrentTestSpecID" layerID="20"
        created="1672157700634" x="500.25" y="-49.124573" width="129.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752aef7f00010127ea692aa9459110</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="77" layerID="20" created="1672157719968" x="347.56818"
        y="-26.624573" width="207.36365" height="231.0"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af07f00010127ea692adf9de7a7</URIString>
        <point1 x="554.4318" y="-26.124573"/>
        <point2 x="348.06818" y="203.87543"/>
        <ID1 xsi:type="node">76</ID1>
        <ID2 xsi:type="node">74</ID2>
    </child>
    <child ID="80" label="TestLimits::TestLimits" layerID="20"
        created="1672157836867" x="281.75" y="275.87543" width="144.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af17f00010127ea692a26bb7885</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="82" label="HiLimit&#xa;LoLimit" layerID="20"
        created="1672157926973" x="321.75" y="226.37549" width="48.0"
        height="50.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af17f00010127ea692aec76aae2</URIString>
        <point1 x="340.30554" y="226.87549"/>
        <point2 x="351.19446" y="275.8755"/>
        <ID1 xsi:type="node">74</ID1>
        <ID2 xsi:type="node">80</ID2>
    </child>
    <child ID="84" label="executetestsequence" layerID="20"
        created="1672158618146" x="40.75" y="-167.62457" width="149.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af27f00010127ea692a35ea6b35</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="86" layerID="20" created="1672158633395" x="134.11453"
        y="-222.62457" width="92.77095" height="55.5" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af37f00010127ea692ae07325c9</URIString>
        <point1 x="134.61452" y="-167.62457"/>
        <point2 x="226.38547" y="-222.12457"/>
        <ID1 xsi:type="node">84</ID1>
        <ID2 xsi:type="node">87</ID2>
    </child>
    <child ID="87" label="Slots.SetUutIndex" layerID="20"
        created="1672158647600" x="184.25" y="-245.12457" width="123.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af37f00010127ea692a92f2e2d6</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="90" label="GetUutIndexEntry&#xa;(or set)" layerID="20"
        created="1672158912420" x="245.75" y="-177.62457" width="121.0"
        height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af47f00010127ea692a7037e1c9</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="91" label="MeasurementDb::TestIndex" layerID="20"
        created="1672158943713" x="250.75" y="-207.62457" width="183.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af47f00010127ea692ad481c04e</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="93" label="serial #&#xa;DutType" layerID="20"
        created="1672158973880" x="300.35" y="-195.12457" width="55.0"
        height="28.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af57f00010127ea692a75edbe60</URIString>
        <point1 x="324.49" y="-177.62457"/>
        <point2 x="331.21002" y="-184.62457"/>
        <ID1 xsi:type="node">90</ID1>
        <ID2 xsi:type="node">91</ID2>
    </child>
    <child ID="94" label="uut_index" layerID="20"
        created="1672159007136" x="334.3533" y="-274.12628"
        width="158.02979" height="97.001724" strokeWidth="1.0"
        autoSized="false" controlCount="1" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af57f00010127ea692ae6d6804d</URIString>
        <point1 x="361.1791" y="-207.62457"/>
        <point2 x="334.8533" y="-177.62456"/>
        <ID1 xsi:type="node">91</ID1>
        <ID2 xsi:type="node">90</ID2>
        <ctrlPoint0 x="581.75" y="-341.628" xsi:type="point"/>
    </child>
    <child ID="96" layerID="20" created="1672159118003" x="366.25"
        y="-154.09244" width="140.5" height="12.603027"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/54752af67f00010127ea692ab0eabafc</URIString>
        <point1 x="506.25" y="-141.98941"/>
        <point2 x="366.75" y="-153.59244"/>
        <ID1 xsi:type="node">116</ID1>
        <ID2 xsi:type="node">90</ID2>
    </child>
    <child ID="97" label="GetUutInstance" layerID="20"
        created="1672159325959" x="33.75" y="48.375427" width="110.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534bd7f00010127ea692a5beba875</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="98" label="MeasurementDb::uutInstance" layerID="20"
        created="1672159363970" x="254.25" y="-41.124573" width="198.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534be7f00010127ea692a0892c402</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="99" label="uut_index&#xa;test_session_loopcount&#xa;slot"
        layerID="20" created="1672159363973" x="122.23602" y="-18.62458"
        width="197.52795" height="67.50001" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534be7f00010127ea692a7cb9a049</URIString>
        <point1 x="122.73603" y="48.375427"/>
        <point2 x="319.26398" y="-18.12458"/>
        <ID1 xsi:type="node">97</ID1>
        <ID2 xsi:type="node">98</ID2>
    </child>
    <child ID="100" label="instance_id" layerID="20"
        created="1672159544493" x="96.398254" y="-118.50127"
        width="253.76169" height="167.37671" strokeWidth="1.0"
        autoSized="false" controlCount="1" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534bf7f00010127ea692a43e1facf</URIString>
        <point1 x="349.65994" y="-41.12451"/>
        <point2 x="96.898254" y="48.375427"/>
        <ID1 xsi:type="node">98</ID1>
        <ID2 xsi:type="node">97</ID2>
        <ctrlPoint0 x="291.75" y="-226.62799" xsi:type="point"/>
    </child>
    <child ID="101" label="SessionID" layerID="20"
        created="1672159584752" x="501.25" y="-1.1245728" width="132.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534bf7f00010127ea692aa657cdbe</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="102" layerID="20" created="1672159599743" x="414.3469"
        y="-18.624573" width="92.05621" height="18.0" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534bf7f00010127ea692aea04e0a7</URIString>
        <point1 x="505.9031" y="-1.1245728"/>
        <point2 x="414.8469" y="-18.124573"/>
        <ID1 xsi:type="node">101</ID1>
        <ID2 xsi:type="node">98</ID2>
    </child>
    <child ID="103" layerID="20" created="1672159738669" x="189.25"
        y="-158.33267" width="57.0" height="1.7329865" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c07f00010127ea692a1a356655</URIString>
        <point1 x="189.75" y="-157.0997"/>
        <point2 x="245.75" y="-157.83269"/>
        <ID1 xsi:type="node">84</ID1>
        <ID2 xsi:type="node">90</ID2>
    </child>
    <child ID="104" label="TestSpecID" layerID="20"
        created="1672159828090" x="501.25" y="-102.12457" width="131.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c07f00010127ea692aa3d1fff2</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="105" label="TestFixtureID" layerID="20"
        created="1672159830199" x="414.25" y="61.875427" width="132.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c07f00010127ea692a8062d155</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="106" layerID="20" created="1672159887127" x="393.04712"
        y="-79.62457" width="134.15576" height="39.0" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c17f00010127ea692aa8a952b2</URIString>
        <point1 x="526.7029" y="-79.12457"/>
        <point2 x="393.54712" y="-41.124573"/>
        <ID1 xsi:type="node">104</ID1>
        <ID2 xsi:type="node">98</ID2>
    </child>
    <child ID="107" layerID="20" created="1672159889262" x="366.95752"
        y="-18.624573" width="99.83493" height="81.0" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c17f00010127ea692a71120e2b</URIString>
        <point1 x="466.29248" y="61.875427"/>
        <point2 x="367.45755" y="-18.124573"/>
        <ID1 xsi:type="node">105</ID1>
        <ID2 xsi:type="node">98</ID2>
    </child>
    <child ID="110" label="for each slot" layerID="20"
        created="1672160099410" x="65.0" y="-145.12457" width="74.0"
        height="194.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c37f00010127ea692a8f99515b</URIString>
        <point1 x="113.83912" y="-144.62457"/>
        <point2 x="90.16088" y="48.375427"/>
        <ID1 xsi:type="node">84</ID1>
        <ID2 xsi:type="node">97</ID2>
    </child>
    <child ID="111" label="TheDb->SaveMeasurement" layerID="20"
        created="1672160261232" x="254.25" y="347.87543" width="182.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c47f00010127ea692ae04025ce</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="112" label="2" layerID="20" created="1672160261236"
        x="205.83572" y="302.5" width="111.577194" height="45.875427"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c47f00010127ea692a95ff0815</URIString>
        <point1 x="206.33574" y="303.0"/>
        <point2 x="316.91293" y="347.87543"/>
        <ID1 xsi:type="node">52</ID1>
        <ID2 xsi:type="node">111</ID2>
    </child>
    <child ID="113" label="test session loop count is 'context'"
        layerID="20" created="1672161321997" x="362.75" y="625.3754"
        width="175.0" height="56.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/549534c47f00010127ea692adc775cfd</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#404040" style="color: #404040"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 11; font-family: Arial; color: #404040 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 11; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #404040 }
        ul { margin-top: 6; font-size: 11; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#404040" style="color: #404040"&gt;
      test session loop count is 'context'
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>test session loop count is 'context'</label>
    </child>
    <child ID="116" label="DutTypeName" layerID="20"
        created="1672194638185" x="506.25" y="-148.12457" width="129.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56964b4e7f00010127ea692a3e232223</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="117" label="TestSpecName" layerID="20"
        created="1672194688005" x="507.25" y="-205.12457" width="129.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56964b4f7f00010127ea692a14936abb</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="122" label="start processes" layerID="121"
        created="1672197020380" x="-3.75" y="-15.0" width="111.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb47f00010127ea692a8958f791</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="123" label="SetTestSessionID" layerID="121"
        created="1672197020380" x="218.75" y="-14.5" width="121.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb47f00010127ea692a7f4a60ef</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="124" layerID="121" created="1672197020381" x="106.75"
        y="-3.8780222" width="112.5" height="1.245055" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb57f00010127ea692a07b73b7f</URIString>
        <point1 x="107.25" y="-3.378022"/>
        <point2 x="218.75" y="-3.132967"/>
        <ID1 xsi:type="node">122</ID1>
        <ID2 xsi:type="node">123</ID2>
    </child>
    <child ID="125" label="GetTestSpecName" layerID="121"
        created="1672197020381" x="487.75" y="-209.5" width="142.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb57f00010127ea692a8713fc90</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="126" label="1" layerID="121" created="1672197020381"
        x="295.23334" y="-187.0" width="247.53333" height="173.0"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb57f00010127ea692a1bfa80cb</URIString>
        <point1 x="295.73334" y="-14.5"/>
        <point2 x="542.26666" y="-186.5"/>
        <ID1 xsi:type="node">123</ID1>
        <ID2 xsi:type="node">125</ID2>
    </child>
    <child ID="127" label="GetMfgID" layerID="121"
        created="1672197020381" x="559.75" y="-11.5" width="68.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb67f00010127ea692a39d0636a</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="128" label="2" layerID="121" created="1672197020381"
        x="339.25" y="-8.373609" width="221.0" height="14.0"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb67f00010127ea692a20f607a5</URIString>
        <point1 x="339.75" y="-2.4228933"/>
        <point2 x="559.75" y="-0.32432413"/>
        <ID1 xsi:type="node">123</ID1>
        <ID2 xsi:type="node">127</ID2>
    </child>
    <child ID="129"
        label="create new record in 'TestProfileMap' and &#xa;set CurrentTestSpecID (default == 1)"
        layerID="121" created="1672197020381" x="518.75" y="1052.5"
        width="276.0" height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb67f00010127ea692ae15d1cb1</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="130"
        label="if a record for the &#xa;current profile does not exist&#xa;"
        layerID="121" created="1672197020382" x="286.25" y="1056.2603"
        width="233.0" height="42.0" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb67f00010127ea692a401ece1e</URIString>
        <point1 x="286.75" y="1079.891"/>
        <point2 x="518.75" y="1074.6296"/>
        <ID1 xsi:type="node">131</ID1>
        <ID2 xsi:type="node">129</ID2>
    </child>
    <child ID="131"
        label="(TestProfileMap)&#xa;get the current test spec id&#xa;based on the profile name"
        layerID="121" created="1672197020382" x="100.75" y="1055.5"
        width="186.0" height="53.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb77f00010127ea692a23cbbc97</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="132"
        label="specify the test spec(s)&#xa;in 'TestSpecIndex'"
        layerID="121" created="1672197020382" x="135.25" y="1141.0"
        width="160.0" height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb77f00010127ea692aa27f63f9</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="133"
        label="create a profile record in 'TestProfileMap' and &#xa;reference it to 'TestSpecIndex'&#xa;"
        layerID="121" created="1672197020382" x="407.75" y="1135.5"
        width="302.0" height="53.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb77f00010127ea692aff8fbae2</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="134" layerID="121" created="1672197020382" x="294.75"
        y="1159.9658" width="113.5" height="1.6550293" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb77f00010127ea692af3c00a6d</URIString>
        <point1 x="407.75" y="1161.1208"/>
        <point2 x="295.25" y="1160.4658"/>
        <ID1 xsi:type="node">133</ID1>
        <ID2 xsi:type="node">132</ID2>
    </child>
    <child ID="135" label="(3) TestLimits::TestProfileMap" layerID="121"
        created="1672197020382" x="586.75" y="-330.0" width="196.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#EA2218</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#FFFFFF</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb87f00010127ea692a8b6cf326</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="136" label="profile&#xa;name" layerID="121"
        created="1672197020382" x="570.2749" y="-307.5"
        width="102.950195" height="98.5" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb87f00010127ea692a17e89b03</URIString>
        <point1 x="672.7251" y="-307.0"/>
        <point2 x="570.7749" y="-209.5"/>
        <ID1 xsi:type="node">135</ID1>
        <ID2 xsi:type="node">125</ID2>
    </child>
    <child ID="137" label="(2) TestLimits::TestSpecIndex" layerID="121"
        created="1672197020383" x="363.75" y="-330.0" width="195.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#EA2218</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#FFFFFF</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb87f00010127ea692ad735fdba</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="138" label="CurrentTestSpecID" layerID="121"
        created="1672197020383" x="456.0" y="-307.5" width="108.0"
        height="98.5" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb97f00010127ea692a4aee69e9</URIString>
        <point1 x="549.445" y="-209.5"/>
        <point2 x="470.555" y="-307.0"/>
        <ID1 xsi:type="node">125</ID1>
        <ID2 xsi:type="node">137</ID2>
    </child>
    <child ID="139" label="(1) Static::MfgID" layerID="121"
        created="1672197020383" x="526.75" y="-81.0" width="134.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#EA2218</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#FFFFFF</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb97f00010127ea692afdc3e17c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="140" label="MfgName, MfgLocation" layerID="121"
        created="1672197020383" x="529.25" y="-58.5" width="129.0"
        height="47.5" strokeWidth="1.0" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#A6A6A6</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb97f00010127ea692ab67325a8</URIString>
        <point1 x="593.75" y="-11.5"/>
        <point2 x="593.75" y="-58.0"/>
        <ID1 xsi:type="node">127</ID1>
        <ID2 xsi:type="node">139</ID2>
    </child>
    <child ID="142" label="(n) = configuration sequence" layerID="121"
        created="1672197020383" x="1253.75" y="349.0" width="261.0"
        height="33.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eb97f00010127ea692a0fd02660</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      (n) = configuration sequence
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>(n) = configuration sequence</label>
    </child>
    <child ID="143" label="SetTestSessionIndex" layerID="121"
        created="1672197020384" x="522.75" y="152.87543" width="142.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eba7f00010127ea692a5c86073d</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="144" label="3" layerID="121" created="1672197020384"
        x="300.35864" y="8.0" width="272.28275" height="145.37543"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76eba7f00010127ea692a1444ba38</URIString>
        <point1 x="572.14136" y="152.87543"/>
        <point2 x="300.8586" y="8.5"/>
        <ID1 xsi:type="node">143</ID1>
        <ID2 xsi:type="node">123</ID2>
    </child>
    <child ID="145" label="MeasurementDb::TestSessionIndex"
        layerID="121" created="1672197020384" x="477.75" y="254.87543"
        width="232.0" height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebb7f00010127ea692a43136805</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="146" label="host&#xa;MfgName&#xa;MfgLocation"
        layerID="121" created="1672197020384" x="614.9495" y="175.37543"
        width="74.092285" height="80.0" strokeWidth="1.0"
        autoSized="false" controlCount="1" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebb7f00010127ea692a2322d3fd</URIString>
        <point1 x="617.2178" y="254.87543"/>
        <point2 x="615.4495" y="175.87543"/>
        <ID1 xsi:type="node">145</ID1>
        <ID2 xsi:type="node">143</ID2>
        <ctrlPoint0 x="693.75" y="217.37201" xsi:type="point"/>
    </child>
    <child ID="147" label="SessionID" layerID="121"
        created="1672197020384" x="520.582" y="175.37543"
        width="58.61438" height="79.99997" strokeWidth="1.0"
        autoSized="false" controlCount="1" arrowState="1" xsi:type="link">
        <strokeColor>#A6A6A6</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebb7f00010127ea692a3b43ecd9</URIString>
        <point1 x="576.13165" y="175.87543"/>
        <point2 x="578.69635" y="254.8754"/>
        <ID1 xsi:type="node">143</ID1>
        <ID2 xsi:type="node">145</ID2>
        <ctrlPoint0 x="521.75" y="211.37201" xsi:type="point"/>
    </child>
    <child ID="148"
        label="Key identifiers set on startup&#xa;    &#xa;    &#xa;      - CurrentTestSpecID&#xa;    &#xa;    &#xa;      - TestSpecName&#xa;    &#xa;    &#xa;      - DUTTypeName&#xa;    &#xa;    &#xa;      - MfgName&#xa;    &#xa;    &#xa;      - MfgLocation&#xa;    &#xa;    &#xa;      - SessionID"
        layerID="121" created="1672197020384" x="1253.75" y="418.87543"
        width="250.0" height="164.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebc7f00010127ea692a4646b69b</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#000000" style="color: #000000"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 12; font-family: Arial; color: #000000 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 12; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #000000 }
        ul { margin-top: 6; font-size: 12; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      Key identifiers set on startup
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - CurrentTestSpecID
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - TestSpecName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - DUTTypeName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - MfgName
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - MfgLocation
    &lt;/p&gt;
    &lt;p color="#000000" style="color: #000000"&gt;
      - SessionID
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>Key identifiers set on startup
    
    
      - CurrentTestSpecID
    
    
      - TestSpecName
    
    
      - DUTTypeName
    
    
      - MfgName
    
    
      - MfgLocation
    
    
      - SessionID</label>
    </child>
    <child ID="151" label="CurrentTestSpecID" layerID="121"
        created="1672197020385" x="764.25" y="-255.12457" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebd7f00010127ea692a7b4f1a2a</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="153" layerID="121" created="1672197020385" x="626.8767"
        y="-233.18723" width="138.37329" height="24.687225"
        strokeWidth="2.0" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebd7f00010127ea692ab95e8014</URIString>
        <point1 x="764.25" y="-232.18723"/>
        <point2 x="627.8767" y="-209.5"/>
        <ID1 xsi:type="node">151</ID1>
        <ID2 xsi:type="node">125</ID2>
    </child>
    <child ID="168" label="SessionID" layerID="121"
        created="1672197020388" x="764.25" y="150.87543" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebd7f00010127ea692aadd9d016</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="176" layerID="121" created="1672197020389" x="663.75"
        y="161.95013" width="101.5" height="2.8317719" strokeWidth="2.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebe7f00010127ea692a8e0ac885</URIString>
        <point1 x="664.75" y="163.7819"/>
        <point2 x="764.25" y="162.95013"/>
        <ID1 xsi:type="node">143</ID1>
        <ID2 xsi:type="node">168</ID2>
    </child>
    <child ID="180" label="test session loop count is 'context'"
        layerID="121" created="1672197020389" x="362.75" y="625.3754"
        width="175.0" height="56.0" strokeWidth="0.0" autoSized="false" xsi:type="text">
        <strokeColor>#404040</strokeColor>
        <textColor>#000000</textColor>
        <font>SansSerif-plain-14</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebf7f00010127ea692a9e1400dd</URIString>
        <richText>&lt;html&gt;
  &lt;head color="#404040" style="color: #404040"&gt;
    &lt;style type="text/css"&gt;
      &lt;!--
        body { margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; font-size: 11; font-family: Arial; color: #404040 }
        ol { margin-top: 6; font-family: Arial; vertical-align: middle; margin-left: 30; font-size: 11; list-style-position: outside }
        p { margin-top: 0; margin-left: 0; margin-right: 0; margin-bottom: 0; color: #404040 }
        ul { margin-top: 6; font-size: 11; margin-left: 30; vertical-align: middle; list-style-position: outside; font-family: Arial }
      --&gt;
    &lt;/style&gt;
    
  &lt;/head&gt;
  &lt;body&gt;
    &lt;p color="#404040" style="color: #404040"&gt;
      test session loop count is 'context'
    &lt;/p&gt;
  &lt;/body&gt;
&lt;/html&gt;
</richText>
        <label>test session loop count is 'context'</label>
    </child>
    <child ID="181" label="DutTypeName" layerID="121"
        created="1672197020390" x="764.25" y="-151.12457" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebf7f00010127ea692a03761e5c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="182" label="TestSpecName" layerID="121"
        created="1672197020390" x="764.25" y="-209.12457" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ebf7f00010127ea692aaf45ab68</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="183" layerID="121" created="1672197020390" x="611.7775"
        y="-187.5" width="168.19507" height="37.375427"
        strokeWidth="2.0" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ec07f00010127ea692a0b596e4c</URIString>
        <point1 x="778.9726" y="-151.12457"/>
        <point2 x="612.7775" y="-186.5"/>
        <ID1 xsi:type="node">181</ID1>
        <ID2 xsi:type="node">125</ID2>
    </child>
    <child ID="184" layerID="121" created="1672197020390" x="628.75"
        y="-198.9028" width="136.5" height="2.1841125" strokeWidth="2.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-bold-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ec07f00010127ea692a287ec264</URIString>
        <point1 x="764.25" y="-197.71869"/>
        <point2 x="629.75" y="-197.9028"/>
        <ID1 xsi:type="node">182</ID1>
        <ID2 xsi:type="node">125</ID2>
    </child>
    <child ID="186" label="TestSpecID" layerID="121"
        created="1672223947817" x="585.18" y="-307.5" width="120.46521"
        height="98.5" strokeWidth="1.0" autoSized="false"
        controlCount="1" arrowState="1" xsi:type="link">
        <strokeColor>#A6A6A6</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/585218477f00010127ea692ae2abce6c</URIString>
        <point1 x="585.68" y="-209.5"/>
        <point2 x="689.4008" y="-307.0"/>
        <ID1 xsi:type="node">125</ID1>
        <ID2 xsi:type="node">135</ID2>
        <ctrlPoint0 x="707.75" y="-261.628" xsi:type="point"/>
    </child>
    <child ID="190" label="TestSpecName&#xa;DutTypeName" layerID="121"
        created="1672224617521" x="359.66837" y="-307.5"
        width="147.44379" height="98.5" strokeWidth="1.0"
        autoSized="false" controlCount="1" arrowState="2" xsi:type="link">
        <strokeColor>#A6A6A6</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/586165117f00010127ea692aa806cb32</URIString>
        <point1 x="440.5613" y="-307.0"/>
        <point2 x="506.61215" y="-209.5"/>
        <ID1 xsi:type="node">137</ID1>
        <ID2 xsi:type="node">125</ID2>
        <ctrlPoint0 x="333.75" y="-247.62799" xsi:type="point"/>
    </child>
    <child ID="191" label="MfgName" layerID="121"
        created="1672224799353" x="620.0" y="41.87201" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/586165117f00010127ea692a490d53c7</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="192" label="MfgLocation" layerID="121"
        created="1672224801637" x="439.0" y="39.87201" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/586165127f00010127ea692ad43b1bde</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="194" layerID="121" created="1672224864616" x="526.0017"
        y="10.5" width="49.49652" height="30.371979" strokeWidth="2.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/586165127f00010127ea692a9a655a66</URIString>
        <point1 x="574.4983" y="11.5"/>
        <point2 x="527.0018" y="39.87198"/>
        <ID1 xsi:type="node">127</ID1>
        <ID2 xsi:type="node">192</ID2>
    </child>
    <child ID="195" layerID="121" created="1672224866972" x="613.21954"
        y="10.5000305" width="56.060913" height="32.37195"
        strokeWidth="2.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/586165127f00010127ea692ac9240428</URIString>
        <point1 x="614.21954" y="11.5000305"/>
        <point2 x="668.28046" y="41.87198"/>
        <ID1 xsi:type="node">127</ID1>
        <ID2 xsi:type="node">191</ID2>
    </child>
    <child ID="202" label="VerifyTestLimits" layerID="121"
        created="1672331707766" x="1083.75" y="-256.128" width="137.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#ECFFD4</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed2860f7f00010127ea692acca6afe3</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="203" layerID="121" created="1672331707767" x="901.25"
        y="-244.91269" width="183.0" height="1.5720367"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed2860f7f00010127ea692a1749508a</URIString>
        <point1 x="901.75" y="-243.84065"/>
        <point2 x="1083.75" y="-244.41269"/>
        <ID1 xsi:type="node">151</ID1>
        <ID2 xsi:type="node">202</ID2>
    </child>
    <child ID="206" label="display only" layerID="121"
        created="1672331863473" x="626.13965" y="-128.62451"
        width="261.59143" height="281.99994" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286107f00010127ea692aba77a818</URIString>
        <point1 x="841.8246" y="-128.12451"/>
        <point2 x="626.63965" y="152.87543"/>
        <ID1 xsi:type="node">181</ID1>
        <ID2 xsi:type="node">143</ID2>
        <ctrlPoint0 x="885.8609" y="-70.73687" xsi:type="point"/>
        <ctrlPoint1 x="899.9337" y="57.316887" xsi:type="point"/>
    </child>
    <child ID="208" layerID="121" created="1672332271633" x="516.00195"
        y="62.37201" width="69.49609" height="91.00342"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286107f00010127ea692a8f02a36f</URIString>
        <point1 x="516.50195" y="62.87201"/>
        <point2 x="584.99805" y="152.87543"/>
        <ID1 xsi:type="node">192</ID1>
        <ID2 xsi:type="node">143</ID2>
    </child>
    <child ID="207" layerID="121" created="1672332264331" x="603.09204"
        y="64.37201" width="76.31592" height="89.00342"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286107f00010127ea692ad95be6b3</URIString>
        <point1 x="678.90796" y="64.87201"/>
        <point2 x="603.59204" y="152.87543"/>
        <ID1 xsi:type="node">191</ID1>
        <ID2 xsi:type="node">143</ID2>
    </child>
    <child ID="210" label="Connections" layerID="121"
        created="1672332977338" x="-34.25" y="-279.628" width="90.0"
        height="24.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#EEEEEE</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286117f00010127ea692aca08dafb</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="211" label="sets" layerID="121" created="1672332984999"
        x="18.55851" y="-362.628" width="62.19149" height="84.0"
        strokeWidth="2.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#000000</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286117f00010127ea692a1e36951f</URIString>
        <point1 x="19.55851" y="-279.628"/>
        <point2 x="79.75" y="-361.628"/>
        <ID1 xsi:type="node">210</ID1>
    </child>
    <child ID="212" label=" gets " layerID="121" created="1672332987780"
        x="55.25" y="-276.73608" width="67.0" height="14.0"
        strokeWidth="1.0" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#A6A6A6</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286117f00010127ea692a7807da5f</URIString>
        <point1 x="55.75" y="-268.8442"/>
        <point2 x="121.75" y="-270.628"/>
        <ID1 xsi:type="node">210</ID1>
    </child>
    <child ID="213" label="uses" layerID="121" created="1672332990834"
        x="24.163052" y="-256.128" width="67.08695" height="58.0"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#000000</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ed286127f00010127ea692a83ed3135</URIString>
        <point1 x="24.66305" y="-255.62799"/>
        <point2 x="90.75" y="-198.62799"/>
        <ID1 xsi:type="node">210</ID1>
    </child>
    <child ID="215" label="VerifySerialNumbers" layerID="121"
        created="1672333465146" x="1083.75" y="-177.12799" width="137.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#ECFFD4</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5eda32897f00010127ea692a061a00e1</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="216" layerID="121" created="1672333484206" x="901.25"
        y="-191.23416" width="183.0" height="19.240814"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#000000</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5eda328a7f00010127ea692a62d70b54</URIString>
        <point1 x="901.75" y="-190.73416"/>
        <point2 x="1083.75" y="-172.49335"/>
        <ID1 xsi:type="node">182</ID1>
        <ID2 xsi:type="node">215</ID2>
    </child>
    <child ID="219" layerID="121" created="1672333829040" x="901.25"
        y="-160.54855" width="183.0" height="15.824188"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#000000</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ede58017f00010127ea692a1a1f9ebc</URIString>
        <point1 x="901.75" y="-145.22437"/>
        <point2 x="1083.75" y="-160.04855"/>
        <ID1 xsi:type="node">181</ID1>
        <ID2 xsi:type="node">215</ID2>
    </child>
    <child ID="226" label="TestSpecName (display)" layerID="121"
        created="1672334204653" x="122.05" y="76.17201" width="179.0"
        height="34.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#ECFFD4</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ee630677f00010127ea692a08bd76f6</URIString>
        <shape xsi:type="ellipse"/>
    </child>
    <child ID="228" label="link" layerID="121" created="1672334227920"
        x="-181.25" y="-146.62799" width="61.0" height="24.0"
        strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#ECFFD4</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ee630687f00010127ea692a992d6085</URIString>
        <shape xsi:type="ellipse"/>
    </child>
    <child ID="229" layerID="121" created="1672334230681" x="222.70255"
        y="8.0" width="48.952057" height="69.118866" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="2" xsi:type="link">
        <strokeColor>#000000</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5ee630687f00010127ea692a991a2529</URIString>
        <point1 x="223.20255" y="76.618866"/>
        <point2 x="271.1546" y="8.5"/>
        <ID1 xsi:type="node">226</ID1>
        <ID2 xsi:type="node">123</ID2>
    </child>
    <child ID="231" label="method" layerID="121" created="1672334816160"
        x="-207.25" y="-347.128" width="117.5" height="23.0"
        strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5eeef5727f00010127ea692af54b7d71</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="232" label="database" layerID="121"
        created="1672334818002" x="-207.25" y="-276.128" width="117.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5eeef5727f00010127ea692a06084de5</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="233" label="critical data field" layerID="121"
        created="1672334820340" x="-207.25" y="-236.12799" width="117.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/5eeef5727f00010127ea692a521c12c2</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="234" label="config database" layerID="121"
        created="1672597358928" x="-207.25" y="-312.128" width="117.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#EA2218</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#FFFFFF</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/6e9420047f00010127ea692a2ea2ceee</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="237" label="Fn where used" layerID="121"
        created="1672624017256" x="-207.25" y="-195.12799" width="117.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#ECFFD4</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/70299be27f00010127ea692a9e556adc</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="277" label="SlotCount" layerID="121"
        created="1672744257764" x="721.0" y="424.872" width="143.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828ae7f00010127ea692a584c6964</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="278" label="Base/ExtSystemIO::SystemVariables"
        layerID="121" created="1672744285213" x="177.75" y="455.872"
        width="234.0" height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828ae7f00010127ea692a3eae4ab9</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="279" label="Exec::SlotCount" layerID="121"
        created="1672744347484" x="499.25" y="424.872" width="110.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828ae7f00010127ea692afa3f2399</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="280" layerID="121" created="1672744347489" x="390.51624"
        y="442.44232" width="109.233734" height="13.9296875"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692a95b3d673</URIString>
        <point1 x="391.01627" y="455.872"/>
        <point2 x="499.25" y="442.94232"/>
        <ID1 xsi:type="node">278</ID1>
        <ID2 xsi:type="node">279</ID2>
    </child>
    <child ID="281" label="Exec::VerifySn" layerID="121"
        created="1672744364242" x="499.25" y="489.372" width="110.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#D0D0D0</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692af5a35829</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="282" layerID="121" created="1672744364246" x="383.33203"
        y="478.372" width="116.41797" height="15.899841"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692aaf10aca3</URIString>
        <point1 x="383.83203" y="478.872"/>
        <point2 x="499.25" y="493.77185"/>
        <ID1 xsi:type="node">278</ID1>
        <ID2 xsi:type="node">281</ID2>
    </child>
    <child ID="283" label="VerifySnRequest" layerID="121"
        created="1672744446288" x="721.0" y="489.372" width="143.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692ab5f83a4f</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="284" layerID="121" created="1672744472241" x="608.75"
        y="435.872" width="112.75" height="1.0" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692a44a53899</URIString>
        <point1 x="609.25" y="436.372"/>
        <point2 x="721.0" y="436.372"/>
        <ID1 xsi:type="node">279</ID1>
        <ID2 xsi:type="node">277</ID2>
    </child>
    <child ID="285" layerID="121" created="1672744475099" x="608.75"
        y="500.372" width="112.75" height="1.0" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/775828af7f00010127ea692a67e316ff</URIString>
        <point1 x="609.25" y="500.872"/>
        <point2 x="721.0" y="500.872"/>
        <ID1 xsi:type="node">281</ID1>
        <ID2 xsi:type="node">283</ID2>
    </child>
    <child ID="297" label="FixtureID" layerID="121"
        created="1672746708963" x="764.25" y="306.872" width="137.5"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/777b083c7f00010127ea692a081adfa0</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="298" label=" Get Fixture ID GUI prompt " layerID="121"
        created="1672746746057" x="453.75" y="308.872" width="178.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/777b083d7f00010127ea692ae6d3a0d6</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="299" layerID="121" created="1672746773688" x="630.75"
        y="317.84573" width="134.5" height="2.913025" strokeWidth="2.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/777b083d7f00010127ea692aa98163ca</URIString>
        <point1 x="764.25" y="318.84573"/>
        <point2 x="631.75" y="319.75876"/>
        <ID1 xsi:type="node">297</ID1>
        <ID2 xsi:type="node">298</ID2>
    </child>
    <child ID="240" label="SessionID" layerID="238"
        created="1672715812883" x="-213.0" y="-84.12799" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a20f097f00010127ea692a9e495e63</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="241" label="DutTypeName" layerID="238"
        created="1672715812883" x="-226.0" y="-228.12799" width="191.0"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a20f097f00010127ea692a848d4a2c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="242" label="TestSpecName" layerID="238"
        created="1672715812883" x="-213.0" y="-48.12799" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a20f097f00010127ea692ad5103482</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="247"
        label="UUT Index&#xa;********&#xa;ID&#xa;Serial Number&#xa;Device Type"
        layerID="238" created="1672715889019" x="51.75" y="-268.628"
        width="100.0" height="83.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a99ac07f00010127ea692af0678083</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="248"
        label="UUT Instance (1-n)&#xa;********&#xa;ID&#xa;DeviceID&#xa;SessionID&#xa;TestSpecID&#xa;TestFixtureID&#xa;Slot&#xa;Status&#xa;Context (loop count)&#xa;Time Stamp&#xa;"
        layerID="238" created="1672715961747" x="33.25" y="-90.12799"
        width="141.0" height="204.5" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a99ac07f00010127ea692a8f82c85d</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="249" label="Instance::DeviceID&#xa;=&#xa;UUT Index::ID"
        layerID="238" created="1672715961751" x="49.49608"
        y="-186.12793" width="106.0" height="96.5" strokeWidth="1.0"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75a99ac07f00010127ea692ad8283fa2</URIString>
        <point1 x="102.09692" y="-185.62793"/>
        <point2 x="102.89524" y="-90.12793"/>
        <ID1 xsi:type="node">247</ID1>
        <ID2 xsi:type="node">248</ID2>
    </child>
    <child ID="251" label="Runtime Serial Number Input" layerID="238"
        created="1672716492519" x="-226.0" y="-264.128" width="191.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#C6E8FF</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd207f00010127ea692a8e9ddb12</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="252" layerID="238" created="1672716562083" x="-35.5"
        y="-242.64252" width="87.75" height="10.52475" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a1a6f4f13</URIString>
        <point1 x="-35.0" y="-242.14252"/>
        <point2 x="51.75" y="-232.61777"/>
        <ID1 xsi:type="node">251</ID1>
        <ID2 xsi:type="node">247</ID2>
    </child>
    <child ID="253" layerID="238" created="1672716564008" x="-35.5"
        y="-225.3675" width="87.75" height="4.9219666" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="0"
        arrowState="2" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a07b8a3e1</URIString>
        <point1 x="-35.0" y="-220.94553"/>
        <point2 x="51.75" y="-224.8675"/>
        <ID1 xsi:type="node">241</ID1>
        <ID2 xsi:type="node">247</ID2>
    </child>
    <child ID="256" label="Runtime Session Loop Count" layerID="238"
        created="1672716836437" x="-213.0" y="95.87201" width="191.0"
        height="23.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#C6E8FF</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a21f91e25</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="257" label="Runtime Slot ID" layerID="238"
        created="1672716877623" x="-213.0" y="23.87201" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#C6E8FF</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a0243699c</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="258" label="Runtime Pass/Fail Status" layerID="238"
        created="1672716912434" x="-213.0" y="59.87201" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#C6E8FF</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a0e6a9f20</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="261" label="FixtureID" layerID="238"
        created="1672717012732" x="-213.0" y="-12.127991" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#9DDB53</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b5cd217f00010127ea692a2cf3a2e3</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="263" layerID="238" created="1672717153061" x="-36.25"
        y="-68.04816" width="70.0" height="28.95908" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="1"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883087f00010127ea692ab9bfe52f</URIString>
        <point1 x="33.25" y="-39.589077"/>
        <point2 x="-35.75" y="-67.54816"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">240</ID2>
        <ctrlPoint0 x="-2.25" y="-65.62799" xsi:type="point"/>
    </child>
    <child ID="264" layerID="238" created="1672717155079" x="-36.25"
        y="-35.02902" width="70.0" height="16.213268" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883097f00010127ea692ad6c83459</URIString>
        <point1 x="33.25" y="-19.31575"/>
        <point2 x="-35.75" y="-34.344326"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">242</ID2>
        <ctrlPoint0 x="-13.109391" y="-39.988594" xsi:type="point"/>
        <ctrlPoint1 x="-1.3262739" y="-33.457306" xsi:type="point"/>
    </child>
    <child ID="265" layerID="238" created="1672717157483" x="-36.25"
        y="-7.3039527" width="70.0" height="8.7136135" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883097f00010127ea692ae21e3d84</URIString>
        <point1 x="33.25" y="-3.082069"/>
        <point2 x="-35.75" y="0.9096607"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">261</ID2>
        <ctrlPoint0 x="-16.09346" y="-13.723513" xsi:type="point"/>
        <ctrlPoint1 x="23.174595" y="1.9320076" xsi:type="point"/>
    </child>
    <child ID="266" layerID="238" created="1672717159150" x="-36.25"
        y="12.39431" width="70.0" height="19.636354" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883097f00010127ea692aa717124d</URIString>
        <point1 x="33.25" y="12.89431"/>
        <point2 x="-35.75" y="31.530664"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">257</ID2>
        <ctrlPoint0 x="-15.166812" y="13.424698" xsi:type="point"/>
        <ctrlPoint1 x="18.849947" y="29.164095" xsi:type="point"/>
    </child>
    <child ID="267" layerID="238" created="1672717161043" x="-36.25"
        y="29.924042" width="70.0" height="38.449203" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883097f00010127ea692ac91ea5d6</URIString>
        <point1 x="33.25" y="30.424042"/>
        <point2 x="-35.75" y="67.873245"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">258</ID2>
        <ctrlPoint0 x="-27.253906" y="46.131054" xsi:type="point"/>
        <ctrlPoint1 x="26.994225" y="65.39621" xsi:type="point"/>
    </child>
    <child ID="268" layerID="238" created="1672717163363" x="-22.5"
        y="46.428753" width="56.25" height="53.658962" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75b883097f00010127ea692aa01c0521</URIString>
        <point1 x="33.25" y="46.928753"/>
        <point2 x="-22.0" y="99.587715"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">256</ID2>
        <ctrlPoint0 x="-19.685127" y="73.0635" xsi:type="point"/>
        <ctrlPoint1 x="33.80788" y="95.03877" xsi:type="point"/>
    </child>
    <child ID="269"
        label="Measurement Record&#xa;********&#xa;DataInstanceID (fk)&#xa;&#xa;LoopCount&#xa;TestID&#xa;&#xa;&#xa;TimeIndex&#xa;&#xa;&#xa;&#xa;GroupName&#xa;Parameter&#xa;Value&#xa;"
        layerID="238" created="1672717374826" x="29.75" y="202.37201"
        width="146.0" height="248.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75bd188b7f00010127ea692ac9390a62</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="271" label="DataInstanceID&#xa;=&#xa;UUT Instance::ID"
        layerID="238" created="1672717523479" x="55.284607"
        y="113.87109" width="96.0" height="89.0" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="0"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75bd188b7f00010127ea692a7e1a24ae</URIString>
        <point1 x="103.42462" y="114.37109"/>
        <point2 x="103.14459" y="202.3711"/>
        <ID1 xsi:type="node">248</ID1>
        <ID2 xsi:type="node">269</ID2>
    </child>
    <child ID="272" label="Runtime Test ID (test#)" layerID="238"
        created="1672717925011" x="-260.875" y="293.872" width="177.25"
        height="23.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#C6E8FF</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75c644f17f00010127ea692ace2ce615</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="274" label="TestID" layerID="238" created="1672717950257"
        x="-84.125" y="275.18356" width="114.375" height="30.907776"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="2" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75c644f17f00010127ea692af94507e5</URIString>
        <point1 x="29.75" y="287.6193"/>
        <point2 x="-83.625" y="305.59134"/>
        <ID1 xsi:type="node">269</ID1>
        <ID2 xsi:type="node">272</ID2>
        <ctrlPoint0 x="-36.25" y="252.58258" xsi:type="point"/>
        <ctrlPoint1 x="23.376963" y="305.85614" xsi:type="point"/>
    </child>
    <child ID="276" label="Measurement Record&#xa;LoopCount"
        layerID="238" created="1672718035209" x="-116.40573"
        y="118.37201" width="146.65573" height="153.93323"
        strokeWidth="1.0" strokeStyle="4" autoSized="false"
        controlCount="2" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/75c644f17f00010127ea692a1686b468</URIString>
        <point1 x="29.75" y="271.80524"/>
        <point2 x="-111.703285" y="118.87201"/>
        <ID1 xsi:type="node">269</ID1>
        <ID2 xsi:type="node">256</ID2>
        <ctrlPoint0 x="-53.208855" y="209.79427" xsi:type="point"/>
        <ctrlPoint1 x="-65.888664" y="209.76292" xsi:type="point"/>
    </child>
    <child ID="289" label="SequenceTimer&#xa;::GetCurrentDelay()"
        layerID="238" created="1672745226304" x="-260.875" y="363.372"
        width="177.25" height="38.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/7764df3e7f00010127ea692a18dbe94e</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="291" label="TimeIndex&#xa;(seconds)" layerID="238"
        created="1672745244673" x="-84.125" y="332.82062"
        width="114.375" height="52.66986" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/7764df3e7f00010127ea692a4ac8b9bb</URIString>
        <point1 x="29.75" y="333.32062"/>
        <point2 x="-83.625" y="384.99048"/>
        <ID1 xsi:type="node">269</ID1>
        <ID2 xsi:type="node">289</ID2>
        <ctrlPoint0 x="-28.51373" y="338.86652" xsi:type="point"/>
        <ctrlPoint1 x="-4.687496" y="387.32275" xsi:type="point"/>
    </child>
    <child ID="292" label="iUcfTestExe&#xa; ::SaveMeasurement() "
        layerID="238" created="1672745419450" x="-260.875" y="440.372"
        width="177.25" height="38.0" strokeWidth="1.0" autoSized="false" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/7767fa717f00010127ea692a9da6dde0</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="293" label="GroupName&#xa;Paramenter&#xa;Value"
        layerID="238" created="1672745451227" x="-129.47453"
        y="406.57623" width="159.72453" height="42.0" strokeWidth="1.0"
        strokeStyle="4" autoSized="false" controlCount="2"
        arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/7767fa717f00010127ea692a0ef738f6</URIString>
        <point1 x="29.75" y="410.16553"/>
        <point2 x="-128.97453" y="440.372"/>
        <ID1 xsi:type="node">269</ID1>
        <ID2 xsi:type="node">292</ID2>
        <ctrlPoint0 x="-10.384765" y="456.2345" xsi:type="point"/>
        <ctrlPoint1 x="-38.060448" y="400.45633" xsi:type="point"/>
    </child>
    <child ID="295"
        label="iTestExec_1u&#xa; ::void SetStripChartTimerCallback "
        layerID="238" created="1672745842277" x="-612.25" y="366.372"
        width="227.0" height="38.0" strokeWidth="1.0" autoSized="true" xsi:type="node">
        <fillColor>#F2AE45</fillColor>
        <strokeColor>#776D6D</strokeColor>
        <textColor>#000000</textColor>
        <font>Arial-plain-12</font>
        <URIString>http://vue.tufts.edu/rdf/resource/776d1e717f00010127ea692a81e33d5a</URIString>
        <shape xsi:type="rectangle"/>
    </child>
    <child ID="296" label=" delay time " layerID="238"
        created="1672745869148" x="-385.75" y="376.75772"
        width="125.375" height="14.0" strokeWidth="1.0" strokeStyle="4"
        autoSized="false" controlCount="0" arrowState="1" xsi:type="link">
        <strokeColor>#404040</strokeColor>
        <textColor>#404040</textColor>
        <font>Arial-plain-11</font>
        <URIString>http://vue.tufts.edu/rdf/resource/776d1e717f00010127ea692a04963849</URIString>
        <point1 x="-260.875" y="383.1863"/>
        <point2 x="-385.25" y="384.32913"/>
        <ID1 xsi:type="node">289</ID1>
        <ID2 xsi:type="node">295</ID2>
    </child>
    <layer ID="1" label="Structure" created="1597706425809" x="0.0"
        y="0.0" width="1.4E-45" height="1.4E-45" hidden="true"
        strokeWidth="0.0" autoSized="false">
        <URIString>http://vue.tufts.edu/rdf/resource/fecaeb657f0001010028d976a4874e5c</URIString>
    </layer>
    <layer ID="20" label="Execution" created="1672079992904" x="0.0"
        y="0.0" width="1.4E-45" height="1.4E-45" hidden="true"
        strokeWidth="0.0" autoSized="false">
        <URIString>http://vue.tufts.edu/rdf/resource/504e0e627f0001016dbe2ddd0343f7ba</URIString>
    </layer>
    <layer ID="121" label="Config" created="1672197020379" x="0.0"
        y="0.0" width="1.4E-45" height="1.4E-45" hidden="true"
        strokeWidth="0.0" autoSized="false">
        <URIString>http://vue.tufts.edu/rdf/resource/56b76ec07f00010127ea692a886041b5</URIString>
    </layer>
    <layer ID="238" label="Measurement Database-1"
        created="1672715770090" x="0.0" y="0.0" width="1.4E-45"
        height="1.4E-45" strokeWidth="0.0" autoSized="false">
        <URIString>http://vue.tufts.edu/rdf/resource/75a20f097f00010127ea692a99f2a275</URIString>
    </layer>
    <userZoom>1.0</userZoom>
    <userOrigin x="-1133.25" y="-400.628"/>
    <presentationBackground>#202020</presentationBackground>
    <PathwayList currentPathway="0" revealerIndex="-1">
        <pathway ID="0" label="Untitled Pathway" created="1597706425790"
            x="0.0" y="0.0" width="1.4E-45" height="1.4E-45"
            strokeWidth="0.0" autoSized="false" currentIndex="0" open="true">
            <strokeColor>#B3993333</strokeColor>
            <textColor>#000000</textColor>
            <font>SansSerif-plain-14</font>
            <URIString>http://vue.tufts.edu/rdf/resource/fecaeb667f0001010028d976065e27a7</URIString>
            <masterSlide ID="2" created="1597706425832" x="0.0" y="0.0"
                width="800.0" height="600.0" locked="true"
                strokeWidth="0.0" autoSized="false">
                <fillColor>#000000</fillColor>
                <strokeColor>#404040</strokeColor>
                <textColor>#000000</textColor>
                <font>SansSerif-plain-14</font>
                <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6e7f0001010028d9761db534ec</URIString>
                <titleStyle ID="3" label="Header"
                    created="1597706425923" x="328.5" y="174.5"
                    width="143.0" height="51.0" strokeWidth="0.0"
                    autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#FFFFFF</textColor>
                    <font>Gill Sans-plain-36</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6f7f0001010028d976994feea6</URIString>
                    <shape xsi:type="rectangle"/>
                </titleStyle>
                <textStyle ID="4" label="Slide Text"
                    created="1597706425933" x="339.5" y="282.5"
                    width="121.0" height="35.0" strokeWidth="0.0"
                    autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#FFFFFF</textColor>
                    <font>Gill Sans-plain-22</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb6f7f0001010028d976f301151e</URIString>
                    <shape xsi:type="rectangle"/>
                </textStyle>
                <linkStyle ID="5" label="Links" created="1597706425936"
                    x="372.0" y="385.0" width="56.0" height="30.0"
                    strokeWidth="0.0" autoSized="true" isStyle="true" xsi:type="node">
                    <strokeColor>#404040</strokeColor>
                    <textColor>#B3BFE3</textColor>
                    <font>Gill Sans-plain-18</font>
                    <URIString>http://vue.tufts.edu/rdf/resource/fecaeb707f0001010028d976330b1bdb</URIString>
                    <shape xsi:type="rectangle"/>
                </linkStyle>
            </masterSlide>
        </pathway>
    </PathwayList>
    <date>2020-08-17</date>
    <modelVersion>6</modelVersion>
    <saveLocation>/home/dev/Desktop/Ucf Docs/DesignRef/Models</saveLocation>
    <saveFile>/home/dev/Desktop/Ucf Docs/DesignRef/Models/Database-1.vue</saveFile>
</LW-MAP>
