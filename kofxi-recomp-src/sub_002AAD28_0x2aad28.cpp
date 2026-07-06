#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAD28
// Address: 0x2aad28 - 0x2ab208
void sub_002AAD28_0x2aad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAD28_0x2aad28");
#endif

    switch (ctx->pc) {
        case 0x2aad28u: goto label_2aad28;
        case 0x2aad2cu: goto label_2aad2c;
        case 0x2aad30u: goto label_2aad30;
        case 0x2aad34u: goto label_2aad34;
        case 0x2aad38u: goto label_2aad38;
        case 0x2aad3cu: goto label_2aad3c;
        case 0x2aad40u: goto label_2aad40;
        case 0x2aad44u: goto label_2aad44;
        case 0x2aad48u: goto label_2aad48;
        case 0x2aad4cu: goto label_2aad4c;
        case 0x2aad50u: goto label_2aad50;
        case 0x2aad54u: goto label_2aad54;
        case 0x2aad58u: goto label_2aad58;
        case 0x2aad5cu: goto label_2aad5c;
        case 0x2aad60u: goto label_2aad60;
        case 0x2aad64u: goto label_2aad64;
        case 0x2aad68u: goto label_2aad68;
        case 0x2aad6cu: goto label_2aad6c;
        case 0x2aad70u: goto label_2aad70;
        case 0x2aad74u: goto label_2aad74;
        case 0x2aad78u: goto label_2aad78;
        case 0x2aad7cu: goto label_2aad7c;
        case 0x2aad80u: goto label_2aad80;
        case 0x2aad84u: goto label_2aad84;
        case 0x2aad88u: goto label_2aad88;
        case 0x2aad8cu: goto label_2aad8c;
        case 0x2aad90u: goto label_2aad90;
        case 0x2aad94u: goto label_2aad94;
        case 0x2aad98u: goto label_2aad98;
        case 0x2aad9cu: goto label_2aad9c;
        case 0x2aada0u: goto label_2aada0;
        case 0x2aada4u: goto label_2aada4;
        case 0x2aada8u: goto label_2aada8;
        case 0x2aadacu: goto label_2aadac;
        case 0x2aadb0u: goto label_2aadb0;
        case 0x2aadb4u: goto label_2aadb4;
        case 0x2aadb8u: goto label_2aadb8;
        case 0x2aadbcu: goto label_2aadbc;
        case 0x2aadc0u: goto label_2aadc0;
        case 0x2aadc4u: goto label_2aadc4;
        case 0x2aadc8u: goto label_2aadc8;
        case 0x2aadccu: goto label_2aadcc;
        case 0x2aadd0u: goto label_2aadd0;
        case 0x2aadd4u: goto label_2aadd4;
        case 0x2aadd8u: goto label_2aadd8;
        case 0x2aaddcu: goto label_2aaddc;
        case 0x2aade0u: goto label_2aade0;
        case 0x2aade4u: goto label_2aade4;
        case 0x2aade8u: goto label_2aade8;
        case 0x2aadecu: goto label_2aadec;
        case 0x2aadf0u: goto label_2aadf0;
        case 0x2aadf4u: goto label_2aadf4;
        case 0x2aadf8u: goto label_2aadf8;
        case 0x2aadfcu: goto label_2aadfc;
        case 0x2aae00u: goto label_2aae00;
        case 0x2aae04u: goto label_2aae04;
        case 0x2aae08u: goto label_2aae08;
        case 0x2aae0cu: goto label_2aae0c;
        case 0x2aae10u: goto label_2aae10;
        case 0x2aae14u: goto label_2aae14;
        case 0x2aae18u: goto label_2aae18;
        case 0x2aae1cu: goto label_2aae1c;
        case 0x2aae20u: goto label_2aae20;
        case 0x2aae24u: goto label_2aae24;
        case 0x2aae28u: goto label_2aae28;
        case 0x2aae2cu: goto label_2aae2c;
        case 0x2aae30u: goto label_2aae30;
        case 0x2aae34u: goto label_2aae34;
        case 0x2aae38u: goto label_2aae38;
        case 0x2aae3cu: goto label_2aae3c;
        case 0x2aae40u: goto label_2aae40;
        case 0x2aae44u: goto label_2aae44;
        case 0x2aae48u: goto label_2aae48;
        case 0x2aae4cu: goto label_2aae4c;
        case 0x2aae50u: goto label_2aae50;
        case 0x2aae54u: goto label_2aae54;
        case 0x2aae58u: goto label_2aae58;
        case 0x2aae5cu: goto label_2aae5c;
        case 0x2aae60u: goto label_2aae60;
        case 0x2aae64u: goto label_2aae64;
        case 0x2aae68u: goto label_2aae68;
        case 0x2aae6cu: goto label_2aae6c;
        case 0x2aae70u: goto label_2aae70;
        case 0x2aae74u: goto label_2aae74;
        case 0x2aae78u: goto label_2aae78;
        case 0x2aae7cu: goto label_2aae7c;
        case 0x2aae80u: goto label_2aae80;
        case 0x2aae84u: goto label_2aae84;
        case 0x2aae88u: goto label_2aae88;
        case 0x2aae8cu: goto label_2aae8c;
        case 0x2aae90u: goto label_2aae90;
        case 0x2aae94u: goto label_2aae94;
        case 0x2aae98u: goto label_2aae98;
        case 0x2aae9cu: goto label_2aae9c;
        case 0x2aaea0u: goto label_2aaea0;
        case 0x2aaea4u: goto label_2aaea4;
        case 0x2aaea8u: goto label_2aaea8;
        case 0x2aaeacu: goto label_2aaeac;
        case 0x2aaeb0u: goto label_2aaeb0;
        case 0x2aaeb4u: goto label_2aaeb4;
        case 0x2aaeb8u: goto label_2aaeb8;
        case 0x2aaebcu: goto label_2aaebc;
        case 0x2aaec0u: goto label_2aaec0;
        case 0x2aaec4u: goto label_2aaec4;
        case 0x2aaec8u: goto label_2aaec8;
        case 0x2aaeccu: goto label_2aaecc;
        case 0x2aaed0u: goto label_2aaed0;
        case 0x2aaed4u: goto label_2aaed4;
        case 0x2aaed8u: goto label_2aaed8;
        case 0x2aaedcu: goto label_2aaedc;
        case 0x2aaee0u: goto label_2aaee0;
        case 0x2aaee4u: goto label_2aaee4;
        case 0x2aaee8u: goto label_2aaee8;
        case 0x2aaeecu: goto label_2aaeec;
        case 0x2aaef0u: goto label_2aaef0;
        case 0x2aaef4u: goto label_2aaef4;
        case 0x2aaef8u: goto label_2aaef8;
        case 0x2aaefcu: goto label_2aaefc;
        case 0x2aaf00u: goto label_2aaf00;
        case 0x2aaf04u: goto label_2aaf04;
        case 0x2aaf08u: goto label_2aaf08;
        case 0x2aaf0cu: goto label_2aaf0c;
        case 0x2aaf10u: goto label_2aaf10;
        case 0x2aaf14u: goto label_2aaf14;
        case 0x2aaf18u: goto label_2aaf18;
        case 0x2aaf1cu: goto label_2aaf1c;
        case 0x2aaf20u: goto label_2aaf20;
        case 0x2aaf24u: goto label_2aaf24;
        case 0x2aaf28u: goto label_2aaf28;
        case 0x2aaf2cu: goto label_2aaf2c;
        case 0x2aaf30u: goto label_2aaf30;
        case 0x2aaf34u: goto label_2aaf34;
        case 0x2aaf38u: goto label_2aaf38;
        case 0x2aaf3cu: goto label_2aaf3c;
        case 0x2aaf40u: goto label_2aaf40;
        case 0x2aaf44u: goto label_2aaf44;
        case 0x2aaf48u: goto label_2aaf48;
        case 0x2aaf4cu: goto label_2aaf4c;
        case 0x2aaf50u: goto label_2aaf50;
        case 0x2aaf54u: goto label_2aaf54;
        case 0x2aaf58u: goto label_2aaf58;
        case 0x2aaf5cu: goto label_2aaf5c;
        case 0x2aaf60u: goto label_2aaf60;
        case 0x2aaf64u: goto label_2aaf64;
        case 0x2aaf68u: goto label_2aaf68;
        case 0x2aaf6cu: goto label_2aaf6c;
        case 0x2aaf70u: goto label_2aaf70;
        case 0x2aaf74u: goto label_2aaf74;
        case 0x2aaf78u: goto label_2aaf78;
        case 0x2aaf7cu: goto label_2aaf7c;
        case 0x2aaf80u: goto label_2aaf80;
        case 0x2aaf84u: goto label_2aaf84;
        case 0x2aaf88u: goto label_2aaf88;
        case 0x2aaf8cu: goto label_2aaf8c;
        case 0x2aaf90u: goto label_2aaf90;
        case 0x2aaf94u: goto label_2aaf94;
        case 0x2aaf98u: goto label_2aaf98;
        case 0x2aaf9cu: goto label_2aaf9c;
        case 0x2aafa0u: goto label_2aafa0;
        case 0x2aafa4u: goto label_2aafa4;
        case 0x2aafa8u: goto label_2aafa8;
        case 0x2aafacu: goto label_2aafac;
        case 0x2aafb0u: goto label_2aafb0;
        case 0x2aafb4u: goto label_2aafb4;
        case 0x2aafb8u: goto label_2aafb8;
        case 0x2aafbcu: goto label_2aafbc;
        case 0x2aafc0u: goto label_2aafc0;
        case 0x2aafc4u: goto label_2aafc4;
        case 0x2aafc8u: goto label_2aafc8;
        case 0x2aafccu: goto label_2aafcc;
        case 0x2aafd0u: goto label_2aafd0;
        case 0x2aafd4u: goto label_2aafd4;
        case 0x2aafd8u: goto label_2aafd8;
        case 0x2aafdcu: goto label_2aafdc;
        case 0x2aafe0u: goto label_2aafe0;
        case 0x2aafe4u: goto label_2aafe4;
        case 0x2aafe8u: goto label_2aafe8;
        case 0x2aafecu: goto label_2aafec;
        case 0x2aaff0u: goto label_2aaff0;
        case 0x2aaff4u: goto label_2aaff4;
        case 0x2aaff8u: goto label_2aaff8;
        case 0x2aaffcu: goto label_2aaffc;
        case 0x2ab000u: goto label_2ab000;
        case 0x2ab004u: goto label_2ab004;
        case 0x2ab008u: goto label_2ab008;
        case 0x2ab00cu: goto label_2ab00c;
        case 0x2ab010u: goto label_2ab010;
        case 0x2ab014u: goto label_2ab014;
        case 0x2ab018u: goto label_2ab018;
        case 0x2ab01cu: goto label_2ab01c;
        case 0x2ab020u: goto label_2ab020;
        case 0x2ab024u: goto label_2ab024;
        case 0x2ab028u: goto label_2ab028;
        case 0x2ab02cu: goto label_2ab02c;
        case 0x2ab030u: goto label_2ab030;
        case 0x2ab034u: goto label_2ab034;
        case 0x2ab038u: goto label_2ab038;
        case 0x2ab03cu: goto label_2ab03c;
        case 0x2ab040u: goto label_2ab040;
        case 0x2ab044u: goto label_2ab044;
        case 0x2ab048u: goto label_2ab048;
        case 0x2ab04cu: goto label_2ab04c;
        case 0x2ab050u: goto label_2ab050;
        case 0x2ab054u: goto label_2ab054;
        case 0x2ab058u: goto label_2ab058;
        case 0x2ab05cu: goto label_2ab05c;
        case 0x2ab060u: goto label_2ab060;
        case 0x2ab064u: goto label_2ab064;
        case 0x2ab068u: goto label_2ab068;
        case 0x2ab06cu: goto label_2ab06c;
        case 0x2ab070u: goto label_2ab070;
        case 0x2ab074u: goto label_2ab074;
        case 0x2ab078u: goto label_2ab078;
        case 0x2ab07cu: goto label_2ab07c;
        case 0x2ab080u: goto label_2ab080;
        case 0x2ab084u: goto label_2ab084;
        case 0x2ab088u: goto label_2ab088;
        case 0x2ab08cu: goto label_2ab08c;
        case 0x2ab090u: goto label_2ab090;
        case 0x2ab094u: goto label_2ab094;
        case 0x2ab098u: goto label_2ab098;
        case 0x2ab09cu: goto label_2ab09c;
        case 0x2ab0a0u: goto label_2ab0a0;
        case 0x2ab0a4u: goto label_2ab0a4;
        case 0x2ab0a8u: goto label_2ab0a8;
        case 0x2ab0acu: goto label_2ab0ac;
        case 0x2ab0b0u: goto label_2ab0b0;
        case 0x2ab0b4u: goto label_2ab0b4;
        case 0x2ab0b8u: goto label_2ab0b8;
        case 0x2ab0bcu: goto label_2ab0bc;
        case 0x2ab0c0u: goto label_2ab0c0;
        case 0x2ab0c4u: goto label_2ab0c4;
        case 0x2ab0c8u: goto label_2ab0c8;
        case 0x2ab0ccu: goto label_2ab0cc;
        case 0x2ab0d0u: goto label_2ab0d0;
        case 0x2ab0d4u: goto label_2ab0d4;
        case 0x2ab0d8u: goto label_2ab0d8;
        case 0x2ab0dcu: goto label_2ab0dc;
        case 0x2ab0e0u: goto label_2ab0e0;
        case 0x2ab0e4u: goto label_2ab0e4;
        case 0x2ab0e8u: goto label_2ab0e8;
        case 0x2ab0ecu: goto label_2ab0ec;
        case 0x2ab0f0u: goto label_2ab0f0;
        case 0x2ab0f4u: goto label_2ab0f4;
        case 0x2ab0f8u: goto label_2ab0f8;
        case 0x2ab0fcu: goto label_2ab0fc;
        case 0x2ab100u: goto label_2ab100;
        case 0x2ab104u: goto label_2ab104;
        case 0x2ab108u: goto label_2ab108;
        case 0x2ab10cu: goto label_2ab10c;
        case 0x2ab110u: goto label_2ab110;
        case 0x2ab114u: goto label_2ab114;
        case 0x2ab118u: goto label_2ab118;
        case 0x2ab11cu: goto label_2ab11c;
        case 0x2ab120u: goto label_2ab120;
        case 0x2ab124u: goto label_2ab124;
        case 0x2ab128u: goto label_2ab128;
        case 0x2ab12cu: goto label_2ab12c;
        case 0x2ab130u: goto label_2ab130;
        case 0x2ab134u: goto label_2ab134;
        case 0x2ab138u: goto label_2ab138;
        case 0x2ab13cu: goto label_2ab13c;
        case 0x2ab140u: goto label_2ab140;
        case 0x2ab144u: goto label_2ab144;
        case 0x2ab148u: goto label_2ab148;
        case 0x2ab14cu: goto label_2ab14c;
        case 0x2ab150u: goto label_2ab150;
        case 0x2ab154u: goto label_2ab154;
        case 0x2ab158u: goto label_2ab158;
        case 0x2ab15cu: goto label_2ab15c;
        case 0x2ab160u: goto label_2ab160;
        case 0x2ab164u: goto label_2ab164;
        case 0x2ab168u: goto label_2ab168;
        case 0x2ab16cu: goto label_2ab16c;
        case 0x2ab170u: goto label_2ab170;
        case 0x2ab174u: goto label_2ab174;
        case 0x2ab178u: goto label_2ab178;
        case 0x2ab17cu: goto label_2ab17c;
        case 0x2ab180u: goto label_2ab180;
        case 0x2ab184u: goto label_2ab184;
        case 0x2ab188u: goto label_2ab188;
        case 0x2ab18cu: goto label_2ab18c;
        case 0x2ab190u: goto label_2ab190;
        case 0x2ab194u: goto label_2ab194;
        case 0x2ab198u: goto label_2ab198;
        case 0x2ab19cu: goto label_2ab19c;
        case 0x2ab1a0u: goto label_2ab1a0;
        case 0x2ab1a4u: goto label_2ab1a4;
        case 0x2ab1a8u: goto label_2ab1a8;
        case 0x2ab1acu: goto label_2ab1ac;
        case 0x2ab1b0u: goto label_2ab1b0;
        case 0x2ab1b4u: goto label_2ab1b4;
        case 0x2ab1b8u: goto label_2ab1b8;
        case 0x2ab1bcu: goto label_2ab1bc;
        case 0x2ab1c0u: goto label_2ab1c0;
        case 0x2ab1c4u: goto label_2ab1c4;
        case 0x2ab1c8u: goto label_2ab1c8;
        case 0x2ab1ccu: goto label_2ab1cc;
        case 0x2ab1d0u: goto label_2ab1d0;
        case 0x2ab1d4u: goto label_2ab1d4;
        case 0x2ab1d8u: goto label_2ab1d8;
        case 0x2ab1dcu: goto label_2ab1dc;
        case 0x2ab1e0u: goto label_2ab1e0;
        case 0x2ab1e4u: goto label_2ab1e4;
        case 0x2ab1e8u: goto label_2ab1e8;
        case 0x2ab1ecu: goto label_2ab1ec;
        case 0x2ab1f0u: goto label_2ab1f0;
        case 0x2ab1f4u: goto label_2ab1f4;
        case 0x2ab1f8u: goto label_2ab1f8;
        case 0x2ab1fcu: goto label_2ab1fc;
        case 0x2ab200u: goto label_2ab200;
        case 0x2ab204u: goto label_2ab204;
        default: break;
    }

    ctx->pc = 0x2aad28u;

