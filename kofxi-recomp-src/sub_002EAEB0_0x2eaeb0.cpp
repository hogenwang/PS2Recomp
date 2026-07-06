#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EAEB0
// Address: 0x2eaeb0 - 0x2eb420
void sub_002EAEB0_0x2eaeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAEB0_0x2eaeb0");
#endif

    switch (ctx->pc) {
        case 0x2eaec4u: goto label_2eaec4;
        case 0x2eaeccu: goto label_2eaecc;
        case 0x2eaf10u: goto label_2eaf10;
        case 0x2eaf18u: goto label_2eaf18;
        case 0x2eaf24u: goto label_2eaf24;
        case 0x2eaf28u: goto label_2eaf28;
        case 0x2eaf2cu: goto label_2eaf2c;
        case 0x2eaf60u: goto label_2eaf60;
        case 0x2eaf90u: goto label_2eaf90;
        case 0x2eaf94u: goto label_2eaf94;
        case 0x2eafa0u: goto label_2eafa0;
        case 0x2eafa8u: goto label_2eafa8;
        case 0x2eafbcu: goto label_2eafbc;
        case 0x2eafc8u: goto label_2eafc8;
        case 0x2eaff0u: goto label_2eaff0;
        case 0x2eaff8u: goto label_2eaff8;
        case 0x2eb000u: goto label_2eb000;
        case 0x2eb008u: goto label_2eb008;
        case 0x2eb014u: goto label_2eb014;
        case 0x2eb018u: goto label_2eb018;
        case 0x2eb024u: goto label_2eb024;
        case 0x2eb03cu: goto label_2eb03c;
        case 0x2eb044u: goto label_2eb044;
        case 0x2eb090u: goto label_2eb090;
        case 0x2eb0a0u: goto label_2eb0a0;
        case 0x2eb0a4u: goto label_2eb0a4;
        case 0x2eb0a8u: goto label_2eb0a8;
        case 0x2eb0b0u: goto label_2eb0b0;
        case 0x2eb0bcu: goto label_2eb0bc;
        case 0x2eb0e0u: goto label_2eb0e0;
        case 0x2eb0f8u: goto label_2eb0f8;
        case 0x2eb11cu: goto label_2eb11c;
        case 0x2eb130u: goto label_2eb130;
        case 0x2eb148u: goto label_2eb148;
        case 0x2eb170u: goto label_2eb170;
        case 0x2eb178u: goto label_2eb178;
        case 0x2eb180u: goto label_2eb180;
        case 0x2eb184u: goto label_2eb184;
        case 0x2eb190u: goto label_2eb190;
        case 0x2eb194u: goto label_2eb194;
        case 0x2eb1b8u: goto label_2eb1b8;
        case 0x2eb1c0u: goto label_2eb1c0;
        case 0x2eb1c8u: goto label_2eb1c8;
        case 0x2eb1d4u: goto label_2eb1d4;
        case 0x2eb1dcu: goto label_2eb1dc;
        case 0x2eb1e4u: goto label_2eb1e4;
        case 0x2eb1e8u: goto label_2eb1e8;
        case 0x2eb1f0u: goto label_2eb1f0;
        case 0x2eb204u: goto label_2eb204;
        case 0x2eb208u: goto label_2eb208;
        case 0x2eb21cu: goto label_2eb21c;
        case 0x2eb228u: goto label_2eb228;
        case 0x2eb22cu: goto label_2eb22c;
        case 0x2eb244u: goto label_2eb244;
        case 0x2eb250u: goto label_2eb250;
        case 0x2eb264u: goto label_2eb264;
        case 0x2eb268u: goto label_2eb268;
        case 0x2eb27cu: goto label_2eb27c;
        case 0x2eb280u: goto label_2eb280;
        case 0x2eb298u: goto label_2eb298;
        case 0x2eb2a0u: goto label_2eb2a0;
        case 0x2eb2b0u: goto label_2eb2b0;
        case 0x2eb2bcu: goto label_2eb2bc;
        case 0x2eb2c8u: goto label_2eb2c8;
        case 0x2eb2ccu: goto label_2eb2cc;
        case 0x2eb2d0u: goto label_2eb2d0;
        case 0x2eb2d4u: goto label_2eb2d4;
        case 0x2eb2dcu: goto label_2eb2dc;
        case 0x2eb2e0u: goto label_2eb2e0;
        case 0x2eb2e8u: goto label_2eb2e8;
        case 0x2eb2f0u: goto label_2eb2f0;
        case 0x2eb2f4u: goto label_2eb2f4;
        case 0x2eb304u: goto label_2eb304;
        case 0x2eb310u: goto label_2eb310;
        case 0x2eb320u: goto label_2eb320;
        case 0x2eb334u: goto label_2eb334;
        case 0x2eb338u: goto label_2eb338;
        case 0x2eb344u: goto label_2eb344;
        case 0x2eb34cu: goto label_2eb34c;
        case 0x2eb350u: goto label_2eb350;
        case 0x2eb36cu: goto label_2eb36c;
        case 0x2eb388u: goto label_2eb388;
        case 0x2eb3a0u: goto label_2eb3a0;
        case 0x2eb3b0u: goto label_2eb3b0;
        case 0x2eb3b8u: goto label_2eb3b8;
        case 0x2eb3c4u: goto label_2eb3c4;
        case 0x2eb3c8u: goto label_2eb3c8;
        case 0x2eb3e8u: goto label_2eb3e8;
        case 0x2eb3f0u: goto label_2eb3f0;
        case 0x2eb3f8u: goto label_2eb3f8;
        default: break;
    }

    ctx->pc = 0x2eaeb0u;

