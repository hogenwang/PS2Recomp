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

// Function: sub_00166670
// Address: 0x166670 - 0x1667f0
void sub_00166670_0x166670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166670_0x166670");
#endif

    switch (ctx->pc) {
        case 0x166698u: goto label_166698;
        default: break;
    }

    ctx->pc = 0x166670u;

    // 0x166670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x166674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x166678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16667c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166680: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x166680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166688: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x166688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16668c: 0x920500f7  lbu         $a1, 0xF7($s0)
    ctx->pc = 0x16668cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 247)));
    // 0x166690: 0xc0592e4  jal         func_164B90
    ctx->pc = 0x166690u;
    SET_GPR_U32(ctx, 31, 0x166698u);
    ctx->pc = 0x166694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166690u;
    // 0x166694: 0x948400ea  lhu         $a0, 0xEA($a0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x166690u, 0x166698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166698u;
label_166698:
    // 0x166698: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16669c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1666a0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x1666a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1666a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1666a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1666a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1666A8u;
    {
        const bool branch_taken_0x1666a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A8u;
        // 0x1666ac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666a8) {
            ctx->pc = 0x1666C8u;
            goto label_1666c8;
        }
    }
    ctx->pc = 0x1666B0u;
    // 0x1666b0: 0x92020281  lbu         $v0, 0x281($s0)
    ctx->pc = 0x1666b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 641)));
    // 0x1666b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1666b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1666b8: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1666B8u;
    {
        const bool branch_taken_0x1666b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666b8) {
            ctx->pc = 0x1666BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1666B8u;
            // 0x1666bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1666C0u;
    // 0x1666c0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1666C0u;
    {
        const bool branch_taken_0x1666c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666C0u;
        // 0x1666c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666c0) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1666C8u;
label_1666c8:
    // 0x1666c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1666c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1666cc: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1666ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1666d0: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1666D0u;
    {
        const bool branch_taken_0x1666d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1666d0) {
            ctx->pc = 0x1666D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1666D0u;
            // 0x1666d4: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1667BCu;
            goto label_1667bc;
        }
    }
    ctx->pc = 0x1666D8u;
    // 0x1666d8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1666d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1666dc: 0x50620032  beql        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1666DCu;
    {
        const bool branch_taken_0x1666dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1666dc) {
            ctx->pc = 0x1666E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1666DCu;
            // 0x1666e0: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1667A8u;
            goto label_1667a8;
        }
    }
    ctx->pc = 0x1666E4u;
    // 0x1666e4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1666e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1666e8: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1666E8u;
    {
        const bool branch_taken_0x1666e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1666e8) {
            ctx->pc = 0x1666ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1666E8u;
            // 0x1666ec: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166794u;
            goto label_166794;
        }
    }
    ctx->pc = 0x1666F0u;
    // 0x1666f0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1666f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1666f4: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1666F4u;
    {
        const bool branch_taken_0x1666f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1666f4) {
            ctx->pc = 0x1666F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1666F4u;
            // 0x1666f8: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166780u;
            goto label_166780;
        }
    }
    ctx->pc = 0x1666FCu;
    // 0x1666fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x166700: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x166700u;
    {
        const bool branch_taken_0x166700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166700) {
            ctx->pc = 0x166704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166700u;
            // 0x166704: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16676Cu;
            goto label_16676c;
        }
    }
    ctx->pc = 0x166708u;
    // 0x166708: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x16670c: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16670Cu;
    {
        const bool branch_taken_0x16670c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16670c) {
            ctx->pc = 0x166710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16670Cu;
            // 0x166710: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166758u;
            goto label_166758;
        }
    }
    ctx->pc = 0x166714u;
    // 0x166714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x166714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166718: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166718u;
    {
        const bool branch_taken_0x166718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166718) {
            ctx->pc = 0x16671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166718u;
            // 0x16671c: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166744u;
            goto label_166744;
        }
    }
    ctx->pc = 0x166720u;
    // 0x166720: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166720u;
    {
        const bool branch_taken_0x166720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166720) {
            ctx->pc = 0x166724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166720u;
            // 0x166724: 0x92020282  lbu         $v0, 0x282($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166730u;
            goto label_166730;
        }
    }
    ctx->pc = 0x166728u;
    // 0x166728: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x166728u;
    {
        const bool branch_taken_0x166728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166728) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166730u;
label_166730:
    // 0x166730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166734: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x166734u;
    {
        const bool branch_taken_0x166734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166734) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x16673Cu;
    // 0x16673c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16673Cu;
    {
        const bool branch_taken_0x16673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16673Cu;
        // 0x166740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16673c) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x166744u;
label_166744:
    // 0x166744: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166748: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x166748u;
    {
        const bool branch_taken_0x166748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166748) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166750u;
    // 0x166750: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x166750u;
    {
        const bool branch_taken_0x166750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166750u;
        // 0x166754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166750) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x166758u;
label_166758:
    // 0x166758: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x166758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16675c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16675Cu;
    {
        const bool branch_taken_0x16675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16675c) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166764u;
    // 0x166764: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x166764u;
    {
        const bool branch_taken_0x166764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166764u;
        // 0x166768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166764) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x16676Cu;
label_16676c:
    // 0x16676c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x166770: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x166770u;
    {
        const bool branch_taken_0x166770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166770) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166778u;
    // 0x166778: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x166778u;
    {
        const bool branch_taken_0x166778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166778u;
        // 0x16677c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166778) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x166780u;
label_166780:
    // 0x166780: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x166780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x166784: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x166784u;
    {
        const bool branch_taken_0x166784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166784) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x16678Cu;
    // 0x16678c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16678Cu;
    {
        const bool branch_taken_0x16678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16678Cu;
        // 0x166790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16678c) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x166794u;
label_166794:
    // 0x166794: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x166798: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166798u;
    {
        const bool branch_taken_0x166798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166798) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x1667A0u;
    // 0x1667a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1667A0u;
    {
        const bool branch_taken_0x1667a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667A0u;
        // 0x1667a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667a0) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1667A8u;
label_1667a8:
    // 0x1667a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1667a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1667ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1667ACu;
    {
        const bool branch_taken_0x1667ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667ac) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x1667B4u;
    // 0x1667b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1667B4u;
    {
        const bool branch_taken_0x1667b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667B4u;
        // 0x1667b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667b4) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1667BCu;
label_1667bc:
    // 0x1667bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1667bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1667c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1667C0u;
    {
        const bool branch_taken_0x1667c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1667c0) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x1667C8u;
    // 0x1667c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1667C8u;
    {
        const bool branch_taken_0x1667c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C8u;
        // 0x1667cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667c8) {
            ctx->pc = 0x1667D4u;
            goto label_1667d4;
        }
    }
    ctx->pc = 0x1667D0u;
label_1667d0:
    // 0x1667d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1667d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1667d4:
    // 0x1667d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1667d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1667d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1667d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1667dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1667dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1667e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1667E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1667E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667E0u;
        // 0x1667e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1667E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1667E8u;
    // 0x1667e8: 0x0  nop
    ctx->pc = 0x1667e8u;
    // NOP
    // 0x1667ec: 0x0  nop
    ctx->pc = 0x1667ecu;
    // NOP
    if (ctx->pc == 0x1667ecu) { ctx->pc = 0x1667f0u; }
}
