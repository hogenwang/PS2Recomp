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

// Function: sub_00299FC0
// Address: 0x299fc0 - 0x29a0e0
void sub_00299FC0_0x299fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299FC0_0x299fc0");
#endif

    switch (ctx->pc) {
        case 0x299fc0u: goto label_299fc0;
        case 0x299fc4u: goto label_299fc4;
        case 0x299fc8u: goto label_299fc8;
        case 0x299fccu: goto label_299fcc;
        case 0x299fd0u: goto label_299fd0;
        case 0x299fd4u: goto label_299fd4;
        case 0x299fd8u: goto label_299fd8;
        case 0x299fdcu: goto label_299fdc;
        case 0x299fe0u: goto label_299fe0;
        case 0x299fe4u: goto label_299fe4;
        case 0x299fe8u: goto label_299fe8;
        case 0x299fecu: goto label_299fec;
        case 0x299ff0u: goto label_299ff0;
        case 0x299ff4u: goto label_299ff4;
        case 0x299ff8u: goto label_299ff8;
        case 0x299ffcu: goto label_299ffc;
        case 0x29a000u: goto label_29a000;
        case 0x29a004u: goto label_29a004;
        case 0x29a008u: goto label_29a008;
        case 0x29a00cu: goto label_29a00c;
        case 0x29a010u: goto label_29a010;
        case 0x29a014u: goto label_29a014;
        case 0x29a018u: goto label_29a018;
        case 0x29a01cu: goto label_29a01c;
        case 0x29a020u: goto label_29a020;
        case 0x29a024u: goto label_29a024;
        case 0x29a028u: goto label_29a028;
        case 0x29a02cu: goto label_29a02c;
        case 0x29a030u: goto label_29a030;
        case 0x29a034u: goto label_29a034;
        case 0x29a038u: goto label_29a038;
        case 0x29a03cu: goto label_29a03c;
        case 0x29a040u: goto label_29a040;
        case 0x29a044u: goto label_29a044;
        case 0x29a048u: goto label_29a048;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a050u: goto label_29a050;
        case 0x29a054u: goto label_29a054;
        case 0x29a058u: goto label_29a058;
        case 0x29a05cu: goto label_29a05c;
        case 0x29a060u: goto label_29a060;
        case 0x29a064u: goto label_29a064;
        case 0x29a068u: goto label_29a068;
        case 0x29a06cu: goto label_29a06c;
        case 0x29a070u: goto label_29a070;
        case 0x29a074u: goto label_29a074;
        case 0x29a078u: goto label_29a078;
        case 0x29a07cu: goto label_29a07c;
        case 0x29a080u: goto label_29a080;
        case 0x29a084u: goto label_29a084;
        case 0x29a088u: goto label_29a088;
        case 0x29a08cu: goto label_29a08c;
        case 0x29a090u: goto label_29a090;
        case 0x29a094u: goto label_29a094;
        case 0x29a098u: goto label_29a098;
        case 0x29a09cu: goto label_29a09c;
        case 0x29a0a0u: goto label_29a0a0;
        case 0x29a0a4u: goto label_29a0a4;
        case 0x29a0a8u: goto label_29a0a8;
        case 0x29a0acu: goto label_29a0ac;
        case 0x29a0b0u: goto label_29a0b0;
        case 0x29a0b4u: goto label_29a0b4;
        case 0x29a0b8u: goto label_29a0b8;
        case 0x29a0bcu: goto label_29a0bc;
        case 0x29a0c0u: goto label_29a0c0;
        case 0x29a0c4u: goto label_29a0c4;
        case 0x29a0c8u: goto label_29a0c8;
        case 0x29a0ccu: goto label_29a0cc;
        case 0x29a0d0u: goto label_29a0d0;
        case 0x29a0d4u: goto label_29a0d4;
        case 0x29a0d8u: goto label_29a0d8;
        case 0x29a0dcu: goto label_29a0dc;
        default: break;
    }

    ctx->pc = 0x299fc0u;

label_299fc0:
    // 0x299fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_299fc4:
    // 0x299fc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x299fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_299fc8:
    // 0x299fc8: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x299fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
label_299fcc:
    // 0x299fcc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x299fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_299fd0:
    // 0x299fd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x299fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_299fd4:
    // 0x299fd4: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x299fd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_299fd8:
    // 0x299fd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x299fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_299fdc:
    // 0x299fdc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299fdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299fe0:
    // 0x299fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299fe4:
    // 0x299fe4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x299fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_299fe8:
    // 0x299fe8: 0x8e425308  lw          $v0, 0x5308($s2)
    ctx->pc = 0x299fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21256)));