label_2aad28:
    // 0x2aad28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2aad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2aad2c:
    // 0x2aad2c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2aad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2aad30:
    // 0x2aad30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2aad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2aad34:
    // 0x2aad34: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2aad34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aad38:
    // 0x2aad38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2aad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2aad3c:
    // 0x2aad3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2aad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2aad40:
    // 0x2aad40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aad40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aad44:
    // 0x2aad44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2aad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2aad48:
    // 0x2aad48: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2aad4c:
    // 0x2aad4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2aad50:
    // 0x2aad50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2aad54:
    // 0x2aad54: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2aad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2aad58:
    // 0x2aad58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2aad5c:
    if (ctx->pc == 0x2AAD5Cu) {
        ctx->pc = 0x2AAD5Cu;
            // 0x2aad5c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD60u;
        goto label_2aad60;
    }
    ctx->pc = 0x2AAD58u;
    {
        const bool branch_taken_0x2aad58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD58u;
            // 0x2aad5c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad58) {
            ctx->pc = 0x2AAD6Cu;
            goto label_2aad6c;
        }
    }
    ctx->pc = 0x2AAD60u;
label_2aad60:
    // 0x2aad60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2aad60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aad64:
    // 0x2aad64: 0x10000007  b           . + 4 + (0x7 << 2)
