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

// Function: sub_002F0868
// Address: 0x2f0868 - 0x2f0a00
void sub_002F0868_0x2f0868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0868_0x2f0868");
#endif

    switch (ctx->pc) {
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08ecu: goto label_2f08ec;
        case 0x2f08f4u: goto label_2f08f4;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f0948u: goto label_2f0948;
        case 0x2f0978u: goto label_2f0978;
        case 0x2f0998u: goto label_2f0998;
        case 0x2f09d0u: goto label_2f09d0;
        case 0x2f09e8u: goto label_2f09e8;
        default: break;
    }

    ctx->pc = 0x2f0868u;

    // 0x2f0868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f0868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f086c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f086cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f0870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0874: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f0874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f087c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f087cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f0880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f0880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f0884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f0884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f0888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f088c: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x2f088cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f0890: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f0894: 0x24e71658  addiu       $a3, $a3, 0x1658
    ctx->pc = 0x2f0894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5720));
    // 0x2f0898: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2f089c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f089cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08a0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f08a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08a4: 0x24050d62  addiu       $a1, $zero, 0xD62
    ctx->pc = 0x2f08a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3426));
    // 0x2f08a8: 0x8deaed5c  lw          $t2, -0x12A4($t7)
    ctx->pc = 0x2f08a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962524)));
    // 0x2f08ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2f08acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f08b0: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2f08b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2f08b4: 0x25f21680  addiu       $s2, $t7, 0x1680
    ctx->pc = 0x2f08b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 5760));
    // 0x2f08b8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F08B8u;
    SET_GPR_U32(ctx, 31, 0x2F08C0u);
    ctx->pc = 0x2F08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F08B8u;
    // 0x2f08bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F08B8u, 0x2F08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08C0u;
label_2f08c0:
    // 0x2f08c0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f08c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f08c4: 0x2a6e00f9  slti        $t6, $s3, 0xF9
    ctx->pc = 0x2f08c4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)249) ? 1 : 0);
    // 0x2f08c8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F08C8u;
    {
        const bool branch_taken_0x2f08c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08C8u;
        // 0x2f08cc: 0x25f4eca8  addiu       $s4, $t7, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f08c8) {
            ctx->pc = 0x2F0918u;
            goto label_2f0918;
        }
    }
    ctx->pc = 0x2F08D0u;
    // 0x2f08d0: 0x55c00012  bnel        $t6, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F08D0u;
    {
        const bool branch_taken_0x2f08d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f08d0) {
            ctx->pc = 0x2F08D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F08D0u;
            // 0x2f08d4: 0x8e8f00b4  lw          $t7, 0xB4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F091Cu;
            goto label_2f091c;
        }
    }
    ctx->pc = 0x2F08D8u;
    // 0x2f08d8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f08d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f08dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f08dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08e0: 0x24050d65  addiu       $a1, $zero, 0xD65
    ctx->pc = 0x2f08e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3429));
    // 0x2f08e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f08e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f08e8: 0x24e71698  addiu       $a3, $a3, 0x1698
    ctx->pc = 0x2f08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5784));
label_2f08ec:
    // 0x2f08ec: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F08ECu;
    SET_GPR_U32(ctx, 31, 0x2F08F4u);
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F08ECu, 0x2F08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08F4u;
label_2f08f4:
    // 0x2f08f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f08f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f08f8:
    // 0x2f08f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f08f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f08fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f08fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0900: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0904: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0908: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f0908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f090c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f0910: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0910u;
        // 0x2f0914: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0918u;
label_2f0918:
    // 0x2f0918: 0x8e8f00b4  lw          $t7, 0xB4($s4)
    ctx->pc = 0x2f0918u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_2f091c:
    // 0x2f091c: 0x2def0010  sltiu       $t7, $t7, 0x10
    ctx->pc = 0x2f091cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f0920: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0920u;
    {
        const bool branch_taken_0x2f0920 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0920u;
        // 0x2f0924: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0920) {
            ctx->pc = 0x2F0940u;
            goto label_2f0940;
        }
    }
    ctx->pc = 0x2F0928u;
    // 0x2f0928: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f0928u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f092c: 0x24050d6b  addiu       $a1, $zero, 0xD6B
    ctx->pc = 0x2f092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3435));
    // 0x2f0930: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0934: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x2f0934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x2f0938: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F0938u;
    {
        const bool branch_taken_0x2f0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0938u;
        // 0x2f093c: 0x24e716c0  addiu       $a3, $a3, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0938) {
            ctx->pc = 0x2F08ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f08ec;
        }
    }
    ctx->pc = 0x2F0940u;
