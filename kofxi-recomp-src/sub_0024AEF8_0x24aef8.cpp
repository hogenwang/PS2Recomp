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

// Function: sub_0024AEF8
// Address: 0x24aef8 - 0x24b110
void sub_0024AEF8_0x24aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AEF8_0x24aef8");
#endif

    switch (ctx->pc) {
        case 0x24aef8u: goto label_24aef8;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af00u: goto label_24af00;
        case 0x24af04u: goto label_24af04;
        case 0x24af08u: goto label_24af08;
        case 0x24af0cu: goto label_24af0c;
        case 0x24af10u: goto label_24af10;
        case 0x24af14u: goto label_24af14;
        case 0x24af18u: goto label_24af18;
        case 0x24af1cu: goto label_24af1c;
        case 0x24af20u: goto label_24af20;
        case 0x24af24u: goto label_24af24;
        case 0x24af28u: goto label_24af28;
        case 0x24af2cu: goto label_24af2c;
        case 0x24af30u: goto label_24af30;
        case 0x24af34u: goto label_24af34;
        case 0x24af38u: goto label_24af38;
        case 0x24af3cu: goto label_24af3c;
        case 0x24af40u: goto label_24af40;
        case 0x24af44u: goto label_24af44;
        case 0x24af48u: goto label_24af48;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af50u: goto label_24af50;
        case 0x24af54u: goto label_24af54;
        case 0x24af58u: goto label_24af58;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af60u: goto label_24af60;
        case 0x24af64u: goto label_24af64;
        case 0x24af68u: goto label_24af68;
        case 0x24af6cu: goto label_24af6c;
        case 0x24af70u: goto label_24af70;
        case 0x24af74u: goto label_24af74;
        case 0x24af78u: goto label_24af78;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af80u: goto label_24af80;
        case 0x24af84u: goto label_24af84;
        case 0x24af88u: goto label_24af88;
        case 0x24af8cu: goto label_24af8c;
        case 0x24af90u: goto label_24af90;
        case 0x24af94u: goto label_24af94;
        case 0x24af98u: goto label_24af98;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afa4u: goto label_24afa4;
        case 0x24afa8u: goto label_24afa8;
        case 0x24afacu: goto label_24afac;
        case 0x24afb0u: goto label_24afb0;
        case 0x24afb4u: goto label_24afb4;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afbcu: goto label_24afbc;
        case 0x24afc0u: goto label_24afc0;
        case 0x24afc4u: goto label_24afc4;
        case 0x24afc8u: goto label_24afc8;
        case 0x24afccu: goto label_24afcc;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afd4u: goto label_24afd4;
        case 0x24afd8u: goto label_24afd8;
        case 0x24afdcu: goto label_24afdc;
        case 0x24afe0u: goto label_24afe0;
        case 0x24afe4u: goto label_24afe4;
        case 0x24afe8u: goto label_24afe8;
        case 0x24afecu: goto label_24afec;
        case 0x24aff0u: goto label_24aff0;
        case 0x24aff4u: goto label_24aff4;
        case 0x24aff8u: goto label_24aff8;
        case 0x24affcu: goto label_24affc;
        case 0x24b000u: goto label_24b000;
        case 0x24b004u: goto label_24b004;
        case 0x24b008u: goto label_24b008;
        case 0x24b00cu: goto label_24b00c;
        case 0x24b010u: goto label_24b010;
        case 0x24b014u: goto label_24b014;
        case 0x24b018u: goto label_24b018;
        case 0x24b01cu: goto label_24b01c;
        case 0x24b020u: goto label_24b020;
        case 0x24b024u: goto label_24b024;
        case 0x24b028u: goto label_24b028;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b030u: goto label_24b030;
        case 0x24b034u: goto label_24b034;
        case 0x24b038u: goto label_24b038;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b040u: goto label_24b040;
        case 0x24b044u: goto label_24b044;
        case 0x24b048u: goto label_24b048;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b050u: goto label_24b050;
        case 0x24b054u: goto label_24b054;
        case 0x24b058u: goto label_24b058;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b060u: goto label_24b060;
        case 0x24b064u: goto label_24b064;
        case 0x24b068u: goto label_24b068;
        case 0x24b06cu: goto label_24b06c;
        case 0x24b070u: goto label_24b070;
        case 0x24b074u: goto label_24b074;
        case 0x24b078u: goto label_24b078;
        case 0x24b07cu: goto label_24b07c;
        case 0x24b080u: goto label_24b080;
        case 0x24b084u: goto label_24b084;
        case 0x24b088u: goto label_24b088;
        case 0x24b08cu: goto label_24b08c;
        case 0x24b090u: goto label_24b090;
        case 0x24b094u: goto label_24b094;
        case 0x24b098u: goto label_24b098;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b0a0u: goto label_24b0a0;
        case 0x24b0a4u: goto label_24b0a4;
        case 0x24b0a8u: goto label_24b0a8;
        case 0x24b0acu: goto label_24b0ac;
        case 0x24b0b0u: goto label_24b0b0;
        case 0x24b0b4u: goto label_24b0b4;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0bcu: goto label_24b0bc;
        case 0x24b0c0u: goto label_24b0c0;
        case 0x24b0c4u: goto label_24b0c4;
        case 0x24b0c8u: goto label_24b0c8;
        case 0x24b0ccu: goto label_24b0cc;
        case 0x24b0d0u: goto label_24b0d0;
        case 0x24b0d4u: goto label_24b0d4;
        case 0x24b0d8u: goto label_24b0d8;
        case 0x24b0dcu: goto label_24b0dc;
        case 0x24b0e0u: goto label_24b0e0;
        case 0x24b0e4u: goto label_24b0e4;
        case 0x24b0e8u: goto label_24b0e8;
        case 0x24b0ecu: goto label_24b0ec;
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b0f4u: goto label_24b0f4;
        case 0x24b0f8u: goto label_24b0f8;
        case 0x24b0fcu: goto label_24b0fc;
        case 0x24b100u: goto label_24b100;
        case 0x24b104u: goto label_24b104;
        case 0x24b108u: goto label_24b108;
        case 0x24b10cu: goto label_24b10c;
        default: break;
    }

    ctx->pc = 0x24aef8u;

