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

// Function: sub_0029CFD0
// Address: 0x29cfd0 - 0x29d130
void sub_0029CFD0_0x29cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CFD0_0x29cfd0");
#endif

    switch (ctx->pc) {
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        case 0x29d034u: goto label_29d034;
        case 0x29d038u: goto label_29d038;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        case 0x29d090u: goto label_29d090;
        case 0x29d094u: goto label_29d094;
        case 0x29d098u: goto label_29d098;
        case 0x29d09cu: goto label_29d09c;
        case 0x29d0a0u: goto label_29d0a0;
        case 0x29d0a4u: goto label_29d0a4;
        case 0x29d0a8u: goto label_29d0a8;
        case 0x29d0acu: goto label_29d0ac;
        case 0x29d0b0u: goto label_29d0b0;
        case 0x29d0b4u: goto label_29d0b4;
        case 0x29d0b8u: goto label_29d0b8;
        case 0x29d0bcu: goto label_29d0bc;
        case 0x29d0c0u: goto label_29d0c0;
        case 0x29d0c4u: goto label_29d0c4;
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0ccu: goto label_29d0cc;
        case 0x29d0d0u: goto label_29d0d0;
        case 0x29d0d4u: goto label_29d0d4;
        case 0x29d0d8u: goto label_29d0d8;
        case 0x29d0dcu: goto label_29d0dc;
        case 0x29d0e0u: goto label_29d0e0;
        case 0x29d0e4u: goto label_29d0e4;
        case 0x29d0e8u: goto label_29d0e8;
        case 0x29d0ecu: goto label_29d0ec;
        case 0x29d0f0u: goto label_29d0f0;
        case 0x29d0f4u: goto label_29d0f4;
        case 0x29d0f8u: goto label_29d0f8;
        case 0x29d0fcu: goto label_29d0fc;
        case 0x29d100u: goto label_29d100;
        case 0x29d104u: goto label_29d104;
        case 0x29d108u: goto label_29d108;
        case 0x29d10cu: goto label_29d10c;
        case 0x29d110u: goto label_29d110;
        case 0x29d114u: goto label_29d114;
        case 0x29d118u: goto label_29d118;
        case 0x29d11cu: goto label_29d11c;
        case 0x29d120u: goto label_29d120;
        case 0x29d124u: goto label_29d124;
        case 0x29d128u: goto label_29d128;
        case 0x29d12cu: goto label_29d12c;
        default: break;
    }

    ctx->pc = 0x29cfd0u;

label_29cfd0:
    // 0x29cfd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_29cfd4:
    // 0x29cfd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29cfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cfd8:
    // 0x29cfd8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x29cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_29cfdc:
    // 0x29cfdc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x29cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_29cfe0:
    // 0x29cfe0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29cfe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29cfe4:
    // 0x29cfe4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_29cfe8:
    // 0x29cfe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29cfe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29cfec:
    // 0x29cfec: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x29cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_29cff0:
    // 0x29cff0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29cff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29cff4:
    // 0x29cff4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_29cff8:
    // 0x29cff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cffc:
    // 0x29cffc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29cffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29d000:
    // 0x29d000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d004:
    // 0x29d004: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29d008:
    // 0x29d008: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_29d00c:
    // 0x29d00c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29d010:
    if (ctx->pc == 0x29D010u) {
        ctx->pc = 0x29D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D00Cu;
        // 0x29d010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D014u;
        goto label_29d014;
    }
    ctx->pc = 0x29D00Cu;
    {
        const bool branch_taken_0x29d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D00Cu;
        // 0x29d010: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d00c) {
            ctx->pc = 0x29D048u;
            goto label_29d048;
        }
    }
    ctx->pc = 0x29D014u;
label_29d014:
    // 0x29d014: 0x10000009  b           . + 4 + (0x9 << 2)
