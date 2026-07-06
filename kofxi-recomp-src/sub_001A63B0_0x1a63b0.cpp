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

// Function: sub_001A63B0
// Address: 0x1a63b0 - 0x1a6a40
void sub_001A63B0_0x1a63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A63B0_0x1a63b0");
#endif

    switch (ctx->pc) {
        case 0x1a6490u: goto label_1a6490;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a6820u: goto label_1a6820;
        case 0x1a687cu: goto label_1a687c;
        case 0x1a68b4u: goto label_1a68b4;
        case 0x1a68ccu: goto label_1a68cc;
        case 0x1a6920u: goto label_1a6920;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6998u: goto label_1a6998;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69d8u: goto label_1a69d8;
        default: break;
    }

    ctx->pc = 0x1a63b0u;

    // 0x1a63b0: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1a63b4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A63B4u;
    {
        const bool branch_taken_0x1a63b4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x24180  sll         $t0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63b4) {
            ctx->pc = 0x1A63CCu;
            goto label_1a63cc;
        }
    }
    ctx->pc = 0x1A63BCu;
    // 0x1a63bc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a63c0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1a63c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1a63c4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A63C4u;
    {
        const bool branch_taken_0x1a63c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A63C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C4u;
        // 0x1a63c8: 0x3c0b0037  lui         $t3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63c4) {
            ctx->pc = 0x1A63D8u;
            goto label_1a63d8;
        }
    }
    ctx->pc = 0x1A63CCu;
label_1a63cc:
    // 0x1a63cc: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a63d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A63D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D0u;
        // 0x1a63d4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A63D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A63D8u;
label_1a63d8:
    // 0x1a63d8: 0x2569e118  addiu       $t1, $t3, -0x1EE8
    ctx->pc = 0x1a63d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
    // 0x1a63dc: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x1a63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1a63e0: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A63E0u;
    {
        const bool branch_taken_0x1a63e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a63e0) {
            ctx->pc = 0x1A63E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A63E0u;
            // 0x1a63e4: 0x8d04000c  lw          $a0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A63F4u;
            goto label_1a63f4;
        }
    }
    ctx->pc = 0x1A63E8u;
    // 0x1a63e8: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a63ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A63ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63ECu;
        // 0x1a63f0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A63ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A63F4u;
label_1a63f4:
    // 0x1a63f4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1a63f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1a63f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A63F8u;
    {
        const bool branch_taken_0x1a63f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63f8) {
            ctx->pc = 0x1A642Cu;
            goto label_1a642c;
        }
    }
    ctx->pc = 0x1A6400u;
    // 0x1a6400: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1a6400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a6404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6404u;
    {
        const bool branch_taken_0x1a6404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6404u;
        // 0x1a6408: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6404) {
            ctx->pc = 0x1A6414u;
            goto label_1a6414;
        }
    }
    ctx->pc = 0x1A640Cu;
    // 0x1a640c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A640Cu;
    {
        const bool branch_taken_0x1a640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A640Cu;
        // 0x1a6410: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a640c) {
            ctx->pc = 0x1A6418u;
            goto label_1a6418;
        }
    }
    ctx->pc = 0x1A6414u;
label_1a6414:
    // 0x1a6414: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x1a6414u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
label_1a6418:
    // 0x1a6418: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6418u;
    {
        const bool branch_taken_0x1a6418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6418) {
            ctx->pc = 0x1A641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6418u;
            // 0x1a641c: 0xad000004  sw          $zero, 0x4($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A642Cu;
            goto label_1a642c;
        }
    }
    ctx->pc = 0x1A6420u;
    // 0x1a6420: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1a6420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a6424: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a6424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a6428: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1a6428u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_1a642c:
    // 0x1a642c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A642Cu;
    {
        const bool branch_taken_0x1a642c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A642Cu;
        // 0x1a6430: 0xad060028  sw          $a2, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a642c) {
            ctx->pc = 0x1A6448u;
            goto label_1a6448;
        }
    }
    ctx->pc = 0x1A6434u;
    // 0x1a6434: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6438: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1a6438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1a643c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6440: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A6440u;
    {
        const bool branch_taken_0x1a6440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6440u;
        // 0x1a6444: 0xad02000c  sw          $v0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6440) {
            ctx->pc = 0x1A64E0u;
            goto label_1a64e0;
        }
    }
    ctx->pc = 0x1A6448u;