label_24aef8:
    // 0x24aef8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24aef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24aefc:
    // 0x24aefc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24aefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_24af00:
    // 0x24af00: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_24af04:
    // 0x24af04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24af04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24af08:
    // 0x24af08: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_24af0c:
    // 0x24af0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24af0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24af10:
    // 0x24af10: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24af14:
    // 0x24af14: 0xc08c682  jal         func_231A08
label_24af18:
    if (ctx->pc == 0x24AF18u) {
        ctx->pc = 0x24AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF14u;
        // 0x24af18: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF1Cu;
        goto label_24af1c;
    }
    ctx->pc = 0x24AF14u;
    SET_GPR_U32(ctx, 31, 0x24AF1Cu);
    ctx->pc = 0x24AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF14u;
    // 0x24af18: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24AF14u, 0x24AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF1Cu;
label_24af1c:
    // 0x24af1c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x24af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24af20:
    // 0x24af20: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_24af24:
    if (ctx->pc == 0x24AF24u) {
        ctx->pc = 0x24AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF20u;
        // 0x24af24: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF28u;
        goto label_24af28;
    }
    ctx->pc = 0x24AF20u;
    {
        const bool branch_taken_0x24af20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF20u;
        // 0x24af24: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af20) {
            ctx->pc = 0x24AF58u;
            goto label_24af58;
        }
    }
    ctx->pc = 0x24AF28u;
label_24af28:
    // 0x24af28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24af2c:
    // 0x24af2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24af30:
    // 0x24af30: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24af30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24af34:
    // 0x24af34: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_24af38:
    if (ctx->pc == 0x24AF38u) {
        ctx->pc = 0x24AF3Cu;
        goto label_24af3c;
    }
    ctx->pc = 0x24AF34u;
    {
        const bool branch_taken_0x24af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24af34) {
            ctx->pc = 0x24AF58u;
            goto label_24af58;
        }
    }
    ctx->pc = 0x24AF3Cu;
label_24af3c:
    // 0x24af3c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x24af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_24af40:
    // 0x24af40: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_24af44:
    if (ctx->pc == 0x24AF44u) {
        ctx->pc = 0x24AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF40u;
        // 0x24af44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF48u;
        goto label_24af48;
    }
    ctx->pc = 0x24AF40u;
    {
        const bool branch_taken_0x24af40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF40u;
        // 0x24af44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af40) {
            ctx->pc = 0x24AF9Cu;
            goto label_24af9c;
        }
    }
    ctx->pc = 0x24AF48u;