label_2aad68:
    if (ctx->pc == 0x2AAD68u) {
        ctx->pc = 0x2AAD68u;
            // 0x2aad68: 0x8e5600c8  lw          $s6, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->pc = 0x2AAD6Cu;
        goto label_2aad6c;
    }
    ctx->pc = 0x2AAD64u;
    {
        const bool branch_taken_0x2aad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD64u;
            // 0x2aad68: 0x8e5600c8  lw          $s6, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad64) {
            ctx->pc = 0x2AAD84u;
            goto label_2aad84;
        }
    }
    ctx->pc = 0x2AAD6Cu;
label_2aad6c:
    // 0x2aad6c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x2aad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_2aad70:
    // 0x2aad70: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2aad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2aad74:
    // 0x2aad74: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2aad78:
    if (ctx->pc == 0x2AAD78u) {
        ctx->pc = 0x2AAD78u;
            // 0x2aad78: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->pc = 0x2AAD7Cu;
        goto label_2aad7c;
    }
    ctx->pc = 0x2AAD74u;
    {
        const bool branch_taken_0x2aad74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aad74) {
            ctx->pc = 0x2AAD78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD74u;
            // 0x2aad78: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAD88u;
            goto label_2aad88;
        }
    }
    ctx->pc = 0x2AAD7Cu;
label_2aad7c:
    // 0x2aad7c: 0x8c560084  lw          $s6, 0x84($v0)
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2aad80:
    // 0x2aad80: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2aad80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2aad84:
    // 0x2aad84: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x2aad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2aad88:
    // 0x2aad88: 0x24041020  addiu       $a0, $zero, 0x1020
    ctx->pc = 0x2aad88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
label_2aad8c:
    // 0x2aad8c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2aad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2aad90:
    // 0x2aad90: 0x14640053  bne         $v1, $a0, . + 4 + (0x53 << 2)
label_2aad94:
    if (ctx->pc == 0x2AAD94u) {
        ctx->pc = 0x2AAD94u;
            // 0x2aad94: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2AAD98u;
        goto label_2aad98;
    }
    ctx->pc = 0x2AAD90u;
    {
        const bool branch_taken_0x2aad90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AAD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD90u;
            // 0x2aad94: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aad90) {
            ctx->pc = 0x2AAEE0u;
            goto label_2aaee0;
        }
    }
    ctx->pc = 0x2AAD98u;
label_2aad98:
    // 0x2aad98: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2aad98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2aad9c:
    // 0x2aad9c: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x2aad9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2aada0:
    // 0x2aada0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aada4:
    // 0x2aada4: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x2aada4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2aada8:
    // 0x2aada8: 0xc0ac856  jal         func_2B2158
label_2aadac:
    if (ctx->pc == 0x2AADACu) {
        ctx->pc = 0x2AADACu;
            // 0x2aadac: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x2AADB0u;
        goto label_2aadb0;
    }
    ctx->pc = 0x2AADA8u;
    SET_GPR_U32(ctx, 31, 0x2AADB0u);
    ctx->pc = 0x2AADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADA8u;
            // 0x2aadac: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (runtime->hasFunction(0x2B2158u)) {
        auto targetFn = runtime->lookupFunction(0x2B2158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADB0u; }
        if (ctx->pc != 0x2AADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2158_0x2b2158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADB0u; }
        if (ctx->pc != 0x2AADB0u) { return; }
    }
    ctx->pc = 0x2AADB0u;
label_2aadb0:
    // 0x2aadb0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2aadb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2aadb4:
    // 0x2aadb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aadb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aadb8:
    // 0x2aadb8: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2aadb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2aadbc:
    // 0x2aadbc: 0x230802a  slt         $s0, $s1, $s0
    ctx->pc = 0x2aadbcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2aadc0:
    // 0x2aadc0: 0x1600005f  bnez        $s0, . + 4 + (0x5F << 2)
label_2aadc4:
    if (ctx->pc == 0x2AADC4u) {
        ctx->pc = 0x2AADC4u;
            // 0x2aadc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AADC8u;
        goto label_2aadc8;
    }
    ctx->pc = 0x2AADC0u;
    {
        const bool branch_taken_0x2aadc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADC0u;
            // 0x2aadc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadc0) {
            ctx->pc = 0x2AAF40u;
            goto label_2aaf40;
        }
    }
    ctx->pc = 0x2AADC8u;
label_2aadc8:
    // 0x2aadc8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2aadc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aadcc:
    // 0x2aadcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2aadccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2aadd0:
    // 0x2aadd0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_2aadd4:
    if (ctx->pc == 0x2AADD4u) {
        ctx->pc = 0x2AADD4u;
            // 0x2aadd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2AADD8u;
        goto label_2aadd8;
    }
    ctx->pc = 0x2AADD0u;
    {
        const bool branch_taken_0x2aadd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADD0u;
            // 0x2aadd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aadd0) {
            ctx->pc = 0x2AAE28u;
            goto label_2aae28;
        }
    }
    ctx->pc = 0x2AADD8u;
label_2aadd8:
    // 0x2aadd8: 0x9262ffff  lbu         $v0, -0x1($s3)
    ctx->pc = 0x2aadd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
label_2aaddc:
    // 0x2aaddc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2aade0:
    if (ctx->pc == 0x2AADE0u) {
        ctx->pc = 0x2AADE0u;
            // 0x2aade0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2AADE4u;
        goto label_2aade4;
    }
    ctx->pc = 0x2AADDCu;
    {
        const bool branch_taken_0x2aaddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaddc) {
            ctx->pc = 0x2AADE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADDCu;
            // 0x2aade0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAE0Cu;
            goto label_2aae0c;
        }
    }
    ctx->pc = 0x2AADE4u;
label_2aade4:
    // 0x2aade4: 0xc0acbea  jal         func_2B2FA8
label_2aade8:
    if (ctx->pc == 0x2AADE8u) {
        ctx->pc = 0x2AADE8u;
            // 0x2aade8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AADECu;
        goto label_2aadec;
    }
    ctx->pc = 0x2AADE4u;
    SET_GPR_U32(ctx, 31, 0x2AADECu);
    ctx->pc = 0x2AADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADE4u;
            // 0x2aade8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADECu; }
        if (ctx->pc != 0x2AADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AADECu; }
        if (ctx->pc != 0x2AADECu) { return; }
    }
    ctx->pc = 0x2AADECu;
label_2aadec:
    // 0x2aadec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aadecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aadf0:
    // 0x2aadf0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2aadf4:
    // 0x2aadf4: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2aadf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_2aadf8:
    // 0x2aadf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aadf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aadfc:
    // 0x2aadfc: 0xc0a5648  jal         func_295920
label_2aae00:
    if (ctx->pc == 0x2AAE00u) {
        ctx->pc = 0x2AAE00u;
            // 0x2aae00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE04u;
        goto label_2aae04;
    }
    ctx->pc = 0x2AADFCu;
    SET_GPR_U32(ctx, 31, 0x2AAE04u);
    ctx->pc = 0x2AAE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AADFCu;
            // 0x2aae00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE04u; }
        if (ctx->pc != 0x2AAE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE04u; }
        if (ctx->pc != 0x2AAE04u) { return; }
    }
    ctx->pc = 0x2AAE04u;
label_2aae04:
    // 0x2aae04: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_2aae08:
    if (ctx->pc == 0x2AAE08u) {
        ctx->pc = 0x2AAE08u;
            // 0x2aae08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AAE0Cu;
        goto label_2aae0c;
    }
    ctx->pc = 0x2AAE04u;
    {
        const bool branch_taken_0x2aae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE04u;
            // 0x2aae08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae04) {
            ctx->pc = 0x2AB1DCu;
            goto label_2ab1dc;
        }
    }
    ctx->pc = 0x2AAE0Cu;