label_1a6448:
    // 0x1a6448: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x1a6448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1a644c: 0xfd050020  sd          $a1, 0x20($t0)
    ctx->pc = 0x1a644cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 5));
    // 0x1a6450: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1a6450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1a6454: 0xad1c002c  sw          $gp, 0x2C($t0)
    ctx->pc = 0x1a6454u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 28));
    // 0x1a6458: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1a645c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a6460: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A6460u;
    {
        const bool branch_taken_0x1a6460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6460u;
        // 0x1a6464: 0xad070030  sw          $a3, 0x30($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6460) {
            ctx->pc = 0x1A64E0u;
            goto label_1a64e0;
        }
    }
    ctx->pc = 0x1A6468u;
    // 0x1a6468: 0xdd020020  ld          $v0, 0x20($t0)
    ctx->pc = 0x1a6468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1a646c: 0x2565e118  addiu       $a1, $t3, -0x1EE8
    ctx->pc = 0x1a646cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
    // 0x1a6470: 0xdd030010  ld          $v1, 0x10($t0)
    ctx->pc = 0x1a6470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a6474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6478: 0xdd040018  ld          $a0, 0x18($t0)
    ctx->pc = 0x1a6478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1a647c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a647cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a6480: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a6484: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6484u;
    {
        const bool branch_taken_0x1a6484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6484u;
        // 0x1a6488: 0x44302f  dsubu       $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6484) {
            ctx->pc = 0x1A6494u;
            goto label_1a6494;
        }
    }
    ctx->pc = 0x1A648Cu;
    // 0x1a648c: 0x0  nop
    ctx->pc = 0x1a648cu;
    // NOP
label_1a6490:
    // 0x1a6490: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1a6490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a6494:
    // 0x1a6494: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6494u;
    {
        const bool branch_taken_0x1a6494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6494) {
            ctx->pc = 0x1A6498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6494u;
            // 0x1a6498: 0xad070004  sw          $a3, 0x4($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A64C0u;
            goto label_1a64c0;
        }
    }
    ctx->pc = 0x1A649Cu;
    // 0x1a649c: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1a649cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a64a0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1a64a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a64a4: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x1a64a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1a64a8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a64a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a64ac: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1a64acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x1a64b0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1a64b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a64b4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A64B4u;
    {
        const bool branch_taken_0x1a64b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a64b4) {
            ctx->pc = 0x1A64B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A64B4u;
            // 0x1a64b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a6490;
        }
    }
    ctx->pc = 0x1A64BCu;
    // 0x1a64bc: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1a64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_1a64c0:
    // 0x1a64c0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A64C0u;
    {
        const bool branch_taken_0x1a64c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64C0u;
        // 0x1a64c4: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64c0) {
            ctx->pc = 0x1A64CCu;
            goto label_1a64cc;
        }
    }
    ctx->pc = 0x1A64C8u;
    // 0x1a64c8: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x1a64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
label_1a64cc:
    // 0x1a64cc: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A64CCu;
    {
        const bool branch_taken_0x1a64cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64CCu;
        // 0x1a64d0: 0x2562e118  addiu       $v0, $t3, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64cc) {
            ctx->pc = 0x1A64DCu;
            goto label_1a64dc;
        }
    }
    ctx->pc = 0x1A64D4u;
    // 0x1a64d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A64D4u;
    {
        const bool branch_taken_0x1a64d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64D4u;
        // 0x1a64d8: 0xace80000  sw          $t0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64d4) {
            ctx->pc = 0x1A64E0u;
            goto label_1a64e0;
        }
    }
    ctx->pc = 0x1A64DCu;
label_1a64dc:
    // 0x1a64dc: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1a64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
