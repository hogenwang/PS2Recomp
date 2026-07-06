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

// Function: sub_0018AFA0
// Address: 0x18afa0 - 0x18b070
void sub_0018AFA0_0x18afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AFA0_0x18afa0");
#endif

    switch (ctx->pc) {
        case 0x18afa0u: goto label_18afa0;
        case 0x18afa4u: goto label_18afa4;
        case 0x18afa8u: goto label_18afa8;
        case 0x18afacu: goto label_18afac;
        case 0x18afb0u: goto label_18afb0;
        case 0x18afb4u: goto label_18afb4;
        case 0x18afb8u: goto label_18afb8;
        case 0x18afbcu: goto label_18afbc;
        case 0x18afc0u: goto label_18afc0;
        case 0x18afc4u: goto label_18afc4;
        case 0x18afc8u: goto label_18afc8;
        case 0x18afccu: goto label_18afcc;
        case 0x18afd0u: goto label_18afd0;
        case 0x18afd4u: goto label_18afd4;
        case 0x18afd8u: goto label_18afd8;
        case 0x18afdcu: goto label_18afdc;
        case 0x18afe0u: goto label_18afe0;
        case 0x18afe4u: goto label_18afe4;
        case 0x18afe8u: goto label_18afe8;
        case 0x18afecu: goto label_18afec;
        case 0x18aff0u: goto label_18aff0;
        case 0x18aff4u: goto label_18aff4;
        case 0x18aff8u: goto label_18aff8;
        case 0x18affcu: goto label_18affc;
        case 0x18b000u: goto label_18b000;
        case 0x18b004u: goto label_18b004;
        case 0x18b008u: goto label_18b008;
        case 0x18b00cu: goto label_18b00c;
        case 0x18b010u: goto label_18b010;
        case 0x18b014u: goto label_18b014;
        case 0x18b018u: goto label_18b018;
        case 0x18b01cu: goto label_18b01c;
        case 0x18b020u: goto label_18b020;
        case 0x18b024u: goto label_18b024;
        case 0x18b028u: goto label_18b028;
        case 0x18b02cu: goto label_18b02c;
        case 0x18b030u: goto label_18b030;
        case 0x18b034u: goto label_18b034;
        case 0x18b038u: goto label_18b038;
        case 0x18b03cu: goto label_18b03c;
        case 0x18b040u: goto label_18b040;
        case 0x18b044u: goto label_18b044;
        case 0x18b048u: goto label_18b048;
        case 0x18b04cu: goto label_18b04c;
        case 0x18b050u: goto label_18b050;
        case 0x18b054u: goto label_18b054;
        case 0x18b058u: goto label_18b058;
        case 0x18b05cu: goto label_18b05c;
        case 0x18b060u: goto label_18b060;
        case 0x18b064u: goto label_18b064;
        case 0x18b068u: goto label_18b068;
        case 0x18b06cu: goto label_18b06c;
        default: break;
    }

    ctx->pc = 0x18afa0u;

label_18afa0:
    // 0x18afa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18afa4:
    // 0x18afa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18afa8:
    // 0x18afa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18afac:
    // 0x18afac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18afb0:
    // 0x18afb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18afb4:
    // 0x18afb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18afb8:
    // 0x18afb8: 0x8c820494  lw          $v0, 0x494($a0)
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
label_18afbc:
    // 0x18afbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18afc0:
    // 0x18afc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18afc4:
    if (ctx->pc == 0x18AFC4u) {
        ctx->pc = 0x18AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFC0u;
        // 0x18afc4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AFC8u;
        goto label_18afc8;
    }
    ctx->pc = 0x18AFC0u;
    {
        const bool branch_taken_0x18afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFC0u;
        // 0x18afc4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18afc0) {
            ctx->pc = 0x18AFD8u;
            goto label_18afd8;
        }
    }
    ctx->pc = 0x18AFC8u;
label_18afc8:
    // 0x18afc8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18afc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18afcc:
    // 0x18afcc: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18afd0:
    // 0x18afd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_18afd4:
    if (ctx->pc == 0x18AFD4u) {
        ctx->pc = 0x18AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFD0u;
        // 0x18afd4: 0x26104060  addiu       $s0, $s0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AFD8u;
        goto label_18afd8;
    }
    ctx->pc = 0x18AFD0u;
    {
        const bool branch_taken_0x18afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFD0u;
        // 0x18afd4: 0x26104060  addiu       $s0, $s0, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18afd0) {
            ctx->pc = 0x18B008u;
            goto label_18b008;
        }
    }
    ctx->pc = 0x18AFD8u;
label_18afd8:
    // 0x18afd8: 0x8e63048c  lw          $v1, 0x48C($s3)
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1164)));
label_18afdc:
    // 0x18afdc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_18afe0:
    // 0x18afe0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18afe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18afe4:
    // 0x18afe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18afe8:
    if (ctx->pc == 0x18AFE8u) {
        ctx->pc = 0x18AFECu;
        goto label_18afec;
    }
    ctx->pc = 0x18AFE4u;
    {
        const bool branch_taken_0x18afe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afe4) {
            ctx->pc = 0x18AFFCu;
            goto label_18affc;
        }
    }
    ctx->pc = 0x18AFECu;