label_29d018:
    if (ctx->pc == 0x29D018u) {
        ctx->pc = 0x29D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D014u;
        // 0x29d018: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D01Cu;
        goto label_29d01c;
    }
    ctx->pc = 0x29D014u;
    {
        const bool branch_taken_0x29d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D014u;
        // 0x29d018: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d014) {
            ctx->pc = 0x29D03Cu;
            goto label_29d03c;
        }
    }
    ctx->pc = 0x29D01Cu;
label_29d01c:
    // 0x29d01c: 0x0  nop
    ctx->pc = 0x29d01cu;
    // NOP
label_29d020:
    // 0x29d020: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x29d020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_29d024:
    // 0x29d024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29d028:
    if (ctx->pc == 0x29D028u) {
        ctx->pc = 0x29D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D024u;
        // 0x29d028: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D02Cu;
        goto label_29d02c;
    }
    ctx->pc = 0x29D024u;
    {
        const bool branch_taken_0x29d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D024u;
        // 0x29d028: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d024) {
            ctx->pc = 0x29D048u;
            goto label_29d048;
        }
    }
    ctx->pc = 0x29D02Cu;
label_29d02c:
    // 0x29d02c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x29d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_29d030:
    // 0x29d030: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_29d034:
    // 0x29d034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29d038:
    if (ctx->pc == 0x29D038u) {
        ctx->pc = 0x29D03Cu;
        goto label_29d03c;
    }
    ctx->pc = 0x29D034u;
    {
        const bool branch_taken_0x29d034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d034) {
            ctx->pc = 0x29D048u;
            goto label_29d048;
        }
    }
    ctx->pc = 0x29D03Cu;
label_29d03c:
    // 0x29d03c: 0x1482fff8  bne         $a0, $v0, . + 4 + (-0x8 << 2)
label_29d040:
    if (ctx->pc == 0x29D040u) {
        ctx->pc = 0x29D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D03Cu;
        // 0x29d040: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D044u;
        goto label_29d044;
    }
    ctx->pc = 0x29D03Cu;
    {
        const bool branch_taken_0x29d03c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D03Cu;
        // 0x29d040: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d03c) {
            ctx->pc = 0x29D020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d020;
        }
    }
    ctx->pc = 0x29D044u;
label_29d044:
    // 0x29d044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29d044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d048:
    // 0x29d048: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_29d04c:
    if (ctx->pc == 0x29D04Cu) {
        ctx->pc = 0x29D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D048u;
        // 0x29d04c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D050u;
        goto label_29d050;
    }
    ctx->pc = 0x29D048u;
    {
        const bool branch_taken_0x29d048 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D048u;
        // 0x29d04c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d048) {
            ctx->pc = 0x29D06Cu;
            goto label_29d06c;
        }
    }
    ctx->pc = 0x29D050u;
label_29d050:
    // 0x29d050: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_29d054:
    // 0x29d054: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x29d054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_29d058:
    // 0x29d058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d05c:
    // 0x29d05c: 0xc0a5648  jal         func_295920
label_29d060:
    if (ctx->pc == 0x29D060u) {
        ctx->pc = 0x29D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D05Cu;
        // 0x29d060: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D064u;
        goto label_29d064;
    }
    ctx->pc = 0x29D05Cu;
    SET_GPR_U32(ctx, 31, 0x29D064u);
    ctx->pc = 0x29D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D05Cu;
    // 0x29d060: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29D05Cu, 0x29D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D064u;
label_29d064:
    // 0x29d064: 0x10000024  b           . + 4 + (0x24 << 2)
label_29d068:
    if (ctx->pc == 0x29D068u) {
        ctx->pc = 0x29D06Cu;
        goto label_29d06c;
    }
    ctx->pc = 0x29D064u;
    {
        const bool branch_taken_0x29d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d064) {
            ctx->pc = 0x29D0F8u;
            goto label_29d0f8;
        }
    }
    ctx->pc = 0x29D06Cu;