label_2aae0c:
    // 0x2aae0c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2aae0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2aae10:
    // 0x2aae10: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2aae10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2aae14:
    // 0x2aae14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aae14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aae18:
    // 0x2aae18: 0xc0a5648  jal         func_295920
label_2aae1c:
    if (ctx->pc == 0x2AAE1Cu) {
        ctx->pc = 0x2AAE1Cu;
            // 0x2aae1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE20u;
        goto label_2aae20;
    }
    ctx->pc = 0x2AAE18u;
    SET_GPR_U32(ctx, 31, 0x2AAE20u);
    ctx->pc = 0x2AAE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE18u;
            // 0x2aae1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE20u; }
        if (ctx->pc != 0x2AAE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAE20u; }
        if (ctx->pc != 0x2AAE20u) { return; }
    }
    ctx->pc = 0x2AAE20u;
label_2aae20:
    // 0x2aae20: 0x100000ee  b           . + 4 + (0xEE << 2)
label_2aae24:
    if (ctx->pc == 0x2AAE24u) {
        ctx->pc = 0x2AAE24u;
            // 0x2aae24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AAE28u;
        goto label_2aae28;
    }
    ctx->pc = 0x2AAE20u;
    {
        const bool branch_taken_0x2aae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE20u;
            // 0x2aae24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae20) {
            ctx->pc = 0x2AB1DCu;
            goto label_2ab1dc;
        }
    }
    ctx->pc = 0x2AAE28u;
label_2aae28:
    // 0x2aae28: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2aae28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aae2c:
    // 0x2aae2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2aae2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2aae30:
    // 0x2aae30: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x2aae30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2aae34:
    // 0x2aae34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aae34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2aae38:
    // 0x2aae38: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2aae38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_2aae3c:
    // 0x2aae3c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2aae3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aae40:
    // 0x2aae40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2aae40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2aae44:
    // 0x2aae44: 0xac8300ec  sw          $v1, 0xEC($a0)
    ctx->pc = 0x2aae44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
label_2aae48:
    // 0x2aae48: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2aae48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aae4c:
    // 0x2aae4c: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x2aae4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2aae50:
    // 0x2aae50: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2aae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2aae54:
    // 0x2aae54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2aae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2aae58:
    // 0x2aae58: 0x448825  or          $s1, $v0, $a0
    ctx->pc = 0x2aae58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2aae5c:
    // 0x2aae5c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2aae5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2aae60:
    // 0x2aae60: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2aae64:
    if (ctx->pc == 0x2AAE64u) {
        ctx->pc = 0x2AAE64u;
            // 0x2aae64: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x2AAE68u;
        goto label_2aae68;
    }
    ctx->pc = 0x2AAE60u;
    {
        const bool branch_taken_0x2aae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAE60u;
            // 0x2aae64: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aae60) {
            ctx->pc = 0x2AAE6Cu;
            goto label_2aae6c;
        }
    }
    ctx->pc = 0x2AAE68u;
label_2aae68:
    // 0x2aae68: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2aae68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2aae6c:
    // 0x2aae6c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2aae6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aae70:
    // 0x2aae70: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x2aae70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2aae74:
    // 0x2aae74: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x2aae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2aae78:
    // 0x2aae78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2aae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2aae7c:
    // 0x2aae7c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2aae7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2aae80:
    // 0x2aae80: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2aae80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2aae84:
    // 0x2aae84: 0xac8500f0  sw          $a1, 0xF0($a0)
    ctx->pc = 0x2aae84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 5));
label_2aae88:
    // 0x2aae88: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2aae88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aae8c:
    // 0x2aae8c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x2aae8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2aae90:
    // 0x2aae90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2aae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2aae94:
    // 0x2aae94: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2aae98:
    // 0x2aae98: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2aae98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2aae9c:
    // 0x2aae9c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x2aae9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_2aaea0:
    // 0x2aaea0: 0xac8500f4  sw          $a1, 0xF4($a0)
    ctx->pc = 0x2aaea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
label_2aaea4:
    // 0x2aaea4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2aaea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2aaea8:
    // 0x2aaea8: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x2aaea8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2aaeac:
    // 0x2aaeac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2aaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2aaeb0:
    // 0x2aaeb0: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x2aaeb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2aaeb4:
    // 0x2aaeb4: 0x2ca30011  sltiu       $v1, $a1, 0x11
    ctx->pc = 0x2aaeb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_2aaeb8:
    // 0x2aaeb8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_2aaebc:
    if (ctx->pc == 0x2AAEBCu) {
        ctx->pc = 0x2AAEBCu;
            // 0x2aaebc: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x2AAEC0u;
        goto label_2aaec0;
    }
    ctx->pc = 0x2AAEB8u;
    {
        const bool branch_taken_0x2aaeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaeb8) {
            ctx->pc = 0x2AAEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAEB8u;
            // 0x2aaebc: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAED0u;
            goto label_2aaed0;
        }
    }
    ctx->pc = 0x2AAEC0u;
label_2aaec0:
    // 0x2aaec0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aaec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aaec4:
    // 0x2aaec4: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2aaec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2aaec8:
    // 0x2aaec8: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2aaecc:
    if (ctx->pc == 0x2AAECCu) {
        ctx->pc = 0x2AAECCu;
            // 0x2aaecc: 0x24060456  addiu       $a2, $zero, 0x456 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1110));
        ctx->pc = 0x2AAED0u;
        goto label_2aaed0;
    }
    ctx->pc = 0x2AAEC8u;
    {
        const bool branch_taken_0x2aaec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAEC8u;
            // 0x2aaecc: 0x24060456  addiu       $a2, $zero, 0x456 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaec8) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AAED0u;
label_2aaed0:
    // 0x2aaed0: 0x24031021  addiu       $v1, $zero, 0x1021
    ctx->pc = 0x2aaed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4129));
label_2aaed4:
    // 0x2aaed4: 0xac4500e8  sw          $a1, 0xE8($v0)
    ctx->pc = 0x2aaed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 5));
label_2aaed8:
    // 0x2aaed8: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x2aaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_2aaedc:
    // 0x2aaedc: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2aaedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_2aaee0:
    // 0x2aaee0: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2aaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2aaee4:
    // 0x2aaee4: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2aaee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2aaee8:
    // 0x2aaee8: 0x8c4400f4  lw          $a0, 0xF4($v0)
    ctx->pc = 0x2aaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2aaeec:
    // 0x2aaeec: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2aaeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2aaef0:
    // 0x2aaef0: 0x8c4600e8  lw          $a2, 0xE8($v0)
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_2aaef4:
    // 0x2aaef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2aaef8:
    // 0x2aaef8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2aaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2aaefc:
    // 0x2aaefc: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2aaefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_2aaf00:
    // 0x2aaf00: 0x658023  subu        $s0, $v1, $a1
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2aaf04:
    // 0x2aaf04: 0xc0a32e0  jal         func_28CB80
label_2aaf08:
    if (ctx->pc == 0x2AAF08u) {
        ctx->pc = 0x2AAF08u;
            // 0x2aaf08: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x2AAF0Cu;
        goto label_2aaf0c;
    }
    ctx->pc = 0x2AAF04u;
    SET_GPR_U32(ctx, 31, 0x2AAF0Cu);
    ctx->pc = 0x2AAF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF04u;
            // 0x2aaf08: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF0Cu; }
        if (ctx->pc != 0x2AAF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF0Cu; }
        if (ctx->pc != 0x2AAF0Cu) { return; }
    }
    ctx->pc = 0x2AAF0Cu;
label_2aaf0c:
    // 0x2aaf0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2aaf10:
    if (ctx->pc == 0x2AAF10u) {
        ctx->pc = 0x2AAF10u;
            // 0x2aaf10: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->pc = 0x2AAF14u;
        goto label_2aaf14;
    }
    ctx->pc = 0x2AAF0Cu;
    {
        const bool branch_taken_0x2aaf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf0c) {
            ctx->pc = 0x2AAF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF0Cu;
            // 0x2aaf10: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF1Cu;
            goto label_2aaf1c;
        }
    }
    ctx->pc = 0x2AAF14u;
label_2aaf14:
    // 0x2aaf14: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_2aaf18:
    if (ctx->pc == 0x2AAF18u) {
        ctx->pc = 0x2AAF18u;
            // 0x2aaf18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AAF1Cu;
        goto label_2aaf1c;
    }
    ctx->pc = 0x2AAF14u;
    {
        const bool branch_taken_0x2aaf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF14u;
            // 0x2aaf18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf14) {
            ctx->pc = 0x2AB1DCu;
            goto label_2ab1dc;
        }
    }
    ctx->pc = 0x2AAF1Cu;
label_2aaf1c:
    // 0x2aaf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aaf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf20:
    // 0x2aaf20: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x2aaf20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2aaf24:
    // 0x2aaf24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aaf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf28:
    // 0x2aaf28: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x2aaf28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2aaf2c:
    // 0x2aaf2c: 0xc0ac856  jal         func_2B2158