label_299fec:
    // 0x299fec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x299fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_299ff0:
    // 0x299ff0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x299ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_299ff4:
    // 0x299ff4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_299ff8:
    if (ctx->pc == 0x299FF8u) {
        ctx->pc = 0x299FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FF4u;
        // 0x299ff8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299FFCu;
        goto label_299ffc;
    }
    ctx->pc = 0x299FF4u;
    {
        const bool branch_taken_0x299ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x299FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FF4u;
        // 0x299ff8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ff4) {
            ctx->pc = 0x29A00Cu;
            goto label_29a00c;
        }
    }
    ctx->pc = 0x299FFCu;
label_299ffc:
    // 0x299ffc: 0xc0a670a  jal         func_299C28
label_29a000:
    if (ctx->pc == 0x29A000u) {
        ctx->pc = 0x29A004u;
        goto label_29a004;
    }
    ctx->pc = 0x299FFCu;
    SET_GPR_U32(ctx, 31, 0x29A004u);
    ctx->pc = 0x299C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299C28u, 0x299FFCu, 0x29A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A004u;
label_29a004:
    // 0x29a004: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_29a008:
    if (ctx->pc == 0x29A008u) {
        ctx->pc = 0x29A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A004u;
        // 0x29a008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A00Cu;
        goto label_29a00c;
    }
    ctx->pc = 0x29A004u;
    {
        const bool branch_taken_0x29a004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A004u;
        // 0x29a008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a004) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A00Cu;
label_29a00c:
    // 0x29a00c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_29a010:
    // 0x29a010: 0x32118000  andi        $s1, $s0, 0x8000
    ctx->pc = 0x29a010u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
label_29a014:
    // 0x29a014: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x29a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_29a018:
    // 0x29a018: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29a01c:
    // 0x29a01c: 0xc0a8bf6  jal         func_2A2FD8
label_29a020:
    if (ctx->pc == 0x29A020u) {
        ctx->pc = 0x29A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A01Cu;
        // 0x29a020: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A024u;
        goto label_29a024;
    }
    ctx->pc = 0x29A01Cu;
    SET_GPR_U32(ctx, 31, 0x29A024u);
    ctx->pc = 0x29A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A01Cu;
    // 0x29a020: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29A01Cu, 0x29A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A024u;
label_29a024:
    // 0x29a024: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29a028:
    if (ctx->pc == 0x29A028u) {
        ctx->pc = 0x29A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A024u;
        // 0x29a028: 0x8ea45308  lw          $a0, 0x5308($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A02Cu;
        goto label_29a02c;
    }
    ctx->pc = 0x29A024u;
    {
        const bool branch_taken_0x29a024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A024u;
        // 0x29a028: 0x8ea45308  lw          $a0, 0x5308($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a024) {
            ctx->pc = 0x29A034u;
            goto label_29a034;
        }
    }
    ctx->pc = 0x29A02Cu;
label_29a02c:
    // 0x29a02c: 0x10000022  b           . + 4 + (0x22 << 2)
label_29a030:
    if (ctx->pc == 0x29A030u) {
        ctx->pc = 0x29A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A02Cu;
        // 0x29a030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A034u;
        goto label_29a034;
    }
    ctx->pc = 0x29A02Cu;
    {
        const bool branch_taken_0x29a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A02Cu;
        // 0x29a030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a02c) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A034u;
label_29a034:
    // 0x29a034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a038:
    // 0x29a038: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x29a038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_29a03c:
    // 0x29a03c: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x29a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_29a040:
    // 0x29a040: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x29a040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_29a044:
    // 0x29a044: 0xc0a61dc  jal         func_298770
label_29a048:
    if (ctx->pc == 0x29A048u) {
        ctx->pc = 0x29A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A044u;
        // 0x29a048: 0xac53000c  sw          $s3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A04Cu;
        goto label_29a04c;
    }
    ctx->pc = 0x29A044u;
    SET_GPR_U32(ctx, 31, 0x29A04Cu);
    ctx->pc = 0x29A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A044u;
    // 0x29a048: 0xac53000c  sw          $s3, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298770u, 0x29A044u, 0x29A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A04Cu;
label_29a04c:
    // 0x29a04c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a050:
    // 0x29a050: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_29a054:
    if (ctx->pc == 0x29A054u) {
        ctx->pc = 0x29A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A050u;
        // 0x29a054: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A058u;
        goto label_29a058;
    }
    ctx->pc = 0x29A050u;
    {
        const bool branch_taken_0x29a050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A050u;
        // 0x29a054: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a050) {
            ctx->pc = 0x29A0A4u;
            goto label_29a0a4;
        }
    }
    ctx->pc = 0x29A058u;
