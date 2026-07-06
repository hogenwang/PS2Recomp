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

// Function: sub_0018A7A0
// Address: 0x18a7a0 - 0x18a8c0
void sub_0018A7A0_0x18a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A7A0_0x18a7a0");
#endif

    switch (ctx->pc) {
        case 0x18a8acu: goto label_18a8ac;
        default: break;
    }

    ctx->pc = 0x18a7a0u;

    // 0x18a7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a7a4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18a7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a7ac: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18a7acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18a7b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A7B0u;
    {
        const bool branch_taken_0x18a7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a7b0) {
            ctx->pc = 0x18A7C0u;
            goto label_18a7c0;
        }
    }
    ctx->pc = 0x18A7B8u;
    // 0x18a7b8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18A7B8u;
    {
        const bool branch_taken_0x18a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7B8u;
        // 0x18a7bc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7b8) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A7C0u;
label_18a7c0:
    // 0x18a7c0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a7c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a7c8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18a7c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18a7cc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A7CCu;
    {
        const bool branch_taken_0x18a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a7cc) {
            ctx->pc = 0x18A7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A7CCu;
            // 0x18a7d0: 0x8c8600dc  lw          $a2, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7F4u;
            goto label_18a7f4;
        }
    }
    ctx->pc = 0x18A7D4u;
    // 0x18a7d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a7d8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18a7dc: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x18a7dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x18a7e0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A7E0u;
    {
        const bool branch_taken_0x18a7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a7e0) {
            ctx->pc = 0x18A7F0u;
            goto label_18a7f0;
        }
    }
    ctx->pc = 0x18A7E8u;
    // 0x18a7e8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18A7E8u;
    {
        const bool branch_taken_0x18a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7E8u;
        // 0x18a7ec: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7e8) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A7F0u;
label_18a7f0:
    // 0x18a7f0: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x18a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_18a7f4:
    // 0x18a7f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18a7f8: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x18a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x18a7fc: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x18a7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x18a800: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18a800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18a804: 0x61082  srl         $v0, $a2, 2
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x18a808: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A808u;
    {
        const bool branch_taken_0x18a808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A808u;
        // 0x18a80c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a808) {
            ctx->pc = 0x18A818u;
            goto label_18a818;
        }
    }
    ctx->pc = 0x18A810u;
    // 0x18a810: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18A810u;
    {
        const bool branch_taken_0x18a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A810u;
        // 0x18a814: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a810) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A818u;
label_18a818:
    // 0x18a818: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x18a81c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18a820: 0x8c67d918  lw          $a3, -0x26E8($v1)
    ctx->pc = 0x18a820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x18a824: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x18a824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x18a828: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x18a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x18a82c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A82Cu;
    {
        const bool branch_taken_0x18a82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a82c) {
            ctx->pc = 0x18A830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A82Cu;
            // 0x18a830: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A83Cu;
            goto label_18a83c;
        }
    }
    ctx->pc = 0x18A834u;
    // 0x18a834: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18A834u;
    {
        const bool branch_taken_0x18a834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A834u;
        // 0x18a838: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a834) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A83Cu;
label_18a83c:
    // 0x18a83c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18a840: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x18a844: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x18a844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x18a848: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18a84c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a850: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18a854: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18a858: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18a858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18a85c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18a860: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x18a860u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18a864: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A864u;
    {
        const bool branch_taken_0x18a864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a864) {
            ctx->pc = 0x18A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A864u;
            // 0x18a868: 0x8c830490  lw          $v1, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A874u;
            goto label_18a874;
        }
    }
    ctx->pc = 0x18A86Cu;
    // 0x18a86c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18A86Cu;
    {
        const bool branch_taken_0x18a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A86Cu;
        // 0x18a870: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a86c) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A874u;
label_18a874:
    // 0x18a874: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x18a874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18a878: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A878u;
    {
        const bool branch_taken_0x18a878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a878) {
            ctx->pc = 0x18A87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A878u;
            // 0x18a87c: 0x8c84048c  lw          $a0, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A888u;
            goto label_18a888;
        }
    }
    ctx->pc = 0x18A880u;
    // 0x18a880: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A880u;
    {
        const bool branch_taken_0x18a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A880u;
        // 0x18a884: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a880) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A888u;
label_18a888:
    // 0x18a888: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18a888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18a88c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x18a88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x18a890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18a890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a894: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A894u;
    {
        const bool branch_taken_0x18a894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a894) {
            ctx->pc = 0x18A898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A894u;
            // 0x18a898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8A4u;
            goto label_18a8a4;
        }
    }
    ctx->pc = 0x18A89Cu;
    // 0x18a89c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A89Cu;
    {
        const bool branch_taken_0x18a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A89Cu;
        // 0x18a8a0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a89c) {
            ctx->pc = 0x18A8ACu;
            goto label_18a8ac;
        }
    }
    ctx->pc = 0x18A8A4u;
label_18a8a4:
    // 0x18a8a4: 0xc06298c  jal         func_18A630
    ctx->pc = 0x18A8A4u;
    SET_GPR_U32(ctx, 31, 0x18A8ACu);
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x18A8A4u, 0x18A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8ACu;
label_18a8ac:
    // 0x18a8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8B0u;
        // 0x18a8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A8B8u;
    // 0x18a8b8: 0x0  nop
    ctx->pc = 0x18a8b8u;
    // NOP
    // 0x18a8bc: 0x0  nop
    ctx->pc = 0x18a8bcu;
    // NOP
    if (ctx->pc == 0x18a8bcu) { ctx->pc = 0x18a8c0u; }
}
