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

// Function: sub_00128170
// Address: 0x128170 - 0x1282e8
void sub_00128170_0x128170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128170_0x128170");
#endif

    switch (ctx->pc) {
        case 0x1281a4u: goto label_1281a4;
        case 0x12820cu: goto label_12820c;
        case 0x128234u: goto label_128234;
        case 0x12824cu: goto label_12824c;
        case 0x12826cu: goto label_12826c;
        case 0x1282b0u: goto label_1282b0;
        case 0x1282d0u: goto label_1282d0;
        default: break;
    }

    ctx->pc = 0x128170u;

    // 0x128170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x128170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x128174: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x128174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128178: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x128178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12817c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12817cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x128180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x128180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128184: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x128184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x128188: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x128188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12818c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12818cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x128190: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x128190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128194: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x128194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x128198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x128198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12819c: 0xc049d12  jal         func_127448
    ctx->pc = 0x12819Cu;
    SET_GPR_U32(ctx, 31, 0x1281A4u);
    ctx->pc = 0x1281A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12819Cu;
    // 0x1281a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x12819Cu, 0x1281A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1281A4u;
label_1281a4:
    // 0x1281a4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x1281a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x1281a8: 0x10683f  dsra32      $t5, $s0, 0
    ctx->pc = 0x1281a8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1281ac: 0x3c0e000f  lui         $t6, 0xF
    ctx->pc = 0x1281acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
    // 0x1281b0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1281b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1281b4: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x1281b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x1281b8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1281b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x1281bc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1281bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1281c0: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x1281c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
    // 0x1281c4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1281c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1281c8: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x1281c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x1281cc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1281ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1281d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1281d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1281d4: 0x20f8025  or          $s0, $s0, $t7
    ctx->pc = 0x1281d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x1281d8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x1281d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x1281dc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1281DCu;
    {
        const bool branch_taken_0x1281dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281DCu;
        // 0x1281e0: 0x24530014  addiu       $s3, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281dc) {
            ctx->pc = 0x1281F0u;
            goto label_1281f0;
        }
    }
    ctx->pc = 0x1281E4u;
    // 0x1281e4: 0x3c0f0010  lui         $t7, 0x10
    ctx->pc = 0x1281e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16 << 16));
    // 0x1281e8: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x1281e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x1281ec: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x1281ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
label_1281f0:
    // 0x1281f0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1281f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1281f4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1281f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1281f8: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1281F8u;
    {
        const bool branch_taken_0x1281f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281F8u;
        // 0x1281fc: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281f8) {
            ctx->pc = 0x1282C8u;
            goto label_1282c8;
        }
    }
    ctx->pc = 0x128200u;
    // 0x128200: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x128200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x128204: 0xc049df6  jal         func_1277D8
    ctx->pc = 0x128204u;
    SET_GPR_U32(ctx, 31, 0x12820Cu);
    ctx->pc = 0x128208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128204u;
    // 0x128208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1277D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1277D8u, 0x128204u, 0x12820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12820Cu;
label_12820c:
    // 0x12820c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12820Cu;
    {
        const bool branch_taken_0x12820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12820Cu;
        // 0x128210: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12820c) {
            ctx->pc = 0x1282BCu;
            goto label_1282bc;
        }
    }
    ctx->pc = 0x128214u;
    // 0x128214: 0x26823  negu        $t5, $v0
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x128218: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x128218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12821c: 0x1ae7004  sllv        $t6, $t6, $t5
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x128220: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x128220u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x128224: 0xae2f0014  sw          $t7, 0x14($s1)
    ctx->pc = 0x128224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
    // 0x128228: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x128228u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12822c: 0x4e7006  srlv        $t6, $t6, $v0
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x128230: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x128230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
label_128234:
    // 0x128234: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x128234u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x128238: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x128238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12823c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12823cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128240: 0x1ed700a  movz        $t6, $t7, $t5
    ctx->pc = 0x128240u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x128244: 0xae6d0004  sw          $t5, 0x4($s3)
    ctx->pc = 0x128244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 13));
    // 0x128248: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x128248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12824c:
    // 0x12824c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x12824Cu;
    {
        const bool branch_taken_0x12824c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12824Cu;
        // 0x128250: 0xae2e0010  sw          $t6, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12824c) {
            ctx->pc = 0x128294u;
            goto label_128294;
        }
    }
    ctx->pc = 0x128254u;
    // 0x128254: 0x2427021  addu        $t6, $s2, $v0
    ctx->pc = 0x128254u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x128258: 0x240f0035  addiu       $t7, $zero, 0x35
    ctx->pc = 0x128258u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x12825c: 0x25cefbcd  addiu       $t6, $t6, -0x433
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966221));
    // 0x128260: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x128264: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x128264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x128268: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x128268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_12826c:
    // 0x12826c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12826cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128270: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x128270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128274: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x128278: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12827c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12827cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x128280: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x128280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128284: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x128288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x128288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12828c: 0x3e00008  jr          $ra
    ctx->pc = 0x12828Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12828Cu;
        // 0x128290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12828Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128294u;
label_128294:
    // 0x128294: 0x244efbce  addiu       $t6, $v0, -0x432
    ctx->pc = 0x128294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966222));
    // 0x128298: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12829c: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12829cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x1282a0: 0x26f7821  addu        $t7, $s3, $t7
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x1282a4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1282a8: 0xc049dd6  jal         func_127758
    ctx->pc = 0x1282A8u;
    SET_GPR_U32(ctx, 31, 0x1282B0u);
    ctx->pc = 0x1282ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282A8u;
    // 0x1282ac: 0x8de4fffc  lw          $a0, -0x4($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127758u, 0x1282A8u, 0x1282B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282B0u;
label_1282b0:
    // 0x1282b0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1282b4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1282B4u;
    {
        const bool branch_taken_0x1282b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282B4u;
        // 0x1282b8: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282b4) {
            ctx->pc = 0x12826Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12826c;
        }
    }
    ctx->pc = 0x1282BCu;
label_1282bc:
    // 0x1282bc: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1282c0: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1282C0u;
    {
        const bool branch_taken_0x1282c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282C0u;
        // 0x1282c4: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c0) {
            ctx->pc = 0x128234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128234;
        }
    }
    ctx->pc = 0x1282C8u;
label_1282c8:
    // 0x1282c8: 0xc049df6  jal         func_1277D8
    ctx->pc = 0x1282C8u;
    SET_GPR_U32(ctx, 31, 0x1282D0u);
    ctx->pc = 0x1282CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282C8u;
    // 0x1282cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1277D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1277D8u, 0x1282C8u, 0x1282D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282D0u;
label_1282d0:
    // 0x1282d0: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x1282d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1282d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1282d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1282d8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1282dc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1282DCu;
    {
        const bool branch_taken_0x1282dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282DCu;
        // 0x1282e0: 0xae2f0014  sw          $t7, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282dc) {
            ctx->pc = 0x12824Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12824c;
        }
    }
    ctx->pc = 0x1282E4u;
    // 0x1282e4: 0x0  nop
    ctx->pc = 0x1282e4u;
    // NOP
}