label_18afec:
    // 0x18afec: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18afecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18aff0:
    // 0x18aff0: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x18aff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18aff4:
    // 0x18aff4: 0x10000004  b           . + 4 + (0x4 << 2)
label_18aff8:
    if (ctx->pc == 0x18AFF8u) {
        ctx->pc = 0x18AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFF4u;
        // 0x18aff8: 0x26104040  addiu       $s0, $s0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AFFCu;
        goto label_18affc;
    }
    ctx->pc = 0x18AFF4u;
    {
        const bool branch_taken_0x18aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFF4u;
        // 0x18aff8: 0x26104040  addiu       $s0, $s0, 0x4040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aff4) {
            ctx->pc = 0x18B008u;
            goto label_18b008;
        }
    }
    ctx->pc = 0x18AFFCu;
label_18affc:
    // 0x18affc: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18affcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b000:
    // 0x18b000: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_18b004:
    // 0x18b004: 0x26103fe0  addiu       $s0, $s0, 0x3FE0
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16352));
label_18b008:
    // 0x18b008: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
label_18b00c:
    if (ctx->pc == 0x18B00Cu) {
        ctx->pc = 0x18B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B008u;
        // 0x18b00c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B010u;
        goto label_18b010;
    }
    ctx->pc = 0x18B008u;
    {
        const bool branch_taken_0x18b008 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B008u;
        // 0x18b00c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b008) {
            ctx->pc = 0x18B050u;
            goto label_18b050;
        }
    }
    ctx->pc = 0x18B010u;
label_18b010:
    // 0x18b010: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b014:
    // 0x18b014: 0xa052bb60  sb          $s2, -0x44A0($v0)
    ctx->pc = 0x18b014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 18));
label_18b018:
    // 0x18b018: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b01c:
    // 0x18b01c: 0x40f809  jalr        $v0
label_18b020:
    if (ctx->pc == 0x18B020u) {
        ctx->pc = 0x18B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B01Cu;
        // 0x18b020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B024u;
        goto label_18b024;
    }
    ctx->pc = 0x18B01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B024u);
        ctx->pc = 0x18B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B01Cu;
        // 0x18b020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B01Cu, 0x18B024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B024u;
label_18b024:
    // 0x18b024: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b028:
    // 0x18b028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b02c:
    // 0x18b02c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b030:
    // 0x18b030: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b034:
    if (ctx->pc == 0x18B034u) {
        ctx->pc = 0x18B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B030u;
        // 0x18b034: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B038u;
        goto label_18b038;
    }
    ctx->pc = 0x18B030u;
    {
        const bool branch_taken_0x18b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b030) {
            ctx->pc = 0x18B034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B030u;
            // 0x18b034: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B040u;
            goto label_18b040;
        }
    }
    ctx->pc = 0x18B038u;
label_18b038:
    // 0x18b038: 0x10000007  b           . + 4 + (0x7 << 2)
label_18b03c:
    if (ctx->pc == 0x18B03Cu) {
        ctx->pc = 0x18B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B038u;
        // 0x18b03c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B040u;
        goto label_18b040;
    }
    ctx->pc = 0x18B038u;
    {
        const bool branch_taken_0x18b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B038u;
        // 0x18b03c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b038) {
            ctx->pc = 0x18B058u;
            goto label_18b058;
        }
    }
    ctx->pc = 0x18B040u;
label_18b040:
    // 0x18b040: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x18b040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_18b044:
    // 0x18b044: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b048:
    if (ctx->pc == 0x18B048u) {
        ctx->pc = 0x18B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B044u;
        // 0x18b048: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B04Cu;
        goto label_18b04c;
    }
    ctx->pc = 0x18B044u;
    {
        const bool branch_taken_0x18b044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B044u;
        // 0x18b048: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b044) {
            ctx->pc = 0x18B010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b010;
        }
    }
    ctx->pc = 0x18B04Cu;
label_18b04c:
    // 0x18b04c: 0x0  nop
    ctx->pc = 0x18b04cu;
    // NOP
label_18b050:
    // 0x18b050: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b054:
    // 0x18b054: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18b054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18b058:
    // 0x18b058: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b05c:
    // 0x18b05c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b060:
    // 0x18b060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b064:
    // 0x18b064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b068:
    // 0x18b068: 0x3e00008  jr          $ra
label_18b06c:
    if (ctx->pc == 0x18B06Cu) {
        ctx->pc = 0x18B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B068u;
        // 0x18b06c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B070u;
        goto label_fallthrough_0x18b068;
    }
    ctx->pc = 0x18B068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B068u;
        // 0x18b06c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18b068:
    ctx->pc = 0x18B070u;
}