label_2aaf30:
    if (ctx->pc == 0x2AAF30u) {
        ctx->pc = 0x2AAF30u;
            // 0x2aaf30: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->pc = 0x2AAF34u;
        goto label_2aaf34;
    }
    ctx->pc = 0x2AAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF34u);
    ctx->pc = 0x2AAF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF2Cu;
            // 0x2aaf30: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (runtime->hasFunction(0x2B2158u)) {
        auto targetFn = runtime->lookupFunction(0x2B2158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF34u; }
        if (ctx->pc != 0x2AAF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2158_0x2b2158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF34u; }
        if (ctx->pc != 0x2AAF34u) { return; }
    }
    ctx->pc = 0x2AAF34u;
label_2aaf34:
    // 0x2aaf34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aaf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf38:
    // 0x2aaf38: 0x12300006  beq         $s1, $s0, . + 4 + (0x6 << 2)
label_2aaf3c:
    if (ctx->pc == 0x2AAF3Cu) {
        ctx->pc = 0x2AAF3Cu;
            // 0x2aaf3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF40u;
        goto label_2aaf40;
    }
    ctx->pc = 0x2AAF38u;
    {
        const bool branch_taken_0x2aaf38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2AAF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF38u;
            // 0x2aaf3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf38) {
            ctx->pc = 0x2AAF54u;
            goto label_2aaf54;
        }
    }
    ctx->pc = 0x2AAF40u;
label_2aaf40:
    // 0x2aaf40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2aaf40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf44:
    // 0x2aaf44: 0xc0acb86  jal         func_2B2E18
label_2aaf48:
    if (ctx->pc == 0x2AAF48u) {
        ctx->pc = 0x2AAF48u;
            // 0x2aaf48: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->pc = 0x2AAF4Cu;
        goto label_2aaf4c;
    }
    ctx->pc = 0x2AAF44u;
    SET_GPR_U32(ctx, 31, 0x2AAF4Cu);
    ctx->pc = 0x2AAF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF44u;
            // 0x2aaf48: 0x2405006d  addiu       $a1, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E18u;
    if (runtime->hasFunction(0x2B2E18u)) {
        auto targetFn = runtime->lookupFunction(0x2B2E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF4Cu; }
        if (ctx->pc != 0x2AAF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2E18_0x2b2e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF4Cu; }
        if (ctx->pc != 0x2AAF4Cu) { return; }
    }
    ctx->pc = 0x2AAF4Cu;
label_2aaf4c:
    // 0x2aaf4c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2aaf50:
    if (ctx->pc == 0x2AAF50u) {
        ctx->pc = 0x2AAF50u;
            // 0x2aaf50: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2AAF54u;
        goto label_2aaf54;
    }
    ctx->pc = 0x2AAF4Cu;
    {
        const bool branch_taken_0x2aaf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF4Cu;
            // 0x2aaf50: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf4c) {
            ctx->pc = 0x2AB1E0u;
            goto label_2ab1e0;
        }
    }
    ctx->pc = 0x2AAF54u;
label_2aaf54:
    // 0x2aaf54: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2aaf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_2aaf58:
    // 0x2aaf58: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2aaf5c:
    if (ctx->pc == 0x2AAF5Cu) {
        ctx->pc = 0x2AAF5Cu;
            // 0x2aaf5c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF60u;
        goto label_2aaf60;
    }
    ctx->pc = 0x2AAF58u;
    {
        const bool branch_taken_0x2aaf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF58u;
            // 0x2aaf5c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf58) {
            ctx->pc = 0x2AB00Cu;
            goto label_2ab00c;
        }
    }
    ctx->pc = 0x2AAF60u;
label_2aaf60:
    // 0x2aaf60: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2aaf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2aaf64:
    // 0x2aaf64: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_2aaf68:
    // 0x2aaf68: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2aaf6c:
    if (ctx->pc == 0x2AAF6Cu) {
        ctx->pc = 0x2AAF6Cu;
            // 0x2aaf6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF70u;
        goto label_2aaf70;
    }
    ctx->pc = 0x2AAF68u;
    {
        const bool branch_taken_0x2aaf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF68u;
            // 0x2aaf6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf68) {
            ctx->pc = 0x2AAF98u;
            goto label_2aaf98;
        }
    }
    ctx->pc = 0x2AAF70u;
label_2aaf70:
    // 0x2aaf70: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2aaf74:
    if (ctx->pc == 0x2AAF74u) {
        ctx->pc = 0x2AAF74u;
            // 0x2aaf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF78u;
        goto label_2aaf78;
    }
    ctx->pc = 0x2AAF70u;
    {
        const bool branch_taken_0x2aaf70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF70u;
            // 0x2aaf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf70) {
            ctx->pc = 0x2AAF88u;
            goto label_2aaf88;
        }
    }
    ctx->pc = 0x2AAF78u;
label_2aaf78:
    // 0x2aaf78: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2aaf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2aaf7c:
    // 0x2aaf7c: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aaf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aaf80:
    // 0x2aaf80: 0x2a0f809  jalr        $s5
label_2aaf84:
    if (ctx->pc == 0x2AAF84u) {
        ctx->pc = 0x2AAF84u;
            // 0x2aaf84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF88u;
        goto label_2aaf88;
    }
    ctx->pc = 0x2AAF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2AAF88u);
        ctx->pc = 0x2AAF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF80u;
            // 0x2aaf84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF88u; }
            if (ctx->pc != 0x2AAF88u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAF88u;
label_2aaf88:
    // 0x2aaf88: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aaf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aaf8c:
    // 0x2aaf8c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2aaf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2aaf90:
    // 0x2aaf90: 0x10000070  b           . + 4 + (0x70 << 2)
label_2aaf94:
    if (ctx->pc == 0x2AAF94u) {
        ctx->pc = 0x2AAF94u;
            // 0x2aaf94: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->pc = 0x2AAF98u;
        goto label_2aaf98;
    }
    ctx->pc = 0x2AAF90u;
    {
        const bool branch_taken_0x2aaf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF90u;
            // 0x2aaf94: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf90) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AAF98u;
label_2aaf98:
    // 0x2aaf98: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_2aaf9c:
    // 0x2aaf9c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2aafa0:
    if (ctx->pc == 0x2AAFA0u) {
        ctx->pc = 0x2AAFA0u;
            // 0x2aafa0: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->pc = 0x2AAFA4u;
        goto label_2aafa4;
    }
    ctx->pc = 0x2AAF9Cu;
    {
        const bool branch_taken_0x2aaf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf9c) {
            ctx->pc = 0x2AAFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF9Cu;
            // 0x2aafa0: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAFDCu;
            goto label_2aafdc;
        }
    }
    ctx->pc = 0x2AAFA4u;
label_2aafa4:
    // 0x2aafa4: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2aafa4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
label_2aafa8:
    // 0x2aafa8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2aafa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2aafac:
    // 0x2aafac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2aafb0:
    if (ctx->pc == 0x2AAFB0u) {
        ctx->pc = 0x2AAFB0u;
            // 0x2aafb0: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->pc = 0x2AAFB4u;
        goto label_2aafb4;
    }
    ctx->pc = 0x2AAFACu;
    {
        const bool branch_taken_0x2aafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aafac) {
            ctx->pc = 0x2AAFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFACu;
            // 0x2aafb0: 0x8c8200f4  lw          $v0, 0xF4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAFDCu;
            goto label_2aafdc;
        }
    }
    ctx->pc = 0x2AAFB4u;
label_2aafb4:
    // 0x2aafb4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2aafb8:
    if (ctx->pc == 0x2AAFB8u) {
        ctx->pc = 0x2AAFB8u;
            // 0x2aafb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFBCu;
        goto label_2aafbc;
    }
    ctx->pc = 0x2AAFB4u;
    {
        const bool branch_taken_0x2aafb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFB4u;
            // 0x2aafb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafb4) {
            ctx->pc = 0x2AAFCCu;
            goto label_2aafcc;
        }
    }
    ctx->pc = 0x2AAFBCu;
label_2aafbc:
    // 0x2aafbc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2aafbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2aafc0:
    // 0x2aafc0: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aafc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aafc4:
    // 0x2aafc4: 0x2a0f809  jalr        $s5