label_1a64e0:
    // 0x1a64e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a64e4: 0x2564e118  addiu       $a0, $t3, -0x1EE8
    ctx->pc = 0x1a64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959384));
    // 0x1a64e8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a64e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a64ec: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a64ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a64f0: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a64f0u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
    // 0x1a64f4: 0xdd6ae118  ld          $t2, -0x1EE8($t3)
    ctx->pc = 0x1a64f4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 4294959384)));
    // 0x1a64f8: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a64f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x1a64fc: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A64FCu;
    {
        const bool branch_taken_0x1a64fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64FCu;
        // 0x1a6500: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64fc) {
            ctx->pc = 0x1A650Cu;
            goto label_1a650c;
        }
    }
    ctx->pc = 0x1A6504u;
    // 0x1a6504: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a6504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6508: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a6508u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a650c:
    // 0x1a650c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a650cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1a6510: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a6510u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1a6514: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a6514u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1a6518: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1a6518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x1a651c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x1a6520: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x1a6520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x1a6524: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1a6524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6528: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a652c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a6530: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A6530u;
    {
        const bool branch_taken_0x1a6530 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6530u;
        // 0x1a6534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6530) {
            ctx->pc = 0x1A6684u;
            goto label_1a6684;
        }
    }
    ctx->pc = 0x1A6538u;
    // 0x1a6538: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a653c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6540: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1a6540u;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a6544: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6544u;
    {
        const bool branch_taken_0x1a6544 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6544) {
            ctx->pc = 0x1A6548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6544u;
            // 0x1a6548: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6574u;
            goto label_1a6574;
        }
    }
    ctx->pc = 0x1A654Cu;
    // 0x1a654c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6550: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6554: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x1a6554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x1a6558: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1a6558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
    // 0x1a655c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1a655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x1a6560: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a6560u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1a6564: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a6564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6568: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x1a6568u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
    // 0x1a656c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A656Cu;
        // 0x1a6570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6574u;
label_1a6574:
    // 0x1a6574: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a6574u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6578: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a6578u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a657c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a657cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a6580: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a6580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a6584: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6584u;
    {
        const bool branch_taken_0x1a6584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6584u;
        // 0x1a6588: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6584) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A658Cu;
    // 0x1a658c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a658cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a6590: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x1a6590u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
    // 0x1a6594: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a6594u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a6598: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a6598u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a659c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a659cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a65a0: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a65a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a65a4: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a65a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a65a8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A65A8u;
    {
        const bool branch_taken_0x1a65a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65A8u;
        // 0x1a65ac: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65a8) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A65B0u;
    // 0x1a65b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a65b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65b4: 0x0  nop
    ctx->pc = 0x1a65b4u;
    // NOP
label_1a65b8:
    // 0x1a65b8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a65bc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A65BCu;
    {
        const bool branch_taken_0x1a65bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65BCu;
        // 0x1a65c0: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65bc) {
            ctx->pc = 0x1A65F0u;
            goto label_1a65f0;
        }
    }
    ctx->pc = 0x1A65C4u;
    // 0x1a65c4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a65c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a65c8: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a65c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a65cc: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a65ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a65d0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a65d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1a65d4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a65d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x1a65d8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a65d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a65dc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A65DCu;
    {
        const bool branch_taken_0x1a65dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a65dc) {
            ctx->pc = 0x1A65E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A65DCu;
            // 0x1a65e0: 0xeb102f  dsubu       $v0, $a3, $t3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A65F4u;
            goto label_1a65f4;
        }
    }
    ctx->pc = 0x1A65E4u;
    // 0x1a65e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1A65E4u;
    {
        const bool branch_taken_0x1a65e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65E4u;
        // 0x1a65e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65e4) {
            ctx->pc = 0x1A65B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A65ECu;
label_1a65ec:
    // 0x1a65ec: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x1a65ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a65f0:
    // 0x1a65f0: 0xeb102f  dsubu       $v0, $a3, $t3
    ctx->pc = 0x1a65f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
label_1a65f4:
    // 0x1a65f4: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1a65f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x1a65f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A65F8u;
    {
        const bool branch_taken_0x1a65f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F8u;
        // 0x1a65fc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65f8) {
            ctx->pc = 0x1A664Cu;
            goto label_1a664c;
        }
    }
    ctx->pc = 0x1A6600u;
    // 0x1a6600: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a6604: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a6604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a6608: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x1a6608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x1a660c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a660cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1a6610: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x1a6610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x1a6614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a661c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6620: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a6624: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a6624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6628: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a6628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x1a662c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6630: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a6630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a6634: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a6634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a6638: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a6638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a663c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6640: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a6640u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1a6644: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6644u;
        // 0x1a6648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A664Cu;