label_29d06c:
    // 0x29d06c: 0xc0a5b7e  jal         func_296DF8
label_29d070:
    if (ctx->pc == 0x29D070u) {
        ctx->pc = 0x29D074u;
        goto label_29d074;
    }
    ctx->pc = 0x29D06Cu;
    SET_GPR_U32(ctx, 31, 0x29D074u);
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x29D06Cu, 0x29D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D074u;
label_29d074:
    // 0x29d074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d078:
    // 0x29d078: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_29d07c:
    if (ctx->pc == 0x29D07Cu) {
        ctx->pc = 0x29D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D078u;
        // 0x29d07c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D080u;
        goto label_29d080;
    }
    ctx->pc = 0x29D078u;
    {
        const bool branch_taken_0x29d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D078u;
        // 0x29d07c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d078) {
            ctx->pc = 0x29D10Cu;
            goto label_29d10c;
        }
    }
    ctx->pc = 0x29D080u;
label_29d080:
    // 0x29d080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d084:
    // 0x29d084: 0xc0a5bae  jal         func_296EB8
label_29d088:
    if (ctx->pc == 0x29D088u) {
        ctx->pc = 0x29D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D084u;
        // 0x29d088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D08Cu;
        goto label_29d08c;
    }
    ctx->pc = 0x29D084u;
    SET_GPR_U32(ctx, 31, 0x29D08Cu);
    ctx->pc = 0x29D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D084u;
    // 0x29d088: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EB8u, 0x29D084u, 0x29D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D08Cu;
label_29d08c:
    // 0x29d08c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_29d090:
    if (ctx->pc == 0x29D090u) {
        ctx->pc = 0x29D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D08Cu;
        // 0x29d090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D094u;
        goto label_29d094;
    }
    ctx->pc = 0x29D08Cu;
    {
        const bool branch_taken_0x29d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D08Cu;
        // 0x29d090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d08c) {
            ctx->pc = 0x29D0F8u;
            goto label_29d0f8;
        }
    }
    ctx->pc = 0x29D094u;
label_29d094:
    // 0x29d094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d098:
    // 0x29d098: 0xc0a5148  jal         func_294520
label_29d09c:
    if (ctx->pc == 0x29D09Cu) {
        ctx->pc = 0x29D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D098u;
        // 0x29d09c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0A0u;
        goto label_29d0a0;
    }
    ctx->pc = 0x29D098u;
    SET_GPR_U32(ctx, 31, 0x29D0A0u);
    ctx->pc = 0x29D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D098u;
    // 0x29d09c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x29D098u, 0x29D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0A0u;
label_29d0a0:
    // 0x29d0a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29d0a4:
    // 0x29d0a4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x29d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_29d0a8:
    // 0x29d0a8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_29d0ac:
    if (ctx->pc == 0x29D0ACu) {
        ctx->pc = 0x29D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0A8u;
        // 0x29d0ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0B0u;
        goto label_29d0b0;
    }
    ctx->pc = 0x29D0A8u;
    {
        const bool branch_taken_0x29d0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0A8u;
        // 0x29d0ac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0a8) {
            ctx->pc = 0x29D0E4u;
            goto label_29d0e4;
        }
    }
    ctx->pc = 0x29D0B0u;
label_29d0b0:
    // 0x29d0b0: 0xc0a5b9c  jal         func_296E70
label_29d0b4:
    if (ctx->pc == 0x29D0B4u) {
        ctx->pc = 0x29D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0B0u;
        // 0x29d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0B8u;
        goto label_29d0b8;
    }
    ctx->pc = 0x29D0B0u;
    SET_GPR_U32(ctx, 31, 0x29D0B8u);
    ctx->pc = 0x29D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0B0u;
    // 0x29d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x29D0B0u, 0x29D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0B8u;
