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

// Function: sub_001B8F10
// Address: 0x1b8f10 - 0x1b9018
void sub_001B8F10_0x1b8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F10_0x1b8f10");
#endif

    switch (ctx->pc) {
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fdcu: goto label_1b8fdc;
        case 0x1b8fe0u: goto label_1b8fe0;
        case 0x1b8fe4u: goto label_1b8fe4;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8fecu: goto label_1b8fec;
        case 0x1b8ff0u: goto label_1b8ff0;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b8ffcu: goto label_1b8ffc;
        case 0x1b9000u: goto label_1b9000;
        case 0x1b9004u: goto label_1b9004;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b900cu: goto label_1b900c;
        case 0x1b9010u: goto label_1b9010;
        case 0x1b9014u: goto label_1b9014;
        default: break;
    }

    ctx->pc = 0x1b8f10u;

label_1b8f10:
    // 0x1b8f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b8f14:
    // 0x1b8f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b8f18:
    // 0x1b8f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f1c:
    // 0x1b8f1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b8f20:
    // 0x1b8f20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f24:
    // 0x1b8f24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b8f28:
    // 0x1b8f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b8f2c:
    // 0x1b8f2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8f30:
    // 0x1b8f30: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1b8f34:
    // 0x1b8f34: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_1b8f38:
    if (ctx->pc == 0x1B8F38u) {
        ctx->pc = 0x1B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F34u;
        // 0x1b8f38: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F3Cu;
        goto label_1b8f3c;
    }
    ctx->pc = 0x1B8F34u;
    {
        const bool branch_taken_0x1b8f34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F34u;
        // 0x1b8f38: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f34) {
            ctx->pc = 0x1B8F6Cu;
            goto label_1b8f6c;
        }
    }
    ctx->pc = 0x1B8F3Cu;
label_1b8f3c:
    // 0x1b8f3c: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1b8f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1b8f40:
    // 0x1b8f40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1b8f44:
    // 0x1b8f44: 0x0  nop
    ctx->pc = 0x1b8f44u;
    // NOP
label_1b8f48:
    // 0x1b8f48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1b8f4c:
    // 0x1b8f4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8f50:
    // 0x1b8f50: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b8f54:
    // 0x1b8f54: 0x60f809  jalr        $v1
label_1b8f58:
    if (ctx->pc == 0x1B8F58u) {
        ctx->pc = 0x1B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F54u;
        // 0x1b8f58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F5Cu;
        goto label_1b8f5c;
    }
    ctx->pc = 0x1B8F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8F5Cu);
        ctx->pc = 0x1B8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F54u;
        // 0x1b8f58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F54u, 0x1B8F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8F5Cu;
label_1b8f5c:
    // 0x1b8f5c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1b8f60:
    // 0x1b8f60: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b8f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b8f64:
    // 0x1b8f64: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1b8f68:
    if (ctx->pc == 0x1B8F68u) {
        ctx->pc = 0x1B8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F64u;
        // 0x1b8f68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F6Cu;
        goto label_1b8f6c;
    }
    ctx->pc = 0x1B8F64u;
    {
        const bool branch_taken_0x1b8f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f64) {
            ctx->pc = 0x1B8F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8F64u;
            // 0x1b8f68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8f48;
        }
    }
    ctx->pc = 0x1B8F6Cu;
label_1b8f6c:
    // 0x1b8f6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b8f70:
    // 0x1b8f70: 0xc06d448  jal         func_1B5120
label_1b8f74:
    if (ctx->pc == 0x1B8F74u) {
        ctx->pc = 0x1B8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F70u;
        // 0x1b8f74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F78u;
        goto label_1b8f78;
    }
    ctx->pc = 0x1B8F70u;
    SET_GPR_U32(ctx, 31, 0x1B8F78u);
    ctx->pc = 0x1B8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F70u;
    // 0x1b8f74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B8F70u, 0x1B8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F78u;
label_1b8f78:
    // 0x1b8f78: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x1b8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_1b8f7c:
    // 0x1b8f7c: 0xc06d478  jal         func_1B51E0
label_1b8f80:
    if (ctx->pc == 0x1B8F80u) {
        ctx->pc = 0x1B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F7Cu;
        // 0x1b8f80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F84u;
        goto label_1b8f84;
    }
    ctx->pc = 0x1B8F7Cu;
    SET_GPR_U32(ctx, 31, 0x1B8F84u);
    ctx->pc = 0x1B8F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F7Cu;
    // 0x1b8f80: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B51E0u, 0x1B8F7Cu, 0x1B8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F84u;