label_2aafc8:
    if (ctx->pc == 0x2AAFC8u) {
        ctx->pc = 0x2AAFC8u;
            // 0x2aafc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFCCu;
        goto label_2aafcc;
    }
    ctx->pc = 0x2AAFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2AAFCCu);
        ctx->pc = 0x2AAFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFC4u;
            // 0x2aafc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAFCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFCCu; }
            if (ctx->pc != 0x2AAFCCu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAFCCu;
label_2aafcc:
    // 0x2aafcc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aafd0:
    // 0x2aafd0: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2aafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2aafd4:
    // 0x2aafd4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2aafd8:
    if (ctx->pc == 0x2AAFD8u) {
        ctx->pc = 0x2AAFD8u;
            // 0x2aafd8: 0x240600d9  addiu       $a2, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->pc = 0x2AAFDCu;
        goto label_2aafdc;
    }
    ctx->pc = 0x2AAFD4u;
    {
        const bool branch_taken_0x2aafd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFD4u;
            // 0x2aafd8: 0x240600d9  addiu       $a2, $zero, 0xD9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafd4) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AAFDCu;
label_2aafdc:
    // 0x2aafdc: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
label_2aafe0:
    if (ctx->pc == 0x2AAFE0u) {
        ctx->pc = 0x2AAFE0u;
            // 0x2aafe0: 0x8c6200e8  lw          $v0, 0xE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
        ctx->pc = 0x2AAFE4u;
        goto label_2aafe4;
    }
    ctx->pc = 0x2AAFDCu;
    {
        const bool branch_taken_0x2aafdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aafdc) {
            ctx->pc = 0x2AAFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFDCu;
            // 0x2aafe0: 0x8c6200e8  lw          $v0, 0xE8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB1C0u;
            goto label_2ab1c0;
        }
    }
    ctx->pc = 0x2AAFE4u;
label_2aafe4:
    // 0x2aafe4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_2aafe8:
    if (ctx->pc == 0x2AAFE8u) {
        ctx->pc = 0x2AAFE8u;
            // 0x2aafe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFECu;
        goto label_2aafec;
    }
    ctx->pc = 0x2AAFE4u;
    {
        const bool branch_taken_0x2aafe4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFE4u;
            // 0x2aafe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafe4) {
            ctx->pc = 0x2AAFFCu;
            goto label_2aaffc;
        }
    }
    ctx->pc = 0x2AAFECu;
label_2aafec:
    // 0x2aafec: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2aafecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2aaff0:
    // 0x2aaff0: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aaff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aaff4:
    // 0x2aaff4: 0x2a0f809  jalr        $s5
label_2aaff8:
    if (ctx->pc == 0x2AAFF8u) {
        ctx->pc = 0x2AAFF8u;
            // 0x2aaff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFFCu;
        goto label_2aaffc;
    }
    ctx->pc = 0x2AAFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2AAFFCu);
        ctx->pc = 0x2AAFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFF4u;
            // 0x2aaff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAFFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFFCu; }
            if (ctx->pc != 0x2AAFFCu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAFFCu;
label_2aaffc:
    // 0x2aaffc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab000:
    // 0x2ab000: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2ab000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ab004:
    // 0x2ab004: 0x10000053  b           . + 4 + (0x53 << 2)
label_2ab008:
    if (ctx->pc == 0x2AB008u) {
        ctx->pc = 0x2AB008u;
            // 0x2ab008: 0x240600da  addiu       $a2, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->pc = 0x2AB00Cu;
        goto label_2ab00c;
    }
    ctx->pc = 0x2AB004u;
    {
        const bool branch_taken_0x2ab004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB004u;
            // 0x2ab008: 0x240600da  addiu       $a2, $zero, 0xDA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab004) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AB00Cu;
label_2ab00c:
    // 0x2ab00c: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2ab00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab010:
    // 0x2ab010: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2ab010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2ab014:
    // 0x2ab014: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2ab018:
    if (ctx->pc == 0x2AB018u) {
        ctx->pc = 0x2AB018u;
            // 0x2ab018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB01Cu;
        goto label_2ab01c;
    }
    ctx->pc = 0x2AB014u;
    {
        const bool branch_taken_0x2ab014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB014u;
            // 0x2ab018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab014) {
            ctx->pc = 0x2AB038u;
            goto label_2ab038;
        }
    }
    ctx->pc = 0x2AB01Cu;
label_2ab01c:
    // 0x2ab01c: 0xc0aeb94  jal         func_2BAE50
label_2ab020:
    if (ctx->pc == 0x2AB020u) {
        ctx->pc = 0x2AB020u;
            // 0x2ab020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB024u;
        goto label_2ab024;
    }
    ctx->pc = 0x2AB01Cu;
    SET_GPR_U32(ctx, 31, 0x2AB024u);
    ctx->pc = 0x2AB020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB01Cu;
            // 0x2ab020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE50u;
    if (runtime->hasFunction(0x2BAE50u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB024u; }
        if (ctx->pc != 0x2AB024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE50_0x2bae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB024u; }
        if (ctx->pc != 0x2AB024u) { return; }
    }
    ctx->pc = 0x2AB024u;
label_2ab024:
    // 0x2ab024: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2ab028:
    if (ctx->pc == 0x2AB028u) {
        ctx->pc = 0x2AB028u;
            // 0x2ab028: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x2AB02Cu;
        goto label_2ab02c;
    }
    ctx->pc = 0x2AB024u;
    {
        const bool branch_taken_0x2ab024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab024) {
            ctx->pc = 0x2AB028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB024u;
            // 0x2ab028: 0x8e420050  lw          $v0, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB03Cu;
            goto label_2ab03c;
        }
    }
    ctx->pc = 0x2AB02Cu;
label_2ab02c:
    // 0x2ab02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab030:
    // 0x2ab030: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ab034:
    if (ctx->pc == 0x2AB034u) {
        ctx->pc = 0x2AB034u;
            // 0x2ab034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB038u;
        goto label_2ab038;
    }
    ctx->pc = 0x2AB030u;
    {
        const bool branch_taken_0x2ab030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB030u;
            // 0x2ab034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab030) {
            ctx->pc = 0x2AB060u;
            goto label_2ab060;
        }
    }
    ctx->pc = 0x2AB038u;
label_2ab038:
    // 0x2ab038: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2ab038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2ab03c:
    // 0x2ab03c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab040:
    // 0x2ab040: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ab040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ab044:
    // 0x2ab044: 0x8c4600f0  lw          $a2, 0xF0($v0)
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2ab048:
    // 0x2ab048: 0xc0aafae  jal         func_2ABEB8
label_2ab04c:
    if (ctx->pc == 0x2AB04Cu) {
        ctx->pc = 0x2AB04Cu;
            // 0x2ab04c: 0x8c4500ec  lw          $a1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->pc = 0x2AB050u;
        goto label_2ab050;
    }
    ctx->pc = 0x2AB048u;
    SET_GPR_U32(ctx, 31, 0x2AB050u);
    ctx->pc = 0x2AB04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB048u;
            // 0x2ab04c: 0x8c4500ec  lw          $a1, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB8u;
    if (runtime->hasFunction(0x2ABEB8u)) {
        auto targetFn = runtime->lookupFunction(0x2ABEB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB050u; }
        if (ctx->pc != 0x2AB050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ABEB8_0x2abeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB050u; }
        if (ctx->pc != 0x2AB050u) { return; }
    }
    ctx->pc = 0x2AB050u;
label_2ab050:
    // 0x2ab050: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
label_2ab054:
    if (ctx->pc == 0x2AB054u) {
        ctx->pc = 0x2AB054u;
            // 0x2ab054: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->pc = 0x2AB058u;
        goto label_2ab058;
    }
    ctx->pc = 0x2AB050u;
    {
        const bool branch_taken_0x2ab050 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ab050) {
            ctx->pc = 0x2AB054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB050u;
            // 0x2ab054: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB070u;
            goto label_2ab070;
        }
    }
    ctx->pc = 0x2AB058u;
label_2ab058:
    // 0x2ab058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab05c:
    // 0x2ab05c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ab05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ab060:
    // 0x2ab060: 0xc0acbea  jal         func_2B2FA8
label_2ab064:
    if (ctx->pc == 0x2AB064u) {
        ctx->pc = 0x2AB068u;
        goto label_2ab068;
    }
    ctx->pc = 0x2AB060u;
    SET_GPR_U32(ctx, 31, 0x2AB068u);
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB068u; }
        if (ctx->pc != 0x2AB068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB068u; }
        if (ctx->pc != 0x2AB068u) { return; }
    }
    ctx->pc = 0x2AB068u;
label_2ab068:
    // 0x2ab068: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2ab06c:
    if (ctx->pc == 0x2AB06Cu) {
        ctx->pc = 0x2AB06Cu;
            // 0x2ab06c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AB070u;
        goto label_2ab070;
    }
    ctx->pc = 0x2AB068u;
    {
        const bool branch_taken_0x2ab068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB068u;
            // 0x2ab06c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab068) {
            ctx->pc = 0x2AB1DCu;
            goto label_2ab1dc;
        }
    }
    ctx->pc = 0x2AB070u;
label_2ab070:
    // 0x2ab070: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2ab070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_2ab074:
    // 0x2ab074: 0x8c6600f4  lw          $a2, 0xF4($v1)
    ctx->pc = 0x2ab074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2ab078:
    // 0x2ab078: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_2ab07c:
    if (ctx->pc == 0x2AB07Cu) {
        ctx->pc = 0x2AB07Cu;
            // 0x2ab07c: 0x2829821  addu        $s3, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x2AB080u;
        goto label_2ab080;
    }
    ctx->pc = 0x2AB078u;
    {
        const bool branch_taken_0x2ab078 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB078u;
            // 0x2ab07c: 0x2829821  addu        $s3, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab078) {
            ctx->pc = 0x2AB09Cu;
            goto label_2ab09c;
        }
    }
    ctx->pc = 0x2AB080u;