label_2eaeb0:
    // 0x2eaeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eaeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eaeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eaeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eaeb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eaeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eaebc: 0xc0bad08  jal         func_2EB420
    ctx->pc = 0x2EAEBCu;
    SET_GPR_U32(ctx, 31, 0x2EAEC4u);
    ctx->pc = 0x2EAEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEBCu;
    // 0x2eaec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB420u, 0x2EAEBCu, 0x2EAEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAEC4u;
label_2eaec4:
    // 0x2eaec4: 0xc0bab4a  jal         func_2EAD28
    ctx->pc = 0x2EAEC4u;
    SET_GPR_U32(ctx, 31, 0x2EAECCu);
    ctx->pc = 0x2EAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEC4u;
    // 0x2eaec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAD28u, 0x2EAEC4u, 0x2EAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAECCu;
label_2eaecc:
    // 0x2eaecc: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2eaeccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2eaed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eaed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eaed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eaed8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2eaed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2eaedc: 0x3042fbff  andi        $v0, $v0, 0xFBFF
    ctx->pc = 0x2eaedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64511);
    // 0x2eaee0: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x2eaee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eaee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eaee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eaee8: 0x80ba9b2  j           func_2EA6C8
    ctx->pc = 0x2EAEE8u;
    ctx->pc = 0x2EAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAEE8u;
    // 0x2eaeec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA6C8u;
    sub_002EA6C8_0x2ea6c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EAEF0u;
    // 0x2eaef0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2eaef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2eaef4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2eaef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2eaef8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2eaef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2eaefc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2eaefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2eaf00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2eaf00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2eaf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2eaf08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2eaf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eaf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2eaf10:
    // 0x2eaf10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2eaf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2eaf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2eaf18:
    // 0x2eaf18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eaf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaf1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2eaf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2eaf20: 0xc08c682  jal         func_231A08
label_2eaf24:
    if (ctx->pc == 0x2EAF24u) {
        ctx->pc = 0x2EAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF20u;
        // 0x2eaf24: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF28u;
        goto label_2eaf28;
    }
    ctx->pc = 0x2EAF20u;
    SET_GPR_U32(ctx, 31, 0x2EAF28u);
    ctx->pc = 0x2EAF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAF20u;
    // 0x2eaf24: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2EAF20u, 0x2EAF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAF28u;
label_2eaf28:
    // 0x2eaf28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2eaf28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eaf2c:
    // 0x2eaf2c: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2eaf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2eaf30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eaf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eaf34: 0x34426932  ori         $v0, $v0, 0x6932
    ctx->pc = 0x2eaf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26930);
    // 0x2eaf38: 0x120200aa  beq         $s0, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x2EAF38u;
    {
        const bool branch_taken_0x2eaf38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF38u;
        // 0x2eaf3c: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf38) {
            ctx->pc = 0x2EB1E4u;
            goto label_2eb1e4;
        }
    }
    ctx->pc = 0x2EAF40u;
    // 0x2eaf40: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAF40u;
    {
        const bool branch_taken_0x2eaf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf40) {
            ctx->pc = 0x2EAF9Cu;
            goto label_2eaf9c;
        }
    }
    ctx->pc = 0x2EAF48u;
    // 0x2eaf48: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2eaf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2eaf4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eaf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eaf50: 0x34426910  ori         $v0, $v0, 0x6910
    ctx->pc = 0x2eaf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26896);
    // 0x2eaf54: 0x1202006a  beq         $s0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EAF54u;
    {
        const bool branch_taken_0x2eaf54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF54u;
        // 0x2eaf58: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf54) {
            ctx->pc = 0x2EB100u;
            goto label_2eb100;
        }
    }
    ctx->pc = 0x2EAF5Cu;
    // 0x2eaf5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2eaf60:
    if (ctx->pc == 0x2EAF60u) {
        ctx->pc = 0x2EAF64u;
        goto label_fallthrough_0x2eaf5c;
    }
    ctx->pc = 0x2EAF5Cu;
    {
        const bool branch_taken_0x2eaf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf5c) {
            ctx->pc = 0x2EAF80u;
            goto label_2eaf80;
        }
    }
label_fallthrough_0x2eaf5c:
    ctx->pc = 0x2EAF64u;
    // 0x2eaf64: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2eaf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2eaf68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eaf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eaf6c: 0x3442690c  ori         $v0, $v0, 0x690C
    ctx->pc = 0x2eaf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26892);
    // 0x2eaf70: 0x52020024  beql        $s0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EAF70u;
    {
        const bool branch_taken_0x2eaf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eaf70) {
            ctx->pc = 0x2EAF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAF70u;
            // 0x2eaf74: 0x96420030  lhu         $v0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB004u;
            goto label_2eb004;
        }
    }
    ctx->pc = 0x2EAF78u;
    // 0x2eaf78: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2EAF78u;
    {
        const bool branch_taken_0x2eaf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF78u;
        // 0x2eaf7c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf78) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EAF80u;
label_2eaf80:
    // 0x2eaf80: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2eaf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x2eaf84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eaf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eaf88: 0x34426931  ori         $v0, $v0, 0x6931
    ctx->pc = 0x2eaf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26929);
    // 0x2eaf8c: 0x12020090  beq         $s0, $v0, . + 4 + (0x90 << 2)