label_1a664c:
    // 0x1a664c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a664cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6650: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a6654: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a6654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6658: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a6658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
    // 0x1a665c: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a665cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1a6660: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x1a6660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x1a6664: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x1a6664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
    // 0x1a6668: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a666c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a666cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6670: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a6670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a6674: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1a6674u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1a6678: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1a6678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
    // 0x1a667c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a667cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x1a6680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6684:
    // 0x1a6684: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A668Cu;
    // 0x1a668c: 0x0  nop
    ctx->pc = 0x1a668cu;
    // NOP
    // 0x1a6690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6694: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a669c: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a669cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1a66a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a66a4: 0x2650e118  addiu       $s0, $s2, -0x1EE8
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959384));
    // 0x1a66a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a66ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a66acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a66b0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66B0u;
    {
        const bool branch_taken_0x1a66b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a66b0) {
            ctx->pc = 0x1A66C4u;
            goto label_1a66c4;
        }
    }
    ctx->pc = 0x1A66B8u;
    // 0x1a66b8: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a66bc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1A66BCu;
    {
        const bool branch_taken_0x1a66bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66BCu;
        // 0x1a66c0: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66bc) {
            ctx->pc = 0x1A673Cu;
            goto label_1a673c;
        }
    }
    ctx->pc = 0x1A66C4u;
label_1a66c4:
    // 0x1a66c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a66c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66C8u;
    {
        const bool branch_taken_0x1a66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66c8) {
            ctx->pc = 0x1A66DCu;
            goto label_1a66dc;
        }
    }
    ctx->pc = 0x1A66D0u;
    // 0x1a66d0: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a66d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1A66D4u;
    {
        const bool branch_taken_0x1a66d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66D4u;
        // 0x1a66d8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66d4) {
            ctx->pc = 0x1A673Cu;
            goto label_1a673c;
        }
    }
    ctx->pc = 0x1A66DCu;
label_1a66dc:
    // 0x1a66dc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A66DCu;
    SET_GPR_U32(ctx, 31, 0x1A66E4u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A66DCu, 0x1A66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66E4u;
label_1a66e4:
    // 0x1a66e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a66e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a66e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a66e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66ec: 0xc043258  jal         func_10C960
    ctx->pc = 0x1A66ECu;
    SET_GPR_U32(ctx, 31, 0x1A66F4u);
    ctx->pc = 0x1A66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66ECu;
    // 0x1a66f0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C960u, 0x1A66ECu, 0x1A66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66F4u;
label_1a66f4:
    // 0x1a66f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A66F4u;
    {
        const bool branch_taken_0x1a66f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66F4u;
        // 0x1a66f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66f4) {
            ctx->pc = 0x1A6724u;
            goto label_1a6724;
        }
    }
    ctx->pc = 0x1A66FCu;
    // 0x1a66fc: 0xc0435d0  jal         func_10D740
    ctx->pc = 0x1A66FCu;
    SET_GPR_U32(ctx, 31, 0x1A6704u);
    ctx->pc = 0x1A6700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66FCu;
    // 0x1a6700: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D740u, 0x1A66FCu, 0x1A6704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6704u;
