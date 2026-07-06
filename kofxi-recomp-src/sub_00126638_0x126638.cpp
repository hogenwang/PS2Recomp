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

// Function: sub_00126638
// Address: 0x126638 - 0x126890
void sub_00126638_0x126638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126638_0x126638");
#endif

    switch (ctx->pc) {
        case 0x1266d4u: goto label_1266d4;
        case 0x126720u: goto label_126720;
        case 0x126724u: goto label_126724;
        case 0x126750u: goto label_126750;
        case 0x126794u: goto label_126794;
        case 0x1267acu: goto label_1267ac;
        case 0x1267d4u: goto label_1267d4;
        case 0x126868u: goto label_126868;
        default: break;
    }

    ctx->pc = 0x126638u;

    // 0x126638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12663c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12663cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126640: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x126640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x126644: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x126644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x126648: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12664c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12664cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x126650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126654: 0x25f6bdf8  addiu       $s6, $t7, -0x4208
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x126658: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12665c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12665cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126660: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126664: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x126664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x126668: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x126668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12666c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12666cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126674: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x126674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x126678: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x126678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12667c: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x12667cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x126680: 0xddeec208  ld          $t6, -0x3DF8($t7)
    ctx->pc = 0x126680u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 15), 4294951432)));
    // 0x126684: 0x8e6d0004  lw          $t5, 0x4($s3)
    ctx->pc = 0x126684u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x126688: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12668c: 0xae282d  daddu       $a1, $a1, $t6
    ctx->pc = 0x12668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 14));
    // 0x126690: 0x1afa824  and         $s5, $t5, $t7
    ctx->pc = 0x126690u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x126694: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x126694u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x126698: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126698u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12669c: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x12669cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1266a0: 0x8deec210  lw          $t6, -0x3DF0($t7)
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951440)));
    // 0x1266a4: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1266a4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1266a8: 0x11d40008  beq         $t6, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1266A8u;
    {
        const bool branch_taken_0x1266a8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 20));
        ctx->pc = 0x1266ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266A8u;
        // 0x1266ac: 0x2758821  addu        $s1, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266a8) {
            ctx->pc = 0x1266CCu;
            goto label_1266cc;
        }
    }
    ctx->pc = 0x1266B0u;
    // 0x1266b0: 0x12783c  dsll32      $t7, $s2, 0
    ctx->pc = 0x1266b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1266b4: 0x240ef000  addiu       $t6, $zero, -0x1000
    ctx->pc = 0x1266b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1266b8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1266b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1266bc: 0x65ef0fff  daddiu      $t7, $t7, 0xFFF
    ctx->pc = 0x1266bcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4095);
    // 0x1266c0: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x1266c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x1266c4: 0xf903c  dsll32      $s2, $t7, 0
    ctx->pc = 0x1266c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1266c8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1266c8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_1266cc:
    // 0x1266cc: 0xc04a5c2  jal         func_129708
    ctx->pc = 0x1266CCu;
    SET_GPR_U32(ctx, 31, 0x1266D4u);
    ctx->pc = 0x1266D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266CCu;
    // 0x1266d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129708u, 0x1266CCu, 0x1266D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266D4u;
label_1266d4:
    // 0x1266d4: 0x1054001e  beq         $v0, $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x1266D4u;
    {
        const bool branch_taken_0x1266d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1266D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266D4u;
        // 0x1266d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266d4) {
            ctx->pc = 0x126750u;
            goto label_126750;
        }
    }
    ctx->pc = 0x1266DCu;
    // 0x1266dc: 0x51782b  sltu        $t7, $v0, $s1
    ctx->pc = 0x1266dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1266e0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1266E0u;
    {
        const bool branch_taken_0x1266e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1266E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266E0u;
        // 0x1266e4: 0x3c0e0036  lui         $t6, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266e0) {
            ctx->pc = 0x1266F4u;
            goto label_1266f4;
        }
    }
    ctx->pc = 0x1266E8u;
    // 0x1266e8: 0x5676001a  bnel        $s3, $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x1266E8u;
    {
        const bool branch_taken_0x1266e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x1266e8) {
            ctx->pc = 0x1266ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1266E8u;
            // 0x1266ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126754u;
            goto label_126754;
        }
    }
    ctx->pc = 0x1266F0u;
    // 0x1266f0: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x1266f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
label_1266f4:
    // 0x1266f4: 0x8dcfc228  lw          $t7, -0x3DD8($t6)
    ctx->pc = 0x1266f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294951464)));
    // 0x1266f8: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x1266f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1266fc: 0x1611001f  bne         $s0, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1266FCu;
    {
        const bool branch_taken_0x1266fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x126700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266FCu;
        // 0x126700: 0xadcfc228  sw          $t7, -0x3DD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 4294951464), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266fc) {
            ctx->pc = 0x12677Cu;
            goto label_12677c;
        }
    }
    ctx->pc = 0x126704u;
    // 0x126704: 0x320f0fff  andi        $t7, $s0, 0xFFF
    ctx->pc = 0x126704u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x126708: 0x15e0001d  bnez        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x126708u;
    {
        const bool branch_taken_0x126708 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126708u;
        // 0x12670c: 0x3c0d0036  lui         $t5, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126708) {
            ctx->pc = 0x126780u;
            goto label_126780;
        }
    }
    ctx->pc = 0x126710u;
    // 0x126710: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x126710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x126714: 0x8ece0008  lw          $t6, 0x8($s6)
    ctx->pc = 0x126714u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x126718: 0x344f0001  ori         $t7, $v0, 0x1
    ctx->pc = 0x126718u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12671c: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x12671cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