label_2eaf90:
    if (ctx->pc == 0x2EAF90u) {
        ctx->pc = 0x2EAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF8Cu;
        // 0x2eaf90: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAF94u;
        goto label_2eaf94;
    }
    ctx->pc = 0x2EAF8Cu;
    {
        const bool branch_taken_0x2eaf8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF8Cu;
        // 0x2eaf90: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf8c) {
            ctx->pc = 0x2EB1D0u;
            goto label_2eb1d0;
        }
    }
    ctx->pc = 0x2EAF94u;
label_2eaf94:
    // 0x2eaf94: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2EAF94u;
    {
        const bool branch_taken_0x2eaf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaf94) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EAF9Cu;
label_2eaf9c:
    // 0x2eaf9c: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2eaf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
label_2eafa0:
    // 0x2eafa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eafa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eafa4: 0x34426921  ori         $v0, $v0, 0x6921
    ctx->pc = 0x2eafa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26913);
label_2eafa8:
    // 0x2eafa8: 0x12020046  beq         $s0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2EAFA8u;
    {
        const bool branch_taken_0x2eafa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFA8u;
        // 0x2eafac: 0x50102b  sltu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafa8) {
            ctx->pc = 0x2EB0C4u;
            goto label_2eb0c4;
        }
    }
    ctx->pc = 0x2EAFB0u;
    // 0x2eafb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAFB0u;
    {
        const bool branch_taken_0x2eafb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eafb0) {
            ctx->pc = 0x2EAFD4u;
            goto label_2eafd4;
        }
    }
    ctx->pc = 0x2EAFB8u;
    // 0x2eafb8: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x2eafb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_2eafbc:
    // 0x2eafbc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eafc0: 0x3442697f  ori         $v0, $v0, 0x697F
    ctx->pc = 0x2eafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27007);
    // 0x2eafc4: 0x52020092  beql        $s0, $v0, . + 4 + (0x92 << 2)
label_2eafc8:
    if (ctx->pc == 0x2EAFC8u) {
        ctx->pc = 0x2EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFC4u;
        // 0x2eafc8: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFCCu;
        goto label_fallthrough_0x2eafc4;
    }
    ctx->pc = 0x2EAFC4u;
    {
        const bool branch_taken_0x2eafc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eafc4) {
            ctx->pc = 0x2EAFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EAFC4u;
            // 0x2eafc8: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB210u;
            goto label_2eb210;
        }
    }
label_fallthrough_0x2eafc4:
    ctx->pc = 0x2EAFCCu;
    // 0x2eafcc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2EAFCCu;
    {
        const bool branch_taken_0x2eafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFCCu;
        // 0x2eafd0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafcc) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EAFD4u;
label_2eafd4:
    // 0x2eafd4: 0x3402c020  ori         $v0, $zero, 0xC020
    ctx->pc = 0x2eafd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x2eafd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eafd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eafdc: 0x34426935  ori         $v0, $v0, 0x6935
    ctx->pc = 0x2eafdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26933);
    // 0x2eafe0: 0x12020041  beq         $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EAFE0u;
    {
        const bool branch_taken_0x2eafe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFE0u;
        // 0x2eafe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eafe0) {
            ctx->pc = 0x2EB0E8u;
            goto label_2eb0e8;
        }
    }
    ctx->pc = 0x2EAFE8u;
    // 0x2eafe8: 0x3402c028  ori         $v0, $zero, 0xC028
    ctx->pc = 0x2eafe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49192);
    // 0x2eafec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eafecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2eaff0:
    // 0x2eaff0: 0x34426936  ori         $v0, $v0, 0x6936
    ctx->pc = 0x2eaff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26934);
    // 0x2eaff4: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
label_2eaff8:
    if (ctx->pc == 0x2EAFF8u) {
        ctx->pc = 0x2EAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFF4u;
        // 0x2eaff8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EAFFCu;
        goto label_fallthrough_0x2eaff4;
    }
    ctx->pc = 0x2EAFF4u;
    {
        const bool branch_taken_0x2eaff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAFF4u;
        // 0x2eaff8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaff4) {
            ctx->pc = 0x2EB0E8u;
            goto label_2eb0e8;
        }
    }
label_fallthrough_0x2eaff4:
    ctx->pc = 0x2EAFFCu;
    // 0x2eaffc: 0x10000089  b           . + 4 + (0x89 << 2)
label_2eb000:
    if (ctx->pc == 0x2EB000u) {
        ctx->pc = 0x2EB004u;
        goto label_2eb004;
    }
    ctx->pc = 0x2EAFFCu;
    {
        const bool branch_taken_0x2eaffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eaffc) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB004u;