label_1a6704:
    // 0x1a6704: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a6704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6708: 0x24040c00  addiu       $a0, $zero, 0xC00
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1a670c: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x1a670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x1a6710: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6714: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a6714u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x1a6718: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a6718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1a671c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a671cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1a6720: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a6724:
    // 0x1a6724: 0xfe40e118  sd          $zero, -0x1EE8($s2)
    ctx->pc = 0x1a6724u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294959384), GPR_U64(ctx, 0));
    // 0x1a6728: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6728u;
    {
        const bool branch_taken_0x1a6728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6728u;
        // 0x1a672c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6728) {
            ctx->pc = 0x1A6738u;
            goto label_1a6738;
        }
    }
    ctx->pc = 0x1A6730u;
    // 0x1a6730: 0xf  sync
    ctx->pc = 0x1a6730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6734: 0x42000038  ei
    ctx->pc = 0x1a6734u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a6738:
    // 0x1a6738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a673c:
    // 0x1a673c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a673cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a674c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A674Cu;
        // 0x1a6750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6754u;
    // 0x1a6754: 0x0  nop
    ctx->pc = 0x1a6754u;
    // NOP
    // 0x1a6758: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a675c: 0x8c43e120  lw          $v1, -0x1EE0($v0)
    ctx->pc = 0x1a675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959392)));
    // 0x1a6760: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6760u;
    {
        const bool branch_taken_0x1a6760 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6760u;
        // 0x1a6764: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6760) {
            ctx->pc = 0x1A6774u;
            goto label_1a6774;
        }
    }
    ctx->pc = 0x1A6768u;
    // 0x1a6768: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a6768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x1a676c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A676Cu;
        // 0x1a6770: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6774u;
label_1a6774:
    // 0x1a6774: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x1a6774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x1a6778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1a677c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A677Cu;
        // 0x1a6780: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6784u;
    // 0x1a6784: 0x0  nop
    ctx->pc = 0x1a6784u;
    // NOP
    // 0x1a6788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a678c: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x1a678cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x1a6790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a679c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67a0: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x1a67a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a67a4: 0x820019  multu       $a0, $v0
    ctx->pc = 0x1a67a4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a67a8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1a67a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1a67ac: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x1a67acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x1a67b0: 0x70008010  mfhi1       $s0
    ctx->pc = 0x1a67b0u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x1a67b4: 0x3012  mflo        $a2
    ctx->pc = 0x1a67b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a67b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a67b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a67bc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1a67bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a67c0: 0x2010  mfhi        $a0
    ctx->pc = 0x1a67c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a67c4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1a67c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1a67c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a67c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1a67cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1a67ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a67d0: 0x70003012  mflo1       $a2
    ctx->pc = 0x1a67d0u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x1a67d4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1a67d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a67d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1a67d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1a67dc: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x1A67DCu;
    SET_GPR_U32(ctx, 31, 0x1A67E4u);
    ctx->pc = 0x1A67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A67DCu;
    // 0x1a67e0: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x1A67DCu, 0x1A67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A67E4u;
label_1a67e4:
    // 0x1a67e4: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x1a67e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1a67e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a67e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a67ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a67ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a67f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A67F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67F0u;
        // 0x1a67f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A67F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A67F8u;
    // 0x1a67f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a67fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a6800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6808: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a680c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a680cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a6814: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a6814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6818: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x1A6818u;
    SET_GPR_U32(ctx, 31, 0x1A6820u);
    ctx->pc = 0x1A681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6818u;
    // 0x1a681c: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x1A6818u, 0x1A6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6820u;
label_1a6820:
    // 0x1a6820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6828: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A6828u;
    {
        const bool branch_taken_0x1a6828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6828) {
            ctx->pc = 0x1A682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6828u;
            // 0x1a682c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6830u;
            goto label_1a6830;
        }
    }
    ctx->pc = 0x1A6830u;
label_1a6830:
    // 0x1a6830: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A6830u;
    {
        const bool branch_taken_0x1a6830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6830u;
        // 0x1a6834: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6830) {
            ctx->pc = 0x1A6888u;
            goto label_1a6888;
        }
    }
    ctx->pc = 0x1A6838u;
    // 0x1a6838: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x1a6838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x1a683c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x1a683cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a6840: 0x3012  mflo        $a2
    ctx->pc = 0x1a6840u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1a6844: 0x1810  mfhi        $v1
    ctx->pc = 0x1a6844u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a6848: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1a6848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1a684c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a6850: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1a6850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1a6854: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a6858: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x1a6858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x1a685c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x1a685cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x1a6860: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1a6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1a6864: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x1a6864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x1a6868: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x1a6868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1a686c: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x1a686cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x1a6870: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x1a6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a6874: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x1A6874u;
    SET_GPR_U32(ctx, 31, 0x1A687Cu);
    ctx->pc = 0x1A6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6874u;
    // 0x1a6878: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x1A6874u, 0x1A687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A687Cu;