label_24af48:
    // 0x24af48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24af4c:
    // 0x24af4c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24af4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24af50:
    // 0x24af50: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_24af54:
    if (ctx->pc == 0x24AF54u) {
        ctx->pc = 0x24AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF50u;
        // 0x24af54: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF58u;
        goto label_24af58;
    }
    ctx->pc = 0x24AF50u;
    {
        const bool branch_taken_0x24af50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24af50) {
            ctx->pc = 0x24AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF50u;
            // 0x24af54: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24af40;
        }
    }
    ctx->pc = 0x24AF58u;
label_24af58:
    // 0x24af58: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_24af5c:
    if (ctx->pc == 0x24AF5Cu) {
        ctx->pc = 0x24AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF58u;
        // 0x24af5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF60u;
        goto label_24af60;
    }
    ctx->pc = 0x24AF58u;
    {
        const bool branch_taken_0x24af58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF58u;
        // 0x24af5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af58) {
            ctx->pc = 0x24AF9Cu;
            goto label_24af9c;
        }
    }
    ctx->pc = 0x24AF60u;
label_24af60:
    // 0x24af60: 0x8cb0008c  lw          $s0, 0x8C($a1)
    ctx->pc = 0x24af60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_24af64:
    // 0x24af64: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_24af68:
    if (ctx->pc == 0x24AF68u) {
        ctx->pc = 0x24AF6Cu;
        goto label_24af6c;
    }
    ctx->pc = 0x24AF64u;
    {
        const bool branch_taken_0x24af64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af64) {
            ctx->pc = 0x24AFB4u;
            goto label_24afb4;
        }
    }
    ctx->pc = 0x24AF6Cu;
label_24af6c:
    // 0x24af6c: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x24af6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24af70:
    // 0x24af70: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x24af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24af74:
    // 0x24af74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24af78:
    // 0x24af78: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_24af7c:
    if (ctx->pc == 0x24AF7Cu) {
        ctx->pc = 0x24AF80u;
        goto label_24af80;
    }
    ctx->pc = 0x24AF78u;
    {
        const bool branch_taken_0x24af78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24af78) {
            ctx->pc = 0x24AF9Cu;
            goto label_24af9c;
        }
    }
    ctx->pc = 0x24AF80u;
label_24af80:
    // 0x24af80: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x24af80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24af84:
    // 0x24af84: 0x0  nop
    ctx->pc = 0x24af84u;
    // NOP
label_24af88:
    // 0x24af88: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_24af8c:
    if (ctx->pc == 0x24AF8Cu) {
        ctx->pc = 0x24AF90u;
        goto label_24af90;
    }
    ctx->pc = 0x24AF88u;
    {
        const bool branch_taken_0x24af88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af88) {
            ctx->pc = 0x24AFB4u;
            goto label_24afb4;
        }
    }
    ctx->pc = 0x24AF90u;
label_24af90:
    // 0x24af90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24af94:
    // 0x24af94: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_24af98:
    if (ctx->pc == 0x24AF98u) {
        ctx->pc = 0x24AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF94u;
        // 0x24af98: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF9Cu;
        goto label_24af9c;
    }
    ctx->pc = 0x24AF94u;
    {
        const bool branch_taken_0x24af94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24af94) {
            ctx->pc = 0x24AF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF94u;
            // 0x24af98: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24af88;
        }
    }
    ctx->pc = 0x24AF9Cu;
label_24af9c:
    // 0x24af9c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_24afa0:
    if (ctx->pc == 0x24AFA0u) {
        ctx->pc = 0x24AFA4u;
        goto label_24afa4;
    }
    ctx->pc = 0x24AF9Cu;
    {
        const bool branch_taken_0x24af9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af9c) {
            ctx->pc = 0x24AFB4u;
            goto label_24afb4;
        }
    }
    ctx->pc = 0x24AFA4u;
label_24afa4:
    // 0x24afa4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24afa8:
    // 0x24afa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24afac:
    // 0x24afac: 0x1000004d  b           . + 4 + (0x4D << 2)