label_2eb004:
    // 0x2eb004: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2eb004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2eb008:
    // 0x2eb008: 0xa6420030  sh          $v0, 0x30($s2)
    ctx->pc = 0x2eb008u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2eb00c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2EB00Cu;
    SET_GPR_U32(ctx, 31, 0x2EB014u);
    ctx->pc = 0x2EB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB00Cu;
    // 0x2eb010: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2EB00Cu, 0x2EB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB014u;
label_2eb014:
    // 0x2eb014: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2eb018:
    // 0x2eb018: 0x26242648  addiu       $a0, $s1, 0x2648
    ctx->pc = 0x2eb018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9800));
    // 0x2eb01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb024:
    // 0x2eb024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb02c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eb030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb034: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2EB034u;
    SET_GPR_U32(ctx, 31, 0x2EB03Cu);
    ctx->pc = 0x2EB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB034u;
    // 0x2eb038: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x2EB034u, 0x2EB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB03Cu;
label_2eb03c:
    // 0x2eb03c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2EB03Cu;
    SET_GPR_U32(ctx, 31, 0x2EB044u);
    ctx->pc = 0x2EB040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB03Cu;
    // 0x2eb040: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EB03Cu, 0x2EB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB044u;
label_2eb044:
    // 0x2eb044: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2eb048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eb048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eb04c: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x2eb04cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2eb050: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EB050u;
    {
        const bool branch_taken_0x2eb050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB050u;
        // 0x2eb054: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb050) {
            ctx->pc = 0x2EB0A8u;
            goto label_2eb0a8;
        }
    }
    ctx->pc = 0x2EB058u;
    // 0x2eb058: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2EB058u;
    {
        const bool branch_taken_0x2eb058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB058u;
        // 0x2eb05c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb058) {
            ctx->pc = 0x2EB178u;
            goto label_2eb178;
        }
    }
    ctx->pc = 0x2EB060u;
    // 0x2eb060: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x2eb060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2eb064: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2EB064u;
    {
        const bool branch_taken_0x2eb064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb064) {
            ctx->pc = 0x2EB068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB064u;
            // 0x2eb068: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB06Cu;
    // 0x2eb06c: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2eb06cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2eb070: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x2eb070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x2eb074: 0x5462006b  bnel        $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2EB074u;
    {
        const bool branch_taken_0x2eb074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb074) {
            ctx->pc = 0x2EB078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB074u;
            // 0x2eb078: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB07Cu;
    // 0x2eb07c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2eb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2eb080: 0x90e50005  lbu         $a1, 0x5($a3)
    ctx->pc = 0x2eb080u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2eb084: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2eb084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2eb088: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2eb088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2eb08c: 0x92460039  lbu         $a2, 0x39($s2)
    ctx->pc = 0x2eb08cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_2eb090:
    // 0x2eb090: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2eb090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2eb094: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2eb094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2eb098: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2EB098u;
    SET_GPR_U32(ctx, 31, 0x2EB0A0u);
    ctx->pc = 0x2EB09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB098u;
    // 0x2eb09c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2EB098u, 0x2EB0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0A0u;
label_2eb0a0:
    // 0x2eb0a0: 0x10000035  b           . + 4 + (0x35 << 2)
label_2eb0a4:
    if (ctx->pc == 0x2EB0A4u) {
        ctx->pc = 0x2EB0A8u;
        goto label_2eb0a8;
    }
    ctx->pc = 0x2EB0A0u;
    {
        const bool branch_taken_0x2eb0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0a0) {
            ctx->pc = 0x2EB178u;
            goto label_2eb178;
        }
    }
    ctx->pc = 0x2EB0A8u;
label_2eb0a8:
    // 0x2eb0a8: 0xc0babac  jal         func_2EAEB0
    ctx->pc = 0x2EB0A8u;
    SET_GPR_U32(ctx, 31, 0x2EB0B0u);
    ctx->pc = 0x2EB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0A8u;
    // 0x2eb0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAEB0u;
    goto label_2eaeb0;
    ctx->pc = 0x2EB0B0u;
label_2eb0b0:
    // 0x2eb0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eb0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0b4: 0xc092020  jal         func_248080
    ctx->pc = 0x2EB0B4u;
    SET_GPR_U32(ctx, 31, 0x2EB0BCu);
    ctx->pc = 0x2EB0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0B4u;
    // 0x2eb0b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248080u, 0x2EB0B4u, 0x2EB0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0BCu;
label_2eb0bc:
    // 0x2eb0bc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2EB0BCu;
    {
        const bool branch_taken_0x2eb0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0bc) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB0C4u;
label_2eb0c4:
    // 0x2eb0c4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2eb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2eb0c8: 0x26640012  addiu       $a0, $s3, 0x12
    ctx->pc = 0x2eb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
    // 0x2eb0cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eb0d0: 0x90450005  lbu         $a1, 0x5($v0)
    ctx->pc = 0x2eb0d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x2eb0d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2eb0d8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2EB0D8u;
    SET_GPR_U32(ctx, 31, 0x2EB0E0u);
    ctx->pc = 0x2EB0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0D8u;
    // 0x2eb0dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2EB0D8u, 0x2EB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0E0u;
label_2eb0e0:
    // 0x2eb0e0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2EB0E0u;
    {
        const bool branch_taken_0x2eb0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb0e0) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB0E8u;
label_2eb0e8:
    // 0x2eb0e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eb0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0ec: 0x26260118  addiu       $a2, $s1, 0x118
    ctx->pc = 0x2eb0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x2eb0f0: 0xc08dc64  jal         func_237190
    ctx->pc = 0x2EB0F0u;
    SET_GPR_U32(ctx, 31, 0x2EB0F8u);
    ctx->pc = 0x2EB0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB0F0u;
    // 0x2eb0f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237190u, 0x2EB0F0u, 0x2EB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB0F8u;
label_2eb0f8:
    // 0x2eb0f8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2EB0F8u;
    {
        const bool branch_taken_0x2eb0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB0F8u;
        // 0x2eb0fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb0f8) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB100u;
label_2eb100:
    // 0x2eb100: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x2eb100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2eb104: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2eb104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2eb108: 0x30420041  andi        $v0, $v0, 0x41
    ctx->pc = 0x2eb108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65);
    // 0x2eb10c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB10Cu;
    {
        const bool branch_taken_0x2eb10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eb10c) {
            ctx->pc = 0x2EB110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB10Cu;
            // 0x2eb110: 0x96440030  lhu         $a0, 0x30($s2) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB12Cu;
            goto label_2eb12c;
        }
    }
    ctx->pc = 0x2EB114u;
    // 0x2eb114: 0xc0bab46  jal         func_2EAD18
    ctx->pc = 0x2EB114u;
    SET_GPR_U32(ctx, 31, 0x2EB11Cu);
    ctx->pc = 0x2EB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB114u;
    // 0x2eb118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAD18u, 0x2EB114u, 0x2EB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB11Cu;