label_1a687c:
    // 0x1a687c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6880: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6884: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a6888:
    // 0x1a6888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a688c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a688cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6890: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6898: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6898u;
        // 0x1a689c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A68A0u;
    // 0x1a68a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a68a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a68a4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A68A4u;
    {
        const bool branch_taken_0x1a68a4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A4u;
        // 0x1a68a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68a4) {
            ctx->pc = 0x1A68BCu;
            goto label_1a68bc;
        }
    }
    ctx->pc = 0x1A68ACu;
    // 0x1a68ac: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x1A68ACu;
    SET_GPR_U32(ctx, 31, 0x1A68B4u);
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x1A68ACu, 0x1A68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68B4u;
label_1a68b4:
    // 0x1a68b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A68B4u;
    {
        const bool branch_taken_0x1a68b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68B4u;
        // 0x1a68b8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68b4) {
            ctx->pc = 0x1A68D0u;
            goto label_1a68d0;
        }
    }
    ctx->pc = 0x1A68BCu;
label_1a68bc:
    // 0x1a68bc: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x1a68bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x1a68c0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1a68c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a68c4: 0xc0480bc  jal         func_1202F0
    ctx->pc = 0x1A68C4u;
    SET_GPR_U32(ctx, 31, 0x1A68CCu);
    ctx->pc = 0x1A68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68C4u;
    // 0x1a68c8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202F0u, 0x1A68C4u, 0x1A68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68CCu;
label_1a68cc:
    // 0x1a68cc: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x1a68ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a68d0:
    // 0x1a68d0: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x1a68d4: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x1a68d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x1a68d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a68d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a68dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a68dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a68e0: 0x0  nop
    ctx->pc = 0x1a68e0u;
    // NOP
    // 0x1a68e4: 0x0  nop
    ctx->pc = 0x1a68e4u;
    // NOP
    // 0x1a68e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a68e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1a68ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A68ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A68F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68ECu;
        // 0x1a68f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A68ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A68F4u;
    // 0x1a68f4: 0x0  nop
    ctx->pc = 0x1a68f4u;
    // NOP
    // 0x1a68f8: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x1a68fc: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x1a68fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x1a6900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a6900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a690c: 0x0  nop
    ctx->pc = 0x1a690cu;
    // NOP
    // 0x1a6910: 0x0  nop
    ctx->pc = 0x1a6910u;
    // NOP
    // 0x1a6914: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1a6914u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x1a6918: 0xc04814a  jal         func_120528
    ctx->pc = 0x1A6918u;
    SET_GPR_U32(ctx, 31, 0x1A6920u);
    ctx->pc = 0x120528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120528u, 0x1A6918u, 0x1A6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6920u;
label_1a6920:
    // 0x1a6920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6924u;
        // 0x1a6928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A692Cu;
    // 0x1a692c: 0x0  nop
    ctx->pc = 0x1a692cu;
    // NOP
    // 0x1a6930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a693c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A693Cu;
    SET_GPR_U32(ctx, 31, 0x1A6944u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A693Cu, 0x1A6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6944u;
label_1a6944:
    // 0x1a6944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6948: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a694c: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a6950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a6954: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1a6954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1a6958: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6958u;
    {
        const bool branch_taken_0x1a6958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6958) {
            ctx->pc = 0x1A6978u;
            goto label_1a6978;
        }
    }
    ctx->pc = 0x1A6960u;
    // 0x1a6960: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A6960u;
    {
        const bool branch_taken_0x1a6960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6960u;
        // 0x1a6964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6960) {
            ctx->pc = 0x1A69B4u;
            goto label_1a69b4;
        }
    }
    ctx->pc = 0x1A6968u;
    // 0x1a6968: 0xf  sync
    ctx->pc = 0x1a6968u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a696c: 0x42000038  ei
    ctx->pc = 0x1a696cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a6970: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6970u;
    {
        const bool branch_taken_0x1a6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6970u;
        // 0x1a6974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6970) {
            ctx->pc = 0x1A69B8u;
            goto label_1a69b8;
        }
    }
    ctx->pc = 0x1A6978u;