label_24afb0:
    if (ctx->pc == 0x24AFB0u) {
        ctx->pc = 0x24AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFACu;
        // 0x24afb0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFB4u;
        goto label_24afb4;
    }
    ctx->pc = 0x24AFACu;
    {
        const bool branch_taken_0x24afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFACu;
        // 0x24afb0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afac) {
            ctx->pc = 0x24B0E4u;
            goto label_24b0e4;
        }
    }
    ctx->pc = 0x24AFB4u;
label_24afb4:
    // 0x24afb4: 0xc098552  jal         func_261548
label_24afb8:
    if (ctx->pc == 0x24AFB8u) {
        ctx->pc = 0x24AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFB4u;
        // 0x24afb8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFBCu;
        goto label_24afbc;
    }
    ctx->pc = 0x24AFB4u;
    SET_GPR_U32(ctx, 31, 0x24AFBCu);
    ctx->pc = 0x24AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFB4u;
    // 0x24afb8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24AFB4u, 0x24AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFBCu;
label_24afbc:
    // 0x24afbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24afbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24afc0:
    // 0x24afc0: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_24afc4:
    if (ctx->pc == 0x24AFC4u) {
        ctx->pc = 0x24AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFC0u;
        // 0x24afc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFC8u;
        goto label_24afc8;
    }
    ctx->pc = 0x24AFC0u;
    {
        const bool branch_taken_0x24afc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFC0u;
        // 0x24afc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afc0) {
            ctx->pc = 0x24B0CCu;
            goto label_24b0cc;
        }
    }
    ctx->pc = 0x24AFC8u;
label_24afc8:
    // 0x24afc8: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x24afc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24afcc:
    // 0x24afcc: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x24afccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24afd0:
    // 0x24afd0: 0xaa030003  swl         $v1, 0x3($s0)
    ctx->pc = 0x24afd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24afd4:
    // 0x24afd4: 0xba030000  swr         $v1, 0x0($s0)
    ctx->pc = 0x24afd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24afd8:
    // 0x24afd8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24afdc:
    // 0x24afdc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x24afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_24afe0:
    // 0x24afe0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x24afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24afe4:
    // 0x24afe4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_24afe8:
    if (ctx->pc == 0x24AFE8u) {
        ctx->pc = 0x24AFECu;
        goto label_24afec;
    }
    ctx->pc = 0x24AFE4u;
    {
        const bool branch_taken_0x24afe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24afe4) {
            ctx->pc = 0x24B020u;
            goto label_24b020;
        }
    }
    ctx->pc = 0x24AFECu;
label_24afec:
    // 0x24afec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24aff0:
    // 0x24aff0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24aff4:
    // 0x24aff4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24aff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24aff8:
    // 0x24aff8: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_24affc:
    if (ctx->pc == 0x24AFFCu) {
        ctx->pc = 0x24B000u;
        goto label_24b000;
    }
    ctx->pc = 0x24AFF8u;
    {
        const bool branch_taken_0x24aff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x24aff8) {
            ctx->pc = 0x24B020u;
            goto label_24b020;
        }
    }
    ctx->pc = 0x24B000u;
label_24b000:
    // 0x24b000: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x24b000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_24b004:
    // 0x24b004: 0x0  nop
    ctx->pc = 0x24b004u;
    // NOP
label_24b008:
    // 0x24b008: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_24b00c:
    if (ctx->pc == 0x24B00Cu) {
        ctx->pc = 0x24B010u;
        goto label_24b010;
    }
    ctx->pc = 0x24B008u;
    {
        const bool branch_taken_0x24b008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b008) {
            ctx->pc = 0x24B020u;
            goto label_24b020;
        }
    }
    ctx->pc = 0x24B010u;
label_24b010:
    // 0x24b010: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24b014:
    // 0x24b014: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x24b014u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24b018:
    // 0x24b018: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_24b01c:
    if (ctx->pc == 0x24B01Cu) {
        ctx->pc = 0x24B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B018u;
        // 0x24b01c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B020u;
        goto label_24b020;
    }
    ctx->pc = 0x24B018u;
    {
        const bool branch_taken_0x24b018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b018) {
            ctx->pc = 0x24B01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B018u;
            // 0x24b01c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b008;
        }
    }
    ctx->pc = 0x24B020u;