label_2eb11c:
    // 0x2eb11c: 0x96420030  lhu         $v0, 0x30($s2)
    ctx->pc = 0x2eb11cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2eb120: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x2eb120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x2eb124: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2EB124u;
    {
        const bool branch_taken_0x2eb124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB124u;
        // 0x2eb128: 0xa6420030  sh          $v0, 0x30($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb124) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB12Cu;
label_2eb12c:
    // 0x2eb12c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2eb12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2eb130:
    // 0x2eb130: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2EB130u;
    {
        const bool branch_taken_0x2eb130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB130u;
        // 0x2eb134: 0x30820040  andi        $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb130) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB138u;
    // 0x2eb138: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EB138u;
    {
        const bool branch_taken_0x2eb138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb138) {
            ctx->pc = 0x2EB188u;
            goto label_2eb188;
        }
    }
    ctx->pc = 0x2EB140u;
    // 0x2eb140: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2EB140u;
    SET_GPR_U32(ctx, 31, 0x2EB148u);
    ctx->pc = 0x2EB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB140u;
    // 0x2eb144: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2EB140u, 0x2EB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB148u;
label_2eb148:
    // 0x2eb148: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb14c: 0x26242648  addiu       $a0, $s1, 0x2648
    ctx->pc = 0x2eb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9800));
    // 0x2eb150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb15c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eb164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb168: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2EB168u;
    SET_GPR_U32(ctx, 31, 0x2EB170u);
    ctx->pc = 0x2EB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB168u;
    // 0x2eb16c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x2EB168u, 0x2EB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB170u;
label_2eb170:
    // 0x2eb170: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2EB170u;
    SET_GPR_U32(ctx, 31, 0x2EB178u);
    ctx->pc = 0x2EB174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB170u;
    // 0x2eb174: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EB170u, 0x2EB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB178u;
label_2eb178:
    // 0x2eb178: 0xc0babac  jal         func_2EAEB0
    ctx->pc = 0x2EB178u;
    SET_GPR_U32(ctx, 31, 0x2EB180u);
    ctx->pc = 0x2EB17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB178u;
    // 0x2eb17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAEB0u;
    goto label_2eaeb0;
    ctx->pc = 0x2EB180u;
label_2eb180:
    // 0x2eb180: 0x10000028  b           . + 4 + (0x28 << 2)
label_2eb184:
    if (ctx->pc == 0x2EB184u) {
        ctx->pc = 0x2EB188u;
        goto label_2eb188;
    }
    ctx->pc = 0x2EB180u;
    {
        const bool branch_taken_0x2eb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb180) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB188u;
label_2eb188:
    // 0x2eb188: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2EB188u;
    SET_GPR_U32(ctx, 31, 0x2EB190u);
    ctx->pc = 0x2EB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB188u;
    // 0x2eb18c: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2EB188u, 0x2EB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB190u;
label_2eb190:
    // 0x2eb190: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2eb194:
    // 0x2eb194: 0x26242648  addiu       $a0, $s1, 0x2648
    ctx->pc = 0x2eb194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9800));
    // 0x2eb198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb19c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2eb1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb1a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eb1acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1b0: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2EB1B0u;
    SET_GPR_U32(ctx, 31, 0x2EB1B8u);
    ctx->pc = 0x2EB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1B0u;
    // 0x2eb1b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C48u, 0x2EB1B0u, 0x2EB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1B8u;