label_29a058:
    // 0x29a058: 0x8c435318  lw          $v1, 0x5318($v0)
    ctx->pc = 0x29a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21272)));
label_29a05c:
    // 0x29a05c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_29a060:
    if (ctx->pc == 0x29A060u) {
        ctx->pc = 0x29A064u;
        goto label_29a064;
    }
    ctx->pc = 0x29A05Cu;
    {
        const bool branch_taken_0x29a05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a05c) {
            ctx->pc = 0x29A094u;
            goto label_29a094;
        }
    }
    ctx->pc = 0x29A064u;
label_29a064:
    // 0x29a064: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29a068:
    // 0x29a068: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29a06c:
    // 0x29a06c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x29a06cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a070:
    // 0x29a070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29a074:
    if (ctx->pc == 0x29A074u) {
        ctx->pc = 0x29A078u;
        goto label_29a078;
    }
    ctx->pc = 0x29A070u;
    {
        const bool branch_taken_0x29a070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a070) {
            ctx->pc = 0x29A094u;
            goto label_29a094;
        }
    }
    ctx->pc = 0x29A078u;
label_29a078:
    // 0x29a078: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_29a07c:
    // 0x29a07c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29a080:
    // 0x29a080: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29a080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29a084:
    // 0x29a084: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29a088:
    // 0x29a088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29a08c:
    // 0x29a08c: 0x40f809  jalr        $v0
label_29a090:
    if (ctx->pc == 0x29A090u) {
        ctx->pc = 0x29A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A08Cu;
        // 0x29a090: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A094u;
        goto label_29a094;
    }
    ctx->pc = 0x29A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29A094u);
        ctx->pc = 0x29A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A08Cu;
        // 0x29a090: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A08Cu, 0x29A094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A094u;
label_29a094:
    // 0x29a094: 0xc0a8c0a  jal         func_2A3028
label_29a098:
    if (ctx->pc == 0x29A098u) {
        ctx->pc = 0x29A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A094u;
        // 0x29a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A09Cu;
        goto label_29a09c;
    }
    ctx->pc = 0x29A094u;
    SET_GPR_U32(ctx, 31, 0x29A09Cu);
    ctx->pc = 0x29A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A094u;
    // 0x29a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29A094u, 0x29A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A09Cu;
label_29a09c:
    // 0x29a09c: 0x10000006  b           . + 4 + (0x6 << 2)
label_29a0a0:
    if (ctx->pc == 0x29A0A0u) {
        ctx->pc = 0x29A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A09Cu;
        // 0x29a0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0A4u;
        goto label_29a0a4;
    }
    ctx->pc = 0x29A09Cu;
    {
        const bool branch_taken_0x29a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A09Cu;
        // 0x29a0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a09c) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A0A4u;
label_29a0a4:
    // 0x29a0a4: 0x8e445308  lw          $a0, 0x5308($s2)
    ctx->pc = 0x29a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21256)));
label_29a0a8:
    // 0x29a0a8: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x29a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_29a0ac:
    // 0x29a0ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_29a0b0:
    if (ctx->pc == 0x29A0B0u) {
        ctx->pc = 0x29A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0ACu;
        // 0x29a0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0B4u;
        goto label_29a0b4;
    }
    ctx->pc = 0x29A0ACu;
    {
        const bool branch_taken_0x29a0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0ACu;
        // 0x29a0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0ac) {
            ctx->pc = 0x29A0B8u;
            goto label_29a0b8;
        }
    }
    ctx->pc = 0x29A0B4u;
label_29a0b4:
    // 0x29a0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a0b8:
    // 0x29a0b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29a0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29a0bc:
    // 0x29a0bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29a0bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29a0c0:
    // 0x29a0c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29a0c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29a0c4:
    // 0x29a0c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29a0c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a0c8:
    // 0x29a0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29a0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a0cc:
    // 0x29a0cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a0d0:
    // 0x29a0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a0d4:
    // 0x29a0d4: 0x3e00008  jr          $ra
label_29a0d8:
    if (ctx->pc == 0x29A0D8u) {
        ctx->pc = 0x29A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0D4u;
        // 0x29a0d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0DCu;
        goto label_29a0dc;
    }
    ctx->pc = 0x29A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0D4u;
        // 0x29a0d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A0DCu;
label_29a0dc:
    // 0x29a0dc: 0x0  nop
    ctx->pc = 0x29a0dcu;
    // NOP
    if (ctx->pc == 0x29a0dcu) { ctx->pc = 0x29a0e0u; }
}