label_24b020:
    // 0x24b020: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_24b024:
    if (ctx->pc == 0x24B024u) {
        ctx->pc = 0x24B028u;
        goto label_24b028;
    }
    ctx->pc = 0x24B020u;
    {
        const bool branch_taken_0x24b020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b020) {
            ctx->pc = 0x24B0C4u;
            goto label_24b0c4;
        }
    }
    ctx->pc = 0x24B028u;
label_24b028:
    // 0x24b028: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x24b028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_24b02c:
    // 0x24b02c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x24b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_24b030:
    // 0x24b030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24b034:
    // 0x24b034: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x24b034u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_24b038:
    // 0x24b038: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x24b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_24b03c:
    // 0x24b03c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24b040:
    if (ctx->pc == 0x24B040u) {
        ctx->pc = 0x24B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B03Cu;
        // 0x24b040: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B044u;
        goto label_24b044;
    }
    ctx->pc = 0x24B03Cu;
    {
        const bool branch_taken_0x24b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B03Cu;
        // 0x24b040: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b03c) {
            ctx->pc = 0x24B050u;
            goto label_24b050;
        }
    }
    ctx->pc = 0x24B044u;
label_24b044:
    // 0x24b044: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x24b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_24b048:
    // 0x24b048: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x24b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_24b04c:
    // 0x24b04c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x24b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_24b050:
    // 0x24b050: 0x24a2008c  addiu       $v0, $a1, 0x8C
    ctx->pc = 0x24b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 140));
label_24b054:
    // 0x24b054: 0xacb0008c  sw          $s0, 0x8C($a1)
    ctx->pc = 0x24b054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 16));
label_24b058:
    // 0x24b058: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x24b058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_24b05c:
    // 0x24b05c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x24b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24b060:
    // 0x24b060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24b064:
    // 0x24b064: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x24b064u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_24b068:
    // 0x24b068: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x24b068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_24b06c:
    // 0x24b06c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x24b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_24b070:
    // 0x24b070: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x24b070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24b074:
    // 0x24b074: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x24b074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24b078:
    // 0x24b078: 0xaba30017  swl         $v1, 0x17($sp)
    ctx->pc = 0x24b078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24b07c:
    // 0x24b07c: 0xbba30014  swr         $v1, 0x14($sp)
    ctx->pc = 0x24b07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24b080:
    // 0x24b080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24b084:
    if (ctx->pc == 0x24B084u) {
        ctx->pc = 0x24B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B080u;
        // 0x24b084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B088u;
        goto label_24b088;
    }
    ctx->pc = 0x24B080u;
    {
        const bool branch_taken_0x24b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B080u;
        // 0x24b084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b080) {
            ctx->pc = 0x24B0A4u;
            goto label_24b0a4;
        }
    }
    ctx->pc = 0x24B088u;
label_24b088:
    // 0x24b088: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x24b088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_24b08c:
    // 0x24b08c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x24b08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_24b090:
    // 0x24b090: 0x34a56931  ori         $a1, $a1, 0x6931
    ctx->pc = 0x24b090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26929);
label_24b094:
    // 0x24b094: 0x40f809  jalr        $v0
label_24b098:
    if (ctx->pc == 0x24B098u) {
        ctx->pc = 0x24B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B094u;
        // 0x24b098: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B09Cu;
        goto label_24b09c;
    }
    ctx->pc = 0x24B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B09Cu);
        ctx->pc = 0x24B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B094u;
        // 0x24b098: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B094u, 0x24B09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B09Cu;
label_24b09c:
    // 0x24b09c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_24b0a0:
    if (ctx->pc == 0x24B0A0u) {
        ctx->pc = 0x24B0A4u;
        goto label_24b0a4;
    }
    ctx->pc = 0x24B09Cu;
    {
        const bool branch_taken_0x24b09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b09c) {
            ctx->pc = 0x24B0DCu;
            goto label_24b0dc;
        }
    }
    ctx->pc = 0x24B0A4u;