label_2eb1b8:
    // 0x2eb1b8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2EB1B8u;
    SET_GPR_U32(ctx, 31, 0x2EB1C0u);
    ctx->pc = 0x2EB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1B8u;
    // 0x2eb1bc: 0x8e242e8c  lw          $a0, 0x2E8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EB1B8u, 0x2EB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1C0u;
label_2eb1c0:
    // 0x2eb1c0: 0xc0bab4a  jal         func_2EAD28
    ctx->pc = 0x2EB1C0u;
    SET_GPR_U32(ctx, 31, 0x2EB1C8u);
    ctx->pc = 0x2EB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1C0u;
    // 0x2eb1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAD28u, 0x2EB1C0u, 0x2EB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1C8u;
label_2eb1c8:
    // 0x2eb1c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EB1C8u;
    {
        const bool branch_taken_0x2eb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb1c8) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB1D0u;
label_2eb1d0:
    // 0x2eb1d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1d4:
    // 0x2eb1d4: 0xc08da76  jal         func_2369D8
    ctx->pc = 0x2EB1D4u;
    SET_GPR_U32(ctx, 31, 0x2EB1DCu);
    ctx->pc = 0x2EB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1D4u;
    // 0x2eb1d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2369D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2369D8u, 0x2EB1D4u, 0x2EB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1DCu;
label_2eb1dc:
    // 0x2eb1dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB1DCu;
    {
        const bool branch_taken_0x2eb1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1DCu;
        // 0x2eb1e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1dc) {
            ctx->pc = 0x2EB1F4u;
            goto label_2eb1f4;
        }
    }
    ctx->pc = 0x2EB1E4u;
label_2eb1e4:
    // 0x2eb1e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2eb1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1e8:
    // 0x2eb1e8: 0xc08dad4  jal         func_236B50
    ctx->pc = 0x2EB1E8u;
    SET_GPR_U32(ctx, 31, 0x2EB1F0u);
    ctx->pc = 0x2EB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB1E8u;
    // 0x2eb1ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B50u, 0x2EB1E8u, 0x2EB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB1F0u;
label_2eb1f0:
    // 0x2eb1f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eb1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2eb1f4:
    // 0x2eb1f4: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2eb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2eb1f8: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB1F8u;
    {
        const bool branch_taken_0x2eb1f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB1F8u;
        // 0x2eb1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb1f8) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB200u;
    // 0x2eb200: 0xc0bab4a  jal         func_2EAD28
label_2eb204:
    if (ctx->pc == 0x2EB204u) {
        ctx->pc = 0x2EB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB200u;
        // 0x2eb204: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB208u;
        goto label_2eb208;
    }
    ctx->pc = 0x2EB200u;
    SET_GPR_U32(ctx, 31, 0x2EB208u);
    ctx->pc = 0x2EB204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB200u;
    // 0x2eb204: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAD28u, 0x2EB200u, 0x2EB208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB208u;
label_2eb208:
    // 0x2eb208: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB208u;
    {
        const bool branch_taken_0x2eb208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb208) {
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB210u;
label_2eb210:
    // 0x2eb210: 0x284205dd  slti        $v0, $v0, 0x5DD
    ctx->pc = 0x2eb210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1501) ? 1 : 0);
    // 0x2eb214: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB214u;
    {
        const bool branch_taken_0x2eb214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb214) {
            ctx->pc = 0x2EB218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB214u;
            // 0x2eb218: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB224u;
            goto label_2eb224;
        }
    }
    ctx->pc = 0x2EB21Cu;
label_2eb21c:
    // 0x2eb21c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2eb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2eb220: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2eb220u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_2eb224:
    // 0x2eb224: 0xc08c698  jal         func_231A60
label_2eb228:
    if (ctx->pc == 0x2EB228u) {
        ctx->pc = 0x2EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB224u;
        // 0x2eb228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB22Cu;
        goto label_2eb22c;
    }
    ctx->pc = 0x2EB224u;
    SET_GPR_U32(ctx, 31, 0x2EB22Cu);
    ctx->pc = 0x2EB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB224u;
    // 0x2eb228: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2EB224u, 0x2EB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB22Cu;
label_2eb22c:
    // 0x2eb22c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2eb22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb230: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2eb230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2eb234: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2eb234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eb238: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2eb238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb23c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2eb23cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb240: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2eb240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2eb244:
    // 0x2eb244: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2eb244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb248: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb24c: 0x3e00008  jr          $ra
label_2eb250:
    if (ctx->pc == 0x2EB250u) {
        ctx->pc = 0x2EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB24Cu;
        // 0x2eb250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB254u;
        goto label_fallthrough_0x2eb24c;
    }
    ctx->pc = 0x2EB24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB24Cu;
        // 0x2eb250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2eb24c:
    ctx->pc = 0x2EB254u;
    // 0x2eb254: 0x0  nop
    ctx->pc = 0x2eb254u;
    // NOP
    // 0x2eb258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2eb258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eb25c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2eb25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2eb260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eb260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2eb264:
    // 0x2eb264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eb268:
    // 0x2eb268: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2eb268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb26c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2eb26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2eb270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eb270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb274: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eb274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eb278: 0xc08c682  jal         func_231A08