label_2ab080:
    // 0x2ab080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab084:
    // 0x2ab084: 0xc0acbea  jal         func_2B2FA8
label_2ab088:
    if (ctx->pc == 0x2AB088u) {
        ctx->pc = 0x2AB088u;
            // 0x2ab088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AB08Cu;
        goto label_2ab08c;
    }
    ctx->pc = 0x2AB084u;
    SET_GPR_U32(ctx, 31, 0x2AB08Cu);
    ctx->pc = 0x2AB088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB084u;
            // 0x2ab088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB08Cu; }
        if (ctx->pc != 0x2AB08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB08Cu; }
        if (ctx->pc != 0x2AB08Cu) { return; }
    }
    ctx->pc = 0x2AB08Cu;
label_2ab08c:
    // 0x2ab08c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab090:
    // 0x2ab090: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2ab090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ab094:
    // 0x2ab094: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2ab098:
    if (ctx->pc == 0x2AB098u) {
        ctx->pc = 0x2AB098u;
            // 0x2ab098: 0x240600b8  addiu       $a2, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x2AB09Cu;
        goto label_2ab09c;
    }
    ctx->pc = 0x2AB094u;
    {
        const bool branch_taken_0x2ab094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB094u;
            // 0x2ab098: 0x240600b8  addiu       $a2, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab094) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AB09Cu;
label_2ab09c:
    // 0x2ab09c: 0x8e4700b0  lw          $a3, 0xB0($s2)
    ctx->pc = 0x2ab09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab0a0:
    // 0x2ab0a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0a4:
    // 0x2ab0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0a8:
    // 0x2ab0a8: 0xc0ac206  jal         func_2B0818
label_2ab0ac:
    if (ctx->pc == 0x2AB0ACu) {
        ctx->pc = 0x2AB0ACu;
            // 0x2ab0ac: 0x24e700b8  addiu       $a3, $a3, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
        ctx->pc = 0x2AB0B0u;
        goto label_2ab0b0;
    }
    ctx->pc = 0x2AB0A8u;
    SET_GPR_U32(ctx, 31, 0x2AB0B0u);
    ctx->pc = 0x2AB0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0A8u;
            // 0x2ab0ac: 0x24e700b8  addiu       $a3, $a3, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0818u;
    if (runtime->hasFunction(0x2B0818u)) {
        auto targetFn = runtime->lookupFunction(0x2B0818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0B0u; }
        if (ctx->pc != 0x2AB0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0818_0x2b0818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0B0u; }
        if (ctx->pc != 0x2AB0B0u) { return; }
    }
    ctx->pc = 0x2AB0B0u;
label_2ab0b0:
    // 0x2ab0b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ab0b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0b4:
    // 0x2ab0b4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2ab0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2ab0b8:
    // 0x2ab0b8: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_2ab0bc:
    // 0x2ab0bc: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
label_2ab0c0:
    if (ctx->pc == 0x2AB0C0u) {
        ctx->pc = 0x2AB0C0u;
            // 0x2ab0c0: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->pc = 0x2AB0C4u;
        goto label_2ab0c4;
    }
    ctx->pc = 0x2AB0BCu;
    {
        const bool branch_taken_0x2ab0bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0BCu;
            // 0x2ab0c0: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0bc) {
            ctx->pc = 0x2AB0E0u;
            goto label_2ab0e0;
        }
    }
    ctx->pc = 0x2AB0C4u;
label_2ab0c4:
    // 0x2ab0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0c8:
    // 0x2ab0c8: 0xc0acbea  jal         func_2B2FA8
label_2ab0cc:
    if (ctx->pc == 0x2AB0CCu) {
        ctx->pc = 0x2AB0CCu;
            // 0x2ab0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0D0u;
        goto label_2ab0d0;
    }
    ctx->pc = 0x2AB0C8u;
    SET_GPR_U32(ctx, 31, 0x2AB0D0u);
    ctx->pc = 0x2AB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0C8u;
            // 0x2ab0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0D0u; }
        if (ctx->pc != 0x2AB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0D0u; }
        if (ctx->pc != 0x2AB0D0u) { return; }
    }
    ctx->pc = 0x2AB0D0u;
label_2ab0d0:
    // 0x2ab0d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab0d4:
    // 0x2ab0d4: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2ab0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ab0d8:
    // 0x2ab0d8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ab0dc:
    if (ctx->pc == 0x2AB0DCu) {
        ctx->pc = 0x2AB0DCu;
            // 0x2ab0dc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x2AB0E0u;
        goto label_2ab0e0;
    }
    ctx->pc = 0x2AB0D8u;
    {
        const bool branch_taken_0x2ab0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0D8u;
            // 0x2ab0dc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab0d8) {
            ctx->pc = 0x2AB154u;
            goto label_2ab154;
        }
    }
    ctx->pc = 0x2AB0E0u;
label_2ab0e0:
    // 0x2ab0e0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2ab0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2ab0e4:
    // 0x2ab0e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ab0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ab0e8:
    // 0x2ab0e8: 0x24a506d8  addiu       $a1, $a1, 0x6D8
    ctx->pc = 0x2ab0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
label_2ab0ec:
    // 0x2ab0ec: 0xc0aefd8  jal         func_2BBF60
label_2ab0f0:
    if (ctx->pc == 0x2AB0F0u) {
        ctx->pc = 0x2AB0F0u;
            // 0x2ab0f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0F4u;
        goto label_2ab0f4;
    }
    ctx->pc = 0x2AB0ECu;
    SET_GPR_U32(ctx, 31, 0x2AB0F4u);
    ctx->pc = 0x2AB0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0ECu;
            // 0x2ab0f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBF60u;
    if (runtime->hasFunction(0x2BBF60u)) {
        auto targetFn = runtime->lookupFunction(0x2BBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0F4u; }
        if (ctx->pc != 0x2AB0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBF60_0x2bbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0F4u; }
        if (ctx->pc != 0x2AB0F4u) { return; }
    }
    ctx->pc = 0x2AB0F4u;
label_2ab0f4:
    // 0x2ab0f4: 0xc0ac1d0  jal         func_2B0740
label_2ab0f8:
    if (ctx->pc == 0x2AB0F8u) {
        ctx->pc = 0x2AB0F8u;
            // 0x2ab0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB0FCu;
        goto label_2ab0fc;
    }
    ctx->pc = 0x2AB0F4u;
    SET_GPR_U32(ctx, 31, 0x2AB0FCu);
    ctx->pc = 0x2AB0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0F4u;
            // 0x2ab0f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0740u;
    if (runtime->hasFunction(0x2B0740u)) {
        auto targetFn = runtime->lookupFunction(0x2B0740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0FCu; }
        if (ctx->pc != 0x2AB0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0740_0x2b0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0FCu; }
        if (ctx->pc != 0x2AB0FCu) { return; }
    }
    ctx->pc = 0x2AB0FCu;
label_2ab0fc:
    // 0x2ab0fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ab0fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab100:
    // 0x2ab100: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ab100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ab104:
    // 0x2ab104: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ab104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ab108:
    // 0x2ab108: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2ab10c:
    if (ctx->pc == 0x2AB10Cu) {
        ctx->pc = 0x2AB10Cu;
            // 0x2ab10c: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2AB110u;
        goto label_2ab110;
    }
    ctx->pc = 0x2AB108u;
    {
        const bool branch_taken_0x2ab108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB108u;
            // 0x2ab10c: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab108) {
            ctx->pc = 0x2AB13Cu;
            goto label_2ab13c;
        }
    }
    ctx->pc = 0x2AB110u;
label_2ab110:
    // 0x2ab110: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ab110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2ab114:
    // 0x2ab114: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ab114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ab118:
    // 0x2ab118: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ab11c:
    // 0x2ab11c: 0xc0af0a6  jal         func_2BC298
label_2ab120:
    if (ctx->pc == 0x2AB120u) {
        ctx->pc = 0x2AB120u;
            // 0x2ab120: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2AB124u;
        goto label_2ab124;
    }
    ctx->pc = 0x2AB11Cu;
    SET_GPR_U32(ctx, 31, 0x2AB124u);
    ctx->pc = 0x2AB120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB11Cu;
            // 0x2ab120: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (runtime->hasFunction(0x2BC298u)) {
        auto targetFn = runtime->lookupFunction(0x2BC298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB124u; }
        if (ctx->pc != 0x2AB124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC298_0x2bc298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB124u; }
        if (ctx->pc != 0x2AB124u) { return; }
    }
    ctx->pc = 0x2AB124u;
label_2ab124:
    // 0x2ab124: 0x442fff6  bltzl       $v0, . + 4 + (-0xA << 2)