label_126720:
    // 0x126720: 0x3c0a0036  lui         $t2, 0x36
    ctx->pc = 0x126720u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
label_126724:
    // 0x126724: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x126724u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x126728: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126728u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12672c: 0xdd4cc218  ld          $t4, -0x3DE8($t2)
    ctx->pc = 0x12672cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 10), 4294951448)));
    // 0x126730: 0x8deec228  lw          $t6, -0x3DD8($t7)
    ctx->pc = 0x126730u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294951464)));
    // 0x126734: 0xdd2dc220  ld          $t5, -0x3DE0($t1)
    ctx->pc = 0x126734u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 9), 4294951456)));
    // 0x126738: 0x18e782b  sltu        $t7, $t4, $t6
    ctx->pc = 0x126738u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12673c: 0x1ae582b  sltu        $t3, $t5, $t6
    ctx->pc = 0x12673cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x126740: 0x1cf600b  movn        $t4, $t6, $t7
    ctx->pc = 0x126740u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 14));
    // 0x126744: 0x1cb680b  movn        $t5, $t6, $t3
    ctx->pc = 0x126744u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 14));
    // 0x126748: 0xfd4cc218  sd          $t4, -0x3DE8($t2)
    ctx->pc = 0x126748u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294951448), GPR_U64(ctx, 12));
    // 0x12674c: 0xfd2dc220  sd          $t5, -0x3DE0($t1)
    ctx->pc = 0x12674cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294951456), GPR_U64(ctx, 13));
label_126750:
    // 0x126750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126754:
    // 0x126754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12675c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12675cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126760: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126764: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126764u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126768: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x126768u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12676c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12676cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126774: 0x3e00008  jr          $ra
    ctx->pc = 0x126774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126774u;
        // 0x126778: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12677Cu;
label_12677c:
    // 0x12677c: 0x3c0d0036  lui         $t5, 0x36
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
label_126780:
    // 0x126780: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x126780u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126784: 0x8daec210  lw          $t6, -0x3DF0($t5)
    ctx->pc = 0x126784u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294951440)));
    // 0x126788: 0x55cf003b  bnel        $t6, $t7, . + 4 + (0x3B << 2)
    ctx->pc = 0x126788u;
    {
        const bool branch_taken_0x126788 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x126788) {
            ctx->pc = 0x12678Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126788u;
            // 0x12678c: 0x3c0d0036  lui         $t5, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126878u;
            goto label_126878;
        }
    }
    ctx->pc = 0x126790u;
    // 0x126790: 0xadb0c210  sw          $s0, -0x3DF0($t5)
    ctx->pc = 0x126790u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294951440), GPR_U32(ctx, 16));
label_126794:
    // 0x126794: 0x260f0008  addiu       $t7, $s0, 0x8
    ctx->pc = 0x126794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x126798: 0x31e5000f  andi        $a1, $t7, 0xF
    ctx->pc = 0x126798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
    // 0x12679c: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x12679Cu;
    {
        const bool branch_taken_0x12679c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1267A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12679Cu;
        // 0x1267a0: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12679c) {
            ctx->pc = 0x126870u;
            goto label_126870;
        }
    }
    ctx->pc = 0x1267A4u;
    // 0x1267a4: 0x1e58823  subu        $s1, $t7, $a1
    ctx->pc = 0x1267a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1267a8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1267a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1267ac:
    // 0x1267ac: 0x2127821  addu        $t7, $s0, $s2
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1267b0: 0x240e1000  addiu       $t6, $zero, 0x1000
    ctx->pc = 0x1267b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1267b4: 0x31ef0fff  andi        $t7, $t7, 0xFFF
    ctx->pc = 0x1267b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4095);
    // 0x1267b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1267b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267bc: 0x1cf702f  dsubu       $t6, $t6, $t7
    ctx->pc = 0x1267bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 15));
    // 0x1267c0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1267c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1267c4: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x1267c4u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x1267c8: 0x22e8821  addu        $s1, $s1, $t6
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x1267cc: 0xc04a5c2  jal         func_129708
    ctx->pc = 0x1267CCu;
    SET_GPR_U32(ctx, 31, 0x1267D4u);
    ctx->pc = 0x1267D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1267CCu;
    // 0x1267d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129708u, 0x1267CCu, 0x1267D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267D4u;