label_2eb27c:
    if (ctx->pc == 0x2EB27Cu) {
        ctx->pc = 0x2EB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB278u;
        // 0x2eb27c: 0x8e32ffc0  lw          $s2, -0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB280u;
        goto label_2eb280;
    }
    ctx->pc = 0x2EB278u;
    SET_GPR_U32(ctx, 31, 0x2EB280u);
    ctx->pc = 0x2EB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB278u;
    // 0x2eb27c: 0x8e32ffc0  lw          $s2, -0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2EB278u, 0x2EB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB280u;
label_2eb280:
    // 0x2eb280: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eb280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb288: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB288u;
    {
        const bool branch_taken_0x2eb288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB288u;
        // 0x2eb28c: 0x26442e80  addiu       $a0, $s2, 0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb288) {
            ctx->pc = 0x2EB2B0u;
            goto label_2eb2b0;
        }
    }
    ctx->pc = 0x2EB290u;
    // 0x2eb290: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2EB290u;
    {
        const bool branch_taken_0x2eb290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB290u;
        // 0x2eb294: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb290) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB298u;
label_2eb298:
    // 0x2eb298: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB298u;
    {
        const bool branch_taken_0x2eb298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB298u;
        // 0x2eb29c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb298) {
            ctx->pc = 0x2EB2C4u;
            goto label_2eb2c4;
        }
    }
    ctx->pc = 0x2EB2A0u;
label_2eb2a0:
    // 0x2eb2a0: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EB2A0u;
    {
        const bool branch_taken_0x2eb2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A0u;
        // 0x2eb2a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a0) {
            ctx->pc = 0x2EB30Cu;
            goto label_2eb30c;
        }
    }
    ctx->pc = 0x2EB2A8u;
    // 0x2eb2a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EB2A8u;
    {
        const bool branch_taken_0x2eb2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2A8u;
        // 0x2eb2ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2a8) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB2B0u;
label_2eb2b0:
    // 0x2eb2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eb2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb2b4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2EB2B4u;
    SET_GPR_U32(ctx, 31, 0x2EB2BCu);
    ctx->pc = 0x2EB2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2B4u;
    // 0x2eb2b8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2EB2B4u, 0x2EB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2BCu;
label_2eb2bc:
    // 0x2eb2bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EB2BCu;
    {
        const bool branch_taken_0x2eb2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2BCu;
        // 0x2eb2c0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2bc) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB2C4u;
label_2eb2c4:
    // 0x2eb2c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb2c8:
    // 0x2eb2c8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2eb2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2eb2cc:
    // 0x2eb2cc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2eb2d0:
    if (ctx->pc == 0x2EB2D0u) {
        ctx->pc = 0x2EB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2CCu;
        // 0x2eb2d0: 0xae422e88  sw          $v0, 0x2E88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EB2D4u;
        goto label_2eb2d4;
    }
    ctx->pc = 0x2EB2CCu;
    {
        const bool branch_taken_0x2eb2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2CCu;
        // 0x2eb2d0: 0xae422e88  sw          $v0, 0x2E88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2cc) {
            ctx->pc = 0x2EB2F0u;
            goto label_2eb2f0;
        }
    }
    ctx->pc = 0x2EB2D4u;
label_2eb2d4:
    // 0x2eb2d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eb2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eb2d8: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2eb2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_2eb2dc:
    // 0x2eb2dc: 0x24a501d8  addiu       $a1, $a1, 0x1D8
    ctx->pc = 0x2eb2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 472));
label_2eb2e0:
    // 0x2eb2e0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EB2E0u;
    SET_GPR_U32(ctx, 31, 0x2EB2E8u);
    ctx->pc = 0x2EB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2E0u;
    // 0x2eb2e4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EB2E0u, 0x2EB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB2E8u;
label_2eb2e8:
    // 0x2eb2e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EB2E8u;
    {
        const bool branch_taken_0x2eb2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB2E8u;
        // 0x2eb2ec: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2e8) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB2F0u;
label_2eb2f0:
    // 0x2eb2f0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eb2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2eb2f4:
    // 0x2eb2f4: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2eb2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2eb2f8: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x2eb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x2eb2fc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EB2FCu;
    SET_GPR_U32(ctx, 31, 0x2EB304u);
    ctx->pc = 0x2EB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB2FCu;
    // 0x2eb300: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EB2FCu, 0x2EB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB304u;
label_2eb304:
    // 0x2eb304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB304u;
    {
        const bool branch_taken_0x2eb304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB304u;
        // 0x2eb308: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb304) {
            ctx->pc = 0x2EB318u;
            goto label_2eb318;
        }
    }
    ctx->pc = 0x2EB30Cu;
label_2eb30c:
    // 0x2eb30c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2eb310:
    // 0x2eb310: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x2eb310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
    // 0x2eb314: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2eb314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2eb318:
    // 0x2eb318: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2EB318u;
    SET_GPR_U32(ctx, 31, 0x2EB320u);
    ctx->pc = 0x2EB31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB318u;
    // 0x2eb31c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2EB318u, 0x2EB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB320u;