label_29d0b8:
    // 0x29d0b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29d0bc:
    // 0x29d0bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29d0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d0c0:
    // 0x29d0c0: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x29d0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_29d0c4:
    // 0x29d0c4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29d0c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d0c8:
    // 0x29d0c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29d0cc:
    // 0x29d0cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d0d0:
    // 0x29d0d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x29d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_29d0d4:
    // 0x29d0d4: 0x40f809  jalr        $v0
label_29d0d8:
    if (ctx->pc == 0x29D0D8u) {
        ctx->pc = 0x29D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0D4u;
        // 0x29d0d8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0DCu;
        goto label_29d0dc;
    }
    ctx->pc = 0x29D0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D0DCu);
        ctx->pc = 0x29D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0D4u;
        // 0x29d0d8: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D0D4u, 0x29D0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D0DCu;
label_29d0dc:
    // 0x29d0dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_29d0e0:
    if (ctx->pc == 0x29D0E0u) {
        ctx->pc = 0x29D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0DCu;
        // 0x29d0e0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0E4u;
        goto label_29d0e4;
    }
    ctx->pc = 0x29D0DCu;
    {
        const bool branch_taken_0x29d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0DCu;
        // 0x29d0e0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0dc) {
            ctx->pc = 0x29D110u;
            goto label_29d110;
        }
    }
    ctx->pc = 0x29D0E4u;
label_29d0e4:
    // 0x29d0e4: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x29d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_29d0e8:
    // 0x29d0e8: 0x24060077  addiu       $a2, $zero, 0x77
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_29d0ec:
    // 0x29d0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d0f0:
    // 0x29d0f0: 0xc0a5648  jal         func_295920
label_29d0f4:
    if (ctx->pc == 0x29D0F4u) {
        ctx->pc = 0x29D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0F0u;
        // 0x29d0f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0F8u;
        goto label_29d0f8;
    }
    ctx->pc = 0x29D0F0u;
    SET_GPR_U32(ctx, 31, 0x29D0F8u);
    ctx->pc = 0x29D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0F0u;
    // 0x29d0f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29D0F0u, 0x29D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0F8u;
label_29d0f8:
    // 0x29d0f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29d0fc:
    if (ctx->pc == 0x29D0FCu) {
        ctx->pc = 0x29D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0F8u;
        // 0x29d0fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D100u;
        goto label_29d100;
    }
    ctx->pc = 0x29D0F8u;
    {
        const bool branch_taken_0x29d0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0F8u;
        // 0x29d0fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0f8) {
            ctx->pc = 0x29D10Cu;
            goto label_29d10c;
        }
    }
    ctx->pc = 0x29D100u;
label_29d100:
    // 0x29d100: 0xc0a5b9c  jal         func_296E70
label_29d104:
    if (ctx->pc == 0x29D104u) {
        ctx->pc = 0x29D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D100u;
        // 0x29d104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D108u;
        goto label_29d108;
    }
    ctx->pc = 0x29D100u;
    SET_GPR_U32(ctx, 31, 0x29D108u);
    ctx->pc = 0x29D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D100u;
    // 0x29d104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x29D100u, 0x29D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D108u;
label_29d108:
    // 0x29d108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d10c:
    // 0x29d10c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29d10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29d110:
    // 0x29d110: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x29d110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29d114:
    // 0x29d114: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x29d114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29d118:
    // 0x29d118: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29d118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29d11c:
    // 0x29d11c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x29d11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29d120:
    // 0x29d120: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29d120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d124:
    // 0x29d124: 0x3e00008  jr          $ra
label_29d128:
    if (ctx->pc == 0x29D128u) {
        ctx->pc = 0x29D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D124u;
        // 0x29d128: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D12Cu;
        goto label_29d12c;
    }
    ctx->pc = 0x29D124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D124u;
        // 0x29d128: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D12Cu;
label_29d12c:
    // 0x29d12c: 0x0  nop
    ctx->pc = 0x29d12cu;
    // NOP
}