label_1267d4:
    // 0x1267d4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1267d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1267d8: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1267D8u;
    {
        const bool branch_taken_0x1267d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1267DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267D8u;
        // 0x1267dc: 0x3c0d0036  lui         $t5, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1267d8) {
            ctx->pc = 0x1267E8u;
            goto label_1267e8;
        }
    }
    ctx->pc = 0x1267E0u;
    // 0x1267e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1267e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1267e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1267e8:
    // 0x1267e8: 0x507823  subu        $t7, $v0, $s0
    ctx->pc = 0x1267e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1267ec: 0x8daec228  lw          $t6, -0x3DD8($t5)
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294951464)));
    // 0x1267f0: 0x1f11021  addu        $v0, $t7, $s1
    ctx->pc = 0x1267f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1267f4: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1267f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x1267f8: 0x344c0001  ori         $t4, $v0, 0x1
    ctx->pc = 0x1267f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1267fc: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x1267fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x126800: 0x25efbdf8  addiu       $t7, $t7, -0x4208
    ctx->pc = 0x126800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950392));
    // 0x126804: 0xadaec228  sw          $t6, -0x3DD8($t5)
    ctx->pc = 0x126804u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294951464), GPR_U32(ctx, 14));
    // 0x126808: 0xadf00008  sw          $s0, 0x8($t7)
    ctx->pc = 0x126808u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 16));
    // 0x12680c: 0x126fffc4  beq         $s3, $t7, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12680Cu;
    {
        const bool branch_taken_0x12680c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x126810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12680Cu;
        // 0x126810: 0xae0c0004  sw          $t4, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12680c) {
            ctx->pc = 0x126720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126720;
        }
    }
    ctx->pc = 0x126814u;
    // 0x126814: 0x2eaf0010  sltiu       $t7, $s5, 0x10
    ctx->pc = 0x126814u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126818: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x126818u;
    {
        const bool branch_taken_0x126818 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126818u;
        // 0x12681c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126818) {
            ctx->pc = 0x126828u;
            goto label_126828;
        }
    }
    ctx->pc = 0x126820u;
    // 0x126820: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x126820u;
    {
        const bool branch_taken_0x126820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126820u;
        // 0x126824: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126820) {
            ctx->pc = 0x126750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126750;
        }
    }
    ctx->pc = 0x126828u;
label_126828:
    // 0x126828: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x126828u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12682c: 0x26adfff4  addiu       $t5, $s5, -0xC
    ctx->pc = 0x12682cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967284));
    // 0x126830: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x126830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x126834: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x126834u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x126838: 0x1afa824  and         $s5, $t5, $t7
    ctx->pc = 0x126838u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12683c: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x12683cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x126840: 0x1d57025  or          $t6, $t6, $s5
    ctx->pc = 0x126840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 21));
    // 0x126844: 0x2757821  addu        $t7, $s3, $s5
    ctx->pc = 0x126844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x126848: 0xae6e0004  sw          $t6, 0x4($s3)
    ctx->pc = 0x126848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 14));
    // 0x12684c: 0x2ead0010  sltiu       $t5, $s5, 0x10
    ctx->pc = 0x12684cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126850: 0xadec0008  sw          $t4, 0x8($t7)
    ctx->pc = 0x126850u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 12));
    // 0x126854: 0x15a0ffb2  bnez        $t5, . + 4 + (-0x4E << 2)
    ctx->pc = 0x126854u;
    {
        const bool branch_taken_0x126854 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126854u;
        // 0x126858: 0xadec0004  sw          $t4, 0x4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126854) {
            ctx->pc = 0x126720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126720;
        }
    }
    ctx->pc = 0x12685Cu;
    // 0x12685c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x12685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x126860: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x126860u;
    SET_GPR_U32(ctx, 31, 0x126868u);
    ctx->pc = 0x126864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126860u;
    // 0x126864: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x126860u, 0x126868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126868u;
label_126868:
    // 0x126868: 0x1000ffae  b           . + 4 + (-0x52 << 2)
    ctx->pc = 0x126868u;
    {
        const bool branch_taken_0x126868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126868u;
        // 0x12686c: 0x3c0a0036  lui         $t2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126868) {
            ctx->pc = 0x126724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126724;
        }
    }
    ctx->pc = 0x126870u;
label_126870:
    // 0x126870: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x126870u;
    {
        const bool branch_taken_0x126870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126870u;
        // 0x126874: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126870) {
            ctx->pc = 0x1267ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1267ac;
        }
    }
    ctx->pc = 0x126878u;
label_126878:
    // 0x126878: 0x2117023  subu        $t6, $s0, $s1
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12687c: 0x8dafc228  lw          $t7, -0x3DD8($t5)
    ctx->pc = 0x12687cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294951464)));
    // 0x126880: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x126880u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x126884: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x126884u;
    {
        const bool branch_taken_0x126884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126884u;
        // 0x126888: 0xadafc228  sw          $t7, -0x3DD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294951464), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126884) {
            ctx->pc = 0x126794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126794;
        }
    }
    ctx->pc = 0x12688Cu;
    // 0x12688c: 0x0  nop
    ctx->pc = 0x12688cu;
    // NOP
}