label_2eb320:
    // 0x2eb320: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2eb320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb324: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2eb324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb328: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2eb328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb32c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eb32cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb330: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eb330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2eb334:
    // 0x2eb334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eb338:
    // 0x2eb338: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB338u;
        // 0x2eb33c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB340u;
    // 0x2eb340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2eb344:
    // 0x2eb344: 0x24052ec0  addiu       $a1, $zero, 0x2EC0
    ctx->pc = 0x2eb344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11968));
    // 0x2eb348: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2eb348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2eb34c:
    // 0x2eb34c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2eb34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2eb350:
    // 0x2eb350: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2eb350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2eb354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2eb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2eb358: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2eb35c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eb35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eb360: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2eb360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2eb364: 0xc098590  jal         func_261640
    ctx->pc = 0x2EB364u;
    SET_GPR_U32(ctx, 31, 0x2EB36Cu);
    ctx->pc = 0x2EB368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB364u;
    // 0x2eb368: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261640u, 0x2EB364u, 0x2EB36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB36Cu;
label_2eb36c:
    // 0x2eb36c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eb36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb370: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EB370u;
    {
        const bool branch_taken_0x2eb370 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB370u;
        // 0x2eb374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb370) {
            ctx->pc = 0x2EB390u;
            goto label_2eb390;
        }
    }
    ctx->pc = 0x2EB378u;
    // 0x2eb378: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eb37c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2eb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2eb380: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EB380u;
    SET_GPR_U32(ctx, 31, 0x2EB388u);
    ctx->pc = 0x2EB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB380u;
    // 0x2eb384: 0x24a50210  addiu       $a1, $a1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2EB380u, 0x2EB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB388u;
label_2eb388:
    // 0x2eb388: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EB388u;
    {
        const bool branch_taken_0x2eb388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB388u;
        // 0x2eb38c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb388) {
            ctx->pc = 0x2EB3FCu;
            goto label_2eb3fc;
        }
    }
    ctx->pc = 0x2EB390u;
label_2eb390:
    // 0x2eb390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb394: 0x24062ec0  addiu       $a2, $zero, 0x2EC0
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11968));
    // 0x2eb398: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2EB398u;
    SET_GPR_U32(ctx, 31, 0x2EB3A0u);
    ctx->pc = 0x2EB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB398u;
    // 0x2eb39c: 0x26900040  addiu       $s0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2EB398u, 0x2EB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3A0u;
label_2eb3a0:
    // 0x2eb3a0: 0x8e9200ac  lw          $s2, 0xAC($s4)
    ctx->pc = 0x2eb3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x2eb3a4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2eb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2eb3a8: 0xae9300c0  sw          $s3, 0xC0($s4)
    ctx->pc = 0x2eb3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 19));
    // 0x2eb3ac: 0x2451fe40  addiu       $s1, $v0, -0x1C0
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
label_2eb3b0:
    // 0x2eb3b0: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2EB3B0u;
    SET_GPR_U32(ctx, 31, 0x2EB3B8u);
    ctx->pc = 0x2EB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3B0u;
    // 0x2eb3b4: 0xac53fe40  sw          $s3, -0x1C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966848), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2EB3B0u, 0x2EB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3B8u;
label_2eb3b8:
    // 0x2eb3b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3bc: 0xc0443dc  jal         func_110F70
    ctx->pc = 0x2EB3BCu;
    SET_GPR_U32(ctx, 31, 0x2EB3C4u);
    ctx->pc = 0x2EB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3BCu;
    // 0x2eb3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F70u, 0x2EB3BCu, 0x2EB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3C4u;
label_2eb3c4:
    // 0x2eb3c4: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2eb3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_2eb3c8:
    // 0x2eb3c8: 0x26270040  addiu       $a3, $s1, 0x40
    ctx->pc = 0x2eb3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2eb3cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2eb3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2eb3d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3d4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2eb3d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb3dc: 0x24c6b258  addiu       $a2, $a2, -0x4DA8
    ctx->pc = 0x2eb3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947416));
    // 0x2eb3e0: 0xc044402  jal         func_111008
    ctx->pc = 0x2EB3E0u;
    SET_GPR_U32(ctx, 31, 0x2EB3E8u);
    ctx->pc = 0x2EB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E0u;
    // 0x2eb3e4: 0x26840058  addiu       $a0, $s4, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111008u, 0x2EB3E0u, 0x2EB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3E8u;
label_2eb3e8:
    // 0x2eb3e8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2EB3E8u;
    SET_GPR_U32(ctx, 31, 0x2EB3F0u);
    ctx->pc = 0x2EB3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3E8u;
    // 0x2eb3ec: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2EB3E8u, 0x2EB3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3F0u;
label_2eb3f0:
    // 0x2eb3f0: 0xc044508  jal         func_111420
    ctx->pc = 0x2EB3F0u;
    SET_GPR_U32(ctx, 31, 0x2EB3F8u);
    ctx->pc = 0x2EB3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB3F0u;
    // 0x2eb3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111420u, 0x2EB3F0u, 0x2EB3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB3F8u;
label_2eb3f8:
    // 0x2eb3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eb3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eb3fc:
    // 0x2eb3fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eb3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb400: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2eb400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb404: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2eb404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eb408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb40c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2eb40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb414: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB414u;
        // 0x2eb418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB41Cu;
    // 0x2eb41c: 0x0  nop
    ctx->pc = 0x2eb41cu;
    // NOP
    if (ctx->pc == 0x2eb41cu) { ctx->pc = 0x2eb420u; }
}