label_24b0a4:
    // 0x24b0a4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24b0a8:
    // 0x24b0a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24b0ac:
    if (ctx->pc == 0x24B0ACu) {
        ctx->pc = 0x24B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0A8u;
        // 0x24b0ac: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0B0u;
        goto label_24b0b0;
    }
    ctx->pc = 0x24B0A8u;
    {
        const bool branch_taken_0x24b0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0A8u;
        // 0x24b0ac: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0a8) {
            ctx->pc = 0x24B0C0u;
            goto label_24b0c0;
        }
    }
    ctx->pc = 0x24B0B0u;
label_24b0b0:
    // 0x24b0b0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x24b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_24b0b4:
    // 0x24b0b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x24b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24b0b8:
    // 0x24b0b8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x24b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_24b0bc:
    // 0x24b0bc: 0x0  nop
    ctx->pc = 0x24b0bcu;
    // NOP
label_24b0c0:
    // 0x24b0c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24b0c4:
    // 0x24b0c4: 0xc098560  jal         func_261580
label_24b0c8:
    if (ctx->pc == 0x24B0C8u) {
        ctx->pc = 0x24B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0C4u;
        // 0x24b0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0CCu;
        goto label_24b0cc;
    }
    ctx->pc = 0x24B0C4u;
    SET_GPR_U32(ctx, 31, 0x24B0CCu);
    ctx->pc = 0x24B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0C4u;
    // 0x24b0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24B0C4u, 0x24B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0CCu;
label_24b0cc:
    // 0x24b0cc: 0xc08c698  jal         func_231A60
label_24b0d0:
    if (ctx->pc == 0x24B0D0u) {
        ctx->pc = 0x24B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0CCu;
        // 0x24b0d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0D4u;
        goto label_24b0d4;
    }
    ctx->pc = 0x24B0CCu;
    SET_GPR_U32(ctx, 31, 0x24B0D4u);
    ctx->pc = 0x24B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0CCu;
    // 0x24b0d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24B0CCu, 0x24B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0D4u;
label_24b0d4:
    // 0x24b0d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_24b0d8:
    if (ctx->pc == 0x24B0D8u) {
        ctx->pc = 0x24B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0D4u;
        // 0x24b0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0DCu;
        goto label_24b0dc;
    }
    ctx->pc = 0x24B0D4u;
    {
        const bool branch_taken_0x24b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0D4u;
        // 0x24b0d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0d4) {
            ctx->pc = 0x24B0F0u;
            goto label_24b0f0;
        }
    }
    ctx->pc = 0x24B0DCu;
label_24b0dc:
    // 0x24b0dc: 0xc0923ec  jal         func_248FB0
label_24b0e0:
    if (ctx->pc == 0x24B0E0u) {
        ctx->pc = 0x24B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0DCu;
        // 0x24b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0E4u;
        goto label_24b0e4;
    }
    ctx->pc = 0x24B0DCu;
    SET_GPR_U32(ctx, 31, 0x24B0E4u);
    ctx->pc = 0x24B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0DCu;
    // 0x24b0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248FB0u, 0x24B0DCu, 0x24B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0E4u;
label_24b0e4:
    // 0x24b0e4: 0xc08c698  jal         func_231A60
label_24b0e8:
    if (ctx->pc == 0x24B0E8u) {
        ctx->pc = 0x24B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0E4u;
        // 0x24b0e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0ECu;
        goto label_24b0ec;
    }
    ctx->pc = 0x24B0E4u;
    SET_GPR_U32(ctx, 31, 0x24B0ECu);
    ctx->pc = 0x24B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0E4u;
    // 0x24b0e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24B0E4u, 0x24B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0ECu;
label_24b0ec:
    // 0x24b0ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b0f0:
    // 0x24b0f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24b0f4:
    // 0x24b0f4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24b0f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24b0f8:
    // 0x24b0f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24b0f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24b0fc:
    // 0x24b0fc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24b0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24b100:
    // 0x24b100: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24b100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24b104:
    // 0x24b104: 0x3e00008  jr          $ra
label_24b108:
    if (ctx->pc == 0x24B108u) {
        ctx->pc = 0x24B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B104u;
        // 0x24b108: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B10Cu;
        goto label_24b10c;
    }
    ctx->pc = 0x24B104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B104u;
        // 0x24b108: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B10Cu;
label_24b10c:
    // 0x24b10c: 0x0  nop
    ctx->pc = 0x24b10cu;
    // NOP
}