label_2ab128:
    if (ctx->pc == 0x2AB128u) {
        ctx->pc = 0x2AB128u;
            // 0x2ab128: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2AB12Cu;
        goto label_2ab12c;
    }
    ctx->pc = 0x2AB124u;
    {
        const bool branch_taken_0x2ab124 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ab124) {
            ctx->pc = 0x2AB128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB124u;
            // 0x2ab128: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ab100;
        }
    }
    ctx->pc = 0x2AB12Cu;
label_2ab12c:
    // 0x2ab12c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ab12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ab130:
    // 0x2ab130: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ab130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ab134:
    // 0x2ab134: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2ab138:
    if (ctx->pc == 0x2AB138u) {
        ctx->pc = 0x2AB138u;
            // 0x2ab138: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2AB13Cu;
        goto label_2ab13c;
    }
    ctx->pc = 0x2AB134u;
    {
        const bool branch_taken_0x2ab134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab134) {
            ctx->pc = 0x2AB138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB134u;
            // 0x2ab138: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB168u;
            goto label_2ab168;
        }
    }
    ctx->pc = 0x2AB13Cu;
label_2ab13c:
    // 0x2ab13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ab140:
    // 0x2ab140: 0xc0acbea  jal         func_2B2FA8
label_2ab144:
    if (ctx->pc == 0x2AB144u) {
        ctx->pc = 0x2AB144u;
            // 0x2ab144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AB148u;
        goto label_2ab148;
    }
    ctx->pc = 0x2AB140u;
    SET_GPR_U32(ctx, 31, 0x2AB148u);
    ctx->pc = 0x2AB144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB140u;
            // 0x2ab144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (runtime->hasFunction(0x2B2FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2B2FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB148u; }
        if (ctx->pc != 0x2AB148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B2FA8_0x2b2fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB148u; }
        if (ctx->pc != 0x2AB148u) { return; }
    }
    ctx->pc = 0x2AB148u;
label_2ab148:
    // 0x2ab148: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab14c:
    // 0x2ab14c: 0x2405006d  addiu       $a1, $zero, 0x6D
    ctx->pc = 0x2ab14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_2ab150:
    // 0x2ab150: 0x240600b9  addiu       $a2, $zero, 0xB9
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_2ab154:
    // 0x2ab154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab158:
    // 0x2ab158: 0xc0a5648  jal         func_295920
label_2ab15c:
    if (ctx->pc == 0x2AB15Cu) {
        ctx->pc = 0x2AB15Cu;
            // 0x2ab15c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AB160u;
        goto label_2ab160;
    }
    ctx->pc = 0x2AB158u;
    SET_GPR_U32(ctx, 31, 0x2AB160u);
    ctx->pc = 0x2AB15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB158u;
            // 0x2ab15c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB160u; }
        if (ctx->pc != 0x2AB160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB160u; }
        if (ctx->pc != 0x2AB160u) { return; }
    }
    ctx->pc = 0x2AB160u;
label_2ab160:
    // 0x2ab160: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ab164:
    if (ctx->pc == 0x2AB164u) {
        ctx->pc = 0x2AB164u;
            // 0x2ab164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AB168u;
        goto label_2ab168;
    }
    ctx->pc = 0x2AB160u;
    {
        const bool branch_taken_0x2ab160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB160u;
            // 0x2ab164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab160) {
            ctx->pc = 0x2AB1DCu;
            goto label_2ab1dc;
        }
    }
    ctx->pc = 0x2AB168u;
label_2ab168:
    // 0x2ab168: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x2ab168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab16c:
    // 0x2ab16c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ab16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ab170:
    // 0x2ab170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ab174:
    // 0x2ab174: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x2ab174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_2ab178:
    // 0x2ab178: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2ab178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab17c:
    // 0x2ab17c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2ab17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2ab180:
    // 0x2ab180: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2ab184:
    if (ctx->pc == 0x2AB184u) {
        ctx->pc = 0x2AB184u;
            // 0x2ab184: 0x8c420090  lw          $v0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x2AB188u;
        goto label_2ab188;
    }
    ctx->pc = 0x2AB180u;
    {
        const bool branch_taken_0x2ab180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab180) {
            ctx->pc = 0x2AB184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB180u;
            // 0x2ab184: 0x8c420090  lw          $v0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB198u;
            goto label_2ab198;
        }
    }
    ctx->pc = 0x2AB188u;
label_2ab188:
    // 0x2ab188: 0xc0a390c  jal         func_28E430
label_2ab18c:
    if (ctx->pc == 0x2AB18Cu) {
        ctx->pc = 0x2AB190u;
        goto label_2ab190;
    }
    ctx->pc = 0x2AB188u;
    SET_GPR_U32(ctx, 31, 0x2AB190u);
    ctx->pc = 0x28E430u;
    if (runtime->hasFunction(0x28E430u)) {
        auto targetFn = runtime->lookupFunction(0x28E430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB190u; }
        if (ctx->pc != 0x2AB190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E430_0x28e430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB190u; }
        if (ctx->pc != 0x2AB190u) { return; }
    }
    ctx->pc = 0x2AB190u;
label_2ab190:
    // 0x2ab190: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x2ab190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab194:
    // 0x2ab194: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2ab198:
    // 0x2ab198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ab198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ab19c:
    // 0x2ab19c: 0xc0a3966  jal         func_28E598
label_2ab1a0:
    if (ctx->pc == 0x2AB1A0u) {
        ctx->pc = 0x2AB1A0u;
            // 0x2ab1a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2AB1A4u;
        goto label_2ab1a4;
    }
    ctx->pc = 0x2AB19Cu;
    SET_GPR_U32(ctx, 31, 0x2AB1A4u);
    ctx->pc = 0x2AB1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB19Cu;
            // 0x2ab1a0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E598u;
    if (runtime->hasFunction(0x28E598u)) {
        auto targetFn = runtime->lookupFunction(0x28E598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1A4u; }
        if (ctx->pc != 0x2AB1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E598_0x28e598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1A4u; }
        if (ctx->pc != 0x2AB1A4u) { return; }
    }
    ctx->pc = 0x2AB1A4u;
label_2ab1a4:
    // 0x2ab1a4: 0x8e4500b0  lw          $a1, 0xB0($s2)
    ctx->pc = 0x2ab1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_2ab1a8:
    // 0x2ab1a8: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x2ab1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_2ab1ac:
    // 0x2ab1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ab1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ab1b0:
    // 0x2ab1b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ab1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ab1b4:
    // 0x2ab1b4: 0xaca40094  sw          $a0, 0x94($a1)
    ctx->pc = 0x2ab1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 4));
label_2ab1b8:
    // 0x2ab1b8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2ab1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2ab1bc:
    // 0x2ab1bc: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x2ab1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_2ab1c0:
    // 0x2ab1c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab1c4:
    // 0x2ab1c4: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2ab1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_2ab1c8:
    // 0x2ab1c8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x2ab1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2ab1cc:
    // 0x2ab1cc: 0x8c8600e8  lw          $a2, 0xE8($a0)
    ctx->pc = 0x2ab1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
label_2ab1d0:
    // 0x2ab1d0: 0xc049c48  jal         func_127120
label_2ab1d4:
    if (ctx->pc == 0x2AB1D4u) {
        ctx->pc = 0x2AB1D4u;
            // 0x2ab1d4: 0x24840094  addiu       $a0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->pc = 0x2AB1D8u;
        goto label_2ab1d8;
    }
    ctx->pc = 0x2AB1D0u;
    SET_GPR_U32(ctx, 31, 0x2AB1D8u);
    ctx->pc = 0x2AB1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1D0u;
            // 0x2ab1d4: 0x24840094  addiu       $a0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D8u; }
        if (ctx->pc != 0x2AB1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB1D8u; }
        if (ctx->pc != 0x2AB1D8u) { return; }
    }
    ctx->pc = 0x2AB1D8u;
label_2ab1d8:
    // 0x2ab1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ab1dc:
    // 0x2ab1dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ab1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ab1e0:
    // 0x2ab1e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ab1e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ab1e4:
    // 0x2ab1e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ab1e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ab1e8:
    // 0x2ab1e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ab1e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ab1ec:
    // 0x2ab1ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ab1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab1f0:
    // 0x2ab1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ab1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab1f4:
    // 0x2ab1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab1f8:
    // 0x2ab1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab1fc:
    // 0x2ab1fc: 0x3e00008  jr          $ra
label_2ab200:
    if (ctx->pc == 0x2AB200u) {
        ctx->pc = 0x2AB200u;
            // 0x2ab200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2AB204u;
        goto label_2ab204;
    }
    ctx->pc = 0x2AB1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB1FCu;
            // 0x2ab200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB204u;
label_2ab204:
    // 0x2ab204: 0x0  nop
    ctx->pc = 0x2ab204u;
    // NOP
    ctx->pc = 0x2ab208u;
}