label_1b8f84:
    // 0x1b8f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8f88:
    // 0x1b8f88: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b8f8c:
    // 0x1b8f8c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b8f90:
    // 0x1b8f90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b8f94:
    // 0x1b8f94: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1b8f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b8f98:
    // 0x1b8f98: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1b8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_1b8f9c:
    // 0x1b8f9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b8f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1b8fa0:
    // 0x1b8fa0: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x1b8fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_1b8fa4:
    // 0x1b8fa4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b8fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b8fa8:
    // 0x1b8fa8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1b8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_1b8fac:
    // 0x1b8fac: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x1b8facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_1b8fb0:
    // 0x1b8fb0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1b8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_1b8fb4:
    // 0x1b8fb4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1b8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1b8fb8:
    // 0x1b8fb8: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b8fbc:
    // 0x1b8fbc: 0x8ca22360  lw          $v0, 0x2360($a1)
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9056)));
label_1b8fc0:
    // 0x1b8fc0: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1b8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_1b8fc4:
    // 0x1b8fc4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_1b8fc8:
    if (ctx->pc == 0x1B8FC8u) {
        ctx->pc = 0x1B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FC4u;
        // 0x1b8fc8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FCCu;
        goto label_1b8fcc;
    }
    ctx->pc = 0x1B8FC4u;
    {
        const bool branch_taken_0x1b8fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FC4u;
        // 0x1b8fc8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fc4) {
            ctx->pc = 0x1B8FD8u;
            goto label_1b8fd8;
        }
    }
    ctx->pc = 0x1B8FCCu;
label_1b8fcc:
    // 0x1b8fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fd0:
    // 0x1b8fd0: 0xc06eb58  jal         func_1BAD60
label_1b8fd4:
    if (ctx->pc == 0x1B8FD4u) {
        ctx->pc = 0x1B8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FD0u;
        // 0x1b8fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FD8u;
        goto label_1b8fd8;
    }
    ctx->pc = 0x1B8FD0u;
    SET_GPR_U32(ctx, 31, 0x1B8FD8u);
    ctx->pc = 0x1B8FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FD0u;
    // 0x1b8fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAD60u, 0x1B8FD0u, 0x1B8FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FD8u;
label_1b8fd8:
    // 0x1b8fd8: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x1b8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1b8fdc:
    // 0x1b8fdc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1b8fe0:
    if (ctx->pc == 0x1B8FE0u) {
        ctx->pc = 0x1B8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FDCu;
        // 0x1b8fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FE4u;
        goto label_1b8fe4;
    }
    ctx->pc = 0x1B8FDCu;
    {
        const bool branch_taken_0x1b8fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FDCu;
        // 0x1b8fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fdc) {
            ctx->pc = 0x1B9000u;
            goto label_1b9000;
        }
    }
    ctx->pc = 0x1B8FE4u;
label_1b8fe4:
    // 0x1b8fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b8fe8:
    // 0x1b8fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8fec:
    // 0x1b8fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8ff0:
    // 0x1b8ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8ff4:
    // 0x1b8ff4: 0x806a4b0  j           func_1A92C0
label_1b8ff8:
    if (ctx->pc == 0x1B8FF8u) {
        ctx->pc = 0x1B8FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FF4u;
        // 0x1b8ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FFCu;
        goto label_1b8ffc;
    }
    ctx->pc = 0x1B8FF4u;
    ctx->pc = 0x1B8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FF4u;
    // 0x1b8ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A92C0u, 0x1B8FF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B8FFCu;
label_1b8ffc:
    // 0x1b8ffc: 0x0  nop
    ctx->pc = 0x1b8ffcu;
    // NOP
label_1b9000:
    // 0x1b9000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b9004:
    // 0x1b9004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9008:
    // 0x1b9008: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b900c:
    // 0x1b900c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9010:
    // 0x1b9010: 0x3e00008  jr          $ra
label_1b9014:
    if (ctx->pc == 0x1B9014u) {
        ctx->pc = 0x1B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9010u;
        // 0x1b9014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9018u;
        goto label_fallthrough_0x1b9010;
    }
    ctx->pc = 0x1B9010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9010u;
        // 0x1b9014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9010:
    ctx->pc = 0x1B9018u;
}