label_1a6978:
    // 0x1a6978: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a697c: 0x3442f3ff  ori         $v0, $v0, 0xF3FF
    ctx->pc = 0x1a697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62463);
    // 0x1a6980: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a6980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6984: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x1a6984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1a6988: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a6988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a698c: 0xac240810  sw          $a0, 0x810($at)
    ctx->pc = 0x1a698cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x1a6990: 0xc069aae  jal         func_1A6AB8
    ctx->pc = 0x1A6990u;
    SET_GPR_U32(ctx, 31, 0x1A6998u);
    ctx->pc = 0x1A6AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AB8u, 0x1A6990u, 0x1A6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6998u;
label_1a6998:
    // 0x1a6998: 0xc069ca6  jal         func_1A7298
    ctx->pc = 0x1A6998u;
    SET_GPR_U32(ctx, 31, 0x1A69A0u);
    ctx->pc = 0x1A699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6998u;
    // 0x1a699c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7298u, 0x1A6998u, 0x1A69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69A0u;
label_1a69a0:
    // 0x1a69a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A69A0u;
    {
        const bool branch_taken_0x1a69a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69A0u;
        // 0x1a69a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69a0) {
            ctx->pc = 0x1A69B4u;
            goto label_1a69b4;
        }
    }
    ctx->pc = 0x1A69A8u;
    // 0x1a69a8: 0xf  sync
    ctx->pc = 0x1a69a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a69ac: 0x42000038  ei
    ctx->pc = 0x1a69acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a69b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a69b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a69b4:
    // 0x1a69b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a69b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a69b8:
    // 0x1a69b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a69b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a69bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A69BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69BCu;
        // 0x1a69c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A69BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A69C4u;
    // 0x1a69c4: 0x0  nop
    ctx->pc = 0x1a69c4u;
    // NOP
    // 0x1a69c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a69cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a69d0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x1A69D0u;
    SET_GPR_U32(ctx, 31, 0x1A69D8u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1A69D0u, 0x1A69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69D8u;
label_1a69d8:
    // 0x1a69d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a69d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a69e0: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a69e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x1a69e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a69e8: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x1a69e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1a69ec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A69ECu;
    {
        const bool branch_taken_0x1a69ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a69ec) {
            ctx->pc = 0x1A6A0Cu;
            goto label_1a6a0c;
        }
    }
    ctx->pc = 0x1A69F4u;
    // 0x1a69f4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A69F4u;
    {
        const bool branch_taken_0x1a69f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69F4u;
        // 0x1a69f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69f4) {
            ctx->pc = 0x1A6A34u;
            goto label_1a6a34;
        }
    }
    ctx->pc = 0x1A69FCu;
    // 0x1a69fc: 0xf  sync
    ctx->pc = 0x1a69fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6a00: 0x42000038  ei
    ctx->pc = 0x1a6a00u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a6a04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A6A04u;
    {
        const bool branch_taken_0x1a6a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A04u;
        // 0x1a6a08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a04) {
            ctx->pc = 0x1A6A38u;
            goto label_1a6a38;
        }
    }
    ctx->pc = 0x1A6A0Cu;
label_1a6a0c:
    // 0x1a6a0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a6a10: 0x3442f37f  ori         $v0, $v0, 0xF37F
    ctx->pc = 0x1a6a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62335);
    // 0x1a6a14: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a6a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a6a18: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1a6a1c: 0xac240810  sw          $a0, 0x810($at)
    ctx->pc = 0x1a6a1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x1a6a20: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A20u;
    {
        const bool branch_taken_0x1a6a20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A20u;
        // 0x1a6a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a20) {
            ctx->pc = 0x1A6A34u;
            goto label_1a6a34;
        }
    }
    ctx->pc = 0x1A6A28u;
    // 0x1a6a28: 0xf  sync
    ctx->pc = 0x1a6a28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a6a2c: 0x42000038  ei
    ctx->pc = 0x1a6a2cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a6a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a34:
    // 0x1a6a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6a38:
    // 0x1a6a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A38u;
        // 0x1a6a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6A40u;
}