label_2f0940:
    // 0x2f0940: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2F0940u;
    SET_GPR_U32(ctx, 31, 0x2F0948u);
    ctx->pc = 0x2F0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0940u;
    // 0x2f0944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2F0940u, 0x2F0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0948u;
label_2f0948:
    // 0x2f0948: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f094c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f094cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f0950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f0950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0954: 0x268d00b8  addiu       $t5, $s4, 0xB8
    ctx->pc = 0x2f0954u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), 184));
    // 0x2f0958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f095c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2f095cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2f0960: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x2f0960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x2f0964: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0964u;
    {
        const bool branch_taken_0x2f0964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0964u;
        // 0x2f0968: 0x24e716e0  addiu       $a3, $a3, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0964) {
            ctx->pc = 0x2F0980u;
            goto label_2f0980;
        }
    }
    ctx->pc = 0x2F096Cu;
    // 0x2f096c: 0x24050d72  addiu       $a1, $zero, 0xD72
    ctx->pc = 0x2f096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3442));
    // 0x2f0970: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F0970u;
    SET_GPR_U32(ctx, 31, 0x2F0978u);
    ctx->pc = 0x2F0974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0970u;
    // 0x2f0974: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F0970u, 0x2F0978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0978u;
label_2f0978:
    // 0x2f0978: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2F0978u;
    {
        const bool branch_taken_0x2f0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0978u;
        // 0x2f097c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0978) {
            ctx->pc = 0x2F08F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f08f8;
        }
    }
    ctx->pc = 0x2F0980u;
label_2f0980:
    // 0x2f0980: 0x8e8e00b4  lw          $t6, 0xB4($s4)
    ctx->pc = 0x2f0980u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2f0984: 0x240f002c  addiu       $t7, $zero, 0x2C
    ctx->pc = 0x2f0984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2f0988: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x2f0988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x2f098c: 0x1cd9021  addu        $s2, $t6, $t5
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2f0990: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F0990u;
    SET_GPR_U32(ctx, 31, 0x2F0998u);
    ctx->pc = 0x2F0994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0990u;
    // 0x2f0994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2F0990u, 0x2F0998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0998u;
label_2f0998:
    // 0x2f0998: 0xa2510000  sb          $s1, 0x0($s2)
    ctx->pc = 0x2f0998u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x2f099c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09a0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2f09a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2f09a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f09a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09a8: 0x8e8400a8  lw          $a0, 0xA8($s4)
    ctx->pc = 0x2f09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x2f09ac: 0x8e8f00b4  lw          $t7, 0xB4($s4)
    ctx->pc = 0x2f09acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2f09b0: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x2f09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
    // 0x2f09b4: 0xae4f000c  sw          $t7, 0xC($s2)
    ctx->pc = 0x2f09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 15));
    // 0x2f09b8: 0x8e8e00b4  lw          $t6, 0xB4($s4)
    ctx->pc = 0x2f09b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2f09bc: 0xe7a00  sll         $t7, $t6, 8
    ctx->pc = 0x2f09bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x2f09c0: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x2f09c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x2f09c4: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2f09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2f09c8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F09C8u;
    SET_GPR_U32(ctx, 31, 0x2F09D0u);
    ctx->pc = 0x2F09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09C8u;
    // 0x2f09cc: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F09C8u, 0x2F09D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09D0u;
label_2f09d0:
    // 0x2f09d0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f09d4: 0x24050d80  addiu       $a1, $zero, 0xD80
    ctx->pc = 0x2f09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3456));
    // 0x2f09d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f09d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09dc: 0x24841680  addiu       $a0, $a0, 0x1680
    ctx->pc = 0x2f09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5760));
    // 0x2f09e0: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2F09E0u;
    SET_GPR_U32(ctx, 31, 0x2F09E8u);
    ctx->pc = 0x2F09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09E0u;
    // 0x2f09e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2F09E0u, 0x2F09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09E8u;
label_2f09e8:
    // 0x2f09e8: 0x8e8f00b4  lw          $t7, 0xB4($s4)
    ctx->pc = 0x2f09e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x2f09ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f09ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09f0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f09f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2f09f4: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x2F09F4u;
    {
        const bool branch_taken_0x2f09f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09F4u;
        // 0x2f09f8: 0xae8f00b4  sw          $t7, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09f4) {
            ctx->pc = 0x2F08F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f08f8;
        }
    }
    ctx->pc = 0x2F09FCu;
    // 0x2f09fc: 0x0  nop
    ctx->pc = 0x2f09fcu;
    // NOP
}
